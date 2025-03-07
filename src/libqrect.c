#include "libqmargins.hpp"
#include "libqpoint.hpp"
#include "libqsize.hpp"
#include "libqrect.hpp"
#include "libqrect.h"

/// https://doc.qt.io/qt-6/qrect.html

/// q_rect_new constructs a new QRect object.
///
/// ``` QRect* other ```
QRect* q_rect_new(void* other) {
    return QRect_new((QRect*)other);
}

/// q_rect_new2 constructs a new QRect object and invalidates the source QRect object.
///
/// ``` QRect* other ```
QRect* q_rect_new2(void* other) {
    return QRect_new2((QRect*)other);
}

/// q_rect_new3 constructs a new QRect object.
///
///
QRect* q_rect_new3() {
    return QRect_new3();
}

/// q_rect_new4 constructs a new QRect object.
///
/// ``` QPoint* topleft, QPoint* bottomright ```
QRect* q_rect_new4(void* topleft, void* bottomright) {
    return QRect_new4((QPoint*)topleft, (QPoint*)bottomright);
}

/// q_rect_new5 constructs a new QRect object.
///
/// ``` QPoint* topleft, QSize* size ```
QRect* q_rect_new5(void* topleft, void* size) {
    return QRect_new5((QPoint*)topleft, (QSize*)size);
}

/// q_rect_new6 constructs a new QRect object.
///
/// ``` int left, int top, int width, int height ```
QRect* q_rect_new6(int left, int top, int width, int height) {
    return QRect_new6(left, top, width, height);
}

/// q_rect_new7 constructs a new QRect object.
///
/// ``` QRect* param1 ```
QRect* q_rect_new7(void* param1) {
    return QRect_new7((QRect*)param1);
}

/// q_rect_copy_assign shallow copies `other` into `self`.
///
/// ``` QRect* self, QRect* other ```
void q_rect_copy_assign(void* self, void* other) {
    QRect_CopyAssign((QRect*)self, (QRect*)other);
}

