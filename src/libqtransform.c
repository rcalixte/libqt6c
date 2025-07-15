#include "libqline.hpp"
#include "libqpainterpath.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqvariant.hpp"
#include "libqtransform.hpp"
#include "libqtransform.h"

QTransform* q_transform_new(void* other) {
    return QTransform_new((QTransform*)other);
}

QTransform* q_transform_new2(void* other) {
    return QTransform_new2((QTransform*)other);
}

QTransform* q_transform_new3(int64_t param1) {
    return QTransform_new3(param1);
}

QTransform* q_transform_new4() {
    return QTransform_new4();
}

QTransform* q_transform_new5(double h11, double h12, double h13, double h21, double h22, double h23, double h31, double h32, double h33) {
    return QTransform_new5(h11, h12, h13, h21, h22, h23, h31, h32, h33);
}

QTransform* q_transform_new6(double h11, double h12, double h21, double h22, double dx, double dy) {
    return QTransform_new6(h11, h12, h21, h22, dx, dy);
}

QTransform* q_transform_new7(void* other) {
    return QTransform_new7((QTransform*)other);
}

void q_transform_copy_assign(void* self, void* other) {
    QTransform_CopyAssign((QTransform*)self, (QTransform*)other);
}

void q_transform_move_assign(void* self, void* other) {
    QTransform_MoveAssign((QTransform*)self, (QTransform*)other);
}

void q_transform_operator_assign(void* self, void* param1) {
    QTransform_OperatorAssign((QTransform*)self, (QTransform*)param1);
}

bool q_transform_is_affine(void* self) {
    return QTransform_IsAffine((QTransform*)self);
}

bool q_transform_is_identity(void* self) {
    return QTransform_IsIdentity((QTransform*)self);
}

bool q_transform_is_invertible(void* self) {
    return QTransform_IsInvertible((QTransform*)self);
}

bool q_transform_is_scaling(void* self) {
    return QTransform_IsScaling((QTransform*)self);
}

bool q_transform_is_rotating(void* self) {
    return QTransform_IsRotating((QTransform*)self);
}

bool q_transform_is_translating(void* self) {
    return QTransform_IsTranslating((QTransform*)self);
}

int64_t q_transform_type(void* self) {
    return QTransform_Type((QTransform*)self);
}

double q_transform_determinant(void* self) {
    return QTransform_Determinant((QTransform*)self);
}

double q_transform_m11(void* self) {
    return QTransform_M11((QTransform*)self);
}

double q_transform_m12(void* self) {
    return QTransform_M12((QTransform*)self);
}

double q_transform_m13(void* self) {
    return QTransform_M13((QTransform*)self);
}

double q_transform_m21(void* self) {
    return QTransform_M21((QTransform*)self);
}

double q_transform_m22(void* self) {
    return QTransform_M22((QTransform*)self);
}

double q_transform_m23(void* self) {
    return QTransform_M23((QTransform*)self);
}

double q_transform_m31(void* self) {
    return QTransform_M31((QTransform*)self);
}

double q_transform_m32(void* self) {
    return QTransform_M32((QTransform*)self);
}

double q_transform_m33(void* self) {
    return QTransform_M33((QTransform*)self);
}

double q_transform_dx(void* self) {
    return QTransform_Dx((QTransform*)self);
}

double q_transform_dy(void* self) {
    return QTransform_Dy((QTransform*)self);
}

void q_transform_set_matrix(void* self, double m11, double m12, double m13, double m21, double m22, double m23, double m31, double m32, double m33) {
    QTransform_SetMatrix((QTransform*)self, m11, m12, m13, m21, m22, m23, m31, m32, m33);
}

QTransform* q_transform_inverted(void* self) {
    return QTransform_Inverted((QTransform*)self);
}

QTransform* q_transform_adjoint(void* self) {
    return QTransform_Adjoint((QTransform*)self);
}

QTransform* q_transform_transposed(void* self) {
    return QTransform_Transposed((QTransform*)self);
}

QTransform* q_transform_translate(void* self, double dx, double dy) {
    return QTransform_Translate((QTransform*)self, dx, dy);
}

QTransform* q_transform_scale(void* self, double sx, double sy) {
    return QTransform_Scale((QTransform*)self, sx, sy);
}

QTransform* q_transform_shear(void* self, double sh, double sv) {
    return QTransform_Shear((QTransform*)self, sh, sv);
}

