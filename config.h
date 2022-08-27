#define MOUSEKEY_DELAY  55 // Delay between pressing a movement key and cursor movement
#define MOUSEKEY_INTERVAL   125 // Time between cursor movements in milliseconds
#define MOUSEKEY_MOVE_DELTA 8 //  Step size
#define MOUSEKEY_MAX_SPEED  10 // Maximum cursor speed at which acceleration stops
#define MOUSEKEY_TIME_TO_MAX    1 // Time until maximum cursor speed is reached
#define MOUSEKEY_WHEEL_DELAY    10 // Delay between pressing a wheel key and wheel movement
#define MOUSEKEY_WHEEL_INTERVAL 80 // Time between wheel movements
#define MOUSEKEY_WHEEL_MAX_SPEED    8 //  Maximum number of scroll steps per scroll action
#define MOUSEKEY_WHEEL_TIME_TO_MAX  40 // Time until maximum scroll speed is reached

// Configure the global tapping term (default: 200ms)
// Higher number makes it easier to use home row mods
#define TAPPING_TERM 400

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// https://docs.qmk.fm/#/tap_hold?id=hold-on-other-key-press
// If you press a dual-role key, press another key, and then release the dual-role key, all within the tapping term, by default the dual-role key will perform its tap action. If the HOLD_ON_OTHER_KEY_PRESS option is enabled, the dual-role key will perform its hold action instead.
// #define HOLD_ON_OTHER_KEY_PRESS

// #define AUTO_SHIFT_TIMEOUT 150

// Do not Auto Shift special keys, which include -_, =+, [{, ]}, ;:, ‘“, ,<, .>, and /?
#define NO_AUTO_SHIFT_SPECIAL

// Do not Auto Shift numeric keys, zero through nine.
// #define NO_AUTO_SHIFT_NUMERIC

// Do not Auto Shift alpha characters, which include A through Z.
#define NO_AUTO_SHIFT_ALPHA

//  removing locking support to reduce firmware size
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
