#include "libqmatrix4x4.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqvariant.hpp"
#include "libqvectornd.hpp"
#include "libqvectornd.h"

QVector2D* q_vector2d_new(void* other) {
    return QVector2D_new((QVector2D*)other);
}

QVector2D* q_vector2d_new2(void* other) {
    return QVector2D_new2((QVector2D*)other);
}

QVector2D* q_vector2d_new3() {
    return QVector2D_new3();
}

QVector2D* q_vector2d_new4(int64_t param1) {
    return QVector2D_new4(param1);
}

QVector2D* q_vector2d_new5(float xpos, float ypos) {
    return QVector2D_new5(xpos, ypos);
}

QVector2D* q_vector2d_new6(void* point) {
    return QVector2D_new6((QPoint*)point);
}

QVector2D* q_vector2d_new7(void* point) {
    return QVector2D_new7((QPointF*)point);
}

QVector2D* q_vector2d_new8(void* vector) {
    return QVector2D_new8((QVector3D*)vector);
}

QVector2D* q_vector2d_new9(void* vector) {
    return QVector2D_new9((QVector4D*)vector);
}

QVector2D* q_vector2d_new10(void* param1) {
    return QVector2D_new10((QVector2D*)param1);
}

void q_vector2d_copy_assign(void* self, void* other) {
    QVector2D_CopyAssign((QVector2D*)self, (QVector2D*)other);
}

void q_vector2d_move_assign(void* self, void* other) {
    QVector2D_MoveAssign((QVector2D*)self, (QVector2D*)other);
}

bool q_vector2d_is_null(void* self) {
    return QVector2D_IsNull((QVector2D*)self);
}

float q_vector2d_x(void* self) {
    return QVector2D_X((QVector2D*)self);
}

float q_vector2d_y(void* self) {
    return QVector2D_Y((QVector2D*)self);
}

void q_vector2d_set_x(void* self, float x) {
    QVector2D_SetX((QVector2D*)self, x);
}

void q_vector2d_set_y(void* self, float y) {
    QVector2D_SetY((QVector2D*)self, y);
}

float q_vector2d_operator_subscript(void* self, int i) {
    return QVector2D_OperatorSubscript((QVector2D*)self, i);
}

float q_vector2d_length(void* self) {
    return QVector2D_Length((QVector2D*)self);
}

float q_vector2d_length_squared(void* self) {
    return QVector2D_LengthSquared((QVector2D*)self);
}

QVector2D* q_vector2d_normalized(void* self) {
    return QVector2D_Normalized((QVector2D*)self);
}

void q_vector2d_normalize(void* self) {
    QVector2D_Normalize((QVector2D*)self);
}

float q_vector2d_distance_to_point(void* self, void* point) {
    return QVector2D_DistanceToPoint((QVector2D*)self, (QVector2D*)point);
}

float q_vector2d_distance_to_line(void* self, void* point, void* direction) {
    return QVector2D_DistanceToLine((QVector2D*)self, (QVector2D*)point, (QVector2D*)direction);
}

QVector2D* q_vector2d_operator_plus_assign(void* self, void* vector) {
    return QVector2D_OperatorPlusAssign((QVector2D*)self, (QVector2D*)vector);
}

QVector2D* q_vector2d_operator_minus_assign(void* self, void* vector) {
    return QVector2D_OperatorMinusAssign((QVector2D*)self, (QVector2D*)vector);
}

QVector2D* q_vector2d_operator_multiply_assign(void* self, float factor) {
    return QVector2D_OperatorMultiplyAssign((QVector2D*)self, factor);
}

QVector2D* q_vector2d_operator_multiply_assign_with_vector(void* self, void* vector) {
    return QVector2D_OperatorMultiplyAssignWithVector((QVector2D*)self, (QVector2D*)vector);
}

QVector2D* q_vector2d_operator_divide_assign(void* self, float divisor) {
    return QVector2D_OperatorDivideAssign((QVector2D*)self, divisor);
}

QVector2D* q_vector2d_operator_divide_assign_with_vector(void* self, void* vector) {
    return QVector2D_OperatorDivideAssignWithVector((QVector2D*)self, (QVector2D*)vector);
}

float q_vector2d_dot_product(void* v1, void* v2) {
    return QVector2D_DotProduct((QVector2D*)v1, (QVector2D*)v2);
}

QVector3D* q_vector2d_to_vector3_d(void* self) {
    return QVector2D_ToVector3D((QVector2D*)self);
}

