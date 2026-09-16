#pragma once
#ifndef QUICK_LIBQSGTEXTURE_PLATFORM_H
#define QUICK_LIBQSGTEXTURE_PLATFORM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qsgopengltexture.html)

/// q_nativeinterface__qsgopengltexture_new constructs a new QNativeInterface::QSGOpenGLTexture object.
///
QNativeInterface__QSGOpenGLTexture* q_nativeinterface__qsgopengltexture_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qsgopengltexture.html#nativeTexture)
///
/// @param self QNativeInterface__QSGOpenGLTexture*
///
uint32_t q_nativeinterface__qsgopengltexture_native_texture(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qsgopengltexture.html#nativeTexture)
///
/// Allows for overriding the related default method
///
/// @param self QNativeInterface__QSGOpenGLTexture*
/// @param callback uint32_t func()
///
void q_nativeinterface__qsgopengltexture_on_native_texture(void* self, uint32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qsgopengltexture.html#nativeTexture)
///
/// Base class method implementation
///
/// @param self QNativeInterface__QSGOpenGLTexture*
///
uint32_t q_nativeinterface__qsgopengltexture_super_native_texture(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qsgopengltexture.html#fromNative)
///
/// @param textureId uint32_t
/// @param window QQuickWindow*
/// @param size QSize*
///
QSGTexture* q_nativeinterface__qsgopengltexture_from_native(uint32_t textureId, void* window, void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qsgopengltexture.html#fromNativeExternalOES)
///
/// @param textureId uint32_t
/// @param window QQuickWindow*
/// @param size QSize*
///
QSGTexture* q_nativeinterface__qsgopengltexture_from_native_external_o_e_s(uint32_t textureId, void* window, void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qsgopengltexture.html#fromNative)
///
/// @param textureId uint32_t
/// @param window QQuickWindow*
/// @param size QSize*
/// @param options flag of enum QQuickWindow__CreateTextureOption
///
QSGTexture* q_nativeinterface__qsgopengltexture_from_native4(uint32_t textureId, void* window, void* size, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qsgopengltexture.html#fromNativeExternalOES)
///
/// @param textureId uint32_t
/// @param window QQuickWindow*
/// @param size QSize*
/// @param options flag of enum QQuickWindow__CreateTextureOption
///
QSGTexture* q_nativeinterface__qsgopengltexture_from_native_external_o_e_s4(uint32_t textureId, void* window, void* size, int32_t options);
#endif
