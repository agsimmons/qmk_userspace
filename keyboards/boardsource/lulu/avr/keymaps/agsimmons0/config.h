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

// ----- OLED Display ---------------------------------------------------------
#define SPLIT_OLED_ENABLE

// ----- RGB Matrix -----------------------------------------------------------
// https://docs.qmk.fm/#/feature_split_keyboard?id=data-sync-options
// Used for RGB Matrix Multisplash Effect
#define SPLIT_TRANSPORT_MIRROR

#define ENABLE_RGB_MATRIX_MULTISPLASH

// ----- Misc -----------------------------------------------------------------
#define RGB_DISABLE_WHEN_USB_SUSPENDED
