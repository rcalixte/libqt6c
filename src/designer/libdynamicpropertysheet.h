#pragma once
#ifndef DESIGNER_LIBDYNAMICPROPERTYSHEET_H
#define DESIGNER_LIBDYNAMICPROPERTYSHEET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html)

/// q_designerdynamicpropertysheetextension_new constructs a new QDesignerDynamicPropertySheetExtension object.
///
QDesignerDynamicPropertySheetExtension* q_designerdynamicpropertysheetextension_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#dynamicPropertiesAllowed)
///
/// @warning This method must be implemented with `q_designerdynamicpropertysheetextension_on_dynamic_properties_allowed` before it can be called.
///
/// @param self const QDesignerDynamicPropertySheetExtension*
///
bool q_designerdynamicpropertysheetextension_dynamic_properties_allowed(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#dynamicPropertiesAllowed)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerDynamicPropertySheetExtension*
/// @param callback bool func(const QDesignerDynamicPropertySheetExtension* self)
///
void q_designerdynamicpropertysheetextension_on_dynamic_properties_allowed(void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#addDynamicProperty)
///
/// @warning This method must be implemented with `q_designerdynamicpropertysheetextension_on_add_dynamic_property` before it can be called.
///
/// @param self QDesignerDynamicPropertySheetExtension*
/// @param propertyName const char*
/// @param value QVariant*
///
int32_t q_designerdynamicpropertysheetextension_add_dynamic_property(void* self, const char* propertyName, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#addDynamicProperty)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerDynamicPropertySheetExtension*
/// @param callback int32_t func(QDesignerDynamicPropertySheetExtension* self, const char* propertyName, QVariant* value)
///
void q_designerdynamicpropertysheetextension_on_add_dynamic_property(void* self, int32_t (*callback)(void*, const char*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#removeDynamicProperty)
///
/// @warning This method must be implemented with `q_designerdynamicpropertysheetextension_on_remove_dynamic_property` before it can be called.
///
/// @param self QDesignerDynamicPropertySheetExtension*
/// @param index int
///
bool q_designerdynamicpropertysheetextension_remove_dynamic_property(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#removeDynamicProperty)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerDynamicPropertySheetExtension*
/// @param callback bool func(QDesignerDynamicPropertySheetExtension* self, int index)
///
void q_designerdynamicpropertysheetextension_on_remove_dynamic_property(void* self, bool (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#isDynamicProperty)
///
/// @warning This method must be implemented with `q_designerdynamicpropertysheetextension_on_is_dynamic_property` before it can be called.
///
/// @param self const QDesignerDynamicPropertySheetExtension*
/// @param index int
///
bool q_designerdynamicpropertysheetextension_is_dynamic_property(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#isDynamicProperty)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerDynamicPropertySheetExtension*
/// @param callback bool func(const QDesignerDynamicPropertySheetExtension* self, int index)
///
void q_designerdynamicpropertysheetextension_on_is_dynamic_property(void* self, bool (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#canAddDynamicProperty)
///
/// @warning This method must be implemented with `q_designerdynamicpropertysheetextension_on_can_add_dynamic_property` before it can be called.
///
/// @param self const QDesignerDynamicPropertySheetExtension*
/// @param propertyName const char*
///
bool q_designerdynamicpropertysheetextension_can_add_dynamic_property(const void* self, const char* propertyName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#canAddDynamicProperty)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerDynamicPropertySheetExtension*
/// @param callback bool func(const QDesignerDynamicPropertySheetExtension* self, const char* propertyName)
///
void q_designerdynamicpropertysheetextension_on_can_add_dynamic_property(void* self, bool (*callback)(const void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#dtor.QDesignerDynamicPropertySheetExtension)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerDynamicPropertySheetExtension*
///
void q_designerdynamicpropertysheetextension_delete(void* self);

#endif
