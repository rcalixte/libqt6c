#pragma once
#ifndef SRC_OPENGLQT6C_LIBQOPENGLFRAMEBUFFEROBJECT_H
#define SRC_OPENGLQT6C_LIBQOPENGLFRAMEBUFFEROBJECT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qopenglframebufferobject.html

/// q_openglframebufferobject_new constructs a new QOpenGLFramebufferObject object.
///
/// @param size QSize*
QOpenGLFramebufferObject* q_openglframebufferobject_new(void* size);

/// q_openglframebufferobject_new2 constructs a new QOpenGLFramebufferObject object.
///
/// @param width int
/// @param height int
QOpenGLFramebufferObject* q_openglframebufferobject_new2(int width, int height);

/// q_openglframebufferobject_new3 constructs a new QOpenGLFramebufferObject object.
///
/// @param size QSize*
/// @param attachment enum QOpenGLFramebufferObject__Attachment
QOpenGLFramebufferObject* q_openglframebufferobject_new3(void* size, int32_t attachment);

/// q_openglframebufferobject_new4 constructs a new QOpenGLFramebufferObject object.
///
/// @param width int
/// @param height int
/// @param attachment enum QOpenGLFramebufferObject__Attachment
QOpenGLFramebufferObject* q_openglframebufferobject_new4(int width, int height, int32_t attachment);

/// q_openglframebufferobject_new5 constructs a new QOpenGLFramebufferObject object.
///
/// @param size QSize*
/// @param format QOpenGLFramebufferObjectFormat*
QOpenGLFramebufferObject* q_openglframebufferobject_new5(void* size, void* format);

/// q_openglframebufferobject_new6 constructs a new QOpenGLFramebufferObject object.
///
/// @param width int
/// @param height int
/// @param format QOpenGLFramebufferObjectFormat*
QOpenGLFramebufferObject* q_openglframebufferobject_new6(int width, int height, void* format);

/// q_openglframebufferobject_new7 constructs a new QOpenGLFramebufferObject object.
///
/// @param size QSize*
/// @param target uint32_t
QOpenGLFramebufferObject* q_openglframebufferobject_new7(void* size, uint32_t target);

/// q_openglframebufferobject_new8 constructs a new QOpenGLFramebufferObject object.
///
/// @param width int
/// @param height int
/// @param target uint32_t
QOpenGLFramebufferObject* q_openglframebufferobject_new8(int width, int height, uint32_t target);

/// q_openglframebufferobject_new9 constructs a new QOpenGLFramebufferObject object.
///
/// @param size QSize*
/// @param attachment enum QOpenGLFramebufferObject__Attachment
/// @param target uint32_t
QOpenGLFramebufferObject* q_openglframebufferobject_new9(void* size, int32_t attachment, uint32_t target);

/// q_openglframebufferobject_new10 constructs a new QOpenGLFramebufferObject object.
///
/// @param size QSize*
/// @param attachment enum QOpenGLFramebufferObject__Attachment
/// @param target uint32_t
/// @param internalFormat uint32_t
QOpenGLFramebufferObject* q_openglframebufferobject_new10(void* size, int32_t attachment, uint32_t target, uint32_t internalFormat);

/// q_openglframebufferobject_new11 constructs a new QOpenGLFramebufferObject object.
///
/// @param width int
/// @param height int
/// @param attachment enum QOpenGLFramebufferObject__Attachment
/// @param target uint32_t
QOpenGLFramebufferObject* q_openglframebufferobject_new11(int width, int height, int32_t attachment, uint32_t target);

