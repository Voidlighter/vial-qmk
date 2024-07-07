/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0xFB, 0x76, 0xAE, 0x06, 0x25, 0x41, 0x12, 0xC9}
// #define VIAL_KEYBOARD_UID {0x1D, 0x89, 0xD3, 0x4B, 0x70, 0x62, 0x5D, 0xB6}

#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 13 }
#define VIAL_TAP_DANCE_ENTRIES 8       /* Tap Dance 的个数，默认值为 8 */
#define VIAL_COMBO_ENTRIES 8           /* Combo 的个数，默认值为 8 */
#define VIAL_KEY_OVERRIDE_ENTRIES 4
#define DYNAMIC_KEYMAP_LAYER_COUNT 8

//   use timer2 ch1 pwm output, dma1_ch5, PA15
//or use timer2 ch2 pwm output, dma1_ch7, PB3
#define WS2812_PWM_DRIVER PWMD2
#define WS2812_PWM_CHANNEL 2
#define WS2812_PWM_PAL_MODE 2
#define WS2812_DMA_STREAM STM32_DMA1_STREAM7
#define WS2812_DMA_CHANNEL 7

#define MIDI_ADVANCED


// #define RGB_DI_PIN D3

#ifdef RGB_MATRIX_ENABLE

#define RGBLED_NUM 72
#define DRIVER_LED_TOTAL RGBLED_NUM
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 120 // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.
#define RGB_MATRIX_HUE_STEP 8
#define RGB_MATRIX_SAT_STEP 8
#define RGB_MATRIX_VAL_STEP 8
#define RGB_MATRIX_SPD_STEP 10
#define RGB_MATRIX_KEYPRESSES
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_SPLIT {36,36}
#define SPLIT_TRANSPORT_MIRROR

#endif