QVector4D* q_vector2d_to_vector4_d(void* self) {
    return QVector2D_ToVector4D((QVector2D*)self);
}

QPoint* q_vector2d_to_point(void* self) {
    return QVector2D_ToPoint((QVector2D*)self);
}

QPointF* q_vector2d_to_point_f(void* self) {
    return QVector2D_ToPointF((QVector2D*)self);
}

QVariant* q_vector2d_to_q_variant(void* self) {
    return QVector2D_ToQVariant((QVector2D*)self);
}

void q_vector2d_delete(void* self) {
    QVector2D_Delete((QVector2D*)(self));
}

QVector3D* q_vector3d_new(void* other) {
    return QVector3D_new((QVector3D*)other);
}

QVector3D* q_vector3d_new2(void* other) {
    return QVector3D_new2((QVector3D*)other);
}

QVector3D* q_vector3d_new3() {
    return QVector3D_new3();
}

QVector3D* q_vector3d_new4(int64_t param1) {
    return QVector3D_new4(param1);
}

QVector3D* q_vector3d_new5(float xpos, float ypos, float zpos) {
    return QVector3D_new5(xpos, ypos, zpos);
}

QVector3D* q_vector3d_new6(void* point) {
    return QVector3D_new6((QPoint*)point);
}

QVector3D* q_vector3d_new7(void* point) {
    return QVector3D_new7((QPointF*)point);
}

QVector3D* q_vector3d_new8(void* vector) {
    return QVector3D_new8((QVector2D*)vector);
}

QVector3D* q_vector3d_new9(void* vector, float zpos) {
    return QVector3D_new9((QVector2D*)vector, zpos);
}

QVector3D* q_vector3d_new10(void* vector) {
    return QVector3D_new10((QVector4D*)vector);
}

QVector3D* q_vector3d_new11(void* param1) {
    return QVector3D_new11((QVector3D*)param1);
}

void q_vector3d_copy_assign(void* self, void* other) {
    QVector3D_CopyAssign((QVector3D*)self, (QVector3D*)other);
}

void q_vector3d_move_assign(void* self, void* other) {
    QVector3D_MoveAssign((QVector3D*)self, (QVector3D*)other);
}

bool q_vector3d_is_null(void* self) {
    return QVector3D_IsNull((QVector3D*)self);
}

float q_vector3d_x(void* self) {
    return QVector3D_X((QVector3D*)self);
}

float q_vector3d_y(void* self) {
    return QVector3D_Y((QVector3D*)self);
}

float q_vector3d_z(void* self) {
    return QVector3D_Z((QVector3D*)self);
}

void q_vector3d_set_x(void* self, float x) {
    QVector3D_SetX((QVector3D*)self, x);
}

void q_vector3d_set_y(void* self, float y) {
    QVector3D_SetY((QVector3D*)self, y);
}

void q_vector3d_set_z(void* self, float z) {
    QVector3D_SetZ((QVector3D*)self, z);
}

float q_vector3d_operator_subscript(void* self, int i) {
    return QVector3D_OperatorSubscript((QVector3D*)self, i);
}

float q_vector3d_length(void* self) {
    return QVector3D_Length((QVector3D*)self);
}

float q_vector3d_length_squared(void* self) {
    return QVector3D_LengthSquared((QVector3D*)self);
}

QVector3D* q_vector3d_normalized(void* self) {
    return QVector3D_Normalized((QVector3D*)self);
}

void q_vector3d_normalize(void* self) {
    QVector3D_Normalize((QVector3D*)self);
}

QVector3D* q_vector3d_operator_plus_assign(void* self, void* vector) {
    return QVector3D_OperatorPlusAssign((QVector3D*)self, (QVector3D*)vector);
}

QVector3D* q_vector3d_operator_minus_assign(void* self, void* vector) {
    return QVector3D_OperatorMinusAssign((QVector3D*)self, (QVector3D*)vector);
}

QVector3D* q_vector3d_operator_multiply_assign(void* self, float factor) {
    return QVector3D_OperatorMultiplyAssign((QVector3D*)self, factor);
}

QVector3D* q_vector3d_operator_multiply_assign_with_vector(void* self, void* vector) {
    return QVector3D_OperatorMultiplyAssignWithVector((QVector3D*)self, (QVector3D*)vector);
}

