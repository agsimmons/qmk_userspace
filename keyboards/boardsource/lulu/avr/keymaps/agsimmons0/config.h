#pragma once

// ===== Resets ===============================================================
// ----- RGB Matrix -----------------------------------------------------------
#undef ENABLE_RGB_MATRIX_ALPHAS_MODS
#undef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#undef ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#undef ENABLE_RGB_MATRIX_BREATHING
#undef ENABLE_RGB_MATRIX_BAND_SAT
#undef ENABLE_RGB_MATRIX_BAND_VAL

// ===== Customizations =======================================================
// ----- Behavior -------------------------------------------------------------
// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 200

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 0

// Home row mods: hold if another key is tapped while the mod-tap is held.
#define PERMISSIVE_HOLD

// Home row mods: only resolve as a hold when chorded with the opposite hand
// (handedness is defined by chordal_hold_layout in keymap.c).
#define CHORDAL_HOLD

// Home row mods: always tap when pressed within 150ms of the previous key,
// so fast typing never triggers a modifier.
#define FLOW_TAP_TERM 150

// ----- Split ----------------------------------------------------------------
// RP2040 (blok) halves pick master by waiting for USB traffic (SPLIT_USB_DETECT).
// On a cold boot the host can take longer than SPLIT_USB_TIMEOUT to enumerate,
// leaving both halves as slave and the keyboard dead. The watchdog reboots a
// slave that hears nothing from a master, so it re-runs detection.
#define SPLIT_WATCHDOG_ENABLE

// ----- OLED Display ---------------------------------------------------------
#define SPLIT_OLED_ENABLE

// ----- RGB Matrix -----------------------------------------------------------
// https://docs.qmk.fm/#/feature_split_keyboard?id=data-sync-options
// Used for RGB Matrix Multisplash Effect
#define SPLIT_TRANSPORT_MIRROR

#define ENABLE_RGB_MATRIX_MULTISPLASH

// ----- Misc -----------------------------------------------------------------
#define RGB_MATRIX_SLEEP
