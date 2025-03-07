#include "libqpoint.hpp"
#include "libqquaternion.hpp"
#include "libqrect.hpp"
#include "libqtransform.hpp"
#include "libqvariant.hpp"
#include "libqvectornd.hpp"
#include "libqmatrix4x4.hpp"
#include "libqmatrix4x4.h"

/// https://doc.qt.io/qt-6/qmatrix4x4.html

/// q_matrix4x4_new constructs a new QMatrix4x4 object.
///
/// ``` QMatrix4x4* other ```
QMatrix4x4* q_matrix4x4_new(void* other) {
    return QMatrix4x4_new((QMatrix4x4*)other);
}

/// q_matrix4x4_new2 constructs a new QMatrix4x4 object and invalidates the source QMatrix4x4 object.
///
/// ``` QMatrix4x4* other ```
QMatrix4x4* q_matrix4x4_new2(void* other) {
    return QMatrix4x4_new2((QMatrix4x4*)other);
}

/// q_matrix4x4_new3 constructs a new QMatrix4x4 object.
///
///
QMatrix4x4* q_matrix4x4_new3() {
    return QMatrix4x4_new3();
}

/// q_matrix4x4_new4 constructs a new QMatrix4x4 object.
///
/// ``` enum Qt__Initialization param1 ```
QMatrix4x4* q_matrix4x4_new4(int64_t param1) {
    return QMatrix4x4_new4(param1);
}

/// q_matrix4x4_new5 constructs a new QMatrix4x4 object.
///
/// ``` float* values ```
QMatrix4x4* q_matrix4x4_new5(float* values) {
    return QMatrix4x4_new5(values);
}

/// q_matrix4x4_new6 constructs a new QMatrix4x4 object.
///
/// ``` float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44 ```
QMatrix4x4* q_matrix4x4_new6(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) {
    return QMatrix4x4_new6(m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44);
}

/// q_matrix4x4_new7 constructs a new QMatrix4x4 object.
///
/// ``` float* values, int cols, int rows ```
QMatrix4x4* q_matrix4x4_new7(float* values, int cols, int rows) {
    return QMatrix4x4_new7(values, cols, rows);
}

/// q_matrix4x4_new8 constructs a new QMatrix4x4 object.
///
/// ``` QTransform* transform ```
QMatrix4x4* q_matrix4x4_new8(void* transform) {
    return QMatrix4x4_new8((QTransform*)transform);
}

/// q_matrix4x4_new9 constructs a new QMatrix4x4 object.
///
/// ``` QMatrix4x4* param1 ```
QMatrix4x4* q_matrix4x4_new9(void* param1) {
    return QMatrix4x4_new9((QMatrix4x4*)param1);
}

/// q_matrix4x4_copy_assign shallow copies `other` into `self`.
///
/// ``` QMatrix4x4* self, QMatrix4x4* other ```
void q_matrix4x4_copy_assign(void* self, void* other) {
    QMatrix4x4_CopyAssign((QMatrix4x4*)self, (QMatrix4x4*)other);
}

