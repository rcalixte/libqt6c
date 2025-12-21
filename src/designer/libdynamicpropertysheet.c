#include "../libqvariant.hpp"
#include "libdynamicpropertysheet.hpp"
#include "libdynamicpropertysheet.h"

QDesignerDynamicPropertySheetExtension* q_designerdynamicpropertysheetextension_new() {
    return QDesignerDynamicPropertySheetExtension_new();
}

bool q_designerdynamicpropertysheetextension_dynamic_properties_allowed(void* self) {
    return QDesignerDynamicPropertySheetExtension_DynamicPropertiesAllowed((QDesignerDynamicPropertySheetExtension*)self);
}

void q_designerdynamicpropertysheetextension_on_dynamic_properties_allowed(void* self, bool (*callback)()) {
    QDesignerDynamicPropertySheetExtension_OnDynamicPropertiesAllowed((QDesignerDynamicPropertySheetExtension*)self, (intptr_t)callback);
}

bool q_designerdynamicpropertysheetextension_qbase_dynamic_properties_allowed(void* self) {
    return QDesignerDynamicPropertySheetExtension_QBaseDynamicPropertiesAllowed((QDesignerDynamicPropertySheetExtension*)self);
}

int32_t q_designerdynamicpropertysheetextension_add_dynamic_property(void* self, const char* propertyName, void* value) {
    return QDesignerDynamicPropertySheetExtension_AddDynamicProperty((QDesignerDynamicPropertySheetExtension*)self, qstring(propertyName), (QVariant*)value);
}

void q_designerdynamicpropertysheetextension_on_add_dynamic_property(void* self, int32_t (*callback)(void*, const char*, void*)) {
    QDesignerDynamicPropertySheetExtension_OnAddDynamicProperty((QDesignerDynamicPropertySheetExtension*)self, (intptr_t)callback);
}

int32_t q_designerdynamicpropertysheetextension_qbase_add_dynamic_property(void* self, const char* propertyName, void* value) {
    return QDesignerDynamicPropertySheetExtension_QBaseAddDynamicProperty((QDesignerDynamicPropertySheetExtension*)self, qstring(propertyName), (QVariant*)value);
}

bool q_designerdynamicpropertysheetextension_remove_dynamic_property(void* self, int index) {
    return QDesignerDynamicPropertySheetExtension_RemoveDynamicProperty((QDesignerDynamicPropertySheetExtension*)self, index);
}

void q_designerdynamicpropertysheetextension_on_remove_dynamic_property(void* self, bool (*callback)(void*, int)) {
    QDesignerDynamicPropertySheetExtension_OnRemoveDynamicProperty((QDesignerDynamicPropertySheetExtension*)self, (intptr_t)callback);
}

bool q_designerdynamicpropertysheetextension_qbase_remove_dynamic_property(void* self, int index) {
    return QDesignerDynamicPropertySheetExtension_QBaseRemoveDynamicProperty((QDesignerDynamicPropertySheetExtension*)self, index);
}

bool q_designerdynamicpropertysheetextension_is_dynamic_property(void* self, int index) {
    return QDesignerDynamicPropertySheetExtension_IsDynamicProperty((QDesignerDynamicPropertySheetExtension*)self, index);
}

void q_designerdynamicpropertysheetextension_on_is_dynamic_property(void* self, bool (*callback)(void*, int)) {
    QDesignerDynamicPropertySheetExtension_OnIsDynamicProperty((QDesignerDynamicPropertySheetExtension*)self, (intptr_t)callback);
}

bool q_designerdynamicpropertysheetextension_qbase_is_dynamic_property(void* self, int index) {
    return QDesignerDynamicPropertySheetExtension_QBaseIsDynamicProperty((QDesignerDynamicPropertySheetExtension*)self, index);
}

bool q_designerdynamicpropertysheetextension_can_add_dynamic_property(void* self, const char* propertyName) {
    return QDesignerDynamicPropertySheetExtension_CanAddDynamicProperty((QDesignerDynamicPropertySheetExtension*)self, qstring(propertyName));
}

void q_designerdynamicpropertysheetextension_on_can_add_dynamic_property(void* self, bool (*callback)(void*, const char*)) {
    QDesignerDynamicPropertySheetExtension_OnCanAddDynamicProperty((QDesignerDynamicPropertySheetExtension*)self, (intptr_t)callback);
}

bool q_designerdynamicpropertysheetextension_qbase_can_add_dynamic_property(void* self, const char* propertyName) {
    return QDesignerDynamicPropertySheetExtension_QBaseCanAddDynamicProperty((QDesignerDynamicPropertySheetExtension*)self, qstring(propertyName));
}

void q_designerdynamicpropertysheetextension_delete(void* self) {
    QDesignerDynamicPropertySheetExtension_Delete((QDesignerDynamicPropertySheetExtension*)(self));
}
