#include "libqmargins.hpp"
#include "libqmargins.h"

QMargins* q_margins_new(void* other) {
    return QMargins_new((QMargins*)other);
}

QMargins* q_margins_new2(void* other) {
    return QMargins_new2((QMargins*)other);
}

QMargins* q_margins_new3() {
    return QMargins_new3();
}

QMargins* q_margins_new4(int left, int top, int right, int bottom) {
    return QMargins_new4(left, top, right, bottom);
}

QMargins* q_margins_new5(void* param1) {
    return QMargins_new5((QMargins*)param1);
}

void q_margins_copy_assign(void* self, void* other) {
    QMargins_CopyAssign((QMargins*)self, (QMargins*)other);
}

void q_margins_move_assign(void* self, void* other) {
    QMargins_MoveAssign((QMargins*)self, (QMargins*)other);
}

bool q_margins_is_null(void* self) {
    return QMargins_IsNull((QMargins*)self);
}

int32_t q_margins_left(void* self) {
    return QMargins_Left((QMargins*)self);
}

int32_t q_margins_top(void* self) {
    return QMargins_Top((QMargins*)self);
}

int32_t q_margins_right(void* self) {
    return QMargins_Right((QMargins*)self);
}

int32_t q_margins_bottom(void* self) {
    return QMargins_Bottom((QMargins*)self);
}

void q_margins_set_left(void* self, int left) {
    QMargins_SetLeft((QMargins*)self, left);
}

void q_margins_set_top(void* self, int top) {
    QMargins_SetTop((QMargins*)self, top);
}

void q_margins_set_right(void* self, int right) {
    QMargins_SetRight((QMargins*)self, right);
}

void q_margins_set_bottom(void* self, int bottom) {
    QMargins_SetBottom((QMargins*)self, bottom);
}

QMargins* q_margins_operator_plus_assign(void* self, void* margins) {
    return QMargins_OperatorPlusAssign((QMargins*)self, (QMargins*)margins);
}

QMargins* q_margins_operator_minus_assign(void* self, void* margins) {
    return QMargins_OperatorMinusAssign((QMargins*)self, (QMargins*)margins);
}

QMargins* q_margins_operator_plus_assign2(void* self, int param1) {
    return QMargins_OperatorPlusAssign2((QMargins*)self, param1);
}

QMargins* q_margins_operator_minus_assign2(void* self, int param1) {
    return QMargins_OperatorMinusAssign2((QMargins*)self, param1);
}

QMargins* q_margins_operator_multiply_assign(void* self, int param1) {
    return QMargins_OperatorMultiplyAssign((QMargins*)self, param1);
}

QMargins* q_margins_operator_divide_assign(void* self, int param1) {
    return QMargins_OperatorDivideAssign((QMargins*)self, param1);
}

QMargins* q_margins_operator_multiply_assign2(void* self, double param1) {
    return QMargins_OperatorMultiplyAssign2((QMargins*)self, param1);
}

QMargins* q_margins_operator_divide_assign2(void* self, double param1) {
    return QMargins_OperatorDivideAssign2((QMargins*)self, param1);
}

QMarginsF* q_margins_to_margins_f(void* self) {
    return QMargins_ToMarginsF((QMargins*)self);
}

void q_margins_delete(void* self) {
    QMargins_Delete((QMargins*)(self));
}

QMarginsF* q_marginsf_new(void* other) {
    return QMarginsF_new((QMarginsF*)other);
}

QMarginsF* q_marginsf_new2(void* other) {
    return QMarginsF_new2((QMarginsF*)other);
}

QMarginsF* q_marginsf_new3() {
    return QMarginsF_new3();
}

QMarginsF* q_marginsf_new4(double left, double top, double right, double bottom) {
    return QMarginsF_new4(left, top, right, bottom);
}

QMarginsF* q_marginsf_new5(void* margins) {
    return QMarginsF_new5((QMargins*)margins);
}

QMarginsF* q_marginsf_new6(void* param1) {
    return QMarginsF_new6((QMarginsF*)param1);
}

void q_marginsf_copy_assign(void* self, void* other) {
    QMarginsF_CopyAssign((QMarginsF*)self, (QMarginsF*)other);
}

void q_marginsf_move_assign(void* self, void* other) {
    QMarginsF_MoveAssign((QMarginsF*)self, (QMarginsF*)other);
}

bool q_marginsf_is_null(void* self) {
    return QMarginsF_IsNull((QMarginsF*)self);
}

double q_marginsf_left(void* self) {
    return QMarginsF_Left((QMarginsF*)self);
}

double q_marginsf_top(void* self) {
    return QMarginsF_Top((QMarginsF*)self);
}

double q_marginsf_right(void* self) {
    return QMarginsF_Right((QMarginsF*)self);
}

double q_marginsf_bottom(void* self) {
    return QMarginsF_Bottom((QMarginsF*)self);
}

void q_marginsf_set_left(void* self, double aleft) {
    QMarginsF_SetLeft((QMarginsF*)self, aleft);
}

void q_marginsf_set_top(void* self, double atop) {
    QMarginsF_SetTop((QMarginsF*)self, atop);
}

void q_marginsf_set_right(void* self, double aright) {
    QMarginsF_SetRight((QMarginsF*)self, aright);
}

void q_marginsf_set_bottom(void* self, double abottom) {
    QMarginsF_SetBottom((QMarginsF*)self, abottom);
}

QMarginsF* q_marginsf_operator_plus_assign(void* self, void* margins) {
    return QMarginsF_OperatorPlusAssign((QMarginsF*)self, (QMarginsF*)margins);
}

QMarginsF* q_marginsf_operator_minus_assign(void* self, void* margins) {
    return QMarginsF_OperatorMinusAssign((QMarginsF*)self, (QMarginsF*)margins);
}

QMarginsF* q_marginsf_operator_plus_assign2(void* self, double addend) {
    return QMarginsF_OperatorPlusAssign2((QMarginsF*)self, addend);
}

QMarginsF* q_marginsf_operator_minus_assign2(void* self, double subtrahend) {
    return QMarginsF_OperatorMinusAssign2((QMarginsF*)self, subtrahend);
}

QMarginsF* q_marginsf_operator_multiply_assign(void* self, double factor) {
    return QMarginsF_OperatorMultiplyAssign((QMarginsF*)self, factor);
}

QMarginsF* q_marginsf_operator_divide_assign(void* self, double divisor) {
    return QMarginsF_OperatorDivideAssign((QMarginsF*)self, divisor);
}

QMargins* q_marginsf_to_margins(void* self) {
    return QMarginsF_ToMargins((QMarginsF*)self);
}

void q_marginsf_delete(void* self) {
    QMarginsF_Delete((QMarginsF*)(self));
}
