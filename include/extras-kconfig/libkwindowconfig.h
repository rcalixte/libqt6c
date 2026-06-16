#pragma once
#ifndef SRC_EXTRAS_KCONFIG_QT6C_LIBKWINDOWCONFIG_H
#define SRC_EXTRAS_KCONFIG_QT6C_LIBKWINDOWCONFIG_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kwindowconfig.html)

/// [Upstream resources](https://api.kde.org/kwindowconfig.html#saveWindowSize)
///
/// @param window QWindow*
/// @param config KConfigGroup*
/// @param options flag of enum KConfigBase__WriteConfigFlag
///
void k_windowconfig_save_window_size(void* window, void* config, int32_t options);

/// [Upstream resources](https://api.kde.org/kwindowconfig.html#hasSavedWindowSize)
///
/// @param config KConfigGroup*
///
bool k_windowconfig_has_saved_window_size(void* config);

/// [Upstream resources](https://api.kde.org/kwindowconfig.html#restoreWindowSize)
///
/// @param window QWindow*
/// @param config KConfigGroup*
///
void k_windowconfig_restore_window_size(void* window, void* config);

/// [Upstream resources](https://api.kde.org/kwindowconfig.html#saveWindowPosition)
///
/// @param window QWindow*
/// @param config KConfigGroup*
/// @param options flag of enum KConfigBase__WriteConfigFlag
///
void k_windowconfig_save_window_position(void* window, void* config, int32_t options);

/// [Upstream resources](https://api.kde.org/kwindowconfig.html#hasSavedWindowPosition)
///
/// @param config KConfigGroup*
///
bool k_windowconfig_has_saved_window_position(void* config);

/// [Upstream resources](https://api.kde.org/kwindowconfig.html#restoreWindowPosition)
///
/// @param window QWindow*
/// @param config KConfigGroup*
///
void k_windowconfig_restore_window_position(void* window, void* config);

/// [Upstream resources](https://api.kde.org/kwindowconfig.html#restoreWindowScreenPosition)
///
/// @param window QWindow*
/// @param screen QScreen*
/// @param config KConfigGroup*
///
void k_windowconfig_restore_window_screen_position(void* window, void* screen, void* config);
#endif
