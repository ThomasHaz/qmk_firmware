#pragma once

#include QMK_KEYBOARD_H

bool process_crypt_word(uint16_t keycode, keyrecord_t* record);
enum crypt_keycodes {
    MK_CRYPT_0 = SAFE_RANGE,
    MK_CRYPT_1,
    MK_CRYPT_2,
    MK_CRYPT_3,
    MK_CRYPT_4,
    MK_CRYPT_5
};