QVector3D* q_vector3d_operator_divide_assign(void* self, float divisor) {
    return QVector3D_OperatorDivideAssign((QVector3D*)self, divisor);
}

QVector3D* q_vector3d_operator_divide_assign_with_vector(void* self, void* vector) {
    return QVector3D_OperatorDivideAssignWithVector((QVector3D*)self, (QVector3D*)vector);
}

float q_vector3d_dot_product(void* v1, void* v2) {
    return QVector3D_DotProduct((QVector3D*)v1, (QVector3D*)v2);
}

QVector3D* q_vector3d_cross_product(void* v1, void* v2) {
    return QVector3D_CrossProduct((QVector3D*)v1, (QVector3D*)v2);
}

QVector3D* q_vector3d_normal(void* v1, void* v2) {
    return QVector3D_Normal((QVector3D*)v1, (QVector3D*)v2);
}

QVector3D* q_vector3d_normal2(void* v1, void* v2, void* v3) {
    return QVector3D_Normal2((QVector3D*)v1, (QVector3D*)v2, (QVector3D*)v3);
}

QVector3D* q_vector3d_project(void* self, void* modelView, void* projection, void* viewport) {
    return QVector3D_Project((QVector3D*)self, (QMatrix4x4*)modelView, (QMatrix4x4*)projection, (QRect*)viewport);
}

QVector3D* q_vector3d_unproject(void* self, void* modelView, void* projection, void* viewport) {
    return QVector3D_Unproject((QVector3D*)self, (QMatrix4x4*)modelView, (QMatrix4x4*)projection, (QRect*)viewport);
}

float q_vector3d_distance_to_point(void* self, void* point) {
    return QVector3D_DistanceToPoint((QVector3D*)self, (QVector3D*)point);
}

float q_vector3d_distance_to_plane(void* self, void* plane, void* normal) {
    return QVector3D_DistanceToPlane((QVector3D*)self, (QVector3D*)plane, (QVector3D*)normal);
}

float q_vector3d_distance_to_plane2(void* self, void* plane1, void* plane2, void* plane3) {
    return QVector3D_DistanceToPlane2((QVector3D*)self, (QVector3D*)plane1, (QVector3D*)plane2, (QVector3D*)plane3);
}

float q_vector3d_distance_to_line(void* self, void* point, void* direction) {
    return QVector3D_DistanceToLine((QVector3D*)self, (QVector3D*)point, (QVector3D*)direction);
}

QVector2D* q_vector3d_to_vector2_d(void* self) {
    return QVector3D_ToVector2D((QVector3D*)self);
}

QVector4D* q_vector3d_to_vector4_d(void* self) {
    return QVector3D_ToVector4D((QVector3D*)self);
}

QPoint* q_vector3d_to_point(void* self) {
    return QVector3D_ToPoint((QVector3D*)self);
}

QPointF* q_vector3d_to_point_f(void* self) {
    return QVector3D_ToPointF((QVector3D*)self);
}

QVariant* q_vector3d_to_q_variant(void* self) {
    return QVector3D_ToQVariant((QVector3D*)self);
}

void q_vector3d_delete(void* self) {
    QVector3D_Delete((QVector3D*)(self));
}

QVector4D* q_vector4d_new(void* other) {
    return QVector4D_new((QVector4D*)other);
}

QVector4D* q_vector4d_new2(void* other) {
    return QVector4D_new2((QVector4D*)other);
}

QVector4D* q_vector4d_new3() {
    return QVector4D_new3();
}

QVector4D* q_vector4d_new4(int64_t param1) {
    return QVector4D_new4(param1);
}

QVector4D* q_vector4d_new5(float xpos, float ypos, float zpos, float wpos) {
    return QVector4D_new5(xpos, ypos, zpos, wpos);
}

QVector4D* q_vector4d_new6(void* point) {
    return QVector4D_new6((QPoint*)point);
}

QVector4D* q_vector4d_new7(void* point) {
    return QVector4D_new7((QPointF*)point);
}

QVector4D* q_vector4d_new8(void* vector) {
    return QVector4D_new8((QVector2D*)vector);
}

QVector4D* q_vector4d_new9(void* vector, float zpos, float wpos) {
    return QVector4D_new9((QVector2D*)vector, zpos, wpos);
}

QVector4D* q_vector4d_new10(void* vector) {
    return QVector4D_new10((QVector3D*)vector);
}

