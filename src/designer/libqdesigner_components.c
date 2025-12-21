#include "libabstractactioneditor.hpp"
#include "libabstractformeditor.hpp"
#include "libabstractobjectinspector.hpp"
#include "libabstractpropertyeditor.hpp"
#include "libabstractwidgetbox.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "libqdesigner_components.hpp"
#include "libqdesigner_components.h"

QDesignerComponents* q_designercomponents_new(void* other) {
    return QDesignerComponents_new((QDesignerComponents*)other);
}

QDesignerComponents* q_designercomponents_new2(void* other) {
    return QDesignerComponents_new2((QDesignerComponents*)other);
}

void q_designercomponents_copy_assign(void* self, void* other) {
    QDesignerComponents_CopyAssign((QDesignerComponents*)self, (QDesignerComponents*)other);
}

void q_designercomponents_move_assign(void* self, void* other) {
    QDesignerComponents_MoveAssign((QDesignerComponents*)self, (QDesignerComponents*)other);
}

void q_designercomponents_initialize_resources() {
    QDesignerComponents_InitializeResources();
}

void q_designercomponents_initialize_plugins(void* core) {
    QDesignerComponents_InitializePlugins((QDesignerFormEditorInterface*)core);
}

QDesignerFormEditorInterface* q_designercomponents_create_form_editor(void* parent) {
    return QDesignerComponents_CreateFormEditor((QObject*)parent);
}

QDesignerFormEditorInterface* q_designercomponents_create_form_editor_with_plugin_paths(const char* pluginPaths[static 1], void* parent) {
    size_t pluginPaths_len = libqt_strv_length(pluginPaths);
    libqt_string* pluginPaths_qstr = (libqt_string*)malloc(pluginPaths_len * sizeof(libqt_string));
    if (pluginPaths_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_designercomponents_create_form_editor_with_plugin_paths");
        abort();
    }
    for (size_t i = 0; i < pluginPaths_len; ++i) {
        pluginPaths_qstr[i] = qstring(pluginPaths[i]);
    }
    libqt_list pluginPaths_list = qlist(pluginPaths_qstr, pluginPaths_len);
    QDesignerFormEditorInterface* _out = QDesignerComponents_CreateFormEditorWithPluginPaths(pluginPaths_list, (QObject*)parent);
    free(pluginPaths_qstr);
    return _out;
}

QDesignerWidgetBoxInterface* q_designercomponents_create_widget_box(void* core, void* parent) {
    return QDesignerComponents_CreateWidgetBox((QDesignerFormEditorInterface*)core, (QWidget*)parent);
}

QDesignerPropertyEditorInterface* q_designercomponents_create_property_editor(void* core, void* parent) {
    return QDesignerComponents_CreatePropertyEditor((QDesignerFormEditorInterface*)core, (QWidget*)parent);
}

QDesignerObjectInspectorInterface* q_designercomponents_create_object_inspector(void* core, void* parent) {
    return QDesignerComponents_CreateObjectInspector((QDesignerFormEditorInterface*)core, (QWidget*)parent);
}

QDesignerActionEditorInterface* q_designercomponents_create_action_editor(void* core, void* parent) {
    return QDesignerComponents_CreateActionEditor((QDesignerFormEditorInterface*)core, (QWidget*)parent);
}

QObject* q_designercomponents_create_task_menu(void* core, void* parent) {
    return QDesignerComponents_CreateTaskMenu((QDesignerFormEditorInterface*)core, (QObject*)parent);
}

QWidget* q_designercomponents_create_resource_editor(void* core, void* parent) {
    return QDesignerComponents_CreateResourceEditor((QDesignerFormEditorInterface*)core, (QWidget*)parent);
}

QWidget* q_designercomponents_create_signal_slot_editor(void* core, void* parent) {
    return QDesignerComponents_CreateSignalSlotEditor((QDesignerFormEditorInterface*)core, (QWidget*)parent);
}

const char** q_designercomponents_default_plugin_paths() {
    libqt_list _arr = QDesignerComponents_DefaultPluginPaths();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_designercomponents_default_plugin_paths");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_designercomponents_delete(void* self) {
    QDesignerComponents_Delete((QDesignerComponents*)(self));
}
