#include "libqpoint.hpp"
#include "libqpoint.h"

QPoint* q_point_new(void* other) {
    return QPoint_new((QPoint*)other);
}

QPoint* q_point_new2(void* other) {
    return QPoint_new2((QPoint*)other);
}

QPoint* q_point_new3() {
    return QPoint_new3();
}

QPoint* q_point_new4(int xpos, int ypos) {
    return QPoint_new4(xpos, ypos);
}

QPoint* q_point_new5(void* param1) {
    return QPoint_new5((QPoint*)param1);
}

void q_point_copy_assign(void* self, void* other) {
    QPoint_CopyAssign((QPoint*)self, (QPoint*)other);
}

void q_point_move_assign(void* self, void* other) {
    QPoint_MoveAssign((QPoint*)self, (QPoint*)other);
}

bool q_point_is_null(void* self) {
    return QPoint_IsNull((QPoint*)self);
}

int32_t q_point_x(void* self) {
    return QPoint_X((QPoint*)self);
}

int32_t q_point_y(void* self) {
    return QPoint_Y((QPoint*)self);
}

void q_point_set_x(void* self, int x) {
    QPoint_SetX((QPoint*)self, x);
}

void q_point_set_y(void* self, int y) {
    QPoint_SetY((QPoint*)self, y);
}

int32_t q_point_manhattan_length(void* self) {
    return QPoint_ManhattanLength((QPoint*)self);
}

QPoint* q_point_transposed(void* self) {
    return QPoint_Transposed((QPoint*)self);
}

QPoint* q_point_operator_plus_assign(void* self, void* p) {
    return QPoint_OperatorPlusAssign((QPoint*)self, (QPoint*)p);
}

QPoint* q_point_operator_minus_assign(void* self, void* p) {
    return QPoint_OperatorMinusAssign((QPoint*)self, (QPoint*)p);
}

QPoint* q_point_operator_multiply_assign(void* self, float factor) {
    return QPoint_OperatorMultiplyAssign((QPoint*)self, factor);
}

QPoint* q_point_operator_multiply_assign2(void* self, double factor) {
    return QPoint_OperatorMultiplyAssign2((QPoint*)self, factor);
}

QPoint* q_point_operator_multiply_assign3(void* self, int factor) {
    return QPoint_OperatorMultiplyAssign3((QPoint*)self, factor);
}

QPoint* q_point_operator_divide_assign(void* self, double divisor) {
    return QPoint_OperatorDivideAssign((QPoint*)self, divisor);
}

int32_t q_point_dot_product(void* p1, void* p2) {
    return QPoint_DotProduct((QPoint*)p1, (QPoint*)p2);
}

QPointF* q_point_to_point_f(void* self) {
    return QPoint_ToPointF((QPoint*)self);
}

void q_point_delete(void* self) {
    QPoint_Delete((QPoint*)(self));
}

QPointF* q_pointf_new(void* other) {
    return QPointF_new((QPointF*)other);
}

QPointF* q_pointf_new2(void* other) {
    return QPointF_new2((QPointF*)other);
}

QPointF* q_pointf_new3() {
    return QPointF_new3();
}

QPointF* q_pointf_new4(void* p) {
    return QPointF_new4((QPoint*)p);
}

QPointF* q_pointf_new5(double xpos, double ypos) {
    return QPointF_new5(xpos, ypos);
}

QPointF* q_pointf_new6(void* param1) {
    return QPointF_new6((QPointF*)param1);
}

void q_pointf_copy_assign(void* self, void* other) {
    QPointF_CopyAssign((QPointF*)self, (QPointF*)other);
}

void q_pointf_move_assign(void* self, void* other) {
    QPointF_MoveAssign((QPointF*)self, (QPointF*)other);
}

double q_pointf_manhattan_length(void* self) {
    return QPointF_ManhattanLength((QPointF*)self);
}

bool q_pointf_is_null(void* self) {
    return QPointF_IsNull((QPointF*)self);
}

double q_pointf_x(void* self) {
    return QPointF_X((QPointF*)self);
}

double q_pointf_y(void* self) {
    return QPointF_Y((QPointF*)self);
}

void q_pointf_set_x(void* self, double x) {
    QPointF_SetX((QPointF*)self, x);
}

void q_pointf_set_y(void* self, double y) {
    QPointF_SetY((QPointF*)self, y);
}

QPointF* q_pointf_transposed(void* self) {
    return QPointF_Transposed((QPointF*)self);
}

QPointF* q_pointf_operator_plus_assign(void* self, void* p) {
    return QPointF_OperatorPlusAssign((QPointF*)self, (QPointF*)p);
}

QPointF* q_pointf_operator_minus_assign(void* self, void* p) {
    return QPointF_OperatorMinusAssign((QPointF*)self, (QPointF*)p);
}

QPointF* q_pointf_operator_multiply_assign(void* self, double c) {
    return QPointF_OperatorMultiplyAssign((QPointF*)self, c);
}

QPointF* q_pointf_operator_divide_assign(void* self, double c) {
    return QPointF_OperatorDivideAssign((QPointF*)self, c);
}

double q_pointf_dot_product(void* p1, void* p2) {
    return QPointF_DotProduct((QPointF*)p1, (QPointF*)p2);
}

QPoint* q_pointf_to_point(void* self) {
    return QPointF_ToPoint((QPointF*)self);
}

void q_pointf_delete(void* self) {
    QPointF_Delete((QPointF*)(self));
}
