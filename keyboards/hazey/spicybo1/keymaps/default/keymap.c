#include QMK_KEYBOARD_H

#define XX_X KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │ H │ E │ R │
     * ├───┼───┼───┤
     * │ M │ A │ N │
     * └───┴───┴───┘
     *
     *                                 ┌───┐
     *                                 │ Q │
     *                           ┌───┬─┴─┬─┴─┬───┐
     *                           │ 1 │ 2 │ 3 │ 4 │
     *                           └───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_2x3_5(
        KC_H,    KC_E,    KC_R,             XX_X,  XX_X,  XX_X,  XX_X,  XX_X,
        KC_M,    KC_A,    KC_N,             XX_X,  XX_X,  XX_X,  XX_X,  XX_X,
                                            XX_X,  XX_X,  XX_X,
                                            
                                                            KC_Q,
                                                 KC_1,  KC_2,  KC_3,  KC_4
    )
};
