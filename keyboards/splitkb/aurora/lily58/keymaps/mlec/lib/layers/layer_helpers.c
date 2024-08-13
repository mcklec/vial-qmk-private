#include "keymaps/mlec/lib/layers/layer_helpers.h"

#include <stdio.h>
#include "action_layer.h"
#include "oled_driver.h"


void render_layer_name(void){
    switch (get_highest_layer(layer_state)) {
        case _LOWER:
            oled_write_P(PSTR("LOW\n"), false);
            break;
        case _RAISE:
            oled_write_P(PSTR("UP\n"), false);
            break;
        case _ADJUST:
            oled_write_P(PSTR("ADJ\n"), false);
            break;
        case _GAME:
            oled_write_P(PSTR("GAME\n"), false);
            break;
        default:
            // use the write_ln shortcut over adding '\n' to the end of your string
            sprintf(layer_name, "LAY%0d\n",get_highest_layer(layer_state));
            oled_write_P(layer_name, false);
    	}
};