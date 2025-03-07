#include "libqpoint.hpp"
#include "libqpoint.h"

/// https://doc.qt.io/qt-6/qpoint.html

/// q_point_new constructs a new QPoint object.
///
/// ``` QPoint* other ```
QPoint* q_point_new(void* other) {
    return QPoint_new((QPoint*)other);
}

/// q_point_new2 constructs a new QPoint object and invalidates the source QPoint object.
///
/// ``` QPoint* other ```
QPoint* q_point_new2(void* other) {
    return QPoint_new2((QPoint*)other);
}

/// q_point_new3 constructs a new QPoint object.
///
///
QPoint* q_point_new3() {
    return QPoint_new3();
}

/// q_point_new4 constructs a new QPoint object.
///
/// ``` int xpos, int ypos ```
QPoint* q_point_new4(int xpos, int ypos) {
    return QPoint_new4(xpos, ypos);
}

/// q_point_new5 constructs a new QPoint object.
///
/// ``` QPoint* param1 ```
QPoint* q_point_new5(void* param1) {
    return QPoint_new5((QPoint*)param1);
}

/// q_point_copy_assign shallow copies `other` into `self`.
///
/// ``` QPoint* self, QPoint* other ```
void q_point_copy_assign(void* self, void* other) {
    QPoint_CopyAssign((QPoint*)self, (QPoint*)other);
}

