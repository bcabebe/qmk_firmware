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
#include "bmc_ergo_lin_52.h"

#define _______ KC_TRNS
#define XXXXXXX KC_NO

enum custom_keycodes {
    DOUBLE_ZERO_MACRO = SAFE_RANGE
};


// Each layer gets a name for readability.
// The underscores don't mean anything - you can
// have a layer called STUFF or any other name.
// Layer names don't all need to be of the same
// length, and you can also skip them entirely
// and just use numbers.
#define _BL 0   // base layer
#define _NL 1   // number keypad layer
#define _AL 2   // arrow keys layer


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = KEYMAP( /* Base */
//                       ,------.                                          ,------.
//                ,------|   3  |-------------.              .-------------|   8  |------.              
//         ,------+   2  +------+   4  |   5  |              |   6  |   7  +------+   9  +------.       
//         |   1  +------+   E  +------+------|              |------+------+   I  +------+   0  |       
//  ,------+------+   W  +------+   R  |   T  |              |   Y  |   U  +------+   O  +------+------.
//  | Esc  |   Q  +------+   D  +------+------|              |------+------+   K  +------+   P  | Bksp |
//  |------+------+   S  +------+   F  |   G  |              |   H  |   J  +------+   L  +------+------|
//  | Tab  |   A  +------+   C  +------+------|              |------+------+   ,  +------+   ;  |  '   |
//  |------+------+   X  +------+   V  |   B  |              |   N  |   M  +------+   .  +------+------|
//  | OSM-S|   Z  +------'      `-------------'              `-------------'      `------+   /  | Enter|
//  `-------------'             ,--------------------.,--------------------.             `-------------'
//                              |  Spc |  Spc |  F2  ||Ctl-F2|  Spc |  Spc |                            
//                              `--------------------'`--------------------'
//
//                       ,------.                                          ,------.
//                ,------|   #  |-------------.              .-------------|   *  |------.              
//         ,------+   @  +------+   $  |   %  |              |   ^  |   &  +------+   (  +------.       
//         |   !  +------+      +------+------|              |------+------+      +------+   )  |       
//  ,------+------+      +------+      |      |              |      |      +------+      +------+------.
//  | Win  |      +------+      +------+------|              |------+------+      +------+      |      |
//  |------+------+      +------+      |      |              |      |      +------+      +------+------|
//  | Alt  |      +------+      +------+------|              |------+------+   <  +------+   :  |  "   |
//  |------+------+      +------+      |      |              |      |      +------+   >  +------+------|
//  | Shift|      +------'      `-------------'              `-------------'      `------+   ?  | Shift|
//  `-------------'             ,--------------------.,--------------------.             `-------------'
//                              | Ctrl | Ctrl |  F2  ||Ctl-F2|  LY2 |  LY1 |                            
//                              `--------------------'`--------------------'
                  KC_1,             KC_2,   KC_3,   KC_4,         KC_5,                             KC_6,        KC_7,        KC_8,   KC_9,   KC_0,            \
    GUI_T(KC_ESC),KC_Q,             KC_W,   KC_E,   KC_R,         KC_T,                             KC_Y,        KC_U,        KC_I,   KC_O,   KC_P,   KC_BSPC, \
    ALT_T(KC_TAB),KC_A,             KC_S,   KC_D,   KC_F,         KC_G,                             KC_H,        KC_J,        KC_K,   KC_L,   KC_SCLN,KC_QUOT, \
    OSM(MOD_LSFT),KC_Z,             KC_X,   KC_C,   KC_V,         KC_B,                             KC_N,        KC_M,        KC_COMM,KC_DOT, KC_SLSH,MT(MOD_RSFT, KC_ENT), \
                                                    KC_F2,CTL_T(KC_SPC),LT(1,KC_SPC),LT(1,KC_SPC),LT(2,KC_SPC),LCTL(KC_F2)                                  \
),
[1] = KEYMAP( /* All Other keys */
//                       ,------.                                          ,------.
//                ,------|      |-------------.              .-------------|      |------.              
//         ,------+      +------+      |      |              |      |      +------+  F11 +------.       
//         |      +------+      +------+------|              |------+------+   8  +------+  F12 |       
//  ,------+------+      +------+      |      |              |   *  |   7  +------+   9  +------+------.
//  | Esc  |      +------+      +------+------|              |------+------+   5  +------+   -  | Bksp |
//  |------+------+      +------+      |      |              |   /  |   4  +------+   6  +------+------|
//  | Tab  |      +------+      +------+------|              |------+------+   2  +------+   +  |      |
//  |------+------+      +------+      |      |              |   0  |   1  +------+   3  +------+------|
//  | OSM-S|  00  +------'      `-------------'              `-------------'      `------+   =  | Enter|
//  `-------------'             ,--------------------.,--------------------.             `-------------'
//                              |  Spc |  Spc |  F2  ||Ctl-F2|  Spc |  Spc |                            
//                              `--------------------'`--------------------'
                  XXXXXXX,          XXXXXXX,XXXXXXX,XXXXXXX,      XXXXXXX,                          XXXXXXX,     XXXXXXX,     XXXXXXX,KC_F11, KC_F12,          \
    _______,      XXXXXXX,          XXXXXXX,XXXXXXX,XXXXXXX,      XXXXXXX,                          KC_ASTR,     KC_7,        KC_8,   KC_9,   KC_MINS,_______, \
    _______,      XXXXXXX,          XXXXXXX,XXXXXXX,XXXXXXX,      XXXXXXX,                          KC_SLSH,     KC_4,        KC_5,   KC_6,   KC_PLUS,XXXXXXX, \
    _______,      DOUBLE_ZERO_MACRO,XXXXXXX,XXXXXXX,XXXXXXX,      XXXXXXX,                          KC_0,        KC_1,        KC_2,   KC_3,   KC_EQL, _______, \
                                                    _______,      _______,      _______,_______,    _______,     _______                                       \
),
[2] = KEYMAP( /* Arrow Keys */
//                       ,------.                                          ,------.
//                ,------|  F3  |-------------.              .-------------|  F8  |------.              
//         ,------+  F2  +------+  F4  |  F5  |              |  F6  |  F7  +------+  F9  +------.       
//         |  F1  +------+   }  +------+------|              |------+------+      +------+  F10 |       
//  ,------+------+   {  +------+   |  | PgUp |              |      |  Del +------+      +------+------.
//  | Tab  |   `  +------+   ]  +------+------|              |------+------+  Up  +------+   -  | Bksp |
//  |------+------+   [  +------+      |   0  |              |   1  |  <-  +------+  ->  +------+------|
//  | Esc  |   ~  +------+ PrtSc+------+------|              |------+------+  Dn  +------+      | Ins  |
//  |------+------+      +------+      | PgDn |              |   0  | Home +------+  End +------+------|
//  | Shift|      +------'      `-------------'              `-------------'      `------+   \  | Enter|
//  `-------------'             ,--------------------.,--------------------.             `-------------'
//                              |  Spc |  Spc |  F2  ||Ctl-F2|  Spc |  Spc |                            
//                              `--------------------'`--------------------'
                  KC_F1,            KC_F2,  KC_F3,  KC_F4,        KC_F5,                            KC_F6,       KC_F7,       KC_F8,  KC_F9,  KC_F10,          \
    _______,      KC_GRV,           KC_LCBR,KC_RCBR,KC_PIPE,      KC_PGUP,                          XXXXXXX,     KC_DEL,      XXXXXXX,XXXXXXX,KC_MINS,_______, \
    _______,      KC_TILD,          KC_LBRC,KC_RBRC,XXXXXXX,      KC_0,                             KC_1,        KC_LEFT,     KC_UP  ,KC_RGHT,XXXXXXX,KC_INS,  \
    _______,      XXXXXXX,          XXXXXXX,KC_PSCR,XXXXXXX,      KC_PGDN,                          KC_0,        KC_HOME,     KC_DOWN,KC_END, KC_BSLS,_______, \
                                                    _______,      _______,      _______,_______,    _______,     _______                                       \
),
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    // MACRODOWN only works in this function
      
    //switch(id) {
    //  case 0:
    //    if (record->event.pressed) {
    //      register_code(KC_RSFT);
    //    } else {
    //      unregister_code(KC_RSFT);
    //    }
    //  break;
    //}
    
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
    
    int8_t locked_mods;
     
    locked_mods = get_oneshot_locked_mods();                // if the shift key is locked from a oneshot mod toggle
    
    if ( locked_mods & ( ( MOD_LSFT << 4 ) | MOD_LSFT ) ) {
        PORTD |= ( 1 << 6 );                                //   then turn on caps lock LED
    } else {                                                // else
        PORTD &= ~( 1 << 6);                                //   turn off caps lock LED
    }
    
    if (record->event.pressed) {
        switch(keycode) {
            case DOUBLE_ZERO_MACRO :
                SEND_STRING("00");
                return false;
                
                break;
                
            default :
                //return true;
            
                break;
            
        }
    }
    
    return true;
}

void led_set_user(uint8_t usb_led) {
    //if ( usb_led & ( 1 << USB_LED_CAPS_LOCK ) ) {
    //  PORTD |= ( 1 << 6 );          // turn on caps lock LED
    //} else {
    //  PORTD &= ~( 1 << 6);          // turn off caps lock LED
    //}
    
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
  switch (layer) {
      case 0:               // alternate base layer
        break;
      case 1:               // all other keys layer
        layer_1_led_on();
        break;
      case 2:               // 2nd arrows layer
        layer_2_led_on();
        break;
      default:
        break;
    }

  return state;
};