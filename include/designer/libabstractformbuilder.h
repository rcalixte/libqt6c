#pragma once
#ifndef SRC_DESIGNER_QT6C_LIBABSTRACTFORMBUILDER_H
#define SRC_DESIGNER_QT6C_LIBABSTRACTFORMBUILDER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html)

/// q_abstractformbuilder_new constructs a new QAbstractFormBuilder object.
///
QAbstractFormBuilder* q_abstractformbuilder_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#workingDirectory)
///
/// @param self QAbstractFormBuilder*
///
QDir* q_abstractformbuilder_working_directory(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#setWorkingDirectory)
///
/// @param self QAbstractFormBuilder*
/// @param directory QDir*
///
void q_abstractformbuilder_set_working_directory(void* self, void* directory);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#load)
///
/// @param self QAbstractFormBuilder*
/// @param dev QIODevice*
/// @param parentWidget QWidget*
///
QWidget* q_abstractformbuilder_load(void* self, void* dev, void* parentWidget);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#load)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractFormBuilder*
/// @param callback QWidget* func(QAbstractFormBuilder* self, QIODevice* dev, QWidget* parentWidget)
///
void q_abstractformbuilder_on_load(void* self, QWidget* (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#load)
///
/// Base class method implementation
///
/// @param self QAbstractFormBuilder*
/// @param dev QIODevice*
/// @param parentWidget QWidget*
///
QWidget* q_abstractformbuilder_qbase_load(void* self, void* dev, void* parentWidget);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#save)
///
/// @param self QAbstractFormBuilder*
/// @param dev QIODevice*
/// @param widget QWidget*
///
void q_abstractformbuilder_save(void* self, void* dev, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#save)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractFormBuilder*
/// @param callback void func(QAbstractFormBuilder* self, QIODevice* dev, QWidget* widget)
///
void q_abstractformbuilder_on_save(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#save)
///
/// Base class method implementation
///
/// @param self QAbstractFormBuilder*
/// @param dev QIODevice*
/// @param widget QWidget*
///
void q_abstractformbuilder_qbase_save(void* self, void* dev, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QAbstractFormBuilder*
///
const char* q_abstractformbuilder_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#addMenuAction)
///
/// @param self QAbstractFormBuilder*
/// @param action QAction*
///
void q_abstractformbuilder_add_menu_action(void* self, void* action);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#addMenuAction)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractFormBuilder*
/// @param callback void func(QAbstractFormBuilder* self, QAction* action)
///
void q_abstractformbuilder_on_add_menu_action(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#addMenuAction)
///
/// Base class method implementation
///
/// @param self QAbstractFormBuilder*
/// @param action QAction*
///
void q_abstractformbuilder_qbase_add_menu_action(void* self, void* action);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#applyPropertyInternally)
///
/// @param self QAbstractFormBuilder*
/// @param o QObject*
/// @param propertyName const char*
/// @param value QVariant*
///
bool q_abstractformbuilder_apply_property_internally(void* self, void* o, const char* propertyName, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#applyPropertyInternally)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractFormBuilder*
/// @param callback bool func(QAbstractFormBuilder* self, QObject* o, const char* propertyName, QVariant* value)
///
void q_abstractformbuilder_on_apply_property_internally(void* self, bool (*callback)(void*, void*, const char*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#applyPropertyInternally)
///
/// Base class method implementation
///
/// @param self QAbstractFormBuilder*
/// @param o QObject*
/// @param propertyName const char*
/// @param value QVariant*
///
bool q_abstractformbuilder_qbase_apply_property_internally(void* self, void* o, const char* propertyName, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createWidget)
///
/// @param self QAbstractFormBuilder*
/// @param widgetName const char*
/// @param parentWidget QWidget*
/// @param name const char*
///
QWidget* q_abstractformbuilder_create_widget(void* self, const char* widgetName, void* parentWidget, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createWidget)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractFormBuilder*
/// @param callback QWidget* func(QAbstractFormBuilder* self, const char* widgetName, QWidget* parentWidget, const char* name)
///
void q_abstractformbuilder_on_create_widget(void* self, QWidget* (*callback)(void*, const char*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createWidget)
///
/// Base class method implementation
///
/// @param self QAbstractFormBuilder*
/// @param widgetName const char*
/// @param parentWidget QWidget*
/// @param name const char*
///
QWidget* q_abstractformbuilder_qbase_create_widget(void* self, const char* widgetName, void* parentWidget, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createLayout)
///
/// @param self QAbstractFormBuilder*
/// @param layoutName const char*
/// @param parent QObject*
/// @param name const char*
///
QLayout* q_abstractformbuilder_create_layout(void* self, const char* layoutName, void* parent, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createLayout)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractFormBuilder*
/// @param callback QLayout* func(QAbstractFormBuilder* self, const char* layoutName, QObject* parent, const char* name)
///
void q_abstractformbuilder_on_create_layout(void* self, QLayout* (*callback)(void*, const char*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createLayout)
///
/// Base class method implementation
///
/// @param self QAbstractFormBuilder*
/// @param layoutName const char*
/// @param parent QObject*
/// @param name const char*
///
QLayout* q_abstractformbuilder_qbase_create_layout(void* self, const char* layoutName, void* parent, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createAction)
///
/// @param self QAbstractFormBuilder*
/// @param parent QObject*
/// @param name const char*
///
QAction* q_abstractformbuilder_create_action(void* self, void* parent, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createAction)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractFormBuilder*
/// @param callback QAction* func(QAbstractFormBuilder* self, QObject* parent, const char* name)
///
void q_abstractformbuilder_on_create_action(void* self, QAction* (*callback)(void*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createAction)
///
/// Base class method implementation
///
/// @param self QAbstractFormBuilder*
/// @param parent QObject*
/// @param name const char*
///
QAction* q_abstractformbuilder_qbase_create_action(void* self, void* parent, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createActionGroup)
///
/// @param self QAbstractFormBuilder*
/// @param parent QObject*
/// @param name const char*
///
QActionGroup* q_abstractformbuilder_create_action_group(void* self, void* parent, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createActionGroup)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractFormBuilder*
/// @param callback QActionGroup* func(QAbstractFormBuilder* self, QObject* parent, const char* name)
///
void q_abstractformbuilder_on_create_action_group(void* self, QActionGroup* (*callback)(void*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createActionGroup)
///
/// Base class method implementation
///
/// @param self QAbstractFormBuilder*
/// @param parent QObject*
/// @param name const char*
///
QActionGroup* q_abstractformbuilder_qbase_create_action_group(void* self, void* parent, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#checkProperty)
///
/// @param self QAbstractFormBuilder*
/// @param obj QObject*
/// @param prop const char*
///
bool q_abstractformbuilder_check_property(void* self, void* obj, const char* prop);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#checkProperty)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractFormBuilder*
/// @param callback bool func(QAbstractFormBuilder* self, QObject* obj, const char* prop)
///
void q_abstractformbuilder_on_check_property(void* self, bool (*callback)(void*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#checkProperty)
///
/// Base class method implementation
///
/// @param self QAbstractFormBuilder*
/// @param obj QObject*
/// @param prop const char*
///
bool q_abstractformbuilder_qbase_check_property(void* self, void* obj, const char* prop);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#reset)
///
/// @param self QAbstractFormBuilder*
///
void q_abstractformbuilder_reset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#reset)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractFormBuilder*
/// @param callback void func()
///
void q_abstractformbuilder_on_reset(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#reset)
///
/// Base class method implementation
///
/// @param self QAbstractFormBuilder*
///
void q_abstractformbuilder_qbase_reset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#toolBarAreaMetaEnum)
///
/// @param self QAbstractFormBuilder*
///
QMetaEnum* q_abstractformbuilder_tool_bar_area_meta_enum(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#toolBarAreaMetaEnum)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractFormBuilder*
/// @param callback QMetaEnum* func()
///
void q_abstractformbuilder_on_tool_bar_area_meta_enum(void* self, QMetaEnum* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#toolBarAreaMetaEnum)
///
/// Base class method implementation
///
/// @param self QAbstractFormBuilder*
///
QMetaEnum* q_abstractformbuilder_qbase_tool_bar_area_meta_enum(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#dtor.QAbstractFormBuilder)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractFormBuilder*
///
void q_abstractformbuilder_delete(void* self);

#endif
