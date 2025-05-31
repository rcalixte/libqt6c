#include "libqpoint.hpp"
#include "libqquaternion.hpp"
#include "libqrect.hpp"
#include "libqtransform.hpp"
#include "libqvariant.hpp"
#include "libqvectornd.hpp"
#include "libqmatrix4x4.hpp"
#include "libqmatrix4x4.h"

QMatrix4x4* q_matrix4x4_new(void* other) {
    return QMatrix4x4_new((QMatrix4x4*)other);
}

QMatrix4x4* q_matrix4x4_new2(void* other) {
    return QMatrix4x4_new2((QMatrix4x4*)other);
}

QMatrix4x4* q_matrix4x4_new3() {
    return QMatrix4x4_new3();
}

QMatrix4x4* q_matrix4x4_new4(int64_t param1) {
    return QMatrix4x4_new4(param1);
}

QMatrix4x4* q_matrix4x4_new5(float* values) {
    return QMatrix4x4_new5(values);
}

QMatrix4x4* q_matrix4x4_new6(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) {
    return QMatrix4x4_new6(m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44);
}

QMatrix4x4* q_matrix4x4_new7(float* values, int cols, int rows) {
    return QMatrix4x4_new7(values, cols, rows);
}

QMatrix4x4* q_matrix4x4_new8(void* transform) {
    return QMatrix4x4_new8((QTransform*)transform);
}

QMatrix4x4* q_matrix4x4_new9(void* param1) {
    return QMatrix4x4_new9((QMatrix4x4*)param1);
}

void q_matrix4x4_copy_assign(void* self, void* other) {
    QMatrix4x4_CopyAssign((QMatrix4x4*)self, (QMatrix4x4*)other);
}

void q_matrix4x4_move_assign(void* self, void* other) {
    QMatrix4x4_MoveAssign((QMatrix4x4*)self, (QMatrix4x4*)other);
}

QVector4D* q_matrix4x4_column(void* self, int index) {
    return QMatrix4x4_Column((QMatrix4x4*)self, index);
}

void q_matrix4x4_set_column(void* self, int index, void* value) {
    QMatrix4x4_SetColumn((QMatrix4x4*)self, index, (QVector4D*)value);
}

QVector4D* q_matrix4x4_row(void* self, int index) {
    return QMatrix4x4_Row((QMatrix4x4*)self, index);
}

void q_matrix4x4_set_row(void* self, int index, void* value) {
    QMatrix4x4_SetRow((QMatrix4x4*)self, index, (QVector4D*)value);
}

bool q_matrix4x4_is_affine(void* self) {
    return QMatrix4x4_IsAffine((QMatrix4x4*)self);
}

bool q_matrix4x4_is_identity(void* self) {
    return QMatrix4x4_IsIdentity((QMatrix4x4*)self);
}

void q_matrix4x4_set_to_identity(void* self) {
    QMatrix4x4_SetToIdentity((QMatrix4x4*)self);
}

void q_matrix4x4_fill(void* self, float value) {
    QMatrix4x4_Fill((QMatrix4x4*)self, value);
}

double q_matrix4x4_determinant(void* self) {
    return QMatrix4x4_Determinant((QMatrix4x4*)self);
}

QMatrix4x4* q_matrix4x4_inverted(void* self) {
    return QMatrix4x4_Inverted((QMatrix4x4*)self);
}

QMatrix4x4* q_matrix4x4_transposed(void* self) {
    return QMatrix4x4_Transposed((QMatrix4x4*)self);
}

QMatrix4x4* q_matrix4x4_operator_plus_assign(void* self, void* other) {
    return QMatrix4x4_OperatorPlusAssign((QMatrix4x4*)self, (QMatrix4x4*)other);
}

QMatrix4x4* q_matrix4x4_operator_minus_assign(void* self, void* other) {
    return QMatrix4x4_OperatorMinusAssign((QMatrix4x4*)self, (QMatrix4x4*)other);
}

QMatrix4x4* q_matrix4x4_operator_multiply_assign(void* self, void* other) {
    return QMatrix4x4_OperatorMultiplyAssign((QMatrix4x4*)self, (QMatrix4x4*)other);
}

