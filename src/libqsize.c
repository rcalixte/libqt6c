#include "libqmargins.hpp"
#include "libqsize.hpp"
#include "libqsize.h"

QSize* q_size_new(void* other) {
    return QSize_new((QSize*)other);
}

QSize* q_size_new2(void* other) {
    return QSize_new2((QSize*)other);
}

QSize* q_size_new3() {
    return QSize_new3();
}

QSize* q_size_new4(int w, int h) {
    return QSize_new4(w, h);
}

QSize* q_size_new5(void* param1) {
    return QSize_new5((QSize*)param1);
}

void q_size_copy_assign(void* self, void* other) {
    QSize_CopyAssign((QSize*)self, (QSize*)other);
}

void q_size_move_assign(void* self, void* other) {
    QSize_MoveAssign((QSize*)self, (QSize*)other);
}

bool q_size_is_null(void* self) {
    return QSize_IsNull((QSize*)self);
}

bool q_size_is_empty(void* self) {
    return QSize_IsEmpty((QSize*)self);
}

bool q_size_is_valid(void* self) {
    return QSize_IsValid((QSize*)self);
}

int32_t q_size_width(void* self) {
    return QSize_Width((QSize*)self);
}

int32_t q_size_height(void* self) {
    return QSize_Height((QSize*)self);
}

void q_size_set_width(void* self, int w) {
    QSize_SetWidth((QSize*)self, w);
}

void q_size_set_height(void* self, int h) {
    QSize_SetHeight((QSize*)self, h);
}

void q_size_transpose(void* self) {
    QSize_Transpose((QSize*)self);
}

QSize* q_size_transposed(void* self) {
    return QSize_Transposed((QSize*)self);
}

void q_size_scale(void* self, int w, int h, int64_t mode) {
    QSize_Scale((QSize*)self, w, h, mode);
}

void q_size_scale2(void* self, void* s, int64_t mode) {
    QSize_Scale2((QSize*)self, (QSize*)s, mode);
}

QSize* q_size_scaled(void* self, int w, int h, int64_t mode) {
    return QSize_Scaled((QSize*)self, w, h, mode);
}

QSize* q_size_scaled2(void* self, void* s, int64_t mode) {
    return QSize_Scaled2((QSize*)self, (QSize*)s, mode);
}

QSize* q_size_expanded_to(void* self, void* param1) {
    return QSize_ExpandedTo((QSize*)self, (QSize*)param1);
}

QSize* q_size_bounded_to(void* self, void* param1) {
    return QSize_BoundedTo((QSize*)self, (QSize*)param1);
}

QSize* q_size_grown_by(void* self, void* m) {
    return QSize_GrownBy((QSize*)self, (QMargins*)m);
}

QSize* q_size_shrunk_by(void* self, void* m) {
    return QSize_ShrunkBy((QSize*)self, (QMargins*)m);
}

QSize* q_size_operator_plus_assign(void* self, void* param1) {
    return QSize_OperatorPlusAssign((QSize*)self, (QSize*)param1);
}

QSize* q_size_operator_minus_assign(void* self, void* param1) {
    return QSize_OperatorMinusAssign((QSize*)self, (QSize*)param1);
}

QSize* q_size_operator_multiply_assign(void* self, double c) {
    return QSize_OperatorMultiplyAssign((QSize*)self, c);
}

QSize* q_size_operator_divide_assign(void* self, double c) {
    return QSize_OperatorDivideAssign((QSize*)self, c);
}

QSizeF* q_size_to_size_f(void* self) {
    return QSize_ToSizeF((QSize*)self);
}

void q_size_delete(void* self) {
    QSize_Delete((QSize*)(self));
}

QSizeF* q_sizef_new(void* other) {
    return QSizeF_new((QSizeF*)other);
}

QSizeF* q_sizef_new2(void* other) {
    return QSizeF_new2((QSizeF*)other);
}

