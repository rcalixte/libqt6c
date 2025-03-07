#pragma once
#ifndef SRCQT6C_LIBQTRANSFORM_H
#define SRCQT6C_LIBQTRANSFORM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqline.h"
#include "libqpainterpath.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqregion.h"
#include "libqvariant.h"

QTransform* q_transform_new(void* other);
QTransform* q_transform_new2(void* other);
QTransform* q_transform_new3(int64_t param1);
QTransform* q_transform_new4();
QTransform* q_transform_new5(double h11, double h12, double h13, double h21, double h22, double h23, double h31, double h32, double h33);
QTransform* q_transform_new6(double h11, double h12, double h21, double h22, double dx, double dy);
QTransform* q_transform_new7(void* other);
void q_transform_copy_assign(void* self, void* other);
void q_transform_move_assign(void* self, void* other);
void q_transform_operator_assign(void* self, void* param1);
bool q_transform_is_affine(void* self);
bool q_transform_is_identity(void* self);
bool q_transform_is_invertible(void* self);
bool q_transform_is_scaling(void* self);
bool q_transform_is_rotating(void* self);
bool q_transform_is_translating(void* self);
int64_t q_transform_type(void* self);
double q_transform_determinant(void* self);
double q_transform_m11(void* self);
double q_transform_m12(void* self);
double q_transform_m13(void* self);
double q_transform_m21(void* self);
double q_transform_m22(void* self);
double q_transform_m23(void* self);
double q_transform_m31(void* self);
double q_transform_m32(void* self);
double q_transform_m33(void* self);
double q_transform_dx(void* self);
double q_transform_dy(void* self);
void q_transform_set_matrix(void* self, double m11, double m12, double m13, double m21, double m22, double m23, double m31, double m32, double m33);
QTransform* q_transform_inverted(void* self);
QTransform* q_transform_adjoint(void* self);
QTransform* q_transform_transposed(void* self);
QTransform* q_transform_translate(void* self, double dx, double dy);
QTransform* q_transform_scale(void* self, double sx, double sy);
QTransform* q_transform_shear(void* self, double sh, double sv);
QTransform* q_transform_rotate(void* self, double a);
QTransform* q_transform_rotate_radians(void* self, double a);
bool q_transform_operator_equal(void* self, void* param1);
bool q_transform_operator_not_equal(void* self, void* param1);
QTransform* q_transform_operator_multiply_assign(void* self, void* param1);
QTransform* q_transform_operator_multiply(void* self, void* o);
QVariant* q_transform_to_q_variant(void* self);
void q_transform_reset(void* self);
QPoint* q_transform_map(void* self, void* p);
QPointF* q_transform_map_with_q_point_f(void* self, void* p);
QLine* q_transform_map_with_q_line(void* self, void* l);
QLineF* q_transform_map_with_q_line_f(void* self, void* l);
QRegion* q_transform_map_with_q_region(void* self, void* r);
QPainterPath* q_transform_map_with_q_painter_path(void* self, void* p);
QRect* q_transform_map_rect(void* self, void* param1);
QRectF* q_transform_map_rect_with_q_rect_f(void* self, void* param1);
void q_transform_map2(void* self, int x, int y, int* tx, int* ty);
void q_transform_map3(void* self, double x, double y, double* tx, double* ty);
QTransform* q_transform_operator_multiply_assign_with_div(void* self, double div);
QTransform* q_transform_operator_divide_assign(void* self, double div);
QTransform* q_transform_operator_plus_assign(void* self, double div);
QTransform* q_transform_operator_minus_assign(void* self, double div);
QTransform* q_transform_from_translate(double dx, double dy);
QTransform* q_transform_from_scale(double dx, double dy);
QTransform* q_transform_inverted1(void* self, bool* invertible);
QTransform* q_transform_rotate2(void* self, double a, int64_t axis);
QTransform* q_transform_rotate_radians2(void* self, double a, int64_t axis);
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
