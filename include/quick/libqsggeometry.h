#pragma once
#ifndef QUICK_LIBQSGGEOMETRY_H
#define QUICK_LIBQSGGEOMETRY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html)

/// q_sggeometry_new constructs a new QSGGeometry object.
///
/// @param attribs QSGGeometry__AttributeSet*
/// @param vertexCount int
///
QSGGeometry* q_sggeometry_new(void* attribs, int vertexCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html)

/// q_sggeometry_new2 constructs a new QSGGeometry object.
///
/// @param attribs QSGGeometry__AttributeSet*
/// @param vertexCount int
/// @param indexCount int
///
QSGGeometry* q_sggeometry_new2(void* attribs, int vertexCount, int indexCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html)

/// q_sggeometry_new3 constructs a new QSGGeometry object.
///
/// @param attribs QSGGeometry__AttributeSet*
/// @param vertexCount int
/// @param indexCount int
/// @param indexType int
///
QSGGeometry* q_sggeometry_new3(void* attribs, int vertexCount, int indexCount, int indexType);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#defaultAttributes_Point2D)
///
const QSGGeometry__AttributeSet* q_sggeometry_default_attributes__point2_d();

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#defaultAttributes_TexturedPoint2D)
///
const QSGGeometry__AttributeSet* q_sggeometry_default_attributes__textured_point2_d();

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#defaultAttributes_ColoredPoint2D)
///
const QSGGeometry__AttributeSet* q_sggeometry_default_attributes__colored_point2_d();

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#setDrawingMode)
///
/// @param self QSGGeometry*
/// @param mode uint32_t
///
void q_sggeometry_set_drawing_mode(void* self, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#drawingMode)
///
/// @param self QSGGeometry*
///
uint32_t q_sggeometry_drawing_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#allocate)
///
/// @param self QSGGeometry*
/// @param vertexCount int
///
void q_sggeometry_allocate(void* self, int vertexCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#vertexCount)
///
/// @param self QSGGeometry*
///
int32_t q_sggeometry_vertex_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#vertexData)
///
/// @param self QSGGeometry*
///
void* q_sggeometry_vertex_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#vertexDataAsPoint2D)
///
/// @param self QSGGeometry*
///
QSGGeometry__Point2D* q_sggeometry_vertex_data_as_point2_d(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#vertexDataAsTexturedPoint2D)
///
/// @param self QSGGeometry*
///
QSGGeometry__TexturedPoint2D* q_sggeometry_vertex_data_as_textured_point2_d(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#vertexDataAsColoredPoint2D)
///
/// @param self QSGGeometry*
///
QSGGeometry__ColoredPoint2D* q_sggeometry_vertex_data_as_colored_point2_d(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#vertexData)
///
/// @param self QSGGeometry*
///
const void* q_sggeometry_vertex_data2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#vertexDataAsPoint2D)
///
/// @param self QSGGeometry*
///
const QSGGeometry__Point2D* q_sggeometry_vertex_data_as_point2_d2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#vertexDataAsTexturedPoint2D)
///
/// @param self QSGGeometry*
///
const QSGGeometry__TexturedPoint2D* q_sggeometry_vertex_data_as_textured_point2_d2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#vertexDataAsColoredPoint2D)
///
/// @param self QSGGeometry*
///
const QSGGeometry__ColoredPoint2D* q_sggeometry_vertex_data_as_colored_point2_d2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#indexType)
///
/// @param self QSGGeometry*
///
int32_t q_sggeometry_index_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#indexCount)
///
/// @param self QSGGeometry*
///
int32_t q_sggeometry_index_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#indexData)
///
/// @param self QSGGeometry*
///
void* q_sggeometry_index_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#indexDataAsUInt)
///
/// @param self QSGGeometry*
///
uint32_t* q_sggeometry_index_data_as_u_int(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#indexDataAsUShort)
///
/// @param self QSGGeometry*
///
uint16_t* q_sggeometry_index_data_as_u_short(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#sizeOfIndex)
///
/// @param self QSGGeometry*
///
int32_t q_sggeometry_size_of_index(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#indexData)
///
/// @param self QSGGeometry*
///
const void* q_sggeometry_index_data2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#indexDataAsUInt)
///
/// @param self QSGGeometry*
///
const uint32_t* q_sggeometry_index_data_as_u_int2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#indexDataAsUShort)
///
/// @param self QSGGeometry*
///
const uint16_t* q_sggeometry_index_data_as_u_short2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#attributeCount)
///
/// @param self QSGGeometry*
///
int32_t q_sggeometry_attribute_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#attributes)
///
/// @param self QSGGeometry*
///
const QSGGeometry__Attribute* q_sggeometry_attributes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#sizeOfVertex)
///
/// @param self QSGGeometry*
///
int32_t q_sggeometry_size_of_vertex(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#updateRectGeometry)
///
/// @param g QSGGeometry*
/// @param rect QRectF*
///
void q_sggeometry_update_rect_geometry(void* g, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#updateTexturedRectGeometry)
///
/// @param g QSGGeometry*
/// @param rect QRectF*
/// @param sourceRect QRectF*
///
void q_sggeometry_update_textured_rect_geometry(void* g, void* rect, void* sourceRect);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#updateColoredRectGeometry)
///
/// @param g QSGGeometry*
/// @param rect QRectF*
///
void q_sggeometry_update_colored_rect_geometry(void* g, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#setIndexDataPattern)
///
/// @param self QSGGeometry*
/// @param p enum QSGGeometry__DataPattern
///
void q_sggeometry_set_index_data_pattern(void* self, int32_t p);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#indexDataPattern)
///
/// @param self QSGGeometry*
///
/// @return enum QSGGeometry__DataPattern
///
int32_t q_sggeometry_index_data_pattern(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#setVertexDataPattern)
///
/// @param self QSGGeometry*
/// @param p enum QSGGeometry__DataPattern
///
void q_sggeometry_set_vertex_data_pattern(void* self, int32_t p);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#vertexDataPattern)
///
/// @param self QSGGeometry*
///
/// @return enum QSGGeometry__DataPattern
///
int32_t q_sggeometry_vertex_data_pattern(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#markIndexDataDirty)
///
/// @param self QSGGeometry*
///
void q_sggeometry_mark_index_data_dirty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#markVertexDataDirty)
///
/// @param self QSGGeometry*
///
void q_sggeometry_mark_vertex_data_dirty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#lineWidth)
///
/// @param self QSGGeometry*
///
float q_sggeometry_line_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#setLineWidth)
///
/// @param self QSGGeometry*
/// @param w float
///
void q_sggeometry_set_line_width(void* self, float w);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#allocate)
///
/// @param self QSGGeometry*
/// @param vertexCount int
/// @param indexCount int
///
void q_sggeometry_allocate2(void* self, int vertexCount, int indexCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#dtor.QSGGeometry)
///
/// Delete this object from C++ memory.
///
/// @param self QSGGeometry*
///
void q_sggeometry_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attribute.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attribute.html#position-var)
///
/// @param self QSGGeometry__Attribute*
///
int32_t q_sggeometry__attribute_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attribute.html#position-var)
///
/// @param self QSGGeometry__Attribute*
/// @param position int
///
void q_sggeometry__attribute_set_position(void* self, int position);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attribute.html#tupleSize-var)
///
/// @param self QSGGeometry__Attribute*
///
int32_t q_sggeometry__attribute_tuple_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attribute.html#tupleSize-var)
///
/// @param self QSGGeometry__Attribute*
/// @param tupleSize int
///
void q_sggeometry__attribute_set_tuple_size(void* self, int tupleSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attribute.html#type-var)
///
/// @param self QSGGeometry__Attribute*
///
int32_t q_sggeometry__attribute_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attribute.html#type-var)
///
/// @param self QSGGeometry__Attribute*
/// @param type int
///
void q_sggeometry__attribute_set_type(void* self, int type);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attribute.html#isVertexCoordinate-var)
///
/// @param self QSGGeometry__Attribute*
///
uint32_t q_sggeometry__attribute_is_vertex_coordinate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attribute.html#isVertexCoordinate-var)
///
/// @param self QSGGeometry__Attribute*
/// @param isVertexCoordinate uint32_t
///
void q_sggeometry__attribute_set_is_vertex_coordinate(void* self, uint32_t isVertexCoordinate);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attribute.html#attributeType-var)
///
/// @param self QSGGeometry__Attribute*
///
/// @return enum QSGGeometry__AttributeType
///
int32_t q_sggeometry__attribute_attribute_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attribute.html#attributeType-var)
///
/// @param self QSGGeometry__Attribute*
/// @param attributeType enum QSGGeometry__AttributeType
///
void q_sggeometry__attribute_set_attribute_type(void* self, int32_t attributeType);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attribute.html#reserved-var)
///
/// @param self QSGGeometry__Attribute*
///
uint32_t q_sggeometry__attribute_reserved(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attribute.html#reserved-var)
///
/// @param self QSGGeometry__Attribute*
/// @param reserved uint32_t
///
void q_sggeometry__attribute_set_reserved(void* self, uint32_t reserved);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attribute.html#create)
///
/// @param pos int
/// @param tupleSize int
/// @param primitiveType int
///
QSGGeometry__Attribute* q_sggeometry__attribute_create(int pos, int tupleSize, int primitiveType);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attribute.html#createWithAttributeType)
///
/// @param pos int
/// @param tupleSize int
/// @param primitiveType int
/// @param attributeType enum QSGGeometry__AttributeType
///
QSGGeometry__Attribute* q_sggeometry__attribute_create_with_attribute_type(int pos, int tupleSize, int primitiveType, int32_t attributeType);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attribute.html#create)
///
/// @param pos int
/// @param tupleSize int
/// @param primitiveType int
/// @param isPosition bool
///
QSGGeometry__Attribute* q_sggeometry__attribute_create4(int pos, int tupleSize, int primitiveType, bool isPosition);

/// Delete this object from C++ memory.
///
/// @param self QSGGeometry__Attribute*
///
void q_sggeometry__attribute_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attributeset.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attributeset.html#count-var)
///
/// @param self QSGGeometry__AttributeSet*
///
int32_t q_sggeometry__attributeset_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attributeset.html#count-var)
///
/// @param self QSGGeometry__AttributeSet*
/// @param count int
///
void q_sggeometry__attributeset_set_count(void* self, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attributeset.html#stride-var)
///
/// @param self QSGGeometry__AttributeSet*
///
int32_t q_sggeometry__attributeset_stride(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attributeset.html#stride-var)
///
/// @param self QSGGeometry__AttributeSet*
/// @param stride int
///
void q_sggeometry__attributeset_set_stride(void* self, int stride);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attributeset.html#attributes-var)
///
/// @param self QSGGeometry__AttributeSet*
///
const QSGGeometry__Attribute* q_sggeometry__attributeset_attributes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attributeset.html#attributes-var)
///
/// @param self QSGGeometry__AttributeSet*
/// @param attributes QSGGeometry__Attribute*
///
void q_sggeometry__attributeset_set_attributes(void* self, void* attributes);

/// Delete this object from C++ memory.
///
/// @param self QSGGeometry__AttributeSet*
///
void q_sggeometry__attributeset_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-point2d.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-point2d.html#x-var)
///
/// @param self QSGGeometry__Point2D*
///
float q_sggeometry__point2d_x(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-point2d.html#x-var)
///
/// @param self QSGGeometry__Point2D*
/// @param x float
///
void q_sggeometry__point2d_set_x(void* self, float x);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-point2d.html#y-var)
///
/// @param self QSGGeometry__Point2D*
///
float q_sggeometry__point2d_y(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-point2d.html#y-var)
///
/// @param self QSGGeometry__Point2D*
/// @param y float
///
void q_sggeometry__point2d_set_y(void* self, float y);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-point2d.html#set)
///
/// @param self QSGGeometry__Point2D*
/// @param nx float
/// @param ny float
///
void q_sggeometry__point2d_set(void* self, float nx, float ny);

/// Delete this object from C++ memory.
///
/// @param self QSGGeometry__Point2D*
///
void q_sggeometry__point2d_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-texturedpoint2d.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-texturedpoint2d.html#x-var)
///
/// @param self QSGGeometry__TexturedPoint2D*
///
float q_sggeometry__texturedpoint2d_x(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-texturedpoint2d.html#x-var)
///
/// @param self QSGGeometry__TexturedPoint2D*
/// @param x float
///
void q_sggeometry__texturedpoint2d_set_x(void* self, float x);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-texturedpoint2d.html#y-var)
///
/// @param self QSGGeometry__TexturedPoint2D*
///
float q_sggeometry__texturedpoint2d_y(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-texturedpoint2d.html#y-var)
///
/// @param self QSGGeometry__TexturedPoint2D*
/// @param y float
///
void q_sggeometry__texturedpoint2d_set_y(void* self, float y);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-texturedpoint2d.html#tx-var)
///
/// @param self QSGGeometry__TexturedPoint2D*
///
float q_sggeometry__texturedpoint2d_tx(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-texturedpoint2d.html#tx-var)
///
/// @param self QSGGeometry__TexturedPoint2D*
/// @param tx float
///
void q_sggeometry__texturedpoint2d_set_tx(void* self, float tx);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-texturedpoint2d.html#ty-var)
///
/// @param self QSGGeometry__TexturedPoint2D*
///
float q_sggeometry__texturedpoint2d_ty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-texturedpoint2d.html#ty-var)
///
/// @param self QSGGeometry__TexturedPoint2D*
/// @param ty float
///
void q_sggeometry__texturedpoint2d_set_ty(void* self, float ty);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-texturedpoint2d.html#set)
///
/// @param self QSGGeometry__TexturedPoint2D*
/// @param nx float
/// @param ny float
/// @param ntx float
/// @param nty float
///
void q_sggeometry__texturedpoint2d_set(void* self, float nx, float ny, float ntx, float nty);

/// Delete this object from C++ memory.
///
/// @param self QSGGeometry__TexturedPoint2D*
///
void q_sggeometry__texturedpoint2d_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-coloredpoint2d.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-coloredpoint2d.html#x-var)
///
/// @param self QSGGeometry__ColoredPoint2D*
///
float q_sggeometry__coloredpoint2d_x(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-coloredpoint2d.html#x-var)
///
/// @param self QSGGeometry__ColoredPoint2D*
/// @param x float
///
void q_sggeometry__coloredpoint2d_set_x(void* self, float x);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-coloredpoint2d.html#y-var)
///
/// @param self QSGGeometry__ColoredPoint2D*
///
float q_sggeometry__coloredpoint2d_y(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-coloredpoint2d.html#y-var)
///
/// @param self QSGGeometry__ColoredPoint2D*
/// @param y float
///
void q_sggeometry__coloredpoint2d_set_y(void* self, float y);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-coloredpoint2d.html#r-var)
///
/// @param self QSGGeometry__ColoredPoint2D*
///
unsigned char q_sggeometry__coloredpoint2d_r(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-coloredpoint2d.html#r-var)
///
/// @param self QSGGeometry__ColoredPoint2D*
/// @param r unsigned char
///
void q_sggeometry__coloredpoint2d_set_r(void* self, unsigned char r);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-coloredpoint2d.html#g-var)
///
/// @param self QSGGeometry__ColoredPoint2D*
///
unsigned char q_sggeometry__coloredpoint2d_g(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-coloredpoint2d.html#g-var)
///
/// @param self QSGGeometry__ColoredPoint2D*
/// @param g unsigned char
///
void q_sggeometry__coloredpoint2d_set_g(void* self, unsigned char g);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-coloredpoint2d.html#b-var)
///
/// @param self QSGGeometry__ColoredPoint2D*
///
unsigned char q_sggeometry__coloredpoint2d_b(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-coloredpoint2d.html#b-var)
///
/// @param self QSGGeometry__ColoredPoint2D*
/// @param b unsigned char
///
void q_sggeometry__coloredpoint2d_set_b(void* self, unsigned char b);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-coloredpoint2d.html#a-var)
///
/// @param self QSGGeometry__ColoredPoint2D*
///
unsigned char q_sggeometry__coloredpoint2d_a(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-coloredpoint2d.html#a-var)
///
/// @param self QSGGeometry__ColoredPoint2D*
/// @param a unsigned char
///
void q_sggeometry__coloredpoint2d_set_a(void* self, unsigned char a);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-coloredpoint2d.html#set)
///
/// @param self QSGGeometry__ColoredPoint2D*
/// @param nx float
/// @param ny float
/// @param nr unsigned char
/// @param ng unsigned char
/// @param nb unsigned char
/// @param na unsigned char
///
void q_sggeometry__coloredpoint2d_set(void* self, float nx, float ny, unsigned char nr, unsigned char ng, unsigned char nb, unsigned char na);

/// Delete this object from C++ memory.
///
/// @param self QSGGeometry__ColoredPoint2D*
///
void q_sggeometry__coloredpoint2d_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#public-types)

typedef enum {
    QSGGEOMETRY_ATTRIBUTETYPE_UNKNOWNATTRIBUTE = 0,
    QSGGEOMETRY_ATTRIBUTETYPE_POSITIONATTRIBUTE = 1,
    QSGGEOMETRY_ATTRIBUTETYPE_COLORATTRIBUTE = 2,
    QSGGEOMETRY_ATTRIBUTETYPE_TEXCOORDATTRIBUTE = 3,
    QSGGEOMETRY_ATTRIBUTETYPE_TEXCOORD1ATTRIBUTE = 4,
    QSGGEOMETRY_ATTRIBUTETYPE_TEXCOORD2ATTRIBUTE = 5
} QSGGeometry__AttributeType;

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#public-types)

typedef enum {
    QSGGEOMETRY_DATAPATTERN_ALWAYSUPLOADPATTERN = 0,
    QSGGEOMETRY_DATAPATTERN_STREAMPATTERN = 1,
    QSGGEOMETRY_DATAPATTERN_DYNAMICPATTERN = 2,
    QSGGEOMETRY_DATAPATTERN_STATICPATTERN = 3
} QSGGeometry__DataPattern;

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#public-types)

typedef enum {
    QSGGEOMETRY_DRAWINGMODE_DRAWPOINTS = 0,
    QSGGEOMETRY_DRAWINGMODE_DRAWLINES = 1,
    QSGGEOMETRY_DRAWINGMODE_DRAWLINELOOP = 2,
    QSGGEOMETRY_DRAWINGMODE_DRAWLINESTRIP = 3,
    QSGGEOMETRY_DRAWINGMODE_DRAWTRIANGLES = 4,
    QSGGEOMETRY_DRAWINGMODE_DRAWTRIANGLESTRIP = 5,
    QSGGEOMETRY_DRAWINGMODE_DRAWTRIANGLEFAN = 6
} QSGGeometry__DrawingMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#public-types)

typedef enum {
    QSGGEOMETRY_TYPE_BYTETYPE = 5120,
    QSGGEOMETRY_TYPE_UNSIGNEDBYTETYPE = 5121,
    QSGGEOMETRY_TYPE_SHORTTYPE = 5122,
    QSGGEOMETRY_TYPE_UNSIGNEDSHORTTYPE = 5123,
    QSGGEOMETRY_TYPE_INTTYPE = 5124,
    QSGGEOMETRY_TYPE_UNSIGNEDINTTYPE = 5125,
    QSGGEOMETRY_TYPE_FLOATTYPE = 5126,
    QSGGEOMETRY_TYPE_BYTES2TYPE = 5127,
    QSGGEOMETRY_TYPE_BYTES3TYPE = 5128,
    QSGGEOMETRY_TYPE_BYTES4TYPE = 5129,
    QSGGEOMETRY_TYPE_DOUBLETYPE = 5130
} QSGGeometry__Type;

#endif
