#pragma once

#define VIAL_KEYBOARD_UID {0xD0, 0x9D, 0xCE, 0x77, 0x81, 0x8A, 0xF6, 0x97}
/* Vial secure unlock - currently using both big keys, like with base do42 */
#define VIAL_UNLOCK_COMBO_ROWS {4, 9}
#define VIAL_UNLOCK_COMBO_COLS {5, 5}

/* saving some more space, */
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE


#define MASTER_LEFT