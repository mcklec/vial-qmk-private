#include QMK_KEYBOARD_H


void socd(keyrecord_t *record, uint16_t target_code,  uint16_t opp_code,  bool *target_down, bool  *opp_down){
    if (record->event.pressed){
        if (*opp_down) {
            unregister_code(opp_code);
        };
        register_code(target_code);
        *target_down = true;
    } else {
        unregister_code(target_code);
        *target_down = false;
        if (*opp_down){
            register_code(opp_code); 
        }
    };
};