/// q_point_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QPoint* self, QPoint* other ```
void q_point_move_assign(void* self, void* other) {
    QPoint_MoveAssign((QPoint*)self, (QPoint*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#isNull)
///
/// ``` QPoint* self ```
bool q_point_is_null(void* self) {
    return QPoint_IsNull((QPoint*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#x)
///
/// ``` QPoint* self ```
int32_t q_point_x(void* self) {
    return QPoint_X((QPoint*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#y)
///
/// ``` QPoint* self ```
int32_t q_point_y(void* self) {
    return QPoint_Y((QPoint*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#setX)
///
/// ``` QPoint* self, int x ```
void q_point_set_x(void* self, int x) {
    QPoint_SetX((QPoint*)self, x);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#setY)
///
/// ``` QPoint* self, int y ```
void q_point_set_y(void* self, int y) {
    QPoint_SetY((QPoint*)self, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#manhattanLength)
///
/// ``` QPoint* self ```
int32_t q_point_manhattan_length(void* self) {
    return QPoint_ManhattanLength((QPoint*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#transposed)
///
/// ``` QPoint* self ```
QPoint* q_point_transposed(void* self) {
    return QPoint_Transposed((QPoint*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#operator+=)
///
/// ``` QPoint* self, QPoint* p ```
QPoint* q_point_operator_plus_assign(void* self, void* p) {
    return QPoint_OperatorPlusAssign((QPoint*)self, (QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#operator-=)
///
/// ``` QPoint* self, QPoint* p ```
QPoint* q_point_operator_minus_assign(void* self, void* p) {
    return QPoint_OperatorMinusAssign((QPoint*)self, (QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#operator*=)
///
/// ``` QPoint* self, float factor ```
QPoint* q_point_operator_multiply_assign(void* self, float factor) {
    return QPoint_OperatorMultiplyAssign((QPoint*)self, factor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#operator*=)
///
/// ``` QPoint* self, double factor ```
QPoint* q_point_operator_multiply_assign_with_factor(void* self, double factor) {
    return QPoint_OperatorMultiplyAssignWithFactor((QPoint*)self, factor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#operator*=)
///
/// ``` QPoint* self, int factor ```
QPoint* q_point_operator_multiply_assign2(void* self, int factor) {
    return QPoint_OperatorMultiplyAssign2((QPoint*)self, factor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#operator/=)
///
/// ``` QPoint* self, double divisor ```
QPoint* q_point_operator_divide_assign(void* self, double divisor) {
    return QPoint_OperatorDivideAssign((QPoint*)self, divisor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#dotProduct)
///
/// ``` QPoint* p1, QPoint* p2 ```
int32_t q_point_dot_product(void* p1, void* p2) {
    return QPoint_DotProduct((QPoint*)p1, (QPoint*)p2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#toPointF)
///
/// ``` QPoint* self ```
QPointF* q_point_to_point_f(void* self) {
    return QPoint_ToPointF((QPoint*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QPoint* self ```
void q_point_delete(void* self) {
    QPoint_Delete((QPoint*)(self));
}

/// https://doc.qt.io/qt-6/qpointf.html

/// q_pointf_new constructs a new QPointF object.
///
/// ``` QPointF* other ```
QPointF* q_pointf_new(void* other) {
    return QPointF_new((QPointF*)other);
}

/// q_pointf_new2 constructs a new QPointF object and invalidates the source QPointF object.
///
/// ``` QPointF* other ```
QPointF* q_pointf_new2(void* other) {
    return QPointF_new2((QPointF*)other);
}

/// q_pointf_new3 constructs a new QPointF object.
///
///
QPointF* q_pointf_new3() {
    return QPointF_new3();
}

/// q_pointf_new4 constructs a new QPointF object.
///
/// ``` QPoint* p ```
QPointF* q_pointf_new4(void* p) {
    return QPointF_new4((QPoint*)p);
}

/// q_pointf_new5 constructs a new QPointF object.
///
/// ``` double xpos, double ypos ```
QPointF* q_pointf_new5(double xpos, double ypos) {
    return QPointF_new5(xpos, ypos);
}

/// q_pointf_new6 constructs a new QPointF object.
///
/// ``` QPointF* param1 ```
QPointF* q_pointf_new6(void* param1) {
    return QPointF_new6((QPointF*)param1);
}

/// q_pointf_copy_assign shallow copies `other` into `self`.
///
/// ``` QPointF* self, QPointF* other ```
void q_pointf_copy_assign(void* self, void* other) {
    QPointF_CopyAssign((QPointF*)self, (QPointF*)other);
}

/// q_pointf_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QPointF* self, QPointF* other ```
void q_pointf_move_assign(void* self, void* other) {
    QPointF_MoveAssign((QPointF*)self, (QPointF*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#manhattanLength)
///
/// ``` QPointF* self ```
double q_pointf_manhattan_length(void* self) {
    return QPointF_ManhattanLength((QPointF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#isNull)
///
/// ``` QPointF* self ```
bool q_pointf_is_null(void* self) {
    return QPointF_IsNull((QPointF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#x)
///
/// ``` QPointF* self ```
double q_pointf_x(void* self) {
    return QPointF_X((QPointF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#y)
///
/// ``` QPointF* self ```
double q_pointf_y(void* self) {
    return QPointF_Y((QPointF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#setX)
///
/// ``` QPointF* self, double x ```
void q_pointf_set_x(void* self, double x) {
    QPointF_SetX((QPointF*)self, x);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#setY)
///
/// ``` QPointF* self, double y ```
void q_pointf_set_y(void* self, double y) {
    QPointF_SetY((QPointF*)self, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#transposed)
///
/// ``` QPointF* self ```
QPointF* q_pointf_transposed(void* self) {
    return QPointF_Transposed((QPointF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#operator+=)
///
/// ``` QPointF* self, QPointF* p ```
QPointF* q_pointf_operator_plus_assign(void* self, void* p) {
    return QPointF_OperatorPlusAssign((QPointF*)self, (QPointF*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#operator-=)
///
/// ``` QPointF* self, QPointF* p ```
QPointF* q_pointf_operator_minus_assign(void* self, void* p) {
    return QPointF_OperatorMinusAssign((QPointF*)self, (QPointF*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#operator*=)
///
/// ``` QPointF* self, double c ```
QPointF* q_pointf_operator_multiply_assign(void* self, double c) {
    return QPointF_OperatorMultiplyAssign((QPointF*)self, c);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#operator/=)
///
/// ``` QPointF* self, double c ```
QPointF* q_pointf_operator_divide_assign(void* self, double c) {
    return QPointF_OperatorDivideAssign((QPointF*)self, c);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#dotProduct)
///
/// ``` QPointF* p1, QPointF* p2 ```
double q_pointf_dot_product(void* p1, void* p2) {
    return QPointF_DotProduct((QPointF*)p1, (QPointF*)p2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#toPoint)
///
/// ``` QPointF* self ```
QPoint* q_pointf_to_point(void* self) {
    return QPointF_ToPoint((QPointF*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QPointF* self ```
void q_pointf_delete(void* self) {
    QPointF_Delete((QPointF*)(self));
}