QVector4D* q_vector4d_new11(void* vector, float wpos) {
    return QVector4D_new11((QVector3D*)vector, wpos);
}

QVector4D* q_vector4d_new12(void* param1) {
    return QVector4D_new12((QVector4D*)param1);
}

void q_vector4d_copy_assign(void* self, void* other) {
    QVector4D_CopyAssign((QVector4D*)self, (QVector4D*)other);
}

void q_vector4d_move_assign(void* self, void* other) {
    QVector4D_MoveAssign((QVector4D*)self, (QVector4D*)other);
}

bool q_vector4d_is_null(void* self) {
    return QVector4D_IsNull((QVector4D*)self);
}

float q_vector4d_x(void* self) {
    return QVector4D_X((QVector4D*)self);
}

float q_vector4d_y(void* self) {
    return QVector4D_Y((QVector4D*)self);
}

float q_vector4d_z(void* self) {
    return QVector4D_Z((QVector4D*)self);
}

float q_vector4d_w(void* self) {
    return QVector4D_W((QVector4D*)self);
}

void q_vector4d_set_x(void* self, float x) {
    QVector4D_SetX((QVector4D*)self, x);
}

void q_vector4d_set_y(void* self, float y) {
    QVector4D_SetY((QVector4D*)self, y);
}

void q_vector4d_set_z(void* self, float z) {
    QVector4D_SetZ((QVector4D*)self, z);
}

void q_vector4d_set_w(void* self, float w) {
    QVector4D_SetW((QVector4D*)self, w);
}

float q_vector4d_operator_subscript(void* self, int i) {
    return QVector4D_OperatorSubscript((QVector4D*)self, i);
}

float q_vector4d_length(void* self) {
    return QVector4D_Length((QVector4D*)self);
}

float q_vector4d_length_squared(void* self) {
    return QVector4D_LengthSquared((QVector4D*)self);
}

QVector4D* q_vector4d_normalized(void* self) {
    return QVector4D_Normalized((QVector4D*)self);
}

void q_vector4d_normalize(void* self) {
    QVector4D_Normalize((QVector4D*)self);
}

QVector4D* q_vector4d_operator_plus_assign(void* self, void* vector) {
    return QVector4D_OperatorPlusAssign((QVector4D*)self, (QVector4D*)vector);
}

QVector4D* q_vector4d_operator_minus_assign(void* self, void* vector) {
    return QVector4D_OperatorMinusAssign((QVector4D*)self, (QVector4D*)vector);
}

QVector4D* q_vector4d_operator_multiply_assign(void* self, float factor) {
    return QVector4D_OperatorMultiplyAssign((QVector4D*)self, factor);
}

QVector4D* q_vector4d_operator_multiply_assign_with_vector(void* self, void* vector) {
    return QVector4D_OperatorMultiplyAssignWithVector((QVector4D*)self, (QVector4D*)vector);
}

QVector4D* q_vector4d_operator_divide_assign(void* self, float divisor) {
    return QVector4D_OperatorDivideAssign((QVector4D*)self, divisor);
}

QVector4D* q_vector4d_operator_divide_assign_with_vector(void* self, void* vector) {
    return QVector4D_OperatorDivideAssignWithVector((QVector4D*)self, (QVector4D*)vector);
}

float q_vector4d_dot_product(void* v1, void* v2) {
    return QVector4D_DotProduct((QVector4D*)v1, (QVector4D*)v2);
}

QVector2D* q_vector4d_to_vector2_d(void* self) {
    return QVector4D_ToVector2D((QVector4D*)self);
}

QVector2D* q_vector4d_to_vector2_d_affine(void* self) {
    return QVector4D_ToVector2DAffine((QVector4D*)self);
}

QVector3D* q_vector4d_to_vector3_d(void* self) {
    return QVector4D_ToVector3D((QVector4D*)self);
}

QVector3D* q_vector4d_to_vector3_d_affine(void* self) {
    return QVector4D_ToVector3DAffine((QVector4D*)self);
}

QPoint* q_vector4d_to_point(void* self) {
    return QVector4D_ToPoint((QVector4D*)self);
}

QPointF* q_vector4d_to_point_f(void* self) {
    return QVector4D_ToPointF((QVector4D*)self);
}

QVariant* q_vector4d_to_q_variant(void* self) {
    return QVector4D_ToQVariant((QVector4D*)self);
}

void q_vector4d_delete(void* self) {
    QVector4D_Delete((QVector4D*)(self));
}