/// q_rect_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QRect* self, QRect* other ```
void q_rect_move_assign(void* self, void* other) {
    QRect_MoveAssign((QRect*)self, (QRect*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#isNull)
///
/// ``` QRect* self ```
bool q_rect_is_null(void* self) {
    return QRect_IsNull((QRect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#isEmpty)
///
/// ``` QRect* self ```
bool q_rect_is_empty(void* self) {
    return QRect_IsEmpty((QRect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#isValid)
///
/// ``` QRect* self ```
bool q_rect_is_valid(void* self) {
    return QRect_IsValid((QRect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#left)
///
/// ``` QRect* self ```
int32_t q_rect_left(void* self) {
    return QRect_Left((QRect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#top)
///
/// ``` QRect* self ```
int32_t q_rect_top(void* self) {
    return QRect_Top((QRect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#right)
///
/// ``` QRect* self ```
int32_t q_rect_right(void* self) {
    return QRect_Right((QRect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#bottom)
///
/// ``` QRect* self ```
int32_t q_rect_bottom(void* self) {
    return QRect_Bottom((QRect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#normalized)
///
/// ``` QRect* self ```
QRect* q_rect_normalized(void* self) {
    return QRect_Normalized((QRect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#x)
///
/// ``` QRect* self ```
int32_t q_rect_x(void* self) {
    return QRect_X((QRect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#y)
///
/// ``` QRect* self ```
int32_t q_rect_y(void* self) {
    return QRect_Y((QRect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#setLeft)
///
/// ``` QRect* self, int pos ```
void q_rect_set_left(void* self, int pos) {
    QRect_SetLeft((QRect*)self, pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#setTop)
///
/// ``` QRect* self, int pos ```
void q_rect_set_top(void* self, int pos) {
    QRect_SetTop((QRect*)self, pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#setRight)
///
/// ``` QRect* self, int pos ```
void q_rect_set_right(void* self, int pos) {
    QRect_SetRight((QRect*)self, pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#setBottom)
///
/// ``` QRect* self, int pos ```
void q_rect_set_bottom(void* self, int pos) {
    QRect_SetBottom((QRect*)self, pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#setX)
///
/// ``` QRect* self, int x ```
void q_rect_set_x(void* self, int x) {
    QRect_SetX((QRect*)self, x);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#setY)
///
/// ``` QRect* self, int y ```
void q_rect_set_y(void* self, int y) {
    QRect_SetY((QRect*)self, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#setTopLeft)
///
/// ``` QRect* self, QPoint* p ```
void q_rect_set_top_left(void* self, void* p) {
    QRect_SetTopLeft((QRect*)self, (QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#setBottomRight)
///
/// ``` QRect* self, QPoint* p ```
void q_rect_set_bottom_right(void* self, void* p) {
    QRect_SetBottomRight((QRect*)self, (QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#setTopRight)
///
/// ``` QRect* self, QPoint* p ```
void q_rect_set_top_right(void* self, void* p) {
    QRect_SetTopRight((QRect*)self, (QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#setBottomLeft)
///
/// ``` QRect* self, QPoint* p ```
void q_rect_set_bottom_left(void* self, void* p) {
    QRect_SetBottomLeft((QRect*)self, (QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#topLeft)
///
/// ``` QRect* self ```
QPoint* q_rect_top_left(void* self) {
    return QRect_TopLeft((QRect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#bottomRight)
///
/// ``` QRect* self ```
QPoint* q_rect_bottom_right(void* self) {
    return QRect_BottomRight((QRect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#topRight)
///
/// ``` QRect* self ```
QPoint* q_rect_top_right(void* self) {
    return QRect_TopRight((QRect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#bottomLeft)
///
/// ``` QRect* self ```
QPoint* q_rect_bottom_left(void* self) {
    return QRect_BottomLeft((QRect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#center)
///
/// ``` QRect* self ```
QPoint* q_rect_center(void* self) {
    return QRect_Center((QRect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#moveLeft)
///
/// ``` QRect* self, int pos ```
void q_rect_move_left(void* self, int pos) {
    QRect_MoveLeft((QRect*)self, pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#moveTop)
///
/// ``` QRect* self, int pos ```
void q_rect_move_top(void* self, int pos) {
    QRect_MoveTop((QRect*)self, pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#moveRight)
///
/// ``` QRect* self, int pos ```
void q_rect_move_right(void* self, int pos) {
    QRect_MoveRight((QRect*)self, pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#moveBottom)
///
/// ``` QRect* self, int pos ```
void q_rect_move_bottom(void* self, int pos) {
    QRect_MoveBottom((QRect*)self, pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#moveTopLeft)
///
/// ``` QRect* self, QPoint* p ```
void q_rect_move_top_left(void* self, void* p) {
    QRect_MoveTopLeft((QRect*)self, (QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#moveBottomRight)
///
/// ``` QRect* self, QPoint* p ```
void q_rect_move_bottom_right(void* self, void* p) {
    QRect_MoveBottomRight((QRect*)self, (QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#moveTopRight)
///
/// ``` QRect* self, QPoint* p ```
void q_rect_move_top_right(void* self, void* p) {
    QRect_MoveTopRight((QRect*)self, (QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#moveBottomLeft)
///
/// ``` QRect* self, QPoint* p ```
void q_rect_move_bottom_left(void* self, void* p) {
    QRect_MoveBottomLeft((QRect*)self, (QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#moveCenter)
///
/// ``` QRect* self, QPoint* p ```
void q_rect_move_center(void* self, void* p) {
    QRect_MoveCenter((QRect*)self, (QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#translate)
///
/// ``` QRect* self, int dx, int dy ```
void q_rect_translate(void* self, int dx, int dy) {
    QRect_Translate((QRect*)self, dx, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#translate)
///
/// ``` QRect* self, QPoint* p ```
void q_rect_translate_with_q_point(void* self, void* p) {
    QRect_TranslateWithQPoint((QRect*)self, (QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#translated)
///
/// ``` QRect* self, int dx, int dy ```
QRect* q_rect_translated(void* self, int dx, int dy) {
    return QRect_Translated((QRect*)self, dx, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#translated)
///
/// ``` QRect* self, QPoint* p ```
QRect* q_rect_translated_with_q_point(void* self, void* p) {
    return QRect_TranslatedWithQPoint((QRect*)self, (QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#transposed)
///
/// ``` QRect* self ```
QRect* q_rect_transposed(void* self) {
    return QRect_Transposed((QRect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#moveTo)
///
/// ``` QRect* self, int x, int t ```
void q_rect_move_to(void* self, int x, int t) {
    QRect_MoveTo((QRect*)self, x, t);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#moveTo)
///
/// ``` QRect* self, QPoint* p ```
void q_rect_move_to_with_q_point(void* self, void* p) {
    QRect_MoveToWithQPoint((QRect*)self, (QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#setRect)
///
/// ``` QRect* self, int x, int y, int w, int h ```
void q_rect_set_rect(void* self, int x, int y, int w, int h) {
    QRect_SetRect((QRect*)self, x, y, w, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#getRect)
///
/// ``` QRect* self, int* x, int* y, int* w, int* h ```
void q_rect_get_rect(void* self, int* x, int* y, int* w, int* h) {
    QRect_GetRect((QRect*)self, x, y, w, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#setCoords)
///
/// ``` QRect* self, int x1, int y1, int x2, int y2 ```
void q_rect_set_coords(void* self, int x1, int y1, int x2, int y2) {
    QRect_SetCoords((QRect*)self, x1, y1, x2, y2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#getCoords)
///
/// ``` QRect* self, int* x1, int* y1, int* x2, int* y2 ```
void q_rect_get_coords(void* self, int* x1, int* y1, int* x2, int* y2) {
    QRect_GetCoords((QRect*)self, x1, y1, x2, y2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#adjust)
///
/// ``` QRect* self, int x1, int y1, int x2, int y2 ```
void q_rect_adjust(void* self, int x1, int y1, int x2, int y2) {
    QRect_Adjust((QRect*)self, x1, y1, x2, y2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#adjusted)
///
/// ``` QRect* self, int x1, int y1, int x2, int y2 ```
QRect* q_rect_adjusted(void* self, int x1, int y1, int x2, int y2) {
    return QRect_Adjusted((QRect*)self, x1, y1, x2, y2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#size)
///
/// ``` QRect* self ```
QSize* q_rect_size(void* self) {
    return QRect_Size((QRect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#width)
///
/// ``` QRect* self ```
int32_t q_rect_width(void* self) {
    return QRect_Width((QRect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#height)
///
/// ``` QRect* self ```
int32_t q_rect_height(void* self) {
    return QRect_Height((QRect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#setWidth)
///
/// ``` QRect* self, int w ```
void q_rect_set_width(void* self, int w) {
    QRect_SetWidth((QRect*)self, w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#setHeight)
///
/// ``` QRect* self, int h ```
void q_rect_set_height(void* self, int h) {
    QRect_SetHeight((QRect*)self, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#setSize)
///
/// ``` QRect* self, QSize* s ```
void q_rect_set_size(void* self, void* s) {
    QRect_SetSize((QRect*)self, (QSize*)s);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#operator|)
///
/// ``` QRect* self, QRect* r ```
QRect* q_rect_operator_bitwise_or(void* self, void* r) {
    return QRect_OperatorBitwiseOr((QRect*)self, (QRect*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#operator&)
///
/// ``` QRect* self, QRect* r ```
QRect* q_rect_operator_bitwise_and(void* self, void* r) {
    return QRect_OperatorBitwiseAnd((QRect*)self, (QRect*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#operator|=)
///
/// ``` QRect* self, QRect* r ```
void q_rect_operator_bitwise_or_assign(void* self, void* r) {
    QRect_OperatorBitwiseOrAssign((QRect*)self, (QRect*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#operator&=)
///
/// ``` QRect* self, QRect* r ```
void q_rect_operator_bitwise_and_assign(void* self, void* r) {
    QRect_OperatorBitwiseAndAssign((QRect*)self, (QRect*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#contains)
///
/// ``` QRect* self, QRect* r ```
bool q_rect_contains(void* self, void* r) {
    return QRect_Contains((QRect*)self, (QRect*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#contains)
///
/// ``` QRect* self, QPoint* p ```
bool q_rect_contains_with_q_point(void* self, void* p) {
    return QRect_ContainsWithQPoint((QRect*)self, (QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#contains)
///
/// ``` QRect* self, int x, int y ```
bool q_rect_contains2(void* self, int x, int y) {
    return QRect_Contains2((QRect*)self, x, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#contains)
///
/// ``` QRect* self, int x, int y, bool proper ```
bool q_rect_contains3(void* self, int x, int y, bool proper) {
    return QRect_Contains3((QRect*)self, x, y, proper);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#united)
///
/// ``` QRect* self, QRect* other ```
QRect* q_rect_united(void* self, void* other) {
    return QRect_United((QRect*)self, (QRect*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#intersected)
///
/// ``` QRect* self, QRect* other ```
QRect* q_rect_intersected(void* self, void* other) {
    return QRect_Intersected((QRect*)self, (QRect*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#intersects)
///
/// ``` QRect* self, QRect* r ```
bool q_rect_intersects(void* self, void* r) {
    return QRect_Intersects((QRect*)self, (QRect*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#marginsAdded)
///
/// ``` QRect* self, QMargins* margins ```
QRect* q_rect_margins_added(void* self, void* margins) {
    return QRect_MarginsAdded((QRect*)self, (QMargins*)margins);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#marginsRemoved)
///
/// ``` QRect* self, QMargins* margins ```
QRect* q_rect_margins_removed(void* self, void* margins) {
    return QRect_MarginsRemoved((QRect*)self, (QMargins*)margins);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#operator+=)
///
/// ``` QRect* self, QMargins* margins ```
QRect* q_rect_operator_plus_assign(void* self, void* margins) {
    return QRect_OperatorPlusAssign((QRect*)self, (QMargins*)margins);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#operator-=)
///
/// ``` QRect* self, QMargins* margins ```
QRect* q_rect_operator_minus_assign(void* self, void* margins) {
    return QRect_OperatorMinusAssign((QRect*)self, (QMargins*)margins);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#span)
///
/// ``` QPoint* p1, QPoint* p2 ```
QRect* q_rect_span(void* p1, void* p2) {
    return QRect_Span((QPoint*)p1, (QPoint*)p2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#toRectF)
///
/// ``` QRect* self ```
QRectF* q_rect_to_rect_f(void* self) {
    return QRect_ToRectF((QRect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#contains)
///
/// ``` QRect* self, QRect* r, bool proper ```
bool q_rect_contains22(void* self, void* r, bool proper) {
    return QRect_Contains22((QRect*)self, (QRect*)r, proper);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrect.html#contains)
///
/// ``` QRect* self, QPoint* p, bool proper ```
bool q_rect_contains23(void* self, void* p, bool proper) {
    return QRect_Contains23((QRect*)self, (QPoint*)p, proper);
}

/// Delete this object from C++ memory.
///
/// ``` QRect* self ```
void q_rect_delete(void* self) {
    QRect_Delete((QRect*)(self));
}

/// https://doc.qt.io/qt-6/qrectf.html

/// q_rectf_new constructs a new QRectF object.
///
/// ``` QRectF* other ```
QRectF* q_rectf_new(void* other) {
    return QRectF_new((QRectF*)other);
}

/// q_rectf_new2 constructs a new QRectF object and invalidates the source QRectF object.
///
/// ``` QRectF* other ```
QRectF* q_rectf_new2(void* other) {
    return QRectF_new2((QRectF*)other);
}

/// q_rectf_new3 constructs a new QRectF object.
///
///
QRectF* q_rectf_new3() {
    return QRectF_new3();
}

/// q_rectf_new4 constructs a new QRectF object.
///
/// ``` QPointF* topleft, QSizeF* size ```
QRectF* q_rectf_new4(void* topleft, void* size) {
    return QRectF_new4((QPointF*)topleft, (QSizeF*)size);
}

/// q_rectf_new5 constructs a new QRectF object.
///
/// ``` QPointF* topleft, QPointF* bottomRight ```
QRectF* q_rectf_new5(void* topleft, void* bottomRight) {
    return QRectF_new5((QPointF*)topleft, (QPointF*)bottomRight);
}

/// q_rectf_new6 constructs a new QRectF object.
///
/// ``` double left, double top, double width, double height ```
QRectF* q_rectf_new6(double left, double top, double width, double height) {
    return QRectF_new6(left, top, width, height);
}

/// q_rectf_new7 constructs a new QRectF object.
///
/// ``` QRect* rect ```
QRectF* q_rectf_new7(void* rect) {
    return QRectF_new7((QRect*)rect);
}

/// q_rectf_new8 constructs a new QRectF object.
///
/// ``` QRectF* param1 ```
QRectF* q_rectf_new8(void* param1) {
    return QRectF_new8((QRectF*)param1);
}

/// q_rectf_copy_assign shallow copies `other` into `self`.
///
/// ``` QRectF* self, QRectF* other ```
void q_rectf_copy_assign(void* self, void* other) {
    QRectF_CopyAssign((QRectF*)self, (QRectF*)other);
}

/// q_rectf_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QRectF* self, QRectF* other ```
void q_rectf_move_assign(void* self, void* other) {
    QRectF_MoveAssign((QRectF*)self, (QRectF*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#isNull)
///
/// ``` QRectF* self ```
bool q_rectf_is_null(void* self) {
    return QRectF_IsNull((QRectF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#isEmpty)
///
/// ``` QRectF* self ```
bool q_rectf_is_empty(void* self) {
    return QRectF_IsEmpty((QRectF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#isValid)
///
/// ``` QRectF* self ```
bool q_rectf_is_valid(void* self) {
    return QRectF_IsValid((QRectF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#normalized)
///
/// ``` QRectF* self ```
QRectF* q_rectf_normalized(void* self) {
    return QRectF_Normalized((QRectF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#left)
///
/// ``` QRectF* self ```
double q_rectf_left(void* self) {
    return QRectF_Left((QRectF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#top)
///
/// ``` QRectF* self ```
double q_rectf_top(void* self) {
    return QRectF_Top((QRectF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#right)
///
/// ``` QRectF* self ```
double q_rectf_right(void* self) {
    return QRectF_Right((QRectF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#bottom)
///
/// ``` QRectF* self ```
double q_rectf_bottom(void* self) {
    return QRectF_Bottom((QRectF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#x)
///
/// ``` QRectF* self ```
double q_rectf_x(void* self) {
    return QRectF_X((QRectF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#y)
///
/// ``` QRectF* self ```
double q_rectf_y(void* self) {
    return QRectF_Y((QRectF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#setLeft)
///
/// ``` QRectF* self, double pos ```
void q_rectf_set_left(void* self, double pos) {
    QRectF_SetLeft((QRectF*)self, pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#setTop)
///
/// ``` QRectF* self, double pos ```
void q_rectf_set_top(void* self, double pos) {
    QRectF_SetTop((QRectF*)self, pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#setRight)
///
/// ``` QRectF* self, double pos ```
void q_rectf_set_right(void* self, double pos) {
    QRectF_SetRight((QRectF*)self, pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#setBottom)
///
/// ``` QRectF* self, double pos ```
void q_rectf_set_bottom(void* self, double pos) {
    QRectF_SetBottom((QRectF*)self, pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#setX)
///
/// ``` QRectF* self, double pos ```
void q_rectf_set_x(void* self, double pos) {
    QRectF_SetX((QRectF*)self, pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#setY)
///
/// ``` QRectF* self, double pos ```
void q_rectf_set_y(void* self, double pos) {
    QRectF_SetY((QRectF*)self, pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#topLeft)
///
/// ``` QRectF* self ```
QPointF* q_rectf_top_left(void* self) {
    return QRectF_TopLeft((QRectF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#bottomRight)
///
/// ``` QRectF* self ```
QPointF* q_rectf_bottom_right(void* self) {
    return QRectF_BottomRight((QRectF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#topRight)
///
/// ``` QRectF* self ```
QPointF* q_rectf_top_right(void* self) {
    return QRectF_TopRight((QRectF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#bottomLeft)
///
/// ``` QRectF* self ```
QPointF* q_rectf_bottom_left(void* self) {
    return QRectF_BottomLeft((QRectF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#center)
///
/// ``` QRectF* self ```
QPointF* q_rectf_center(void* self) {
    return QRectF_Center((QRectF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#setTopLeft)
///
/// ``` QRectF* self, QPointF* p ```
void q_rectf_set_top_left(void* self, void* p) {
    QRectF_SetTopLeft((QRectF*)self, (QPointF*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#setBottomRight)
///
/// ``` QRectF* self, QPointF* p ```
void q_rectf_set_bottom_right(void* self, void* p) {
    QRectF_SetBottomRight((QRectF*)self, (QPointF*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#setTopRight)
///
/// ``` QRectF* self, QPointF* p ```
void q_rectf_set_top_right(void* self, void* p) {
    QRectF_SetTopRight((QRectF*)self, (QPointF*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#setBottomLeft)
///
/// ``` QRectF* self, QPointF* p ```
void q_rectf_set_bottom_left(void* self, void* p) {
    QRectF_SetBottomLeft((QRectF*)self, (QPointF*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#moveLeft)
///
/// ``` QRectF* self, double pos ```
void q_rectf_move_left(void* self, double pos) {
    QRectF_MoveLeft((QRectF*)self, pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#moveTop)
///
/// ``` QRectF* self, double pos ```
void q_rectf_move_top(void* self, double pos) {
    QRectF_MoveTop((QRectF*)self, pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#moveRight)
///
/// ``` QRectF* self, double pos ```
void q_rectf_move_right(void* self, double pos) {
    QRectF_MoveRight((QRectF*)self, pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#moveBottom)
///
/// ``` QRectF* self, double pos ```
void q_rectf_move_bottom(void* self, double pos) {
    QRectF_MoveBottom((QRectF*)self, pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#moveTopLeft)
///
/// ``` QRectF* self, QPointF* p ```
void q_rectf_move_top_left(void* self, void* p) {
    QRectF_MoveTopLeft((QRectF*)self, (QPointF*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#moveBottomRight)
///
/// ``` QRectF* self, QPointF* p ```
void q_rectf_move_bottom_right(void* self, void* p) {
    QRectF_MoveBottomRight((QRectF*)self, (QPointF*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#moveTopRight)
///
/// ``` QRectF* self, QPointF* p ```
void q_rectf_move_top_right(void* self, void* p) {
    QRectF_MoveTopRight((QRectF*)self, (QPointF*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#moveBottomLeft)
///
/// ``` QRectF* self, QPointF* p ```
void q_rectf_move_bottom_left(void* self, void* p) {
    QRectF_MoveBottomLeft((QRectF*)self, (QPointF*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#moveCenter)
///
/// ``` QRectF* self, QPointF* p ```
void q_rectf_move_center(void* self, void* p) {
    QRectF_MoveCenter((QRectF*)self, (QPointF*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#translate)
///
/// ``` QRectF* self, double dx, double dy ```
void q_rectf_translate(void* self, double dx, double dy) {
    QRectF_Translate((QRectF*)self, dx, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#translate)
///
/// ``` QRectF* self, QPointF* p ```
void q_rectf_translate_with_q_point_f(void* self, void* p) {
    QRectF_TranslateWithQPointF((QRectF*)self, (QPointF*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#translated)
///
/// ``` QRectF* self, double dx, double dy ```
QRectF* q_rectf_translated(void* self, double dx, double dy) {
    return QRectF_Translated((QRectF*)self, dx, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#translated)
///
/// ``` QRectF* self, QPointF* p ```
QRectF* q_rectf_translated_with_q_point_f(void* self, void* p) {
    return QRectF_TranslatedWithQPointF((QRectF*)self, (QPointF*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#transposed)
///
/// ``` QRectF* self ```
QRectF* q_rectf_transposed(void* self) {
    return QRectF_Transposed((QRectF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#moveTo)
///
/// ``` QRectF* self, double x, double y ```
void q_rectf_move_to(void* self, double x, double y) {
    QRectF_MoveTo((QRectF*)self, x, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#moveTo)
///
/// ``` QRectF* self, QPointF* p ```
void q_rectf_move_to_with_q_point_f(void* self, void* p) {
    QRectF_MoveToWithQPointF((QRectF*)self, (QPointF*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#setRect)
///
/// ``` QRectF* self, double x, double y, double w, double h ```
void q_rectf_set_rect(void* self, double x, double y, double w, double h) {
    QRectF_SetRect((QRectF*)self, x, y, w, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#getRect)
///
/// ``` QRectF* self, double* x, double* y, double* w, double* h ```
void q_rectf_get_rect(void* self, double* x, double* y, double* w, double* h) {
    QRectF_GetRect((QRectF*)self, x, y, w, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#setCoords)
///
/// ``` QRectF* self, double x1, double y1, double x2, double y2 ```
void q_rectf_set_coords(void* self, double x1, double y1, double x2, double y2) {
    QRectF_SetCoords((QRectF*)self, x1, y1, x2, y2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#getCoords)
///
/// ``` QRectF* self, double* x1, double* y1, double* x2, double* y2 ```
void q_rectf_get_coords(void* self, double* x1, double* y1, double* x2, double* y2) {
    QRectF_GetCoords((QRectF*)self, x1, y1, x2, y2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#adjust)
///
/// ``` QRectF* self, double x1, double y1, double x2, double y2 ```
void q_rectf_adjust(void* self, double x1, double y1, double x2, double y2) {
    QRectF_Adjust((QRectF*)self, x1, y1, x2, y2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#adjusted)
///
/// ``` QRectF* self, double x1, double y1, double x2, double y2 ```
QRectF* q_rectf_adjusted(void* self, double x1, double y1, double x2, double y2) {
    return QRectF_Adjusted((QRectF*)self, x1, y1, x2, y2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#size)
///
/// ``` QRectF* self ```
QSizeF* q_rectf_size(void* self) {
    return QRectF_Size((QRectF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#width)
///
/// ``` QRectF* self ```
double q_rectf_width(void* self) {
    return QRectF_Width((QRectF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#height)
///
/// ``` QRectF* self ```
double q_rectf_height(void* self) {
    return QRectF_Height((QRectF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#setWidth)
///
/// ``` QRectF* self, double w ```
void q_rectf_set_width(void* self, double w) {
    QRectF_SetWidth((QRectF*)self, w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#setHeight)
///
/// ``` QRectF* self, double h ```
void q_rectf_set_height(void* self, double h) {
    QRectF_SetHeight((QRectF*)self, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#setSize)
///
/// ``` QRectF* self, QSizeF* s ```
void q_rectf_set_size(void* self, void* s) {
    QRectF_SetSize((QRectF*)self, (QSizeF*)s);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#operator|)
///
/// ``` QRectF* self, QRectF* r ```
QRectF* q_rectf_operator_bitwise_or(void* self, void* r) {
    return QRectF_OperatorBitwiseOr((QRectF*)self, (QRectF*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#operator&)
///
/// ``` QRectF* self, QRectF* r ```
QRectF* q_rectf_operator_bitwise_and(void* self, void* r) {
    return QRectF_OperatorBitwiseAnd((QRectF*)self, (QRectF*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#operator|=)
///
/// ``` QRectF* self, QRectF* r ```
void q_rectf_operator_bitwise_or_assign(void* self, void* r) {
    QRectF_OperatorBitwiseOrAssign((QRectF*)self, (QRectF*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#operator&=)
///
/// ``` QRectF* self, QRectF* r ```
void q_rectf_operator_bitwise_and_assign(void* self, void* r) {
    QRectF_OperatorBitwiseAndAssign((QRectF*)self, (QRectF*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#contains)
///
/// ``` QRectF* self, QRectF* r ```
bool q_rectf_contains(void* self, void* r) {
    return QRectF_Contains((QRectF*)self, (QRectF*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#contains)
///
/// ``` QRectF* self, QPointF* p ```
bool q_rectf_contains_with_q_point_f(void* self, void* p) {
    return QRectF_ContainsWithQPointF((QRectF*)self, (QPointF*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#contains)
///
/// ``` QRectF* self, double x, double y ```
bool q_rectf_contains2(void* self, double x, double y) {
    return QRectF_Contains2((QRectF*)self, x, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#united)
///
/// ``` QRectF* self, QRectF* other ```
QRectF* q_rectf_united(void* self, void* other) {
    return QRectF_United((QRectF*)self, (QRectF*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#intersected)
///
/// ``` QRectF* self, QRectF* other ```
QRectF* q_rectf_intersected(void* self, void* other) {
    return QRectF_Intersected((QRectF*)self, (QRectF*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#intersects)
///
/// ``` QRectF* self, QRectF* r ```
bool q_rectf_intersects(void* self, void* r) {
    return QRectF_Intersects((QRectF*)self, (QRectF*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#marginsAdded)
///
/// ``` QRectF* self, QMarginsF* margins ```
QRectF* q_rectf_margins_added(void* self, void* margins) {
    return QRectF_MarginsAdded((QRectF*)self, (QMarginsF*)margins);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#marginsRemoved)
///
/// ``` QRectF* self, QMarginsF* margins ```
QRectF* q_rectf_margins_removed(void* self, void* margins) {
    return QRectF_MarginsRemoved((QRectF*)self, (QMarginsF*)margins);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#operator+=)
///
/// ``` QRectF* self, QMarginsF* margins ```
QRectF* q_rectf_operator_plus_assign(void* self, void* margins) {
    return QRectF_OperatorPlusAssign((QRectF*)self, (QMarginsF*)margins);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#operator-=)
///
/// ``` QRectF* self, QMarginsF* margins ```
QRectF* q_rectf_operator_minus_assign(void* self, void* margins) {
    return QRectF_OperatorMinusAssign((QRectF*)self, (QMarginsF*)margins);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#toRect)
///
/// ``` QRectF* self ```
QRect* q_rectf_to_rect(void* self) {
    return QRectF_ToRect((QRectF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrectf.html#toAlignedRect)
///
/// ``` QRectF* self ```
QRect* q_rectf_to_aligned_rect(void* self) {
    return QRectF_ToAlignedRect((QRectF*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QRectF* self ```
void q_rectf_delete(void* self) {
    QRectF_Delete((QRectF*)(self));
}