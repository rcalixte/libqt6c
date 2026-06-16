#include "libkactioncollection.hpp"
#include "../libqaction.hpp"
#include "../libqundostack.hpp"
#include "libkundoactions.hpp"
#include "libkundoactions.h"

QAction* k_undoactions_create_redo_action(void* undoStack, void* actionCollection, const char* actionName) {
    return KUndoActions_CreateRedoAction((QUndoStack*)undoStack, (KActionCollection*)actionCollection, qstring(actionName));
}

QAction* k_undoactions_create_undo_action(void* undoStack, void* actionCollection, const char* actionName) {
    return KUndoActions_CreateUndoAction((QUndoStack*)undoStack, (KActionCollection*)actionCollection, qstring(actionName));
}
