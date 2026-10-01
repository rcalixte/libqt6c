#pragma once
#ifndef LIBQOPENGLCONTEXT_PLATFORM_H
#define LIBQOPENGLCONTEXT_PLATFORM_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html)

#if defined(__linux__) && defined(__FreeBSD__)
/// q_nativeinterface__qeglcontext_new constructs a new QNativeInterface::QEGLContext object.
///
QNativeInterface__QEGLContext* q_nativeinterface__qeglcontext_new();
#endif

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#fromNative)
///
/// @param context void*
/// @param display void*
///
QOpenGLContext* q_nativeinterface__qeglcontext_from_native(void* context, void* display);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#nativeContext)
///
/// @warning This method must be implemented with `q_nativeinterface__qeglcontext_on_native_context` before it can be called.
///
/// @param self const QNativeInterface__QEGLContext*
///
void* q_nativeinterface__qeglcontext_native_context(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#nativeContext)
///
/// Allows for overriding the related default method
///
/// @param self const QNativeInterface__QEGLContext*
/// @param callback void* func(const QNativeInterface__QEGLContext* self)
///
void q_nativeinterface__qeglcontext_on_native_context(const void* self, void* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#config)
///
/// @warning This method must be implemented with `q_nativeinterface__qeglcontext_on_config` before it can be called.
///
/// @param self const QNativeInterface__QEGLContext*
///
void* q_nativeinterface__qeglcontext_config(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#config)
///
/// Allows for overriding the related default method
///
/// @param self const QNativeInterface__QEGLContext*
/// @param callback void* func(const QNativeInterface__QEGLContext* self)
///
void q_nativeinterface__qeglcontext_on_config(const void* self, void* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#display)
///
/// @warning This method must be implemented with `q_nativeinterface__qeglcontext_on_display` before it can be called.
///
/// @param self const QNativeInterface__QEGLContext*
///
void* q_nativeinterface__qeglcontext_display(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#display)
///
/// Allows for overriding the related default method
///
/// @param self const QNativeInterface__QEGLContext*
/// @param callback void* func(const QNativeInterface__QEGLContext* self)
///
void q_nativeinterface__qeglcontext_on_display(const void* self, void* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#invalidateContext)
///
/// @warning This method must be implemented with `q_nativeinterface__qeglcontext_on_invalidate_context` before it can be called.
///
/// @param self QNativeInterface__QEGLContext*
///
void q_nativeinterface__qeglcontext_invalidate_context(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#fromNative)
///
/// @param context void*
/// @param display void*
/// @param shareContext QOpenGLContext*
///
QOpenGLContext* q_nativeinterface__qeglcontext_from_native3(void* context, void* display, void* shareContext);
#endif
