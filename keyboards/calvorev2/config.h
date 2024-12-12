#pragma once

#define MATRIX_ROWS 10
#define MATRIX_COLS 7

///* serial.c configuration for split keyboard */
#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
//#define SERIAL_USART_DRIVER SIOD0
//#define SELECT_SOFT_SERIAL_SPEED 1
//
#define SERIAL_USART_RX_PIN GP1     // USART RX pin
#define SERIAL_USART_TX_PIN GP0     // USART TX pin
//#define SERIAL_USART_PIN_SWAP    // Swap TX and RX pins if keyboard is master halve.
//                                   // Check if this feature is necessary with your keyboard design and available on the mcu.
#define SERIAL_PIO_USE_PIO1 // Force the usage of PIO1 peripheral, by default the Serial implementation uses the PIO0 peripheral
