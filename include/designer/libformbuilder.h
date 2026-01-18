#pragma once
#ifndef SRC_DESIGNER_QT6C_LIBFORMBUILDER_H
#define SRC_DESIGNER_QT6C_LIBFORMBUILDER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html)

/// q_formbuilder_new constructs a new QFormBuilder object.
///
QFormBuilder* q_formbuilder_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#pluginPaths)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QFormBuilder*
///
const char** q_formbuilder_plugin_paths(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#clearPluginPaths)
///
/// @param self QFormBuilder*
///
void q_formbuilder_clear_plugin_paths(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#addPluginPath)
///
/// @param self QFormBuilder*
/// @param pluginPath const char*
///
void q_formbuilder_add_plugin_path(void* self, const char* pluginPath);

/// [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#setPluginPath)
///
/// @param self QFormBuilder*
/// @param pluginPaths const char**
///
void q_formbuilder_set_plugin_path(void* self, const char* pluginPaths[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#customWidgets)
///
/// @param self QFormBuilder*
///
/// @return libqt_list of QDesignerCustomWidgetInterface*
///
libqt_list q_formbuilder_custom_widgets(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#createWidget)
///
/// @param self QFormBuilder*
/// @param widgetName const char*
/// @param parentWidget QWidget*
/// @param name const char*
///
QWidget* q_formbuilder_create_widget(void* self, const char* widgetName, void* parentWidget, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#createWidget)
///
/// Allows for overriding the related default method
///
/// @param self QFormBuilder*
/// @param callback QWidget* func(QFormBuilder* self, const char* widgetName, QWidget* parentWidget, const char* name)
///
void q_formbuilder_on_create_widget(void* self, QWidget* (*callback)(void*, const char*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#createWidget)
///
/// Base class method implementation
///
/// @param self QFormBuilder*
/// @param widgetName const char*
/// @param parentWidget QWidget*
/// @param name const char*
///
QWidget* q_formbuilder_qbase_create_widget(void* self, const char* widgetName, void* parentWidget, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#createLayout)
///
/// @param self QFormBuilder*
/// @param layoutName const char*
/// @param parent QObject*
/// @param name const char*
///
QLayout* q_formbuilder_create_layout(void* self, const char* layoutName, void* parent, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#createLayout)
///
/// Allows for overriding the related default method
///
/// @param self QFormBuilder*
/// @param callback QLayout* func(QFormBuilder* self, const char* layoutName, QObject* parent, const char* name)
///
void q_formbuilder_on_create_layout(void* self, QLayout* (*callback)(void*, const char*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#createLayout)
///
/// Base class method implementation
///
/// @param self QFormBuilder*
/// @param layoutName const char*
/// @param parent QObject*
/// @param name const char*
///
QLayout* q_formbuilder_qbase_create_layout(void* self, const char* layoutName, void* parent, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#updateCustomWidgets)
///
/// @param self QFormBuilder*
///
void q_formbuilder_update_custom_widgets(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#updateCustomWidgets)
///
/// Allows for overriding the related default method
///
/// @param self QFormBuilder*
/// @param callback void func()
///
void q_formbuilder_on_update_custom_widgets(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#updateCustomWidgets)
///
/// Base class method implementation
///
/// @param self QFormBuilder*
///
void q_formbuilder_qbase_update_custom_widgets(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#widgetByName)
///
/// @param self QFormBuilder*
/// @param topLevel QWidget*
/// @param name const char*
///
QWidget* q_formbuilder_widget_by_name(void* self, void* topLevel, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#widgetByName)
///
/// Allows for overriding the related default method
///
/// @param self QFormBuilder*
/// @param callback QWidget* func(QFormBuilder* self, QWidget* topLevel, const char* name)
///
void q_formbuilder_on_widget_by_name(void* self, QWidget* (*callback)(void*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#widgetByName)
///
/// Base class method implementation
///
/// @param self QFormBuilder*
/// @param topLevel QWidget*
/// @param name const char*
///
QWidget* q_formbuilder_qbase_widget_by_name(void* self, void* topLevel, const char* name);

/// Inherited from QAbstractFormBuilder
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#workingDirectory)
///
/// @param self QFormBuilder*
///
QDir* q_formbuilder_working_directory(void* self);

/// Inherited from QAbstractFormBuilder
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#setWorkingDirectory)
///
/// @param self QFormBuilder*
/// @param directory QDir*
///
void q_formbuilder_set_working_directory(void* self, void* directory);

/// Inherited from QAbstractFormBuilder
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QFormBuilder*
///
const char* q_formbuilder_error_string(void* self);

/// Inherited from QAbstractFormBuilder
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#load)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormBuilder*
/// @param dev QIODevice*
/// @param parentWidget QWidget*
///
QWidget* q_formbuilder_load(void* self, void* dev, void* parentWidget);

/// Inherited from QAbstractFormBuilder
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#load)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormBuilder*
/// @param dev QIODevice*
/// @param parentWidget QWidget*
///
QWidget* q_formbuilder_qbase_load(void* self, void* dev, void* parentWidget);

/// Inherited from QAbstractFormBuilder
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#load)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormBuilder*
/// @param callback QWidget* func(QFormBuilder* self, QIODevice* dev, QWidget* parentWidget)
///
void q_formbuilder_on_load(void* self, QWidget* (*callback)(void*, void*, void*));

/// Inherited from QAbstractFormBuilder
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#save)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormBuilder*
/// @param dev QIODevice*
/// @param widget QWidget*
///
void q_formbuilder_save(void* self, void* dev, void* widget);

/// Inherited from QAbstractFormBuilder
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#save)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormBuilder*
/// @param dev QIODevice*
/// @param widget QWidget*
///
void q_formbuilder_qbase_save(void* self, void* dev, void* widget);

/// Inherited from QAbstractFormBuilder
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#save)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormBuilder*
/// @param callback void func(QFormBuilder* self, QIODevice* dev, QWidget* widget)
///
void q_formbuilder_on_save(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractFormBuilder
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#addMenuAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormBuilder*
/// @param action QAction*
///
void q_formbuilder_add_menu_action(void* self, void* action);

/// Inherited from QAbstractFormBuilder
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#addMenuAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormBuilder*
/// @param action QAction*
///
void q_formbuilder_qbase_add_menu_action(void* self, void* action);

/// Inherited from QAbstractFormBuilder
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#addMenuAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormBuilder*
/// @param callback void func(QFormBuilder* self, QAction* action)
///
void q_formbuilder_on_add_menu_action(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractFormBuilder
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormBuilder*
/// @param parent QObject*
/// @param name const char*
///
QAction* q_formbuilder_create_action(void* self, void* parent, const char* name);

/// Inherited from QAbstractFormBuilder
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormBuilder*
/// @param parent QObject*
/// @param name const char*
///
QAction* q_formbuilder_qbase_create_action(void* self, void* parent, const char* name);

/// Inherited from QAbstractFormBuilder
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormBuilder*
/// @param callback QAction* func(QFormBuilder* self, QObject* parent, const char* name)
///
void q_formbuilder_on_create_action(void* self, QAction* (*callback)(void*, void*, const char*));

/// Inherited from QAbstractFormBuilder
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createActionGroup)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormBuilder*
/// @param parent QObject*
/// @param name const char*
///
QActionGroup* q_formbuilder_create_action_group(void* self, void* parent, const char* name);

/// Inherited from QAbstractFormBuilder
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createActionGroup)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormBuilder*
/// @param parent QObject*
/// @param name const char*
///
QActionGroup* q_formbuilder_qbase_create_action_group(void* self, void* parent, const char* name);

/// Inherited from QAbstractFormBuilder
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#createActionGroup)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormBuilder*
/// @param callback QActionGroup* func(QFormBuilder* self, QObject* parent, const char* name)
///
void q_formbuilder_on_create_action_group(void* self, QActionGroup* (*callback)(void*, void*, const char*));

/// Inherited from QAbstractFormBuilder
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#checkProperty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormBuilder*
/// @param obj QObject*
/// @param prop const char*
///
bool q_formbuilder_check_property(void* self, void* obj, const char* prop);

/// Inherited from QAbstractFormBuilder
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#checkProperty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormBuilder*
/// @param obj QObject*
/// @param prop const char*
///
bool q_formbuilder_qbase_check_property(void* self, void* obj, const char* prop);

/// Inherited from QAbstractFormBuilder
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#checkProperty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormBuilder*
/// @param callback bool func(QFormBuilder* self, QObject* obj, const char* prop)
///
void q_formbuilder_on_check_property(void* self, bool (*callback)(void*, void*, const char*));

/// Inherited from QAbstractFormBuilder
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#applyPropertyInternally)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormBuilder*
/// @param o QObject*
/// @param propertyName const char*
/// @param value QVariant*
///
bool q_formbuilder_apply_property_internally(void* self, void* o, const char* propertyName, void* value);

/// Inherited from QAbstractFormBuilder
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#applyPropertyInternally)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormBuilder*
/// @param o QObject*
/// @param propertyName const char*
/// @param value QVariant*
///
bool q_formbuilder_qbase_apply_property_internally(void* self, void* o, const char* propertyName, void* value);

/// Inherited from QAbstractFormBuilder
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#applyPropertyInternally)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormBuilder*
/// @param callback bool func(QFormBuilder* self, QObject* o, const char* propertyName, QVariant* value)
///
void q_formbuilder_on_apply_property_internally(void* self, bool (*callback)(void*, void*, const char*, void*));

/// Inherited from QAbstractFormBuilder
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormBuilder*
///
void q_formbuilder_reset(void* self);

/// Inherited from QAbstractFormBuilder
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormBuilder*
///
void q_formbuilder_qbase_reset(void* self);

/// Inherited from QAbstractFormBuilder
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormBuilder*
/// @param callback void func()
///
void q_formbuilder_on_reset(void* self, void (*callback)());

/// Inherited from QAbstractFormBuilder
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#toolBarAreaMetaEnum)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormBuilder*
///
QMetaEnum* q_formbuilder_tool_bar_area_meta_enum(void* self);

/// Inherited from QAbstractFormBuilder
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#toolBarAreaMetaEnum)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormBuilder*
///
QMetaEnum* q_formbuilder_qbase_tool_bar_area_meta_enum(void* self);

/// Inherited from QAbstractFormBuilder
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractformbuilder.html#toolBarAreaMetaEnum)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormBuilder*
/// @param callback QMetaEnum* func()
///
void q_formbuilder_on_tool_bar_area_meta_enum(void* self, QMetaEnum* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qformbuilder.html#dtor.QFormBuilder)
///
/// Delete this object from C++ memory.
///
/// @param self QFormBuilder*
///
void q_formbuilder_delete(void* self);

#endif
