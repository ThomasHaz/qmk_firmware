#include QMK_KEYBOARD_H

#include  "features/mk_crypt.h"


#define XX_X KC_NO

enum layers {
    _HERM = 15,
    _ARRO = 0, // <-- DEFAULT LAYER
    _WASD,
    _MOUS,
    _PASS = 14
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │ H │ E │ R │
     * ├───┼───┼───┤
     * │ M │ A │ N │
     * └───┴───┴───┘
     *
     *       ┌───┐
     *       │ Q │
     * ┌───┬─┴─┬─┴─┬───┐
     * │ 1 │ 2 │ 3 │ 4 │
     * └───┴───┴───┴───┘
     */
    [_HERM] = LAYOUT_ortho_2x3_5(
        KC_H,     KC_E,      KC_R,              XX_X,  XX_X,  XX_X,  XX_X,  XX_X,
        KC_M,     KC_A,      KC_N,              XX_X,  XX_X,  XX_X,  XX_X,  XX_X,
                                                XX_X,  XX_X,  XX_X,
                  TO(0),
        KC_1,  KC_2,  KC_3,  KC_4
    ),
    
    [_ARRO] = LAYOUT_ortho_2x3_5(
        KC_HOME,    KC_UP,     KC_END,          XX_X,  XX_X,  XX_X,  XX_X,  XX_X,
        KC_LEFT,  KC_DOWN,   KC_RIGHT,          XX_X,  XX_X,  XX_X,  XX_X,  XX_X,
                                                XX_X,  XX_X,  XX_X,
                  TO(1),
        KC_1,  KC_2,  KC_3,  KC_4
    ),
    
    [_WASD] = LAYOUT_ortho_2x3_5(
        KC_Q,     KC_W,      KC_E,              XX_X,  XX_X,  XX_X,  XX_X,  XX_X,
        KC_A,     KC_S,      KC_D,              XX_X,  XX_X,  XX_X,  XX_X,  XX_X,
                                                XX_X,  XX_X,  XX_X,
                  TO(2),
        KC_1,  KC_2,  KC_3,  KC_4
    ),
    
    [_MOUS] = LAYOUT_ortho_2x3_5(
        KC_BTN1, KC_MS_U, KC_BTN2,              XX_X,  XX_X,  XX_X,  XX_X,  XX_X,
        KC_MS_L, KC_MS_D, KC_MS_R,              XX_X,  XX_X,  XX_X,  XX_X,  XX_X,
                                                XX_X,  XX_X,  XX_X,
                  TO(14),
        KC_1,  KC_2,  KC_3,  KC_4
    ),
    
    [_PASS] = LAYOUT_ortho_2x3_5(
        MK_CRYPT_0, MK_CRYPT_1, MK_CRYPT_2,     XX_X,  XX_X,  XX_X,  XX_X,  XX_X,
        MK_CRYPT_3, MK_CRYPT_4, MK_CRYPT_5,     XX_X,  XX_X,  XX_X,  XX_X,  XX_X,
                                                XX_X,  XX_X,  XX_X,
                  TO(15),
        KC_1,  KC_2,  KC_3,  KC_4
    )
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//     switch (keycode) {
//         case MK_VENV:
//             if (record->event.pressed) {
//                 send_string("source ~/venv/bin/activate");
//             }
//             break;
//     }
//
    return process_crypt_word(keycode, record);
};


