#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQVIDEOFRAMEFORMAT_H
#define SRC_MULTIMEDIAQT6C_LIBQVIDEOFRAMEFORMAT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqrect.h"
#include "../libqsize.h"
#include <string.h>

QVideoFrameFormat* q_videoframeformat_new();
QVideoFrameFormat* q_videoframeformat_new2(void* size, int64_t pixelFormat);
QVideoFrameFormat* q_videoframeformat_new3(void* format);
void q_videoframeformat_swap(void* self, void* other);
void q_videoframeformat_detach(void* self);
void q_videoframeformat_operator_assign(void* self, void* format);
bool q_videoframeformat_operator_equal(void* self, void* format);
bool q_videoframeformat_operator_not_equal(void* self, void* format);
bool q_videoframeformat_is_valid(void* self);
int64_t q_videoframeformat_pixel_format(void* self);
QSize* q_videoframeformat_frame_size(void* self);
void q_videoframeformat_set_frame_size(void* self, void* size);
void q_videoframeformat_set_frame_size2(void* self, int width, int height);
int32_t q_videoframeformat_frame_width(void* self);
int32_t q_videoframeformat_frame_height(void* self);
int32_t q_videoframeformat_plane_count(void* self);
QRect* q_videoframeformat_viewport(void* self);
void q_videoframeformat_set_viewport(void* self, void* viewport);
int64_t q_videoframeformat_scan_line_direction(void* self);
void q_videoframeformat_set_scan_line_direction(void* self, int64_t direction);
double q_videoframeformat_frame_rate(void* self);
void q_videoframeformat_set_frame_rate(void* self, double rate);
int64_t q_videoframeformat_y_cb_cr_color_space(void* self);
void q_videoframeformat_set_y_cb_cr_color_space(void* self, int64_t colorSpace);
int64_t q_videoframeformat_color_space(void* self);
void q_videoframeformat_set_color_space(void* self, int64_t colorSpace);
int64_t q_videoframeformat_color_transfer(void* self);
void q_videoframeformat_set_color_transfer(void* self, int64_t colorTransfer);
int64_t q_videoframeformat_color_range(void* self);
void q_videoframeformat_set_color_range(void* self, int64_t range);
bool q_videoframeformat_is_mirrored(void* self);
void q_videoframeformat_set_mirrored(void* self, bool mirrored);
const char* q_videoframeformat_vertex_shader_file_name(void* self);
const char* q_videoframeformat_fragment_shader_file_name(void* self);
float q_videoframeformat_max_luminance(void* self);
void q_videoframeformat_set_max_luminance(void* self, float lum);
int64_t q_videoframeformat_pixel_format_from_image_format(int64_t format);
int64_t q_videoframeformat_image_format_from_pixel_format(int64_t format);
const char* q_videoframeformat_pixel_format_to_string(int64_t pixelFormat);
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
