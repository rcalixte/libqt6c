#include "libqpoint.hpp"
#include "libqline.hpp"
#include "libqline.h"

/// https://doc.qt.io/qt-6/qline.html

/// q_line_new constructs a new QLine object.
///
/// ``` QLine* other ```
QLine* q_line_new(void* other) {
    return QLine_new((QLine*)other);
}

/// q_line_new2 constructs a new QLine object and invalidates the source QLine object.
///
/// ``` QLine* other ```
QLine* q_line_new2(void* other) {
    return QLine_new2((QLine*)other);
}

/// q_line_new3 constructs a new QLine object.
///
///
QLine* q_line_new3() {
    return QLine_new3();
}

/// q_line_new4 constructs a new QLine object.
///
/// ``` QPoint* pt1, QPoint* pt2 ```
QLine* q_line_new4(void* pt1, void* pt2) {
    return QLine_new4((QPoint*)pt1, (QPoint*)pt2);
}

/// q_line_new5 constructs a new QLine object.
///
/// ``` int x1, int y1, int x2, int y2 ```
QLine* q_line_new5(int x1, int y1, int x2, int y2) {
    return QLine_new5(x1, y1, x2, y2);
}

/// q_line_new6 constructs a new QLine object.
///
/// ``` QLine* param1 ```
QLine* q_line_new6(void* param1) {
    return QLine_new6((QLine*)param1);
}

/// q_line_copy_assign shallow copies `other` into `self`.
///
/// ``` QLine* self, QLine* other ```
void q_line_copy_assign(void* self, void* other) {
    QLine_CopyAssign((QLine*)self, (QLine*)other);
}

