#ifndef _RND_ICONS_H_
#define _RND_ICONS_H_
/**
 * @file icons.h
 * @author Giometric (https://github.com/Giometric)
 * @brief
 * @date 2023-10-25
 *
 * Brought in from the OoT3DR libraries.
 */
#define ICON_WIDTH 8
#define ICON_HEIGHT 8

static const unsigned char rIcons[][ICON_HEIGHT] = {{
                                                        /* Small Key */
                                                        0x18, /* 00011000 */
                                                        0x24, /* 00100100 */
                                                        0x24, /* 00100100 */
                                                        0x18, /* 00011000 */
                                                        0x08, /* 00001000 */
                                                        0x18, /* 00011000 */
                                                        0x08, /* 00001000 */
                                                        0x18, /* 00011000 */
                                                    },
                                                    {
                                                        /* Boss Key */
                                                        0xDB, /* 11011011 */
                                                        0x66, /* 01100110 */
                                                        0x66, /* 01100110 */
                                                        0x3C, /* 00111100 */
                                                        0x08, /* 00001000 */
                                                        0x38, /* 00111000 */
                                                        0x08, /* 00001000 */
                                                        0x38, /* 00111000 */
                                                    },
                                                    {
                                                        /* Triforce */
                                                        0x00, /* 00000000 */
                                                        0x08, /* 00001000 */
                                                        0x1C, /* 00011100 */
                                                        0x1C, /* 00011100 */
                                                        0x22, /* 00100010 */
                                                        0x77, /* 01110111 */
                                                        0x7F, /* 01111111 */
                                                        0x00, /* 00000000 */
                                                    },
                                                    {
                                                        /* Foolforce */
                                                        0x00, /* 00000000 */
                                                        0x7F, /* 01111111 */
                                                        0x77, /* 01110111 */
                                                        0x22, /* 00100010 */
                                                        0x1C, /* 00011100 */
                                                        0x1C, /* 00011100 */
                                                        0x08, /* 00001000 */
                                                        0x00, /* 00000000 */
                                                    },
                                                    {
                                                        /* Check */
                                                        0x01, /* 00000001 */
                                                        0x03, /* 00000011 */
                                                        0x06, /* 00000110 */
                                                        0x0C, /* 00001100 */
                                                        0x1B, /* 11011000 */
                                                        0x70, /* 01110000 */
                                                        0x20, /* 00100000 */
                                                        0x00, /* 00000000 */
                                                    },
                                                    {
                                                        /* No */
                                                        0x1C, /* 00011100 */
                                                        0x22, /* 00100010 */
                                                        0x45, /* 01000101 */
                                                        0x49, /* 01001001 */
                                                        0x51, /* 01010001 */
                                                        0x22, /* 00100010 */
                                                        0x1C, /* 00011100 */
                                                        0x00, /* 00000000 */
                                                    },
                                                    {
                                                        /* Vanilla */
                                                        0xC6, /* 11000110 */
                                                        0xC6, /* 11000110 */
                                                        0xC6, /* 11000110 */
                                                        0xC6, /* 11000110 */
                                                        0x6C, /* 01101100 */
                                                        0x38, /* 00111000 */
                                                        0x10, /* 00010000 */
                                                        0x00, /* 00000000 */
                                                    },
                                                    {
                                                        /* MasterQuest */
                                                        0x88, /* 10001000 */
                                                        0xD8, /* 11011000 */
                                                        0xA8, /* 10101000 */
                                                        0x88, /* 10001000 */
                                                        0x8C, /* 10001100 */
                                                        0x12, /* 00010010 */
                                                        0x16, /* 00010110 */
                                                        0x0F, /* 00001111 */
                                                    },
                                                    {
                                                        /* Map */
                                                        0x0E, /* 00001110 */
                                                        0x5F, /* 01011111 */
                                                        0xD3, /* 11010011 */
                                                        0xDF, /* 11011111 */
                                                        0xD9, /* 11011001 */
                                                        0xDF, /* 11011111 */
                                                        0xD1, /* 11010001 */
                                                        0x60, /* 01100000 */
                                                    },
                                                    {
                                                        /* Compass */
                                                        0x1C, /* 00011100 */
                                                        0x22, /* 00100010 */
                                                        0x49, /* 01001001 */
                                                        0x4D, /* 01001101 */
                                                        0x63, /* 01100011 */
                                                        0x3E, /* 00111110 */
                                                        0x1C, /* 00011100 */
                                                        0x00, /* 00000000 */
                                                    },
                                                    {
                                                        /* Button_R */
                                                        0x00, /* 00000000 */
                                                        0xfc, /* 11111100 */
                                                        0xce, /* 11001110 */
                                                        0xd7, /* 11010111 */
                                                        0xcf, /* 11001111 */
                                                        0xd7, /* 11010111 */
                                                        0xff, /* 11111111 */
                                                        0x00, /* 00000000 */
                                                    },
                                                    {
                                                        /* Button_R_Wide_1 */
                                                        0xff, /* 11111111 */
                                                        0xff, /* 11111111 */
                                                        0xfc, /* 11111100 */
                                                        0xfd, /* 11111101 */
                                                        0xfc, /* 11111100 */
                                                        0xfd, /* 11111101 */
                                                        0xff, /* 11111111 */
                                                        0xff, /* 11111111 */
                                                    },
                                                    {
                                                        /* Button_R_Wide_2 */
                                                        0xe0, /* 11100000 */
                                                        0xf8, /* 11111000 */
                                                        0xfc, /* 11111100 */
                                                        0x7e, /* 01111110 */
                                                        0xfe, /* 11111110 */
                                                        0x7f, /* 01111111 */
                                                        0xff, /* 11111111 */
                                                        0xff, /* 11111111 */
                                                    },
                                                    {
                                                        /* Button_L */
                                                        0x00, /* 00000000 */
                                                        0x3f, /* 00111111 */
                                                        0x6f, /* 01101111 */
                                                        0xef, /* 11101111 */
                                                        0xef, /* 11101111 */
                                                        0xe3, /* 11100011 */
                                                        0xff, /* 11111111 */
                                                        0x00, /* 00000000 */
                                                    },
                                                    {
                                                        /* Button_L_Wide_1 */
                                                        0x07, /* 00000111 */
                                                        0x1f, /* 00011111 */
                                                        0x3e, /* 00111110 */
                                                        0x7e, /* 01111110 */
                                                        0x7e, /* 01111110 */
                                                        0xfe, /* 11111110 */
                                                        0xff, /* 11111111 */
                                                        0xff, /* 11111111 */
                                                    },
                                                    {
                                                        /* Button_L_Wide_2 */
                                                        0xff, /* 11111111 */
                                                        0xff, /* 11111111 */
                                                        0xff, /* 11111111 */
                                                        0xff, /* 11111111 */
                                                        0xff, /* 11111111 */
                                                        0x3f, /* 00111111 */
                                                        0xff, /* 11111111 */
                                                        0xff, /* 11111111 */
                                                    },
                                                    {
                                                        /* Button_A */
                                                        0x38, /* 00111000 */
                                                        0x6c, /* 01101100 */
                                                        0xd6, /* 11010110 */
                                                        0xc6, /* 11000110 */
                                                        0xd6, /* 11010110 */
                                                        0x54, /* 01010100 */
                                                        0x38, /* 00111000 */
                                                        0x00, /* 00000000 */
                                                    },
                                                    {
                                                        /* Button_B */
                                                        0x38, /* 00111000 */
                                                        0x4c, /* 01001100 */
                                                        0xd6, /* 11010110 */
                                                        0xce, /* 11001110 */
                                                        0xd6, /* 11010110 */
                                                        0x4c, /* 01001100 */
                                                        0x38, /* 00111000 */
                                                        0x00, /* 00000000 */
                                                    },
                                                    {
                                                        /* Button_X */
                                                        0x38, /* 00111000 */
                                                        0x54, /* 01010100 */
                                                        0xd6, /* 11010110 */
                                                        0xee, /* 11101110 */
                                                        0xd6, /* 11010110 */
                                                        0x54, /* 01010100 */
                                                        0x38, /* 00111000 */
                                                        0x00, /* 00000000 */
                                                    },
                                                    {
                                                        /* Button_Y */
                                                        0x38, /* 00111000 */
                                                        0x54, /* 01010100 */
                                                        0xd6, /* 11010110 */
                                                        0xee, /* 11101110 */
                                                        0xee, /* 11101110 */
                                                        0x6c, /* 01101100 */
                                                        0x38, /* 00111000 */
                                                        0x00, /* 00000000 */
                                                    },
                                                    {
                                                        /* Button_DPad */
                                                        0x38, /* 00111000 */
                                                        0x38, /* 00111000 */
                                                        0xd6, /* 11010110 */
                                                        0xee, /* 11101110 */
                                                        0xd6, /* 11010110 */
                                                        0x38, /* 00111000 */
                                                        0x38, /* 00111000 */
                                                        0x00, /* 00000000 */
                                                    },
                                                    {
                                                        /* Button_Face */
                                                        0x30, /* 00110000 */
                                                        0x30, /* 00110000 */
                                                        0x06, /* 00000110 */
                                                        0xc6, /* 11000110 */
                                                        0xc0, /* 11000000 */
                                                        0x18, /* 00011000 */
                                                        0x18, /* 00011000 */
                                                        0x00, /* 00000000 */
                                                    },
                                                    {
                                                        /* Button_FaceH */
                                                        0x00, /* 00000000 */
                                                        0x00, /* 00000000 */
                                                        0x06, /* 00000110 */
                                                        0xc6, /* 11000110 */
                                                        0xc0, /* 11000000 */
                                                        0x00, /* 00000000 */
                                                        0x00, /* 00000000 */
                                                        0x00, /* 00000000 */
                                                    },
                                                    {
                                                        /* Button_FaceV */
                                                        0x30, /* 00110000 */
                                                        0x30, /* 00110000 */
                                                        0x00, /* 00000000 */
                                                        0x00, /* 00000000 */
                                                        0x00, /* 00000000 */
                                                        0x18, /* 00011000 */
                                                        0x18, /* 00011000 */
                                                        0x00, /* 00000000 */
                                                    },
                                                    {
                                                        /* Button_Joystick */
                                                        0x38, /* 00111000 */
                                                        0x44, /* 01000100 */
                                                        0xa2, /* 10100010 */
                                                        0xa2, /* 10100010 */
                                                        0xba, /* 10111010 */
                                                        0x44, /* 01000100 */
                                                        0x38, /* 00111000 */
                                                        0x00, /* 00000000 */
                                                    }};
#endif