#include "libqvariant.hpp"
#include "libqsizepolicy.hpp"
#include "libqsizepolicy.h"

/// https://doc.qt.io/qt-6/qsizepolicy.html

/// q_sizepolicy_new constructs a new QSizePolicy object.
///
/// ``` QSizePolicy* other ```
QSizePolicy* q_sizepolicy_new(void* other) {
    return QSizePolicy_new((QSizePolicy*)other);
}

/// q_sizepolicy_new2 constructs a new QSizePolicy object and invalidates the source QSizePolicy object.
///
/// ``` QSizePolicy* other ```
QSizePolicy* q_sizepolicy_new2(void* other) {
    return QSizePolicy_new2((QSizePolicy*)other);
}

/// q_sizepolicy_new3 constructs a new QSizePolicy object.
///
///
QSizePolicy* q_sizepolicy_new3() {
    return QSizePolicy_new3();
}

/// q_sizepolicy_new4 constructs a new QSizePolicy object.
///
/// ``` enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
QSizePolicy* q_sizepolicy_new4(int64_t horizontal, int64_t vertical) {
    return QSizePolicy_new4(horizontal, vertical);
}

/// q_sizepolicy_new5 constructs a new QSizePolicy object.
///
/// ``` QSizePolicy* param1 ```
QSizePolicy* q_sizepolicy_new5(void* param1) {
    return QSizePolicy_new5((QSizePolicy*)param1);
}

/// q_sizepolicy_new6 constructs a new QSizePolicy object.
///
/// ``` enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical, enum QSizePolicy__ControlType typeVal ```
QSizePolicy* q_sizepolicy_new6(int64_t horizontal, int64_t vertical, int64_t typeVal) {
    return QSizePolicy_new6(horizontal, vertical, typeVal);
}

/// q_sizepolicy_copy_assign shallow copies `other` into `self`.
///
/// ``` QSizePolicy* self, QSizePolicy* other ```
void q_sizepolicy_copy_assign(void* self, void* other) {
    QSizePolicy_CopyAssign((QSizePolicy*)self, (QSizePolicy*)other);
}

/// q_sizepolicy_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QSizePolicy* self, QSizePolicy* other ```
void q_sizepolicy_move_assign(void* self, void* other) {
    QSizePolicy_MoveAssign((QSizePolicy*)self, (QSizePolicy*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#horizontalPolicy)
///
/// ``` QSizePolicy* self ```
int64_t q_sizepolicy_horizontal_policy(void* self) {
    return QSizePolicy_HorizontalPolicy((QSizePolicy*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#verticalPolicy)
///
/// ``` QSizePolicy* self ```
int64_t q_sizepolicy_vertical_policy(void* self) {
    return QSizePolicy_VerticalPolicy((QSizePolicy*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#controlType)
///
/// ``` QSizePolicy* self ```
int64_t q_sizepolicy_control_type(void* self) {
    return QSizePolicy_ControlType((QSizePolicy*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#setHorizontalPolicy)
///
/// ``` QSizePolicy* self, enum QSizePolicy__Policy d ```
void q_sizepolicy_set_horizontal_policy(void* self, int64_t d) {
    QSizePolicy_SetHorizontalPolicy((QSizePolicy*)self, d);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#setVerticalPolicy)
///
/// ``` QSizePolicy* self, enum QSizePolicy__Policy d ```
void q_sizepolicy_set_vertical_policy(void* self, int64_t d) {
    QSizePolicy_SetVerticalPolicy((QSizePolicy*)self, d);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#setControlType)
///
/// ``` QSizePolicy* self, enum QSizePolicy__ControlType typeVal ```
void q_sizepolicy_set_control_type(void* self, int64_t typeVal) {
    QSizePolicy_SetControlType((QSizePolicy*)self, typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#expandingDirections)
///
/// ``` QSizePolicy* self ```
int64_t q_sizepolicy_expanding_directions(void* self) {
    return QSizePolicy_ExpandingDirections((QSizePolicy*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#setHeightForWidth)
///
/// ``` QSizePolicy* self, bool b ```
void q_sizepolicy_set_height_for_width(void* self, bool b) {
    QSizePolicy_SetHeightForWidth((QSizePolicy*)self, b);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#hasHeightForWidth)
///
/// ``` QSizePolicy* self ```
bool q_sizepolicy_has_height_for_width(void* self) {
    return QSizePolicy_HasHeightForWidth((QSizePolicy*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#setWidthForHeight)
///
/// ``` QSizePolicy* self, bool b ```
void q_sizepolicy_set_width_for_height(void* self, bool b) {
    QSizePolicy_SetWidthForHeight((QSizePolicy*)self, b);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#hasWidthForHeight)
///
/// ``` QSizePolicy* self ```
bool q_sizepolicy_has_width_for_height(void* self) {
    return QSizePolicy_HasWidthForHeight((QSizePolicy*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#operator==)
///
/// ``` QSizePolicy* self, QSizePolicy* s ```
bool q_sizepolicy_operator_equal(void* self, void* s) {
    return QSizePolicy_OperatorEqual((QSizePolicy*)self, (QSizePolicy*)s);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#operator!=)
///
/// ``` QSizePolicy* self, QSizePolicy* s ```
bool q_sizepolicy_operator_not_equal(void* self, void* s) {
    return QSizePolicy_OperatorNotEqual((QSizePolicy*)self, (QSizePolicy*)s);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#operator QVariant)
///
/// ``` QSizePolicy* self ```
QVariant* q_sizepolicy_to_q_variant(void* self) {
    return QSizePolicy_ToQVariant((QSizePolicy*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#horizontalStretch)
///
/// ``` QSizePolicy* self ```
int32_t q_sizepolicy_horizontal_stretch(void* self) {
    return QSizePolicy_HorizontalStretch((QSizePolicy*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#verticalStretch)
///
/// ``` QSizePolicy* self ```
int32_t q_sizepolicy_vertical_stretch(void* self) {
    return QSizePolicy_VerticalStretch((QSizePolicy*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#setHorizontalStretch)
///
/// ``` QSizePolicy* self, int stretchFactor ```
void q_sizepolicy_set_horizontal_stretch(void* self, int stretchFactor) {
    QSizePolicy_SetHorizontalStretch((QSizePolicy*)self, stretchFactor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#setVerticalStretch)
///
/// ``` QSizePolicy* self, int stretchFactor ```
void q_sizepolicy_set_vertical_stretch(void* self, int stretchFactor) {
    QSizePolicy_SetVerticalStretch((QSizePolicy*)self, stretchFactor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#retainSizeWhenHidden)
///
/// ``` QSizePolicy* self ```
bool q_sizepolicy_retain_size_when_hidden(void* self) {
    return QSizePolicy_RetainSizeWhenHidden((QSizePolicy*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#setRetainSizeWhenHidden)
///
/// ``` QSizePolicy* self, bool retainSize ```
void q_sizepolicy_set_retain_size_when_hidden(void* self, bool retainSize) {
    QSizePolicy_SetRetainSizeWhenHidden((QSizePolicy*)self, retainSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#transpose)
///
/// ``` QSizePolicy* self ```
void q_sizepolicy_transpose(void* self) {
    QSizePolicy_Transpose((QSizePolicy*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#transposed)
///
/// ``` QSizePolicy* self ```
QSizePolicy* q_sizepolicy_transposed(void* self) {
    return QSizePolicy_Transposed((QSizePolicy*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QSizePolicy* self ```
void q_sizepolicy_delete(void* self) {
    QSizePolicy_Delete((QSizePolicy*)(self));
}