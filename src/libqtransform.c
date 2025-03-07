#include "libqline.hpp"
#include "libqpainterpath.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqvariant.hpp"
#include "libqtransform.hpp"
#include "libqtransform.h"

/// https://doc.qt.io/qt-6/qtransform.html

/// q_transform_new constructs a new QTransform object.
///
/// ``` QTransform* other ```
QTransform* q_transform_new(void* other) {
    return QTransform_new((QTransform*)other);
}

/// q_transform_new2 constructs a new QTransform object and invalidates the source QTransform object.
///
/// ``` QTransform* other ```
QTransform* q_transform_new2(void* other) {
    return QTransform_new2((QTransform*)other);
}

/// q_transform_new3 constructs a new QTransform object.
///
/// ``` enum Qt__Initialization param1 ```
QTransform* q_transform_new3(int64_t param1) {
    return QTransform_new3(param1);
}

/// q_transform_new4 constructs a new QTransform object.
///
///
QTransform* q_transform_new4() {
    return QTransform_new4();
}

/// q_transform_new5 constructs a new QTransform object.
///
/// ``` double h11, double h12, double h13, double h21, double h22, double h23, double h31, double h32, double h33 ```
QTransform* q_transform_new5(double h11, double h12, double h13, double h21, double h22, double h23, double h31, double h32, double h33) {
    return QTransform_new5(h11, h12, h13, h21, h22, h23, h31, h32, h33);
}

/// q_transform_new6 constructs a new QTransform object.
///
/// ``` double h11, double h12, double h21, double h22, double dx, double dy ```
QTransform* q_transform_new6(double h11, double h12, double h21, double h22, double dx, double dy) {
    return QTransform_new6(h11, h12, h21, h22, dx, dy);
}

/// q_transform_new7 constructs a new QTransform object.
///
/// ``` QTransform* other ```
QTransform* q_transform_new7(void* other) {
    return QTransform_new7((QTransform*)other);
}

/// q_transform_copy_assign shallow copies `other` into `self`.
///
/// ``` QTransform* self, QTransform* other ```
void q_transform_copy_assign(void* self, void* other) {
    QTransform_CopyAssign((QTransform*)self, (QTransform*)other);
}

