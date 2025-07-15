#include "libqmargins.hpp"
#include "libqpoint.hpp"
#include "libqsize.hpp"
#include "libqrect.hpp"
#include "libqrect.h"

QRect* q_rect_new(void* other) {
    return QRect_new((QRect*)other);
}

QRect* q_rect_new2(void* other) {
    return QRect_new2((QRect*)other);
}

QRect* q_rect_new3() {
    return QRect_new3();
}

QRect* q_rect_new4(void* topleft, void* bottomright) {
    return QRect_new4((QPoint*)topleft, (QPoint*)bottomright);
}

QRect* q_rect_new5(void* topleft, void* size) {
    return QRect_new5((QPoint*)topleft, (QSize*)size);
}

QRect* q_rect_new6(int left, int top, int width, int height) {
    return QRect_new6(left, top, width, height);
}

QRect* q_rect_new7(void* param1) {
    return QRect_new7((QRect*)param1);
}

void q_rect_copy_assign(void* self, void* other) {
    QRect_CopyAssign((QRect*)self, (QRect*)other);
}

void q_rect_move_assign(void* self, void* other) {
    QRect_MoveAssign((QRect*)self, (QRect*)other);
}

bool q_rect_is_null(void* self) {
    return QRect_IsNull((QRect*)self);
}

bool q_rect_is_empty(void* self) {
    return QRect_IsEmpty((QRect*)self);
}

bool q_rect_is_valid(void* self) {
    return QRect_IsValid((QRect*)self);
}

int32_t q_rect_left(void* self) {
    return QRect_Left((QRect*)self);
}

int32_t q_rect_top(void* self) {
    return QRect_Top((QRect*)self);
}

int32_t q_rect_right(void* self) {
    return QRect_Right((QRect*)self);
}

int32_t q_rect_bottom(void* self) {
    return QRect_Bottom((QRect*)self);
}

QRect* q_rect_normalized(void* self) {
    return QRect_Normalized((QRect*)self);
}

int32_t q_rect_x(void* self) {
    return QRect_X((QRect*)self);
}

int32_t q_rect_y(void* self) {
    return QRect_Y((QRect*)self);
}

void q_rect_set_left(void* self, int pos) {
    QRect_SetLeft((QRect*)self, pos);
}

void q_rect_set_top(void* self, int pos) {
    QRect_SetTop((QRect*)self, pos);
}

void q_rect_set_right(void* self, int pos) {
    QRect_SetRight((QRect*)self, pos);
}

void q_rect_set_bottom(void* self, int pos) {
    QRect_SetBottom((QRect*)self, pos);
}

void q_rect_set_x(void* self, int x) {
    QRect_SetX((QRect*)self, x);
}

void q_rect_set_y(void* self, int y) {
    QRect_SetY((QRect*)self, y);
}

void q_rect_set_top_left(void* self, void* p) {
    QRect_SetTopLeft((QRect*)self, (QPoint*)p);
}

void q_rect_set_bottom_right(void* self, void* p) {
    QRect_SetBottomRight((QRect*)self, (QPoint*)p);
}

void q_rect_set_top_right(void* self, void* p) {
    QRect_SetTopRight((QRect*)self, (QPoint*)p);
}

void q_rect_set_bottom_left(void* self, void* p) {
    QRect_SetBottomLeft((QRect*)self, (QPoint*)p);
}

QPoint* q_rect_top_left(void* self) {
    return QRect_TopLeft((QRect*)self);
}

QPoint* q_rect_bottom_right(void* self) {
    return QRect_BottomRight((QRect*)self);
}

QPoint* q_rect_top_right(void* self) {
    return QRect_TopRight((QRect*)self);
}

QPoint* q_rect_bottom_left(void* self) {
    return QRect_BottomLeft((QRect*)self);
}

QPoint* q_rect_center(void* self) {
    return QRect_Center((QRect*)self);
}

void q_rect_move_left(void* self, int pos) {
    QRect_MoveLeft((QRect*)self, pos);
}

void q_rect_move_top(void* self, int pos) {
    QRect_MoveTop((QRect*)self, pos);
}

