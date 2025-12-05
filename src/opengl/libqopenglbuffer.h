#pragma once
#ifndef SRC_OPENGL_QT6C_LIBQOPENGLBUFFER_H
#define SRC_OPENGL_QT6C_LIBQOPENGLBUFFER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html)

/// q_openglbuffer_new constructs a new QOpenGLBuffer object.
///
QOpenGLBuffer* q_openglbuffer_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html)

/// q_openglbuffer_new2 constructs a new QOpenGLBuffer object.
///
/// @param type enum QOpenGLBuffer__Type
///
QOpenGLBuffer* q_openglbuffer_new2(int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html)

/// q_openglbuffer_new3 constructs a new QOpenGLBuffer object.
///
/// @param other QOpenGLBuffer*
///
QOpenGLBuffer* q_openglbuffer_new3(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#operator-eq)
///
/// @param self QOpenGLBuffer*
/// @param other QOpenGLBuffer*
///
void q_openglbuffer_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#swap)
///
/// @param self QOpenGLBuffer*
/// @param other QOpenGLBuffer*
///
void q_openglbuffer_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#type)
///
/// @param self QOpenGLBuffer*
///
/// @return enum QOpenGLBuffer__Type
///
int32_t q_openglbuffer_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#usagePattern)
///
/// @param self QOpenGLBuffer*
///
/// @return enum QOpenGLBuffer__UsagePattern
///
int32_t q_openglbuffer_usage_pattern(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#setUsagePattern)
///
/// @param self QOpenGLBuffer*
/// @param value enum QOpenGLBuffer__UsagePattern
///
void q_openglbuffer_set_usage_pattern(void* self, int32_t value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#create)
///
/// @param self QOpenGLBuffer*
///
bool q_openglbuffer_create(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#isCreated)
///
/// @param self QOpenGLBuffer*
///
bool q_openglbuffer_is_created(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#destroy)
///
/// @param self QOpenGLBuffer*
///
void q_openglbuffer_destroy(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#bind)
///
/// @param self QOpenGLBuffer*
///
bool q_openglbuffer_bind(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#release)
///
/// @param self QOpenGLBuffer*
///
void q_openglbuffer_release(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#release)
///
/// @param type enum QOpenGLBuffer__Type
///
void q_openglbuffer_release2(int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#bufferId)
///
/// @param self QOpenGLBuffer*
///
uint32_t q_openglbuffer_buffer_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#size)
///
/// @param self QOpenGLBuffer*
///
int32_t q_openglbuffer_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#read)
///
/// @param self QOpenGLBuffer*
/// @param offset int
/// @param data void*
/// @param count int
///
bool q_openglbuffer_read(void* self, int offset, void* data, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#write)
///
/// @param self QOpenGLBuffer*
/// @param offset int
/// @param data void*
/// @param count int
///
void q_openglbuffer_write(void* self, int offset, void* data, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#allocate)
///
/// @param self QOpenGLBuffer*
/// @param data void*
/// @param count int
///
void q_openglbuffer_allocate(void* self, void* data, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#allocate)
///
/// @param self QOpenGLBuffer*
/// @param count int
///
void q_openglbuffer_allocate2(void* self, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#map)
///
/// @param self QOpenGLBuffer*
/// @param access enum QOpenGLBuffer__Access
///
void* q_openglbuffer_map(void* self, int32_t access);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#mapRange)
///
/// @param self QOpenGLBuffer*
/// @param offset int
/// @param count int
/// @param access flag of enum QOpenGLBuffer__RangeAccessFlag
///
void* q_openglbuffer_map_range(void* self, int offset, int count, int32_t access);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#unmap)
///
/// @param self QOpenGLBuffer*
///
bool q_openglbuffer_unmap(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#dtor.QOpenGLBuffer)
///
/// Delete this object from C++ memory.
///
/// @param self QOpenGLBuffer*
///
void q_openglbuffer_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#public-types)

typedef enum {
    QOPENGLBUFFER_TYPE_VERTEXBUFFER = 34962,
    QOPENGLBUFFER_TYPE_INDEXBUFFER = 34963,
    QOPENGLBUFFER_TYPE_PIXELPACKBUFFER = 35051,
    QOPENGLBUFFER_TYPE_PIXELUNPACKBUFFER = 35052
} QOpenGLBuffer__Type;

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#public-types)

typedef enum {
    QOPENGLBUFFER_USAGEPATTERN_STREAMDRAW = 35040,
    QOPENGLBUFFER_USAGEPATTERN_STREAMREAD = 35041,
    QOPENGLBUFFER_USAGEPATTERN_STREAMCOPY = 35042,
    QOPENGLBUFFER_USAGEPATTERN_STATICDRAW = 35044,
    QOPENGLBUFFER_USAGEPATTERN_STATICREAD = 35045,
    QOPENGLBUFFER_USAGEPATTERN_STATICCOPY = 35046,
    QOPENGLBUFFER_USAGEPATTERN_DYNAMICDRAW = 35048,
    QOPENGLBUFFER_USAGEPATTERN_DYNAMICREAD = 35049,
    QOPENGLBUFFER_USAGEPATTERN_DYNAMICCOPY = 35050
} QOpenGLBuffer__UsagePattern;

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#public-types)

typedef enum {
    QOPENGLBUFFER_ACCESS_READONLY = 35000,
    QOPENGLBUFFER_ACCESS_WRITEONLY = 35001,
    QOPENGLBUFFER_ACCESS_READWRITE = 35002
} QOpenGLBuffer__Access;

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#public-types)

typedef enum {
    QOPENGLBUFFER_RANGEACCESSFLAG_RANGEREAD = 1,
    QOPENGLBUFFER_RANGEACCESSFLAG_RANGEWRITE = 2,
    QOPENGLBUFFER_RANGEACCESSFLAG_RANGEINVALIDATE = 4,
    QOPENGLBUFFER_RANGEACCESSFLAG_RANGEINVALIDATEBUFFER = 8,
    QOPENGLBUFFER_RANGEACCESSFLAG_RANGEFLUSHEXPLICIT = 16,
    QOPENGLBUFFER_RANGEACCESSFLAG_RANGEUNSYNCHRONIZED = 32
} QOpenGLBuffer__RangeAccessFlag;

#endif
