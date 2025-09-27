#include "../libqmatrix4x4.hpp"
#include "../libqrect.hpp"
#include "libqopengltextureblitter.hpp"
#include "libqopengltextureblitter.h"

QOpenGLTextureBlitter* q_opengltextureblitter_new() {
    return QOpenGLTextureBlitter_new();
}

bool q_opengltextureblitter_create(void* self) {
    return QOpenGLTextureBlitter_Create((QOpenGLTextureBlitter*)self);
}

bool q_opengltextureblitter_is_created(void* self) {
    return QOpenGLTextureBlitter_IsCreated((QOpenGLTextureBlitter*)self);
}

void q_opengltextureblitter_destroy(void* self) {
    QOpenGLTextureBlitter_Destroy((QOpenGLTextureBlitter*)self);
}

bool q_opengltextureblitter_supports_external_o_e_s_target(void* self) {
    return QOpenGLTextureBlitter_SupportsExternalOESTarget((QOpenGLTextureBlitter*)self);
}

bool q_opengltextureblitter_supports_rectangle_target(void* self) {
    return QOpenGLTextureBlitter_SupportsRectangleTarget((QOpenGLTextureBlitter*)self);
}

void q_opengltextureblitter_bind(void* self) {
    QOpenGLTextureBlitter_Bind((QOpenGLTextureBlitter*)self);
}

void q_opengltextureblitter_release(void* self) {
    QOpenGLTextureBlitter_Release((QOpenGLTextureBlitter*)self);
}

void q_opengltextureblitter_set_red_blue_swizzle(void* self, bool swizzle) {
    QOpenGLTextureBlitter_SetRedBlueSwizzle((QOpenGLTextureBlitter*)self, swizzle);
}

void q_opengltextureblitter_set_opacity(void* self, float opacity) {
    QOpenGLTextureBlitter_SetOpacity((QOpenGLTextureBlitter*)self, opacity);
}

void q_opengltextureblitter_blit(void* self, uint32_t texture, void* targetTransform, int32_t sourceOrigin) {
    QOpenGLTextureBlitter_Blit((QOpenGLTextureBlitter*)self, texture, (QMatrix4x4*)targetTransform, sourceOrigin);
}

QMatrix4x4* q_opengltextureblitter_target_transform(void* target, void* viewport) {
    return QOpenGLTextureBlitter_TargetTransform((QRectF*)target, (QRect*)viewport);
}

void q_opengltextureblitter_bind1(void* self, uint32_t target) {
    QOpenGLTextureBlitter_Bind1((QOpenGLTextureBlitter*)self, target);
}

void q_opengltextureblitter_delete(void* self) {
    QOpenGLTextureBlitter_Delete((QOpenGLTextureBlitter*)(self));
}
