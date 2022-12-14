// Copyright 2022 xerootg
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

#define MATRIX_ROWS 10
#define MATRIX_COLS 7

///* serial.c configuration for split keyboard */
//#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
///* 
//   Because the rev1 config defines SOFT_SERIAL_PIN, we need to undef it, redefine it, and also assign 
//   it to avoid a redefine error.
// */
//#define SERIAL_USART_RX_PIN D2     // USART RX pin
//#define SERIAL_USART_TX_PIN D3     // USART TX pin
//
//#define SERIAL_USART_PIN_SWAP    // Swap TX and RX pins if keyboard is master halve.
//                                   // Check if this feature is necessary with your keyboard design and available on the mcu.
//#define SELECT_SOFT_SERIAL_SPEED 1 // or 0, 2, 3, 4, 5
//                                   //  0: 460800 baud
//                                   //  1: 230400 baud (default)
//                                   //  2: 115200 baud
//                                   //  3: 57600 baud
//                                   //  4: 38400 baud
//                                   //  5: 19200 baud
//#define SERIAL_USART_DRIVER SD1    // USART driver of TX and RX pin. default: SD1
//#define SERIAL_USART_TX_PAL_MODE 7 // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 7
//#define SERIAL_USART_RX_PAL_MODE 7 // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 7
//#define SERIAL_USART_TIMEOUT 20    // USART driver timeout. default 20
//

#define SOFT_SERIAL_PIN D2
