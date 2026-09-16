#include "../libqpaintdevice.hpp"
#include "../libqsize.hpp"
#include "libqquickrendertarget.hpp"
#include "libqquickrendertarget.h"

QQuickRenderTarget* q_quickrendertarget_new() {
    return QQuickRenderTarget_New();
}

QQuickRenderTarget* q_quickrendertarget_new2(void* other) {
    return QQuickRenderTarget_New2((QQuickRenderTarget*)other);
}

void q_quickrendertarget_operator_assign(void* self, void* other) {
    QQuickRenderTarget_OperatorAssign((QQuickRenderTarget*)self, (QQuickRenderTarget*)other);
}

bool q_quickrendertarget_is_null(void* self) {
    return QQuickRenderTarget_IsNull((QQuickRenderTarget*)self);
}

double q_quickrendertarget_device_pixel_ratio(void* self) {
    return QQuickRenderTarget_DevicePixelRatio((QQuickRenderTarget*)self);
}

void q_quickrendertarget_set_device_pixel_ratio(void* self, double ratio) {
    QQuickRenderTarget_SetDevicePixelRatio((QQuickRenderTarget*)self, ratio);
}

bool q_quickrendertarget_mirror_vertically(void* self) {
    return QQuickRenderTarget_MirrorVertically((QQuickRenderTarget*)self);
}

void q_quickrendertarget_set_mirror_vertically(void* self, bool enable) {
    QQuickRenderTarget_SetMirrorVertically((QQuickRenderTarget*)self, enable);
}

QQuickRenderTarget* q_quickrendertarget_from_open_g_l_texture(uint32_t textureId, void* pixelSize) {
    return QQuickRenderTarget_FromOpenGLTexture(textureId, (QSize*)pixelSize);
}

QQuickRenderTarget* q_quickrendertarget_from_open_g_l_texture2(uint32_t textureId, uint32_t format, void* pixelSize) {
    return QQuickRenderTarget_FromOpenGLTexture2(textureId, format, (QSize*)pixelSize);
}

QQuickRenderTarget* q_quickrendertarget_from_open_g_l_texture3(uint32_t textureId, uint32_t format, void* pixelSize, int sampleCount, int arraySize, int32_t flags) {
    return QQuickRenderTarget_FromOpenGLTexture3(textureId, format, (QSize*)pixelSize, sampleCount, arraySize, flags);
}

QQuickRenderTarget* q_quickrendertarget_from_open_g_l_render_buffer(uint32_t renderbufferId, void* pixelSize) {
    return QQuickRenderTarget_FromOpenGLRenderBuffer(renderbufferId, (QSize*)pixelSize);
}

QQuickRenderTarget* q_quickrendertarget_from_paint_device(void* device) {
    return QQuickRenderTarget_FromPaintDevice((QPaintDevice*)device);
}

QQuickRenderTarget* q_quickrendertarget_from_open_g_l_texture32(uint32_t textureId, void* pixelSize, int sampleCount) {
    return QQuickRenderTarget_FromOpenGLTexture32(textureId, (QSize*)pixelSize, sampleCount);
}

QQuickRenderTarget* q_quickrendertarget_from_open_g_l_texture4(uint32_t textureId, uint32_t format, void* pixelSize, int sampleCount) {
    return QQuickRenderTarget_FromOpenGLTexture4(textureId, format, (QSize*)pixelSize, sampleCount);
}

QQuickRenderTarget* q_quickrendertarget_from_open_g_l_render_buffer3(uint32_t renderbufferId, void* pixelSize, int sampleCount) {
    return QQuickRenderTarget_FromOpenGLRenderBuffer3(renderbufferId, (QSize*)pixelSize, sampleCount);
}

void q_quickrendertarget_delete(void* self) {
    QQuickRenderTarget_Delete((QQuickRenderTarget*)(self));
}
