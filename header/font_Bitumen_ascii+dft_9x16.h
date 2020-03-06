/* File generated by pnm2font                          */
/* http://bax.comlab.uni-rostock.de                    */
/*                                                     */

#ifndef PROGMEM
#define PROGMEM
#endif

extern const unsigned char PROGMEM font_image_9_16[1800];
extern const Bax_font font_9_16;

#ifdef FONT_MAIN
/* font image width 900 height 16 */
/* attention: characters in row-by-row order, first    */
/* pixel is MSB of first byte (other implementations   */
/* typically use vertical strips of 8 pixels).         */
#ifdef BAX_FONT
/* verify min/max (first two entries) before use! */
const Bax_font font_9_16 PROGMEM = {
 32,131,18,9,16,font_image_9_16,(0) };
#ifndef DEF_FONT
#define DEF_FONT &font_9_16
#endif /* DEF_FONT */
#else /* BAX_FONT */
#define FONT_STRIDE 18
#define FONT_WIDTH  9
#define FONT_HEIGHT 16
#define FONT_MIN    32
#define FONT_MAX    131
#define FONT_IMAGE  font_image_9_16
#endif
const unsigned char PROGMEM font_image_9_16[1800] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x06,0x03,0x01,0x80,0xc0,0x60,0x30,0x18,0x0c,0x00,0x00,0x01,0x80,0xc0,0x00,0x00,0x00,
0x66,0x33,0x19,0x8c,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x19,0x8c,0xc6,0x67,0xfd,0x98,0xcc,0xff,0xb3,0x19,0x8c,0xc0,0x00,0x00,0x00,0x00,
0x18,0x0c,0x1f,0x98,0x6c,0x36,0x01,0xe0,0x3c,0x03,0x01,0xb0,0xcf,0xc1,0x80,0xc0,0x00,0x00,
0x00,0x00,0x1c,0x1b,0x0d,0x83,0x98,0x30,0x60,0xce,0x0d,0x86,0xc1,0xc0,0x00,0x00,0x00,0x00,
0x00,0x00,0x1e,0x19,0x8c,0xc6,0x61,0xe0,0x60,0x7b,0x67,0x33,0x19,0xc7,0xb0,0x00,0x00,0x00,
0x18,0x0c,0x03,0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x06,0x06,0x03,0x03,0x01,0x80,0xc0,0x60,0x30,0x18,0x06,0x03,0x00,0xc0,0x00,0x00,0x00,
0x00,0x18,0x06,0x03,0x00,0xc0,0x60,0x30,0x18,0x0c,0x06,0x06,0x03,0x03,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x04,0x43,0x60,0xe1,0xfc,0x38,0x36,0x11,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x03,0x01,0x80,0xc3,0xfc,0x30,0x18,0x0c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x80,0xc0,0xc0,0x60,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x80,0xc0,0x00,0x00,0x00,
0x03,0x01,0x81,0x80,0xc0,0xc0,0x60,0x60,0x30,0x30,0x18,0x18,0x0c,0x0c,0x06,0x00,0x00,0x00,
0x00,0x1e,0x19,0x8c,0xcc,0x36,0x1b,0x0d,0x86,0xc3,0x61,0x99,0x8c,0xc3,0xc0,0x00,0x00,0x00,
0x00,0x02,0x03,0x03,0x80,0xc0,0x60,0x30,0x18,0x0c,0x06,0x03,0x01,0x80,0xc0,0x00,0x00,0x00,
0x00,0x3f,0x30,0xd8,0x6c,0x30,0x18,0x18,0x38,0x30,0x30,0x30,0x18,0x0f,0xf0,0x00,0x00,0x00,
0x00,0x7f,0x01,0x80,0xc0,0xc0,0xc0,0x18,0x06,0x03,0x01,0x80,0xd8,0xc7,0xc0,0x00,0x00,0x00,
0x00,0x07,0x07,0x83,0xc3,0x61,0xb1,0x98,0xcc,0xc6,0x7f,0x81,0x80,0xc0,0x60,0x00,0x00,0x00,
0x00,0x7f,0xb0,0x18,0x0c,0x06,0xe3,0x98,0x06,0x03,0x01,0x80,0xd8,0xc7,0xc0,0x00,0x00,0x00,
0x00,0x0e,0x0c,0x0c,0x06,0x06,0xe3,0x99,0x86,0xc3,0x61,0xb0,0xcc,0xc3,0xc0,0x00,0x00,0x00,
0x00,0x7f,0x80,0xc0,0x60,0x60,0x30,0x18,0x18,0x0c,0x06,0x06,0x03,0x01,0x80,0x00,0x00,0x00,
0x00,0x1e,0x19,0x8c,0xc6,0x61,0xe1,0x99,0x86,0xc3,0x61,0xb0,0xcc,0xc3,0xc0,0x00,0x00,0x00,
0x00,0x1e,0x19,0x98,0x6c,0x36,0x1b,0x0c,0xce,0x3b,0x03,0x01,0x81,0x87,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xc0,0x60,0x00,0x00,0x00,0x06,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x06,0x00,0x01,0x80,0xc0,0xc0,0x60,0x00,
0x00,0x00,0x00,0x00,0x00,0x10,0x38,0x70,0xe0,0x1c,0x03,0x80,0x40,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x03,0xf8,0x00,0x00,0x7f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x04,0x03,0x80,0x70,0x0e,0x1c,0x38,0x10,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x1f,0x18,0xcc,0x66,0x30,0x30,0x30,0x30,0x18,0x00,0x00,0x03,0x01,0x80,0x00,0x00,0x00,
0x00,0x00,0x0f,0x0c,0xcc,0x36,0x7b,0x6d,0xb6,0xce,0x60,0x18,0x07,0x80,0x00,0x00,0x00,0x00,
0x00,0x0c,0x06,0x07,0x86,0x63,0x31,0x99,0x86,0xff,0x61,0xb0,0xd8,0x6c,0x30,0x00,0x00,0x00,
0x00,0x7c,0x33,0x18,0xcc,0x66,0x63,0xf1,0x8c,0xc3,0x61,0xb0,0xd8,0xcf,0xc0,0x00,0x00,0x00,
0x00,0x0f,0x0c,0xcc,0x06,0x06,0x03,0x01,0x80,0xc0,0x30,0x18,0x06,0x61,0xe0,0x00,0x00,0x00,
0x00,0x7c,0x33,0x18,0xcc,0x66,0x1b,0x0d,0x86,0xc3,0x63,0x31,0x99,0x8f,0x80,0x00,0x00,0x00,
0x00,0x7f,0xb0,0x18,0x0c,0x06,0x03,0xf1,0x80,0xc0,0x60,0x30,0x18,0x0f,0xf0,0x00,0x00,0x00,
0x00,0x7f,0xb0,0x18,0x0c,0x06,0x03,0xf1,0x80,0xc0,0x60,0x30,0x18,0x0c,0x00,0x00,0x00,0x00,
0x00,0x0f,0x0c,0xcc,0x06,0x06,0x03,0x01,0x8e,0xc3,0x31,0x98,0xc6,0x61,0xf0,0x00,0x00,0x00,
0x00,0x61,0xb0,0xd8,0x6c,0x36,0x1b,0xfd,0x86,0xc3,0x61,0xb0,0xd8,0x6c,0x30,0x00,0x00,0x00,
0x00,0x3f,0x06,0x03,0x01,0x80,0xc0,0x60,0x30,0x18,0x0c,0x06,0x03,0x07,0xe0,0x00,0x00,0x00,
0x00,0x01,0x80,0xc0,0x60,0x30,0x18,0x0c,0x06,0x03,0x01,0x80,0xc0,0xc7,0xc0,0x00,0x00,0x00,
0x00,0x61,0xb0,0xd8,0xcc,0xc6,0xc3,0xc1,0xe0,0xd8,0x66,0x31,0x98,0x6c,0x30,0x00,0x00,0x00,
0x00,0x60,0x30,0x18,0x0c,0x06,0x03,0x01,0x80,0xc0,0x60,0x30,0x18,0x0f,0xf0,0x00,0x00,0x00,
0x00,0x61,0xb0,0xdc,0xee,0x77,0xfb,0x6d,0xb6,0xc3,0x61,0xb0,0xd8,0x6c,0x30,0x00,0x00,0x00,
0x00,0x61,0xb8,0xdc,0x6f,0x36,0x9b,0x6d,0x96,0xcf,0x63,0xb1,0xd8,0x6c,0x30,0x00,0x00,0x00,
0x00,0x1e,0x19,0x8c,0xcc,0x36,0x1b,0x0d,0x86,0xc3,0x61,0x99,0x8c,0xc3,0xc0,0x00,0x00,0x00,
0x00,0x7e,0x31,0x98,0x6c,0x36,0x1b,0x19,0xf8,0xc0,0x60,0x30,0x18,0x0c,0x00,0x00,0x00,0x00,
0x00,0x1e,0x19,0x8c,0xcc,0x36,0x1b,0x0d,0x86,0xc3,0x61,0x99,0x8c,0xc3,0xc0,0x60,0x18,0x0c,
0x00,0x7e,0x31,0x98,0x6c,0x36,0x1b,0x19,0xf8,0xcc,0x63,0x31,0x98,0x6c,0x30,0x00,0x00,0x00,
0x00,0x1f,0x18,0x18,0x0c,0x03,0x00,0xe0,0x1c,0x03,0x01,0x80,0xc0,0xcf,0xc0,0x00,0x00,0x00,
0x00,0x7f,0x86,0x03,0x01,0x80,0xc0,0x60,0x30,0x18,0x0c,0x06,0x03,0x01,0x80,0x00,0x00,0x00,
0x00,0x61,0xb0,0xd8,0x6c,0x36,0x1b,0x0d,0x86,0xc3,0x61,0x99,0x8c,0xc3,0xc0,0x00,0x00,0x00,
0x00,0x61,0xb0,0xd8,0x6c,0x33,0x31,0x98,0xcc,0x66,0x33,0x0f,0x03,0x01,0x80,0x00,0x00,0x00,
0x00,0x61,0xb0,0xd8,0x6c,0x36,0x1b,0x0d,0xb6,0xdb,0x7f,0xb9,0xd8,0x6c,0x30,0x00,0x00,0x00,
0x00,0x61,0xb0,0xcc,0xc2,0x41,0xe0,0x60,0x30,0x3c,0x12,0x19,0x98,0x6c,0x30,0x00,0x00,0x00,
0x00,0x61,0xb0,0xcc,0xc6,0x61,0xe0,0x60,0x30,0x18,0x0c,0x06,0x03,0x01,0x80,0x00,0x00,0x00,
0x00,0x7f,0x80,0xc0,0xc0,0x60,0x60,0x60,0x30,0x30,0x30,0x18,0x18,0x0f,0xf0,0x00,0x00,0x00,
0x1e,0x0c,0x06,0x03,0x01,0x80,0xc0,0x60,0x30,0x18,0x0c,0x06,0x03,0x01,0x80,0xf0,0x00,0x00,
0x00,0x30,0x18,0x06,0x03,0x00,0xc0,0x60,0x18,0x0c,0x03,0x01,0x80,0x60,0x30,0x00,0x00,0x00,
0x1e,0x03,0x01,0x80,0xc0,0x60,0x30,0x18,0x0c,0x06,0x03,0x01,0x80,0xc0,0x60,0xf0,0x00,0x00,
0x08,0x0e,0x0d,0x8c,0x66,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xfc,0x00,0x00,
0x18,0x0c,0x03,0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0xf0,0x0c,0x06,0x3f,0x31,0x98,0xcc,0x63,0xe0,0x00,0x00,0x00,
0x00,0x30,0x18,0x0c,0x06,0x03,0x61,0xd8,0xc6,0x63,0x31,0x98,0xce,0xc6,0xc0,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xf8,0xc0,0xc0,0x60,0x30,0x18,0x06,0x01,0xf0,0x00,0x00,0x00,
0x00,0x01,0x80,0xc0,0x60,0x30,0xd8,0xdc,0xc6,0x63,0x31,0x98,0xc6,0xe1,0xb0,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0xcc,0xc6,0x63,0x3f,0x18,0x06,0x01,0xe0,0x00,0x00,0x00,
0x00,0x07,0x86,0x03,0x01,0x83,0xf0,0x60,0x30,0x18,0x0c,0x06,0x03,0x01,0x80,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0xd9,0x9d,0x86,0xc3,0x61,0xb0,0xcc,0xe3,0xb0,0x18,0x18,0xf8,
0x00,0x30,0x18,0x0c,0x06,0x03,0x71,0xcc,0xc6,0x63,0x31,0x98,0xcc,0x66,0x30,0x00,0x00,0x00,
0x00,0x0c,0x06,0x00,0x00,0x00,0xc0,0x60,0x30,0x18,0x0c,0x06,0x03,0x01,0x80,0x00,0x00,0x00,
0x00,0x06,0x03,0x00,0x00,0x00,0x60,0x30,0x18,0x0c,0x06,0x03,0x01,0x80,0xc0,0x60,0x61,0xe0,
0x00,0x30,0x18,0x0c,0x06,0x13,0x19,0x98,0xd8,0x78,0x36,0x19,0x8c,0x66,0x10,0x00,0x00,0x00,
0x00,0x0c,0x06,0x03,0x01,0x80,0xc0,0x60,0x30,0x18,0x0c,0x06,0x03,0x00,0xe0,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x07,0x33,0xfd,0xb6,0xdb,0x6d,0xb6,0xdb,0x6d,0xb0,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x03,0xf1,0x8c,0xc6,0x63,0x31,0x98,0xcc,0x66,0x30,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0xe1,0x99,0x86,0xc3,0x61,0xb0,0xcc,0xc3,0xc0,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x06,0xe3,0x99,0x86,0xc3,0x61,0xb0,0xdc,0xcd,0xc6,0x03,0x01,0x80,
0x00,0x00,0x00,0x00,0x00,0x01,0xd9,0x9d,0x86,0xc3,0x61,0xb0,0xcc,0xe3,0xb0,0x18,0x0c,0x06,
0x00,0x00,0x00,0x00,0x00,0x01,0xf9,0x80,0xc0,0x60,0x30,0x18,0x0c,0x06,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0xf9,0x80,0xc0,0x3e,0x01,0x80,0xc0,0x67,0xe0,0x00,0x00,0x00,
0x00,0x0c,0x06,0x03,0x01,0x87,0xf8,0x60,0x30,0x18,0x0c,0x06,0x03,0x00,0xe0,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x03,0x19,0x8c,0xc6,0x63,0x31,0x98,0xcc,0xe3,0xb0,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x03,0x19,0x8c,0xc6,0x36,0x1b,0x07,0x03,0x80,0x80,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x06,0x1b,0x0d,0xb6,0x5a,0x3f,0x19,0x8c,0xc4,0x20,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x03,0x19,0x8c,0x6c,0x1c,0x0e,0x0d,0x8c,0x66,0x30,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x06,0x1b,0x0c,0xcc,0x26,0x1e,0x06,0x03,0x03,0x01,0x81,0x80,0xc0,
0x00,0x00,0x00,0x00,0x00,0x03,0xf8,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x07,0xf0,0x00,0x00,0x00,
0x06,0x06,0x03,0x01,0x80,0xc0,0xc1,0xc0,0x30,0x0c,0x06,0x03,0x01,0x80,0xc0,0x30,0x00,0x00,
0x0c,0x06,0x03,0x01,0x80,0xc0,0x60,0x30,0x18,0x0c,0x06,0x03,0x01,0x80,0xc0,0x60,0x00,0x00,
0x18,0x06,0x03,0x01,0x80,0xc0,0x30,0x0e,0x0c,0x0c,0x06,0x03,0x01,0x80,0xc0,0xc0,0x00,0x00,
0x38,0xb6,0xd1,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xaa,0xaa,0xaa,0xaa,0xaa,0xaa,0xaa,0xaa,0xaa,0xaa,0xaa,0xaa,0xaa,0xaa,0xa8,0x00,0x00,0x00,
0x00,0x00,0x00,0x20,0x3f,0xeb,0xf8,0xfe,0x3f,0x0f,0x83,0xc0,0xe0,0x30,0x08,0x00,0x00,0x00,
0x00,0x00,0x20,0x18,0x09,0xfa,0xfb,0x79,0xb8,0xd8,0x68,0x30,0x18,0x08,0x00,0x00,0x00,0x00,
0x00,0x1f,0xc8,0x04,0x02,0x01,0x00,0x80,0x40,0x20,0x10,0x08,0x04,0x02,0x01,0xfc,0x00,0x00,
0x00,0x7f,0x1f,0x87,0xc1,0xe0,0xf0,0x78,0x3c,0x1e,0x0f,0x07,0x87,0xc7,0xe7,0xf0,0x00,0x00,
};
#endif