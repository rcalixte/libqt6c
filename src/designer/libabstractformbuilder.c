#include "../libqaction.hpp"
#include "../libqactiongroup.hpp"
#include "../libqdir.hpp"
#include "../libqiodevice.hpp"
#include "../libqlayout.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libabstractformbuilder.hpp"
#include "libabstractformbuilder.h"

QAbstractFormBuilder* q_abstractformbuilder_new() {
    return QAbstractFormBuilder_new();
}

QDir* q_abstractformbuilder_working_directory(void* self) {
    return QAbstractFormBuilder_WorkingDirectory((QAbstractFormBuilder*)self);
}

void q_abstractformbuilder_set_working_directory(void* self, void* directory) {
    QAbstractFormBuilder_SetWorkingDirectory((QAbstractFormBuilder*)self, (QDir*)directory);
}

QWidget* q_abstractformbuilder_load(void* self, void* dev, void* parentWidget) {
    return QAbstractFormBuilder_Load((QAbstractFormBuilder*)self, (QIODevice*)dev, (QWidget*)parentWidget);
}

void q_abstractformbuilder_on_load(void* self, QWidget* (*callback)(void*, void*, void*)) {
    QAbstractFormBuilder_OnLoad((QAbstractFormBuilder*)self, (intptr_t)callback);
}

QWidget* q_abstractformbuilder_super_load(void* self, void* dev, void* parentWidget) {
    return QAbstractFormBuilder_SuperLoad((QAbstractFormBuilder*)self, (QIODevice*)dev, (QWidget*)parentWidget);
}

void q_abstractformbuilder_save(void* self, void* dev, void* widget) {
    QAbstractFormBuilder_Save((QAbstractFormBuilder*)self, (QIODevice*)dev, (QWidget*)widget);
}

void q_abstractformbuilder_on_save(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractFormBuilder_OnSave((QAbstractFormBuilder*)self, (intptr_t)callback);
}

void q_abstractformbuilder_super_save(void* self, void* dev, void* widget) {
    QAbstractFormBuilder_SuperSave((QAbstractFormBuilder*)self, (QIODevice*)dev, (QWidget*)widget);
}

