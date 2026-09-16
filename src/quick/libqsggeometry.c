#include "../libqrect.hpp"
#include "libqsggeometry.hpp"
#include "libqsggeometry.h"

QSGGeometry* q_sggeometry_new(void* attribs, int vertexCount) {
    return QSGGeometry_New((QSGGeometry__AttributeSet*)attribs, vertexCount);
}

QSGGeometry* q_sggeometry_new2(void* attribs, int vertexCount, int indexCount) {
    return QSGGeometry_New2((QSGGeometry__AttributeSet*)attribs, vertexCount, indexCount);
}

QSGGeometry* q_sggeometry_new3(void* attribs, int vertexCount, int indexCount, int indexType) {
    return QSGGeometry_New3((QSGGeometry__AttributeSet*)attribs, vertexCount, indexCount, indexType);
}

const QSGGeometry__AttributeSet* q_sggeometry_default_attributes__point2_d() {
    return QSGGeometry_DefaultAttributes_Point2D();
}

const QSGGeometry__AttributeSet* q_sggeometry_default_attributes__textured_point2_d() {
    return QSGGeometry_DefaultAttributes_TexturedPoint2D();
}

const QSGGeometry__AttributeSet* q_sggeometry_default_attributes__colored_point2_d() {
    return QSGGeometry_DefaultAttributes_ColoredPoint2D();
}

void q_sggeometry_set_drawing_mode(void* self, uint32_t mode) {
    QSGGeometry_SetDrawingMode((QSGGeometry*)self, mode);
}

uint32_t q_sggeometry_drawing_mode(void* self) {
    return QSGGeometry_DrawingMode((QSGGeometry*)self);
}

void q_sggeometry_allocate(void* self, int vertexCount) {
    QSGGeometry_Allocate((QSGGeometry*)self, vertexCount);
}

int32_t q_sggeometry_vertex_count(void* self) {
    return QSGGeometry_VertexCount((QSGGeometry*)self);
}

void* q_sggeometry_vertex_data(void* self) {
    return QSGGeometry_VertexData((QSGGeometry*)self);
}

QSGGeometry__Point2D* q_sggeometry_vertex_data_as_point2_d(void* self) {
    return QSGGeometry_VertexDataAsPoint2D((QSGGeometry*)self);
}

QSGGeometry__TexturedPoint2D* q_sggeometry_vertex_data_as_textured_point2_d(void* self) {
    return QSGGeometry_VertexDataAsTexturedPoint2D((QSGGeometry*)self);
}

QSGGeometry__ColoredPoint2D* q_sggeometry_vertex_data_as_colored_point2_d(void* self) {
    return QSGGeometry_VertexDataAsColoredPoint2D((QSGGeometry*)self);
}

const void* q_sggeometry_vertex_data2(void* self) {
    return QSGGeometry_VertexData2((QSGGeometry*)self);
}

const QSGGeometry__Point2D* q_sggeometry_vertex_data_as_point2_d2(void* self) {
    return QSGGeometry_VertexDataAsPoint2D2((QSGGeometry*)self);
}

const QSGGeometry__TexturedPoint2D* q_sggeometry_vertex_data_as_textured_point2_d2(void* self) {
    return QSGGeometry_VertexDataAsTexturedPoint2D2((QSGGeometry*)self);
}

const QSGGeometry__ColoredPoint2D* q_sggeometry_vertex_data_as_colored_point2_d2(void* self) {
    return QSGGeometry_VertexDataAsColoredPoint2D2((QSGGeometry*)self);
}

int32_t q_sggeometry_index_type(void* self) {
    return QSGGeometry_IndexType((QSGGeometry*)self);
}

int32_t q_sggeometry_index_count(void* self) {
    return QSGGeometry_IndexCount((QSGGeometry*)self);
}

void* q_sggeometry_index_data(void* self) {
    return QSGGeometry_IndexData((QSGGeometry*)self);
}

uint32_t* q_sggeometry_index_data_as_u_int(void* self) {
    return (uint32_t*)QSGGeometry_IndexDataAsUInt((QSGGeometry*)self);
}

uint16_t* q_sggeometry_index_data_as_u_short(void* self) {
    return (uint16_t*)QSGGeometry_IndexDataAsUShort((QSGGeometry*)self);
}

int32_t q_sggeometry_size_of_index(void* self) {
    return QSGGeometry_SizeOfIndex((QSGGeometry*)self);
}