QTransform* q_transform_rotate(void* self, double a, int64_t axis, double distanceToPlane) {
    return QTransform_Rotate((QTransform*)self, a, axis, distanceToPlane);
}

QTransform* q_transform_rotate2(void* self, double a) {
    return QTransform_Rotate2((QTransform*)self, a);
}

QTransform* q_transform_rotate_radians(void* self, double a, int64_t axis, double distanceToPlane) {
    return QTransform_RotateRadians((QTransform*)self, a, axis, distanceToPlane);
}

QTransform* q_transform_rotate_radians2(void* self, double a) {
    return QTransform_RotateRadians2((QTransform*)self, a);
}

bool q_transform_operator_equal(void* self, void* param1) {
    return QTransform_OperatorEqual((QTransform*)self, (QTransform*)param1);
}

bool q_transform_operator_not_equal(void* self, void* param1) {
    return QTransform_OperatorNotEqual((QTransform*)self, (QTransform*)param1);
}

QTransform* q_transform_operator_multiply_assign(void* self, void* param1) {
    return QTransform_OperatorMultiplyAssign((QTransform*)self, (QTransform*)param1);
}

QTransform* q_transform_operator_multiply(void* self, void* o) {
    return QTransform_OperatorMultiply((QTransform*)self, (QTransform*)o);
}

QVariant* q_transform_to_q_variant(void* self) {
    return QTransform_ToQVariant((QTransform*)self);
}

void q_transform_reset(void* self) {
    QTransform_Reset((QTransform*)self);
}

QPoint* q_transform_map(void* self, void* p) {
    return QTransform_Map((QTransform*)self, (QPoint*)p);
}

QPointF* q_transform_map2(void* self, void* p) {
    return QTransform_Map2((QTransform*)self, (QPointF*)p);
}

QLine* q_transform_map3(void* self, void* l) {
    return QTransform_Map3((QTransform*)self, (QLine*)l);
}

QLineF* q_transform_map4(void* self, void* l) {
    return QTransform_Map4((QTransform*)self, (QLineF*)l);
}

QRegion* q_transform_map7(void* self, void* r) {
    return QTransform_Map7((QTransform*)self, (QRegion*)r);
}

QPainterPath* q_transform_map8(void* self, void* p) {
    return QTransform_Map8((QTransform*)self, (QPainterPath*)p);
}

QRect* q_transform_map_rect(void* self, void* param1) {
    return QTransform_MapRect((QTransform*)self, (QRect*)param1);
}

QRectF* q_transform_map_rect2(void* self, void* param1) {
    return QTransform_MapRect2((QTransform*)self, (QRectF*)param1);
}

void q_transform_map9(void* self, int x, int y, int* tx, int* ty) {
    QTransform_Map9((QTransform*)self, x, y, tx, ty);
}

void q_transform_map10(void* self, double x, double y, double* tx, double* ty) {
    QTransform_Map10((QTransform*)self, x, y, tx, ty);
}

QTransform* q_transform_operator_multiply_assign2(void* self, double div) {
    return QTransform_OperatorMultiplyAssign2((QTransform*)self, div);
}

QTransform* q_transform_operator_divide_assign(void* self, double div) {
    return QTransform_OperatorDivideAssign((QTransform*)self, div);
}

QTransform* q_transform_operator_plus_assign(void* self, double div) {
    return QTransform_OperatorPlusAssign((QTransform*)self, div);
}

QTransform* q_transform_operator_minus_assign(void* self, double div) {
    return QTransform_OperatorMinusAssign((QTransform*)self, div);
}

QTransform* q_transform_from_translate(double dx, double dy) {
    return QTransform_FromTranslate(dx, dy);
}

QTransform* q_transform_from_scale(double dx, double dy) {
    return QTransform_FromScale(dx, dy);
}

QTransform* q_transform_inverted1(void* self, bool* invertible) {
    return QTransform_Inverted1((QTransform*)self, (bool*)invertible);
}

QTransform* q_transform_rotate22(void* self, double a, int64_t axis) {
    return QTransform_Rotate22((QTransform*)self, a, axis);
}

QTransform* q_transform_rotate_radians22(void* self, double a, int64_t axis) {
    return QTransform_RotateRadians22((QTransform*)self, a, axis);
}

void q_transform_delete(void* self) {
    QTransform_Delete((QTransform*)(self));
}
