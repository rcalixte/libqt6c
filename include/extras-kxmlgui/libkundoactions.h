#pragma once
#ifndef SRC_EXTRAS_KXMLGUIQT6C_LIBKUNDOACTIONS_H
#define SRC_EXTRAS_KXMLGUIQT6C_LIBKUNDOACTIONS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kundoactions.html

/// [Qt documentation](https://api.kde.org/kundoactions.html#createRedoAction)
///
/// @param param1 QUndoStack*
/// @param param2 KActionCollection*
/// @param param3 const char*
QAction* k_undoactions_create_redo_action(void* param1, void* param2, const char* param3);

/// [Qt documentation](https://api.kde.org/kundoactions.html#createUndoAction)
///
/// @param param1 QUndoStack*
/// @param param2 KActionCollection*
/// @param param3 const char*
QAction* k_undoactions_create_undo_action(void* param1, void* param2, const char* param3);
#endif