const void* q_sggeometry_index_data2(void* self) {
    return QSGGeometry_IndexData2((QSGGeometry*)self);
}

const uint32_t* q_sggeometry_index_data_as_u_int2(void* self) {
    return (uint32_t*)QSGGeometry_IndexDataAsUInt2((QSGGeometry*)self);
}

const uint16_t* q_sggeometry_index_data_as_u_short2(void* self) {
    return (uint16_t*)QSGGeometry_IndexDataAsUShort2((QSGGeometry*)self);
}

int32_t q_sggeometry_attribute_count(void* self) {
    return QSGGeometry_AttributeCount((QSGGeometry*)self);
}

const QSGGeometry__Attribute* q_sggeometry_attributes(void* self) {
    return QSGGeometry_Attributes((QSGGeometry*)self);
}

int32_t q_sggeometry_size_of_vertex(void* self) {
    return QSGGeometry_SizeOfVertex((QSGGeometry*)self);
}

void q_sggeometry_update_rect_geometry(void* g, void* rect) {
    QSGGeometry_UpdateRectGeometry((QSGGeometry*)g, (QRectF*)rect);
}

void q_sggeometry_update_textured_rect_geometry(void* g, void* rect, void* sourceRect) {
    QSGGeometry_UpdateTexturedRectGeometry((QSGGeometry*)g, (QRectF*)rect, (QRectF*)sourceRect);
}

void q_sggeometry_update_colored_rect_geometry(void* g, void* rect) {
    QSGGeometry_UpdateColoredRectGeometry((QSGGeometry*)g, (QRectF*)rect);
}

void q_sggeometry_set_index_data_pattern(void* self, int32_t p) {
    QSGGeometry_SetIndexDataPattern((QSGGeometry*)self, p);
}

int32_t q_sggeometry_index_data_pattern(void* self) {
    return QSGGeometry_IndexDataPattern((QSGGeometry*)self);
}

void q_sggeometry_set_vertex_data_pattern(void* self, int32_t p) {
    QSGGeometry_SetVertexDataPattern((QSGGeometry*)self, p);
}

int32_t q_sggeometry_vertex_data_pattern(void* self) {
    return QSGGeometry_VertexDataPattern((QSGGeometry*)self);
}

void q_sggeometry_mark_index_data_dirty(void* self) {
    QSGGeometry_MarkIndexDataDirty((QSGGeometry*)self);
}

void q_sggeometry_mark_vertex_data_dirty(void* self) {
    QSGGeometry_MarkVertexDataDirty((QSGGeometry*)self);
}

float q_sggeometry_line_width(void* self) {
    return QSGGeometry_LineWidth((QSGGeometry*)self);
}

void q_sggeometry_set_line_width(void* self, float w) {
    QSGGeometry_SetLineWidth((QSGGeometry*)self, w);
}

void q_sggeometry_allocate2(void* self, int vertexCount, int indexCount) {
    QSGGeometry_Allocate2((QSGGeometry*)self, vertexCount, indexCount);
}

void q_sggeometry_delete(void* self) {
    QSGGeometry_Delete((QSGGeometry*)(self));
}

int32_t q_sggeometry__attribute_position(void* self) {
    return QSGGeometry__Attribute_Position((QSGGeometry__Attribute*)self);
}

void q_sggeometry__attribute_set_position(void* self, int position) {
    QSGGeometry__Attribute_SetPosition((QSGGeometry__Attribute*)self, position);
}

int32_t q_sggeometry__attribute_tuple_size(void* self) {
    return QSGGeometry__Attribute_TupleSize((QSGGeometry__Attribute*)self);
}

void q_sggeometry__attribute_set_tuple_size(void* self, int tupleSize) {
    QSGGeometry__Attribute_SetTupleSize((QSGGeometry__Attribute*)self, tupleSize);
}

int32_t q_sggeometry__attribute_type(void* self) {
    return QSGGeometry__Attribute_Type((QSGGeometry__Attribute*)self);
}

void q_sggeometry__attribute_set_type(void* self, int type) {
    QSGGeometry__Attribute_SetType((QSGGeometry__Attribute*)self, type);
}

uint32_t q_sggeometry__attribute_is_vertex_coordinate(void* self) {
    return QSGGeometry__Attribute_IsVertexCoordinate((QSGGeometry__Attribute*)self);
}

void q_sggeometry__attribute_set_is_vertex_coordinate(void* self, uint32_t isVertexCoordinate) {
    QSGGeometry__Attribute_SetIsVertexCoordinate((QSGGeometry__Attribute*)self, isVertexCoordinate);
}

