#include "libqquickwindow.hpp"
#include "libqsgtexture.hpp"
#include "../libqsize.hpp"
#include "libqsgtexture_platform.hpp"
#include "libqsgtexture_platform.h"

QNativeInterface__QSGOpenGLTexture* q_nativeinterface__qsgopengltexture_new() {
    return QNativeInterface__QSGOpenGLTexture_New();
}

uint32_t q_nativeinterface__qsgopengltexture_native_texture(void* self) {
    return QNativeInterface__QSGOpenGLTexture_NativeTexture((QNativeInterface__QSGOpenGLTexture*)self);
}

void q_nativeinterface__qsgopengltexture_on_native_texture(void* self, uint32_t (*callback)()) {
    QNativeInterface__QSGOpenGLTexture_OnNativeTexture((QNativeInterface__QSGOpenGLTexture*)self, (intptr_t)callback);
}

uint32_t q_nativeinterface__qsgopengltexture_super_native_texture(void* self) {
    return QNativeInterface__QSGOpenGLTexture_SuperNativeTexture((QNativeInterface__QSGOpenGLTexture*)self);
}

QSGTexture* q_nativeinterface__qsgopengltexture_from_native(uint32_t textureId, void* window, void* size) {
    return QNativeInterface__QSGOpenGLTexture_FromNative(textureId, (QQuickWindow*)window, (QSize*)size);
}

QSGTexture* q_nativeinterface__qsgopengltexture_from_native_external_o_e_s(uint32_t textureId, void* window, void* size) {
    return QNativeInterface__QSGOpenGLTexture_FromNativeExternalOES(textureId, (QQuickWindow*)window, (QSize*)size);
}

QSGTexture* q_nativeinterface__qsgopengltexture_from_native4(uint32_t textureId, void* window, void* size, int32_t options) {
    return QNativeInterface__QSGOpenGLTexture_FromNative4(textureId, (QQuickWindow*)window, (QSize*)size, options);
}

QSGTexture* q_nativeinterface__qsgopengltexture_from_native_external_o_e_s4(uint32_t textureId, void* window, void* size, int32_t options) {
    return QNativeInterface__QSGOpenGLTexture_FromNativeExternalOES4(textureId, (QQuickWindow*)window, (QSize*)size, options);
}
