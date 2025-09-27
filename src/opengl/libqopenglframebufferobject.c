#include "../libqimage.hpp"
#include "../libqrect.hpp"
#include "../libqsize.hpp"
#include "libqopenglframebufferobject.hpp"
#include "libqopenglframebufferobject.h"

QOpenGLFramebufferObject* q_openglframebufferobject_new(void* size) {
    return QOpenGLFramebufferObject_new((QSize*)size);
}

QOpenGLFramebufferObject* q_openglframebufferobject_new2(int width, int height) {
    return QOpenGLFramebufferObject_new2(width, height);
}

QOpenGLFramebufferObject* q_openglframebufferobject_new3(void* size, int32_t attachment) {
    return QOpenGLFramebufferObject_new3((QSize*)size, attachment);
}

QOpenGLFramebufferObject* q_openglframebufferobject_new4(int width, int height, int32_t attachment) {
    return QOpenGLFramebufferObject_new4(width, height, attachment);
}

QOpenGLFramebufferObject* q_openglframebufferobject_new5(void* size, void* format) {
    return QOpenGLFramebufferObject_new5((QSize*)size, (QOpenGLFramebufferObjectFormat*)format);
}

QOpenGLFramebufferObject* q_openglframebufferobject_new6(int width, int height, void* format) {
    return QOpenGLFramebufferObject_new6(width, height, (QOpenGLFramebufferObjectFormat*)format);
}

QOpenGLFramebufferObject* q_openglframebufferobject_new7(void* size, uint32_t target) {
    return QOpenGLFramebufferObject_new7((QSize*)size, target);
}

QOpenGLFramebufferObject* q_openglframebufferobject_new8(int width, int height, uint32_t target) {
    return QOpenGLFramebufferObject_new8(width, height, target);
}

QOpenGLFramebufferObject* q_openglframebufferobject_new9(void* size, int32_t attachment, uint32_t target) {
    return QOpenGLFramebufferObject_new9((QSize*)size, attachment, target);
}

QOpenGLFramebufferObject* q_openglframebufferobject_new10(void* size, int32_t attachment, uint32_t target, uint32_t internalFormat) {
    return QOpenGLFramebufferObject_new10((QSize*)size, attachment, target, internalFormat);
}

QOpenGLFramebufferObject* q_openglframebufferobject_new11(int width, int height, int32_t attachment, uint32_t target) {
    return QOpenGLFramebufferObject_new11(width, height, attachment, target);
}

QOpenGLFramebufferObject* q_openglframebufferobject_new12(int width, int height, int32_t attachment, uint32_t target, uint32_t internalFormat) {
    return QOpenGLFramebufferObject_new12(width, height, attachment, target, internalFormat);
}

void q_openglframebufferobject_add_color_attachment(void* self, void* size) {
    QOpenGLFramebufferObject_AddColorAttachment((QOpenGLFramebufferObject*)self, (QSize*)size);
}

void q_openglframebufferobject_add_color_attachment2(void* self, int width, int height) {
    QOpenGLFramebufferObject_AddColorAttachment2((QOpenGLFramebufferObject*)self, width, height);
}

QOpenGLFramebufferObjectFormat* q_openglframebufferobject_format(void* self) {
    return QOpenGLFramebufferObject_Format((QOpenGLFramebufferObject*)self);
}

bool q_openglframebufferobject_is_valid(void* self) {
    return QOpenGLFramebufferObject_IsValid((QOpenGLFramebufferObject*)self);
}

bool q_openglframebufferobject_is_bound(void* self) {
    return QOpenGLFramebufferObject_IsBound((QOpenGLFramebufferObject*)self);
}

bool q_openglframebufferobject_bind(void* self) {
    return QOpenGLFramebufferObject_Bind((QOpenGLFramebufferObject*)self);
}

bool q_openglframebufferobject_release(void* self) {
    return QOpenGLFramebufferObject_Release((QOpenGLFramebufferObject*)self);
}

int32_t q_openglframebufferobject_width(void* self) {
    return QOpenGLFramebufferObject_Width((QOpenGLFramebufferObject*)self);
}

int32_t q_openglframebufferobject_height(void* self) {
    return QOpenGLFramebufferObject_Height((QOpenGLFramebufferObject*)self);
}

uint32_t q_openglframebufferobject_texture(void* self) {
    return QOpenGLFramebufferObject_Texture((QOpenGLFramebufferObject*)self);
}

libqt_list /* of uint32_t */ q_openglframebufferobject_textures(void* self) {
    libqt_list _arr = QOpenGLFramebufferObject_Textures((QOpenGLFramebufferObject*)self);
    return _arr;
}

