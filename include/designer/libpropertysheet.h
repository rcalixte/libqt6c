#pragma once
#ifndef DESIGNER_LIBPROPERTYSHEET_H
#define DESIGNER_LIBPROPERTYSHEET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html)

/// q_designerpropertysheetextension_new constructs a new QDesignerPropertySheetExtension object.
///
QDesignerPropertySheetExtension* q_designerpropertysheetextension_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#count)
///
/// @warning This method must be implemented with `q_designerpropertysheetextension_on_count` before it can be called.
///
/// @param self const QDesignerPropertySheetExtension*
///
int32_t q_designerpropertysheetextension_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#count)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerPropertySheetExtension*
/// @param callback int32_t func(const QDesignerPropertySheetExtension* self)
///
void q_designerpropertysheetextension_on_count(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#indexOf)
///
/// @warning This method must be implemented with `q_designerpropertysheetextension_on_index_of` before it can be called.
///
/// @param self const QDesignerPropertySheetExtension*
/// @param name const char*
///
int32_t q_designerpropertysheetextension_index_of(const void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#indexOf)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerPropertySheetExtension*
/// @param callback int32_t func(const QDesignerPropertySheetExtension* self, const char* name)
///
void q_designerpropertysheetextension_on_index_of(const void* self, int32_t (*callback)(const void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#propertyName)
///
/// @warning This method must be implemented with `q_designerpropertysheetextension_on_property_name` before it can be called.
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDesignerPropertySheetExtension*
/// @param index int
///
const char* q_designerpropertysheetextension_property_name(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#propertyName)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerPropertySheetExtension*
/// @param callback const char* func(const QDesignerPropertySheetExtension* self, int index)
///
void q_designerpropertysheetextension_on_property_name(const void* self, const char* (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#propertyGroup)
///
/// @warning This method must be implemented with `q_designerpropertysheetextension_on_property_group` before it can be called.
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDesignerPropertySheetExtension*
/// @param index int
///
const char* q_designerpropertysheetextension_property_group(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#propertyGroup)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerPropertySheetExtension*
/// @param callback const char* func(const QDesignerPropertySheetExtension* self, int index)
///
void q_designerpropertysheetextension_on_property_group(const void* self, const char* (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setPropertyGroup)
///
/// @warning This method must be implemented with `q_designerpropertysheetextension_on_set_property_group` before it can be called.
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#hasReset)
///
/// @warning This method must be implemented with `q_designerpropertysheetextension_on_has_reset` before it can be called.
///
/// @param self const QDesignerPropertySheetExtension*
/// @param index int
///
bool q_designerpropertysheetextension_has_reset(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#hasReset)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerPropertySheetExtension*
/// @param callback bool func(const QDesignerPropertySheetExtension* self, int index)
///
void q_designerpropertysheetextension_on_has_reset(const void* self, bool (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#reset)
///
/// @warning This method must be implemented with `q_designerpropertysheetextension_on_reset` before it can be called.
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isVisible)
///
/// @warning This method must be implemented with `q_designerpropertysheetextension_on_is_visible` before it can be called.
///
/// @param self const QDesignerPropertySheetExtension*
/// @param index int
///
bool q_designerpropertysheetextension_is_visible(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isVisible)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerPropertySheetExtension*
/// @param callback bool func(const QDesignerPropertySheetExtension* self, int index)
///
void q_designerpropertysheetextension_on_is_visible(const void* self, bool (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setVisible)
///
/// @warning This method must be implemented with `q_designerpropertysheetextension_on_set_visible` before it can be called.
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isAttribute)
///
/// @warning This method must be implemented with `q_designerpropertysheetextension_on_is_attribute` before it can be called.
///
/// @param self const QDesignerPropertySheetExtension*
/// @param index int
///
bool q_designerpropertysheetextension_is_attribute(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isAttribute)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerPropertySheetExtension*
/// @param callback bool func(const QDesignerPropertySheetExtension* self, int index)
///
void q_designerpropertysheetextension_on_is_attribute(const void* self, bool (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setAttribute)
///
/// @warning This method must be implemented with `q_designerpropertysheetextension_on_set_attribute` before it can be called.
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#property)
///
/// @warning This method must be implemented with `q_designerpropertysheetextension_on_property` before it can be called.
///
/// @param self const QDesignerPropertySheetExtension*
/// @param index int
///
QVariant* q_designerpropertysheetextension_property(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#property)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerPropertySheetExtension*
/// @param callback QVariant* func(const QDesignerPropertySheetExtension* self, int index)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_designerpropertysheetextension_on_property(const void* self, QVariant* (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setProperty)
///
/// @warning This method must be implemented with `q_designerpropertysheetextension_on_set_property` before it can be called.
///
/// @param self QDesignerPropertySheetExtension*
/// @param index int
/// @param value QVariant*
///
void q_designerpropertysheetextension_set_property(void* self, int index, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setProperty)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerPropertySheetExtension*
/// @param callback void func(QDesignerPropertySheetExtension* self, int index, QVariant* value)
///
void q_designerpropertysheetextension_on_set_property(void* self, void (*callback)(void*, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isChanged)
///
/// @warning This method must be implemented with `q_designerpropertysheetextension_on_is_changed` before it can be called.
///
/// @param self const QDesignerPropertySheetExtension*
/// @param index int
///
bool q_designerpropertysheetextension_is_changed(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isChanged)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerPropertySheetExtension*
/// @param callback bool func(const QDesignerPropertySheetExtension* self, int index)
///
void q_designerpropertysheetextension_on_is_changed(const void* self, bool (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#setChanged)
///
/// @warning This method must be implemented with `q_designerpropertysheetextension_on_set_changed` before it can be called.
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isEnabled)
///
/// @warning This method must be implemented with `q_designerpropertysheetextension_on_is_enabled` before it can be called.
///
/// @param self const QDesignerPropertySheetExtension*
/// @param index int
///
bool q_designerpropertysheetextension_is_enabled(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#isEnabled)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerPropertySheetExtension*
/// @param callback bool func(const QDesignerPropertySheetExtension* self, int index)
///
void q_designerpropertysheetextension_on_is_enabled(const void* self, bool (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertysheetextension.html#dtor.QDesignerPropertySheetExtension)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerPropertySheetExtension*
///
void q_designerpropertysheetextension_delete(void* self);

#endif
