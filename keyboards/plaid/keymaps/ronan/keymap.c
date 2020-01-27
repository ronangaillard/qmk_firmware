#include QMK_KEYBOARD_H

enum ronan_layers {
  _QWERTY,
  _GRAVE,
  _NUMBERS,
  _SYMBOLS,
  _MISC_N_MEDIA
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_QWERTY] = LAYOUT_plaid_grid(
    KC_TAB ,  KC_Q,    KC_W,    KC_E,    KC_R,  KC_T,   KC_Y,   KC_U,  KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_GESC,  KC_A,    KC_S,    KC_D,    KC_F,  KC_G,   KC_H,   KC_J,  KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSPO,  KC_Z,    KC_X,    KC_C,    KC_V,  KC_B,   KC_N,   KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_SFTENT,
    MO(_MISC_N_MEDIA),    KC_LCTL, KC_LALT, KC_LGUI, MO(_NUMBERS), KC_SPC, KC_SPC, MO(_SYMBOLS), KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
  ),

	[_SYMBOLS] = LAYOUT_plaid_grid(
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR,       KC_ASTR,       KC_LPRN, KC_RPRN, KC_BSPC, 
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,   KC_NO,   KC_UNDS,       KC_PLUS,       KC_LCBR, KC_RCBR, KC_PIPE, 
    KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,   KC_NO,   LSFT(KC_NUHS), LSFT(KC_NUBS),  KC_NO,   KC_END,  KC_TRNS, 
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS,       KC_MNXT,       KC_PGDN, KC_PGUP, KC_MPLY
  ),

	[_NUMBERS] = LAYOUT_plaid_grid(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC, 
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, 
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NUHS, KC_NUBS, KC_NO,   KC_NO,   KC_TRNS, 
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
   ),

	[_MISC_N_MEDIA] = LAYOUT_plaid_grid(
    KC_NO,   KC_BTN1, KC_MS_U, KC_BTN2, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,       KC_NO,     KC_DEL, 
    KC_NO,   KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_NO, LCTL(KC_LEFT), KC_NO,   KC_NO,   LCTL(KC_RIGHT),     KC_NO,     KC_NO, 
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,       KC_NO,     KC_NO, 
    KC_TRNS, KC_NO,   KC_NO,   KC_TRNS, KC_NO, KC_NO, KC_NO, KC_MPLY, KC_MPRV, KC__VOLDOWN, KC__VOLUP, KC_MNXT
  )

};

void keyboard_post_init_user(void) {
    writePinHigh(LED_RED);

}
