#pragma once
#ifndef DESIGNER_LIBABSTRACTWIDGETDATABASE_H
#define DESIGNER_LIBABSTRACTWIDGETDATABASE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html)

/// q_designerwidgetdatabaseiteminterface_new constructs a new QDesignerWidgetDataBaseItemInterface object.
///
QDesignerWidgetDataBaseItemInterface* q_designerwidgetdatabaseiteminterface_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#name)
///
/// @warning This method must be implemented with `q_designerwidgetdatabaseiteminterface_on_name` before it can be called.
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDesignerWidgetDataBaseItemInterface*
///
const char* q_designerwidgetdatabaseiteminterface_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#name)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerWidgetDataBaseItemInterface*
/// @param callback const char* func(const QDesignerWidgetDataBaseItemInterface* self)
///
void q_designerwidgetdatabaseiteminterface_on_name(const void* self, const char* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setName)
///
/// @warning This method must be implemented with `q_designerwidgetdatabaseiteminterface_on_set_name` before it can be called.
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param name const char*
///
void q_designerwidgetdatabaseiteminterface_set_name(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setName)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param callback void func(QDesignerWidgetDataBaseItemInterface* self, const char* name)
///
void q_designerwidgetdatabaseiteminterface_on_set_name(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#group)
///
/// @warning This method must be implemented with `q_designerwidgetdatabaseiteminterface_on_group` before it can be called.
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDesignerWidgetDataBaseItemInterface*
///
const char* q_designerwidgetdatabaseiteminterface_group(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#group)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerWidgetDataBaseItemInterface*
/// @param callback const char* func(const QDesignerWidgetDataBaseItemInterface* self)
///
void q_designerwidgetdatabaseiteminterface_on_group(const void* self, const char* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setGroup)
///
/// @warning This method must be implemented with `q_designerwidgetdatabaseiteminterface_on_set_group` before it can be called.
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param group const char*
///
void q_designerwidgetdatabaseiteminterface_set_group(void* self, const char* group);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setGroup)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param callback void func(QDesignerWidgetDataBaseItemInterface* self, const char* group)
///
void q_designerwidgetdatabaseiteminterface_on_set_group(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#toolTip)
///
/// @warning This method must be implemented with `q_designerwidgetdatabaseiteminterface_on_tool_tip` before it can be called.
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDesignerWidgetDataBaseItemInterface*
///
const char* q_designerwidgetdatabaseiteminterface_tool_tip(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#toolTip)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerWidgetDataBaseItemInterface*
/// @param callback const char* func(const QDesignerWidgetDataBaseItemInterface* self)
///
void q_designerwidgetdatabaseiteminterface_on_tool_tip(const void* self, const char* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setToolTip)
///
/// @warning This method must be implemented with `q_designerwidgetdatabaseiteminterface_on_set_tool_tip` before it can be called.
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param toolTip const char*
///
void q_designerwidgetdatabaseiteminterface_set_tool_tip(void* self, const char* toolTip);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setToolTip)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param callback void func(QDesignerWidgetDataBaseItemInterface* self, const char* toolTip)
///
void q_designerwidgetdatabaseiteminterface_on_set_tool_tip(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#whatsThis)
///
/// @warning This method must be implemented with `q_designerwidgetdatabaseiteminterface_on_whats_this` before it can be called.
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDesignerWidgetDataBaseItemInterface*
///
const char* q_designerwidgetdatabaseiteminterface_whats_this(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#whatsThis)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerWidgetDataBaseItemInterface*
/// @param callback const char* func(const QDesignerWidgetDataBaseItemInterface* self)
///
void q_designerwidgetdatabaseiteminterface_on_whats_this(const void* self, const char* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setWhatsThis)
///
/// @warning This method must be implemented with `q_designerwidgetdatabaseiteminterface_on_set_whats_this` before it can be called.
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param whatsThis const char*
///
void q_designerwidgetdatabaseiteminterface_set_whats_this(void* self, const char* whatsThis);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setWhatsThis)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param callback void func(QDesignerWidgetDataBaseItemInterface* self, const char* whatsThis)
///
void q_designerwidgetdatabaseiteminterface_on_set_whats_this(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#includeFile)
///
/// @warning This method must be implemented with `q_designerwidgetdatabaseiteminterface_on_include_file` before it can be called.
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDesignerWidgetDataBaseItemInterface*
///
const char* q_designerwidgetdatabaseiteminterface_include_file(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#includeFile)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerWidgetDataBaseItemInterface*
/// @param callback const char* func(const QDesignerWidgetDataBaseItemInterface* self)
///
void q_designerwidgetdatabaseiteminterface_on_include_file(const void* self, const char* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setIncludeFile)
///
/// @warning This method must be implemented with `q_designerwidgetdatabaseiteminterface_on_set_include_file` before it can be called.
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param includeFile const char*
///
void q_designerwidgetdatabaseiteminterface_set_include_file(void* self, const char* includeFile);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setIncludeFile)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param callback void func(QDesignerWidgetDataBaseItemInterface* self, const char* includeFile)
///
void q_designerwidgetdatabaseiteminterface_on_set_include_file(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#icon)
///
/// @warning This method must be implemented with `q_designerwidgetdatabaseiteminterface_on_icon` before it can be called.
///
/// @param self const QDesignerWidgetDataBaseItemInterface*
///
QIcon* q_designerwidgetdatabaseiteminterface_icon(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#icon)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerWidgetDataBaseItemInterface*
/// @param callback QIcon* func(const QDesignerWidgetDataBaseItemInterface* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_designerwidgetdatabaseiteminterface_on_icon(const void* self, QIcon* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setIcon)
///
/// @warning This method must be implemented with `q_designerwidgetdatabaseiteminterface_on_set_icon` before it can be called.
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param icon QIcon*
///
void q_designerwidgetdatabaseiteminterface_set_icon(void* self, const void* icon);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setIcon)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param callback void func(QDesignerWidgetDataBaseItemInterface* self, QIcon* icon)
///
void q_designerwidgetdatabaseiteminterface_on_set_icon(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isCompat)
///
/// @warning This method must be implemented with `q_designerwidgetdatabaseiteminterface_on_is_compat` before it can be called.
///
/// @param self const QDesignerWidgetDataBaseItemInterface*
///
bool q_designerwidgetdatabaseiteminterface_is_compat(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isCompat)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerWidgetDataBaseItemInterface*
/// @param callback bool func(const QDesignerWidgetDataBaseItemInterface* self)
///
void q_designerwidgetdatabaseiteminterface_on_is_compat(const void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setCompat)
///
/// @warning This method must be implemented with `q_designerwidgetdatabaseiteminterface_on_set_compat` before it can be called.
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param compat bool
///
void q_designerwidgetdatabaseiteminterface_set_compat(void* self, bool compat);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setCompat)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param callback void func(QDesignerWidgetDataBaseItemInterface* self, bool compat)
///
void q_designerwidgetdatabaseiteminterface_on_set_compat(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isContainer)
///
/// @warning This method must be implemented with `q_designerwidgetdatabaseiteminterface_on_is_container` before it can be called.
///
/// @param self const QDesignerWidgetDataBaseItemInterface*
///
bool q_designerwidgetdatabaseiteminterface_is_container(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isContainer)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerWidgetDataBaseItemInterface*
/// @param callback bool func(const QDesignerWidgetDataBaseItemInterface* self)
///
void q_designerwidgetdatabaseiteminterface_on_is_container(const void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setContainer)
///
/// @warning This method must be implemented with `q_designerwidgetdatabaseiteminterface_on_set_container` before it can be called.
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param container bool
///
void q_designerwidgetdatabaseiteminterface_set_container(void* self, bool container);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setContainer)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param callback void func(QDesignerWidgetDataBaseItemInterface* self, bool container)
///
void q_designerwidgetdatabaseiteminterface_on_set_container(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isCustom)
///
/// @warning This method must be implemented with `q_designerwidgetdatabaseiteminterface_on_is_custom` before it can be called.
///
/// @param self const QDesignerWidgetDataBaseItemInterface*
///
bool q_designerwidgetdatabaseiteminterface_is_custom(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isCustom)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerWidgetDataBaseItemInterface*
/// @param callback bool func(const QDesignerWidgetDataBaseItemInterface* self)
///
void q_designerwidgetdatabaseiteminterface_on_is_custom(const void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setCustom)
///
/// @warning This method must be implemented with `q_designerwidgetdatabaseiteminterface_on_set_custom` before it can be called.
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param custom bool
///
void q_designerwidgetdatabaseiteminterface_set_custom(void* self, bool custom);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setCustom)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param callback void func(QDesignerWidgetDataBaseItemInterface* self, bool custom)
///
void q_designerwidgetdatabaseiteminterface_on_set_custom(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#pluginPath)
///
/// @warning This method must be implemented with `q_designerwidgetdatabaseiteminterface_on_plugin_path` before it can be called.
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDesignerWidgetDataBaseItemInterface*
///
const char* q_designerwidgetdatabaseiteminterface_plugin_path(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#pluginPath)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerWidgetDataBaseItemInterface*
/// @param callback const char* func(const QDesignerWidgetDataBaseItemInterface* self)
///
void q_designerwidgetdatabaseiteminterface_on_plugin_path(const void* self, const char* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setPluginPath)
///
/// @warning This method must be implemented with `q_designerwidgetdatabaseiteminterface_on_set_plugin_path` before it can be called.
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param path const char*
///
void q_designerwidgetdatabaseiteminterface_set_plugin_path(void* self, const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setPluginPath)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param callback void func(QDesignerWidgetDataBaseItemInterface* self, const char* path)
///
void q_designerwidgetdatabaseiteminterface_on_set_plugin_path(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isPromoted)
///
/// @warning This method must be implemented with `q_designerwidgetdatabaseiteminterface_on_is_promoted` before it can be called.
///
/// @param self const QDesignerWidgetDataBaseItemInterface*
///
bool q_designerwidgetdatabaseiteminterface_is_promoted(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isPromoted)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerWidgetDataBaseItemInterface*
/// @param callback bool func(const QDesignerWidgetDataBaseItemInterface* self)
///
void q_designerwidgetdatabaseiteminterface_on_is_promoted(const void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setPromoted)
///
/// @warning This method must be implemented with `q_designerwidgetdatabaseiteminterface_on_set_promoted` before it can be called.
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param b bool
///
void q_designerwidgetdatabaseiteminterface_set_promoted(void* self, bool b);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setPromoted)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param callback void func(QDesignerWidgetDataBaseItemInterface* self, bool b)
///
void q_designerwidgetdatabaseiteminterface_on_set_promoted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#extends)
///
/// @warning This method must be implemented with `q_designerwidgetdatabaseiteminterface_on_extends` before it can be called.
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDesignerWidgetDataBaseItemInterface*
///
const char* q_designerwidgetdatabaseiteminterface_extends(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#extends)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerWidgetDataBaseItemInterface*
/// @param callback const char* func(const QDesignerWidgetDataBaseItemInterface* self)
///
void q_designerwidgetdatabaseiteminterface_on_extends(const void* self, const char* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setExtends)
///
/// @warning This method must be implemented with `q_designerwidgetdatabaseiteminterface_on_set_extends` before it can be called.
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param s const char*
///
void q_designerwidgetdatabaseiteminterface_set_extends(void* self, const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setExtends)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param callback void func(QDesignerWidgetDataBaseItemInterface* self, const char* s)
///
void q_designerwidgetdatabaseiteminterface_on_set_extends(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setDefaultPropertyValues)
///
/// @warning This method must be implemented with `q_designerwidgetdatabaseiteminterface_on_set_default_property_values` before it can be called.
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param list libqt_list of QVariant*
///
void q_designerwidgetdatabaseiteminterface_set_default_property_values(void* self, libqt_list list);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setDefaultPropertyValues)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param callback void func(QDesignerWidgetDataBaseItemInterface* self, libqt_list of QVariant* list)
///
void q_designerwidgetdatabaseiteminterface_on_set_default_property_values(void* self, void (*callback)(void*, libqt_list));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#defaultPropertyValues)
///
/// @warning This method must be implemented with `q_designerwidgetdatabaseiteminterface_on_default_property_values` before it can be called.
///
/// @param self const QDesignerWidgetDataBaseItemInterface*
///
/// @return libqt_list of QVariant*
///
libqt_list q_designerwidgetdatabaseiteminterface_default_property_values(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#defaultPropertyValues)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerWidgetDataBaseItemInterface*
/// @param callback libqt_list of QVariant* func(const QDesignerWidgetDataBaseItemInterface* self)
///
void q_designerwidgetdatabaseiteminterface_on_default_property_values(const void* self, libqt_list (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#dtor.QDesignerWidgetDataBaseItemInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerWidgetDataBaseItemInterface*
///
void q_designerwidgetdatabaseiteminterface_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html)

/// q_designerwidgetdatabaseinterface_new constructs a new QDesignerWidgetDataBaseInterface object.
///
QDesignerWidgetDataBaseInterface* q_designerwidgetdatabaseinterface_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html)

/// q_designerwidgetdatabaseinterface_new2 constructs a new QDesignerWidgetDataBaseInterface object.
///
/// @param parent QObject*
///
QDesignerWidgetDataBaseInterface* q_designerwidgetdatabaseinterface_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QDesignerWidgetDataBaseInterface*
///
const QMetaObject* q_designerwidgetdatabaseinterface_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param callback const QMetaObject* func(const QDesignerWidgetDataBaseInterface* self)
///
void q_designerwidgetdatabaseinterface_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QDesignerWidgetDataBaseInterface*
///
const QMetaObject* q_designerwidgetdatabaseinterface_super_meta_object(const void* self);

/// @param self QDesignerWidgetDataBaseInterface*
/// @param param1 const char*
///
void* q_designerwidgetdatabaseinterface_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param callback void* func(QDesignerWidgetDataBaseInterface* self, const char* param1)
///
void q_designerwidgetdatabaseinterface_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param param1 const char*
///
void* q_designerwidgetdatabaseinterface_super_metacast(void* self, const char* param1);

/// @param self QDesignerWidgetDataBaseInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_designerwidgetdatabaseinterface_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param callback int32_t func(QDesignerWidgetDataBaseInterface* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_designerwidgetdatabaseinterface_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_designerwidgetdatabaseinterface_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_designerwidgetdatabaseinterface_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#count)
///
/// @param self const QDesignerWidgetDataBaseInterface*
///
int32_t q_designerwidgetdatabaseinterface_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#count)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param callback int32_t func(const QDesignerWidgetDataBaseInterface* self)
///
void q_designerwidgetdatabaseinterface_on_count(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#count)
///
/// Base class method implementation
///
/// @param self const QDesignerWidgetDataBaseInterface*
///
int32_t q_designerwidgetdatabaseinterface_super_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#item)
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param index int
///
QDesignerWidgetDataBaseItemInterface* q_designerwidgetdatabaseinterface_item(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#item)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param callback QDesignerWidgetDataBaseItemInterface* func(const QDesignerWidgetDataBaseInterface* self, int index)
///
void q_designerwidgetdatabaseinterface_on_item(const void* self, QDesignerWidgetDataBaseItemInterface* (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#item)
///
/// Base class method implementation
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param index int
///
QDesignerWidgetDataBaseItemInterface* q_designerwidgetdatabaseinterface_super_item(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOf)
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param item QDesignerWidgetDataBaseItemInterface*
///
int32_t q_designerwidgetdatabaseinterface_index_of(const void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOf)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param callback int32_t func(const QDesignerWidgetDataBaseInterface* self, QDesignerWidgetDataBaseItemInterface* item)
///
void q_designerwidgetdatabaseinterface_on_index_of(const void* self, int32_t (*callback)(const void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOf)
///
/// Base class method implementation
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param item QDesignerWidgetDataBaseItemInterface*
///
int32_t q_designerwidgetdatabaseinterface_super_index_of(const void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#insert)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param index int
/// @param item QDesignerWidgetDataBaseItemInterface*
///
void q_designerwidgetdatabaseinterface_insert(void* self, int index, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#insert)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param callback void func(QDesignerWidgetDataBaseInterface* self, int index, QDesignerWidgetDataBaseItemInterface* item)
///
void q_designerwidgetdatabaseinterface_on_insert(void* self, void (*callback)(void*, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#insert)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param index int
/// @param item QDesignerWidgetDataBaseItemInterface*
///
void q_designerwidgetdatabaseinterface_super_insert(void* self, int index, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#append)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param item QDesignerWidgetDataBaseItemInterface*
///
void q_designerwidgetdatabaseinterface_append(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#append)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param callback void func(QDesignerWidgetDataBaseInterface* self, QDesignerWidgetDataBaseItemInterface* item)
///
void q_designerwidgetdatabaseinterface_on_append(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#append)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param item QDesignerWidgetDataBaseItemInterface*
///
void q_designerwidgetdatabaseinterface_super_append(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOfObject)
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param object QObject*
/// @param resolveName bool
///
int32_t q_designerwidgetdatabaseinterface_index_of_object(const void* self, void* object, bool resolveName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOfObject)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param callback int32_t func(const QDesignerWidgetDataBaseInterface* self, QObject* object, bool resolveName)
///
void q_designerwidgetdatabaseinterface_on_index_of_object(const void* self, int32_t (*callback)(const void*, void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOfObject)
///
/// Base class method implementation
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param object QObject*
/// @param resolveName bool
///
int32_t q_designerwidgetdatabaseinterface_super_index_of_object(const void* self, void* object, bool resolveName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOfClassName)
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param className const char*
/// @param resolveName bool
///
int32_t q_designerwidgetdatabaseinterface_index_of_class_name(const void* self, const char* className, bool resolveName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOfClassName)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param callback int32_t func(const QDesignerWidgetDataBaseInterface* self, const char* className, bool resolveName)
///
void q_designerwidgetdatabaseinterface_on_index_of_class_name(const void* self, int32_t (*callback)(const void*, const char*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOfClassName)
///
/// Base class method implementation
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param className const char*
/// @param resolveName bool
///
int32_t q_designerwidgetdatabaseinterface_super_index_of_class_name(const void* self, const char* className, bool resolveName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#core)
///
/// @param self const QDesignerWidgetDataBaseInterface*
///
QDesignerFormEditorInterface* q_designerwidgetdatabaseinterface_core(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#core)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param callback QDesignerFormEditorInterface* func(const QDesignerWidgetDataBaseInterface* self)
///
void q_designerwidgetdatabaseinterface_on_core(const void* self, QDesignerFormEditorInterface* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#core)
///
/// Base class method implementation
///
/// @param self const QDesignerWidgetDataBaseInterface*
///
QDesignerFormEditorInterface* q_designerwidgetdatabaseinterface_super_core(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#isContainer)
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param object QObject*
///
bool q_designerwidgetdatabaseinterface_is_container(const void* self, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#isCustom)
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param object QObject*
///
bool q_designerwidgetdatabaseinterface_is_custom(const void* self, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#changed)
///
/// @param self QDesignerWidgetDataBaseInterface*
///
void q_designerwidgetdatabaseinterface_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#changed)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param callback void func(QDesignerWidgetDataBaseInterface* self)
///
void q_designerwidgetdatabaseinterface_on_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_designerwidgetdatabaseinterface_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_designerwidgetdatabaseinterface_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#isContainer)
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param object QObject*
/// @param resolveName bool
///
bool q_designerwidgetdatabaseinterface_is_container2(const void* self, void* object, bool resolveName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#isCustom)
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param object QObject*
/// @param resolveName bool
///
bool q_designerwidgetdatabaseinterface_is_custom2(const void* self, void* object, bool resolveName);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDesignerWidgetDataBaseInterface*
///
const char* q_designerwidgetdatabaseinterface_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param name const char*
///
void q_designerwidgetdatabaseinterface_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QDesignerWidgetDataBaseInterface*
///
bool q_designerwidgetdatabaseinterface_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QDesignerWidgetDataBaseInterface*
///
bool q_designerwidgetdatabaseinterface_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QDesignerWidgetDataBaseInterface*
///
bool q_designerwidgetdatabaseinterface_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QDesignerWidgetDataBaseInterface*
///
bool q_designerwidgetdatabaseinterface_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param b bool
///
bool q_designerwidgetdatabaseinterface_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QDesignerWidgetDataBaseInterface*
///
QThread* q_designerwidgetdatabaseinterface_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param thread QThread*
///
bool q_designerwidgetdatabaseinterface_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param interval int
///
int32_t q_designerwidgetdatabaseinterface_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param time int64_t of nanoseconds
///
int32_t q_designerwidgetdatabaseinterface_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param id int
///
void q_designerwidgetdatabaseinterface_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param id enum Qt__TimerId
///
void q_designerwidgetdatabaseinterface_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QDesignerWidgetDataBaseInterface*
///
/// @return libqt_list of QObject*
///
libqt_list q_designerwidgetdatabaseinterface_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param parent QObject*
///
void q_designerwidgetdatabaseinterface_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param filterObj QObject*
///
void q_designerwidgetdatabaseinterface_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param obj QObject*
///
void q_designerwidgetdatabaseinterface_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_designerwidgetdatabaseinterface_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_designerwidgetdatabaseinterface_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_designerwidgetdatabaseinterface_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_designerwidgetdatabaseinterface_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_designerwidgetdatabaseinterface_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDesignerWidgetDataBaseInterface*
///
bool q_designerwidgetdatabaseinterface_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param receiver QObject*
///
bool q_designerwidgetdatabaseinterface_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_designerwidgetdatabaseinterface_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QDesignerWidgetDataBaseInterface*
///
void q_designerwidgetdatabaseinterface_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QDesignerWidgetDataBaseInterface*
///
void q_designerwidgetdatabaseinterface_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param name const char*
/// @param value QVariant*
///
bool q_designerwidgetdatabaseinterface_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param name const char*
///
QVariant* q_designerwidgetdatabaseinterface_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QDesignerWidgetDataBaseInterface*
///
const char** q_designerwidgetdatabaseinterface_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDesignerWidgetDataBaseInterface*
///
QBindingStorage* q_designerwidgetdatabaseinterface_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QDesignerWidgetDataBaseInterface*
///
const QBindingStorage* q_designerwidgetdatabaseinterface_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerWidgetDataBaseInterface*
///
void q_designerwidgetdatabaseinterface_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param callback void func(QDesignerWidgetDataBaseInterface* self)
///
void q_designerwidgetdatabaseinterface_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QDesignerWidgetDataBaseInterface*
///
QObject* q_designerwidgetdatabaseinterface_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param classname const char*
///
bool q_designerwidgetdatabaseinterface_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDesignerWidgetDataBaseInterface*
///
void q_designerwidgetdatabaseinterface_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_designerwidgetdatabaseinterface_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_designerwidgetdatabaseinterface_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_designerwidgetdatabaseinterface_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_designerwidgetdatabaseinterface_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_designerwidgetdatabaseinterface_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param signal const char*
///
bool q_designerwidgetdatabaseinterface_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_designerwidgetdatabaseinterface_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_designerwidgetdatabaseinterface_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param receiver QObject*
/// @param member const char*
///
bool q_designerwidgetdatabaseinterface_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param param1 QObject*
///
void q_designerwidgetdatabaseinterface_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param callback void func(QDesignerWidgetDataBaseInterface* self, QObject* param1)
///
void q_designerwidgetdatabaseinterface_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param event QEvent*
///
bool q_designerwidgetdatabaseinterface_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param event QEvent*
///
bool q_designerwidgetdatabaseinterface_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param callback bool func(QDesignerWidgetDataBaseInterface* self, QEvent* event)
///
void q_designerwidgetdatabaseinterface_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_designerwidgetdatabaseinterface_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_designerwidgetdatabaseinterface_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param callback bool func(QDesignerWidgetDataBaseInterface* self, QObject* watched, QEvent* event)
///
void q_designerwidgetdatabaseinterface_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param event QTimerEvent*
///
void q_designerwidgetdatabaseinterface_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param event QTimerEvent*
///
void q_designerwidgetdatabaseinterface_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param callback void func(QDesignerWidgetDataBaseInterface* self, QTimerEvent* event)
///
void q_designerwidgetdatabaseinterface_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param event QChildEvent*
///
void q_designerwidgetdatabaseinterface_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param event QChildEvent*
///
void q_designerwidgetdatabaseinterface_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param callback void func(QDesignerWidgetDataBaseInterface* self, QChildEvent* event)
///
void q_designerwidgetdatabaseinterface_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param event QEvent*
///
void q_designerwidgetdatabaseinterface_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param event QEvent*
///
void q_designerwidgetdatabaseinterface_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param callback void func(QDesignerWidgetDataBaseInterface* self, QEvent* event)
///
void q_designerwidgetdatabaseinterface_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param signal QMetaMethod*
///
void q_designerwidgetdatabaseinterface_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param signal QMetaMethod*
///
void q_designerwidgetdatabaseinterface_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param callback void func(QDesignerWidgetDataBaseInterface* self, QMetaMethod* signal)
///
void q_designerwidgetdatabaseinterface_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param signal QMetaMethod*
///
void q_designerwidgetdatabaseinterface_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param signal QMetaMethod*
///
void q_designerwidgetdatabaseinterface_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param callback void func(QDesignerWidgetDataBaseInterface* self, QMetaMethod* signal)
///
void q_designerwidgetdatabaseinterface_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QDesignerWidgetDataBaseInterface*
///
QObject* q_designerwidgetdatabaseinterface_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QDesignerWidgetDataBaseInterface*
///
QObject* q_designerwidgetdatabaseinterface_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param callback QObject* func(QDesignerWidgetDataBaseInterface* self)
///
void q_designerwidgetdatabaseinterface_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QDesignerWidgetDataBaseInterface*
///
int32_t q_designerwidgetdatabaseinterface_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QDesignerWidgetDataBaseInterface*
///
int32_t q_designerwidgetdatabaseinterface_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param callback int32_t func(QDesignerWidgetDataBaseInterface* self)
///
void q_designerwidgetdatabaseinterface_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param signal const char*
///
int32_t q_designerwidgetdatabaseinterface_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param signal const char*
///
int32_t q_designerwidgetdatabaseinterface_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param callback int32_t func(QDesignerWidgetDataBaseInterface* self, const char* signal)
///
void q_designerwidgetdatabaseinterface_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param signal QMetaMethod*
///
bool q_designerwidgetdatabaseinterface_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param signal QMetaMethod*
///
bool q_designerwidgetdatabaseinterface_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QDesignerWidgetDataBaseInterface*
/// @param callback bool func(QDesignerWidgetDataBaseInterface* self, QMetaMethod* signal)
///
void q_designerwidgetdatabaseinterface_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param callback void func(QDesignerWidgetDataBaseInterface* self, const char* objectName)
///
void q_designerwidgetdatabaseinterface_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#dtor.QDesignerWidgetDataBaseInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerWidgetDataBaseInterface*
///
void q_designerwidgetdatabaseinterface_delete(void* self);

#endif
