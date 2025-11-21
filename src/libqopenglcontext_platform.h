#pragma once
#ifndef SRC_QT6C_LIBQOPENGLCONTEXT_PLATFORM_H
#define SRC_QT6C_LIBQOPENGLCONTEXT_PLATFORM_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html

/// [Qt documentation](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#fromNative)
///
/// @param context void*
/// @param display void*
QOpenGLContext* q_nativeinterface__qeglcontext_from_native(void* context, void* display);

/// [Qt documentation](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#nativeContext)
///
/// @param self QNativeInterface__QEGLContext*
void* q_nativeinterface__qeglcontext_native_context(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#config)
///
/// @param self QNativeInterface__QEGLContext*
void* q_nativeinterface__qeglcontext_config(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#display)
///
/// @param self QNativeInterface__QEGLContext*
void* q_nativeinterface__qeglcontext_display(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#invalidateContext)
///
/// @param self QNativeInterface__QEGLContext*
void q_nativeinterface__qeglcontext_invalidate_context(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnativeinterface-qeglcontext.html#fromNative)
///
/// @param context void*
/// @param display void*
/// @param shareContext QOpenGLContext*
QOpenGLContext* q_nativeinterface__qeglcontext_from_native3(void* context, void* display, void* shareContext);
#endif
