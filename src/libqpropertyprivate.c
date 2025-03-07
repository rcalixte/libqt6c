#include "libqproperty.hpp"
#include "libqpropertyprivate.hpp"
#include "libqpropertyprivate.h"

/// https://doc.qt.io/qt-6/quntypedpropertydata.html

/// q_untypedpropertydata_new constructs a new QUntypedPropertyData object.
///
/// ``` QUntypedPropertyData* other ```
QUntypedPropertyData* q_untypedpropertydata_new(void* other) {
    return QUntypedPropertyData_new((QUntypedPropertyData*)other);
}

/// q_untypedpropertydata_new2 constructs a new QUntypedPropertyData object and invalidates the source QUntypedPropertyData object.
///
/// ``` QUntypedPropertyData* other ```
QUntypedPropertyData* q_untypedpropertydata_new2(void* other) {
    return QUntypedPropertyData_new2((QUntypedPropertyData*)other);
}

/// q_untypedpropertydata_copy_assign shallow copies `other` into `self`.
///
/// ``` QUntypedPropertyData* self, QUntypedPropertyData* other ```
void q_untypedpropertydata_copy_assign(void* self, void* other) {
    QUntypedPropertyData_CopyAssign((QUntypedPropertyData*)self, (QUntypedPropertyData*)other);
}

/// q_untypedpropertydata_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QUntypedPropertyData* self, QUntypedPropertyData* other ```
void q_untypedpropertydata_move_assign(void* self, void* other) {
    QUntypedPropertyData_MoveAssign((QUntypedPropertyData*)self, (QUntypedPropertyData*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QUntypedPropertyData* self ```
void q_untypedpropertydata_delete(void* self) {
    QUntypedPropertyData_Delete((QUntypedPropertyData*)(self));
}