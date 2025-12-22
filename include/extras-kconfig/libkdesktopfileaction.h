#pragma once
#ifndef SRC_EXTRAS_KCONFIG_QT6C_LIBKDESKTOPFILEACTION_H
#define SRC_EXTRAS_KCONFIG_QT6C_LIBKDESKTOPFILEACTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kdesktopfileaction.html)

/// k_desktopfileaction_new constructs a new KDesktopFileAction object.
///
KDesktopFileAction* k_desktopfileaction_new();

/// [Upstream resources](https://api.kde.org/kdesktopfileaction.html)

/// k_desktopfileaction_new2 constructs a new KDesktopFileAction object.
///
/// @param name const char*
/// @param text const char*
/// @param icon const char*
/// @param exec const char*
/// @param desktopFilePath const char*
///
KDesktopFileAction* k_desktopfileaction_new2(const char* name, const char* text, const char* icon, const char* exec, const char* desktopFilePath);

/// [Upstream resources](https://api.kde.org/kdesktopfileaction.html)

/// k_desktopfileaction_new3 constructs a new KDesktopFileAction object.
///
/// @param other KDesktopFileAction*
///
KDesktopFileAction* k_desktopfileaction_new3(void* other);

/// [Upstream resources](https://api.kde.org/kdesktopfileaction.html#operator-eq)
///
/// @param self KDesktopFileAction*
/// @param other KDesktopFileAction*
///
void k_desktopfileaction_operator_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/kdesktopfileaction.html#actionsKey)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KDesktopFileAction*
///
const char* k_desktopfileaction_actions_key(void* self);

/// [Upstream resources](https://api.kde.org/kdesktopfileaction.html#desktopFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KDesktopFileAction*
///
const char* k_desktopfileaction_desktop_file_path(void* self);

/// [Upstream resources](https://api.kde.org/kdesktopfileaction.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KDesktopFileAction*
///
const char* k_desktopfileaction_name(void* self);

/// [Upstream resources](https://api.kde.org/kdesktopfileaction.html#icon)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KDesktopFileAction*
///
const char* k_desktopfileaction_icon(void* self);

/// [Upstream resources](https://api.kde.org/kdesktopfileaction.html#exec)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KDesktopFileAction*
///
const char* k_desktopfileaction_exec(void* self);

/// [Upstream resources](https://api.kde.org/kdesktopfileaction.html#isSeparator)
///
/// @param self KDesktopFileAction*
///
bool k_desktopfileaction_is_separator(void* self);

/// [Upstream resources](https://api.kde.org/kdesktopfileaction.html#dtor.KDesktopFileAction)
///
/// Delete this object from C++ memory.
///
/// @param self KDesktopFileAction*
///
void k_desktopfileaction_delete(void* self);

#endif
