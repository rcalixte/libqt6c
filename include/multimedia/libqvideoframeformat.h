#pragma once
#ifndef SRC_MULTIMEDIA_QT6C_LIBQVIDEOFRAMEFORMAT_H
#define SRC_MULTIMEDIA_QT6C_LIBQVIDEOFRAMEFORMAT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qvideoframeformat.html

/// q_videoframeformat_new constructs a new QVideoFrameFormat object.
///
QVideoFrameFormat* q_videoframeformat_new();

/// q_videoframeformat_new2 constructs a new QVideoFrameFormat object.
///
/// @param size QSize*
/// @param pixelFormat enum QVideoFrameFormat__PixelFormat
QVideoFrameFormat* q_videoframeformat_new2(void* size, int32_t pixelFormat);

/// q_videoframeformat_new3 constructs a new QVideoFrameFormat object.
///
/// @param format QVideoFrameFormat*
QVideoFrameFormat* q_videoframeformat_new3(void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#swap)
///
/// @param self QVideoFrameFormat*
/// @param other QVideoFrameFormat*
void q_videoframeformat_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#detach)
///
/// @param self QVideoFrameFormat*
void q_videoframeformat_detach(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#operator-eq)
///
/// @param self QVideoFrameFormat*
/// @param format QVideoFrameFormat*
void q_videoframeformat_operator_assign(void* self, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#operator-eq-eq)
///
/// @param self QVideoFrameFormat*
/// @param format QVideoFrameFormat*
bool q_videoframeformat_operator_equal(void* self, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#operator-not-eq)
///
/// @param self QVideoFrameFormat*
/// @param format QVideoFrameFormat*
bool q_videoframeformat_operator_not_equal(void* self, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#isValid)
///
/// @param self QVideoFrameFormat*
bool q_videoframeformat_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#pixelFormat)
///
/// @param self QVideoFrameFormat*
///
/// @return enum QVideoFrameFormat__PixelFormat
int32_t q_videoframeformat_pixel_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#frameSize)
///
/// @param self QVideoFrameFormat*
QSize* q_videoframeformat_frame_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setFrameSize)
///
/// @param self QVideoFrameFormat*
/// @param size QSize*
void q_videoframeformat_set_frame_size(void* self, void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setFrameSize)
///
/// @param self QVideoFrameFormat*
/// @param width int
/// @param height int
void q_videoframeformat_set_frame_size2(void* self, int width, int height);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#frameWidth)
///
/// @param self QVideoFrameFormat*
int32_t q_videoframeformat_frame_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#frameHeight)
///
/// @param self QVideoFrameFormat*
int32_t q_videoframeformat_frame_height(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#planeCount)
///
/// @param self QVideoFrameFormat*
int32_t q_videoframeformat_plane_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#viewport)
///
/// @param self QVideoFrameFormat*
QRect* q_videoframeformat_viewport(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setViewport)
///
/// @param self QVideoFrameFormat*
/// @param viewport QRect*
void q_videoframeformat_set_viewport(void* self, void* viewport);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#scanLineDirection)
///
/// @param self QVideoFrameFormat*
///
/// @return enum QVideoFrameFormat__Direction
int32_t q_videoframeformat_scan_line_direction(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setScanLineDirection)
///
/// @param self QVideoFrameFormat*
/// @param direction enum QVideoFrameFormat__Direction
void q_videoframeformat_set_scan_line_direction(void* self, int32_t direction);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#frameRate)
///
/// @param self QVideoFrameFormat*
double q_videoframeformat_frame_rate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setFrameRate)
///
/// @param self QVideoFrameFormat*
/// @param rate double
void q_videoframeformat_set_frame_rate(void* self, double rate);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#streamFrameRate)
///
/// @param self QVideoFrameFormat*
double q_videoframeformat_stream_frame_rate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setStreamFrameRate)
///
/// @param self QVideoFrameFormat*
/// @param rate double
void q_videoframeformat_set_stream_frame_rate(void* self, double rate);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#yCbCrColorSpace)
///
/// @param self QVideoFrameFormat*
///
/// @return enum QVideoFrameFormat__YCbCrColorSpace
int32_t q_videoframeformat_y_cb_cr_color_space(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setYCbCrColorSpace)
///
/// @param self QVideoFrameFormat*
/// @param colorSpace enum QVideoFrameFormat__YCbCrColorSpace
void q_videoframeformat_set_y_cb_cr_color_space(void* self, int32_t colorSpace);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#colorSpace)
///
/// @param self QVideoFrameFormat*
///
/// @return enum QVideoFrameFormat__ColorSpace
int32_t q_videoframeformat_color_space(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setColorSpace)
///
/// @param self QVideoFrameFormat*
/// @param colorSpace enum QVideoFrameFormat__ColorSpace
void q_videoframeformat_set_color_space(void* self, int32_t colorSpace);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#colorTransfer)
///
/// @param self QVideoFrameFormat*
///
/// @return enum QVideoFrameFormat__ColorTransfer
int32_t q_videoframeformat_color_transfer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setColorTransfer)
///
/// @param self QVideoFrameFormat*
/// @param colorTransfer enum QVideoFrameFormat__ColorTransfer
void q_videoframeformat_set_color_transfer(void* self, int32_t colorTransfer);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#colorRange)
///
/// @param self QVideoFrameFormat*
///
/// @return enum QVideoFrameFormat__ColorRange
int32_t q_videoframeformat_color_range(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setColorRange)
///
/// @param self QVideoFrameFormat*
/// @param range enum QVideoFrameFormat__ColorRange
void q_videoframeformat_set_color_range(void* self, int32_t range);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#isMirrored)
///
/// @param self QVideoFrameFormat*
bool q_videoframeformat_is_mirrored(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setMirrored)
///
/// @param self QVideoFrameFormat*
/// @param mirrored bool
void q_videoframeformat_set_mirrored(void* self, bool mirrored);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#rotation)
///
/// @param self QVideoFrameFormat*
///
/// @return enum QtVideo__Rotation
int32_t q_videoframeformat_rotation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setRotation)
///
/// @param self QVideoFrameFormat*
/// @param rotation enum QtVideo__Rotation
void q_videoframeformat_set_rotation(void* self, int32_t rotation);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#vertexShaderFileName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QVideoFrameFormat*
const char* q_videoframeformat_vertex_shader_file_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#fragmentShaderFileName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QVideoFrameFormat*
const char* q_videoframeformat_fragment_shader_file_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#maxLuminance)
///
/// @param self QVideoFrameFormat*
float q_videoframeformat_max_luminance(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#setMaxLuminance)
///
/// @param self QVideoFrameFormat*
/// @param lum float
void q_videoframeformat_set_max_luminance(void* self, float lum);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#pixelFormatFromImageFormat)
///
/// @param format enum QImage__Format
///
/// @return enum QVideoFrameFormat__PixelFormat
int32_t q_videoframeformat_pixel_format_from_image_format(int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#imageFormatFromPixelFormat)
///
/// @param format enum QVideoFrameFormat__PixelFormat
///
/// @return enum QImage__Format
int32_t q_videoframeformat_image_format_from_pixel_format(int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#pixelFormatToString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param pixelFormat enum QVideoFrameFormat__PixelFormat
const char* q_videoframeformat_pixel_format_to_string(int32_t pixelFormat);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframeformat.html#dtor.QVideoFrameFormat)
///
/// Delete this object from C++ memory.
///
/// @param self QVideoFrameFormat*
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
