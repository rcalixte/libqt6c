#include "libqcompare.hpp"
#include "libqcompare.h"

/// https://doc.qt.io/qt-6/qpartialordering.html

/// q_partialordering_new constructs a new QPartialOrdering object.
///
/// ``` QPartialOrdering* other ```
QPartialOrdering* q_partialordering_new(void* other) {
    return QPartialOrdering_new((QPartialOrdering*)other);
}

/// q_partialordering_new2 constructs a new QPartialOrdering object and invalidates the source QPartialOrdering object.
///
/// ``` QPartialOrdering* other ```
QPartialOrdering* q_partialordering_new2(void* other) {
    return QPartialOrdering_new2((QPartialOrdering*)other);
}

/// q_partialordering_new3 constructs a new QPartialOrdering object.
///
/// ``` QPartialOrdering* param1 ```
QPartialOrdering* q_partialordering_new3(void* param1) {
    return QPartialOrdering_new3((QPartialOrdering*)param1);
}

/// q_partialordering_copy_assign shallow copies `other` into `self`.
///
/// ``` QPartialOrdering* self, QPartialOrdering* other ```
void q_partialordering_copy_assign(void* self, void* other) {
    QPartialOrdering_CopyAssign((QPartialOrdering*)self, (QPartialOrdering*)other);
}

/// q_partialordering_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QPartialOrdering* self, QPartialOrdering* other ```
void q_partialordering_move_assign(void* self, void* other) {
    QPartialOrdering_MoveAssign((QPartialOrdering*)self, (QPartialOrdering*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QPartialOrdering* self ```
void q_partialordering_delete(void* self) {
    QPartialOrdering_Delete((QPartialOrdering*)(self));
}