QSizeF* q_sizef_new3() {
    return QSizeF_new3();
}

QSizeF* q_sizef_new4(void* sz) {
    return QSizeF_new4((QSize*)sz);
}

QSizeF* q_sizef_new5(double w, double h) {
    return QSizeF_new5(w, h);
}

QSizeF* q_sizef_new6(void* param1) {
    return QSizeF_new6((QSizeF*)param1);
}

void q_sizef_copy_assign(void* self, void* other) {
    QSizeF_CopyAssign((QSizeF*)self, (QSizeF*)other);
}

void q_sizef_move_assign(void* self, void* other) {
    QSizeF_MoveAssign((QSizeF*)self, (QSizeF*)other);
}

bool q_sizef_is_null(void* self) {
    return QSizeF_IsNull((QSizeF*)self);
}

bool q_sizef_is_empty(void* self) {
    return QSizeF_IsEmpty((QSizeF*)self);
}

bool q_sizef_is_valid(void* self) {
    return QSizeF_IsValid((QSizeF*)self);
}

double q_sizef_width(void* self) {
    return QSizeF_Width((QSizeF*)self);
}

double q_sizef_height(void* self) {
    return QSizeF_Height((QSizeF*)self);
}

void q_sizef_set_width(void* self, double w) {
    QSizeF_SetWidth((QSizeF*)self, w);
}

void q_sizef_set_height(void* self, double h) {
    QSizeF_SetHeight((QSizeF*)self, h);
}

void q_sizef_transpose(void* self) {
    QSizeF_Transpose((QSizeF*)self);
}

QSizeF* q_sizef_transposed(void* self) {
    return QSizeF_Transposed((QSizeF*)self);
}

void q_sizef_scale(void* self, double w, double h, int64_t mode) {
    QSizeF_Scale((QSizeF*)self, w, h, mode);
}

void q_sizef_scale2(void* self, void* s, int64_t mode) {
    QSizeF_Scale2((QSizeF*)self, (QSizeF*)s, mode);
}

QSizeF* q_sizef_scaled(void* self, double w, double h, int64_t mode) {
    return QSizeF_Scaled((QSizeF*)self, w, h, mode);
}

QSizeF* q_sizef_scaled2(void* self, void* s, int64_t mode) {
    return QSizeF_Scaled2((QSizeF*)self, (QSizeF*)s, mode);
}

QSizeF* q_sizef_expanded_to(void* self, void* param1) {
    return QSizeF_ExpandedTo((QSizeF*)self, (QSizeF*)param1);
}

QSizeF* q_sizef_bounded_to(void* self, void* param1) {
    return QSizeF_BoundedTo((QSizeF*)self, (QSizeF*)param1);
}

QSizeF* q_sizef_grown_by(void* self, void* m) {
    return QSizeF_GrownBy((QSizeF*)self, (QMarginsF*)m);
}

QSizeF* q_sizef_shrunk_by(void* self, void* m) {
    return QSizeF_ShrunkBy((QSizeF*)self, (QMarginsF*)m);
}

QSizeF* q_sizef_operator_plus_assign(void* self, void* param1) {
    return QSizeF_OperatorPlusAssign((QSizeF*)self, (QSizeF*)param1);
}

QSizeF* q_sizef_operator_minus_assign(void* self, void* param1) {
    return QSizeF_OperatorMinusAssign((QSizeF*)self, (QSizeF*)param1);
}

QSizeF* q_sizef_operator_multiply_assign(void* self, double c) {
    return QSizeF_OperatorMultiplyAssign((QSizeF*)self, c);
}

QSizeF* q_sizef_operator_divide_assign(void* self, double c) {
    return QSizeF_OperatorDivideAssign((QSizeF*)self, c);
}

QSize* q_sizef_to_size(void* self) {
    return QSizeF_ToSize((QSizeF*)self);
}

void q_sizef_delete(void* self) {
    QSizeF_Delete((QSizeF*)(self));
}
