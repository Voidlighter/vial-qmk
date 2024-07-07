#include QMK_KEYBOARD_H
#include "w_corne.h"
// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _SYMB 1
#define _NAV 2
#define _ADJUST 3

#define _BASE 0
#define _SYMBOLS 1
#define _NUMBERS 2
#define _RH_MOD 3
#define _LH_MOD 4
#define _LH_NAV 5
#define _MOD7 6
#define _MOD8 7


enum custom_keycodes {
    BASE = SAFE_RANGE,
    SYMBOLS,
    NUMBERS,
    RH_MOD,
    LH_MOD,
    LH_NAV,
    MOD7,
    MOD8
};

// Shortcut to make keymap more readable
// #define SYM_L   MO(_SYMB)

// #define KC_ALAS LALT_T(KC_PAST)
// #define KC_CTPL LCTL_T(KC_BSLS)

// #define KC_NAGR LT(_NAV, KC_GRV)
// #define KC_NAMI LT(_NAV, KC_MINS)

// #define KC_ADEN LT(_ADJUST, KC_END)
// #define KC_ADPU LT(_ADJUST, KC_PGUP)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     *    ┌───┐  ┌───┬───┬───┬───┬───┬───┬───┐         ┌───┬───┬───┬───┬───┬───┬───┐
     *    │Esc│  │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │         │ 7 │ 8 │ 9 │ 0 │ - │ = │Bsp│
     *   ┌┴──┬┘ ┌┴───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┘       ┌─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┐
     *   │PUp│  │ Tab │ Q │ W │ E │ R │ T │          │ Y │ U │ I │ O │ P │ [ │ ] │   \  │
     *  ┌┴──┬┘ ┌┴─────┼───┼───┼───┼───┼───┤          └┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴──────┴┐
     *  │PDn│  │ Caps │ A │ S │ D │ F │ G │           │ H │ J │ K │ L │ ; │ ' │   Enter  │
     * ┌┴──┬┘ ┌┴──────┴┬──┴┬──┴┬──┴┬──┴┬──┴┐        ┌─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴──┬┴──────────┴┐
     * │Del│  │ Shift  │ Z │ X │ C │ V │ B │        │ N │ M │ , │ . │ / │ Up │    Shift   │
     * └───┘  ├─────┬──┴──┬┴───┴┬──┴───┴┬──┴──┐     ├───┴───┴──┬┴───┴┬──┴────┴─────┬──┴──┬┘
     *        │ Ctl │     │ Alt │       │ GUI │     │          │ Alt │             │ Ctl │
     *        └─────┘     └─────┴───────┴─────┘     └──────────┴─────┘             └─────┘
     */
    [_BASE] = LAYOUT(
      KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,
       KC_ENTER, KC_P, KC_O, KC_I, KC_U, KC_Y,
      KC_BSPC, KC_A, KC_S, KC_D, KC_F, KC_G,
       KC_ENT, KC_SCLN, KC_L, KC_K, KC_J, KC_H,
      KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B,
       KC_RSFT, KC_UP, KC_DOT, KC_COMM, KC_M, KC_N,
                                        KC_LCTL, KC_LGUI, KC_SPC,
                                        KC_LCTL, KC_LGUI, KC_SPC
    ),
    [_SYMBOLS] = LAYOUT(
      KC_ESC, LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5),
       LSFT(KC_EQUAL), KC_MINUS, KC_EQUAL, LSFT(KC_MINUS), KC_TRNS, KC_TRNS,
      KC_DELETE, LSFT(KC_6), LSFT(KC_7), LSFT(KC_8), KC_SLASH, LSFT(KC_BSLASH),
       KC_RBRACKET, KC_LBRACKET, LSFT(KC_0), LSFT(KC_9), M0, KC_TRNS,
      KC_TRNS, KC_TRNS, LSFT(KC_LBRACKET), KC_RBRACKET, KC_COMMA, KC_DOT,
       KC_GRAVE, KC_BSLASH, KC_TRNS, KC_TRNS, LSFT(KC_GRAVE), KC_TRNS,
                                        KC_TRNS, KC_TRNS, KC_TRNS,
                                        KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [_NUMBERS] = LAYOUT(
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                        KC_TRNS, KC_TRNS, KC_TRNS,
                                        KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [_RH_MOD] = LAYOUT(
      KC_ESC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      LCTL(KC_BSPC), KC_LGUI, KC_LALT, KC_LSHIFT, KC_LCTRL, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                        KC_TRNS, KC_TRNS, KC_TRNS,
                                        KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [_LH_MOD] = LAYOUT(
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                        KC_TRNS, KC_TRNS, KC_TRNS,
                                        KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [_LH_NAV] = LAYOUT(
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                        KC_TRNS, KC_TRNS, KC_TRNS,
                                        KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [_MOD7] = LAYOUT(
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                        KC_TRNS, KC_TRNS, KC_TRNS,
                                        KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [_MOD8] = LAYOUT(
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                        KC_TRNS, KC_TRNS, KC_TRNS,
                                        KC_TRNS, KC_TRNS, KC_TRNS
    )


};

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case _BASE:
            break;
        case _SYMBOLS:
            break;
        case _NUMBERS:
            break;
        case _RH_MOD:
            break;
        case _LH_MOD:
            break;
        case _LH_NAV:
            break;
        case _MOD7:
            break;
        case _MOD8:
            break;
        default:
            break;
    }
  return state;
}

// led_config_t g_led_config = { {
//         {0, 1, 2, 3}
//     }, {
//         // LED 对应到物理位置，可以参考下面这个公式
//         // x = 224 / (NUMBER_OF_COLS - 1) * COL_POSITION
//         // y = 64 / (NUMBER_OF_ROWS - 1) * ROW_POSITION
//         {0, 0}, {75, 0}, {149, 0}, {224, 0}

//     }, {
//         // 分组，如果没有自己做灯光的需求用处其实不大
//         1, 1, 1, 1
//     }
// };

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int: %u, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
#endif
  return true;
}
