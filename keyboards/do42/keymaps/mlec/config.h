#pragma once

#define VIAL_KEYBOARD_UID {0x0B, 0x9F, 0x90, 0x91, 0x81, 0x04, 0x83, 0xB1}
/* Vial secure unlock - currently using both big keys, like with base do42 */
// #define VIAL_UNLOCK_COMBO_ROWS {4, 9}
// #define VIAL_UNLOCK_COMBO_COLS {5, 5}

/* saving some more space, */
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

// General Settings
#define NKRO_ENABLE
#define DYNAMIC_KEYMAP_LAYER_COUNT 8


#define MASTER_LEFT

#undef SERIAL_USART_FULL_DUPLEX
#undef SERIAL_USART_RX_PIN
#define SERIAL_USART_HALF_DUPLEX
#define SELECT_SOFT_SERIAL_SPEED 5
#define SERIAL_PIO_USE_PIO0

// #define SERIAL_USART_TX_PIN D0