/// q_matrix4x4_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QMatrix4x4* self, QMatrix4x4* other ```
void q_matrix4x4_move_assign(void* self, void* other) {
    QMatrix4x4_MoveAssign((QMatrix4x4*)self, (QMatrix4x4*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#column)
///
/// ``` QMatrix4x4* self, int index ```
QVector4D* q_matrix4x4_column(void* self, int index) {
    return QMatrix4x4_Column((QMatrix4x4*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#setColumn)
///
/// ``` QMatrix4x4* self, int index, QVector4D* value ```
void q_matrix4x4_set_column(void* self, int index, void* value) {
    QMatrix4x4_SetColumn((QMatrix4x4*)self, index, (QVector4D*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#row)
///
/// ``` QMatrix4x4* self, int index ```
QVector4D* q_matrix4x4_row(void* self, int index) {
    return QMatrix4x4_Row((QMatrix4x4*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#setRow)
///
/// ``` QMatrix4x4* self, int index, QVector4D* value ```
void q_matrix4x4_set_row(void* self, int index, void* value) {
    QMatrix4x4_SetRow((QMatrix4x4*)self, index, (QVector4D*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#isAffine)
///
/// ``` QMatrix4x4* self ```
bool q_matrix4x4_is_affine(void* self) {
    return QMatrix4x4_IsAffine((QMatrix4x4*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#isIdentity)
///
/// ``` QMatrix4x4* self ```
bool q_matrix4x4_is_identity(void* self) {
    return QMatrix4x4_IsIdentity((QMatrix4x4*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#setToIdentity)
///
/// ``` QMatrix4x4* self ```
void q_matrix4x4_set_to_identity(void* self) {
    QMatrix4x4_SetToIdentity((QMatrix4x4*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#fill)
///
/// ``` QMatrix4x4* self, float value ```
void q_matrix4x4_fill(void* self, float value) {
    QMatrix4x4_Fill((QMatrix4x4*)self, value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#determinant)
///
/// ``` QMatrix4x4* self ```
double q_matrix4x4_determinant(void* self) {
    return QMatrix4x4_Determinant((QMatrix4x4*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#inverted)
///
/// ``` QMatrix4x4* self ```
QMatrix4x4* q_matrix4x4_inverted(void* self) {
    return QMatrix4x4_Inverted((QMatrix4x4*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#transposed)
///
/// ``` QMatrix4x4* self ```
QMatrix4x4* q_matrix4x4_transposed(void* self) {
    return QMatrix4x4_Transposed((QMatrix4x4*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#operator+=)
///
/// ``` QMatrix4x4* self, QMatrix4x4* other ```
QMatrix4x4* q_matrix4x4_operator_plus_assign(void* self, void* other) {
    return QMatrix4x4_OperatorPlusAssign((QMatrix4x4*)self, (QMatrix4x4*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-=)
///
/// ``` QMatrix4x4* self, QMatrix4x4* other ```
QMatrix4x4* q_matrix4x4_operator_minus_assign(void* self, void* other) {
    return QMatrix4x4_OperatorMinusAssign((QMatrix4x4*)self, (QMatrix4x4*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#operator*=)
///
/// ``` QMatrix4x4* self, QMatrix4x4* other ```
QMatrix4x4* q_matrix4x4_operator_multiply_assign(void* self, void* other) {
    return QMatrix4x4_OperatorMultiplyAssign((QMatrix4x4*)self, (QMatrix4x4*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#operator*=)
///
/// ``` QMatrix4x4* self, float factor ```
QMatrix4x4* q_matrix4x4_operator_multiply_assign_with_factor(void* self, float factor) {
    return QMatrix4x4_OperatorMultiplyAssignWithFactor((QMatrix4x4*)self, factor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#operator/=)
///
/// ``` QMatrix4x4* self, float divisor ```
QMatrix4x4* q_matrix4x4_operator_divide_assign(void* self, float divisor) {
    return QMatrix4x4_OperatorDivideAssign((QMatrix4x4*)self, divisor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#operator==)
///
/// ``` QMatrix4x4* self, QMatrix4x4* other ```
bool q_matrix4x4_operator_equal(void* self, void* other) {
    return QMatrix4x4_OperatorEqual((QMatrix4x4*)self, (QMatrix4x4*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#operator!=)
///
/// ``` QMatrix4x4* self, QMatrix4x4* other ```
bool q_matrix4x4_operator_not_equal(void* self, void* other) {
    return QMatrix4x4_OperatorNotEqual((QMatrix4x4*)self, (QMatrix4x4*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#scale)
///
/// ``` QMatrix4x4* self, QVector3D* vector ```
void q_matrix4x4_scale(void* self, void* vector) {
    QMatrix4x4_Scale((QMatrix4x4*)self, (QVector3D*)vector);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#translate)
///
/// ``` QMatrix4x4* self, QVector3D* vector ```
void q_matrix4x4_translate(void* self, void* vector) {
    QMatrix4x4_Translate((QMatrix4x4*)self, (QVector3D*)vector);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#rotate)
///
/// ``` QMatrix4x4* self, float angle, QVector3D* vector ```
void q_matrix4x4_rotate(void* self, float angle, void* vector) {
    QMatrix4x4_Rotate((QMatrix4x4*)self, angle, (QVector3D*)vector);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#scale)
///
/// ``` QMatrix4x4* self, float x, float y ```
void q_matrix4x4_scale2(void* self, float x, float y) {
    QMatrix4x4_Scale2((QMatrix4x4*)self, x, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#scale)
///
/// ``` QMatrix4x4* self, float x, float y, float z ```
void q_matrix4x4_scale3(void* self, float x, float y, float z) {
    QMatrix4x4_Scale3((QMatrix4x4*)self, x, y, z);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#scale)
///
/// ``` QMatrix4x4* self, float factor ```
void q_matrix4x4_scale_with_factor(void* self, float factor) {
    QMatrix4x4_ScaleWithFactor((QMatrix4x4*)self, factor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#translate)
///
/// ``` QMatrix4x4* self, float x, float y ```
void q_matrix4x4_translate2(void* self, float x, float y) {
    QMatrix4x4_Translate2((QMatrix4x4*)self, x, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#translate)
///
/// ``` QMatrix4x4* self, float x, float y, float z ```
void q_matrix4x4_translate3(void* self, float x, float y, float z) {
    QMatrix4x4_Translate3((QMatrix4x4*)self, x, y, z);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#rotate)
///
/// ``` QMatrix4x4* self, float angle, float x, float y ```
void q_matrix4x4_rotate2(void* self, float angle, float x, float y) {
    QMatrix4x4_Rotate2((QMatrix4x4*)self, angle, x, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#rotate)
///
/// ``` QMatrix4x4* self, QQuaternion* quaternion ```
void q_matrix4x4_rotate_with_quaternion(void* self, void* quaternion) {
    QMatrix4x4_RotateWithQuaternion((QMatrix4x4*)self, (QQuaternion*)quaternion);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#ortho)
///
/// ``` QMatrix4x4* self, QRect* rect ```
void q_matrix4x4_ortho(void* self, void* rect) {
    QMatrix4x4_Ortho((QMatrix4x4*)self, (QRect*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#ortho)
///
/// ``` QMatrix4x4* self, QRectF* rect ```
void q_matrix4x4_ortho_with_rect(void* self, void* rect) {
    QMatrix4x4_OrthoWithRect((QMatrix4x4*)self, (QRectF*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#ortho)
///
/// ``` QMatrix4x4* self, float left, float right, float bottom, float top, float nearPlane, float farPlane ```
void q_matrix4x4_ortho2(void* self, float left, float right, float bottom, float top, float nearPlane, float farPlane) {
    QMatrix4x4_Ortho2((QMatrix4x4*)self, left, right, bottom, top, nearPlane, farPlane);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#frustum)
///
/// ``` QMatrix4x4* self, float left, float right, float bottom, float top, float nearPlane, float farPlane ```
void q_matrix4x4_frustum(void* self, float left, float right, float bottom, float top, float nearPlane, float farPlane) {
    QMatrix4x4_Frustum((QMatrix4x4*)self, left, right, bottom, top, nearPlane, farPlane);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#perspective)
///
/// ``` QMatrix4x4* self, float verticalAngle, float aspectRatio, float nearPlane, float farPlane ```
void q_matrix4x4_perspective(void* self, float verticalAngle, float aspectRatio, float nearPlane, float farPlane) {
    QMatrix4x4_Perspective((QMatrix4x4*)self, verticalAngle, aspectRatio, nearPlane, farPlane);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#lookAt)
///
/// ``` QMatrix4x4* self, QVector3D* eye, QVector3D* center, QVector3D* up ```
void q_matrix4x4_look_at(void* self, void* eye, void* center, void* up) {
    QMatrix4x4_LookAt((QMatrix4x4*)self, (QVector3D*)eye, (QVector3D*)center, (QVector3D*)up);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#viewport)
///
/// ``` QMatrix4x4* self, QRectF* rect ```
void q_matrix4x4_viewport(void* self, void* rect) {
    QMatrix4x4_Viewport((QMatrix4x4*)self, (QRectF*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#viewport)
///
/// ``` QMatrix4x4* self, float left, float bottom, float width, float height ```
void q_matrix4x4_viewport2(void* self, float left, float bottom, float width, float height) {
    QMatrix4x4_Viewport2((QMatrix4x4*)self, left, bottom, width, height);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#flipCoordinates)
///
/// ``` QMatrix4x4* self ```
void q_matrix4x4_flip_coordinates(void* self) {
    QMatrix4x4_FlipCoordinates((QMatrix4x4*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#copyDataTo)
///
/// ``` QMatrix4x4* self, float* values ```
void q_matrix4x4_copy_data_to(void* self, float* values) {
    QMatrix4x4_CopyDataTo((QMatrix4x4*)self, values);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#toTransform)
///
/// ``` QMatrix4x4* self ```
QTransform* q_matrix4x4_to_transform(void* self) {
    return QMatrix4x4_ToTransform((QMatrix4x4*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#toTransform)
///
/// ``` QMatrix4x4* self, float distanceToPlane ```
QTransform* q_matrix4x4_to_transform_with_distance_to_plane(void* self, float distanceToPlane) {
    return QMatrix4x4_ToTransformWithDistanceToPlane((QMatrix4x4*)self, distanceToPlane);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#map)
///
/// ``` QMatrix4x4* self, QPoint* point ```
QPoint* q_matrix4x4_map(void* self, void* point) {
    return QMatrix4x4_Map((QMatrix4x4*)self, (QPoint*)point);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#map)
///
/// ``` QMatrix4x4* self, QPointF* point ```
QPointF* q_matrix4x4_map_with_point(void* self, void* point) {
    return QMatrix4x4_MapWithPoint((QMatrix4x4*)self, (QPointF*)point);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#map)
///
/// ``` QMatrix4x4* self, QVector3D* point ```
QVector3D* q_matrix4x4_map2(void* self, void* point) {
    return QMatrix4x4_Map2((QMatrix4x4*)self, (QVector3D*)point);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#mapVector)
///
/// ``` QMatrix4x4* self, QVector3D* vector ```
QVector3D* q_matrix4x4_map_vector(void* self, void* vector) {
    return QMatrix4x4_MapVector((QMatrix4x4*)self, (QVector3D*)vector);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#map)
///
/// ``` QMatrix4x4* self, QVector4D* point ```
QVector4D* q_matrix4x4_map3(void* self, void* point) {
    return QMatrix4x4_Map3((QMatrix4x4*)self, (QVector4D*)point);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#mapRect)
///
/// ``` QMatrix4x4* self, QRect* rect ```
QRect* q_matrix4x4_map_rect(void* self, void* rect) {
    return QMatrix4x4_MapRect((QMatrix4x4*)self, (QRect*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#mapRect)
///
/// ``` QMatrix4x4* self, QRectF* rect ```
QRectF* q_matrix4x4_map_rect_with_rect(void* self, void* rect) {
    return QMatrix4x4_MapRectWithRect((QMatrix4x4*)self, (QRectF*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#data)
///
/// ``` QMatrix4x4* self ```
float* q_matrix4x4_data(void* self) {
    return (float*)QMatrix4x4_Data((QMatrix4x4*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#data)
///
/// ``` QMatrix4x4* self ```
float* q_matrix4x4_data2(void* self) {
    return (float*)QMatrix4x4_Data2((QMatrix4x4*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#constData)
///
/// ``` QMatrix4x4* self ```
float* q_matrix4x4_const_data(void* self) {
    return (float*)QMatrix4x4_ConstData((QMatrix4x4*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#optimize)
///
/// ``` QMatrix4x4* self ```
void q_matrix4x4_optimize(void* self) {
    QMatrix4x4_Optimize((QMatrix4x4*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#operator QVariant)
///
/// ``` QMatrix4x4* self ```
QVariant* q_matrix4x4_to_q_variant(void* self) {
    return QMatrix4x4_ToQVariant((QMatrix4x4*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#projectedRotate)
///
/// ``` QMatrix4x4* self, float angle, float x, float y, float z ```
void q_matrix4x4_projected_rotate(void* self, float angle, float x, float y, float z) {
    QMatrix4x4_ProjectedRotate((QMatrix4x4*)self, angle, x, y, z);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#flags)
///
/// ``` QMatrix4x4* self ```
int64_t q_matrix4x4_flags(void* self) {
    return QMatrix4x4_Flags((QMatrix4x4*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#inverted)
///
/// ``` QMatrix4x4* self, bool* invertible ```
QMatrix4x4* q_matrix4x4_inverted1(void* self, bool* invertible) {
    return QMatrix4x4_Inverted1((QMatrix4x4*)self, (bool*)invertible);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#rotate)
///
/// ``` QMatrix4x4* self, float angle, float x, float y, float z ```
void q_matrix4x4_rotate4(void* self, float angle, float x, float y, float z) {
    QMatrix4x4_Rotate4((QMatrix4x4*)self, angle, x, y, z);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#viewport)
///
/// ``` QMatrix4x4* self, float left, float bottom, float width, float height, float nearPlane ```
void q_matrix4x4_viewport5(void* self, float left, float bottom, float width, float height, float nearPlane) {
    QMatrix4x4_Viewport5((QMatrix4x4*)self, left, bottom, width, height, nearPlane);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#viewport)
///
/// ``` QMatrix4x4* self, float left, float bottom, float width, float height, float nearPlane, float farPlane ```
void q_matrix4x4_viewport6(void* self, float left, float bottom, float width, float height, float nearPlane, float farPlane) {
    QMatrix4x4_Viewport6((QMatrix4x4*)self, left, bottom, width, height, nearPlane, farPlane);
}

/// Delete this object from C++ memory.
///
/// ``` QMatrix4x4* self ```
void q_matrix4x4_delete(void* self) {
    QMatrix4x4_Delete((QMatrix4x4*)(self));
}