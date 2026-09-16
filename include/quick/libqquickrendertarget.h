#pragma once
#ifndef QUICK_LIBQQUICKRENDERTARGET_H
#define QUICK_LIBQQUICKRENDERTARGET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html)

/// q_quickrendertarget_new constructs a new QQuickRenderTarget object.
///
QQuickRenderTarget* q_quickrendertarget_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html)

/// q_quickrendertarget_new2 constructs a new QQuickRenderTarget object.
///
/// @param other QQuickRenderTarget*
///
QQuickRenderTarget* q_quickrendertarget_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html#operator-eq)
///
/// @param self QQuickRenderTarget*
/// @param other QQuickRenderTarget*
///
void q_quickrendertarget_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html#isNull)
///
/// @param self QQuickRenderTarget*
///
bool q_quickrendertarget_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html#devicePixelRatio)
///
/// @param self QQuickRenderTarget*
///
double q_quickrendertarget_device_pixel_ratio(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html#setDevicePixelRatio)
///
/// @param self QQuickRenderTarget*
/// @param ratio double
///
void q_quickrendertarget_set_device_pixel_ratio(void* self, double ratio);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html#mirrorVertically)
///
/// @param self QQuickRenderTarget*
///
bool q_quickrendertarget_mirror_vertically(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html#setMirrorVertically)
///
/// @param self QQuickRenderTarget*
/// @param enable bool
///
void q_quickrendertarget_set_mirror_vertically(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html#fromOpenGLTexture)
///
/// @param textureId uint32_t
/// @param pixelSize QSize*
///
QQuickRenderTarget* q_quickrendertarget_from_open_g_l_texture(uint32_t textureId, void* pixelSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html#fromOpenGLTexture)
///
/// @param textureId uint32_t
/// @param format uint32_t
/// @param pixelSize QSize*
///
QQuickRenderTarget* q_quickrendertarget_from_open_g_l_texture2(uint32_t textureId, uint32_t format, void* pixelSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html#fromOpenGLTexture)
///
/// @param textureId uint32_t
/// @param format uint32_t
/// @param pixelSize QSize*
/// @param sampleCount int
/// @param arraySize int
/// @param flags flag of enum QQuickRenderTarget__Flag
///
QQuickRenderTarget* q_quickrendertarget_from_open_g_l_texture3(uint32_t textureId, uint32_t format, void* pixelSize, int sampleCount, int arraySize, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html#fromOpenGLRenderBuffer)
///
/// @param renderbufferId uint32_t
/// @param pixelSize QSize*
///
QQuickRenderTarget* q_quickrendertarget_from_open_g_l_render_buffer(uint32_t renderbufferId, void* pixelSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html#fromPaintDevice)
///
/// @param device QPaintDevice*
///
QQuickRenderTarget* q_quickrendertarget_from_paint_device(void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html#fromOpenGLTexture)
///
/// @param textureId uint32_t
/// @param pixelSize QSize*
/// @param sampleCount int
///
QQuickRenderTarget* q_quickrendertarget_from_open_g_l_texture32(uint32_t textureId, void* pixelSize, int sampleCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html#fromOpenGLTexture)
///
/// @param textureId uint32_t
/// @param format uint32_t
/// @param pixelSize QSize*
/// @param sampleCount int
///
QQuickRenderTarget* q_quickrendertarget_from_open_g_l_texture4(uint32_t textureId, uint32_t format, void* pixelSize, int sampleCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html#fromOpenGLRenderBuffer)
///
/// @param renderbufferId uint32_t
/// @param pixelSize QSize*
/// @param sampleCount int
///
QQuickRenderTarget* q_quickrendertarget_from_open_g_l_render_buffer3(uint32_t renderbufferId, void* pixelSize, int sampleCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html#dtor.QQuickRenderTarget)
///
/// Delete this object from C++ memory.
///
/// @param self QQuickRenderTarget*
///
void q_quickrendertarget_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrendertarget.html#public-types)

typedef enum {
    QQUICKRENDERTARGET_FLAG_MULTISAMPLERESOLVE = 1
} QQuickRenderTarget__Flag;

#endif
