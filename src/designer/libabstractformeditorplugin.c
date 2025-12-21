#include "../libqaction.hpp"
#include "libabstractformeditor.hpp"
#include "libabstractformeditorplugin.hpp"
#include "libabstractformeditorplugin.h"

QDesignerFormEditorPluginInterface* q_designerformeditorplugininterface_new() {
    return QDesignerFormEditorPluginInterface_new();
}

bool q_designerformeditorplugininterface_is_initialized(void* self) {
    return QDesignerFormEditorPluginInterface_IsInitialized((QDesignerFormEditorPluginInterface*)self);
}

void q_designerformeditorplugininterface_on_is_initialized(void* self, bool (*callback)()) {
    QDesignerFormEditorPluginInterface_OnIsInitialized((QDesignerFormEditorPluginInterface*)self, (intptr_t)callback);
}

bool q_designerformeditorplugininterface_qbase_is_initialized(void* self) {
    return QDesignerFormEditorPluginInterface_QBaseIsInitialized((QDesignerFormEditorPluginInterface*)self);
}

void q_designerformeditorplugininterface_initialize(void* self, void* core) {
    QDesignerFormEditorPluginInterface_Initialize((QDesignerFormEditorPluginInterface*)self, (QDesignerFormEditorInterface*)core);
}

void q_designerformeditorplugininterface_on_initialize(void* self, void (*callback)(void*, void*)) {
    QDesignerFormEditorPluginInterface_OnInitialize((QDesignerFormEditorPluginInterface*)self, (intptr_t)callback);
}

void q_designerformeditorplugininterface_qbase_initialize(void* self, void* core) {
    QDesignerFormEditorPluginInterface_QBaseInitialize((QDesignerFormEditorPluginInterface*)self, (QDesignerFormEditorInterface*)core);
}

QAction* q_designerformeditorplugininterface_action(void* self) {
    return QDesignerFormEditorPluginInterface_Action((QDesignerFormEditorPluginInterface*)self);
}

void q_designerformeditorplugininterface_on_action(void* self, QAction* (*callback)()) {
    QDesignerFormEditorPluginInterface_OnAction((QDesignerFormEditorPluginInterface*)self, (intptr_t)callback);
}

QAction* q_designerformeditorplugininterface_qbase_action(void* self) {
    return QDesignerFormEditorPluginInterface_QBaseAction((QDesignerFormEditorPluginInterface*)self);
}

QDesignerFormEditorInterface* q_designerformeditorplugininterface_core(void* self) {
    return QDesignerFormEditorPluginInterface_Core((QDesignerFormEditorPluginInterface*)self);
}

void q_designerformeditorplugininterface_on_core(void* self, QDesignerFormEditorInterface* (*callback)()) {
    QDesignerFormEditorPluginInterface_OnCore((QDesignerFormEditorPluginInterface*)self, (intptr_t)callback);
}

QDesignerFormEditorInterface* q_designerformeditorplugininterface_qbase_core(void* self) {
    return QDesignerFormEditorPluginInterface_QBaseCore((QDesignerFormEditorPluginInterface*)self);
}

void q_designerformeditorplugininterface_delete(void* self) {
    QDesignerFormEditorPluginInterface_Delete((QDesignerFormEditorPluginInterface*)(self));
}
