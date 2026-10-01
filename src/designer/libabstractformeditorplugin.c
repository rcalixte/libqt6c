#include "../libqaction.hpp"
#include "libabstractformeditor.hpp"
#include "libabstractformeditorplugin.hpp"
#include "libabstractformeditorplugin.h"

QDesignerFormEditorPluginInterface* q_designerformeditorplugininterface_new() {
    return QDesignerFormEditorPluginInterface_New();
}

bool q_designerformeditorplugininterface_is_initialized(const void* self) {
    return QDesignerFormEditorPluginInterface_IsInitialized((QDesignerFormEditorPluginInterface*)self);
}

void q_designerformeditorplugininterface_on_is_initialized(const void* self, bool (*callback)(const void*)) {
    QDesignerFormEditorPluginInterface_OnIsInitialized((QDesignerFormEditorPluginInterface*)self, (intptr_t)callback);
}

void q_designerformeditorplugininterface_initialize(void* self, void* core) {
    QDesignerFormEditorPluginInterface_Initialize((QDesignerFormEditorPluginInterface*)self, (QDesignerFormEditorInterface*)core);
}

void q_designerformeditorplugininterface_on_initialize(void* self, void (*callback)(void*, void*)) {
    QDesignerFormEditorPluginInterface_OnInitialize((QDesignerFormEditorPluginInterface*)self, (intptr_t)callback);
}

QAction* q_designerformeditorplugininterface_action(const void* self) {
    return QDesignerFormEditorPluginInterface_Action((QDesignerFormEditorPluginInterface*)self);
}

void q_designerformeditorplugininterface_on_action(const void* self, QAction* (*callback)(const void*)) {
    QDesignerFormEditorPluginInterface_OnAction((QDesignerFormEditorPluginInterface*)self, (intptr_t)callback);
}

QDesignerFormEditorInterface* q_designerformeditorplugininterface_core(const void* self) {
    return QDesignerFormEditorPluginInterface_Core((QDesignerFormEditorPluginInterface*)self);
}

void q_designerformeditorplugininterface_on_core(const void* self, QDesignerFormEditorInterface* (*callback)(const void*)) {
    QDesignerFormEditorPluginInterface_OnCore((QDesignerFormEditorPluginInterface*)self, (intptr_t)callback);
}

void q_designerformeditorplugininterface_delete(void* self) {
    QDesignerFormEditorPluginInterface_Delete((QDesignerFormEditorPluginInterface*)(self));
}
