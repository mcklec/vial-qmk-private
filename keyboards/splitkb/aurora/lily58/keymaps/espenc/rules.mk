ENCODER_MAP_ENABLE = yes

# Vial setup
VIA_ENABLE = yes
VIAL_ENABLE = yes
VIALRGB_ENABLE = yes

# Saving space on atmega32u4
ifeq ($(strip $(CONVERT_TO)), )
    OLED_ENABLE = no
    MOUSEKEY_ENABLE = no
    COMBO_ENABLE = no
    KEY_OVERRIDE_ENABLE = no
endif

# $(find 'keymaps/mlec/lib/' -type f )

LIB_SRC+=keymaps/espenc/lib/oled/oled_helpers.c
LIB_SRC+=keymaps/espenc/lib/rgb/rgb_helpers.c
LIB_SRC+=keymaps/espenc/lib/layers/layer_helpers.c
LIB_SRC+=keymaps/espenc/lib/gaming/gaming_helpers.c

## build targets
# Liatris
# CONVERT_TO = liatris
# promicro
# BOOTLOADER = caterina
