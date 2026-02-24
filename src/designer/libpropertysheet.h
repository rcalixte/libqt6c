#pragma once
#ifndef SRC_DESIGNER_QT6C_LIBPROPERTYSHEET_H
#define SRC_DESIGNER_QT6C_LIBPROPERTYSHEET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html)

/// q_designerpropertysheetextension_new constructs a new QDesignerPropertySheetExtension object.
///
QDesignerPropertySheetExtension* q_designerpropertysheetextension_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#count)
///
/// @param self QDesignerPropertySheetExtension*
///
int32_t q_designerpropertysheetextension_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#count)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerPropertySheetExtension*
/// @param callback int32_t func()
///
void q_designerpropertysheetextension_on_count(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `q_designerpropertysheetextension_super_count` instead
///
#define q_designerpropertysheetextension_qbase_count q_designerpropertysheetextension_super_count

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#count)
///
/// Base class method implementation
///
/// @param self QDesignerPropertySheetExtension*
///
int32_t q_designerpropertysheetextension_super_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#indexOf)
///
/// @param self QDesignerPropertySheetExtension*
/// @param name const char*
///
int32_t q_designerpropertysheetextension_index_of(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#indexOf)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerPropertySheetExtension*
/// @param callback int32_t func(QDesignerPropertySheetExtension* self, const char* name)
///
void q_designerpropertysheetextension_on_index_of(void* self, int32_t (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_designerpropertysheetextension_super_index_of` instead
///
#define q_designerpropertysheetextension_qbase_index_of q_designerpropertysheetextension_super_index_of

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#indexOf)
///
/// Base class method implementation
///
/// @param self QDesignerPropertySheetExtension*
/// @param name const char*
///
int32_t q_designerpropertysheetextension_super_index_of(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#propertyName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
///
const char* q_designerpropertysheetextension_property_name(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#propertyName)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerPropertySheetExtension*
/// @param callback const char* func(QDesignerPropertySheetExtension* self, int index)
///
void q_designerpropertysheetextension_on_property_name(void* self, const char* (*callback)(void*, int));

/// @warning DEPRECATED: Use `q_designerpropertysheetextension_super_property_name` instead
///
#define q_designerpropertysheetextension_qbase_property_name q_designerpropertysheetextension_super_property_name

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#propertyName)
///
/// Base class method implementation
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
///
const char* q_designerpropertysheetextension_super_property_name(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#propertyGroup)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
///
const char* q_designerpropertysheetextension_property_group(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#propertyGroup)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerPropertySheetExtension*
/// @param callback const char* func(QDesignerPropertySheetExtension* self, int index)
///
void q_designerpropertysheetextension_on_property_group(void* self, const char* (*callback)(void*, int));

/// @warning DEPRECATED: Use `q_designerpropertysheetextension_super_property_group` instead
///
#define q_designerpropertysheetextension_qbase_property_group q_designerpropertysheetextension_super_property_group

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#propertyGroup)
///
/// Base class method implementation
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
///
const char* q_designerpropertysheetextension_super_property_group(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setPropertyGroup)
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
/// @param group const char*
///
void q_designerpropertysheetextension_set_property_group(void* self, int index, const char* group);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setPropertyGroup)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerPropertySheetExtension*
/// @param callback void func(QDesignerPropertySheetExtension* self, int index, const char* group)
///
void q_designerpropertysheetextension_on_set_property_group(void* self, void (*callback)(void*, int, const char*));

/// @warning DEPRECATED: Use `q_designerpropertysheetextension_super_set_property_group` instead
///
#define q_designerpropertysheetextension_qbase_set_property_group q_designerpropertysheetextension_super_set_property_group

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setPropertyGroup)
///
/// Base class method implementation
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
/// @param group const char*
///
void q_designerpropertysheetextension_super_set_property_group(void* self, int index, const char* group);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#hasReset)
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
///
bool q_designerpropertysheetextension_has_reset(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#hasReset)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerPropertySheetExtension*
/// @param callback bool func(QDesignerPropertySheetExtension* self, int index)
///
void q_designerpropertysheetextension_on_has_reset(void* self, bool (*callback)(void*, int));

/// @warning DEPRECATED: Use `q_designerpropertysheetextension_super_has_reset` instead
///
#define q_designerpropertysheetextension_qbase_has_reset q_designerpropertysheetextension_super_has_reset

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#hasReset)
///
/// Base class method implementation
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
///
bool q_designerpropertysheetextension_super_has_reset(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#reset)
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
///
bool q_designerpropertysheetextension_reset(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#reset)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerPropertySheetExtension*
/// @param callback bool func(QDesignerPropertySheetExtension* self, int index)
///
void q_designerpropertysheetextension_on_reset(void* self, bool (*callback)(void*, int));

/// @warning DEPRECATED: Use `q_designerpropertysheetextension_super_reset` instead
///
#define q_designerpropertysheetextension_qbase_reset q_designerpropertysheetextension_super_reset

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#reset)
///
/// Base class method implementation
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
///
bool q_designerpropertysheetextension_super_reset(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isVisible)
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
///
bool q_designerpropertysheetextension_is_visible(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isVisible)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerPropertySheetExtension*
/// @param callback bool func(QDesignerPropertySheetExtension* self, int index)
///
void q_designerpropertysheetextension_on_is_visible(void* self, bool (*callback)(void*, int));

/// @warning DEPRECATED: Use `q_designerpropertysheetextension_super_is_visible` instead
///
#define q_designerpropertysheetextension_qbase_is_visible q_designerpropertysheetextension_super_is_visible

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isVisible)
///
/// Base class method implementation
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
///
bool q_designerpropertysheetextension_super_is_visible(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setVisible)
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
/// @param b bool
///
void q_designerpropertysheetextension_set_visible(void* self, int index, bool b);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setVisible)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerPropertySheetExtension*
/// @param callback void func(QDesignerPropertySheetExtension* self, int index, bool b)
///
void q_designerpropertysheetextension_on_set_visible(void* self, void (*callback)(void*, int, bool));

/// @warning DEPRECATED: Use `q_designerpropertysheetextension_super_set_visible` instead
///
#define q_designerpropertysheetextension_qbase_set_visible q_designerpropertysheetextension_super_set_visible

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setVisible)
///
/// Base class method implementation
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
/// @param b bool
///
void q_designerpropertysheetextension_super_set_visible(void* self, int index, bool b);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isAttribute)
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
///
bool q_designerpropertysheetextension_is_attribute(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isAttribute)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerPropertySheetExtension*
/// @param callback bool func(QDesignerPropertySheetExtension* self, int index)
///
void q_designerpropertysheetextension_on_is_attribute(void* self, bool (*callback)(void*, int));

/// @warning DEPRECATED: Use `q_designerpropertysheetextension_super_is_attribute` instead
///
#define q_designerpropertysheetextension_qbase_is_attribute q_designerpropertysheetextension_super_is_attribute

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isAttribute)
///
/// Base class method implementation
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
///
bool q_designerpropertysheetextension_super_is_attribute(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setAttribute)
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
/// @param b bool
///
void q_designerpropertysheetextension_set_attribute(void* self, int index, bool b);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setAttribute)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerPropertySheetExtension*
/// @param callback void func(QDesignerPropertySheetExtension* self, int index, bool b)
///
void q_designerpropertysheetextension_on_set_attribute(void* self, void (*callback)(void*, int, bool));

/// @warning DEPRECATED: Use `q_designerpropertysheetextension_super_set_attribute` instead
///
#define q_designerpropertysheetextension_qbase_set_attribute q_designerpropertysheetextension_super_set_attribute

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setAttribute)
///
/// Base class method implementation
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
/// @param b bool
///
void q_designerpropertysheetextension_super_set_attribute(void* self, int index, bool b);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#property)
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
///
QVariant* q_designerpropertysheetextension_property(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#property)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerPropertySheetExtension*
/// @param callback QVariant* func(QDesignerPropertySheetExtension* self, int index)
///
void q_designerpropertysheetextension_on_property(void* self, QVariant* (*callback)(void*, int));

/// @warning DEPRECATED: Use `q_designerpropertysheetextension_super_property` instead
///
#define q_designerpropertysheetextension_qbase_property q_designerpropertysheetextension_super_property

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#property)
///
/// Base class method implementation
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
///
QVariant* q_designerpropertysheetextension_super_property(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setProperty)
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
/// @param value QVariant*
///
void q_designerpropertysheetextension_set_property(void* self, int index, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setProperty)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerPropertySheetExtension*
/// @param callback void func(QDesignerPropertySheetExtension* self, int index, QVariant* value)
///
void q_designerpropertysheetextension_on_set_property(void* self, void (*callback)(void*, int, void*));

/// @warning DEPRECATED: Use `q_designerpropertysheetextension_super_set_property` instead
///
#define q_designerpropertysheetextension_qbase_set_property q_designerpropertysheetextension_super_set_property

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setProperty)
///
/// Base class method implementation
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
/// @param value QVariant*
///
void q_designerpropertysheetextension_super_set_property(void* self, int index, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isChanged)
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
///
bool q_designerpropertysheetextension_is_changed(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isChanged)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerPropertySheetExtension*
/// @param callback bool func(QDesignerPropertySheetExtension* self, int index)
///
void q_designerpropertysheetextension_on_is_changed(void* self, bool (*callback)(void*, int));

/// @warning DEPRECATED: Use `q_designerpropertysheetextension_super_is_changed` instead
///
#define q_designerpropertysheetextension_qbase_is_changed q_designerpropertysheetextension_super_is_changed

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isChanged)
///
/// Base class method implementation
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
///
bool q_designerpropertysheetextension_super_is_changed(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setChanged)
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
/// @param changed bool
///
void q_designerpropertysheetextension_set_changed(void* self, int index, bool changed);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setChanged)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerPropertySheetExtension*
/// @param callback void func(QDesignerPropertySheetExtension* self, int index, bool changed)
///
void q_designerpropertysheetextension_on_set_changed(void* self, void (*callback)(void*, int, bool));

/// @warning DEPRECATED: Use `q_designerpropertysheetextension_super_set_changed` instead
///
#define q_designerpropertysheetextension_qbase_set_changed q_designerpropertysheetextension_super_set_changed

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setChanged)
///
/// Base class method implementation
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
/// @param changed bool
///
void q_designerpropertysheetextension_super_set_changed(void* self, int index, bool changed);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isEnabled)
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
///
bool q_designerpropertysheetextension_is_enabled(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isEnabled)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerPropertySheetExtension*
/// @param callback bool func(QDesignerPropertySheetExtension* self, int index)
///
void q_designerpropertysheetextension_on_is_enabled(void* self, bool (*callback)(void*, int));

/// @warning DEPRECATED: Use `q_designerpropertysheetextension_super_is_enabled` instead
///
#define q_designerpropertysheetextension_qbase_is_enabled q_designerpropertysheetextension_super_is_enabled

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isEnabled)
///
/// Base class method implementation
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
///
bool q_designerpropertysheetextension_super_is_enabled(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#dtor.QDesignerPropertySheetExtension)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerPropertySheetExtension*
///
void q_designerpropertysheetextension_delete(void* self);

#endif
