#include "libqpropertyprivate.hpp"
#include "libqpropertyprivate.h"

QUntypedPropertyData* q_untypedpropertydata_new(void* other) {
    return QUntypedPropertyData_new((QUntypedPropertyData*)other);
}

QUntypedPropertyData* q_untypedpropertydata_new2(void* other) {
    return QUntypedPropertyData_new2((QUntypedPropertyData*)other);
}

void q_untypedpropertydata_copy_assign(void* self, void* other) {
    QUntypedPropertyData_CopyAssign((QUntypedPropertyData*)self, (QUntypedPropertyData*)other);
}

void q_untypedpropertydata_move_assign(void* self, void* other) {
    QUntypedPropertyData_MoveAssign((QUntypedPropertyData*)self, (QUntypedPropertyData*)other);
}

void q_untypedpropertydata_delete(void* self) {
    QUntypedPropertyData_Delete((QUntypedPropertyData*)(self));
}

uintptr_t q_propertyproxybindingdata_d_ptr(void* self) {
    return QPropertyProxyBindingData_DPtr((QPropertyProxyBindingData*)self);
}

void q_propertyproxybindingdata_set_d_ptr(void* self, uintptr_t d_ptr) {
    QPropertyProxyBindingData_SetDPtr((QPropertyProxyBindingData*)self, d_ptr);
}

QUntypedPropertyData* q_propertyproxybindingdata_property_data(void* self) {
    return QPropertyProxyBindingData_PropertyData((QPropertyProxyBindingData*)self);
}

void q_propertyproxybindingdata_set_property_data(void* self, void* propertyData) {
    QPropertyProxyBindingData_SetPropertyData((QPropertyProxyBindingData*)self, (QUntypedPropertyData*)propertyData);
}

void q_propertyproxybindingdata_delete(void* self) {
    QPropertyProxyBindingData_Delete((QPropertyProxyBindingData*)(self));
}
