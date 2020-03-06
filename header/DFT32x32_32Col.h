/* File generated by pnm2ILI9163 for use with          */
/* ILI9163/ST7735 based displays                       */
/* http://bax.comlab.uni-rostock.de                    */
/*                                                     */

#ifndef PROGMEM
#define PROGMEM
#endif

#define DFT32_WIDTH  32
#define DFT32_HEIGHT 32
#define DFT32_PTR    dft32_image
#define DFT32_COLTAB dft32_colortab

extern const color_t dft32_colortab[64];
extern const unsigned char dft32_image[1024];

#ifdef DFT32_MAIN
/* Color Table: 8 Bit RGB (here for show: normal colors, followed by red tinted colors */
const color_t dft32_colortab[64] PROGMEM = {
LCD_RGB(0  ,0  ,55 ), LCD_RGB(0  ,0  ,52 ), LCD_RGB(0  ,0  ,47 ), LCD_RGB(0  ,0  ,40 ), 
LCD_RGB(0  ,0  ,18 ), LCD_RGB(5  ,6  ,72 ), LCD_RGB(20 ,21 ,99 ), LCD_RGB(121,121,171), 
LCD_RGB(16 ,17 ,54 ), LCD_RGB(35 ,36 ,82 ), LCD_RGB(80 ,81 ,120), LCD_RGB(137,138,194), 
LCD_RGB(142,143,197), LCD_RGB(159,160,218), LCD_RGB(146,148,199), LCD_RGB(152,154,204), 
LCD_RGB(171,173,227), LCD_RGB(111,112,147), LCD_RGB(159,160,208), LCD_RGB(183,184,235), 
LCD_RGB(140,141,178), LCD_RGB(164,165,204), LCD_RGB(182,183,220), LCD_RGB(188,189,222), 
LCD_RGB(197,198,230), LCD_RGB(162,164,210), LCD_RGB(166,168,212), LCD_RGB(170,172,214), 
LCD_RGB(172,174,215), LCD_RGB(175,177,217), LCD_RGB(178,180,218), LCD_RGB(232,233,254), 

/* red tint */
LCD_RGB(55 ,0  ,19 ), LCD_RGB(52 ,0  ,18 ), LCD_RGB(47 ,0  ,16 ), LCD_RGB(40 ,0  ,14 ), 
LCD_RGB(18 ,0  ,6  ), LCD_RGB(72 ,5  ,29 ), LCD_RGB(99 ,20 ,48 ), LCD_RGB(171,121,138), 
LCD_RGB(54 ,16 ,30 ), LCD_RGB(82 ,35 ,52 ), LCD_RGB(120,80 ,95 ), LCD_RGB(194,137,158), 
LCD_RGB(197,142,162), LCD_RGB(218,159,180), LCD_RGB(199,146,166), LCD_RGB(204,152,172), 
LCD_RGB(227,171,192), LCD_RGB(147,111,124), LCD_RGB(208,159,177), LCD_RGB(235,183,202), 
LCD_RGB(178,140,154), LCD_RGB(204,164,179), LCD_RGB(220,182,196), LCD_RGB(222,188,201), 
LCD_RGB(230,197,210), LCD_RGB(210,162,181), LCD_RGB(212,166,184), LCD_RGB(214,170,187), 
LCD_RGB(215,172,189), LCD_RGB(217,175,192), LCD_RGB(218,178,194), LCD_RGB(254,232,241), 
};
 
