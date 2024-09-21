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

LIB_SRC+=keymaps/mlec/lib/oled/oled_helpers.c
LIB_SRC+=keymaps/mlec/lib/rgb/rgb_helpers.c
LIB_SRC+=keymaps/mlec/lib/layers/layer_helpers.c
LIB_SRC+=keymaps/mlec/lib/gaming/gaming_helpers.c

## build targets
# Liatris
# CONVERT_TO = liatris
# promicro
# BOOTLOADER = caterina



OPT_DEFS += -DPOINTING_DEVICE_CONFIGURATION_CIRQUE35
POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = cirque_pinnacle_i2c

MSG_POINTING_DEVICE = cirque35 touchpad