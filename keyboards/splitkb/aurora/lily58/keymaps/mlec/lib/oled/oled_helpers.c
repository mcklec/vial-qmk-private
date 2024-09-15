#include "keymaps/mlec/lib/oled/oled_helpers.h"
#include "oled_driver.h"
#include "quantum.h"

static const char PROGMEM cat_paws[] = {
	// clang-format off
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xe0, 0xa0, 0xc0, 0xe0, 0xa0, 0xe0, 0x80, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x02, 0x1f, 0x31, 0x38, 0x30, 0x31, 0x3f, 0x1a, 0x03, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x1c, 0xd4, 0xff, 0x8d, 0x87, 0xc6, 0x8d, 0xff, 0x14, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xa0, 0xf8, 0x68, 0x30, 0x38, 0x68, 0xf8, 0xa0, 0xe0, 
0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0c, 0x0e, 0x0c, 0x0c, 0x0f, 0x06, 0x00, 
0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x0e, 0x6a, 0xff, 0xc6, 0xc3, 0xe3, 0xc6, 0x7f, 0x0a, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x50, 0xfc, 0x34, 0x18, 0x1c, 0x34, 0xfc, 0x50, 0x70, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x06, 0x07, 0x06, 0x06, 0x07, 0x03, 0x00, 
0x80, 0x80, 0xe0, 0xa0, 0xe0, 0xc0, 0xa0, 0xe0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x03, 0x1a, 0x3f, 0x31, 0x30, 0x38, 0x31, 0x1f, 0x02, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x14, 0xff, 0x8d, 0xc6, 0x87, 0x8d, 0xff, 0xd4, 0x1c, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 
0xc0, 0x40, 0xf0, 0xd0, 0x70, 0x60, 0xd0, 0xf0, 0x40, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 
0x01, 0x0d, 0x1f, 0x18, 0x18, 0x1c, 0x18, 0x0f, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x0a, 0x7f, 0xc6, 0xe3, 0xc3, 0xc6, 0xff, 0x6a, 0x0e, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x70, 0x50, 0xfc, 0x34, 0x1c, 0x18, 0x34, 0xfc, 0x50, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xe0, 0xa0, 0xc0, 0xe0, 0xa0, 0xe0, 0x80, 0x80, 
0x00, 0x03, 0x07, 0x06, 0x06, 0x07, 0x06, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x02, 0x1f, 0x31, 0x38, 0x30, 0x31, 0x3f, 0x1a, 0x03, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    // clang-format on
};

static const char PROGMEM sushi[] = {
	// 'sushi', 32x32px
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x40, 0x40, 0x40, 
0x40, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x80, 0x70, 0x50, 0x4c, 0x44, 0x62, 0x51, 0x49, 0x84, 0x84, 0x82, 0x42, 0x22, 0x20, 
0x10, 0x08, 0x08, 0x89, 0x41, 0x42, 0x26, 0x24, 0x08, 0x10, 0x60, 0x80, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x03, 0x04, 0x08, 0x08, 0x10, 0x31, 0x23, 0x68, 0x50, 0x51, 0xc1, 0x83, 0x8a, 0x1a, 
0x04, 0x0a, 0x11, 0x20, 0x70, 0x48, 0x84, 0x84, 0x86, 0x82, 0x82, 0x80, 0x63, 0x3e, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
0x01, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

void render_image(void){

    oled_write_raw_P(cat_paws, sizeof(cat_paws));
	oled_scroll_left();

};

void render_sushi(void){
	oled_write_raw_P(sushi,sizeof(sushi));
	oled_set_cursor(0,4);
};