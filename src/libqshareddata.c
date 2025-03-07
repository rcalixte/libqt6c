#include "libqshareddata.hpp"
#include "libqshareddata.h"

/// https://doc.qt.io/qt-6/qshareddata.html

/// q_shareddata_new constructs a new QSharedData object.
///
///
QSharedData* q_shareddata_new() {
    return QSharedData_new();
}

/// q_shareddata_new2 constructs a new QSharedData object.
///
/// ``` QSharedData* param1 ```
QSharedData* q_shareddata_new2(void* param1) {
    return QSharedData_new2((QSharedData*)param1);
}

/// Delete this object from C++ memory.
///
/// ``` QSharedData* self ```
void q_shareddata_delete(void* self) {
    QSharedData_Delete((QSharedData*)(self));
}

/// https://doc.qt.io/qt-6/qadoptshareddatatag.html

/// q_adoptshareddatatag_new constructs a new QAdoptSharedDataTag object.
///
/// ``` QAdoptSharedDataTag* other ```
QAdoptSharedDataTag* q_adoptshareddatatag_new(void* other) {
    return QAdoptSharedDataTag_new((QAdoptSharedDataTag*)other);
}

/// q_adoptshareddatatag_new2 constructs a new QAdoptSharedDataTag object and invalidates the source QAdoptSharedDataTag object.
///
/// ``` QAdoptSharedDataTag* other ```
QAdoptSharedDataTag* q_adoptshareddatatag_new2(void* other) {
    return QAdoptSharedDataTag_new2((QAdoptSharedDataTag*)other);
}

/// q_adoptshareddatatag_new3 constructs a new QAdoptSharedDataTag object.
///
///
QAdoptSharedDataTag* q_adoptshareddatatag_new3() {
    return QAdoptSharedDataTag_new3();
}

/// q_adoptshareddatatag_copy_assign shallow copies `other` into `self`.
///
/// ``` QAdoptSharedDataTag* self, QAdoptSharedDataTag* other ```
void q_adoptshareddatatag_copy_assign(void* self, void* other) {
    QAdoptSharedDataTag_CopyAssign((QAdoptSharedDataTag*)self, (QAdoptSharedDataTag*)other);
}

/// q_adoptshareddatatag_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QAdoptSharedDataTag* self, QAdoptSharedDataTag* other ```
void q_adoptshareddatatag_move_assign(void* self, void* other) {
    QAdoptSharedDataTag_MoveAssign((QAdoptSharedDataTag*)self, (QAdoptSharedDataTag*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QAdoptSharedDataTag* self ```
void q_adoptshareddatatag_delete(void* self) {
    QAdoptSharedDataTag_Delete((QAdoptSharedDataTag*)(self));
}