QMatrix4x4* q_matrix4x4_operator_multiply_assign_with_factor(void* self, float factor) {
    return QMatrix4x4_OperatorMultiplyAssignWithFactor((QMatrix4x4*)self, factor);
}

QMatrix4x4* q_matrix4x4_operator_divide_assign(void* self, float divisor) {
    return QMatrix4x4_OperatorDivideAssign((QMatrix4x4*)self, divisor);
}

bool q_matrix4x4_operator_equal(void* self, void* other) {
    return QMatrix4x4_OperatorEqual((QMatrix4x4*)self, (QMatrix4x4*)other);
}

bool q_matrix4x4_operator_not_equal(void* self, void* other) {
    return QMatrix4x4_OperatorNotEqual((QMatrix4x4*)self, (QMatrix4x4*)other);
}

void q_matrix4x4_scale(void* self, void* vector) {
    QMatrix4x4_Scale((QMatrix4x4*)self, (QVector3D*)vector);
}

void q_matrix4x4_translate(void* self, void* vector) {
    QMatrix4x4_Translate((QMatrix4x4*)self, (QVector3D*)vector);
}

void q_matrix4x4_rotate(void* self, float angle, void* vector) {
    QMatrix4x4_Rotate((QMatrix4x4*)self, angle, (QVector3D*)vector);
}

void q_matrix4x4_scale2(void* self, float x, float y) {
    QMatrix4x4_Scale2((QMatrix4x4*)self, x, y);
}

void q_matrix4x4_scale3(void* self, float x, float y, float z) {
    QMatrix4x4_Scale3((QMatrix4x4*)self, x, y, z);
}

void q_matrix4x4_scale_with_factor(void* self, float factor) {
    QMatrix4x4_ScaleWithFactor((QMatrix4x4*)self, factor);
}

void q_matrix4x4_translate2(void* self, float x, float y) {
    QMatrix4x4_Translate2((QMatrix4x4*)self, x, y);
}

void q_matrix4x4_translate3(void* self, float x, float y, float z) {
    QMatrix4x4_Translate3((QMatrix4x4*)self, x, y, z);
}

void q_matrix4x4_rotate2(void* self, float angle, float x, float y) {
    QMatrix4x4_Rotate2((QMatrix4x4*)self, angle, x, y);
}

void q_matrix4x4_rotate_with_quaternion(void* self, void* quaternion) {
    QMatrix4x4_RotateWithQuaternion((QMatrix4x4*)self, (QQuaternion*)quaternion);
}

void q_matrix4x4_ortho(void* self, void* rect) {
    QMatrix4x4_Ortho((QMatrix4x4*)self, (QRect*)rect);
}

void q_matrix4x4_ortho_with_rect(void* self, void* rect) {
    QMatrix4x4_OrthoWithRect((QMatrix4x4*)self, (QRectF*)rect);
}

void q_matrix4x4_ortho2(void* self, float left, float right, float bottom, float top, float nearPlane, float farPlane) {
    QMatrix4x4_Ortho2((QMatrix4x4*)self, left, right, bottom, top, nearPlane, farPlane);
}

void q_matrix4x4_frustum(void* self, float left, float right, float bottom, float top, float nearPlane, float farPlane) {
    QMatrix4x4_Frustum((QMatrix4x4*)self, left, right, bottom, top, nearPlane, farPlane);
}

void q_matrix4x4_perspective(void* self, float verticalAngle, float aspectRatio, float nearPlane, float farPlane) {
    QMatrix4x4_Perspective((QMatrix4x4*)self, verticalAngle, aspectRatio, nearPlane, farPlane);
}

void q_matrix4x4_look_at(void* self, void* eye, void* center, void* up) {
    QMatrix4x4_LookAt((QMatrix4x4*)self, (QVector3D*)eye, (QVector3D*)center, (QVector3D*)up);
}

void q_matrix4x4_viewport(void* self, void* rect) {
    QMatrix4x4_Viewport((QMatrix4x4*)self, (QRectF*)rect);
}