uint32_t q_openglframebufferobject_take_texture(void* self) {
    return QOpenGLFramebufferObject_TakeTexture((QOpenGLFramebufferObject*)self);
}

uint32_t q_openglframebufferobject_take_texture2(void* self, int colorAttachmentIndex) {
    return QOpenGLFramebufferObject_TakeTexture2((QOpenGLFramebufferObject*)self, colorAttachmentIndex);
}

QSize* q_openglframebufferobject_size(void* self) {
    return QOpenGLFramebufferObject_Size((QOpenGLFramebufferObject*)self);
}

libqt_list /* of QSize* */ q_openglframebufferobject_sizes(void* self) {
    libqt_list _arr = QOpenGLFramebufferObject_Sizes((QOpenGLFramebufferObject*)self);
    return _arr;
}

QImage* q_openglframebufferobject_to_image(void* self) {
    return QOpenGLFramebufferObject_ToImage((QOpenGLFramebufferObject*)self);
}

QImage* q_openglframebufferobject_to_image2(void* self, bool flipped, int colorAttachmentIndex) {
    return QOpenGLFramebufferObject_ToImage2((QOpenGLFramebufferObject*)self, flipped, colorAttachmentIndex);
}

int32_t q_openglframebufferobject_attachment(void* self) {
    return QOpenGLFramebufferObject_Attachment((QOpenGLFramebufferObject*)self);
}

void q_openglframebufferobject_set_attachment(void* self, int32_t attachment) {
    QOpenGLFramebufferObject_SetAttachment((QOpenGLFramebufferObject*)self, attachment);
}

uint32_t q_openglframebufferobject_handle(void* self) {
    return QOpenGLFramebufferObject_Handle((QOpenGLFramebufferObject*)self);
}

bool q_openglframebufferobject_bind_default() {
    return QOpenGLFramebufferObject_BindDefault();
}

bool q_openglframebufferobject_has_open_g_l_framebuffer_objects() {
    return QOpenGLFramebufferObject_HasOpenGLFramebufferObjects();
}

bool q_openglframebufferobject_has_open_g_l_framebuffer_blit() {
    return QOpenGLFramebufferObject_HasOpenGLFramebufferBlit();
}

void q_openglframebufferobject_blit_framebuffer(void* target, void* targetRect, void* source, void* sourceRect, uint32_t buffers, uint32_t filter, int readColorAttachmentIndex, int drawColorAttachmentIndex, int32_t restorePolicy) {
    QOpenGLFramebufferObject_BlitFramebuffer((QOpenGLFramebufferObject*)target, (QRect*)targetRect, (QOpenGLFramebufferObject*)source, (QRect*)sourceRect, buffers, filter, readColorAttachmentIndex, drawColorAttachmentIndex, restorePolicy);
}

void q_openglframebufferobject_blit_framebuffer2(void* target, void* targetRect, void* source, void* sourceRect, uint32_t buffers, uint32_t filter, int readColorAttachmentIndex, int drawColorAttachmentIndex) {
    QOpenGLFramebufferObject_BlitFramebuffer2((QOpenGLFramebufferObject*)target, (QRect*)targetRect, (QOpenGLFramebufferObject*)source, (QRect*)sourceRect, buffers, filter, readColorAttachmentIndex, drawColorAttachmentIndex);
}

void q_openglframebufferobject_blit_framebuffer3(void* target, void* targetRect, void* source, void* sourceRect) {
    QOpenGLFramebufferObject_BlitFramebuffer3((QOpenGLFramebufferObject*)target, (QRect*)targetRect, (QOpenGLFramebufferObject*)source, (QRect*)sourceRect);
}

void q_openglframebufferobject_blit_framebuffer4(void* target, void* source) {
    QOpenGLFramebufferObject_BlitFramebuffer4((QOpenGLFramebufferObject*)target, (QOpenGLFramebufferObject*)source);
}

void q_openglframebufferobject_add_color_attachment22(void* self, void* size, uint32_t internalFormat) {
    QOpenGLFramebufferObject_AddColorAttachment22((QOpenGLFramebufferObject*)self, (QSize*)size, internalFormat);
}

void q_openglframebufferobject_add_color_attachment3(void* self, int width, int height, uint32_t internalFormat) {
    QOpenGLFramebufferObject_AddColorAttachment3((QOpenGLFramebufferObject*)self, width, height, internalFormat);
}

QImage* q_openglframebufferobject_to_image1(void* self, bool flipped) {
    return QOpenGLFramebufferObject_ToImage1((QOpenGLFramebufferObject*)self, flipped);
}

