#include "libqproperty.hpp"
#include "libqbindingstorage.hpp"
#include "libqbindingstorage.h"

QBindingStatus* q_bindingstatus_new(void* other) {
    return QBindingStatus_new((QBindingStatus*)other);
}

QBindingStatus* q_bindingstatus_new2(void* other) {
    return QBindingStatus_new2((QBindingStatus*)other);
}

void q_bindingstatus_copy_assign(void* self, void* other) {
    QBindingStatus_CopyAssign((QBindingStatus*)self, (QBindingStatus*)other);
}

void q_bindingstatus_move_assign(void* self, void* other) {
    QBindingStatus_MoveAssign((QBindingStatus*)self, (QBindingStatus*)other);
}

void q_bindingstatus_delete(void* self) {
    QBindingStatus_Delete((QBindingStatus*)(self));
}

QBindingStorage* q_bindingstorage_new() {
    return QBindingStorage_new();
}

bool q_bindingstorage_is_empty(void* self) {
    return QBindingStorage_IsEmpty((QBindingStorage*)self);
}

bool q_bindingstorage_is_valid(void* self) {
    return QBindingStorage_IsValid((QBindingStorage*)self);
}

void q_bindingstorage_register_dependency(void* self, void* data) {
    QBindingStorage_RegisterDependency((QBindingStorage*)self, (QUntypedPropertyData*)data);
}

void q_bindingstorage_delete(void* self) {
    QBindingStorage_Delete((QBindingStorage*)(self));
}
