#include QMK_KEYBOARD_H
#include <stdio.h>
// #include "a2j/translate_ansi_to_jis.h"
#include "jtu_custom_keycodes.h"
 
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┐   ┌───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │   │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ ~ │BS │
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┐ └─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
     * │ Tab │ Q │ W │ E │ R │ T │   │ Y │ U │ I │ O │ P │ [ │ ] │  \  │
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  └┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
     * │ Caps │ A │ S │ D │ F │ G │   │ H │ J │ K │ L │ ; │ ' │ Enter  │
     * ├──────┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  └┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬───┬───┤
     * │ Shift │ Z │ X │ C │ V │ B │   │ N │ M │ , │ . │ / │ S │ ↑ │L1 │
     * ├────┬──┴─┬─┴──┬┴───┴┬──┴──┬┘  ┌┴───┴┬──┴─┬─┴──┬┴───┼───┼───┼───┤
     * │Ctrl│GUI │Alt │ Spc │ Spc │   │ Spc │Alt │menu│Ctrl│ ← │ ↓ │ → │
     * └────┴────┴────┴─────┴─────┘   └─────┴────┴────┴────┴───┴───┴───┘
     * Push: 上:↑ 下:↓    左:← 右:→            左:PgDn Push:Home 右:PgUp
     */
    [0] = LAYOUT(
        KC_CAPS, KC_1,    JU_2,    KC_3,    KC_4,    KC_5,        JU_6,    JU_7,    JU_8,    JU_9,    JU_0,    JU_MINS, JU_EQL,  KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    JU_LBRC, JU_RBRC, JU_BSLS,
        JU_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,        KC_H,    KC_J,    KC_K,    KC_L,    JU_SCLN, JU_QUOT, KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_SLSH, KC_UP,
        LCTL_T(KC_ESC),KC_LGUI, KC_LALT,  KC_SPC, LT(1,KC_SPC),   LT(1,KC_SPC), KC_SPC, KC_RALT, KC_RCTL,      KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT(
        JU_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10 , KC_F11,  KC_F12,  KC_TRNS,
        KC_TRNS, KC_PGUP, KC_UP,   KC_PGDN, KC_HOME, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_TOG, KC_SCROLL_LOCK,
        KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,  KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_BSPC, KC_DEL,  KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_ENT,  KC_TRNS,              KC_TRNS, KC_ENT,  KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [2] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS, KC_ENT,  KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  bool continue_process = process_record_user_jtu(keycode, record);
  if (continue_process == false) {
    return false;
  }
//   return process_record_user_a2j(keycode, record);
  return true;
}
