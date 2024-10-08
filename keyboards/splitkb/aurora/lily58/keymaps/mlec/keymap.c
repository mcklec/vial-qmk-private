#include <stdbool.h>
#include "action_layer.h"
#include "oled_driver.h"
#include "rgb_matrix.h"
#include QMK_KEYBOARD_H
#include "lily58.h"

#include "keymaps/mlec/lib/layers/layer_helpers.h"
#include "keymaps/mlec/lib/oled/oled_helpers.h"
#include "keymaps/mlec/lib/rgb/rgb_helpers.h"
#include "keymaps/mlec/lib/gaming/gaming_helpers.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
      [0] = LAYOUT(
	KC_ESC,  KC_1, KC_2, KC_3,    KC_4,    KC_5,                    KC_6,  KC_7,    KC_8,    KC_9,  KC_0,     KC_GRV,
	KC_TAB,  KC_Q, KC_W, KC_E,    KC_R,    KC_T,                    KC_Y,  KC_U,    KC_I,    KC_O,  KC_P,     KC_MINS,
	KC_LCTL, KC_A, KC_S, KC_D,    KC_F,    KC_G,                    KC_H,  KC_J,    KC_K,    KC_L,  KC_SCLN,  KC_QUOT,
	KC_LSFT, KC_Z, KC_X, KC_C,    KC_V,    KC_B,  KC_LBRC, KC_RBRC, KC_N,  KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
	                     KC_LALT, KC_LGUI, MO(1), KC_SPC,  KC_ENT,  MO(2), KC_BSPC, KC_RGUI
      ),
      [1] = LAYOUT(
	_______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
	KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
	KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TILD,
	_______, _______, _______, _______, _______, _______, _______, _______, XXXXXXX, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,
	                           _______, _______, _______, _______, _______, MO(3), _______, _______
      ),
      [2] = LAYOUT(
	_______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
	KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
	KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                     XXXXXXX, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX,
	KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______, KC_PLUS, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
	                           _______, _______, MO(3),   _______, _______, _______, _______, _______
      ),
      [3] = LAYOUT(
	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI,
	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD,
	                           _______, _______, _______, _______, _______, _______, _______, _______
      ),
      [4] = LAYOUT(
	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI,
	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD,
	                           _______, _______, _______, _______, _______, _______, _______, _______
      ),
      [5] = LAYOUT(
	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI,
	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD,
	                           _______, _______, _______, _______, _______, _______, _______, _______
      ),
      [6] = LAYOUT(
	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI,
	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD,
	                           _______, _______, _______, _______, _______, _______, _______, _______
      ),
      [7] = LAYOUT(
	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI,
	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD,
	                           _______, _______, _______, _______, _______, _______, _______, _______
      )
};


#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_PGUP, KC_PGDN) },
    [1] = { ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) },
    [2] = { ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) },
    [3] = { ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) },
    [4] = { ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) },
    [5] = { ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) },
    [6] = { ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) },
    [7] = { ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) }
};
#endif



void housekeeping_task_user(void) {
  #ifdef RGBLIGHT_TIMEOUT
  	check_rgb_timeout();
  #endif
}

void post_process_record_user(uint16_t keycode, keyrecord_t *record) {
  #ifdef RGBLIGHT_TIMEOUT
  if (record->event.pressed) refresh_rgb();
  #endif
}

/* Runs after each encoder tick, check if activity occurred */
void post_encoder_update_user(uint8_t index, bool clockwise) {
  #ifdef RGBLIGHT_TIMEOUT
  refresh_rgb();
  #endif
}

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
    case _GAME:
        rgblight_mode(RGB_MATRIX_SOLID_COLOR);
        rgblight_sethsv(HSV_GOLD);
        break;
    default: //  for any other layers, or the default layer
        rgb_matrix_mode(RGB_MATRIX_TYPING_HEATMAP);
        break;
    }
  return state;
};

#ifdef OLED_ENABLE
bool oled_task_user(void){
	if (is_keyboard_master()){
        // Renders the current keyboard state (layers and mods)
        render_layer_name();
        render_sushi();
        render_space();
        render_layer_state();
        render_space();
        render_mod_status_gui_alt(get_mods()|get_oneshot_mods());
        render_mod_status_ctrl_shift(get_mods()|get_oneshot_mods());
        render_kb_LED_state();
	}
	else {
        render_image();
	}
	return false;
};
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
	case SOCD_A:
		socd(record,KC_A,KC_D,&a_down,&d_down);
		return false;
		break;
	case SOCD_D:
		socd(record,KC_D,KC_A,&d_down,&a_down);
		return false;
		break;
	};
	return true;
}