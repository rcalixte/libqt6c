#pragma once
#ifndef SRCQT6C_LIBQTRANSFORM_H
#define SRCQT6C_LIBQTRANSFORM_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qtransform.html

/// q_transform_new constructs a new QTransform object.
///
/// @param other QTransform*
QTransform* q_transform_new(void* other);

/// q_transform_new2 constructs a new QTransform object and invalidates the source QTransform object.
///
/// @param other QTransform*
QTransform* q_transform_new2(void* other);

/// q_transform_new3 constructs a new QTransform object.
///
/// @param param1 enum Qt__Initialization
QTransform* q_transform_new3(int32_t param1);

/// q_transform_new4 constructs a new QTransform object.
///
QTransform* q_transform_new4();

/// q_transform_new5 constructs a new QTransform object.
///
/// @param h11 double
/// @param h12 double
/// @param h13 double
/// @param h21 double
/// @param h22 double
/// @param h23 double
/// @param h31 double
/// @param h32 double
/// @param h33 double
QTransform* q_transform_new5(double h11, double h12, double h13, double h21, double h22, double h23, double h31, double h32, double h33);

/// q_transform_new6 constructs a new QTransform object.
///
/// @param h11 double
/// @param h12 double
/// @param h21 double
/// @param h22 double
/// @param dx double
/// @param dy double
QTransform* q_transform_new6(double h11, double h12, double h21, double h22, double dx, double dy);

/// q_transform_new7 constructs a new QTransform object.
///
/// @param other QTransform*
QTransform* q_transform_new7(void* other);

/// q_transform_copy_assign shallow copies `other` into `self`.
///
/// @param self QTransform*
/// @param other QTransform*
void q_transform_copy_assign(void* self, void* other);

