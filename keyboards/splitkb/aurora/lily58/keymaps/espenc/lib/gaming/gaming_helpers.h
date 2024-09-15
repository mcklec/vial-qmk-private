#include QMK_KEYBOARD_H

enum gaming_keycodes {
  SOCD_A = QK_KB_0,
  SOCD_D
};

bool w_down = false;
bool a_down = false;
bool s_down = false;
bool d_down = false;

void socd(keyrecord_t *record, uint16_t l_code,  uint16_t r_code,  bool *l_down, bool  *r_down);