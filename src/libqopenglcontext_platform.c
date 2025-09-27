#include "libqopenglcontext.hpp"
#include "libqopenglcontext_platform.hpp"
#include "libqopenglcontext_platform.h"

QOpenGLContext* q_nativeinterface__qeglcontext_from_native(void* context, void* display) {
    return QNativeInterface__QEGLContext_FromNative(context, display);
}

void* q_nativeinterface__qeglcontext_native_context(void* self) {
    return QNativeInterface__QEGLContext_NativeContext((QNativeInterface__QEGLContext*)self);
}

void* q_nativeinterface__qeglcontext_config(void* self) {
    return QNativeInterface__QEGLContext_Config((QNativeInterface__QEGLContext*)self);
}

void* q_nativeinterface__qeglcontext_display(void* self) {
    return QNativeInterface__QEGLContext_Display((QNativeInterface__QEGLContext*)self);
}

void q_nativeinterface__qeglcontext_invalidate_context(void* self) {
    QNativeInterface__QEGLContext_InvalidateContext((QNativeInterface__QEGLContext*)self);
}

QOpenGLContext* q_nativeinterface__qeglcontext_from_native3(void* context, void* display, void* shareContext) {
    return QNativeInterface__QEGLContext_FromNative3(context, display, (QOpenGLContext*)shareContext);
}