void q_rect_move_right(void* self, int pos) {
    QRect_MoveRight((QRect*)self, pos);
}

void q_rect_move_bottom(void* self, int pos) {
    QRect_MoveBottom((QRect*)self, pos);
}

void q_rect_move_top_left(void* self, void* p) {
    QRect_MoveTopLeft((QRect*)self, (QPoint*)p);
}

void q_rect_move_bottom_right(void* self, void* p) {
    QRect_MoveBottomRight((QRect*)self, (QPoint*)p);
}

void q_rect_move_top_right(void* self, void* p) {
    QRect_MoveTopRight((QRect*)self, (QPoint*)p);
}

void q_rect_move_bottom_left(void* self, void* p) {
    QRect_MoveBottomLeft((QRect*)self, (QPoint*)p);
}

void q_rect_move_center(void* self, void* p) {
    QRect_MoveCenter((QRect*)self, (QPoint*)p);
}

void q_rect_translate(void* self, int dx, int dy) {
    QRect_Translate((QRect*)self, dx, dy);
}

void q_rect_translate2(void* self, void* p) {
    QRect_Translate2((QRect*)self, (QPoint*)p);
}

QRect* q_rect_translated(void* self, int dx, int dy) {
    return QRect_Translated((QRect*)self, dx, dy);
}

QRect* q_rect_translated2(void* self, void* p) {
    return QRect_Translated2((QRect*)self, (QPoint*)p);
}

QRect* q_rect_transposed(void* self) {
    return QRect_Transposed((QRect*)self);
}

void q_rect_move_to(void* self, int x, int t) {
    QRect_MoveTo((QRect*)self, x, t);
}

void q_rect_move_to2(void* self, void* p) {
    QRect_MoveTo2((QRect*)self, (QPoint*)p);
}

void q_rect_set_rect(void* self, int x, int y, int w, int h) {
    QRect_SetRect((QRect*)self, x, y, w, h);
}

void q_rect_get_rect(void* self, int* x, int* y, int* w, int* h) {
    QRect_GetRect((QRect*)self, x, y, w, h);
}

void q_rect_set_coords(void* self, int x1, int y1, int x2, int y2) {
    QRect_SetCoords((QRect*)self, x1, y1, x2, y2);
}

void q_rect_get_coords(void* self, int* x1, int* y1, int* x2, int* y2) {
    QRect_GetCoords((QRect*)self, x1, y1, x2, y2);
}

void q_rect_adjust(void* self, int x1, int y1, int x2, int y2) {
    QRect_Adjust((QRect*)self, x1, y1, x2, y2);
}

QRect* q_rect_adjusted(void* self, int x1, int y1, int x2, int y2) {
    return QRect_Adjusted((QRect*)self, x1, y1, x2, y2);
}

QSize* q_rect_size(void* self) {
    return QRect_Size((QRect*)self);
}

int32_t q_rect_width(void* self) {
    return QRect_Width((QRect*)self);
}

int32_t q_rect_height(void* self) {
    return QRect_Height((QRect*)self);
}

void q_rect_set_width(void* self, int w) {
    QRect_SetWidth((QRect*)self, w);
}

void q_rect_set_height(void* self, int h) {
    QRect_SetHeight((QRect*)self, h);
}

void q_rect_set_size(void* self, void* s) {
    QRect_SetSize((QRect*)self, (QSize*)s);
}

QRect* q_rect_operator_bitwise_or(void* self, void* r) {
    return QRect_OperatorBitwiseOr((QRect*)self, (QRect*)r);
}

QRect* q_rect_operator_bitwise_and(void* self, void* r) {
    return QRect_OperatorBitwiseAnd((QRect*)self, (QRect*)r);
}

void q_rect_operator_bitwise_or_assign(void* self, void* r) {
    QRect_OperatorBitwiseOrAssign((QRect*)self, (QRect*)r);
}

void q_rect_operator_bitwise_and_assign(void* self, void* r) {
    QRect_OperatorBitwiseAndAssign((QRect*)self, (QRect*)r);
}

bool q_rect_contains(void* self, void* r) {
    return QRect_Contains((QRect*)self, (QRect*)r);
}

