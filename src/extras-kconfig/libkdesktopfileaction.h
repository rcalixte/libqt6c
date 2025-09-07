#pragma once
#ifndef SRC_EXTRAS_KCONFIGQT6C_LIBKDESKTOPFILEACTION_H
#define SRC_EXTRAS_KCONFIGQT6C_LIBKDESKTOPFILEACTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kdesktopfileaction.html

/// k_desktopfileaction_new constructs a new KDesktopFileAction object.
///
KDesktopFileAction* k_desktopfileaction_new();

/// k_desktopfileaction_new2 constructs a new KDesktopFileAction object.
///
/// @param name const char*
/// @param text const char*
/// @param icon const char*
/// @param exec const char*
/// @param desktopFilePath const char*
KDesktopFileAction* k_desktopfileaction_new2(const char* name, const char* text, const char* icon, const char* exec, const char* desktopFilePath);

/// k_desktopfileaction_new3 constructs a new KDesktopFileAction object.
///
/// @param other KDesktopFileAction*
KDesktopFileAction* k_desktopfileaction_new3(void* other);

/// [Qt documentation](https://api.kde.org/kdesktopfileaction.html#operator-eq)
///
/// @param self KDesktopFileAction*
/// @param other KDesktopFileAction*
void k_desktopfileaction_operator_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/kdesktopfileaction.html#actionsKey)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDesktopFileAction*
const char* k_desktopfileaction_actions_key(void* self);

/// [Qt documentation](https://api.kde.org/kdesktopfileaction.html#desktopFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDesktopFileAction*
const char* k_desktopfileaction_desktop_file_path(void* self);

/// [Qt documentation](https://api.kde.org/kdesktopfileaction.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDesktopFileAction*
const char* k_desktopfileaction_name(void* self);

/// [Qt documentation](https://api.kde.org/kdesktopfileaction.html#icon)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDesktopFileAction*
const char* k_desktopfileaction_icon(void* self);

/// [Qt documentation](https://api.kde.org/kdesktopfileaction.html#exec)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDesktopFileAction*
const char* k_desktopfileaction_exec(void* self);

/// [Qt documentation](https://api.kde.org/kdesktopfileaction.html#isSeparator)
///
/// @param self KDesktopFileAction*
bool k_desktopfileaction_is_separator(void* self);

/// [Qt documentation](https://api.kde.org/kdesktopfileaction.html#dtor.KDesktopFileAction)
///
/// Delete this object from C++ memory.
///
/// @param self KDesktopFileAction*
void k_desktopfileaction_delete(void* self);

#endif
