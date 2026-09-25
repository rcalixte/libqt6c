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
/// @param self QNativeInterface__QEGLContext*
///
void* q_nativeinterface__qeglcontext_native_context(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#nativeContext)
///
/// Allows for overriding the related default method
///
/// @param self QNativeInterface__QEGLContext*
/// @param callback void* func()
///
void q_nativeinterface__qeglcontext_on_native_context(void* self, void* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#nativeContext)
///
/// Base class method implementation
///
/// @param self QNativeInterface__QEGLContext*
///
void* q_nativeinterface__qeglcontext_super_native_context(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#config)
///
/// @param self QNativeInterface__QEGLContext*
///
void* q_nativeinterface__qeglcontext_config(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#config)
///
/// Allows for overriding the related default method
///
/// @param self QNativeInterface__QEGLContext*
/// @param callback void* func()
///
void q_nativeinterface__qeglcontext_on_config(void* self, void* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#config)
///
/// Base class method implementation
///
/// @param self QNativeInterface__QEGLContext*
///
void* q_nativeinterface__qeglcontext_super_config(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#display)
///
/// @param self QNativeInterface__QEGLContext*
///
void* q_nativeinterface__qeglcontext_display(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#display)
///
/// Allows for overriding the related default method
///
/// @param self QNativeInterface__QEGLContext*
/// @param callback void* func()
///
void q_nativeinterface__qeglcontext_on_display(void* self, void* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#display)
///
/// Base class method implementation
///
/// @param self QNativeInterface__QEGLContext*
///
void* q_nativeinterface__qeglcontext_super_display(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#invalidateContext)
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
