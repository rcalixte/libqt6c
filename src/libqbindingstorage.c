#include "libqproperty.hpp"
#include "libqbindingstorage.hpp"
#include "libqbindingstorage.h"

/// https://doc.qt.io/qt-6/qbindingstatus.html

/// q_bindingstatus_new constructs a new QBindingStatus object.
///
/// ``` QBindingStatus* other ```
QBindingStatus* q_bindingstatus_new(void* other) {
    return QBindingStatus_new((QBindingStatus*)other);
}

/// q_bindingstatus_new2 constructs a new QBindingStatus object and invalidates the source QBindingStatus object.
///
/// ``` QBindingStatus* other ```
QBindingStatus* q_bindingstatus_new2(void* other) {
    return QBindingStatus_new2((QBindingStatus*)other);
}

/// q_bindingstatus_copy_assign shallow copies `other` into `self`.
///
/// ``` QBindingStatus* self, QBindingStatus* other ```
void q_bindingstatus_copy_assign(void* self, void* other) {
    QBindingStatus_CopyAssign((QBindingStatus*)self, (QBindingStatus*)other);
}

/// q_bindingstatus_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QBindingStatus* self, QBindingStatus* other ```
void q_bindingstatus_move_assign(void* self, void* other) {
    QBindingStatus_MoveAssign((QBindingStatus*)self, (QBindingStatus*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QBindingStatus* self ```
void q_bindingstatus_delete(void* self) {
    QBindingStatus_Delete((QBindingStatus*)(self));
}

/// https://doc.qt.io/qt-6/qbindingstorage.html

/// q_bindingstorage_new constructs a new QBindingStorage object.
///
///
QBindingStorage* q_bindingstorage_new() {
    return QBindingStorage_new();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbindingstorage.html#isEmpty)
///
/// ``` QBindingStorage* self ```
bool q_bindingstorage_is_empty(void* self) {
    return QBindingStorage_IsEmpty((QBindingStorage*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbindingstorage.html#isValid)
///
/// ``` QBindingStorage* self ```
bool q_bindingstorage_is_valid(void* self) {
    return QBindingStorage_IsValid((QBindingStorage*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbindingstorage.html#registerDependency)
///
/// ``` QBindingStorage* self, QUntypedPropertyData* data ```
void q_bindingstorage_register_dependency(void* self, void* data) {
    QBindingStorage_RegisterDependency((QBindingStorage*)self, (QUntypedPropertyData*)data);
}

/// Delete this object from C++ memory.
///
/// ``` QBindingStorage* self ```
void q_bindingstorage_delete(void* self) {
    QBindingStorage_Delete((QBindingStorage*)(self));
}