#pragma once
#ifndef SRC_OPENGLQT6C_LIBQOPENGLTEXTUREBLITTER_H
#define SRC_OPENGLQT6C_LIBQOPENGLTEXTUREBLITTER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qopengltextureblitter.html

/// q_opengltextureblitter_new constructs a new QOpenGLTextureBlitter object.
///
QOpenGLTextureBlitter* q_opengltextureblitter_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qopengltextureblitter.html#create)
///
/// @param self QOpenGLTextureBlitter*
bool q_opengltextureblitter_create(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopengltextureblitter.html#isCreated)
///
/// @param self QOpenGLTextureBlitter*
bool q_opengltextureblitter_is_created(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopengltextureblitter.html#destroy)
///
/// @param self QOpenGLTextureBlitter*
void q_opengltextureblitter_destroy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopengltextureblitter.html#supportsExternalOESTarget)
///
/// @param self QOpenGLTextureBlitter*
bool q_opengltextureblitter_supports_external_o_e_s_target(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopengltextureblitter.html#supportsRectangleTarget)
///
/// @param self QOpenGLTextureBlitter*
bool q_opengltextureblitter_supports_rectangle_target(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopengltextureblitter.html#bind)
///
/// @param self QOpenGLTextureBlitter*
void q_opengltextureblitter_bind(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopengltextureblitter.html#release)
///
/// @param self QOpenGLTextureBlitter*
void q_opengltextureblitter_release(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopengltextureblitter.html#setRedBlueSwizzle)
///
/// @param self QOpenGLTextureBlitter*
/// @param swizzle bool
void q_opengltextureblitter_set_red_blue_swizzle(void* self, bool swizzle);

/// [Qt documentation](https://doc.qt.io/qt-6/qopengltextureblitter.html#setOpacity)
///
/// @param self QOpenGLTextureBlitter*
/// @param opacity float
void q_opengltextureblitter_set_opacity(void* self, float opacity);

/// [Qt documentation](https://doc.qt.io/qt-6/qopengltextureblitter.html#blit)
///
/// @param self QOpenGLTextureBlitter*
/// @param texture uint32_t
/// @param targetTransform QMatrix4x4*
/// @param sourceOrigin enum QOpenGLTextureBlitter__Origin
void q_opengltextureblitter_blit(void* self, uint32_t texture, void* targetTransform, int32_t sourceOrigin);

/// [Qt documentation](https://doc.qt.io/qt-6/qopengltextureblitter.html#targetTransform)
///
/// @param target QRectF*
/// @param viewport QRect*
QMatrix4x4* q_opengltextureblitter_target_transform(void* target, void* viewport);

/// [Qt documentation](https://doc.qt.io/qt-6/qopengltextureblitter.html#bind)
///
/// @param self QOpenGLTextureBlitter*
/// @param target uint32_t
void q_opengltextureblitter_bind1(void* self, uint32_t target);

/// [Qt documentation](https://doc.qt.io/qt-6/qopengltextureblitter.html#dtor.QOpenGLTextureBlitter)
///
/// Delete this object from C++ memory.
///
/// @param self QOpenGLTextureBlitter*
void q_opengltextureblitter_delete(void* self);

/// https://doc.qt.io/qt-6/qopengltextureblitter.html#types

typedef enum {
    QOPENGLTEXTUREBLITTER_ORIGIN_ORIGINBOTTOMLEFT = 0,
    QOPENGLTEXTUREBLITTER_ORIGIN_ORIGINTOPLEFT = 1
} QOpenGLTextureBlitter__Origin;

#endif
