#pragma once
#ifndef SRCQT6C_LIBQTRANSFORM_H
#define SRCQT6C_LIBQTRANSFORM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qtransform.html

/// q_transform_new constructs a new QTransform object.
///
/// ``` QTransform* other ```
QTransform* q_transform_new(void* other);

/// q_transform_new2 constructs a new QTransform object and invalidates the source QTransform object.
///
/// ``` QTransform* other ```
QTransform* q_transform_new2(void* other);

/// q_transform_new3 constructs a new QTransform object.
///
/// ``` enum Qt__Initialization param1 ```
QTransform* q_transform_new3(int64_t param1);

/// q_transform_new4 constructs a new QTransform object.
///
///
QTransform* q_transform_new4();

/// q_transform_new5 constructs a new QTransform object.
///
/// ``` double h11, double h12, double h13, double h21, double h22, double h23, double h31, double h32, double h33 ```
QTransform* q_transform_new5(double h11, double h12, double h13, double h21, double h22, double h23, double h31, double h32, double h33);

/// q_transform_new6 constructs a new QTransform object.
///
/// ``` double h11, double h12, double h21, double h22, double dx, double dy ```
QTransform* q_transform_new6(double h11, double h12, double h21, double h22, double dx, double dy);

/// q_transform_new7 constructs a new QTransform object.
///
/// ``` QTransform* other ```
QTransform* q_transform_new7(void* other);

/// q_transform_copy_assign shallow copies `other` into `self`.
///
/// ``` QTransform* self, QTransform* other ```
void q_transform_copy_assign(void* self, void* other);

