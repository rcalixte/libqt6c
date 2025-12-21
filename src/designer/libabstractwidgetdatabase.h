#pragma once
#ifndef SRC_DESIGNER_QT6C_LIBABSTRACTWIDGETDATABASE_H
#define SRC_DESIGNER_QT6C_LIBABSTRACTWIDGETDATABASE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html)

/// q_designerwidgetdatabaseiteminterface_new constructs a new QDesignerWidgetDataBaseItemInterface object.
///
QDesignerWidgetDataBaseItemInterface* q_designerwidgetdatabaseiteminterface_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#name)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QDesignerWidgetDataBaseItemInterface*
///
const char* q_designerwidgetdatabaseiteminterface_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#name)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param callback const char* func()
///
void q_designerwidgetdatabaseiteminterface_on_name(void* self, const char* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#name)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseItemInterface*
///
const char* q_designerwidgetdatabaseiteminterface_qbase_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setName)
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setName)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param name const char*
///
void q_designerwidgetdatabaseiteminterface_qbase_set_name(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#group)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QDesignerWidgetDataBaseItemInterface*
///
const char* q_designerwidgetdatabaseiteminterface_group(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#group)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param callback const char* func()
///
void q_designerwidgetdatabaseiteminterface_on_group(void* self, const char* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#group)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseItemInterface*
///
const char* q_designerwidgetdatabaseiteminterface_qbase_group(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setGroup)
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setGroup)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param group const char*
///
void q_designerwidgetdatabaseiteminterface_qbase_set_group(void* self, const char* group);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QDesignerWidgetDataBaseItemInterface*
///
const char* q_designerwidgetdatabaseiteminterface_tool_tip(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#toolTip)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param callback const char* func()
///
void q_designerwidgetdatabaseiteminterface_on_tool_tip(void* self, const char* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#toolTip)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseItemInterface*
///
const char* q_designerwidgetdatabaseiteminterface_qbase_tool_tip(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setToolTip)
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setToolTip)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param toolTip const char*
///
void q_designerwidgetdatabaseiteminterface_qbase_set_tool_tip(void* self, const char* toolTip);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QDesignerWidgetDataBaseItemInterface*
///
const char* q_designerwidgetdatabaseiteminterface_whats_this(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#whatsThis)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param callback const char* func()
///
void q_designerwidgetdatabaseiteminterface_on_whats_this(void* self, const char* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#whatsThis)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseItemInterface*
///
const char* q_designerwidgetdatabaseiteminterface_qbase_whats_this(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setWhatsThis)
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setWhatsThis)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param whatsThis const char*
///
void q_designerwidgetdatabaseiteminterface_qbase_set_whats_this(void* self, const char* whatsThis);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#includeFile)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QDesignerWidgetDataBaseItemInterface*
///
const char* q_designerwidgetdatabaseiteminterface_include_file(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#includeFile)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param callback const char* func()
///
void q_designerwidgetdatabaseiteminterface_on_include_file(void* self, const char* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#includeFile)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseItemInterface*
///
const char* q_designerwidgetdatabaseiteminterface_qbase_include_file(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setIncludeFile)
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setIncludeFile)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param includeFile const char*
///
void q_designerwidgetdatabaseiteminterface_qbase_set_include_file(void* self, const char* includeFile);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#icon)
///
/// @param self QDesignerWidgetDataBaseItemInterface*
///
QIcon* q_designerwidgetdatabaseiteminterface_icon(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#icon)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param callback QIcon* func()
///
void q_designerwidgetdatabaseiteminterface_on_icon(void* self, QIcon* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#icon)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseItemInterface*
///
QIcon* q_designerwidgetdatabaseiteminterface_qbase_icon(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setIcon)
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param icon QIcon*
///
void q_designerwidgetdatabaseiteminterface_set_icon(void* self, void* icon);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setIcon)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param callback void func(QDesignerWidgetDataBaseItemInterface* self, QIcon* icon)
///
void q_designerwidgetdatabaseiteminterface_on_set_icon(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setIcon)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param icon QIcon*
///
void q_designerwidgetdatabaseiteminterface_qbase_set_icon(void* self, void* icon);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isCompat)
///
/// @param self QDesignerWidgetDataBaseItemInterface*
///
bool q_designerwidgetdatabaseiteminterface_is_compat(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isCompat)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param callback bool func()
///
void q_designerwidgetdatabaseiteminterface_on_is_compat(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isCompat)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseItemInterface*
///
bool q_designerwidgetdatabaseiteminterface_qbase_is_compat(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setCompat)
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setCompat)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param compat bool
///
void q_designerwidgetdatabaseiteminterface_qbase_set_compat(void* self, bool compat);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isContainer)
///
/// @param self QDesignerWidgetDataBaseItemInterface*
///
bool q_designerwidgetdatabaseiteminterface_is_container(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isContainer)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param callback bool func()
///
void q_designerwidgetdatabaseiteminterface_on_is_container(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isContainer)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseItemInterface*
///
bool q_designerwidgetdatabaseiteminterface_qbase_is_container(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setContainer)
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setContainer)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param container bool
///
void q_designerwidgetdatabaseiteminterface_qbase_set_container(void* self, bool container);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isCustom)
///
/// @param self QDesignerWidgetDataBaseItemInterface*
///
bool q_designerwidgetdatabaseiteminterface_is_custom(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isCustom)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param callback bool func()
///
void q_designerwidgetdatabaseiteminterface_on_is_custom(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isCustom)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseItemInterface*
///
bool q_designerwidgetdatabaseiteminterface_qbase_is_custom(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setCustom)
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setCustom)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param custom bool
///
void q_designerwidgetdatabaseiteminterface_qbase_set_custom(void* self, bool custom);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#pluginPath)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QDesignerWidgetDataBaseItemInterface*
///
const char* q_designerwidgetdatabaseiteminterface_plugin_path(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#pluginPath)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param callback const char* func()
///
void q_designerwidgetdatabaseiteminterface_on_plugin_path(void* self, const char* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#pluginPath)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseItemInterface*
///
const char* q_designerwidgetdatabaseiteminterface_qbase_plugin_path(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setPluginPath)
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setPluginPath)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param path const char*
///
void q_designerwidgetdatabaseiteminterface_qbase_set_plugin_path(void* self, const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isPromoted)
///
/// @param self QDesignerWidgetDataBaseItemInterface*
///
bool q_designerwidgetdatabaseiteminterface_is_promoted(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isPromoted)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param callback bool func()
///
void q_designerwidgetdatabaseiteminterface_on_is_promoted(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isPromoted)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseItemInterface*
///
bool q_designerwidgetdatabaseiteminterface_qbase_is_promoted(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setPromoted)
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setPromoted)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param b bool
///
void q_designerwidgetdatabaseiteminterface_qbase_set_promoted(void* self, bool b);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#extends)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QDesignerWidgetDataBaseItemInterface*
///
const char* q_designerwidgetdatabaseiteminterface_extends(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#extends)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param callback const char* func()
///
void q_designerwidgetdatabaseiteminterface_on_extends(void* self, const char* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#extends)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseItemInterface*
///
const char* q_designerwidgetdatabaseiteminterface_qbase_extends(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setExtends)
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setExtends)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param s const char*
///
void q_designerwidgetdatabaseiteminterface_qbase_set_extends(void* self, const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setDefaultPropertyValues)
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param list libqt_list /* of QVariant* */
///
void q_designerwidgetdatabaseiteminterface_set_default_property_values(void* self, libqt_list list);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setDefaultPropertyValues)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param callback void func(QDesignerWidgetDataBaseItemInterface* self, QVariant** list)
///
void q_designerwidgetdatabaseiteminterface_on_set_default_property_values(void* self, void (*callback)(void*, QVariant**));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setDefaultPropertyValues)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param list libqt_list /* of QVariant* */
///
void q_designerwidgetdatabaseiteminterface_qbase_set_default_property_values(void* self, libqt_list list);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#defaultPropertyValues)
///
/// @param self QDesignerWidgetDataBaseItemInterface*
///
libqt_list /* of QVariant* */ q_designerwidgetdatabaseiteminterface_default_property_values(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#defaultPropertyValues)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseItemInterface*
/// @param callback QVariant** func()
///
void q_designerwidgetdatabaseiteminterface_on_default_property_values(void* self, QVariant** (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#defaultPropertyValues)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseItemInterface*
///
libqt_list /* of QVariant* */ q_designerwidgetdatabaseiteminterface_qbase_default_property_values(void* self);

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
/// @param self QDesignerWidgetDataBaseInterface*
///
const QMetaObject* q_designerwidgetdatabaseinterface_meta_object(void* self);

/// @param self QDesignerWidgetDataBaseInterface*
/// @param param1 const char*
///
void* q_designerwidgetdatabaseinterface_metacast(void* self, const char* param1);

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
int32_t q_designerwidgetdatabaseinterface_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* q_designerwidgetdatabaseinterface_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#count)
///
/// @param self QDesignerWidgetDataBaseInterface*
///
int32_t q_designerwidgetdatabaseinterface_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#count)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param callback int32_t func()
///
void q_designerwidgetdatabaseinterface_on_count(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#count)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseInterface*
///
int32_t q_designerwidgetdatabaseinterface_qbase_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#item)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param index int
///
QDesignerWidgetDataBaseItemInterface* q_designerwidgetdatabaseinterface_item(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#item)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param callback QDesignerWidgetDataBaseItemInterface* func(QDesignerWidgetDataBaseInterface* self, int index)
///
void q_designerwidgetdatabaseinterface_on_item(void* self, QDesignerWidgetDataBaseItemInterface* (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#item)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param index int
///
QDesignerWidgetDataBaseItemInterface* q_designerwidgetdatabaseinterface_qbase_item(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOf)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param item QDesignerWidgetDataBaseItemInterface*
///
int32_t q_designerwidgetdatabaseinterface_index_of(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOf)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param callback int32_t func(QDesignerWidgetDataBaseInterface* self, QDesignerWidgetDataBaseItemInterface* item)
///
void q_designerwidgetdatabaseinterface_on_index_of(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOf)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param item QDesignerWidgetDataBaseItemInterface*
///
int32_t q_designerwidgetdatabaseinterface_qbase_index_of(void* self, void* item);

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
void q_designerwidgetdatabaseinterface_qbase_insert(void* self, int index, void* item);

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
void q_designerwidgetdatabaseinterface_qbase_append(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOfObject)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param object QObject*
/// @param resolveName bool
///
int32_t q_designerwidgetdatabaseinterface_index_of_object(void* self, void* object, bool resolveName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOfObject)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param callback int32_t func(QDesignerWidgetDataBaseInterface* self, QObject* object, bool resolveName)
///
void q_designerwidgetdatabaseinterface_on_index_of_object(void* self, int32_t (*callback)(void*, void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOfObject)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param object QObject*
/// @param resolveName bool
///
int32_t q_designerwidgetdatabaseinterface_qbase_index_of_object(void* self, void* object, bool resolveName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOfClassName)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param className const char*
/// @param resolveName bool
///
int32_t q_designerwidgetdatabaseinterface_index_of_class_name(void* self, const char* className, bool resolveName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOfClassName)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param callback int32_t func(QDesignerWidgetDataBaseInterface* self, const char* className, bool resolveName)
///
void q_designerwidgetdatabaseinterface_on_index_of_class_name(void* self, int32_t (*callback)(void*, const char*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOfClassName)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param className const char*
/// @param resolveName bool
///
int32_t q_designerwidgetdatabaseinterface_qbase_index_of_class_name(void* self, const char* className, bool resolveName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#core)
///
/// @param self QDesignerWidgetDataBaseInterface*
///
QDesignerFormEditorInterface* q_designerwidgetdatabaseinterface_core(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#core)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param callback QDesignerFormEditorInterface* func()
///
void q_designerwidgetdatabaseinterface_on_core(void* self, QDesignerFormEditorInterface* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#core)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetDataBaseInterface*
///
QDesignerFormEditorInterface* q_designerwidgetdatabaseinterface_qbase_core(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#isContainer)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param object QObject*
///
bool q_designerwidgetdatabaseinterface_is_container(void* self, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#isCustom)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param object QObject*
///
bool q_designerwidgetdatabaseinterface_is_custom(void* self, void* object);

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
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* q_designerwidgetdatabaseinterface_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_designerwidgetdatabaseinterface_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#isContainer)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param object QObject*
/// @param resolveName bool
///
bool q_designerwidgetdatabaseinterface_is_container2(void* self, void* object, bool resolveName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#isCustom)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param object QObject*
/// @param resolveName bool
///
bool q_designerwidgetdatabaseinterface_is_custom2(void* self, void* object, bool resolveName);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QDesignerWidgetDataBaseInterface*
///
const char* q_designerwidgetdatabaseinterface_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param name char*
///
void q_designerwidgetdatabaseinterface_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QDesignerWidgetDataBaseInterface*
///
bool q_designerwidgetdatabaseinterface_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QDesignerWidgetDataBaseInterface*
///
bool q_designerwidgetdatabaseinterface_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QDesignerWidgetDataBaseInterface*
///
bool q_designerwidgetdatabaseinterface_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QDesignerWidgetDataBaseInterface*
///
bool q_designerwidgetdatabaseinterface_signals_blocked(void* self);

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
/// @param self QDesignerWidgetDataBaseInterface*
///
QThread* q_designerwidgetdatabaseinterface_thread(void* self);

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
/// @param self QDesignerWidgetDataBaseInterface*
///
libqt_list /* of QObject* */ q_designerwidgetdatabaseinterface_children(void* self);

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
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_designerwidgetdatabaseinterface_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_designerwidgetdatabaseinterface_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_designerwidgetdatabaseinterface_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_designerwidgetdatabaseinterface_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QDesignerWidgetDataBaseInterface*
///
void q_designerwidgetdatabaseinterface_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QDesignerWidgetDataBaseInterface*
///
void q_designerwidgetdatabaseinterface_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param name const char*
/// @param value QVariant*
///
bool q_designerwidgetdatabaseinterface_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param name const char*
///
QVariant* q_designerwidgetdatabaseinterface_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QDesignerWidgetDataBaseInterface*
///
const char** q_designerwidgetdatabaseinterface_dynamic_property_names(void* self);

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
/// @param self QDesignerWidgetDataBaseInterface*
///
const QBindingStorage* q_designerwidgetdatabaseinterface_binding_storage2(void* self);

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
/// @param self QDesignerWidgetDataBaseInterface*
///
QObject* q_designerwidgetdatabaseinterface_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param classname const char*
///
bool q_designerwidgetdatabaseinterface_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDesignerWidgetDataBaseInterface*
///
void q_designerwidgetdatabaseinterface_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_designerwidgetdatabaseinterface_move_to_thread2(void* self, void* thread, void* param2);

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
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_designerwidgetdatabaseinterface_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_designerwidgetdatabaseinterface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

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
bool q_designerwidgetdatabaseinterface_qbase_event(void* self, void* event);

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
bool q_designerwidgetdatabaseinterface_qbase_event_filter(void* self, void* watched, void* event);

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
void q_designerwidgetdatabaseinterface_qbase_timer_event(void* self, void* event);

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
void q_designerwidgetdatabaseinterface_qbase_child_event(void* self, void* event);

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
void q_designerwidgetdatabaseinterface_qbase_custom_event(void* self, void* event);

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
void q_designerwidgetdatabaseinterface_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param signal QMetaMethod*
///
void q_designerwidgetdatabaseinterface_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param callback void func(QDesignerWidgetDataBaseInterface* self, QMetaMethod* signal)
///
void q_designerwidgetdatabaseinterface_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param signal QMetaMethod*
///
void q_designerwidgetdatabaseinterface_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param signal QMetaMethod*
///
void q_designerwidgetdatabaseinterface_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param callback void func(QDesignerWidgetDataBaseInterface* self, QMetaMethod* signal)
///
void q_designerwidgetdatabaseinterface_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
///
QObject* q_designerwidgetdatabaseinterface_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
///
QObject* q_designerwidgetdatabaseinterface_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param callback QObject* func()
///
void q_designerwidgetdatabaseinterface_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
///
int32_t q_designerwidgetdatabaseinterface_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
///
int32_t q_designerwidgetdatabaseinterface_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param callback int32_t func()
///
void q_designerwidgetdatabaseinterface_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param signal const char*
///
int32_t q_designerwidgetdatabaseinterface_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param signal const char*
///
int32_t q_designerwidgetdatabaseinterface_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param callback int32_t func(QDesignerWidgetDataBaseInterface* self, const char* signal)
///
void q_designerwidgetdatabaseinterface_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param signal QMetaMethod*
///
bool q_designerwidgetdatabaseinterface_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param signal QMetaMethod*
///
bool q_designerwidgetdatabaseinterface_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetDataBaseInterface*
/// @param callback bool func(QDesignerWidgetDataBaseInterface* self, QMetaMethod* signal)
///
void q_designerwidgetdatabaseinterface_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

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
