#include "libqopenglpixeltransferoptions.hpp"
#include "libqopenglpixeltransferoptions.h"

QOpenGLPixelTransferOptions* q_openglpixeltransferoptions_new() {
    return QOpenGLPixelTransferOptions_new();
}

QOpenGLPixelTransferOptions* q_openglpixeltransferoptions_new2(void* param1) {
    return QOpenGLPixelTransferOptions_new2((QOpenGLPixelTransferOptions*)param1);
}

void q_openglpixeltransferoptions_operator_assign(void* self, void* param1) {
    QOpenGLPixelTransferOptions_OperatorAssign((QOpenGLPixelTransferOptions*)self, (QOpenGLPixelTransferOptions*)param1);
}

void q_openglpixeltransferoptions_swap(void* self, void* other) {
    QOpenGLPixelTransferOptions_Swap((QOpenGLPixelTransferOptions*)self, (QOpenGLPixelTransferOptions*)other);
}

void q_openglpixeltransferoptions_set_alignment(void* self, int alignment) {
    QOpenGLPixelTransferOptions_SetAlignment((QOpenGLPixelTransferOptions*)self, alignment);
}

int32_t q_openglpixeltransferoptions_alignment(void* self) {
    return QOpenGLPixelTransferOptions_Alignment((QOpenGLPixelTransferOptions*)self);
}

void q_openglpixeltransferoptions_set_skip_images(void* self, int skipImages) {
    QOpenGLPixelTransferOptions_SetSkipImages((QOpenGLPixelTransferOptions*)self, skipImages);
}

int32_t q_openglpixeltransferoptions_skip_images(void* self) {
    return QOpenGLPixelTransferOptions_SkipImages((QOpenGLPixelTransferOptions*)self);
}

void q_openglpixeltransferoptions_set_skip_rows(void* self, int skipRows) {
    QOpenGLPixelTransferOptions_SetSkipRows((QOpenGLPixelTransferOptions*)self, skipRows);
}

int32_t q_openglpixeltransferoptions_skip_rows(void* self) {
    return QOpenGLPixelTransferOptions_SkipRows((QOpenGLPixelTransferOptions*)self);
}

void q_openglpixeltransferoptions_set_skip_pixels(void* self, int skipPixels) {
    QOpenGLPixelTransferOptions_SetSkipPixels((QOpenGLPixelTransferOptions*)self, skipPixels);
}

int32_t q_openglpixeltransferoptions_skip_pixels(void* self) {
    return QOpenGLPixelTransferOptions_SkipPixels((QOpenGLPixelTransferOptions*)self);
}

void q_openglpixeltransferoptions_set_image_height(void* self, int imageHeight) {
    QOpenGLPixelTransferOptions_SetImageHeight((QOpenGLPixelTransferOptions*)self, imageHeight);
}

int32_t q_openglpixeltransferoptions_image_height(void* self) {
    return QOpenGLPixelTransferOptions_ImageHeight((QOpenGLPixelTransferOptions*)self);
}

void q_openglpixeltransferoptions_set_row_length(void* self, int rowLength) {
    QOpenGLPixelTransferOptions_SetRowLength((QOpenGLPixelTransferOptions*)self, rowLength);
}

int32_t q_openglpixeltransferoptions_row_length(void* self) {
    return QOpenGLPixelTransferOptions_RowLength((QOpenGLPixelTransferOptions*)self);
}

void q_openglpixeltransferoptions_set_least_significant_byte_first(void* self, bool lsbFirst) {
    QOpenGLPixelTransferOptions_SetLeastSignificantByteFirst((QOpenGLPixelTransferOptions*)self, lsbFirst);
}

bool q_openglpixeltransferoptions_is_least_significant_bit_first(void* self) {
    return QOpenGLPixelTransferOptions_IsLeastSignificantBitFirst((QOpenGLPixelTransferOptions*)self);
}

void q_openglpixeltransferoptions_set_swap_bytes_enabled(void* self, bool swapBytes) {
    QOpenGLPixelTransferOptions_SetSwapBytesEnabled((QOpenGLPixelTransferOptions*)self, swapBytes);
}

bool q_openglpixeltransferoptions_is_swap_bytes_enabled(void* self) {
    return QOpenGLPixelTransferOptions_IsSwapBytesEnabled((QOpenGLPixelTransferOptions*)self);
}

void q_openglpixeltransferoptions_delete(void* self) {
    QOpenGLPixelTransferOptions_Delete((QOpenGLPixelTransferOptions*)(self));
}