bool q_rect_contains2(void* self, void* p) {
    return QRect_Contains2((QRect*)self, (QPoint*)p);
}

bool q_rect_contains3(void* self, int x, int y) {
    return QRect_Contains3((QRect*)self, x, y);
}

bool q_rect_contains4(void* self, int x, int y, bool proper) {
    return QRect_Contains4((QRect*)self, x, y, proper);
}

QRect* q_rect_united(void* self, void* other) {
    return QRect_United((QRect*)self, (QRect*)other);
}

QRect* q_rect_intersected(void* self, void* other) {
    return QRect_Intersected((QRect*)self, (QRect*)other);
}

bool q_rect_intersects(void* self, void* r) {
    return QRect_Intersects((QRect*)self, (QRect*)r);
}

QRect* q_rect_margins_added(void* self, void* margins) {
    return QRect_MarginsAdded((QRect*)self, (QMargins*)margins);
}

QRect* q_rect_margins_removed(void* self, void* margins) {
    return QRect_MarginsRemoved((QRect*)self, (QMargins*)margins);
}

QRect* q_rect_operator_plus_assign(void* self, void* margins) {
    return QRect_OperatorPlusAssign((QRect*)self, (QMargins*)margins);
}

QRect* q_rect_operator_minus_assign(void* self, void* margins) {
    return QRect_OperatorMinusAssign((QRect*)self, (QMargins*)margins);
}

QRect* q_rect_span(void* p1, void* p2) {
    return QRect_Span((QPoint*)p1, (QPoint*)p2);
}

QRectF* q_rect_to_rect_f(void* self) {
    return QRect_ToRectF((QRect*)self);
}

bool q_rect_contains22(void* self, void* r, bool proper) {
    return QRect_Contains22((QRect*)self, (QRect*)r, proper);
}

bool q_rect_contains23(void* self, void* p, bool proper) {
    return QRect_Contains23((QRect*)self, (QPoint*)p, proper);
}

void q_rect_delete(void* self) {
    QRect_Delete((QRect*)(self));
}

QRectF* q_rectf_new(void* other) {
    return QRectF_new((QRectF*)other);
}

QRectF* q_rectf_new2(void* other) {
    return QRectF_new2((QRectF*)other);
}

QRectF* q_rectf_new3() {
    return QRectF_new3();
}

QRectF* q_rectf_new4(void* topleft, void* size) {
    return QRectF_new4((QPointF*)topleft, (QSizeF*)size);
}

QRectF* q_rectf_new5(void* topleft, void* bottomRight) {
    return QRectF_new5((QPointF*)topleft, (QPointF*)bottomRight);
}

QRectF* q_rectf_new6(double left, double top, double width, double height) {
    return QRectF_new6(left, top, width, height);
}

QRectF* q_rectf_new7(void* rect) {
    return QRectF_new7((QRect*)rect);
}

QRectF* q_rectf_new8(void* param1) {
    return QRectF_new8((QRectF*)param1);
}

void q_rectf_copy_assign(void* self, void* other) {
    QRectF_CopyAssign((QRectF*)self, (QRectF*)other);
}

void q_rectf_move_assign(void* self, void* other) {
    QRectF_MoveAssign((QRectF*)self, (QRectF*)other);
}

bool q_rectf_is_null(void* self) {
    return QRectF_IsNull((QRectF*)self);
}

bool q_rectf_is_empty(void* self) {
    return QRectF_IsEmpty((QRectF*)self);
}

bool q_rectf_is_valid(void* self) {
    return QRectF_IsValid((QRectF*)self);
}

QRectF* q_rectf_normalized(void* self) {
    return QRectF_Normalized((QRectF*)self);
}

double q_rectf_left(void* self) {
    return QRectF_Left((QRectF*)self);
}

double q_rectf_top(void* self) {
    return QRectF_Top((QRectF*)self);
}

double q_rectf_right(void* self) {
    return QRectF_Right((QRectF*)self);
}

double q_rectf_bottom(void* self) {
    return QRectF_Bottom((QRectF*)self);
}

double q_rectf_x(void* self) {
    return QRectF_X((QRectF*)self);
}

