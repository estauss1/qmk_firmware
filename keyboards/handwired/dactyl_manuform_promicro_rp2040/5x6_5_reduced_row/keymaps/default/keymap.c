// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    QWERTY,
    FUNC
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*  __  __  __  __  __  __                      __  __  __  __  __  __
 * |  ||  ||  ||  ||  ||  |                    |  ||  ||  ||  ||  ||  |
 * ESC  1   2   3   4   5                       6   7   8   9   0   -
 * |__||__||__||__||__||__|                    |__||__||__||__||__||__|
 *  __  __  __  __  __  __                      __  __  __  __  __  __
 * |  ||  ||  ||  ||  ||  |                    |  ||  ||  ||  ||  ||  |
 * TAB  Q   W   E   R   T                       Y   U   I   O   P   =
 * |__||__||__||__||__||__|                    |__||__||__||__||__||__|
 *  __  __  __  __  __  __                      __  __  __  __  __  __
 * |  ||  ||  ||  ||  ||  |                    |  ||  ||  ||  ||  ||  |
 * CTRL A   S   D   F   G                       H   J   K   L   ;   '
 * |__||__||__||__||__||__|                    |__||__||__||__||__||__|
 *  __  __  __  __  __  __                      __  __  __  __  __  __
 * |  ||  ||  ||  ||  ||  |                    |  ||  ||  ||  ||  ||  |
 * SHFT Z   X   C   V   B                       N   M   ,   .   /   \
 * |__||__||__||__||__||__|                    |__||__||__||__||__||__|
 *          __  __                                  __  __
 *         |  ||  |                                |  ||  |
 *          `   ALT                                 [    ]
 *         |__||__|                                |__||__|
 *                      __  __  __      __  __  __
 *                     |  ||  ||  |    |  ||  ||  |
 *                     SPC TAB DEL     ENT  MO BKSP
 *                     |__||__||__|    |__||__||__|
 *                          __  __      __  __
 *                         |  ||  |    |  ||  |
 *                         ESC LGUI    SHFT MO
 *                         |__||__|    |__||__|
 */

    [QWERTY] = LAYOUT_split_5x6_5(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,          KC_6,      KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,          KC_Y,      KC_U,    KC_I,    KC_O,    KC_P,    KC_EQL,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,          KC_H,      KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,          KC_N,      KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS,
                          KC_GRV,  KC_LALT, KC_SPC,                            KC_BSPC, KC_LBRC, KC_RBRC,
                          KC_ESC,  KC_LGUI, KC_DEL,  KC_TAB,        MO(FUNC),   KC_ENT,  KC_RSFT, KC_PSTE
    ),
    [FUNC] = LAYOUT_split_5x6_5(
        KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,         KC_F6,     KC_F7,   KC_F8,   KC_F9,    KC_F10, KC_F11,
        KC_NO,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,          KC_6,      KC_7,    KC_8,    KC_9,     KC_0,   KC_F12,
        KC_NO,   KC_NO,   KC_UP,   KC_NO,   KC_END,  KC_NO,         KC_NO,     KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,
        KC_NO,   KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,   KC_NO,         KC_NO,     KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,
                          KC_NO,   KC_NO,   KC_NO,                             KC_NO,   KC_NO,   KC_NO,
                          KC_INS,  KC_NO,   KC_NO,   KC_PSCR,       KC_NO,     KC_NO,   KC_NO,   KC_NO
    )
};
