//Create a bitmap then use http://en.radzio.dxp.pl/bitmap_converter/ to generate output
//Make sure the bitmap is n*8 pixels tall (pad white pixels to lower area as needed)
//Otherwise the bitmap bitmap_converter will compress some of the bytes together

/*
    BT_Symbol [7, 14]


           **
           ***
        *  * **
        ** * **
         *****
          ***
          ***
         *****
        ** * **
        *  * **
           ***
           **

*/

const int BT_Symbol_Height = 14;
const int BT_Symbol_Width = 7;
const uint8_t BT_Symbol [] = {
  0x18, 0x30, 0xE0, 0xFF, 0xE6, 0x3C, 0x18, 0x06, 0x03, 0x01, 0x3F, 0x19, 0x0F, 0x06,
};

/*
    WiFi_Symbol [13, 9]

           *******
          *       *
         *  *****  *
        *  *     *  *
          *  ***  *
            *   *

             ***

*/

const int WiFi_Symbol_Height = 9;
const int WiFi_Symbol_Width = 13;
const uint8_t WiFi_Symbol_3 [] = {
  0x08, 0x04, 0x12, 0x09, 0x25, 0x95, 0xD5, 0x95, 0x25, 0x09, 0x12, 0x04, 0x08, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
const uint8_t WiFi_Symbol_2 [] = {
  0x00, 0x00, 0x10, 0x08, 0x24, 0x94, 0xD4, 0x94, 0x24, 0x08, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
const uint8_t WiFi_Symbol_1 [] = {
  0x00, 0x00, 0x00, 0x00, 0x20, 0x90, 0xD0, 0x90, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
const uint8_t WiFi_Symbol_0 [] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/*
    CrossHair [15, 15]



            *******
           *   *   *
          *    *    *
          *    *    *
          *    *    *
        ******* *******
          *    *    *
          *    *    *
          *    *    *
           *   *   *
            *******


*/

const int CrossHair_Height = 15;
const int CrossHair_Width = 15;
const uint8_t CrossHair [] = {
  0x80, 0x80, 0xF0, 0x88, 0x84, 0x84, 0x84, 0x7F, 0x84, 0x84, 0x84, 0x88, 0xF0, 0x80, 0x80, 0x00,
  0x00, 0x07, 0x08, 0x10, 0x10, 0x10, 0x7F, 0x10, 0x10, 0x10, 0x08, 0x07, 0x00, 0x00,
};

/*
    CrossHairDual [15, 15]



            *******
           *   *   *
          *  *****  *
          * *  *  * *
          * *  *  * *
        ******* *******
          * *  *  * *
          * *  *  * *
          *  *****  *
           *   *   *
            *******


*/

const int CrossHairDual_Height = 15;
const int CrossHairDual_Width = 15;
const uint8_t CrossHairDual [] = {
  0x80, 0x80, 0xF0, 0x88, 0xE4, 0x94, 0x94, 0x7F, 0x94, 0x94, 0xE4, 0x88, 0xF0, 0x80, 0x80, 0x00,
  0x00, 0x07, 0x08, 0x13, 0x14, 0x14, 0x7F, 0x14, 0x14, 0x13, 0x08, 0x07, 0x00, 0x00,
};

/*
    SIV_Antenna [12, 13]


         **
         * *
         *  *   *
         *   * *
          *   *
          *    *
           *    *
           **    *
           ****   *
           **  ****
           **
         ******
*/

const int SIV_Antenna_Height = 13;
const int SIV_Antenna_Width = 12;
const uint8_t SIV_Antenna [] = {
  0x00, 0x1E, 0x62, 0x84, 0x08, 0x10, 0x20, 0x50, 0x88, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x1F,
  0x1F, 0x12, 0x12, 0x04, 0x04, 0x05, 0x06, 0x00,
};

/*
    SIV_Antenna_LBand [12, 13]


         **   *
         * * *
         *  *   *
         *   * *
          *   *   *
          *    * *
           *    *
           **    *
           ****   *
           **  ****
           **
         ******
*/

const int SIV_Antenna_LBand_Height = 13;
const int SIV_Antenna_LBand_Width = 12;
const uint8_t SIV_Antenna_LBand [] = {
  0x00, 0x1E, 0x62, 0x84, 0x08, 0x14, 0x22, 0x50, 0x88, 0x40, 0x20, 0x00, 0x00, 0x10, 0x10, 0x1F,
  0x1F, 0x12, 0x12, 0x04, 0x04, 0x05, 0x06, 0x00,
};

/*
    Rover_Fusion [15, 9]

         *********
        *         *
        *    ****  ****
        *    *        *
        *    ***      *
        * ** *     ** *
         *  *******  *
         *  *     *  *
          **       **
*/

const int Rover_Fusion_Height = 9;
const int Rover_Fusion_Width = 15;
const uint8_t Rover_Fusion [] = {
  0x3E, 0xC1, 0x21, 0x21, 0xC1, 0x7D, 0x55, 0x55, 0x45, 0x41, 0xC2, 0x24, 0x24, 0xC4, 0x3C, 0x00,
  0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00,
};

/*
    Rover_Fusion_Empty [15, 9]

         *********
        *         *
        *          ****
        *             *
        *             *
        * **       ** *
         *  *******  *
         *  *     *  *
          **       **
*/

const int Rover_Fusion_Empty_Height = 9;
const int Rover_Fusion_Empty_Width = 15;
const uint8_t Rover_Fusion_Empty [] = {
  0x3E, 0xC1, 0x21, 0x21, 0xC1, 0x41, 0x41, 0x41, 0x41, 0x41, 0xC2, 0x24, 0x24, 0xC4, 0x3C, 0x00,
  0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00,
};

/*
    BaseTemporary [14, 12]

         ****   ***
         *  ****** **
         *  **  **  *
         *** *    * *
         ***  **  ***
         *  * **** **
         *  **  **  *
         *****  *** *
         *   ***   **



*/

const int BaseTemporary_Height = 12;
const int BaseTemporary_Width = 14;
const uint8_t BaseTemporary [] = {
  0x00, 0xFF, 0x99, 0x99, 0xE7, 0xCE, 0x32, 0x32, 0xE7, 0xE7, 0x99, 0x32, 0xFE, 0x00, 0x00, 0x1F,
  0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00,
};

/*
    BaseFixed [14, 12]

         *****  *****
         * * *  * * *
         * * *  * * *
         * * **** * *
         *          *
         *          *
         *          *
         *   ****   *
         *   *  *   *
        *    *  *    *
        *    *  *    *
        ******  ******
*/

const int BaseFixed_Height = 12;
const int BaseFixed_Width = 14;
const uint8_t BaseFixed [] = {
  0x00, 0xFF, 0x01, 0x0F, 0x01, 0x8F, 0x88, 0x88, 0x8F, 0x01, 0x0F, 0x01, 0xFF, 0x00, 0x0E, 0x09,
  0x08, 0x08, 0x08, 0x0F, 0x00, 0x00, 0x0F, 0x08, 0x08, 0x08, 0x09, 0x0E,
};

/*
    Battery_3 [19, 12]

        *****************
        *               *
        * ***  ***  *** *
        * ***  ***  *** ***
        * ***  ***  ***   *
        * ***  ***  ***   *
        * ***  ***  ***   *
        * ***  ***  ***   *
        * ***  ***  *** ***
        * ***  ***  *** *
        *               *
        *****************
*/

const int Battery_3_Height = 12;
const int Battery_3_Width = 19;
const uint8_t Battery_3 [] = {
  0xFF, 0x01, 0xFD, 0xFD, 0xFD, 0x01, 0x01, 0xFD, 0xFD, 0xFD, 0x01, 0x01, 0xFD, 0xFD, 0xFD, 0x01,
  0x0F, 0x08, 0xF8, 0x0F, 0x08, 0x0B, 0x0B, 0x0B, 0x08, 0x08, 0x0B, 0x0B, 0x0B, 0x08, 0x08, 0x0B,
  0x0B, 0x0B, 0x08, 0x0F, 0x01, 0x01,
};

/*
    Battery_2 [19, 12]

        *****************
        *               *
        * ***  ***      *
        * ***  ***      ***
        * ***  ***        *
        * ***  ***        *
        * ***  ***        *
        * ***  ***        *
        * ***  ***      ***
        * ***  ***      *
        *               *
        *****************
*/

const int Battery_2_Height = 12;
const int Battery_2_Width = 19;
const uint8_t Battery_2 [] = {
  0xFF, 0x01, 0xFD, 0xFD, 0xFD, 0x01, 0x01, 0xFD, 0xFD, 0xFD, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x0F, 0x08, 0xF8, 0x0F, 0x08, 0x0B, 0x0B, 0x0B, 0x08, 0x08, 0x0B, 0x0B, 0x0B, 0x08, 0x08, 0x08,
  0x08, 0x08, 0x08, 0x0F, 0x01, 0x01,
};

/*
    Battery_1 [19, 12]

        *****************
        *               *
        * ***           *
        * ***           ***
        * ***             *
        * ***             *
        * ***             *
        * ***             *
        * ***           ***
        * ***           *
        *               *
        *****************
*/

const int Battery_1_Height = 12;
const int Battery_1_Width = 19;
const uint8_t Battery_1 [] = {
  0xFF, 0x01, 0xFD, 0xFD, 0xFD, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x0F, 0x08, 0xF8, 0x0F, 0x08, 0x0B, 0x0B, 0x0B, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
  0x08, 0x08, 0x08, 0x0F, 0x01, 0x01,
};

/*
    Battery_0 [19, 12]

        *****************
        *               *
        *               *
        *               ***
        *                 *
        *                 *
        *                 *
        *                 *
        *               ***
        *               *
        *               *
        *****************
*/

const int Battery_0_Height = 12;
const int Battery_0_Width = 19;
const uint8_t Battery_0 [] = {
  0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x0F, 0x08, 0xF8, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
  0x08, 0x08, 0x08, 0x0F, 0x01, 0x01,
};

/*
    Logging_3 [9, 12]

        *******
        *     **
        *      **
        *       *
        * ***** *
        *       *
        * ***** *
        *       *
        * ***** *
        *       *
        *       *
        *********
*/

const int Logging_3_Height = 12;
const int Logging_3_Width = 9;
const uint8_t Logging_3 [] = {
  0xFF, 0x01, 0x51, 0x51, 0x51, 0x51, 0x53, 0x06, 0xFC, 0x0F, 0x08, 0x09, 0x09, 0x09, 0x09, 0x09,
  0x08, 0x0F,
};

/*
    Logging_2 [9, 12]

        *******
        *     **
        *      **
        *       *
        *       *
        *       *
        * ***** *
        *       *
        * ***** *
        *       *
        *       *
        *********
*/

const int Logging_2_Height = 12;
const int Logging_2_Width = 9;
const uint8_t Logging_2 [] = {
  0xFF, 0x01, 0x41, 0x41, 0x41, 0x41, 0x43, 0x06, 0xFC, 0x0F, 0x08, 0x09, 0x09, 0x09, 0x09, 0x09,
  0x08, 0x0F,
};

/*
    Logging_1 [9, 12]

        *******
        *     **
        *      **
        *       *
        *       *
        *       *
        *       *
        *       *
        * ***** *
        *       *
        *       *
        *********
*/

const int Logging_1_Height = 12;
const int Logging_1_Width = 9;
const uint8_t Logging_1 [] = {
  0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x06, 0xFC, 0x0F, 0x08, 0x09, 0x09, 0x09, 0x09, 0x09,
  0x08, 0x0F,
};

/*
    Logging_0 [9, 12]

        *******
        *     **
        *      **
        *       *
        *       *
        *       *
        *       *
        *       *
        *       *
        *       *
        *       *
        *********
*/

const int Logging_0_Height = 12;
const int Logging_0_Width = 9;
const uint8_t Logging_0 [] = {
  0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x06, 0xFC, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
  0x08, 0x0F,
};

const uint8_t Logging_PPP_3 [] = {
  0xFF, 0x01, 0xF9, 0x49, 0x49, 0x49, 0x33, 0x06, 0xFC, 0x0F, 0x08, 0x0B, 0x08, 0x08, 0x08, 0x08,
  0x08, 0x0F,
};
const uint8_t Logging_PPP_2 [] = {
  0xFF, 0x01, 0xF9, 0x41, 0x41, 0x41, 0x03, 0x06, 0xFC, 0x0F, 0x08, 0x0B, 0x08, 0x08, 0x08, 0x08,
  0x08, 0x0F,
};
const uint8_t Logging_PPP_1 [] = {
  0xFF, 0x01, 0xC1, 0x01, 0x01, 0x01, 0x03, 0x06, 0xFC, 0x0F, 0x08, 0x0B, 0x08, 0x08, 0x08, 0x08,
  0x08, 0x0F,
};

const uint8_t Logging_Custom_3 [] = {
  0xFF, 0x01, 0xF1, 0x09, 0x09, 0x09, 0x13, 0x06, 0xFC, 0x0F, 0x08, 0x09, 0x0A, 0x0A, 0x0A, 0x09,
  0x08, 0x0F,
};
const uint8_t Logging_Custom_2 [] = {
  0xFF, 0x01, 0xF1, 0x01, 0x01, 0x01, 0x03, 0x06, 0xFC, 0x0F, 0x08, 0x09, 0x0A, 0x0A, 0x0A, 0x09,
  0x08, 0x0F,
};
const uint8_t Logging_Custom_1 [] = {
  0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x06, 0xFC, 0x0F, 0x08, 0x09, 0x0A, 0x0A, 0x0A, 0x09,
  0x08, 0x0F,
};



const int DynamicModel_Height = 12;
const int DynamicModel_Width = 15;

/*
    DynamicModel_1_Portable [15, 12]

               **
               **
            ******
           *      *
         * * **** * *
         * * **** * *
         * *      * *
         * *      * *
         * *      * *
         * *      * *
           *      *
            ******
*/

const uint8_t DynamicModel_1_Portable [] = {
  0x00, 0xF0, 0x00, 0xF8, 0x04, 0x34, 0x34, 0x37, 0x37, 0x04, 0xF8, 0x00, 0xF0, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x07, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x07, 0x00, 0x03, 0x00, 0x00,
};

/*
    DynamicModel_2_Stationary [15, 12]


            *******
             *****
              ***

              ***
             *****
            ** * **
           **  *  **
          **   *   **
         **    *    **

*/

const uint8_t DynamicModel_2_Stationary [] = {
  0x00, 0x00, 0x00, 0x00, 0x82, 0xC6, 0x6E, 0xFE, 0x6E, 0xC6, 0x82, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x04, 0x06, 0x03, 0x01, 0x00, 0x00, 0x07, 0x00, 0x00, 0x01, 0x03, 0x06, 0x04, 0x00,
};

/*
    DynamicModel_3_Pedestrian [15, 12]

              ***
             *   *
              * *

             *****
            ** * **
               *  *
              ***
             ** **
            **   *
           **    **

*/

const uint8_t DynamicModel_3_Pedestrian [] = {
  0x00, 0x00, 0x00, 0x00, 0x20, 0x32, 0x95, 0xF9, 0x95, 0x32, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x04, 0x06, 0x03, 0x01, 0x00, 0x01, 0x07, 0x04, 0x00, 0x00, 0x00, 0x00,
};

/*
    DynamicModel_4_Automotive [15, 12]



         *********
        *         *
        *          ****
        *             *
        * **       ** *
         *  *******  *
         *  *     *  *
          **       **


*/

const uint8_t DynamicModel_4_Automotive [] = {
  0x78, 0x84, 0x44, 0x44, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x88, 0x50, 0x50, 0x90, 0x70, 0x00,
  0x01, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x01, 0x00,
};

/*
    DynamicModel_5_Sea [15, 12]



           ***
           * *
           * *
         *************
         **         **
          *      ** *
          *         *
          **       **
           *********

*/

const uint8_t DynamicModel_5_Sea [] = {
  0x00, 0x60, 0xE0, 0x3C, 0x26, 0x3C, 0x20, 0x20, 0x20, 0xA0, 0xA0, 0x20, 0xE0, 0x60, 0x00, 0x00,
  0x00, 0x03, 0x06, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x06, 0x03, 0x00, 0x00,
};

/*
    DynamicModel_6_Airborne1g [15, 12]



         **
         ***********
         * *       **
         * *     *  **
         * *         *
         * *  ***   **
         ****** *****
              * *
              * *

*/

const uint8_t DynamicModel_6_Airborne1g [] = {
  0x00, 0xFE, 0x0C, 0xF8, 0x08, 0x08, 0x88, 0x88, 0x88, 0x28, 0x08, 0x18, 0xB0, 0xE0, 0x00, 0x00,
  0x01, 0x01, 0x01, 0x01, 0x01, 0x07, 0x08, 0x07, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00,
};

/*
    DynamicModel_7_Airborne2g [15, 12]



         **
         ***********
         * *       **
         * *   * *  **
         * *         *
         * *  ***   **
         ****** *****
              * *
              * *

*/

const uint8_t DynamicModel_7_Airborne2g [] = {
  0x00, 0xFE, 0x0C, 0xF8, 0x08, 0x08, 0x88, 0xA8, 0x88, 0x28, 0x08, 0x18, 0xB0, 0xE0, 0x00, 0x00,
  0x01, 0x01, 0x01, 0x01, 0x01, 0x07, 0x08, 0x07, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00,
};

/*
    DynamicModel_8_Airborne4g [15, 12]



         **
         ***********
         * *       **
         * * * * *  **
         * *         *
         * *  ***   **
         ****** *****
              * *
              * *

*/

const uint8_t DynamicModel_8_Airborne4g [] = {
  0x00, 0xFE, 0x0C, 0xF8, 0x08, 0x28, 0x88, 0xA8, 0x88, 0x28, 0x08, 0x18, 0xB0, 0xE0, 0x00, 0x00,
  0x01, 0x01, 0x01, 0x01, 0x01, 0x07, 0x08, 0x07, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00,
};

/*
    DynamicModel_9_Wrist [15, 12]

              ***
              ***
              ***
             *****
            *     *
           *       *
           *  ***  *
           *       *
            *     *
             *****
              ***
              ***
*/

const uint8_t DynamicModel_9_Wrist [] = {
  0x00, 0x00, 0x00, 0xE0, 0x10, 0x08, 0x4F, 0x4F, 0x4F, 0x08, 0x10, 0xE0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x01, 0x02, 0x1E, 0x1E, 0x1E, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00,
};

/*
    DynamicModel_10_Bike [15, 12]



                   **
                  ***
           ***    *
             *   *
          **  ***  **
         *  *******  *
         *  *     *  *
          **       **


*/

const uint8_t DynamicModel_10_Bike [] = {
  0x00, 0x80, 0x40, 0x50, 0x90, 0xB0, 0xC0, 0xC0, 0xC0, 0xA0, 0x98, 0x4C, 0x4C, 0x80, 0x00, 0x00,
  0x01, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x01, 0x00,
};

/*
    DownloadArrow [8, 9]

           **
           **
           **
           **
           **
        ** ** **
         ******
          ****
           **
*/

const int DownloadArrow_Height = 9;
const int DownloadArrow_Width = 8;
const uint8_t DownloadArrow [] = {
  0x20, 0x60, 0xC0, 0xFF, 0xFF, 0xC0, 0x60, 0x20, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00
};

/*
    UploadArrow [8, 9]

           **
          ****
         ******
        ** ** **
           **
           **
           **
           **
           **
*/

const int UploadArrow_Height = 9;
const int UploadArrow_Width = 8;
const uint8_t UploadArrow [] = {
  0x08, 0x0C, 0x06, 0xFF, 0xFF, 0x06, 0x0C, 0x08, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00
};

/*
    logoSparkFun [64, 48]

                      1         2         3         4         5         6
             1234567890123456789012345678901234567890123456789012345678901234
            .----------------------------------------------------------------.
        0x01|                            **********                          |
        0x02|                           *************                        |
        0x04|                          **************                        |
        0x08|                         ***********                            |
        0x10|                         **********                             |
        0x20|                        ***********                             |
        0x40|                        ***********                             |
        0x80|                        ***********      **                     |
        0x01|                        ************      ***                   |
        0x02|                         *************   ****                   |
        0x04|                         *********************                  |
        0x08|                          *********************                 |
        0x10|                           ********************                 |
        0x20|                           *********************                |
        0x40|                             *******************                |
        0x80|                  *******    *******************                |
        0x01|                 *******      ******************                |
        0x02|                *******        *****************                |
        0x04|               ********       ******************                |
        0x08|               ********       ******************                |
        0x10|               *********     *******************                |
        0x20|               *********************************                |
        0x40|               *********************************                |
        0x80|               *********************************                |
        0x01|               *********************************                |
        0x02|               ********************************                 |
        0x04|               ********************************                 |
        0x08|               *******************************                  |
        0x10|               *******************************                  |
        0x20|               ******************************                   |
        0x40|               *****************************                    |
        0x80|               ****************************                     |
        0x01|               ***************************                      |
        0x02|               **************************                       |
        0x04|               ************************                         |
        0x08|               *********************                            |
        0x10|               *************                                    |
        0x20|               ***********                                      |
        0x40|               **********                                       |
        0x80|               *********                                        |
        0x01|               ********                                         |
        0x02|               *******                                          |
        0x04|               ******                                           |
        0x08|               *****                                            |
        0x10|               ****                                             |
        0x20|               ***                                              |
        0x40|               **                                               |
        0x80|               *                                                |
            '----------------------------------------------------------------'
*/

//SparkFun Electronics LOGO
const int logoSparkFun_Height = 48;
const int logoSparkFun_Width = 64;
const uint8_t logoSparkFun [] = {
  // ROW0, BYTE0 to BYTE63
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xF8, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0x0F, 0x07, 0x07, 0x06, 0x06, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

  // ROW1, BYTE64 to BYTE127
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x07, 0x0F, 0x3F, 0x3F, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFC, 0xFC, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFC, 0xF8, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

  // ROW2, BYTE128 to BYTE191
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC,
  0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF1, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xF0, 0xFD, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

  // ROW3, BYTE192 to BYTE255
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x1F, 0x07, 0x01,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

  // ROW4, BYTE256 to BYTE319
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x1F, 0x1F, 0x0F, 0x0F, 0x0F, 0x0F,
  0x0F, 0x0F, 0x0F, 0x0F, 0x07, 0x07, 0x07, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

  // ROW5, BYTE320 to BYTE383
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
  0x7F, 0x3F, 0x1F, 0x0F, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const int ESPNOW_Symbol_Height = 13;
const int ESPNOW_Symbol_Width = 8;
const uint8_t ESPNOW_Symbol_3 [] = {
  0xE0, 0x40, 0x10, 0xE4, 0x09, 0xF2, 0x04, 0xF8, 0x00, 0x00, 0x01, 0x04, 0x12, 0x09, 0x04, 0x03
};
const uint8_t ESPNOW_Symbol_2 [] = {
  0xE0, 0x40, 0x10, 0xE4, 0x08, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x02, 0x01, 0x00, 0x00
};
const uint8_t ESPNOW_Symbol_1 [] = {
  0xE0, 0x40, 0x10, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00
};
const uint8_t ESPNOW_Symbol_0 [] = {
  0xE0, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
