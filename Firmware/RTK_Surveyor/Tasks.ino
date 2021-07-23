//High frequency tasks made by createTask()
//And any low frequency tasks that are called by Ticker

//If the phone has any new data (NTRIP RTCM, etc), read it in over Bluetooth and pass along to ZED
//Task for writing to the GNSS receiver
void F9PSerialWriteTask(void *e)
{
  while (true)
  {
#ifdef COMPILE_BT
    //Receive RTCM corrections or UBX config messages over bluetooth and pass along to ZED
    while (SerialBT.available())
    {
      taskYIELD();
      if (inTestMode == false)
      {
        //Pass bytes to GNSS receiver
        auto s = SerialBT.readBytes(wBuffer, SERIAL_SIZE_RX);
        serialGNSS.write(wBuffer, s);

        if (settings.enableTaskReports == true)
          Serial.printf("SerialWriteTask High watermark: %d\n\r",  uxTaskGetStackHighWaterMark(NULL));
      }
      else
      {
        char incoming = SerialBT.read();
        Serial.printf("I heard: %c\n", incoming);
        incomingBTTest = incoming; //Displayed during system test
      }
    }
#endif 

    taskYIELD();
  }
}

//If the ZED has any new NMEA data, pass it out over Bluetooth
//Task for reading data from the GNSS receiver.
void F9PSerialReadTask(void *e)
{
  while (true)
  {
    while (serialGNSS.available())
    {
      auto s = serialGNSS.readBytes(rBuffer, SERIAL_SIZE_RX);

      //If we are actively survey-in then do not pass NMEA data from ZED to phone
      if (systemState == STATE_BASE_TEMP_SETTLE || systemState == STATE_BASE_TEMP_SURVEY_STARTED)
      {
        //Do nothing
        taskYIELD();
      }
#ifdef COMPILE_BT
      else if (SerialBT.connected())
      {
        if (SerialBT.isCongested() == false)
        {
          SerialBT.write(rBuffer, s); //Push new data to BT SPP
        }
        else if (settings.throttleDuringSPPCongestion == false)
        {
          SerialBT.write(rBuffer, s); //Push new data to SPP regardless of congestion
        }
        else
        {
          //Don't push data to BT SPP if there is congestion to prevent heap hits.
          log_d("Dropped SPP Bytes: %d", s);
        }
      }
#endif

      if (settings.enableTaskReports == true)
        Serial.printf("SerialReadTask High watermark: %d\n\r",  uxTaskGetStackHighWaterMark(NULL));

      //If user wants to log, record to SD
      if (online.logging == true)
      {
        //Check if we are inside the max time window for logging
        if ((systemTime_minutes - startLogTime_minutes) < settings.maxLogTime_minutes)
        {
          //Attempt to write to file system. This avoids collisions with file writing from other functions like recordSystemSettingsToFile()
          if (xSemaphoreTake(xFATSemaphore, fatSemaphore_shortWait_ms) == pdPASS)
          {
            ubxFile.write(rBuffer, s);

            //Force file sync every 5000ms
            if (millis() - lastUBXLogSyncTime > 5000)
            {
              if (productVariant == RTK_SURVEYOR)
                digitalWrite(pin_baseStatusLED, !digitalRead(pin_baseStatusLED)); //Blink LED to indicate logging activity

              long startWriteTime = micros();
              taskYIELD();
              ubxFile.sync();
              taskYIELD();
              long stopWriteTime = micros();
              totalWriteTime += stopWriteTime - startWriteTime; //Used to calculate overall write speed

              if (productVariant == RTK_SURVEYOR)
                digitalWrite(pin_baseStatusLED, !digitalRead(pin_baseStatusLED)); //Return LED to previous state

              updateDataFileAccess(&ubxFile); // Update the file access time & date

              lastUBXLogSyncTime = millis();
            }

            xSemaphoreGive(xFATSemaphore);
          } //End xFATSemaphore
          else
          {
            log_d("F9SerialRead: Semaphore failed to yield");
          }
        } //End maxLogTime
      } //End logging

      taskYIELD();

    } //End Serial.available()

    taskYIELD();
  }
}

//Assign UART2 interrupts to the current core. See: https://github.com/espressif/arduino-esp32/issues/3386
void startUART2Task( void *pvParameters )
{
  serialGNSS.begin(settings.dataPortBaud); //UART2 on pins 16/17 for SPP. The ZED-F9P will be configured to output NMEA over its UART1 at the same rate.
  serialGNSS.setRxBufferSize(SERIAL_SIZE_RX);
  serialGNSS.setTimeout(50);

  uart2Started = true;

  vTaskDelete( NULL ); //Delete task once it has run once
}

//Control BT status LED according to bluetoothState
void updateBTled()
{
  if (productVariant == RTK_SURVEYOR)
  {
    if (radioState == BT_ON_NOCONNECTION)
      digitalWrite(pin_bluetoothStatusLED, !digitalRead(pin_bluetoothStatusLED));
    else if (radioState == BT_CONNECTED)
      digitalWrite(pin_bluetoothStatusLED, HIGH);
    else
      digitalWrite(pin_bluetoothStatusLED, LOW);
  }
}