double q_rectf_y(void* self) {
    return QRectF_Y((QRectF*)self);
}

void q_rectf_set_left(void* self, double pos) {
    QRectF_SetLeft((QRectF*)self, pos);
}

void q_rectf_set_top(void* self, double pos) {
    QRectF_SetTop((QRectF*)self, pos);
}

void q_rectf_set_right(void* self, double pos) {
    QRectF_SetRight((QRectF*)self, pos);
}

void q_rectf_set_bottom(void* self, double pos) {
    QRectF_SetBottom((QRectF*)self, pos);
}

void q_rectf_set_x(void* self, double pos) {
    QRectF_SetX((QRectF*)self, pos);
}

void q_rectf_set_y(void* self, double pos) {
    QRectF_SetY((QRectF*)self, pos);
}

QPointF* q_rectf_top_left(void* self) {
    return QRectF_TopLeft((QRectF*)self);
}

QPointF* q_rectf_bottom_right(void* self) {
    return QRectF_BottomRight((QRectF*)self);
}

QPointF* q_rectf_top_right(void* self) {
    return QRectF_TopRight((QRectF*)self);
}

QPointF* q_rectf_bottom_left(void* self) {
    return QRectF_BottomLeft((QRectF*)self);
}

QPointF* q_rectf_center(void* self) {
    return QRectF_Center((QRectF*)self);
}

void q_rectf_set_top_left(void* self, void* p) {
    QRectF_SetTopLeft((QRectF*)self, (QPointF*)p);
}

void q_rectf_set_bottom_right(void* self, void* p) {
    QRectF_SetBottomRight((QRectF*)self, (QPointF*)p);
}

void q_rectf_set_top_right(void* self, void* p) {
    QRectF_SetTopRight((QRectF*)self, (QPointF*)p);
}

void q_rectf_set_bottom_left(void* self, void* p) {
    QRectF_SetBottomLeft((QRectF*)self, (QPointF*)p);
}

void q_rectf_move_left(void* self, double pos) {
    QRectF_MoveLeft((QRectF*)self, pos);
}

void q_rectf_move_top(void* self, double pos) {
    QRectF_MoveTop((QRectF*)self, pos);
}

void q_rectf_move_right(void* self, double pos) {
    QRectF_MoveRight((QRectF*)self, pos);
}

void q_rectf_move_bottom(void* self, double pos) {
    QRectF_MoveBottom((QRectF*)self, pos);
}

void q_rectf_move_top_left(void* self, void* p) {
    QRectF_MoveTopLeft((QRectF*)self, (QPointF*)p);
}

void q_rectf_move_bottom_right(void* self, void* p) {
    QRectF_MoveBottomRight((QRectF*)self, (QPointF*)p);
}

void q_rectf_move_top_right(void* self, void* p) {
    QRectF_MoveTopRight((QRectF*)self, (QPointF*)p);
}

void q_rectf_move_bottom_left(void* self, void* p) {
    QRectF_MoveBottomLeft((QRectF*)self, (QPointF*)p);
}

void q_rectf_move_center(void* self, void* p) {
    QRectF_MoveCenter((QRectF*)self, (QPointF*)p);
}

void q_rectf_translate(void* self, double dx, double dy) {
    QRectF_Translate((QRectF*)self, dx, dy);
}

void q_rectf_translate2(void* self, void* p) {
    QRectF_Translate2((QRectF*)self, (QPointF*)p);
}

QRectF* q_rectf_translated(void* self, double dx, double dy) {
    return QRectF_Translated((QRectF*)self, dx, dy);
}

QRectF* q_rectf_translated2(void* self, void* p) {
    return QRectF_Translated2((QRectF*)self, (QPointF*)p);
}

QRectF* q_rectf_transposed(void* self) {
    return QRectF_Transposed((QRectF*)self);
}

void q_rectf_move_to(void* self, double x, double y) {
    QRectF_MoveTo((QRectF*)self, x, y);
}

void q_rectf_move_to2(void* self, void* p) {
    QRectF_MoveTo2((QRectF*)self, (QPointF*)p);
}

void q_rectf_set_rect(void* self, double x, double y, double w, double h) {
    QRectF_SetRect((QRectF*)self, x, y, w, h);
}

