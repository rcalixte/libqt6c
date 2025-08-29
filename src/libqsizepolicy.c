#include "libqvariant.hpp"
#include "libqsizepolicy.hpp"
#include "libqsizepolicy.h"

QSizePolicy* q_sizepolicy_new(void* other) {
    return QSizePolicy_new((QSizePolicy*)other);
}

QSizePolicy* q_sizepolicy_new2(void* other) {
    return QSizePolicy_new2((QSizePolicy*)other);
}

QSizePolicy* q_sizepolicy_new3() {
    return QSizePolicy_new3();
}

QSizePolicy* q_sizepolicy_new4(int32_t horizontal, int32_t vertical) {
    return QSizePolicy_new4(horizontal, vertical);
}

QSizePolicy* q_sizepolicy_new5(void* param1) {
    return QSizePolicy_new5((QSizePolicy*)param1);
}

QSizePolicy* q_sizepolicy_new6(int32_t horizontal, int32_t vertical, int32_t typeVal) {
    return QSizePolicy_new6(horizontal, vertical, typeVal);
}

void q_sizepolicy_copy_assign(void* self, void* other) {
    QSizePolicy_CopyAssign((QSizePolicy*)self, (QSizePolicy*)other);
}

void q_sizepolicy_move_assign(void* self, void* other) {
    QSizePolicy_MoveAssign((QSizePolicy*)self, (QSizePolicy*)other);
}

int32_t q_sizepolicy_horizontal_policy(void* self) {
    return QSizePolicy_HorizontalPolicy((QSizePolicy*)self);
}

int32_t q_sizepolicy_vertical_policy(void* self) {
    return QSizePolicy_VerticalPolicy((QSizePolicy*)self);
}

int32_t q_sizepolicy_control_type(void* self) {
    return QSizePolicy_ControlType((QSizePolicy*)self);
}

void q_sizepolicy_set_horizontal_policy(void* self, int32_t d) {
    QSizePolicy_SetHorizontalPolicy((QSizePolicy*)self, d);
}

void q_sizepolicy_set_vertical_policy(void* self, int32_t d) {
    QSizePolicy_SetVerticalPolicy((QSizePolicy*)self, d);
}

void q_sizepolicy_set_control_type(void* self, int32_t typeVal) {
    QSizePolicy_SetControlType((QSizePolicy*)self, typeVal);
}

int32_t q_sizepolicy_expanding_directions(void* self) {
    return QSizePolicy_ExpandingDirections((QSizePolicy*)self);
}

void q_sizepolicy_set_height_for_width(void* self, bool b) {
    QSizePolicy_SetHeightForWidth((QSizePolicy*)self, b);
}

bool q_sizepolicy_has_height_for_width(void* self) {
    return QSizePolicy_HasHeightForWidth((QSizePolicy*)self);
}

void q_sizepolicy_set_width_for_height(void* self, bool b) {
    QSizePolicy_SetWidthForHeight((QSizePolicy*)self, b);
}

bool q_sizepolicy_has_width_for_height(void* self) {
    return QSizePolicy_HasWidthForHeight((QSizePolicy*)self);
}

bool q_sizepolicy_operator_equal(void* self, void* s) {
    return QSizePolicy_OperatorEqual((QSizePolicy*)self, (QSizePolicy*)s);
}

bool q_sizepolicy_operator_not_equal(void* self, void* s) {
    return QSizePolicy_OperatorNotEqual((QSizePolicy*)self, (QSizePolicy*)s);
}

QVariant* q_sizepolicy_to_q_variant(void* self) {
    return QSizePolicy_ToQVariant((QSizePolicy*)self);
}

int32_t q_sizepolicy_horizontal_stretch(void* self) {
    return QSizePolicy_HorizontalStretch((QSizePolicy*)self);
}

int32_t q_sizepolicy_vertical_stretch(void* self) {
    return QSizePolicy_VerticalStretch((QSizePolicy*)self);
}

void q_sizepolicy_set_horizontal_stretch(void* self, int stretchFactor) {
    QSizePolicy_SetHorizontalStretch((QSizePolicy*)self, stretchFactor);
}

void q_sizepolicy_set_vertical_stretch(void* self, int stretchFactor) {
    QSizePolicy_SetVerticalStretch((QSizePolicy*)self, stretchFactor);
}

bool q_sizepolicy_retain_size_when_hidden(void* self) {
    return QSizePolicy_RetainSizeWhenHidden((QSizePolicy*)self);
}

void q_sizepolicy_set_retain_size_when_hidden(void* self, bool retainSize) {
    QSizePolicy_SetRetainSizeWhenHidden((QSizePolicy*)self, retainSize);
}

void q_sizepolicy_transpose(void* self) {
    QSizePolicy_Transpose((QSizePolicy*)self);
}

QSizePolicy* q_sizepolicy_transposed(void* self) {
    return QSizePolicy_Transposed((QSizePolicy*)self);
}

void q_sizepolicy_delete(void* self) {
    QSizePolicy_Delete((QSizePolicy*)(self));
}
