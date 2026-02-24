#pragma once
#ifndef SRC_DESIGNER_QT6C_LIBDYNAMICPROPERTYSHEET_H
#define SRC_DESIGNER_QT6C_LIBDYNAMICPROPERTYSHEET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html)

/// q_designerdynamicpropertysheetextension_new constructs a new QDesignerDynamicPropertySheetExtension object.
///
QDesignerDynamicPropertySheetExtension* q_designerdynamicpropertysheetextension_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#dynamicPropertiesAllowed)
///
/// @param self QDesignerDynamicPropertySheetExtension*
///
bool q_designerdynamicpropertysheetextension_dynamic_properties_allowed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#dynamicPropertiesAllowed)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerDynamicPropertySheetExtension*
/// @param callback bool func()
///
void q_designerdynamicpropertysheetextension_on_dynamic_properties_allowed(void* self, bool (*callback)());

/// @warning DEPRECATED: Use `q_designerdynamicpropertysheetextension_super_dynamic_properties_allowed` instead
///
#define q_designerdynamicpropertysheetextension_qbase_dynamic_properties_allowed q_designerdynamicpropertysheetextension_super_dynamic_properties_allowed

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#dynamicPropertiesAllowed)
///
/// Base class method implementation
///
/// @param self QDesignerDynamicPropertySheetExtension*
///
bool q_designerdynamicpropertysheetextension_super_dynamic_properties_allowed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#addDynamicProperty)
///
/// @param self QDesignerDynamicPropertySheetExtension*
/// @param propertyName const char*
/// @param value QVariant*
///
int32_t q_designerdynamicpropertysheetextension_add_dynamic_property(void* self, const char* propertyName, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#addDynamicProperty)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerDynamicPropertySheetExtension*
/// @param callback int32_t func(QDesignerDynamicPropertySheetExtension* self, const char* propertyName, QVariant* value)
///
void q_designerdynamicpropertysheetextension_on_add_dynamic_property(void* self, int32_t (*callback)(void*, const char*, void*));

/// @warning DEPRECATED: Use `q_designerdynamicpropertysheetextension_super_add_dynamic_property` instead
///
#define q_designerdynamicpropertysheetextension_qbase_add_dynamic_property q_designerdynamicpropertysheetextension_super_add_dynamic_property

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#addDynamicProperty)
///
/// Base class method implementation
///
/// @param self QDesignerDynamicPropertySheetExtension*
/// @param propertyName const char*
/// @param value QVariant*
///
int32_t q_designerdynamicpropertysheetextension_super_add_dynamic_property(void* self, const char* propertyName, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#removeDynamicProperty)
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

/// @warning DEPRECATED: Use `q_designerdynamicpropertysheetextension_super_remove_dynamic_property` instead
///
#define q_designerdynamicpropertysheetextension_qbase_remove_dynamic_property q_designerdynamicpropertysheetextension_super_remove_dynamic_property

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#removeDynamicProperty)
///
/// Base class method implementation
///
/// @param self QDesignerDynamicPropertySheetExtension*
/// @param index int
///
bool q_designerdynamicpropertysheetextension_super_remove_dynamic_property(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#isDynamicProperty)
///
/// @param self QDesignerDynamicPropertySheetExtension*
/// @param index int
///
bool q_designerdynamicpropertysheetextension_is_dynamic_property(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#isDynamicProperty)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerDynamicPropertySheetExtension*
/// @param callback bool func(QDesignerDynamicPropertySheetExtension* self, int index)
///
void q_designerdynamicpropertysheetextension_on_is_dynamic_property(void* self, bool (*callback)(void*, int));

/// @warning DEPRECATED: Use `q_designerdynamicpropertysheetextension_super_is_dynamic_property` instead
///
#define q_designerdynamicpropertysheetextension_qbase_is_dynamic_property q_designerdynamicpropertysheetextension_super_is_dynamic_property

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#isDynamicProperty)
///
/// Base class method implementation
///
/// @param self QDesignerDynamicPropertySheetExtension*
/// @param index int
///
bool q_designerdynamicpropertysheetextension_super_is_dynamic_property(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#canAddDynamicProperty)
///
/// @param self QDesignerDynamicPropertySheetExtension*
/// @param propertyName const char*
///
bool q_designerdynamicpropertysheetextension_can_add_dynamic_property(void* self, const char* propertyName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#canAddDynamicProperty)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerDynamicPropertySheetExtension*
/// @param callback bool func(QDesignerDynamicPropertySheetExtension* self, const char* propertyName)
///
void q_designerdynamicpropertysheetextension_on_can_add_dynamic_property(void* self, bool (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_designerdynamicpropertysheetextension_super_can_add_dynamic_property` instead
///
#define q_designerdynamicpropertysheetextension_qbase_can_add_dynamic_property q_designerdynamicpropertysheetextension_super_can_add_dynamic_property

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#canAddDynamicProperty)
///
/// Base class method implementation
///
/// @param self QDesignerDynamicPropertySheetExtension*
/// @param propertyName const char*
///
bool q_designerdynamicpropertysheetextension_super_can_add_dynamic_property(void* self, const char* propertyName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdynamicpropertysheetextension.html#dtor.QDesignerDynamicPropertySheetExtension)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerDynamicPropertySheetExtension*
///
void q_designerdynamicpropertysheetextension_delete(void* self);

#endif
