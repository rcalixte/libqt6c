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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#count)
///
/// Base class method implementation
///
/// @param self QDesignerPropertySheetExtension*
///
int32_t q_designerpropertysheetextension_qbase_count(void* self);

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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#indexOf)
///
/// Base class method implementation
///
/// @param self QDesignerPropertySheetExtension*
/// @param name const char*
///
int32_t q_designerpropertysheetextension_qbase_index_of(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#propertyName)
///
/// @warning Caller is responsible for freeing the returned memory
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#propertyName)
///
/// Base class method implementation
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
///
const char* q_designerpropertysheetextension_qbase_property_name(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#propertyGroup)
///
/// @warning Caller is responsible for freeing the returned memory
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#propertyGroup)
///
/// Base class method implementation
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
///
const char* q_designerpropertysheetextension_qbase_property_group(void* self, int index);

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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setPropertyGroup)
///
/// Base class method implementation
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
/// @param group const char*
///
void q_designerpropertysheetextension_qbase_set_property_group(void* self, int index, const char* group);

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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#hasReset)
///
/// Base class method implementation
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
///
bool q_designerpropertysheetextension_qbase_has_reset(void* self, int index);

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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#reset)
///
/// Base class method implementation
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
///
bool q_designerpropertysheetextension_qbase_reset(void* self, int index);

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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isVisible)
///
/// Base class method implementation
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
///
bool q_designerpropertysheetextension_qbase_is_visible(void* self, int index);

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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setVisible)
///
/// Base class method implementation
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
/// @param b bool
///
void q_designerpropertysheetextension_qbase_set_visible(void* self, int index, bool b);

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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isAttribute)
///
/// Base class method implementation
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
///
bool q_designerpropertysheetextension_qbase_is_attribute(void* self, int index);

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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setAttribute)
///
/// Base class method implementation
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
/// @param b bool
///
void q_designerpropertysheetextension_qbase_set_attribute(void* self, int index, bool b);

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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#property)
///
/// Base class method implementation
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
///
QVariant* q_designerpropertysheetextension_qbase_property(void* self, int index);

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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setProperty)
///
/// Base class method implementation
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
/// @param value QVariant*
///
void q_designerpropertysheetextension_qbase_set_property(void* self, int index, void* value);

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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isChanged)
///
/// Base class method implementation
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
///
bool q_designerpropertysheetextension_qbase_is_changed(void* self, int index);

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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setChanged)
///
/// Base class method implementation
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
/// @param changed bool
///
void q_designerpropertysheetextension_qbase_set_changed(void* self, int index, bool changed);

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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isEnabled)
///
/// Base class method implementation
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
///
bool q_designerpropertysheetextension_qbase_is_enabled(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#dtor.QDesignerPropertySheetExtension)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerPropertySheetExtension*
///
void q_designerpropertysheetextension_delete(void* self);

#endif
