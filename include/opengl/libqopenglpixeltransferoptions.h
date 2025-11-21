#pragma once
#ifndef SRC_OPENGL_QT6C_LIBQOPENGLPIXELTRANSFEROPTIONS_H
#define SRC_OPENGL_QT6C_LIBQOPENGLPIXELTRANSFEROPTIONS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html

/// q_openglpixeltransferoptions_new constructs a new QOpenGLPixelTransferOptions object.
///
QOpenGLPixelTransferOptions* q_openglpixeltransferoptions_new();

/// q_openglpixeltransferoptions_new2 constructs a new QOpenGLPixelTransferOptions object.
///
/// @param param1 QOpenGLPixelTransferOptions*
QOpenGLPixelTransferOptions* q_openglpixeltransferoptions_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#operator-eq)
///
/// @param self QOpenGLPixelTransferOptions*
/// @param param1 QOpenGLPixelTransferOptions*
void q_openglpixeltransferoptions_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#swap)
///
/// @param self QOpenGLPixelTransferOptions*
/// @param other QOpenGLPixelTransferOptions*
void q_openglpixeltransferoptions_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setAlignment)
///
/// @param self QOpenGLPixelTransferOptions*
/// @param alignment int
void q_openglpixeltransferoptions_set_alignment(void* self, int alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#alignment)
///
/// @param self QOpenGLPixelTransferOptions*
int32_t q_openglpixeltransferoptions_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setSkipImages)
///
/// @param self QOpenGLPixelTransferOptions*
/// @param skipImages int
void q_openglpixeltransferoptions_set_skip_images(void* self, int skipImages);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#skipImages)
///
/// @param self QOpenGLPixelTransferOptions*
int32_t q_openglpixeltransferoptions_skip_images(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setSkipRows)
///
/// @param self QOpenGLPixelTransferOptions*
/// @param skipRows int
void q_openglpixeltransferoptions_set_skip_rows(void* self, int skipRows);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#skipRows)
///
/// @param self QOpenGLPixelTransferOptions*
int32_t q_openglpixeltransferoptions_skip_rows(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setSkipPixels)
///
/// @param self QOpenGLPixelTransferOptions*
/// @param skipPixels int
void q_openglpixeltransferoptions_set_skip_pixels(void* self, int skipPixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#skipPixels)
///
/// @param self QOpenGLPixelTransferOptions*
int32_t q_openglpixeltransferoptions_skip_pixels(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setImageHeight)
///
/// @param self QOpenGLPixelTransferOptions*
/// @param imageHeight int
void q_openglpixeltransferoptions_set_image_height(void* self, int imageHeight);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#imageHeight)
///
/// @param self QOpenGLPixelTransferOptions*
int32_t q_openglpixeltransferoptions_image_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setRowLength)
///
/// @param self QOpenGLPixelTransferOptions*
/// @param rowLength int
void q_openglpixeltransferoptions_set_row_length(void* self, int rowLength);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#rowLength)
///
/// @param self QOpenGLPixelTransferOptions*
int32_t q_openglpixeltransferoptions_row_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setLeastSignificantByteFirst)
///
/// @param self QOpenGLPixelTransferOptions*
/// @param lsbFirst bool
void q_openglpixeltransferoptions_set_least_significant_byte_first(void* self, bool lsbFirst);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#isLeastSignificantBitFirst)
///
/// @param self QOpenGLPixelTransferOptions*
bool q_openglpixeltransferoptions_is_least_significant_bit_first(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#setSwapBytesEnabled)
///
/// @param self QOpenGLPixelTransferOptions*
/// @param swapBytes bool
void q_openglpixeltransferoptions_set_swap_bytes_enabled(void* self, bool swapBytes);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#isSwapBytesEnabled)
///
/// @param self QOpenGLPixelTransferOptions*
bool q_openglpixeltransferoptions_is_swap_bytes_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglpixeltransferoptions.html#dtor.QOpenGLPixelTransferOptions)
///
/// Delete this object from C++ memory.
///
/// @param self QOpenGLPixelTransferOptions*
void q_openglpixeltransferoptions_delete(void* self);

#endif