int32_t q_sggeometry__attribute_attribute_type(void* self) {
    return QSGGeometry__Attribute_AttributeType((QSGGeometry__Attribute*)self);
}

void q_sggeometry__attribute_set_attribute_type(void* self, int32_t attributeType) {
    QSGGeometry__Attribute_SetAttributeType((QSGGeometry__Attribute*)self, attributeType);
}

uint32_t q_sggeometry__attribute_reserved(void* self) {
    return QSGGeometry__Attribute_Reserved((QSGGeometry__Attribute*)self);
}

void q_sggeometry__attribute_set_reserved(void* self, uint32_t reserved) {
    QSGGeometry__Attribute_SetReserved((QSGGeometry__Attribute*)self, reserved);
}

QSGGeometry__Attribute* q_sggeometry__attribute_create(int pos, int tupleSize, int primitiveType) {
    return QSGGeometry__Attribute_Create(pos, tupleSize, primitiveType);
}

QSGGeometry__Attribute* q_sggeometry__attribute_create_with_attribute_type(int pos, int tupleSize, int primitiveType, int32_t attributeType) {
    return QSGGeometry__Attribute_CreateWithAttributeType(pos, tupleSize, primitiveType, attributeType);
}

QSGGeometry__Attribute* q_sggeometry__attribute_create4(int pos, int tupleSize, int primitiveType, bool isPosition) {
    return QSGGeometry__Attribute_Create4(pos, tupleSize, primitiveType, isPosition);
}

void q_sggeometry__attribute_delete(void* self) {
    QSGGeometry__Attribute_Delete((QSGGeometry__Attribute*)(self));
}

int32_t q_sggeometry__attributeset_count(void* self) {
    return QSGGeometry__AttributeSet_Count((QSGGeometry__AttributeSet*)self);
}

void q_sggeometry__attributeset_set_count(void* self, int count) {
    QSGGeometry__AttributeSet_SetCount((QSGGeometry__AttributeSet*)self, count);
}

int32_t q_sggeometry__attributeset_stride(void* self) {
    return QSGGeometry__AttributeSet_Stride((QSGGeometry__AttributeSet*)self);
}

void q_sggeometry__attributeset_set_stride(void* self, int stride) {
    QSGGeometry__AttributeSet_SetStride((QSGGeometry__AttributeSet*)self, stride);
}

const QSGGeometry__Attribute* q_sggeometry__attributeset_attributes(void* self) {
    return QSGGeometry__AttributeSet_Attributes((QSGGeometry__AttributeSet*)self);
}

void q_sggeometry__attributeset_set_attributes(void* self, void* attributes) {
    QSGGeometry__AttributeSet_SetAttributes((QSGGeometry__AttributeSet*)self, (QSGGeometry__Attribute*)attributes);
}

void q_sggeometry__attributeset_delete(void* self) {
    QSGGeometry__AttributeSet_Delete((QSGGeometry__AttributeSet*)(self));
}

float q_sggeometry__point2d_x(void* self) {
    return QSGGeometry__Point2D_X((QSGGeometry__Point2D*)self);
}

void q_sggeometry__point2d_set_x(void* self, float x) {
    QSGGeometry__Point2D_SetX((QSGGeometry__Point2D*)self, x);
}

float q_sggeometry__point2d_y(void* self) {
    return QSGGeometry__Point2D_Y((QSGGeometry__Point2D*)self);
}

void q_sggeometry__point2d_set_y(void* self, float y) {
    QSGGeometry__Point2D_SetY((QSGGeometry__Point2D*)self, y);
}

void q_sggeometry__point2d_set(void* self, float nx, float ny) {
    QSGGeometry__Point2D_Set((QSGGeometry__Point2D*)self, nx, ny);
}

void q_sggeometry__point2d_delete(void* self) {
    QSGGeometry__Point2D_Delete((QSGGeometry__Point2D*)(self));
}

float q_sggeometry__texturedpoint2d_x(void* self) {
    return QSGGeometry__TexturedPoint2D_X((QSGGeometry__TexturedPoint2D*)self);
}

void q_sggeometry__texturedpoint2d_set_x(void* self, float x) {
    QSGGeometry__TexturedPoint2D_SetX((QSGGeometry__TexturedPoint2D*)self, x);
}

