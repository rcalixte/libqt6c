#pragma once
#ifndef SRC_EXTRAS_KCONFIGQT6C_LIBKWINDOWCONFIG_H
#define SRC_EXTRAS_KCONFIGQT6C_LIBKWINDOWCONFIG_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kwindowconfig.html

/// [Qt documentation](https://api-staging.kde.org/kwindowconfig.html#saveWindowSize)
///
/// @param param1 QWindow*
/// @param param2 KConfigGroup*
/// @param param3 flag of enum KConfigBase__WriteConfigFlag
void k_windowconfig_save_window_size(void* param1, void* param2, int64_t param3);

/// [Qt documentation](https://api-staging.kde.org/kwindowconfig.html#hasSavedWindowSize)
///
/// @param param1 KConfigGroup*
bool k_windowconfig_has_saved_window_size(void* param1);

/// [Qt documentation](https://api-staging.kde.org/kwindowconfig.html#restoreWindowSize)
///
/// @param param1 QWindow*
/// @param param2 KConfigGroup*
void k_windowconfig_restore_window_size(void* param1, void* param2);

/// [Qt documentation](https://api-staging.kde.org/kwindowconfig.html#saveWindowPosition)
///
/// @param param1 QWindow*
/// @param param2 KConfigGroup*
/// @param param3 flag of enum KConfigBase__WriteConfigFlag
void k_windowconfig_save_window_position(void* param1, void* param2, int64_t param3);

/// [Qt documentation](https://api-staging.kde.org/kwindowconfig.html#hasSavedWindowPosition)
///
/// @param param1 KConfigGroup*
bool k_windowconfig_has_saved_window_position(void* param1);

/// [Qt documentation](https://api-staging.kde.org/kwindowconfig.html#restoreWindowPosition)
///
/// @param param1 QWindow*
/// @param param2 KConfigGroup*
void k_windowconfig_restore_window_position(void* param1, void* param2);

/// [Qt documentation](https://api-staging.kde.org/kwindowconfig.html#restoreWindowScreenPosition)
///
/// @param param1 QWindow*
/// @param param2 QScreen*
/// @param param3 KConfigGroup*
void k_windowconfig_restore_window_screen_position(void* param1, void* param2, void* param3);
#endif
