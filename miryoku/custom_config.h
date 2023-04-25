# Uncomment the following lines to enable the Corne RGB Underglow
# CONFIG_ZMK_RGB_UNDERGLOW=y
# CONFIG_WS2812_STRIP=y

# Uncomment the following line to enable the Corne OLED Display
# CONFIG_ZMK_DISPLAY=y
# CONFIG_ZMK_DISPLAY_WORK_QUEUE_DEDICATED=y

CONFIG_ZMK_KEYBOARD_NAME="Piotrs\ Corne"

# increase bluetooth signal power
CONFIG_BT_CTLR_TX_PWR_PLUS_8=y

# enable deep sleep support
CONFIG_ZMK_SLEEP=y

# the keyboard disconnects from bluetooth.
# uses very little power, but it may take
# a few seconds to reconnect after waking.
# 1.800.000 ms = 30 minutes
CONFIG_ZMK_IDLE_SLEEP_TIMEOUT=900000

# "Eager Debouncing"
# Trying to lower the input lag.
# CONFIG_ZMK_KSCAN_DEBOUNCE_PRESS_MS=1
# CONFIG_ZMK_KSCAN_DEBOUNCE_RELEASE_MS=5