/// q_transform_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QTransform* self, QTransform* other ```
void q_transform_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator=)
///
/// ``` QTransform* self, QTransform* param1 ```
void q_transform_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#isAffine)
///
/// ``` QTransform* self ```
bool q_transform_is_affine(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#isIdentity)
///
/// ``` QTransform* self ```
bool q_transform_is_identity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#isInvertible)
///
/// ``` QTransform* self ```
bool q_transform_is_invertible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#isScaling)
///
/// ``` QTransform* self ```
bool q_transform_is_scaling(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#isRotating)
///
/// ``` QTransform* self ```
bool q_transform_is_rotating(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#isTranslating)
///
/// ``` QTransform* self ```
bool q_transform_is_translating(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#type)
///
/// ``` QTransform* self ```
int64_t q_transform_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#determinant)
///
/// ``` QTransform* self ```
double q_transform_determinant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m11)
///
/// ``` QTransform* self ```
double q_transform_m11(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m12)
///
/// ``` QTransform* self ```
double q_transform_m12(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m13)
///
/// ``` QTransform* self ```
double q_transform_m13(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m21)
///
/// ``` QTransform* self ```
double q_transform_m21(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m22)
///
/// ``` QTransform* self ```
double q_transform_m22(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m23)
///
/// ``` QTransform* self ```
double q_transform_m23(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m31)
///
/// ``` QTransform* self ```
double q_transform_m31(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m32)
///
/// ``` QTransform* self ```
double q_transform_m32(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m33)
///
/// ``` QTransform* self ```
double q_transform_m33(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#dx)
///
/// ``` QTransform* self ```
double q_transform_dx(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#dy)
///
/// ``` QTransform* self ```
double q_transform_dy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#setMatrix)
///
/// ``` QTransform* self, double m11, double m12, double m13, double m21, double m22, double m23, double m31, double m32, double m33 ```
void q_transform_set_matrix(void* self, double m11, double m12, double m13, double m21, double m22, double m23, double m31, double m32, double m33);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#inverted)
///
/// ``` QTransform* self ```
QTransform* q_transform_inverted(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#adjoint)
///
/// ``` QTransform* self ```
QTransform* q_transform_adjoint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#transposed)
///
/// ``` QTransform* self ```
QTransform* q_transform_transposed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#translate)
///
/// ``` QTransform* self, double dx, double dy ```
QTransform* q_transform_translate(void* self, double dx, double dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#scale)
///
/// ``` QTransform* self, double sx, double sy ```
QTransform* q_transform_scale(void* self, double sx, double sy);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#shear)
///
/// ``` QTransform* self, double sh, double sv ```
QTransform* q_transform_shear(void* self, double sh, double sv);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#rotate)
///
/// ``` QTransform* self, double a, enum Qt__Axis axis, double distanceToPlane ```
QTransform* q_transform_rotate(void* self, double a, int64_t axis, double distanceToPlane);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#rotate)
///
/// ``` QTransform* self, double a ```
QTransform* q_transform_rotate_with_qreal(void* self, double a);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#rotateRadians)
///
/// ``` QTransform* self, double a, enum Qt__Axis axis, double distanceToPlane ```
QTransform* q_transform_rotate_radians(void* self, double a, int64_t axis, double distanceToPlane);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#rotateRadians)
///
/// ``` QTransform* self, double a ```
QTransform* q_transform_rotate_radians_with_qreal(void* self, double a);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator==)
///
/// ``` QTransform* self, QTransform* param1 ```
bool q_transform_operator_equal(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator!=)
///
/// ``` QTransform* self, QTransform* param1 ```
bool q_transform_operator_not_equal(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator*=)
///
/// ``` QTransform* self, QTransform* param1 ```
QTransform* q_transform_operator_multiply_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator*)
///
/// ``` QTransform* self, QTransform* o ```
QTransform* q_transform_operator_multiply(void* self, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator QVariant)
///
/// ``` QTransform* self ```
QVariant* q_transform_to_q_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#reset)
///
/// ``` QTransform* self ```
void q_transform_reset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
///
/// ``` QTransform* self, QPoint* p ```
QPoint* q_transform_map(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
///
/// ``` QTransform* self, QPointF* p ```
QPointF* q_transform_map_with_q_point_f(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
///
/// ``` QTransform* self, QLine* l ```
QLine* q_transform_map_with_q_line(void* self, void* l);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
///
/// ``` QTransform* self, QLineF* l ```
QLineF* q_transform_map_with_q_line_f(void* self, void* l);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
///
/// ``` QTransform* self, QRegion* r ```
QRegion* q_transform_map_with_q_region(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
///
/// ``` QTransform* self, QPainterPath* p ```
QPainterPath* q_transform_map_with_q_painter_path(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#mapRect)
///
/// ``` QTransform* self, QRect* param1 ```
QRect* q_transform_map_rect(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#mapRect)
///
/// ``` QTransform* self, QRectF* param1 ```
QRectF* q_transform_map_rect_with_q_rect_f(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
///
/// ``` QTransform* self, int x, int y, int* tx, int* ty ```
void q_transform_map2(void* self, int x, int y, int* tx, int* ty);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
///
/// ``` QTransform* self, double x, double y, double* tx, double* ty ```
void q_transform_map3(void* self, double x, double y, double* tx, double* ty);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator*=)
///
/// ``` QTransform* self, double div ```
QTransform* q_transform_operator_multiply_assign_with_div(void* self, double div);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator/=)
///
/// ``` QTransform* self, double div ```
QTransform* q_transform_operator_divide_assign(void* self, double div);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator+=)
///
/// ``` QTransform* self, double div ```
QTransform* q_transform_operator_plus_assign(void* self, double div);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator-=)
///
/// ``` QTransform* self, double div ```
QTransform* q_transform_operator_minus_assign(void* self, double div);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#fromTranslate)
///
/// ``` double dx, double dy ```
QTransform* q_transform_from_translate(double dx, double dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#fromScale)
///
/// ``` double dx, double dy ```
QTransform* q_transform_from_scale(double dx, double dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#inverted)
///
/// ``` QTransform* self, bool* invertible ```
QTransform* q_transform_inverted1(void* self, bool* invertible);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#rotate)
///
/// ``` QTransform* self, double a, enum Qt__Axis axis ```
QTransform* q_transform_rotate2(void* self, double a, int64_t axis);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#rotateRadians)
///
/// ``` QTransform* self, double a, enum Qt__Axis axis ```
QTransform* q_transform_rotate_radians2(void* self, double a, int64_t axis);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#dtor.QTransform)
///
/// Delete this object from C++ memory.
///
/// ``` QTransform* self ```
void q_transform_delete(void* self);

/// https://doc.qt.io/qt-6/qtransform.html#types

typedef enum {
    QTRANSFORM_TRANSFORMATIONTYPE_TXNONE = 0,
    QTRANSFORM_TRANSFORMATIONTYPE_TXTRANSLATE = 1,
    QTRANSFORM_TRANSFORMATIONTYPE_TXSCALE = 2,
    QTRANSFORM_TRANSFORMATIONTYPE_TXROTATE = 4,
    QTRANSFORM_TRANSFORMATIONTYPE_TXSHEAR = 8,
    QTRANSFORM_TRANSFORMATIONTYPE_TXPROJECT = 16
} QTransform__TransformationType;

#endif