/// q_line_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QLine* self, QLine* other ```
void q_line_move_assign(void* self, void* other) {
    QLine_MoveAssign((QLine*)self, (QLine*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#isNull)
///
/// ``` QLine* self ```
bool q_line_is_null(void* self) {
    return QLine_IsNull((QLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#p1)
///
/// ``` QLine* self ```
QPoint* q_line_p1(void* self) {
    return QLine_P1((QLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#p2)
///
/// ``` QLine* self ```
QPoint* q_line_p2(void* self) {
    return QLine_P2((QLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#x1)
///
/// ``` QLine* self ```
int32_t q_line_x1(void* self) {
    return QLine_X1((QLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#y1)
///
/// ``` QLine* self ```
int32_t q_line_y1(void* self) {
    return QLine_Y1((QLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#x2)
///
/// ``` QLine* self ```
int32_t q_line_x2(void* self) {
    return QLine_X2((QLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#y2)
///
/// ``` QLine* self ```
int32_t q_line_y2(void* self) {
    return QLine_Y2((QLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#dx)
///
/// ``` QLine* self ```
int32_t q_line_dx(void* self) {
    return QLine_Dx((QLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#dy)
///
/// ``` QLine* self ```
int32_t q_line_dy(void* self) {
    return QLine_Dy((QLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#translate)
///
/// ``` QLine* self, QPoint* p ```
void q_line_translate(void* self, void* p) {
    QLine_Translate((QLine*)self, (QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#translate)
///
/// ``` QLine* self, int dx, int dy ```
void q_line_translate2(void* self, int dx, int dy) {
    QLine_Translate2((QLine*)self, dx, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#translated)
///
/// ``` QLine* self, QPoint* p ```
QLine* q_line_translated(void* self, void* p) {
    return QLine_Translated((QLine*)self, (QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#translated)
///
/// ``` QLine* self, int dx, int dy ```
QLine* q_line_translated2(void* self, int dx, int dy) {
    return QLine_Translated2((QLine*)self, dx, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#center)
///
/// ``` QLine* self ```
QPoint* q_line_center(void* self) {
    return QLine_Center((QLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#setP1)
///
/// ``` QLine* self, QPoint* p1 ```
void q_line_set_p1(void* self, void* p1) {
    QLine_SetP1((QLine*)self, (QPoint*)p1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#setP2)
///
/// ``` QLine* self, QPoint* p2 ```
void q_line_set_p2(void* self, void* p2) {
    QLine_SetP2((QLine*)self, (QPoint*)p2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#setPoints)
///
/// ``` QLine* self, QPoint* p1, QPoint* p2 ```
void q_line_set_points(void* self, void* p1, void* p2) {
    QLine_SetPoints((QLine*)self, (QPoint*)p1, (QPoint*)p2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#setLine)
///
/// ``` QLine* self, int x1, int y1, int x2, int y2 ```
void q_line_set_line(void* self, int x1, int y1, int x2, int y2) {
    QLine_SetLine((QLine*)self, x1, y1, x2, y2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#operator==)
///
/// ``` QLine* self, QLine* d ```
bool q_line_operator_equal(void* self, void* d) {
    return QLine_OperatorEqual((QLine*)self, (QLine*)d);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#operator!=)
///
/// ``` QLine* self, QLine* d ```
bool q_line_operator_not_equal(void* self, void* d) {
    return QLine_OperatorNotEqual((QLine*)self, (QLine*)d);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#toLineF)
///
/// ``` QLine* self ```
QLineF* q_line_to_line_f(void* self) {
    return QLine_ToLineF((QLine*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QLine* self ```
void q_line_delete(void* self) {
    QLine_Delete((QLine*)(self));
}

/// https://doc.qt.io/qt-6/qlinef.html

/// q_linef_new constructs a new QLineF object.
///
/// ``` QLineF* other ```
QLineF* q_linef_new(void* other) {
    return QLineF_new((QLineF*)other);
}

/// q_linef_new2 constructs a new QLineF object and invalidates the source QLineF object.
///
/// ``` QLineF* other ```
QLineF* q_linef_new2(void* other) {
    return QLineF_new2((QLineF*)other);
}

/// q_linef_new3 constructs a new QLineF object.
///
///
QLineF* q_linef_new3() {
    return QLineF_new3();
}

/// q_linef_new4 constructs a new QLineF object.
///
/// ``` QPointF* pt1, QPointF* pt2 ```
QLineF* q_linef_new4(void* pt1, void* pt2) {
    return QLineF_new4((QPointF*)pt1, (QPointF*)pt2);
}

/// q_linef_new5 constructs a new QLineF object.
///
/// ``` double x1, double y1, double x2, double y2 ```
QLineF* q_linef_new5(double x1, double y1, double x2, double y2) {
    return QLineF_new5(x1, y1, x2, y2);
}

/// q_linef_new6 constructs a new QLineF object.
///
/// ``` QLine* line ```
QLineF* q_linef_new6(void* line) {
    return QLineF_new6((QLine*)line);
}

/// q_linef_new7 constructs a new QLineF object.
///
/// ``` QLineF* param1 ```
QLineF* q_linef_new7(void* param1) {
    return QLineF_new7((QLineF*)param1);
}

/// q_linef_copy_assign shallow copies `other` into `self`.
///
/// ``` QLineF* self, QLineF* other ```
void q_linef_copy_assign(void* self, void* other) {
    QLineF_CopyAssign((QLineF*)self, (QLineF*)other);
}

/// q_linef_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QLineF* self, QLineF* other ```
void q_linef_move_assign(void* self, void* other) {
    QLineF_MoveAssign((QLineF*)self, (QLineF*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#fromPolar)
///
/// ``` double length, double angle ```
QLineF* q_linef_from_polar(double length, double angle) {
    return QLineF_FromPolar(length, angle);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#isNull)
///
/// ``` QLineF* self ```
bool q_linef_is_null(void* self) {
    return QLineF_IsNull((QLineF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#p1)
///
/// ``` QLineF* self ```
QPointF* q_linef_p1(void* self) {
    return QLineF_P1((QLineF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#p2)
///
/// ``` QLineF* self ```
QPointF* q_linef_p2(void* self) {
    return QLineF_P2((QLineF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#x1)
///
/// ``` QLineF* self ```
double q_linef_x1(void* self) {
    return QLineF_X1((QLineF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#y1)
///
/// ``` QLineF* self ```
double q_linef_y1(void* self) {
    return QLineF_Y1((QLineF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#x2)
///
/// ``` QLineF* self ```
double q_linef_x2(void* self) {
    return QLineF_X2((QLineF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#y2)
///
/// ``` QLineF* self ```
double q_linef_y2(void* self) {
    return QLineF_Y2((QLineF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#dx)
///
/// ``` QLineF* self ```
double q_linef_dx(void* self) {
    return QLineF_Dx((QLineF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#dy)
///
/// ``` QLineF* self ```
double q_linef_dy(void* self) {
    return QLineF_Dy((QLineF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#length)
///
/// ``` QLineF* self ```
double q_linef_length(void* self) {
    return QLineF_Length((QLineF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#setLength)
///
/// ``` QLineF* self, double lenVal ```
void q_linef_set_length(void* self, double lenVal) {
    QLineF_SetLength((QLineF*)self, lenVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#angle)
///
/// ``` QLineF* self ```
double q_linef_angle(void* self) {
    return QLineF_Angle((QLineF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#setAngle)
///
/// ``` QLineF* self, double angle ```
void q_linef_set_angle(void* self, double angle) {
    QLineF_SetAngle((QLineF*)self, angle);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#angleTo)
///
/// ``` QLineF* self, QLineF* l ```
double q_linef_angle_to(void* self, void* l) {
    return QLineF_AngleTo((QLineF*)self, (QLineF*)l);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#unitVector)
///
/// ``` QLineF* self ```
QLineF* q_linef_unit_vector(void* self) {
    return QLineF_UnitVector((QLineF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#normalVector)
///
/// ``` QLineF* self ```
QLineF* q_linef_normal_vector(void* self) {
    return QLineF_NormalVector((QLineF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#intersects)
///
/// ``` QLineF* self, QLineF* l ```
int64_t q_linef_intersects(void* self, void* l) {
    return QLineF_Intersects((QLineF*)self, (QLineF*)l);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#pointAt)
///
/// ``` QLineF* self, double t ```
QPointF* q_linef_point_at(void* self, double t) {
    return QLineF_PointAt((QLineF*)self, t);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#translate)
///
/// ``` QLineF* self, QPointF* p ```
void q_linef_translate(void* self, void* p) {
    QLineF_Translate((QLineF*)self, (QPointF*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#translate)
///
/// ``` QLineF* self, double dx, double dy ```
void q_linef_translate2(void* self, double dx, double dy) {
    QLineF_Translate2((QLineF*)self, dx, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#translated)
///
/// ``` QLineF* self, QPointF* p ```
QLineF* q_linef_translated(void* self, void* p) {
    return QLineF_Translated((QLineF*)self, (QPointF*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#translated)
///
/// ``` QLineF* self, double dx, double dy ```
QLineF* q_linef_translated2(void* self, double dx, double dy) {
    return QLineF_Translated2((QLineF*)self, dx, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#center)
///
/// ``` QLineF* self ```
QPointF* q_linef_center(void* self) {
    return QLineF_Center((QLineF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#setP1)
///
/// ``` QLineF* self, QPointF* p1 ```
void q_linef_set_p1(void* self, void* p1) {
    QLineF_SetP1((QLineF*)self, (QPointF*)p1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#setP2)
///
/// ``` QLineF* self, QPointF* p2 ```
void q_linef_set_p2(void* self, void* p2) {
    QLineF_SetP2((QLineF*)self, (QPointF*)p2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#setPoints)
///
/// ``` QLineF* self, QPointF* p1, QPointF* p2 ```
void q_linef_set_points(void* self, void* p1, void* p2) {
    QLineF_SetPoints((QLineF*)self, (QPointF*)p1, (QPointF*)p2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#setLine)
///
/// ``` QLineF* self, double x1, double y1, double x2, double y2 ```
void q_linef_set_line(void* self, double x1, double y1, double x2, double y2) {
    QLineF_SetLine((QLineF*)self, x1, y1, x2, y2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#operator==)
///
/// ``` QLineF* self, QLineF* d ```
bool q_linef_operator_equal(void* self, void* d) {
    return QLineF_OperatorEqual((QLineF*)self, (QLineF*)d);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#operator!=)
///
/// ``` QLineF* self, QLineF* d ```
bool q_linef_operator_not_equal(void* self, void* d) {
    return QLineF_OperatorNotEqual((QLineF*)self, (QLineF*)d);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#toLine)
///
/// ``` QLineF* self ```
QLine* q_linef_to_line(void* self) {
    return QLineF_ToLine((QLineF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#intersects)
///
/// ``` QLineF* self, QLineF* l, QPointF* intersectionPoint ```
int64_t q_linef_intersects2(void* self, void* l, void* intersectionPoint) {
    return QLineF_Intersects2((QLineF*)self, (QLineF*)l, (QPointF*)intersectionPoint);
}

/// Delete this object from C++ memory.
///
/// ``` QLineF* self ```
void q_linef_delete(void* self) {
    QLineF_Delete((QLineF*)(self));
}