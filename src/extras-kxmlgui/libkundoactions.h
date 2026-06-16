#pragma once
#ifndef SRC_EXTRAS_KXMLGUI_QT6C_LIBKUNDOACTIONS_H
#define SRC_EXTRAS_KXMLGUI_QT6C_LIBKUNDOACTIONS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kundoactions.html)

/// [Upstream resources](https://api.kde.org/kundoactions.html#createRedoAction)
///
/// @param undoStack QUndoStack*
/// @param actionCollection KActionCollection*
/// @param actionName const char*
///
QAction* k_undoactions_create_redo_action(void* undoStack, void* actionCollection, const char* actionName);

/// [Upstream resources](https://api.kde.org/kundoactions.html#createUndoAction)
///
/// @param undoStack QUndoStack*
/// @param actionCollection KActionCollection*
/// @param actionName const char*
///
QAction* k_undoactions_create_undo_action(void* undoStack, void* actionCollection, const char* actionName);
#endif
