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

#define ENCODER_A_PINS { GP14 }
#define ENCODER_B_PINS { GP15 }
#define ENCODER_RESOLUTIONS { 4 }
#define ENCODER_A_PINS_RIGHT { GP14 }
#define ENCODER_B_PINS_RIGHT { GP15 }
#define ENCODER_RESOLUTIONS_RIGHT { 4 }

#define ENCODER_DEFAULT_POS 0x3