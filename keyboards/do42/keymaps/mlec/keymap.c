#include <stdbool.h>
#include "action_layer.h"
#include "keycodes.h"
#include QMK_KEYBOARD_H
#include "do42.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
      [0] = LAYOUT(	
	KC_TAB,  KC_Q, KC_W, KC_E,    KC_R,    KC_T,                    KC_Y,  KC_U,    KC_I,    KC_O,  KC_P,     KC_MINS,
	KC_LCTL, KC_A, KC_S, KC_D,    KC_F,    KC_G,                    KC_H,  KC_J,    KC_K,    KC_L,  KC_SCLN,  KC_QUOT,
	KC_LSFT, KC_Z, KC_X, KC_C,    KC_V,    KC_B,  					KC_N,  KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
	KC_LALT, KC_LGUI,			  KC_LEFT, KC_UP,  					KC_RIGHT, KC_DOWN, 				 KC_BSPC, KC_RGUI,
	KC_GRV,KC_GRV, KC_GRV,KC_GRV,KC_GRV,KC_GRV,KC_GRV
      ),
      [1] = LAYOUT(	
	KC_TAB,  KC_Q, KC_W, KC_E,    KC_R,    KC_T,                    KC_Y,  KC_U,    KC_I,    KC_O,  KC_P,     KC_MINS,
	KC_LCTL, KC_A, KC_S, KC_D,    KC_F,    KC_G,                    KC_H,  KC_J,    KC_K,    KC_L,  KC_SCLN,  KC_QUOT,
	KC_LSFT, KC_Z, KC_X, KC_C,    KC_V,    KC_B,  					KC_N,  KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
	KC_LALT, KC_LGUI,			  MO(1), KC_SPC,  					KC_ENT,  MO(2), 				 KC_BSPC, KC_RGUI,
	KC_GRV,KC_GRV, KC_GRV,KC_GRV,KC_GRV,KC_GRV,KC_GRV
      ),
      [2] = LAYOUT(	
	KC_TAB,  KC_Q, KC_W, KC_E,    KC_R,    KC_T,                    KC_Y,  KC_U,    KC_I,    KC_O,  KC_P,     KC_MINS,
	KC_LCTL, KC_A, KC_S, KC_D,    KC_F,    KC_G,                    KC_H,  KC_J,    KC_K,    KC_L,  KC_SCLN,  KC_QUOT,
	KC_LSFT, KC_Z, KC_X, KC_C,    KC_V,    KC_B,  					KC_N,  KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
	KC_LALT, KC_LGUI,			  MO(1), KC_SPC,  					KC_ENT,  MO(2), 				 KC_BSPC, KC_RGUI,
	KC_GRV,KC_GRV, KC_GRV,KC_GRV,KC_GRV,KC_GRV,KC_GRV
      ),
      [3] = LAYOUT(	
	KC_TAB,  KC_Q, KC_W, KC_E,    KC_R,    KC_T,                    KC_Y,  KC_U,    KC_I,    KC_O,  KC_P,     KC_MINS,
	KC_LCTL, KC_A, KC_S, KC_D,    KC_F,    KC_G,                    KC_H,  KC_J,    KC_K,    KC_L,  KC_SCLN,  KC_QUOT,
	KC_LSFT, KC_Z, KC_X, KC_C,    KC_V,    KC_B,  					KC_N,  KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
	KC_LALT, KC_LGUI,			  MO(1), KC_SPC,  					KC_ENT,  MO(2), 				 KC_BSPC, KC_RGUI,
	KC_GRV,KC_GRV, KC_GRV,KC_GRV,KC_GRV,KC_GRV,KC_GRV
      ),
      [4] =LAYOUT(	
	KC_TAB,  KC_Q, KC_W, KC_E,    KC_R,    KC_T,                    KC_Y,  KC_U,    KC_I,    KC_O,  KC_P,     KC_MINS,
	KC_LCTL, KC_A, KC_S, KC_D,    KC_F,    KC_G,                    KC_H,  KC_J,    KC_K,    KC_L,  KC_SCLN,  KC_QUOT,
	KC_LSFT, KC_Z, KC_X, KC_C,    KC_V,    KC_B,  					KC_N,  KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
	KC_LALT, KC_LGUI,			  MO(1), KC_SPC,  					KC_ENT,  MO(2), 				 KC_BSPC, KC_RGUI,
	KC_GRV,KC_GRV, KC_GRV,KC_GRV,KC_GRV,KC_GRV,KC_GRV
      ),
      [5] =LAYOUT(
	KC_TAB,  KC_Q, KC_W, KC_E,    KC_R,    KC_T,                    KC_Y,  KC_U,    KC_I,    KC_O,  KC_P,     KC_MINS,
	KC_LCTL, KC_A, KC_S, KC_D,    KC_F,    KC_G,                    KC_H,  KC_J,    KC_K,    KC_L,  KC_SCLN,  KC_QUOT,
	KC_LSFT, KC_Z, KC_X, KC_C,    KC_V,    KC_B,  					KC_N,  KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
	KC_LALT, KC_LGUI,			  MO(1), KC_SPC,  					KC_ENT,  MO(2), 				 KC_BSPC, KC_RGUI,
	KC_GRV,KC_GRV, KC_GRV,KC_GRV,KC_GRV,KC_GRV,KC_GRV
      ),
      [6] = LAYOUT(	
	KC_TAB,  KC_Q, KC_W, KC_E,    KC_R,    KC_T,                    KC_Y,  KC_U,    KC_I,    KC_O,  KC_P,     KC_MINS,
	KC_LCTL, KC_A, KC_S, KC_D,    KC_F,    KC_G,                    KC_H,  KC_J,    KC_K,    KC_L,  KC_SCLN,  KC_QUOT,
	KC_LSFT, KC_Z, KC_X, KC_C,    KC_V,    KC_B,  					KC_N,  KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
	KC_LALT, KC_LGUI,			  MO(1), KC_SPC,  					KC_ENT,  MO(2), 				 KC_BSPC, KC_RGUI,
	KC_GRV,KC_GRV, KC_GRV,KC_GRV,KC_GRV,KC_GRV,KC_GRV
      ),
	[7] = LAYOUT(	
	KC_TAB,  KC_Q, KC_W, KC_E,    KC_R,    KC_T,                    KC_Y,  KC_U,    KC_I,    KC_O,  KC_P,     KC_MINS,
	KC_LCTL, KC_A, KC_S, KC_D,    KC_F,    KC_G,                    KC_H,  KC_J,    KC_K,    KC_L,  KC_SCLN,  KC_QUOT,
	KC_LSFT, KC_Z, KC_X, KC_C,    KC_V,    KC_B,  					KC_N,  KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
	KC_LALT, KC_LGUI,			  MO(1), KC_SPC,  					KC_ENT,  MO(2), 				 KC_BSPC, KC_RGUI,
	KC_GRV,KC_GRV, KC_GRV,KC_GRV,KC_GRV,KC_GRV,KC_GRV
      )
};