/// q_openglframebufferobject_new12 constructs a new QOpenGLFramebufferObject object.
///
/// @param width int
/// @param height int
/// @param attachment enum QOpenGLFramebufferObject__Attachment
/// @param target uint32_t
/// @param internalFormat uint32_t
QOpenGLFramebufferObject* q_openglframebufferobject_new12(int width, int height, int32_t attachment, uint32_t target, uint32_t internalFormat);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#addColorAttachment)
///
/// @param self QOpenGLFramebufferObject*
/// @param size QSize*
void q_openglframebufferobject_add_color_attachment(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#addColorAttachment)
///
/// @param self QOpenGLFramebufferObject*
/// @param width int
/// @param height int
void q_openglframebufferobject_add_color_attachment2(void* self, int width, int height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#format)
///
/// @param self QOpenGLFramebufferObject*
QOpenGLFramebufferObjectFormat* q_openglframebufferobject_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#isValid)
///
/// @param self QOpenGLFramebufferObject*
bool q_openglframebufferobject_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#isBound)
///
/// @param self QOpenGLFramebufferObject*
bool q_openglframebufferobject_is_bound(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#bind)
///
/// @param self QOpenGLFramebufferObject*
bool q_openglframebufferobject_bind(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#release)
///
/// @param self QOpenGLFramebufferObject*
bool q_openglframebufferobject_release(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#width)
///
/// @param self QOpenGLFramebufferObject*
int32_t q_openglframebufferobject_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#height)
///
/// @param self QOpenGLFramebufferObject*
int32_t q_openglframebufferobject_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#texture)
///
/// @param self QOpenGLFramebufferObject*
uint32_t q_openglframebufferobject_texture(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#textures)
///
/// @param self QOpenGLFramebufferObject*
libqt_list /* of uint32_t */ q_openglframebufferobject_textures(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#takeTexture)
///
/// @param self QOpenGLFramebufferObject*
uint32_t q_openglframebufferobject_take_texture(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#takeTexture)
///
/// @param self QOpenGLFramebufferObject*
/// @param colorAttachmentIndex int
uint32_t q_openglframebufferobject_take_texture2(void* self, int colorAttachmentIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#size)
///
/// @param self QOpenGLFramebufferObject*
QSize* q_openglframebufferobject_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#sizes)
///
/// @param self QOpenGLFramebufferObject*
libqt_list /* of QSize* */ q_openglframebufferobject_sizes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#toImage)
///
/// @param self QOpenGLFramebufferObject*
QImage* q_openglframebufferobject_to_image(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#toImage)
///
/// @param self QOpenGLFramebufferObject*
/// @param flipped bool
/// @param colorAttachmentIndex int
QImage* q_openglframebufferobject_to_image2(void* self, bool flipped, int colorAttachmentIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#attachment)
///
/// @param self QOpenGLFramebufferObject*
///
/// @return enum QOpenGLFramebufferObject__Attachment
int32_t q_openglframebufferobject_attachment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#setAttachment)
///
/// @param self QOpenGLFramebufferObject*
/// @param attachment enum QOpenGLFramebufferObject__Attachment
void q_openglframebufferobject_set_attachment(void* self, int32_t attachment);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#handle)
///
/// @param self QOpenGLFramebufferObject*
uint32_t q_openglframebufferobject_handle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#bindDefault)
///
bool q_openglframebufferobject_bind_default();

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#hasOpenGLFramebufferObjects)
///
bool q_openglframebufferobject_has_open_g_l_framebuffer_objects();

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#hasOpenGLFramebufferBlit)
///
bool q_openglframebufferobject_has_open_g_l_framebuffer_blit();

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#blitFramebuffer)
///
/// @param target QOpenGLFramebufferObject*
/// @param targetRect QRect*
/// @param source QOpenGLFramebufferObject*
/// @param sourceRect QRect*
/// @param buffers uint32_t
/// @param filter uint32_t
/// @param readColorAttachmentIndex int
/// @param drawColorAttachmentIndex int
/// @param restorePolicy enum QOpenGLFramebufferObject__FramebufferRestorePolicy
void q_openglframebufferobject_blit_framebuffer(void* target, void* targetRect, void* source, void* sourceRect, uint32_t buffers, uint32_t filter, int readColorAttachmentIndex, int drawColorAttachmentIndex, int32_t restorePolicy);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#blitFramebuffer)
///
/// @param target QOpenGLFramebufferObject*
/// @param targetRect QRect*
/// @param source QOpenGLFramebufferObject*
/// @param sourceRect QRect*
/// @param buffers uint32_t
/// @param filter uint32_t
/// @param readColorAttachmentIndex int
/// @param drawColorAttachmentIndex int
void q_openglframebufferobject_blit_framebuffer2(void* target, void* targetRect, void* source, void* sourceRect, uint32_t buffers, uint32_t filter, int readColorAttachmentIndex, int drawColorAttachmentIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#blitFramebuffer)
///
/// @param target QOpenGLFramebufferObject*
/// @param targetRect QRect*
/// @param source QOpenGLFramebufferObject*
/// @param sourceRect QRect*
void q_openglframebufferobject_blit_framebuffer3(void* target, void* targetRect, void* source, void* sourceRect);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#blitFramebuffer)
///
/// @param target QOpenGLFramebufferObject*
/// @param source QOpenGLFramebufferObject*
void q_openglframebufferobject_blit_framebuffer4(void* target, void* source);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#addColorAttachment)
///
/// @param self QOpenGLFramebufferObject*
/// @param size QSize*
/// @param internalFormat uint32_t
void q_openglframebufferobject_add_color_attachment22(void* self, void* size, uint32_t internalFormat);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#addColorAttachment)
///
/// @param self QOpenGLFramebufferObject*
/// @param width int
/// @param height int
/// @param internalFormat uint32_t
void q_openglframebufferobject_add_color_attachment3(void* self, int width, int height, uint32_t internalFormat);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#toImage)
///
/// @param self QOpenGLFramebufferObject*
/// @param flipped bool
QImage* q_openglframebufferobject_to_image1(void* self, bool flipped);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#blitFramebuffer)
///
/// @param target QOpenGLFramebufferObject*
/// @param targetRect QRect*
/// @param source QOpenGLFramebufferObject*
/// @param sourceRect QRect*
/// @param buffers uint32_t
void q_openglframebufferobject_blit_framebuffer5(void* target, void* targetRect, void* source, void* sourceRect, uint32_t buffers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#blitFramebuffer)
///
/// @param target QOpenGLFramebufferObject*
/// @param targetRect QRect*
/// @param source QOpenGLFramebufferObject*
/// @param sourceRect QRect*
/// @param buffers uint32_t
/// @param filter uint32_t
void q_openglframebufferobject_blit_framebuffer6(void* target, void* targetRect, void* source, void* sourceRect, uint32_t buffers, uint32_t filter);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#blitFramebuffer)
///
/// @param target QOpenGLFramebufferObject*
/// @param source QOpenGLFramebufferObject*
/// @param buffers uint32_t
void q_openglframebufferobject_blit_framebuffer32(void* target, void* source, uint32_t buffers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#blitFramebuffer)
///
/// @param target QOpenGLFramebufferObject*
/// @param source QOpenGLFramebufferObject*
/// @param buffers uint32_t
/// @param filter uint32_t
void q_openglframebufferobject_blit_framebuffer42(void* target, void* source, uint32_t buffers, uint32_t filter);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#dtor.QOpenGLFramebufferObject)
///
/// Delete this object from C++ memory.
///
/// @param self QOpenGLFramebufferObject*
void q_openglframebufferobject_delete(void* self);

/// https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html

/// q_openglframebufferobjectformat_new constructs a new QOpenGLFramebufferObjectFormat object.
///
QOpenGLFramebufferObjectFormat* q_openglframebufferobjectformat_new();

/// q_openglframebufferobjectformat_new2 constructs a new QOpenGLFramebufferObjectFormat object.
///
/// @param other QOpenGLFramebufferObjectFormat*
QOpenGLFramebufferObjectFormat* q_openglframebufferobjectformat_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#operator-eq)
///
/// @param self QOpenGLFramebufferObjectFormat*
/// @param other QOpenGLFramebufferObjectFormat*
void q_openglframebufferobjectformat_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#setSamples)
///
/// @param self QOpenGLFramebufferObjectFormat*
/// @param samples int
void q_openglframebufferobjectformat_set_samples(void* self, int samples);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#samples)
///
/// @param self QOpenGLFramebufferObjectFormat*
int32_t q_openglframebufferobjectformat_samples(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#setMipmap)
///
/// @param self QOpenGLFramebufferObjectFormat*
/// @param enabled bool
void q_openglframebufferobjectformat_set_mipmap(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#mipmap)
///
/// @param self QOpenGLFramebufferObjectFormat*
bool q_openglframebufferobjectformat_mipmap(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#setAttachment)
///
/// @param self QOpenGLFramebufferObjectFormat*
/// @param attachment enum QOpenGLFramebufferObject__Attachment
void q_openglframebufferobjectformat_set_attachment(void* self, int32_t attachment);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#attachment)
///
/// @param self QOpenGLFramebufferObjectFormat*
///
/// @return enum QOpenGLFramebufferObject__Attachment
int32_t q_openglframebufferobjectformat_attachment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#setTextureTarget)
///
/// @param self QOpenGLFramebufferObjectFormat*
/// @param target uint32_t
void q_openglframebufferobjectformat_set_texture_target(void* self, uint32_t target);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#setInternalTextureFormat)
///
/// @param self QOpenGLFramebufferObjectFormat*
/// @param internalTextureFormat uint32_t
void q_openglframebufferobjectformat_set_internal_texture_format(void* self, uint32_t internalTextureFormat);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#operator-eq-eq)
///
/// @param self QOpenGLFramebufferObjectFormat*
/// @param other QOpenGLFramebufferObjectFormat*
bool q_openglframebufferobjectformat_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#operator-not-eq)
///
/// @param self QOpenGLFramebufferObjectFormat*
/// @param other QOpenGLFramebufferObjectFormat*
bool q_openglframebufferobjectformat_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#dtor.QOpenGLFramebufferObjectFormat)
///
/// Delete this object from C++ memory.
///
/// @param self QOpenGLFramebufferObjectFormat*
void q_openglframebufferobjectformat_delete(void* self);

/// https://doc.qt.io/qt-6/qopenglframebufferobject.html#types

typedef enum {
    QOPENGLFRAMEBUFFEROBJECT_ATTACHMENT_NOATTACHMENT = 0,
    QOPENGLFRAMEBUFFEROBJECT_ATTACHMENT_COMBINEDDEPTHSTENCIL = 1,
    QOPENGLFRAMEBUFFEROBJECT_ATTACHMENT_DEPTH = 2
} QOpenGLFramebufferObject__Attachment;

typedef enum {
    QOPENGLFRAMEBUFFEROBJECT_FRAMEBUFFERRESTOREPOLICY_DONTRESTOREFRAMEBUFFERBINDING = 0,
    QOPENGLFRAMEBUFFEROBJECT_FRAMEBUFFERRESTOREPOLICY_RESTOREFRAMEBUFFERBINDINGTODEFAULT = 1,
    QOPENGLFRAMEBUFFEROBJECT_FRAMEBUFFERRESTOREPOLICY_RESTOREFRAMEBUFFERBINDING = 2
} QOpenGLFramebufferObject__FramebufferRestorePolicy;

#endif