/// q_transform_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QTransform* self, QTransform* other ```
void q_transform_move_assign(void* self, void* other) {
    QTransform_MoveAssign((QTransform*)self, (QTransform*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator=)
///
/// ``` QTransform* self, QTransform* param1 ```
void q_transform_operator_assign(void* self, void* param1) {
    QTransform_OperatorAssign((QTransform*)self, (QTransform*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#isAffine)
///
/// ``` QTransform* self ```
bool q_transform_is_affine(void* self) {
    return QTransform_IsAffine((QTransform*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#isIdentity)
///
/// ``` QTransform* self ```
bool q_transform_is_identity(void* self) {
    return QTransform_IsIdentity((QTransform*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#isInvertible)
///
/// ``` QTransform* self ```
bool q_transform_is_invertible(void* self) {
    return QTransform_IsInvertible((QTransform*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#isScaling)
///
/// ``` QTransform* self ```
bool q_transform_is_scaling(void* self) {
    return QTransform_IsScaling((QTransform*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#isRotating)
///
/// ``` QTransform* self ```
bool q_transform_is_rotating(void* self) {
    return QTransform_IsRotating((QTransform*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#isTranslating)
///
/// ``` QTransform* self ```
bool q_transform_is_translating(void* self) {
    return QTransform_IsTranslating((QTransform*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#type)
///
/// ``` QTransform* self ```
int64_t q_transform_type(void* self) {
    return QTransform_Type((QTransform*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#determinant)
///
/// ``` QTransform* self ```
double q_transform_determinant(void* self) {
    return QTransform_Determinant((QTransform*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m11)
///
/// ``` QTransform* self ```
double q_transform_m11(void* self) {
    return QTransform_M11((QTransform*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m12)
///
/// ``` QTransform* self ```
double q_transform_m12(void* self) {
    return QTransform_M12((QTransform*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m13)
///
/// ``` QTransform* self ```
double q_transform_m13(void* self) {
    return QTransform_M13((QTransform*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m21)
///
/// ``` QTransform* self ```
double q_transform_m21(void* self) {
    return QTransform_M21((QTransform*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m22)
///
/// ``` QTransform* self ```
double q_transform_m22(void* self) {
    return QTransform_M22((QTransform*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m23)
///
/// ``` QTransform* self ```
double q_transform_m23(void* self) {
    return QTransform_M23((QTransform*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m31)
///
/// ``` QTransform* self ```
double q_transform_m31(void* self) {
    return QTransform_M31((QTransform*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m32)
///
/// ``` QTransform* self ```
double q_transform_m32(void* self) {
    return QTransform_M32((QTransform*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m33)
///
/// ``` QTransform* self ```
double q_transform_m33(void* self) {
    return QTransform_M33((QTransform*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#dx)
///
/// ``` QTransform* self ```
double q_transform_dx(void* self) {
    return QTransform_Dx((QTransform*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#dy)
///
/// ``` QTransform* self ```
double q_transform_dy(void* self) {
    return QTransform_Dy((QTransform*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#setMatrix)
///
/// ``` QTransform* self, double m11, double m12, double m13, double m21, double m22, double m23, double m31, double m32, double m33 ```
void q_transform_set_matrix(void* self, double m11, double m12, double m13, double m21, double m22, double m23, double m31, double m32, double m33) {
    QTransform_SetMatrix((QTransform*)self, m11, m12, m13, m21, m22, m23, m31, m32, m33);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#inverted)
///
/// ``` QTransform* self ```
QTransform* q_transform_inverted(void* self) {
    return QTransform_Inverted((QTransform*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#adjoint)
///
/// ``` QTransform* self ```
QTransform* q_transform_adjoint(void* self) {
    return QTransform_Adjoint((QTransform*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#transposed)
///
/// ``` QTransform* self ```
QTransform* q_transform_transposed(void* self) {
    return QTransform_Transposed((QTransform*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#translate)
///
/// ``` QTransform* self, double dx, double dy ```
QTransform* q_transform_translate(void* self, double dx, double dy) {
    return QTransform_Translate((QTransform*)self, dx, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#scale)
///
/// ``` QTransform* self, double sx, double sy ```
QTransform* q_transform_scale(void* self, double sx, double sy) {
    return QTransform_Scale((QTransform*)self, sx, sy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#shear)
///
/// ``` QTransform* self, double sh, double sv ```
QTransform* q_transform_shear(void* self, double sh, double sv) {
    return QTransform_Shear((QTransform*)self, sh, sv);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#rotate)
///
/// ``` QTransform* self, double a ```
QTransform* q_transform_rotate(void* self, double a) {
    return QTransform_Rotate((QTransform*)self, a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#rotateRadians)
///
/// ``` QTransform* self, double a ```
QTransform* q_transform_rotate_radians(void* self, double a) {
    return QTransform_RotateRadians((QTransform*)self, a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator==)
///
/// ``` QTransform* self, QTransform* param1 ```
bool q_transform_operator_equal(void* self, void* param1) {
    return QTransform_OperatorEqual((QTransform*)self, (QTransform*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator!=)
///
/// ``` QTransform* self, QTransform* param1 ```
bool q_transform_operator_not_equal(void* self, void* param1) {
    return QTransform_OperatorNotEqual((QTransform*)self, (QTransform*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator*=)
///
/// ``` QTransform* self, QTransform* param1 ```
QTransform* q_transform_operator_multiply_assign(void* self, void* param1) {
    return QTransform_OperatorMultiplyAssign((QTransform*)self, (QTransform*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator*)
///
/// ``` QTransform* self, QTransform* o ```
QTransform* q_transform_operator_multiply(void* self, void* o) {
    return QTransform_OperatorMultiply((QTransform*)self, (QTransform*)o);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator QVariant)
///
/// ``` QTransform* self ```
QVariant* q_transform_to_q_variant(void* self) {
    return QTransform_ToQVariant((QTransform*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#reset)
///
/// ``` QTransform* self ```
void q_transform_reset(void* self) {
    QTransform_Reset((QTransform*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
///
/// ``` QTransform* self, QPoint* p ```
QPoint* q_transform_map(void* self, void* p) {
    return QTransform_Map((QTransform*)self, (QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
///
/// ``` QTransform* self, QPointF* p ```
QPointF* q_transform_map_with_q_point_f(void* self, void* p) {
    return QTransform_MapWithQPointF((QTransform*)self, (QPointF*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
///
/// ``` QTransform* self, QLine* l ```
QLine* q_transform_map_with_q_line(void* self, void* l) {
    return QTransform_MapWithQLine((QTransform*)self, (QLine*)l);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
///
/// ``` QTransform* self, QLineF* l ```
QLineF* q_transform_map_with_q_line_f(void* self, void* l) {
    return QTransform_MapWithQLineF((QTransform*)self, (QLineF*)l);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
///
/// ``` QTransform* self, QRegion* r ```
QRegion* q_transform_map_with_q_region(void* self, void* r) {
    return QTransform_MapWithQRegion((QTransform*)self, (QRegion*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
///
/// ``` QTransform* self, QPainterPath* p ```
QPainterPath* q_transform_map_with_q_painter_path(void* self, void* p) {
    return QTransform_MapWithQPainterPath((QTransform*)self, (QPainterPath*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#mapRect)
///
/// ``` QTransform* self, QRect* param1 ```
QRect* q_transform_map_rect(void* self, void* param1) {
    return QTransform_MapRect((QTransform*)self, (QRect*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#mapRect)
///
/// ``` QTransform* self, QRectF* param1 ```
QRectF* q_transform_map_rect_with_q_rect_f(void* self, void* param1) {
    return QTransform_MapRectWithQRectF((QTransform*)self, (QRectF*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
///
/// ``` QTransform* self, int x, int y, int* tx, int* ty ```
void q_transform_map2(void* self, int x, int y, int* tx, int* ty) {
    QTransform_Map2((QTransform*)self, x, y, tx, ty);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
///
/// ``` QTransform* self, double x, double y, double* tx, double* ty ```
void q_transform_map3(void* self, double x, double y, double* tx, double* ty) {
    QTransform_Map3((QTransform*)self, x, y, tx, ty);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator*=)
///
/// ``` QTransform* self, double div ```
QTransform* q_transform_operator_multiply_assign_with_div(void* self, double div) {
    return QTransform_OperatorMultiplyAssignWithDiv((QTransform*)self, div);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator/=)
///
/// ``` QTransform* self, double div ```
QTransform* q_transform_operator_divide_assign(void* self, double div) {
    return QTransform_OperatorDivideAssign((QTransform*)self, div);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator+=)
///
/// ``` QTransform* self, double div ```
QTransform* q_transform_operator_plus_assign(void* self, double div) {
    return QTransform_OperatorPlusAssign((QTransform*)self, div);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator-=)
///
/// ``` QTransform* self, double div ```
QTransform* q_transform_operator_minus_assign(void* self, double div) {
    return QTransform_OperatorMinusAssign((QTransform*)self, div);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#fromTranslate)
///
/// ``` double dx, double dy ```
QTransform* q_transform_from_translate(double dx, double dy) {
    return QTransform_FromTranslate(dx, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#fromScale)
///
/// ``` double dx, double dy ```
QTransform* q_transform_from_scale(double dx, double dy) {
    return QTransform_FromScale(dx, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#inverted)
///
/// ``` QTransform* self, bool* invertible ```
QTransform* q_transform_inverted1(void* self, bool* invertible) {
    return QTransform_Inverted1((QTransform*)self, (bool*)invertible);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#rotate)
///
/// ``` QTransform* self, double a, enum Qt__Axis axis ```
QTransform* q_transform_rotate2(void* self, double a, int64_t axis) {
    return QTransform_Rotate2((QTransform*)self, a, axis);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#rotateRadians)
///
/// ``` QTransform* self, double a, enum Qt__Axis axis ```
QTransform* q_transform_rotate_radians2(void* self, double a, int64_t axis) {
    return QTransform_RotateRadians2((QTransform*)self, a, axis);
}

/// Delete this object from C++ memory.
///
/// ``` QTransform* self ```
void q_transform_delete(void* self) {
    QTransform_Delete((QTransform*)(self));
}