/// q_transform_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QTransform*
/// @param other QTransform*
void q_transform_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator-eq)
///
/// @param self QTransform*
/// @param param1 QTransform*
void q_transform_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#isAffine)
///
/// @param self QTransform*
bool q_transform_is_affine(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#isIdentity)
///
/// @param self QTransform*
bool q_transform_is_identity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#isInvertible)
///
/// @param self QTransform*
bool q_transform_is_invertible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#isScaling)
///
/// @param self QTransform*
bool q_transform_is_scaling(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#isRotating)
///
/// @param self QTransform*
bool q_transform_is_rotating(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#isTranslating)
///
/// @param self QTransform*
bool q_transform_is_translating(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#type)
///
/// @param self QTransform*
///
/// @return enum QTransform__TransformationType
int32_t q_transform_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#determinant)
///
/// @param self QTransform*
double q_transform_determinant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m11)
///
/// @param self QTransform*
double q_transform_m11(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m12)
///
/// @param self QTransform*
double q_transform_m12(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m13)
///
/// @param self QTransform*
double q_transform_m13(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m21)
///
/// @param self QTransform*
double q_transform_m21(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m22)
///
/// @param self QTransform*
double q_transform_m22(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m23)
///
/// @param self QTransform*
double q_transform_m23(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m31)
///
/// @param self QTransform*
double q_transform_m31(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m32)
///
/// @param self QTransform*
double q_transform_m32(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#m33)
///
/// @param self QTransform*
double q_transform_m33(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#dx)
///
/// @param self QTransform*
double q_transform_dx(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#dy)
///
/// @param self QTransform*
double q_transform_dy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#setMatrix)
///
/// @param self QTransform*
/// @param m11 double
/// @param m12 double
/// @param m13 double
/// @param m21 double
/// @param m22 double
/// @param m23 double
/// @param m31 double
/// @param m32 double
/// @param m33 double
void q_transform_set_matrix(void* self, double m11, double m12, double m13, double m21, double m22, double m23, double m31, double m32, double m33);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#inverted)
///
/// @param self QTransform*
QTransform* q_transform_inverted(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#adjoint)
///
/// @param self QTransform*
QTransform* q_transform_adjoint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#transposed)
///
/// @param self QTransform*
QTransform* q_transform_transposed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#translate)
///
/// @param self QTransform*
/// @param dx double
/// @param dy double
QTransform* q_transform_translate(void* self, double dx, double dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#scale)
///
/// @param self QTransform*
/// @param sx double
/// @param sy double
QTransform* q_transform_scale(void* self, double sx, double sy);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#shear)
///
/// @param self QTransform*
/// @param sh double
/// @param sv double
QTransform* q_transform_shear(void* self, double sh, double sv);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#rotate)
///
/// @param self QTransform*
/// @param a double
/// @param axis enum Qt__Axis
/// @param distanceToPlane double
QTransform* q_transform_rotate(void* self, double a, int32_t axis, double distanceToPlane);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#rotate)
///
/// @param self QTransform*
/// @param a double
QTransform* q_transform_rotate2(void* self, double a);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#rotateRadians)
///
/// @param self QTransform*
/// @param a double
/// @param axis enum Qt__Axis
/// @param distanceToPlane double
QTransform* q_transform_rotate_radians(void* self, double a, int32_t axis, double distanceToPlane);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#rotateRadians)
///
/// @param self QTransform*
/// @param a double
QTransform* q_transform_rotate_radians2(void* self, double a);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator-eq-eq)
///
/// @param self QTransform*
/// @param param1 QTransform*
bool q_transform_operator_equal(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator-not-eq)
///
/// @param self QTransform*
/// @param param1 QTransform*
bool q_transform_operator_not_equal(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator-2a-eq)
///
/// @param self QTransform*
/// @param param1 QTransform*
QTransform* q_transform_operator_multiply_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator-2a)
///
/// @param self QTransform*
/// @param o QTransform*
QTransform* q_transform_operator_multiply(void* self, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator)
///
/// @param self QTransform*
QVariant* q_transform_to_q_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#reset)
///
/// @param self QTransform*
void q_transform_reset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
///
/// @param self QTransform*
/// @param p QPoint*
QPoint* q_transform_map(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
///
/// @param self QTransform*
/// @param p QPointF*
QPointF* q_transform_map2(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
///
/// @param self QTransform*
/// @param l QLine*
QLine* q_transform_map3(void* self, void* l);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
///
/// @param self QTransform*
/// @param l QLineF*
QLineF* q_transform_map4(void* self, void* l);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
///
/// @param self QTransform*
/// @param r QRegion*
QRegion* q_transform_map7(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
///
/// @param self QTransform*
/// @param p QPainterPath*
QPainterPath* q_transform_map8(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#mapRect)
///
/// @param self QTransform*
/// @param param1 QRect*
QRect* q_transform_map_rect(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#mapRect)
///
/// @param self QTransform*
/// @param param1 QRectF*
QRectF* q_transform_map_rect2(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
///
/// @param self QTransform*
/// @param x int
/// @param y int
/// @param tx int*
/// @param ty int*
void q_transform_map9(void* self, int x, int y, int* tx, int* ty);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#map)
///
/// @param self QTransform*
/// @param x double
/// @param y double
/// @param tx double*
/// @param ty double*
void q_transform_map10(void* self, double x, double y, double* tx, double* ty);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator-2a-eq)
///
/// @param self QTransform*
/// @param div double
QTransform* q_transform_operator_multiply_assign2(void* self, double div);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator-2f-eq)
///
/// @param self QTransform*
/// @param div double
QTransform* q_transform_operator_divide_assign(void* self, double div);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator-2b-eq)
///
/// @param self QTransform*
/// @param div double
QTransform* q_transform_operator_plus_assign(void* self, double div);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#operator--eq)
///
/// @param self QTransform*
/// @param div double
QTransform* q_transform_operator_minus_assign(void* self, double div);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#fromTranslate)
///
/// @param dx double
/// @param dy double
QTransform* q_transform_from_translate(double dx, double dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#fromScale)
///
/// @param dx double
/// @param dy double
QTransform* q_transform_from_scale(double dx, double dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#inverted)
///
/// @param self QTransform*
/// @param invertible bool*
QTransform* q_transform_inverted1(void* self, bool* invertible);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#rotate)
///
/// @param self QTransform*
/// @param a double
/// @param axis enum Qt__Axis
QTransform* q_transform_rotate22(void* self, double a, int32_t axis);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#rotateRadians)
///
/// @param self QTransform*
/// @param a double
/// @param axis enum Qt__Axis
QTransform* q_transform_rotate_radians22(void* self, double a, int32_t axis);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransform.html#dtor.QTransform)
///
/// Delete this object from C++ memory.
///
/// @param self QTransform*
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
