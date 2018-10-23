/* Copyright 2017 REPLACE_WITH_YOUR_NAME
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "bmc_ergo_linear.h"

#define _______ KC_TRNS
#define XXXXXXX KC_NO

// Each layer gets a name for readability.
// The underscores don't mean anything - you can
// have a layer called STUFF or any other name.
// Layer names don't all need to be of the same
// length, and you can also skip them entirely
// and just use numbers.
#define _BL 0   // base layer
#define _NL 1   // number keypad layer
#define _AL 2   // arrow keys layer
#define _KL 3   // brackets layer
#define _FL 4   // function keys layer


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = KEYMAP( /* Alternate Base */
            KC_1,   KC_2,   KC_3,   KC_4,   KC_5,                   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,            \
            KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_ENT, KC_SPC, KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,            \
    KC_TAB, KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_BSPC,KC_DEL ,KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_BSPC, \
    KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_MINS,TO(3),  KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_QUOT, \
    KC_ESC,                         KC_LALT,KC_LCTL,KC_CAPS,KC_PSCR,MO(1)  ,MO(2),                          KC_RSFT  \
),
[1] = KEYMAP( /* All Other keys */
            KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,                KC_F6  ,KC_F7  ,KC_F8  ,KC_F9  ,KC_F10,         \
            KC_GRV ,KC_LCBR,KC_RCBR,KC_PIPE,KC_SLSH,_______,_______,KC_ASTR,KC_7,   KC_8,   KC_9,   KC_MINS,        \
    _______,KC_TILD,KC_LBRC,KC_RBRC,KC_BSLS,KC_PGUP,_______,_______,KC_SLSH,KC_4,   KC_5,   KC_6,   KC_PLUS,KC_F11, \
    _______,XXXXXXX,KC_INS ,KC_HOME,KC_END ,KC_PGDN,_______,_______,KC_0   ,KC_1,   KC_2,   KC_3,   KC_EQL, KC_F12, \
    _______,                        _______,_______,_______,_______,_______,_______,                        KC_ENT  \
),
[2] = KEYMAP( /* 2nd Arrow Keys */
            XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,         \
            XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,_______,_______,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,         \
    _______,XXXXXXX,KC_LALT,XXXXXXX,XXXXXXX,XXXXXXX,_______,_______,XXXXXXX,KC_LEFT,KC_UP  ,KC_RGHT,KC_RALT,XXXXXXX, \
    _______,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,_______,_______,XXXXXXX,KC_HOME,KC_DOWN,KC_END, XXXXXXX,XXXXXXX, \
    _______,                        _______,_______,_______,_______,_______,_______,                        _______  \
),
[3] = KEYMAP( /* Base */
/*  -       1       2       3       4       5       -       -       6       7       8       9       0       -
    -       q       w       e       r       t       enter   space   y       u       i       o       p       -
    tab     a       s       d       f       g       ?       LY4     h       j       k       l       ;       '-'   
    lshft   z       x       c       v       b       lalt    ?       n       m       ,       .       /       '   
    escvv   -       -       -       LY3     lctl    capslk  prntscn LY1     LY2     -       -       -       rshft
*/
            KC_1,   KC_2,   KC_3,   KC_4,   KC_5,                   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,            \
            KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_ENT, KC_SPC, KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,            \
    KC_TAB, KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_EQL, MO(7),  KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_MINS, \
    KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_LALT,KC_BSLS,KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_QUOT, \
/*    KC_ESC,                         MO(_KL),KC_LCTL,KC_CAPS,KC_PSCR,MO(_NL),MO(_AL),                        KC_RSFT  \*/
    KC_ESC,                         TO(0), KC_LCTL,KC_CAPS,KC_PSCR,MO(4),  MO(5),                           KC_RSFT  \
),
[4] = KEYMAP( /* Number Keypad */
            _______,_______,_______,_______,_______,                _______,KC_7,   KC_8,   KC_9,   _______,         \
            KC_NO  ,KC_INS ,KC_HOME,KC_PGUP,KC_NO  ,_______,_______,KC_SLSH,KC_4,   KC_5,   KC_6,   KC_MINS,         \
    _______,KC_NO  ,KC_DEL ,KC_END ,KC_PGDN,KC_NO  ,_______,_______,KC_ASTR,KC_1,   KC_2,   KC_3,   KC_PLUS,KC_BSPC, \
    _______,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,_______,_______,KC_NO  ,KC_0,   KC_NO  ,KC_DOT, KC_NO  ,KC_ENT,  \
    _______,                        _______,_______,_______,_______,_______,_______,                        _______  \
),
[5] = KEYMAP( /* Arrow Keys */
            KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,                KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,         \
            KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,_______,_______,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,         \
    _______,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,_______,_______,KC_NO  ,KC_LEFT,KC_UP  ,KC_RGHT,KC_NO  ,KC_NO  , \
    _______,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,_______,_______,KC_NO  ,KC_NO  ,KC_DOWN,KC_NO  ,KC_NO  ,KC_NO  , \
    _______,                        _______,_______,_______,_______,_______,_______,                        _______  \
),
[6] = KEYMAP( /* Bracket Keys */
            KC_GRV ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,                KC_NO  ,KC_NO  ,KC_NO  ,KC_LPRN,KC_RPRN,         \
            KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,_______,_______,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_LBRC,         \
    _______,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,_______,_______,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_EQL,KC_RBRC, \
    _______,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,_______,_______,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_BSLS,KC_NO  , \
    _______,                        _______,_______,_______,_______,_______,_______,                        _______  \
),
[7] = KEYMAP( /* Function Keys */
            KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,                KC_F6  ,KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 ,         \
            KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,_______,_______,KC_NO  ,KC_F4  ,KC_F5  ,KC_F6  ,KC_NO  ,         \
    _______,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,_______,_______,KC_NO  ,KC_F1  ,KC_F2  ,KC_F3  ,KC_NO  ,KC_NO  , \
    _______,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,_______,_______,KC_NO  ,KC_F10 ,KC_F11 ,KC_F12 ,KC_NO  ,KC_NO  , \
    _______,                        _______,_______,_______,_______,_______,_______,                        _______  \
),
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};


