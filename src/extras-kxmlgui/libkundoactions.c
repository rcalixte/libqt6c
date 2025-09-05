#include "libkactioncollection.hpp"
#include "../libqaction.hpp"
#include "../libqundostack.hpp"
#include "libkundoactions.hpp"
#include "libkundoactions.h"

QAction* k_undoactions_create_redo_action(void* param1, void* param2, const char* param3) {
    return KUndoActions_CreateRedoAction((QUndoStack*)param1, (KActionCollection*)param2, qstring(param3));
}

QAction* k_undoactions_create_undo_action(void* param1, void* param2, const char* param3) {
    return KUndoActions_CreateUndoAction((QUndoStack*)param1, (KActionCollection*)param2, qstring(param3));
}