const char* q_abstractformbuilder_error_string(void* self) {
    libqt_string _str = QAbstractFormBuilder_ErrorString((QAbstractFormBuilder*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractformbuilder_add_menu_action(void* self, void* action) {
    QAbstractFormBuilder_AddMenuAction((QAbstractFormBuilder*)self, (QAction*)action);
}

void q_abstractformbuilder_on_add_menu_action(void* self, void (*callback)(void*, void*)) {
    QAbstractFormBuilder_OnAddMenuAction((QAbstractFormBuilder*)self, (intptr_t)callback);
}

void q_abstractformbuilder_super_add_menu_action(void* self, void* action) {
    QAbstractFormBuilder_SuperAddMenuAction((QAbstractFormBuilder*)self, (QAction*)action);
}

bool q_abstractformbuilder_apply_property_internally(void* self, void* o, const char* propertyName, void* value) {
    return QAbstractFormBuilder_ApplyPropertyInternally((QAbstractFormBuilder*)self, (QObject*)o, qstring(propertyName), (QVariant*)value);
}

void q_abstractformbuilder_on_apply_property_internally(void* self, bool (*callback)(void*, void*, const char*, void*)) {
    QAbstractFormBuilder_OnApplyPropertyInternally((QAbstractFormBuilder*)self, (intptr_t)callback);
}

bool q_abstractformbuilder_super_apply_property_internally(void* self, void* o, const char* propertyName, void* value) {
    return QAbstractFormBuilder_SuperApplyPropertyInternally((QAbstractFormBuilder*)self, (QObject*)o, qstring(propertyName), (QVariant*)value);
}

QWidget* q_abstractformbuilder_create_widget(void* self, const char* widgetName, void* parentWidget, const char* name) {
    return QAbstractFormBuilder_CreateWidget((QAbstractFormBuilder*)self, qstring(widgetName), (QWidget*)parentWidget, qstring(name));
}

void q_abstractformbuilder_on_create_widget(void* self, QWidget* (*callback)(void*, const char*, void*, const char*)) {
    QAbstractFormBuilder_OnCreateWidget((QAbstractFormBuilder*)self, (intptr_t)callback);
}

QWidget* q_abstractformbuilder_super_create_widget(void* self, const char* widgetName, void* parentWidget, const char* name) {
    return QAbstractFormBuilder_SuperCreateWidget((QAbstractFormBuilder*)self, qstring(widgetName), (QWidget*)parentWidget, qstring(name));
}

QLayout* q_abstractformbuilder_create_layout(void* self, const char* layoutName, void* parent, const char* name) {
    return QAbstractFormBuilder_CreateLayout((QAbstractFormBuilder*)self, qstring(layoutName), (QObject*)parent, qstring(name));
}

void q_abstractformbuilder_on_create_layout(void* self, QLayout* (*callback)(void*, const char*, void*, const char*)) {
    QAbstractFormBuilder_OnCreateLayout((QAbstractFormBuilder*)self, (intptr_t)callback);
}

QLayout* q_abstractformbuilder_super_create_layout(void* self, const char* layoutName, void* parent, const char* name) {
    return QAbstractFormBuilder_SuperCreateLayout((QAbstractFormBuilder*)self, qstring(layoutName), (QObject*)parent, qstring(name));
}

QAction* q_abstractformbuilder_create_action(void* self, void* parent, const char* name) {
    return QAbstractFormBuilder_CreateAction((QAbstractFormBuilder*)self, (QObject*)parent, qstring(name));
}

void q_abstractformbuilder_on_create_action(void* self, QAction* (*callback)(void*, void*, const char*)) {
    QAbstractFormBuilder_OnCreateAction((QAbstractFormBuilder*)self, (intptr_t)callback);
}

QAction* q_abstractformbuilder_super_create_action(void* self, void* parent, const char* name) {
    return QAbstractFormBuilder_SuperCreateAction((QAbstractFormBuilder*)self, (QObject*)parent, qstring(name));
}

QActionGroup* q_abstractformbuilder_create_action_group(void* self, void* parent, const char* name) {
    return QAbstractFormBuilder_CreateActionGroup((QAbstractFormBuilder*)self, (QObject*)parent, qstring(name));
}

void q_abstractformbuilder_on_create_action_group(void* self, QActionGroup* (*callback)(void*, void*, const char*)) {
    QAbstractFormBuilder_OnCreateActionGroup((QAbstractFormBuilder*)self, (intptr_t)callback);
}

QActionGroup* q_abstractformbuilder_super_create_action_group(void* self, void* parent, const char* name) {
    return QAbstractFormBuilder_SuperCreateActionGroup((QAbstractFormBuilder*)self, (QObject*)parent, qstring(name));
}

bool q_abstractformbuilder_check_property(void* self, void* obj, const char* prop) {
    return QAbstractFormBuilder_CheckProperty((QAbstractFormBuilder*)self, (QObject*)obj, qstring(prop));
}

void q_abstractformbuilder_on_check_property(void* self, bool (*callback)(void*, void*, const char*)) {
    QAbstractFormBuilder_OnCheckProperty((QAbstractFormBuilder*)self, (intptr_t)callback);
}

bool q_abstractformbuilder_super_check_property(void* self, void* obj, const char* prop) {
    return QAbstractFormBuilder_SuperCheckProperty((QAbstractFormBuilder*)self, (QObject*)obj, qstring(prop));
}

void q_abstractformbuilder_reset(void* self) {
    QAbstractFormBuilder_Reset((QAbstractFormBuilder*)self);
}

void q_abstractformbuilder_on_reset(void* self, void (*callback)()) {
    QAbstractFormBuilder_OnReset((QAbstractFormBuilder*)self, (intptr_t)callback);
}

void q_abstractformbuilder_super_reset(void* self) {
    QAbstractFormBuilder_SuperReset((QAbstractFormBuilder*)self);
}

QMetaEnum* q_abstractformbuilder_tool_bar_area_meta_enum(void* self) {
    return QAbstractFormBuilder_ToolBarAreaMetaEnum((QAbstractFormBuilder*)self);
}

void q_abstractformbuilder_on_tool_bar_area_meta_enum(void* self, QMetaEnum* (*callback)()) {
    QAbstractFormBuilder_OnToolBarAreaMetaEnum((QAbstractFormBuilder*)self, (intptr_t)callback);
}

QMetaEnum* q_abstractformbuilder_super_tool_bar_area_meta_enum(void* self) {
    return QAbstractFormBuilder_SuperToolBarAreaMetaEnum((QAbstractFormBuilder*)self);
}

void q_abstractformbuilder_delete(void* self) {
    QAbstractFormBuilder_Delete((QAbstractFormBuilder*)(self));
}