void matrix_init_user(void) {
    // set CapsLock LED to output and low D6
    DDRD |= ( 1 << 6 );
    PORTD &= ~( 1 << 6 );
    
    //// set NumLock LED to output and low F0
    //DDRF |= ( 1 << 0 );
    //PORTF &= ~( 1 << 0 );
    
    //// set ScrollLock LED to output and low F1
    //DDRF |= ( 1 << 1 );
    //PORTF &= ~( 1 << 1 );
      
//    // set Layer 1 LED to output and low F0
//    DDRF |= ( 1 << 0 );
//    PORTF &= ~( 1 << 0 );
    
    // set Layer 1 LED to output and high F0
    DDRF |= ( 1 << 0 );
    PORTF |= ( 1 << 0 );
    
//    // set Layer 2 LED to output and low F1
//    DDRF |= ( 1 << 1 );
//    PORTF &= ~( 1 << 1 );
      
    // set Layer 2 LED to output and high F1
    DDRF |= ( 1 << 1 );
    PORTF |= ( 1 << 1 );
      
}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {
    if ( usb_led & ( 1 << USB_LED_CAPS_LOCK ) ) {
      PORTD |= ( 1 << 6 );
    } else {
      PORTD &= ~( 1 << 6);
    }
    
    //if (usb_led & (1<<USB_LED_NUM_LOCK)) {
    //  PORTF |= ( 1 << 0 );
    //} else {
    //  PORTF &= ~( 1 << 0 );
    //}
    
    //if (usb_led & (1<<USB_LED_SCROLL_LOCK)) {
    //  PORTF |= ( 1 << 1 );
    //} else {
    //  
    //}
  
}

void layer_1_led_off( void ) {
//    PORTF &= ~( 1 << 0 );   // F0 low
    PORTF |= ( 1 << 0 );    // F0 high
}

void layer_2_led_off( void ) {
//    PORTF &= ~( 1 << 1 );   // F1 low
    PORTF |= ( 1 << 1 );    // F1 high
}

void layer_1_led_on( void ) {
//    PORTF |= ( 1 << 0 );    // F0 high
    PORTF &= ~( 1 << 0 );   // F0 low
}

void layer_2_led_on( void ) {
//    PORTF |= ( 1 << 1 );    // F1 high
    PORTF &= ~( 1 << 1 );   // F1 low
}


// Runs whenever there is a layer state change.
uint32_t layer_state_set_user(uint32_t state) {
  layer_1_led_off();
  layer_2_led_off();
  
  uint8_t layer = biton32(state);
/*  switch (layer) {
      case 0:
        break;
      case 1:               // number pad
        layer_1_led_on();
        break;
      case 2:               // arrows layer
        layer_2_led_on();
        break;
      case 3:               // brackets layer
        layer_1_led_on();
        layer_2_led_on();
        break;
      case 4:               // function keys
        break;
      case 5:               // alternate base layer
        break;
      case 6:               // all other keys layer
        layer_1_led_on();
        break;
      case 7:               // 2nd arrows layer
        layer_2_led_on();
        break;
      default:
        break;
    }*/
  switch (layer) {
      case 0:               // alternate base layer
        break;
      case 1:               // all other keys layer
        layer_1_led_on();
        break;
      case 2:               // 2nd arrows layer
        break;
      case 3:               // base layer
        layer_2_led_on();
        break;
      case 4:               // number pad
        layer_1_led_on();
        layer_2_led_on();
        break;
      case 5:               // arrows layer
        layer_2_led_on();
        break;
      case 6:               // brackets layer
        layer_2_led_on();
        break;
      case 7:               // function keys
        layer_2_led_on();
        break;
      default:
        break;
    }

  return state;
};