// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌────────────┐
     * │ Prev Track │
     * ├────────────┤
     * │ Play/Pause │
     * ├────────────┤
     * │ Next Track │
     * ├────────────┤
     * │ Vol Ctrl   │
     * └────────────┘
     */
    [0] = LAYOUT(
        KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif