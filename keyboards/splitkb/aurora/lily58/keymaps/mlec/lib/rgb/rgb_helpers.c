#include "action_layer.h"
#include "timer.h"
#include "rgb_matrix.h"

#include "keymaps/mlec/lib/layers/layer_helpers.h"
#include "keymaps/mlec/lib/rgb/rgb_helpers.h"


static uint32_t key_timer;           // timer for last keyboard activity, use 32bit value and function to make longer idle time possible
bool is_rgb_timeout = false;         // store if RGB has timed out or not in a boolean

void refresh_rgb(void) {
    key_timer = timer_read32(); // store time of last refresh
    if (is_rgb_timeout)
    {
        is_rgb_timeout = false;
        rgb_matrix_enable_noeeprom();
    }
}
void check_rgb_timeout(void) {
    if (!is_rgb_timeout && timer_elapsed32(key_timer) > RGBLIGHT_TIMEOUT) // check if RGB has already timeout and if enough time has passed
    {
        rgb_matrix_disable_noeeprom();
        is_rgb_timeout = true;
    }
}