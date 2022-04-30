// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  //
  // ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
  // │TAB│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │   │
  // ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
  // │SFT│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │   │
  // ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
  // │CTL│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │   │
  // └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
  //      ┌─────┬─────┬──────┐       ┌───┬─────┬──────┐
  //      │Tab  │ Q   │ BSPC │       │ENT│ SPC │ Esc  │ (tap)
  //      │Alt L│ GUI │ L1   │       │L2 │Shift│ Alt R│ (hold)
  //      └─────┴─────┴──────┘       └───┴─────┴──────┘
  //
  //   LH     LH    LH      RH     RH     RH
  //   Ctrl  Layer1  Cmd    Shift  Layer2  Alt
  //   Tab   Enter   Space  Esc
  [0] = LAYOUT_split_3x6_3(
      KC_TAB  , KC_Q , KC_W , KC_E , KC_R , KC_T /**/ , /**/ KC_Y , KC_U , KC_I    , KC_O   , KC_P    , KC_BSPC ,
      KC_LSFT , KC_A , KC_S , KC_D , KC_F , KC_G /**/ , /**/ KC_H , KC_J , KC_K    , KC_L   , KC_SCLN , KC_QUOT ,
      KC_LCTL , KC_Z , KC_X , KC_C , KC_V , KC_B /**/ , /**/ KC_N , KC_M , KC_COMM , KC_DOT , KC_SLSH , KC_RSFT ,
      /*-------------------------------------------------------------------------------------------------------*/
      LALT_T(KC_TAB), LGUI_T(KC_SPC) , LT(1, KC_BSPC) /**/ , /**/ LT(2, KC_ENT) , LSFT_T(KC_SPC) , RALT_T(KC_ESC)
  ),
  
  // ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
  // │   │   │   │   │   │   │       │   │ 7 │ 8 │ 9 │   │   │
  // ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
  // │   │   │   │   │   │   │       │   │ 4 │ 5 │ 6 │   │   │
  // ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
  // │   │   │   │   │   │   │       │   │ 1 │ 2 │ 3 │   │   │
  // └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
  //      ┌─────┬─────┬──────┐       ┌───┬───┬───┐
  //      │     │     │      │       │   │   │ 0 │
  //      └─────┴─────┴──────┘       └───┴───┴───┘
  [1] = LAYOUT_split_3x6_3(
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO/**/ , /**/ KC_NO, KC_P7, KC_P8, KC_P9, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO/**/ , /**/ KC_NO, KC_P4, KC_P5, KC_P6, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO/**/ , /**/ KC_NO, KC_P1, KC_P2, KC_P3, KC_NO, KC_NO,
      /*-------------------------------------------------------------------------------------------------------*/
      KC_NO , KC_NO , KC_NO/**/ , /**/ KC_NO , KC_NO , KC_P0
  ),
  // ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
  // │   │   │   │   │   │   │       │   │   │   │   │   │   │
  // ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
  // │   │   │   │   │   │   │       │   │   │   │   │   │   │
  // ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
  // │   │   │   │   │   │   │       │   │   │   │   │   │   │
  // └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
  //      ┌─────┬─────┬──────┐       ┌───┬─────┬──────┐
  //      │     │     │      │       │   │     │      │ (tap)
  //      │     │     │      │       │   │     │      │ (hold)
  //      └─────┴─────┴──────┘       └───┴─────┴──────┘
  [2] = LAYOUT_split_3x6_3(
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO/**/ , /**/ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO/**/ , /**/ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO/**/ , /**/ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
      /*-------------------------------------------------------------------------------------------------------*/
      KC_NO , KC_NO , KC_NO/**/ , /**/ KC_NO , KC_NO , KC_NO
  ),
};

