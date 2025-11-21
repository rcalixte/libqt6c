#pragma once
#ifndef SRC_FOSS_EXTRAS_KWINDOWSYSTEM_QT6C_LIBKKEYSERVER_H
#define SRC_FOSS_EXTRAS_KWINDOWSYSTEM_QT6C_LIBKKEYSERVER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kkeyserver.html

/// [Qt documentation](https://api.kde.org/kkeyserver.html#modToStringUser)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 uint32_t
const char* k_keyserver_mod_to_string_user(uint32_t param1);

/// [Qt documentation](https://api.kde.org/kkeyserver.html#stringUserToMod)
///
/// @param param1 const char*
uint32_t k_keyserver_string_user_to_mod(const char* param1);

/// [Qt documentation](https://api.kde.org/kkeyserver.html#isShiftAsModifierAllowed)
///
/// @param param1 int
bool k_keyserver_is_shift_as_modifier_allowed(int param1);

/// [Qt documentation](https://api.kde.org/kkeyserver.html#initializeMods)
///
bool k_keyserver_initialize_mods();

/// [Qt documentation](https://api.kde.org/kkeyserver.html#keyboardHasMetaKey)
///
bool k_keyserver_keyboard_has_meta_key();

/// [Qt documentation](https://api.kde.org/kkeyserver.html#modXShift)
///
uint32_t k_keyserver_mod_x_shift();

/// [Qt documentation](https://api.kde.org/kkeyserver.html#modXLock)
///
uint32_t k_keyserver_mod_x_lock();

/// [Qt documentation](https://api.kde.org/kkeyserver.html#modXCtrl)
///
uint32_t k_keyserver_mod_x_ctrl();

/// [Qt documentation](https://api.kde.org/kkeyserver.html#modXAlt)
///
uint32_t k_keyserver_mod_x_alt();

/// [Qt documentation](https://api.kde.org/kkeyserver.html#modXMeta)
///
uint32_t k_keyserver_mod_x_meta();

/// [Qt documentation](https://api.kde.org/kkeyserver.html#modXNumLock)
///
uint32_t k_keyserver_mod_x_num_lock();

/// [Qt documentation](https://api.kde.org/kkeyserver.html#modXScrollLock)
///
uint32_t k_keyserver_mod_x_scroll_lock();

/// [Qt documentation](https://api.kde.org/kkeyserver.html#modXModeSwitch)
///
uint32_t k_keyserver_mod_x_mode_switch();

/// [Qt documentation](https://api.kde.org/kkeyserver.html#accelModMaskX)
///
uint32_t k_keyserver_accel_mod_mask_x();

/// [Qt documentation](https://api.kde.org/kkeyserver.html#keyQtToSymX)
///
/// @param param1 int
/// @param param2 int*
bool k_keyserver_key_qt_to_sym_x(int param1, int* param2);

/// [Qt documentation](https://api.kde.org/kkeyserver.html#keyQtToSymXs)
///
/// @param param1 int
libqt_list /* of int */ k_keyserver_key_qt_to_sym_xs(int param1);

/// [Qt documentation](https://api.kde.org/kkeyserver.html#keyQtToCodeX)
///
/// @param param1 int
/// @param param2 int*
bool k_keyserver_key_qt_to_code_x(int param1, int* param2);

/// [Qt documentation](https://api.kde.org/kkeyserver.html#keyQtToCodeXs)
///
/// @param param1 int
libqt_list /* of int */ k_keyserver_key_qt_to_code_xs(int param1);

/// [Qt documentation](https://api.kde.org/kkeyserver.html#keyQtToModX)
///
/// @param param1 int
/// @param param2 uint32_t*
bool k_keyserver_key_qt_to_mod_x(int param1, uint32_t* param2);

/// [Qt documentation](https://api.kde.org/kkeyserver.html#symXModXToKeyQt)
///
/// @param param1 uint32_t
/// @param param2 uint16_t
/// @param param3 int*
bool k_keyserver_sym_x_mod_x_to_key_qt(uint32_t param1, uint16_t param2, int* param3);

/// [Qt documentation](https://api.kde.org/kkeyserver.html#modXToQt)
///
/// @param param1 uint32_t
/// @param param2 int*
bool k_keyserver_mod_x_to_qt(uint32_t param1, int* param2);

#ifdef __linux__
/// [Qt documentation](https://api.kde.org/kkeyserver.html#xcbKeyPressEventToQt)
///
/// @param param1 xcb_generic_event_t*
/// @param param2 int*
bool k_keyserver_xcb_key_press_event_to_qt(xcb_generic_event_t* param1, int* param2);
#endif

#ifdef __linux__
/// [Qt documentation](https://api.kde.org/kkeyserver.html#xcbKeyPressEventToQt)
///
/// @param param1 xcb_key_press_event_t*
/// @param param2 int*
bool k_keyserver_xcb_key_press_event_to_qt2(xcb_key_press_event_t* param1, int* param2);
#endif
#endif
