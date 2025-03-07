#include "libqdrawutil.hpp"
#include "libqdrawutil.h"

/// https://doc.qt.io/qt-6/qtilerules.html

/// q_tilerules_new constructs a new QTileRules object.
///
/// ``` QTileRules* other ```
QTileRules* q_tilerules_new(void* other) {
    return QTileRules_new((QTileRules*)other);
}

/// q_tilerules_new2 constructs a new QTileRules object and invalidates the source QTileRules object.
///
/// ``` QTileRules* other ```
QTileRules* q_tilerules_new2(void* other) {
    return QTileRules_new2((QTileRules*)other);
}

/// q_tilerules_new3 constructs a new QTileRules object.
///
/// ``` enum Qt__TileRule horizontalRule, enum Qt__TileRule verticalRule ```
QTileRules* q_tilerules_new3(int64_t horizontalRule, int64_t verticalRule) {
    return QTileRules_new3(horizontalRule, verticalRule);
}

/// q_tilerules_new4 constructs a new QTileRules object.
///
///
QTileRules* q_tilerules_new4() {
    return QTileRules_new4();
}

/// q_tilerules_new5 constructs a new QTileRules object.
///
/// ``` QTileRules* param1 ```
QTileRules* q_tilerules_new5(void* param1) {
    return QTileRules_new5((QTileRules*)param1);
}

/// q_tilerules_new6 constructs a new QTileRules object.
///
/// ``` enum Qt__TileRule rule ```
QTileRules* q_tilerules_new6(int64_t rule) {
    return QTileRules_new6(rule);
}

/// q_tilerules_copy_assign shallow copies `other` into `self`.
///
/// ``` QTileRules* self, QTileRules* other ```
void q_tilerules_copy_assign(void* self, void* other) {
    QTileRules_CopyAssign((QTileRules*)self, (QTileRules*)other);
}

/// q_tilerules_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QTileRules* self, QTileRules* other ```
void q_tilerules_move_assign(void* self, void* other) {
    QTileRules_MoveAssign((QTileRules*)self, (QTileRules*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QTileRules* self ```
void q_tilerules_delete(void* self) {
    QTileRules_Delete((QTileRules*)(self));
}