void q_matrix4x4_viewport2(void* self, float left, float bottom, float width, float height) {
    QMatrix4x4_Viewport2((QMatrix4x4*)self, left, bottom, width, height);
}

void q_matrix4x4_flip_coordinates(void* self) {
    QMatrix4x4_FlipCoordinates((QMatrix4x4*)self);
}

void q_matrix4x4_copy_data_to(void* self, float* values) {
    QMatrix4x4_CopyDataTo((QMatrix4x4*)self, values);
}

QTransform* q_matrix4x4_to_transform(void* self) {
    return QMatrix4x4_ToTransform((QMatrix4x4*)self);
}

QTransform* q_matrix4x4_to_transform_with_distance_to_plane(void* self, float distanceToPlane) {
    return QMatrix4x4_ToTransformWithDistanceToPlane((QMatrix4x4*)self, distanceToPlane);
}

QPoint* q_matrix4x4_map(void* self, void* point) {
    return QMatrix4x4_Map((QMatrix4x4*)self, (QPoint*)point);
}

QPointF* q_matrix4x4_map_with_point(void* self, void* point) {
    return QMatrix4x4_MapWithPoint((QMatrix4x4*)self, (QPointF*)point);
}

QVector3D* q_matrix4x4_map2(void* self, void* point) {
    return QMatrix4x4_Map2((QMatrix4x4*)self, (QVector3D*)point);
}

QVector3D* q_matrix4x4_map_vector(void* self, void* vector) {
    return QMatrix4x4_MapVector((QMatrix4x4*)self, (QVector3D*)vector);
}

QVector4D* q_matrix4x4_map3(void* self, void* point) {
    return QMatrix4x4_Map3((QMatrix4x4*)self, (QVector4D*)point);
}

QRect* q_matrix4x4_map_rect(void* self, void* rect) {
    return QMatrix4x4_MapRect((QMatrix4x4*)self, (QRect*)rect);
}

QRectF* q_matrix4x4_map_rect_with_rect(void* self, void* rect) {
    return QMatrix4x4_MapRectWithRect((QMatrix4x4*)self, (QRectF*)rect);
}

float* q_matrix4x4_data(void* self) {
    return (float*)QMatrix4x4_Data((QMatrix4x4*)self);
}

const float* q_matrix4x4_data2(void* self) {
    return (float*)QMatrix4x4_Data2((QMatrix4x4*)self);
}

const float* q_matrix4x4_const_data(void* self) {
    return (float*)QMatrix4x4_ConstData((QMatrix4x4*)self);
}

void q_matrix4x4_optimize(void* self) {
    QMatrix4x4_Optimize((QMatrix4x4*)self);
}

QVariant* q_matrix4x4_to_q_variant(void* self) {
    return QMatrix4x4_ToQVariant((QMatrix4x4*)self);
}

void q_matrix4x4_projected_rotate(void* self, float angle, float x, float y, float z) {
    QMatrix4x4_ProjectedRotate((QMatrix4x4*)self, angle, x, y, z);
}

int64_t q_matrix4x4_flags(void* self) {
    return QMatrix4x4_Flags((QMatrix4x4*)self);
}

QMatrix4x4* q_matrix4x4_inverted1(void* self, bool* invertible) {
    return QMatrix4x4_Inverted1((QMatrix4x4*)self, (bool*)invertible);
}

void q_matrix4x4_rotate4(void* self, float angle, float x, float y, float z) {
    QMatrix4x4_Rotate4((QMatrix4x4*)self, angle, x, y, z);
}

void q_matrix4x4_viewport5(void* self, float left, float bottom, float width, float height, float nearPlane) {
    QMatrix4x4_Viewport5((QMatrix4x4*)self, left, bottom, width, height, nearPlane);
}

void q_matrix4x4_viewport6(void* self, float left, float bottom, float width, float height, float nearPlane, float farPlane) {
    QMatrix4x4_Viewport6((QMatrix4x4*)self, left, bottom, width, height, nearPlane, farPlane);
}

void q_matrix4x4_delete(void* self) {
    QMatrix4x4_Delete((QMatrix4x4*)(self));
}