void q_openglframebufferobject_blit_framebuffer5(void* target, void* targetRect, void* source, void* sourceRect, uint32_t buffers) {
    QOpenGLFramebufferObject_BlitFramebuffer5((QOpenGLFramebufferObject*)target, (QRect*)targetRect, (QOpenGLFramebufferObject*)source, (QRect*)sourceRect, buffers);
}

void q_openglframebufferobject_blit_framebuffer6(void* target, void* targetRect, void* source, void* sourceRect, uint32_t buffers, uint32_t filter) {
    QOpenGLFramebufferObject_BlitFramebuffer6((QOpenGLFramebufferObject*)target, (QRect*)targetRect, (QOpenGLFramebufferObject*)source, (QRect*)sourceRect, buffers, filter);
}

void q_openglframebufferobject_blit_framebuffer32(void* target, void* source, uint32_t buffers) {
    QOpenGLFramebufferObject_BlitFramebuffer32((QOpenGLFramebufferObject*)target, (QOpenGLFramebufferObject*)source, buffers);
}

void q_openglframebufferobject_blit_framebuffer42(void* target, void* source, uint32_t buffers, uint32_t filter) {
    QOpenGLFramebufferObject_BlitFramebuffer42((QOpenGLFramebufferObject*)target, (QOpenGLFramebufferObject*)source, buffers, filter);
}

void q_openglframebufferobject_delete(void* self) {
    QOpenGLFramebufferObject_Delete((QOpenGLFramebufferObject*)(self));
}

QOpenGLFramebufferObjectFormat* q_openglframebufferobjectformat_new() {
    return QOpenGLFramebufferObjectFormat_new();
}

QOpenGLFramebufferObjectFormat* q_openglframebufferobjectformat_new2(void* other) {
    return QOpenGLFramebufferObjectFormat_new2((QOpenGLFramebufferObjectFormat*)other);
}

void q_openglframebufferobjectformat_operator_assign(void* self, void* other) {
    QOpenGLFramebufferObjectFormat_OperatorAssign((QOpenGLFramebufferObjectFormat*)self, (QOpenGLFramebufferObjectFormat*)other);
}

void q_openglframebufferobjectformat_set_samples(void* self, int samples) {
    QOpenGLFramebufferObjectFormat_SetSamples((QOpenGLFramebufferObjectFormat*)self, samples);
}

int32_t q_openglframebufferobjectformat_samples(void* self) {
    return QOpenGLFramebufferObjectFormat_Samples((QOpenGLFramebufferObjectFormat*)self);
}

void q_openglframebufferobjectformat_set_mipmap(void* self, bool enabled) {
    QOpenGLFramebufferObjectFormat_SetMipmap((QOpenGLFramebufferObjectFormat*)self, enabled);
}

bool q_openglframebufferobjectformat_mipmap(void* self) {
    return QOpenGLFramebufferObjectFormat_Mipmap((QOpenGLFramebufferObjectFormat*)self);
}

void q_openglframebufferobjectformat_set_attachment(void* self, int32_t attachment) {
    QOpenGLFramebufferObjectFormat_SetAttachment((QOpenGLFramebufferObjectFormat*)self, attachment);
}

int32_t q_openglframebufferobjectformat_attachment(void* self) {
    return QOpenGLFramebufferObjectFormat_Attachment((QOpenGLFramebufferObjectFormat*)self);
}

void q_openglframebufferobjectformat_set_texture_target(void* self, uint32_t target) {
    QOpenGLFramebufferObjectFormat_SetTextureTarget((QOpenGLFramebufferObjectFormat*)self, target);
}

void q_openglframebufferobjectformat_set_internal_texture_format(void* self, uint32_t internalTextureFormat) {
    QOpenGLFramebufferObjectFormat_SetInternalTextureFormat((QOpenGLFramebufferObjectFormat*)self, internalTextureFormat);
}

bool q_openglframebufferobjectformat_operator_equal(void* self, void* other) {
    return QOpenGLFramebufferObjectFormat_OperatorEqual((QOpenGLFramebufferObjectFormat*)self, (QOpenGLFramebufferObjectFormat*)other);
}

bool q_openglframebufferobjectformat_operator_not_equal(void* self, void* other) {
    return QOpenGLFramebufferObjectFormat_OperatorNotEqual((QOpenGLFramebufferObjectFormat*)self, (QOpenGLFramebufferObjectFormat*)other);
}

void q_openglframebufferobjectformat_delete(void* self) {
    QOpenGLFramebufferObjectFormat_Delete((QOpenGLFramebufferObjectFormat*)(self));
}
