#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQVIDEOFRAMEFORMAT_H
#define SRC_MULTIMEDIAQT6C_LIBQVIDEOFRAMEFORMAT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qvideoframeformat.html

/// q_videoframeformat_new constructs a new QVideoFrameFormat object.
///
///
QVideoFrameFormat* q_videoframeformat_new();

/// q_videoframeformat_new2 constructs a new QVideoFrameFormat object.
///
/// ``` QSize* size, enum QVideoFrameFormat__PixelFormat pixelFormat ```
QVideoFrameFormat* q_videoframeformat_new2(void* size, int64_t pixelFormat);

/// q_videoframeformat_new3 constructs a new QVideoFrameFormat object.
///
/// ``` QVideoFrameFormat* format ```
QVideoFrameFormat* q_videoframeformat_new3(void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#swap)
///
/// ``` QVideoFrameFormat* self, QVideoFrameFormat* other ```
void q_videoframeformat_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#detach)
///
/// ``` QVideoFrameFormat* self ```
void q_videoframeformat_detach(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#operator=)
///
/// ``` QVideoFrameFormat* self, QVideoFrameFormat* format ```
void q_videoframeformat_operator_assign(void* self, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#operator==)
///
/// ``` QVideoFrameFormat* self, QVideoFrameFormat* format ```
bool q_videoframeformat_operator_equal(void* self, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#operator!=)
///
/// ``` QVideoFrameFormat* self, QVideoFrameFormat* format ```
bool q_videoframeformat_operator_not_equal(void* self, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#isValid)
///
/// ``` QVideoFrameFormat* self ```
bool q_videoframeformat_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#pixelFormat)
///
/// ``` QVideoFrameFormat* self ```
int64_t q_videoframeformat_pixel_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#frameSize)
///
/// ``` QVideoFrameFormat* self ```
QSize* q_videoframeformat_frame_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setFrameSize)
///
/// ``` QVideoFrameFormat* self, QSize* size ```
void q_videoframeformat_set_frame_size(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setFrameSize)
///
/// ``` QVideoFrameFormat* self, int width, int height ```
void q_videoframeformat_set_frame_size2(void* self, int width, int height);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#frameWidth)
///
/// ``` QVideoFrameFormat* self ```
int32_t q_videoframeformat_frame_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#frameHeight)
///
/// ``` QVideoFrameFormat* self ```
int32_t q_videoframeformat_frame_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#planeCount)
///
/// ``` QVideoFrameFormat* self ```
int32_t q_videoframeformat_plane_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#viewport)
///
/// ``` QVideoFrameFormat* self ```
QRect* q_videoframeformat_viewport(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setViewport)
///
/// ``` QVideoFrameFormat* self, QRect* viewport ```
void q_videoframeformat_set_viewport(void* self, void* viewport);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#scanLineDirection)
///
/// ``` QVideoFrameFormat* self ```
int64_t q_videoframeformat_scan_line_direction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setScanLineDirection)
///
/// ``` QVideoFrameFormat* self, enum QVideoFrameFormat__Direction direction ```
void q_videoframeformat_set_scan_line_direction(void* self, int64_t direction);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#frameRate)
///
/// ``` QVideoFrameFormat* self ```
double q_videoframeformat_frame_rate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setFrameRate)
///
/// ``` QVideoFrameFormat* self, double rate ```
void q_videoframeformat_set_frame_rate(void* self, double rate);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#streamFrameRate)
///
/// ``` QVideoFrameFormat* self ```
double q_videoframeformat_stream_frame_rate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setStreamFrameRate)
///
/// ``` QVideoFrameFormat* self, double rate ```
void q_videoframeformat_set_stream_frame_rate(void* self, double rate);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#yCbCrColorSpace)
///
/// ``` QVideoFrameFormat* self ```
int64_t q_videoframeformat_y_cb_cr_color_space(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setYCbCrColorSpace)
///
/// ``` QVideoFrameFormat* self, enum QVideoFrameFormat__YCbCrColorSpace colorSpace ```
void q_videoframeformat_set_y_cb_cr_color_space(void* self, int64_t colorSpace);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#colorSpace)
///
/// ``` QVideoFrameFormat* self ```
int64_t q_videoframeformat_color_space(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setColorSpace)
///
/// ``` QVideoFrameFormat* self, enum QVideoFrameFormat__ColorSpace colorSpace ```
void q_videoframeformat_set_color_space(void* self, int64_t colorSpace);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#colorTransfer)
///
/// ``` QVideoFrameFormat* self ```
int64_t q_videoframeformat_color_transfer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setColorTransfer)
///
/// ``` QVideoFrameFormat* self, enum QVideoFrameFormat__ColorTransfer colorTransfer ```
void q_videoframeformat_set_color_transfer(void* self, int64_t colorTransfer);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#colorRange)
///
/// ``` QVideoFrameFormat* self ```
int64_t q_videoframeformat_color_range(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setColorRange)
///
/// ``` QVideoFrameFormat* self, enum QVideoFrameFormat__ColorRange range ```
void q_videoframeformat_set_color_range(void* self, int64_t range);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#isMirrored)
///
/// ``` QVideoFrameFormat* self ```
bool q_videoframeformat_is_mirrored(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setMirrored)
///
/// ``` QVideoFrameFormat* self, bool mirrored ```
void q_videoframeformat_set_mirrored(void* self, bool mirrored);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#rotation)
///
/// ``` QVideoFrameFormat* self ```
int64_t q_videoframeformat_rotation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setRotation)
///
/// ``` QVideoFrameFormat* self, enum QtVideo__Rotation rotation ```
void q_videoframeformat_set_rotation(void* self, int64_t rotation);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#vertexShaderFileName)
///
/// ``` QVideoFrameFormat* self ```
const char* q_videoframeformat_vertex_shader_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#fragmentShaderFileName)
///
/// ``` QVideoFrameFormat* self ```
const char* q_videoframeformat_fragment_shader_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#maxLuminance)
///
/// ``` QVideoFrameFormat* self ```
float q_videoframeformat_max_luminance(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setMaxLuminance)
///
/// ``` QVideoFrameFormat* self, float lum ```
void q_videoframeformat_set_max_luminance(void* self, float lum);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#pixelFormatFromImageFormat)
///
/// ``` enum QImage__Format format ```
int64_t q_videoframeformat_pixel_format_from_image_format(int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#imageFormatFromPixelFormat)
///
/// ``` enum QVideoFrameFormat__PixelFormat format ```
int64_t q_videoframeformat_image_format_from_pixel_format(int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#pixelFormatToString)
///
/// ``` enum QVideoFrameFormat__PixelFormat pixelFormat ```
const char* q_videoframeformat_pixel_format_to_string(int64_t pixelFormat);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#dtor.QVideoFrameFormat)
///
/// Delete this object from C++ memory.
///
/// ``` QVideoFrameFormat* self ```
void q_videoframeformat_delete(void* self);

/// https://doc.qt.io/qt-6/qvideoframeformat.html#types

typedef enum {
    QVIDEOFRAMEFORMAT_PIXELFORMAT_FORMAT_INVALID = 0,
    QVIDEOFRAMEFORMAT_PIXELFORMAT_FORMAT_ARGB8888 = 1,
    QVIDEOFRAMEFORMAT_PIXELFORMAT_FORMAT_ARGB8888_PREMULTIPLIED = 2,
    QVIDEOFRAMEFORMAT_PIXELFORMAT_FORMAT_XRGB8888 = 3,
    QVIDEOFRAMEFORMAT_PIXELFORMAT_FORMAT_BGRA8888 = 4,
    QVIDEOFRAMEFORMAT_PIXELFORMAT_FORMAT_BGRA8888_PREMULTIPLIED = 5,
    QVIDEOFRAMEFORMAT_PIXELFORMAT_FORMAT_BGRX8888 = 6,
    QVIDEOFRAMEFORMAT_PIXELFORMAT_FORMAT_ABGR8888 = 7,
    QVIDEOFRAMEFORMAT_PIXELFORMAT_FORMAT_XBGR8888 = 8,
    QVIDEOFRAMEFORMAT_PIXELFORMAT_FORMAT_RGBA8888 = 9,
    QVIDEOFRAMEFORMAT_PIXELFORMAT_FORMAT_RGBX8888 = 10,
    QVIDEOFRAMEFORMAT_PIXELFORMAT_FORMAT_AYUV = 11,
    QVIDEOFRAMEFORMAT_PIXELFORMAT_FORMAT_AYUV_PREMULTIPLIED = 12,
    QVIDEOFRAMEFORMAT_PIXELFORMAT_FORMAT_YUV420P = 13,
    QVIDEOFRAMEFORMAT_PIXELFORMAT_FORMAT_YUV422P = 14,
    QVIDEOFRAMEFORMAT_PIXELFORMAT_FORMAT_YV12 = 15,
    QVIDEOFRAMEFORMAT_PIXELFORMAT_FORMAT_UYVY = 16,
    QVIDEOFRAMEFORMAT_PIXELFORMAT_FORMAT_YUYV = 17,
    QVIDEOFRAMEFORMAT_PIXELFORMAT_FORMAT_NV12 = 18,
    QVIDEOFRAMEFORMAT_PIXELFORMAT_FORMAT_NV21 = 19,
    QVIDEOFRAMEFORMAT_PIXELFORMAT_FORMAT_IMC1 = 20,
    QVIDEOFRAMEFORMAT_PIXELFORMAT_FORMAT_IMC2 = 21,
    QVIDEOFRAMEFORMAT_PIXELFORMAT_FORMAT_IMC3 = 22,
    QVIDEOFRAMEFORMAT_PIXELFORMAT_FORMAT_IMC4 = 23,
    QVIDEOFRAMEFORMAT_PIXELFORMAT_FORMAT_Y8 = 24,
    QVIDEOFRAMEFORMAT_PIXELFORMAT_FORMAT_Y16 = 25,
    QVIDEOFRAMEFORMAT_PIXELFORMAT_FORMAT_P010 = 26,
    QVIDEOFRAMEFORMAT_PIXELFORMAT_FORMAT_P016 = 27,
    QVIDEOFRAMEFORMAT_PIXELFORMAT_FORMAT_SAMPLEREXTERNALOES = 28,
    QVIDEOFRAMEFORMAT_PIXELFORMAT_FORMAT_JPEG = 29,
    QVIDEOFRAMEFORMAT_PIXELFORMAT_FORMAT_SAMPLERRECT = 30,
    QVIDEOFRAMEFORMAT_PIXELFORMAT_FORMAT_YUV420P10 = 31
} QVideoFrameFormat__PixelFormat;

typedef enum {
    QVIDEOFRAMEFORMAT_DIRECTION_TOPTOBOTTOM = 0,
    QVIDEOFRAMEFORMAT_DIRECTION_BOTTOMTOTOP = 1
} QVideoFrameFormat__Direction;

typedef enum {
    QVIDEOFRAMEFORMAT_YCBCRCOLORSPACE_YCBCR_UNDEFINED = 0,
    QVIDEOFRAMEFORMAT_YCBCRCOLORSPACE_YCBCR_BT601 = 1,
    QVIDEOFRAMEFORMAT_YCBCRCOLORSPACE_YCBCR_BT709 = 2,
    QVIDEOFRAMEFORMAT_YCBCRCOLORSPACE_YCBCR_XVYCC601 = 3,
    QVIDEOFRAMEFORMAT_YCBCRCOLORSPACE_YCBCR_XVYCC709 = 4,
    QVIDEOFRAMEFORMAT_YCBCRCOLORSPACE_YCBCR_JPEG = 5,
    QVIDEOFRAMEFORMAT_YCBCRCOLORSPACE_YCBCR_BT2020 = 6
} QVideoFrameFormat__YCbCrColorSpace;

typedef enum {
    QVIDEOFRAMEFORMAT_COLORSPACE_COLORSPACE_UNDEFINED = 0,
    QVIDEOFRAMEFORMAT_COLORSPACE_COLORSPACE_BT601 = 1,
    QVIDEOFRAMEFORMAT_COLORSPACE_COLORSPACE_BT709 = 2,
    QVIDEOFRAMEFORMAT_COLORSPACE_COLORSPACE_ADOBERGB = 5,
    QVIDEOFRAMEFORMAT_COLORSPACE_COLORSPACE_BT2020 = 6
} QVideoFrameFormat__ColorSpace;

typedef enum {
    QVIDEOFRAMEFORMAT_COLORTRANSFER_COLORTRANSFER_UNKNOWN = 0,
    QVIDEOFRAMEFORMAT_COLORTRANSFER_COLORTRANSFER_BT709 = 1,
    QVIDEOFRAMEFORMAT_COLORTRANSFER_COLORTRANSFER_BT601 = 2,
    QVIDEOFRAMEFORMAT_COLORTRANSFER_COLORTRANSFER_LINEAR = 3,
    QVIDEOFRAMEFORMAT_COLORTRANSFER_COLORTRANSFER_GAMMA22 = 4,
    QVIDEOFRAMEFORMAT_COLORTRANSFER_COLORTRANSFER_GAMMA28 = 5,
    QVIDEOFRAMEFORMAT_COLORTRANSFER_COLORTRANSFER_ST2084 = 6,
    QVIDEOFRAMEFORMAT_COLORTRANSFER_COLORTRANSFER_STD_B67 = 7
} QVideoFrameFormat__ColorTransfer;

typedef enum {
    QVIDEOFRAMEFORMAT_COLORRANGE_COLORRANGE_UNKNOWN = 0,
    QVIDEOFRAMEFORMAT_COLORRANGE_COLORRANGE_VIDEO = 1,
    QVIDEOFRAMEFORMAT_COLORRANGE_COLORRANGE_FULL = 2
} QVideoFrameFormat__ColorRange;

#endif