/* ILI9163 8 bpp image width 32 height 32 */
const unsigned char PROGMEM dft32_image[1024] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x1f,0x1f,0x1f,0x1f,0x1f,0x1f,0x1f,
0x1f,0x1f,0x1f,0x1f,0x1f,0x1f,0x1f,0x1f,
0x1f,0x18,0x14,0x09,0x04,0x01,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x1f,0x18,0x18,0x18,0x18,0x18,0x18,
0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,
0x18,0x1f,0x1f,0x1f,0x0a,0x04,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x1f,0x18,0x18,0x18,0x18,0x18,0x18,
0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,
0x18,0x17,0x16,0x1f,0x1f,0x11,0x04,0x00,
0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x1f,0x17,0x17,0x17,0x17,0x17,0x17,
0x17,0x17,0x18,0x17,0x17,0x18,0x17,0x17,
0x17,0x17,0x18,0x17,0x18,0x1f,0x11,0x04,
0x00,0x05,0x00,0x05,0x00,0x05,0x05,0x00,
0x00,0x1f,0x17,0x17,0x18,0x17,0x17,0x17,
0x18,0x17,0x17,0x17,0x17,0x17,0x17,0x17,
0x17,0x17,0x17,0x17,0x17,0x18,0x1f,0x0a,
0x04,0x05,0x05,0x00,0x05,0x00,0x05,0x00,
0x00,0x1f,0x17,0x17,0x17,0x17,0x17,0x17,
0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,
0x17,0x17,0x17,0x17,0x17,0x17,0x18,0x18,
0x08,0x02,0x05,0x05,0x05,0x05,0x05,0x00,
0x00,0x1f,0x16,0x16,0x17,0x17,0x17,0x17,
0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,
0x17,0x17,0x17,0x17,0x16,0x17,0x16,0x1f,
0x14,0x04,0x05,0x00,0x05,0x00,0x05,0x00,
0x00,0x1f,0x1d,0x16,0x16,0x16,0x16,0x16,
0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,
0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x17,
0x1f,0x09,0x03,0x05,0x05,0x05,0x05,0x01,
0x00,0x1f,0x1d,0x16,0x16,0x1e,0x16,0x16,
0x16,0x16,0x1e,0x16,0x16,0x16,0x16,0x16,
0x1e,0x16,0x16,0x16,0x16,0x16,0x1e,0x1c,
0x1f,0x14,0x04,0x05,0x05,0x05,0x05,0x00,
0x00,0x18,0x1e,0x1e,0x1e,0x1e,0x1e,0x1e,
0x1e,0x1e,0x1e,0x1e,0x1e,0x1e,0x1e,0x1e,
0x1e,0x1e,0x1e,0x1e,0x1e,0x1e,0x1e,0x1d,
0x16,0x18,0x09,0x01,0x05,0x05,0x05,0x00,
0x00,0x1f,0x1d,0x1d,0x1d,0x1d,0x1d,0x1d,
0x1d,0x1d,0x1d,0x1d,0x1d,0x1d,0x1d,0x1d,
0x1d,0x1d,0x1d,0x1d,0x1d,0x1d,0x1d,0x1d,
0x1a,0x1f,0x0a,0x03,0x05,0x05,0x05,0x00,
0x00,0x18,0x1c,0x1c,0x1c,0x1c,0x1c,0x1c,
0x1c,0x1c,0x1c,0x1c,0x1c,0x1c,0x1c,0x1c,
0x1c,0x1c,0x1c,0x1c,0x1c,0x1c,0x1c,0x1c,
0x1b,0x18,0x14,0x03,0x05,0x05,0x05,0x00,
0x00,0x18,0x1d,0x1b,0x1b,0x1b,0x1b,0x1b,
0x1b,0x1b,0x1b,0x1b,0x1b,0x1b,0x1b,0x1b,
0x1b,0x1b,0x1b,0x1b,0x1b,0x1c,0x1c,0x1c,
0x1b,0x13,0x15,0x00,0x05,0x05,0x05,0x00,
0x00,0x18,0x1b,0x1b,0x1b,0x1b,0x1b,0x1b,
0x1b,0x1b,0x1b,0x1b,0x1b,0x1b,0x1b,0x1b,
0x1b,0x1b,0x1b,0x1b,0x1b,0x1b,0x1b,0x1b,
0x1b,0x16,0x1e,0x05,0x05,0x05,0x05,0x00,
0x00,0x18,0x1a,0x1a,0x1a,0x1a,0x1a,0x1a,
0x1a,0x1a,0x1a,0x1a,0x1a,0x1a,0x1a,0x1a,
0x1a,0x1a,0x1a,0x1a,0x1a,0x1a,0x1a,0x1a,
0x1a,0x1d,0x1e,0x09,0x00,0x05,0x06,0x00,
0x00,0x18,0x1a,0x19,0x19,0x1a,0x1a,0x1a,
0x1a,0x1a,0x1a,0x1a,0x1a,0x1a,0x1a,0x1a,
0x1a,0x1a,0x1a,0x1a,0x1a,0x1a,0x1a,0x1a,
0x1a,0x1c,0x10,0x09,0x00,0x06,0x05,0x01,
0x00,0x18,0x0d,0x19,0x19,0x19,0x19,0x19,
0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,
0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,
0x19,0x1b,0x1d,0x09,0x00,0x06,0x05,0x00,
0x00,0x13,0x12,0x12,0x12,0x12,0x19,0x12,
0x12,0x12,0x12,0x12,0x12,0x12,0x12,0x12,
0x12,0x12,0x12,0x12,0x12,0x12,0x12,0x12,
0x12,0x1b,0x1a,0x05,0x05,0x05,0x06,0x00,
0x00,0x13,0x12,0x12,0x12,0x12,0x12,0x12,
0x12,0x12,0x12,0x12,0x12,0x12,0x12,0x12,
0x12,0x12,0x12,0x12,0x12,0x12,0x12,0x12,
0x12,0x13,0x0c,0x00,0x05,0x06,0x06,0x01,
0x00,0x13,0x12,0x0f,0x0f,0x0f,0x12,0x0f,
0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,
0x0f,0x12,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,
0x0f,0x13,0x11,0x02,0x06,0x06,0x05,0x00,
0x00,0x13,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,
0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,
0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,
0x0f,0x13,0x09,0x05,0x06,0x05,0x06,0x00,
0x01,0x13,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,
0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,
0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0e,
0x10,0x0c,0x00,0x05,0x06,0x06,0x06,0x00,
0x00,0x13,0x0e,0x0f,0x0e,0x0f,0x0e,0x0f,
0x0e,0x0f,0x0e,0x0f,0x0f,0x0f,0x0f,0x0e,
0x0f,0x0e,0x0f,0x0e,0x0f,0x0e,0x0f,0x0e,
0x13,0x0a,0x00,0x06,0x06,0x06,0x06,0x00,
0x00,0x10,0x0e,0x0e,0x0e,0x0e,0x0e,0x0e,
0x0e,0x0e,0x0e,0x0e,0x0e,0x0e,0x0e,0x0e,
0x0e,0x0e,0x0e,0x0e,0x0e,0x0e,0x0c,0x10,
0x14,0x02,0x06,0x06,0x06,0x06,0x06,0x01,
0x00,0x10,0x0c,0x0e,0x0e,0x0e,0x0e,0x0e,
0x0e,0x0e,0x0e,0x0e,0x0e,0x0e,0x0e,0x0e,
0x0e,0x0e,0x0e,0x0e,0x0e,0x0c,0x0f,0x13,
0x09,0x00,0x06,0x06,0x06,0x06,0x06,0x00,
0x00,0x10,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,
0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,
0x0c,0x0c,0x0c,0x0c,0x0c,0x0b,0x13,0x0a,
0x02,0x06,0x06,0x06,0x06,0x06,0x06,0x00,
0x00,0x10,0x0b,0x0c,0x0c,0x0c,0x0c,0x0c,
0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,
0x0c,0x0c,0x0c,0x0c,0x0b,0x13,0x11,0x03,
0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x00,
0x00,0x0d,0x0b,0x0b,0x0b,0x0b,0x0b,0x0b,
0x0b,0x0b,0x0b,0x0b,0x0b,0x0b,0x0b,0x0b,
0x0b,0x0b,0x0b,0x0b,0x10,0x07,0x02,0x06,
0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x00,
0x00,0x0d,0x0b,0x0b,0x0b,0x0b,0x0b,0x0b,
0x0b,0x0b,0x0b,0x0b,0x0b,0x0b,0x0b,0x0b,
0x0b,0x0b,0x0d,0x10,0x0a,0x03,0x06,0x06,
0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x00,
0x00,0x13,0x0d,0x0d,0x0d,0x0d,0x0d,0x0d,
0x0d,0x0d,0x0d,0x0d,0x0d,0x0d,0x0d,0x0d,
0x0d,0x0d,0x0b,0x09,0x00,0x06,0x06,0x06,
0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0x00,0x00,0x00,0x05,0x00,
0x05,0x00,0x05,0x00,0x05,0x00,0x05,0x00,
};
#endif /* DFT32_MAIN */ 