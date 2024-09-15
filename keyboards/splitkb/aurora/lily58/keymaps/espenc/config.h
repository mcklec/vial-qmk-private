#pragma once

#define VIAL_KEYBOARD_UID {0x0B, 0x9F, 0x90, 0x91, 0x81, 0x04, 0x83, 0xB1}
/* Vial secure unlock - currently using both big keys, like with base lily58 */
#define VIAL_UNLOCK_COMBO_ROWS {4, 9}
#define VIAL_UNLOCK_COMBO_COLS {5, 5}

/* saving some more space, */
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

// General Settings
#define NKRO_ENABLE
#define DYNAMIC_KEYMAP_LAYER_COUNT 8

// OLED Settings
// #define SPLIT_MODS_ENABLE
// #define SPLIT_LAYER_STATE_ENABLE
#define OLED_TIMEOUT 45000 // ms to wait until rgblight time out, 900K ms is 15min.



// RGB Settings
#define RGBLIGHT_SLEEP  // enable rgblight_suspend{} and rgblight_wakeup{} in keymap.c
#define RGBLIGHT_TIMEOUT 90000  // ms to wait until rgblight time out, 900K ms is 15min.


// RGB Animations
#define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_TYPING_HEATMAP
#define HEATMAP_BACKLIGHT_HSV 15,255,255