void q_rectf_get_rect(void* self, double* x, double* y, double* w, double* h) {
    QRectF_GetRect((QRectF*)self, x, y, w, h);
}

void q_rectf_set_coords(void* self, double x1, double y1, double x2, double y2) {
    QRectF_SetCoords((QRectF*)self, x1, y1, x2, y2);
}

void q_rectf_get_coords(void* self, double* x1, double* y1, double* x2, double* y2) {
    QRectF_GetCoords((QRectF*)self, x1, y1, x2, y2);
}

void q_rectf_adjust(void* self, double x1, double y1, double x2, double y2) {
    QRectF_Adjust((QRectF*)self, x1, y1, x2, y2);
}

QRectF* q_rectf_adjusted(void* self, double x1, double y1, double x2, double y2) {
    return QRectF_Adjusted((QRectF*)self, x1, y1, x2, y2);
}

QSizeF* q_rectf_size(void* self) {
    return QRectF_Size((QRectF*)self);
}

double q_rectf_width(void* self) {
    return QRectF_Width((QRectF*)self);
}

double q_rectf_height(void* self) {
    return QRectF_Height((QRectF*)self);
}

void q_rectf_set_width(void* self, double w) {
    QRectF_SetWidth((QRectF*)self, w);
}

void q_rectf_set_height(void* self, double h) {
    QRectF_SetHeight((QRectF*)self, h);
}

void q_rectf_set_size(void* self, void* s) {
    QRectF_SetSize((QRectF*)self, (QSizeF*)s);
}

QRectF* q_rectf_operator_bitwise_or(void* self, void* r) {
    return QRectF_OperatorBitwiseOr((QRectF*)self, (QRectF*)r);
}

QRectF* q_rectf_operator_bitwise_and(void* self, void* r) {
    return QRectF_OperatorBitwiseAnd((QRectF*)self, (QRectF*)r);
}

void q_rectf_operator_bitwise_or_assign(void* self, void* r) {
    QRectF_OperatorBitwiseOrAssign((QRectF*)self, (QRectF*)r);
}

void q_rectf_operator_bitwise_and_assign(void* self, void* r) {
    QRectF_OperatorBitwiseAndAssign((QRectF*)self, (QRectF*)r);
}

bool q_rectf_contains(void* self, void* r) {
    return QRectF_Contains((QRectF*)self, (QRectF*)r);
}

bool q_rectf_contains2(void* self, void* p) {
    return QRectF_Contains2((QRectF*)self, (QPointF*)p);
}

bool q_rectf_contains3(void* self, double x, double y) {
    return QRectF_Contains3((QRectF*)self, x, y);
}

QRectF* q_rectf_united(void* self, void* other) {
    return QRectF_United((QRectF*)self, (QRectF*)other);
}

QRectF* q_rectf_intersected(void* self, void* other) {
    return QRectF_Intersected((QRectF*)self, (QRectF*)other);
}

bool q_rectf_intersects(void* self, void* r) {
    return QRectF_Intersects((QRectF*)self, (QRectF*)r);
}

QRectF* q_rectf_margins_added(void* self, void* margins) {
    return QRectF_MarginsAdded((QRectF*)self, (QMarginsF*)margins);
}

QRectF* q_rectf_margins_removed(void* self, void* margins) {
    return QRectF_MarginsRemoved((QRectF*)self, (QMarginsF*)margins);
}

QRectF* q_rectf_operator_plus_assign(void* self, void* margins) {
    return QRectF_OperatorPlusAssign((QRectF*)self, (QMarginsF*)margins);
}

QRectF* q_rectf_operator_minus_assign(void* self, void* margins) {
    return QRectF_OperatorMinusAssign((QRectF*)self, (QMarginsF*)margins);
}

QRect* q_rectf_to_rect(void* self) {
    return QRectF_ToRect((QRectF*)self);
}

QRect* q_rectf_to_aligned_rect(void* self) {
    return QRectF_ToAlignedRect((QRectF*)self);
}

void q_rectf_delete(void* self) {
    QRectF_Delete((QRectF*)(self));
}
