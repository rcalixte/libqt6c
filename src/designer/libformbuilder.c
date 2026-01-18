#include "libabstractformbuilder.hpp"
#include "../libqaction.hpp"
#include "../libqactiongroup.hpp"
#include "../libqiodevice.hpp"
#include "../libqlayout.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libformbuilder.hpp"
#include "libformbuilder.h"

QFormBuilder* q_formbuilder_new() {
    return QFormBuilder_new();
}

const char** q_formbuilder_plugin_paths(void* self) {
    libqt_list _arr = QFormBuilder_PluginPaths((QFormBuilder*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_formbuilder_plugin_paths\n");
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

void q_formbuilder_clear_plugin_paths(void* self) {
    QFormBuilder_ClearPluginPaths((QFormBuilder*)self);
}

void q_formbuilder_add_plugin_path(void* self, const char* pluginPath) {
    QFormBuilder_AddPluginPath((QFormBuilder*)self, qstring(pluginPath));
}

void q_formbuilder_set_plugin_path(void* self, const char* pluginPaths[static 1]) {
    size_t pluginPaths_len = libqt_strv_length(pluginPaths);
    libqt_string* pluginPaths_qstr = (libqt_string*)malloc(pluginPaths_len * sizeof(libqt_string));
    if (pluginPaths_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_formbuilder_set_plugin_path\n");
        abort();
    }
    for (size_t i = 0; i < pluginPaths_len; ++i) {
        pluginPaths_qstr[i] = qstring(pluginPaths[i]);
    }
    libqt_list pluginPaths_list = qlist(pluginPaths_qstr, pluginPaths_len);
    QFormBuilder_SetPluginPath((QFormBuilder*)self, pluginPaths_list);
    free(pluginPaths_qstr);
}

libqt_list /* of QDesignerCustomWidgetInterface* */ q_formbuilder_custom_widgets(void* self) {
    libqt_list _arr = QFormBuilder_CustomWidgets((QFormBuilder*)self);
    return _arr;
}

QWidget* q_formbuilder_create_widget(void* self, const char* widgetName, void* parentWidget, const char* name) {
    return QFormBuilder_CreateWidget((QFormBuilder*)self, qstring(widgetName), (QWidget*)parentWidget, qstring(name));
}

void q_formbuilder_on_create_widget(void* self, QWidget* (*callback)(void*, const char*, void*, const char*)) {
    QFormBuilder_OnCreateWidget((QFormBuilder*)self, (intptr_t)callback);
}

QWidget* q_formbuilder_qbase_create_widget(void* self, const char* widgetName, void* parentWidget, const char* name) {
    return QFormBuilder_QBaseCreateWidget((QFormBuilder*)self, qstring(widgetName), (QWidget*)parentWidget, qstring(name));
}

QLayout* q_formbuilder_create_layout(void* self, const char* layoutName, void* parent, const char* name) {
    return QFormBuilder_CreateLayout((QFormBuilder*)self, qstring(layoutName), (QObject*)parent, qstring(name));
}

void q_formbuilder_on_create_layout(void* self, QLayout* (*callback)(void*, const char*, void*, const char*)) {
    QFormBuilder_OnCreateLayout((QFormBuilder*)self, (intptr_t)callback);
}

QLayout* q_formbuilder_qbase_create_layout(void* self, const char* layoutName, void* parent, const char* name) {
    return QFormBuilder_QBaseCreateLayout((QFormBuilder*)self, qstring(layoutName), (QObject*)parent, qstring(name));
}

void q_formbuilder_update_custom_widgets(void* self) {
    QFormBuilder_UpdateCustomWidgets((QFormBuilder*)self);
}

void q_formbuilder_on_update_custom_widgets(void* self, void (*callback)()) {
    QFormBuilder_OnUpdateCustomWidgets((QFormBuilder*)self, (intptr_t)callback);
}

void q_formbuilder_qbase_update_custom_widgets(void* self) {
    QFormBuilder_QBaseUpdateCustomWidgets((QFormBuilder*)self);
}

QWidget* q_formbuilder_widget_by_name(void* self, void* topLevel, const char* name) {
    return QFormBuilder_WidgetByName((QFormBuilder*)self, (QWidget*)topLevel, qstring(name));
}

void q_formbuilder_on_widget_by_name(void* self, QWidget* (*callback)(void*, void*, const char*)) {
    QFormBuilder_OnWidgetByName((QFormBuilder*)self, (intptr_t)callback);
}

QWidget* q_formbuilder_qbase_widget_by_name(void* self, void* topLevel, const char* name) {
    return QFormBuilder_QBaseWidgetByName((QFormBuilder*)self, (QWidget*)topLevel, qstring(name));
}

QDir* q_formbuilder_working_directory(void* self) {
    return QAbstractFormBuilder_WorkingDirectory((QAbstractFormBuilder*)self);
}

void q_formbuilder_set_working_directory(void* self, void* directory) {
    QAbstractFormBuilder_SetWorkingDirectory((QAbstractFormBuilder*)self, (QDir*)directory);
}

const char* q_formbuilder_error_string(void* self) {
    libqt_string _str = QAbstractFormBuilder_ErrorString((QAbstractFormBuilder*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QWidget* q_formbuilder_load(void* self, void* dev, void* parentWidget) {
    return QFormBuilder_Load((QFormBuilder*)self, (QIODevice*)dev, (QWidget*)parentWidget);
}

QWidget* q_formbuilder_qbase_load(void* self, void* dev, void* parentWidget) {
    return QFormBuilder_QBaseLoad((QFormBuilder*)self, (QIODevice*)dev, (QWidget*)parentWidget);
}

void q_formbuilder_on_load(void* self, QWidget* (*callback)(void*, void*, void*)) {
    QFormBuilder_OnLoad((QFormBuilder*)self, (intptr_t)callback);
}

void q_formbuilder_save(void* self, void* dev, void* widget) {
    QFormBuilder_Save((QFormBuilder*)self, (QIODevice*)dev, (QWidget*)widget);
}

void q_formbuilder_qbase_save(void* self, void* dev, void* widget) {
    QFormBuilder_QBaseSave((QFormBuilder*)self, (QIODevice*)dev, (QWidget*)widget);
}

void q_formbuilder_on_save(void* self, void (*callback)(void*, void*, void*)) {
    QFormBuilder_OnSave((QFormBuilder*)self, (intptr_t)callback);
}

void q_formbuilder_add_menu_action(void* self, void* action) {
    QFormBuilder_AddMenuAction((QFormBuilder*)self, (QAction*)action);
}

void q_formbuilder_qbase_add_menu_action(void* self, void* action) {
    QFormBuilder_QBaseAddMenuAction((QFormBuilder*)self, (QAction*)action);
}

void q_formbuilder_on_add_menu_action(void* self, void (*callback)(void*, void*)) {
    QFormBuilder_OnAddMenuAction((QFormBuilder*)self, (intptr_t)callback);
}

QAction* q_formbuilder_create_action(void* self, void* parent, const char* name) {
    return QFormBuilder_CreateAction((QFormBuilder*)self, (QObject*)parent, qstring(name));
}

QAction* q_formbuilder_qbase_create_action(void* self, void* parent, const char* name) {
    return QFormBuilder_QBaseCreateAction((QFormBuilder*)self, (QObject*)parent, qstring(name));
}

void q_formbuilder_on_create_action(void* self, QAction* (*callback)(void*, void*, const char*)) {
    QFormBuilder_OnCreateAction((QFormBuilder*)self, (intptr_t)callback);
}

QActionGroup* q_formbuilder_create_action_group(void* self, void* parent, const char* name) {
    return QFormBuilder_CreateActionGroup((QFormBuilder*)self, (QObject*)parent, qstring(name));
}

QActionGroup* q_formbuilder_qbase_create_action_group(void* self, void* parent, const char* name) {
    return QFormBuilder_QBaseCreateActionGroup((QFormBuilder*)self, (QObject*)parent, qstring(name));
}

void q_formbuilder_on_create_action_group(void* self, QActionGroup* (*callback)(void*, void*, const char*)) {
    QFormBuilder_OnCreateActionGroup((QFormBuilder*)self, (intptr_t)callback);
}

bool q_formbuilder_check_property(void* self, void* obj, const char* prop) {
    return QFormBuilder_CheckProperty((QFormBuilder*)self, (QObject*)obj, qstring(prop));
}

bool q_formbuilder_qbase_check_property(void* self, void* obj, const char* prop) {
    return QFormBuilder_QBaseCheckProperty((QFormBuilder*)self, (QObject*)obj, qstring(prop));
}

void q_formbuilder_on_check_property(void* self, bool (*callback)(void*, void*, const char*)) {
    QFormBuilder_OnCheckProperty((QFormBuilder*)self, (intptr_t)callback);
}

bool q_formbuilder_apply_property_internally(void* self, void* o, const char* propertyName, void* value) {
    return QFormBuilder_ApplyPropertyInternally((QFormBuilder*)self, (QObject*)o, qstring(propertyName), (QVariant*)value);
}

bool q_formbuilder_qbase_apply_property_internally(void* self, void* o, const char* propertyName, void* value) {
    return QFormBuilder_QBaseApplyPropertyInternally((QFormBuilder*)self, (QObject*)o, qstring(propertyName), (QVariant*)value);
}

void q_formbuilder_on_apply_property_internally(void* self, bool (*callback)(void*, void*, const char*, void*)) {
    QFormBuilder_OnApplyPropertyInternally((QFormBuilder*)self, (intptr_t)callback);
}

void q_formbuilder_reset(void* self) {
    QFormBuilder_Reset((QFormBuilder*)self);
}

void q_formbuilder_qbase_reset(void* self) {
    QFormBuilder_QBaseReset((QFormBuilder*)self);
}

void q_formbuilder_on_reset(void* self, void (*callback)()) {
    QFormBuilder_OnReset((QFormBuilder*)self, (intptr_t)callback);
}

QMetaEnum* q_formbuilder_tool_bar_area_meta_enum(void* self) {
    return QFormBuilder_ToolBarAreaMetaEnum((QFormBuilder*)self);
}

QMetaEnum* q_formbuilder_qbase_tool_bar_area_meta_enum(void* self) {
    return QFormBuilder_QBaseToolBarAreaMetaEnum((QFormBuilder*)self);
}

void q_formbuilder_on_tool_bar_area_meta_enum(void* self, QMetaEnum* (*callback)()) {
    QFormBuilder_OnToolBarAreaMetaEnum((QFormBuilder*)self, (intptr_t)callback);
}

void q_formbuilder_delete(void* self) {
    QFormBuilder_Delete((QFormBuilder*)(self));
}