float q_sggeometry__texturedpoint2d_y(void* self) {
    return QSGGeometry__TexturedPoint2D_Y((QSGGeometry__TexturedPoint2D*)self);
}

void q_sggeometry__texturedpoint2d_set_y(void* self, float y) {
    QSGGeometry__TexturedPoint2D_SetY((QSGGeometry__TexturedPoint2D*)self, y);
}

float q_sggeometry__texturedpoint2d_tx(void* self) {
    return QSGGeometry__TexturedPoint2D_Tx((QSGGeometry__TexturedPoint2D*)self);
}

void q_sggeometry__texturedpoint2d_set_tx(void* self, float tx) {
    QSGGeometry__TexturedPoint2D_SetTx((QSGGeometry__TexturedPoint2D*)self, tx);
}

float q_sggeometry__texturedpoint2d_ty(void* self) {
    return QSGGeometry__TexturedPoint2D_Ty((QSGGeometry__TexturedPoint2D*)self);
}

void q_sggeometry__texturedpoint2d_set_ty(void* self, float ty) {
    QSGGeometry__TexturedPoint2D_SetTy((QSGGeometry__TexturedPoint2D*)self, ty);
}

void q_sggeometry__texturedpoint2d_set(void* self, float nx, float ny, float ntx, float nty) {
    QSGGeometry__TexturedPoint2D_Set((QSGGeometry__TexturedPoint2D*)self, nx, ny, ntx, nty);
}

void q_sggeometry__texturedpoint2d_delete(void* self) {
    QSGGeometry__TexturedPoint2D_Delete((QSGGeometry__TexturedPoint2D*)(self));
}

float q_sggeometry__coloredpoint2d_x(void* self) {
    return QSGGeometry__ColoredPoint2D_X((QSGGeometry__ColoredPoint2D*)self);
}

void q_sggeometry__coloredpoint2d_set_x(void* self, float x) {
    QSGGeometry__ColoredPoint2D_SetX((QSGGeometry__ColoredPoint2D*)self, x);
}

float q_sggeometry__coloredpoint2d_y(void* self) {
    return QSGGeometry__ColoredPoint2D_Y((QSGGeometry__ColoredPoint2D*)self);
}

void q_sggeometry__coloredpoint2d_set_y(void* self, float y) {
    QSGGeometry__ColoredPoint2D_SetY((QSGGeometry__ColoredPoint2D*)self, y);
}

unsigned char q_sggeometry__coloredpoint2d_r(void* self) {
    return QSGGeometry__ColoredPoint2D_R((QSGGeometry__ColoredPoint2D*)self);
}

void q_sggeometry__coloredpoint2d_set_r(void* self, unsigned char r) {
    QSGGeometry__ColoredPoint2D_SetR((QSGGeometry__ColoredPoint2D*)self, r);
}

unsigned char q_sggeometry__coloredpoint2d_g(void* self) {
    return QSGGeometry__ColoredPoint2D_G((QSGGeometry__ColoredPoint2D*)self);
}

void q_sggeometry__coloredpoint2d_set_g(void* self, unsigned char g) {
    QSGGeometry__ColoredPoint2D_SetG((QSGGeometry__ColoredPoint2D*)self, g);
}

unsigned char q_sggeometry__coloredpoint2d_b(void* self) {
    return QSGGeometry__ColoredPoint2D_B((QSGGeometry__ColoredPoint2D*)self);
}

void q_sggeometry__coloredpoint2d_set_b(void* self, unsigned char b) {
    QSGGeometry__ColoredPoint2D_SetB((QSGGeometry__ColoredPoint2D*)self, b);
}

unsigned char q_sggeometry__coloredpoint2d_a(void* self) {
    return QSGGeometry__ColoredPoint2D_A((QSGGeometry__ColoredPoint2D*)self);
}

void q_sggeometry__coloredpoint2d_set_a(void* self, unsigned char a) {
    QSGGeometry__ColoredPoint2D_SetA((QSGGeometry__ColoredPoint2D*)self, a);
}

void q_sggeometry__coloredpoint2d_set(void* self, float nx, float ny, unsigned char nr, unsigned char ng, unsigned char nb, unsigned char na) {
    QSGGeometry__ColoredPoint2D_Set((QSGGeometry__ColoredPoint2D*)self, nx, ny, nr, ng, nb, na);
}

void q_sggeometry__coloredpoint2d_delete(void* self) {
    QSGGeometry__ColoredPoint2D_Delete((QSGGeometry__ColoredPoint2D*)(self));
}
