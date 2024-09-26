ENCODER_MAP_ENABLE = no

# Vial setup
VIA_ENABLE = yes
VIAL_ENABLE = yes
VIALRGB_ENABLE = no
VIAL_INSECURE = yes


# Saving space on atmega32u4
ifeq ($(strip $(CONVERT_TO)), )
    OLED_ENABLE = no
    MOUSEKEY_ENABLE = no
    COMBO_ENABLE = no
    KEY_OVERRIDE_ENABLE = no
endif

# $(find 'keymaps/mlec/lib/' -type f )


## build targets
# Liatris
# CONVERT_TO = liatris
# promicro
# BOOTLOADER = caterina
