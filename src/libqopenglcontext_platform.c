#include "libqopenglcontext.hpp"
#include "libqopenglcontext_platform.hpp"
#include "libqopenglcontext_platform.h"

#if defined(__linux__) && defined(__FreeBSD__)
QNativeInterface__QEGLContext* q_nativeinterface__qeglcontext_new() {
    return QNativeInterface__QEGLContext_New();
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
QOpenGLContext* q_nativeinterface__qeglcontext_from_native(void* context, void* display) {
    return QNativeInterface__QEGLContext_FromNative(context, display);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void* q_nativeinterface__qeglcontext_native_context(void* self) {
    return QNativeInterface__QEGLContext_NativeContext((QNativeInterface__QEGLContext*)self);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void q_nativeinterface__qeglcontext_on_native_context(void* self, void* (*callback)()) {
    QNativeInterface__QEGLContext_OnNativeContext((QNativeInterface__QEGLContext*)self, (intptr_t)callback);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void* q_nativeinterface__qeglcontext_super_native_context(void* self) {
    return QNativeInterface__QEGLContext_SuperNativeContext((QNativeInterface__QEGLContext*)self);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void* q_nativeinterface__qeglcontext_config(void* self) {
    return QNativeInterface__QEGLContext_Config((QNativeInterface__QEGLContext*)self);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void q_nativeinterface__qeglcontext_on_config(void* self, void* (*callback)()) {
    QNativeInterface__QEGLContext_OnConfig((QNativeInterface__QEGLContext*)self, (intptr_t)callback);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void* q_nativeinterface__qeglcontext_super_config(void* self) {
    return QNativeInterface__QEGLContext_SuperConfig((QNativeInterface__QEGLContext*)self);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void* q_nativeinterface__qeglcontext_display(void* self) {
    return QNativeInterface__QEGLContext_Display((QNativeInterface__QEGLContext*)self);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void q_nativeinterface__qeglcontext_on_display(void* self, void* (*callback)()) {
    QNativeInterface__QEGLContext_OnDisplay((QNativeInterface__QEGLContext*)self, (intptr_t)callback);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void* q_nativeinterface__qeglcontext_super_display(void* self) {
    return QNativeInterface__QEGLContext_SuperDisplay((QNativeInterface__QEGLContext*)self);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void q_nativeinterface__qeglcontext_invalidate_context(void* self) {
    QNativeInterface__QEGLContext_InvalidateContext((QNativeInterface__QEGLContext*)self);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
QOpenGLContext* q_nativeinterface__qeglcontext_from_native3(void* context, void* display, void* shareContext) {
    return QNativeInterface__QEGLContext_FromNative3(context, display, (QOpenGLContext*)shareContext);
}
#endif
