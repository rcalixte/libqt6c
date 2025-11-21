#pragma once
#ifndef SRC_FOSS_EXTRAS_LAYERSHELLQT_QT6C_LIBSHELL_H
#define SRC_FOSS_EXTRAS_LAYERSHELLQT_QT6C_LIBSHELL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://invent.kde.org/plasma/layer-shell-qt

/// k_layershellqt__shell_new constructs a new LayerShellQt::Shell object.
///
/// @param other LayerShellQt__Shell*
LayerShellQt__Shell* k_layershellqt__shell_new(void* other);

/// k_layershellqt__shell_new2 constructs a new LayerShellQt::Shell object and invalidates the source LayerShellQt::Shell object.
///
/// @param other LayerShellQt__Shell*
LayerShellQt__Shell* k_layershellqt__shell_new2(void* other);

/// k_layershellqt__shell_copy_assign shallow copies `other` into `self`.
///
/// @param self LayerShellQt__Shell*
/// @param other LayerShellQt__Shell*
void k_layershellqt__shell_copy_assign(void* self, void* other);

/// k_layershellqt__shell_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self LayerShellQt__Shell*
/// @param other LayerShellQt__Shell*
void k_layershellqt__shell_move_assign(void* self, void* other);

/// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
///
void k_layershellqt__shell_use_layer_shell();

/// [Qt documentation](https://invent.kde.org/plasma/layer-shell-qt)
///
/// Delete this object from C++ memory.
///
/// @param self LayerShellQt__Shell*
void k_layershellqt__shell_delete(void* self);

#endif
