// Copyright 2022 Jordi Amoros (@Jordi Amoros)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 5 
#define MATRIX_COLS 7

// wiring of each half
//#define MATRIX_ROW_PINS { D6, D7, D8, D9, F4 }
//#define MATRIX_COL_PINS { D2, D3, D4, D5, F5, F6, F7 }
// #define MATRIX_COL_PINS { B6, B2, B3, B1, F7, F6, F5} //uncomment this line and comment line above if you need to reverse left-to-right key order

/* COL2ROW or ROW2COL */
//#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* number of backlight levels */
// #define BACKLIGHT_LEVELS 3

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* serial.c configuration for split keyboard */
//#define SOFT_SERIAL_PIN D0

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* ws2812 RGB LED */
//#define RGB_DI_PIN D3

//#define RGBLED_NUM 14    // Number of LEDs

//#define RGBLIGHT_SPLIT   // sync LEDs between RIGHT and LEFT hand

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
