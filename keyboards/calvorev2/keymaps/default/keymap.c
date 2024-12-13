 /* Copyright HarshitGoel96 2020
  * With permission from mattdibi, the original maintainer of the Redox hardware.
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
#include QMK_KEYBOARD_H

enum custom_keycodes {
  _QWERTY,
  _SYMB,
  _NUM,
  _NAV
};

enum combos {
  SD_NAV,
  DF_NUM
};

const uint16_t PROGMEM sd_combo[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM df_combo[] = {KC_D, KC_F, COMBO_END};

combo_t key_combos[] = {
  [DF_NUM] = COMBO(df_combo, MO(_NUM)),
  [SD_NAV] = COMBO(sd_combo, MO(_NAV)),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_split_5x7(
  //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐                         ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRAVE,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,PB_10 ,                            PB_14 ,  KC_6    ,KC_7  ,KC_8    ,KC_9    ,KC_0    ,KC_MINS ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB  ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,KC_T    ,PB_11 ,                            PB_15 ,  KC_Y    ,KC_U  ,KC_I    ,KC_O    ,KC_P    ,KC_BSLS ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_ESC  ,KC_A    ,KC_S    ,KC_D    ,KC_F    ,KC_G    ,PB_12 ,                            PB_16 ,  KC_H    ,KC_J  ,KC_K    ,KC_L    ,KC_SCLN ,KC_QUOT ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT ,KC_Z    ,KC_X    ,KC_C    ,KC_V    ,KC_B    ,PB_13 ,                            PB_17 ,  KC_N    ,KC_M  ,KC_COMM ,KC_DOT  ,KC_SLSH ,KC_RSFT ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┤                         ├────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     KC_LCTL ,KC_LALT ,KC_LGUI ,MO(_SYMB),  KC_SPC,      MO(_NUM),                            KC_ENT  ,   KC_BSPC     ,KC_LSFT,KC_DOWN ,KC_UP   ,KC_RGHT
  //└────────┴────────┴────────┴────────┘   └────────┘   └────────┘                         └────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),
  [_SYMB] = LAYOUT_split_5x7(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,KC_F5  , KC_F6 , XXXXXXX ,                         XXXXXXX ,KC_F7   ,KC_F8   ,KC_F9   ,KC_F10  ,KC_F11 , KC_F12  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,KC_EXLM ,KC_AT   ,KC_HASH ,KC_DLR ,KC_PERC ,_______ ,                         _______ ,KC_PIPE ,KC_PLUS ,KC_EQUAL,KC_LCBR, KC_RCBR, XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_CAPS ,KC_DQUO ,KC_QUOT  ,KC_LT  ,KC_GT   ,KC_GRV ,_______ ,                         _______ ,KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN ,KC_RPRN, XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼                         ┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,S(C(KC_C)),S(C(KC_V)),C(KC_C),C(KC_V),KC_QUES,_______,                        _______ ,KC_BSLS ,KC_MINS, KC_UNDS, KC_LBRC, KC_RBRC ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     _______ ,_______ ,_______ ,_______ ,     _______ ,   _______ ,                         _______     ,_______     ,_______ ,_______ ,_______,  XXXXXXX 
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),
  [_NUM] = LAYOUT_split_5x7(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______ ,_______ ,_______, _______, _______, _______, _______,                         _______, _______, _______, KC_PSLS, KC_PAST,KC_PMNS, _______,  
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,_______ ,_______, _______, _______, _______, _______,                        _______ ,_______ ,KC_KP_7 ,KC_KP_8 ,KC_KP_9 ,KC_PPLS ,_______ ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,_______ ,_______, _______, _______, _______, _______,                        _______ ,_______, KC_KP_4, KC_KP_5, KC_KP_6 ,KC_PDOT,_______ ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼                         ┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,_______ ,_______, _______, _______, _______, _______,                        _______ ,_______ ,KC_KP_1, KC_KP_2 ,KC_KP_3, _______ ,_______ ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     _______ ,_______ ,_______ ,_______ ,    _______ ,    _______ ,                 _______ ,    KC_KP_0    ,     _______   ,_______ ,_______ ,_______ 
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),
  [_NAV] = LAYOUT_split_5x7(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______ ,_______ ,_______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______, _______, _______,  
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,_______ ,_______, _______, _______, _______, _______,                        _______  ,MS_WHLL ,MS_WHLD ,MS_WHLU ,MS_WHLR ,_______ ,_______ ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,_______ ,_______, _______, _______, _______, _______,                        _______ ,KC_LEFT ,KC_DOWN ,KC_UP   ,KC_RIGHT,_______,_______ ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼                         ┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,_______ ,_______, _______, _______, _______, _______,                        _______ ,KC_MS_L ,KC_MS_D ,KC_MS_U ,KC_MS_R, _______ ,_______ ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     _______ ,_______ ,_______ ,_______ ,    _______ ,    _______ ,                 _______ ,    KC_BTN1    ,     KC_BTN2   ,_______ ,_______ ,_______ 
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_QWERTY] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD),  ENCODER_CCW_CW(MS_WHLU, MS_WHLD)  },
    [_SYMB]   = { ENCODER_CCW_CW(PB_1, PB_2),  ENCODER_CCW_CW(PB_3, PB_4)  },
    [_NUM]    = { ENCODER_CCW_CW(PB_5, PB_6),  ENCODER_CCW_CW(PB_7, PB_8)  },
    [_NAV]    = { ENCODER_CCW_CW(PB_6, PB_7),  ENCODER_CCW_CW(PB_8, PB_9)  },
};
#endif

#if defined(DIP_SWITCH_ENABLE)
// Workaround: the keyboard has extra buttons, directly connected to the cpu. As we can't use both them and a matrix,
// let's configure them as dip switches that send keycodes
// This must match the order of the pins in DIP_SWITCH_PINS
// The number of switches is currently hardcoded, can't find a suitable macro/define to get that value from...
const uint16_t PROGMEM dip_switch_map[][1] = {
    [_QWERTY] = { KC_A },
};

bool dip_switch_update_user(uint8_t index, bool active) {
    uint8_t active_layer = biton32(layer_state);
    if (active) {
        register_code(dip_switch_map[active_layer][index]);
    } else {
        unregister_code(dip_switch_map[active_layer][index]);
    }
    return true;
}
#endif