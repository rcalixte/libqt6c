#include "../libqrect.hpp"
#include "../libqsize.hpp"
#include "libqvideoframeformat.hpp"
#include "libqvideoframeformat.h"

QVideoFrameFormat* q_videoframeformat_new() {
    return QVideoFrameFormat_new();
}

QVideoFrameFormat* q_videoframeformat_new2(void* size, int64_t pixelFormat) {
    return QVideoFrameFormat_new2((QSize*)size, pixelFormat);
}

QVideoFrameFormat* q_videoframeformat_new3(void* format) {
    return QVideoFrameFormat_new3((QVideoFrameFormat*)format);
}

void q_videoframeformat_swap(void* self, void* other) {
    QVideoFrameFormat_Swap((QVideoFrameFormat*)self, (QVideoFrameFormat*)other);
}

void q_videoframeformat_detach(void* self) {
    QVideoFrameFormat_Detach((QVideoFrameFormat*)self);
}

void q_videoframeformat_operator_assign(void* self, void* format) {
    QVideoFrameFormat_OperatorAssign((QVideoFrameFormat*)self, (QVideoFrameFormat*)format);
}

bool q_videoframeformat_operator_equal(void* self, void* format) {
    return QVideoFrameFormat_OperatorEqual((QVideoFrameFormat*)self, (QVideoFrameFormat*)format);
}

bool q_videoframeformat_operator_not_equal(void* self, void* format) {
    return QVideoFrameFormat_OperatorNotEqual((QVideoFrameFormat*)self, (QVideoFrameFormat*)format);
}

bool q_videoframeformat_is_valid(void* self) {
    return QVideoFrameFormat_IsValid((QVideoFrameFormat*)self);
}

int64_t q_videoframeformat_pixel_format(void* self) {
    return QVideoFrameFormat_PixelFormat((QVideoFrameFormat*)self);
}

QSize* q_videoframeformat_frame_size(void* self) {
    return QVideoFrameFormat_FrameSize((QVideoFrameFormat*)self);
}

void q_videoframeformat_set_frame_size(void* self, void* size) {
    QVideoFrameFormat_SetFrameSize((QVideoFrameFormat*)self, (QSize*)size);
}

void q_videoframeformat_set_frame_size2(void* self, int width, int height) {
    QVideoFrameFormat_SetFrameSize2((QVideoFrameFormat*)self, width, height);
}

int32_t q_videoframeformat_frame_width(void* self) {
    return QVideoFrameFormat_FrameWidth((QVideoFrameFormat*)self);
}

int32_t q_videoframeformat_frame_height(void* self) {
    return QVideoFrameFormat_FrameHeight((QVideoFrameFormat*)self);
}

int32_t q_videoframeformat_plane_count(void* self) {
    return QVideoFrameFormat_PlaneCount((QVideoFrameFormat*)self);
}

QRect* q_videoframeformat_viewport(void* self) {
    return QVideoFrameFormat_Viewport((QVideoFrameFormat*)self);
}

void q_videoframeformat_set_viewport(void* self, void* viewport) {
    QVideoFrameFormat_SetViewport((QVideoFrameFormat*)self, (QRect*)viewport);
}

int64_t q_videoframeformat_scan_line_direction(void* self) {
    return QVideoFrameFormat_ScanLineDirection((QVideoFrameFormat*)self);
}

void q_videoframeformat_set_scan_line_direction(void* self, int64_t direction) {
    QVideoFrameFormat_SetScanLineDirection((QVideoFrameFormat*)self, direction);
}

double q_videoframeformat_frame_rate(void* self) {
    return QVideoFrameFormat_FrameRate((QVideoFrameFormat*)self);
}

void q_videoframeformat_set_frame_rate(void* self, double rate) {
    QVideoFrameFormat_SetFrameRate((QVideoFrameFormat*)self, rate);
}

double q_videoframeformat_stream_frame_rate(void* self) {
    return QVideoFrameFormat_StreamFrameRate((QVideoFrameFormat*)self);
}

void q_videoframeformat_set_stream_frame_rate(void* self, double rate) {
    QVideoFrameFormat_SetStreamFrameRate((QVideoFrameFormat*)self, rate);
}

int64_t q_videoframeformat_y_cb_cr_color_space(void* self) {
    return QVideoFrameFormat_YCbCrColorSpace((QVideoFrameFormat*)self);
}

void q_videoframeformat_set_y_cb_cr_color_space(void* self, int64_t colorSpace) {
    QVideoFrameFormat_SetYCbCrColorSpace((QVideoFrameFormat*)self, colorSpace);
}

int64_t q_videoframeformat_color_space(void* self) {
    return QVideoFrameFormat_ColorSpace((QVideoFrameFormat*)self);
}

void q_videoframeformat_set_color_space(void* self, int64_t colorSpace) {
    QVideoFrameFormat_SetColorSpace((QVideoFrameFormat*)self, colorSpace);
}

int64_t q_videoframeformat_color_transfer(void* self) {
    return QVideoFrameFormat_ColorTransfer((QVideoFrameFormat*)self);
}

void q_videoframeformat_set_color_transfer(void* self, int64_t colorTransfer) {
    QVideoFrameFormat_SetColorTransfer((QVideoFrameFormat*)self, colorTransfer);
}

int64_t q_videoframeformat_color_range(void* self) {
    return QVideoFrameFormat_ColorRange((QVideoFrameFormat*)self);
}

void q_videoframeformat_set_color_range(void* self, int64_t range) {
    QVideoFrameFormat_SetColorRange((QVideoFrameFormat*)self, range);
}

bool q_videoframeformat_is_mirrored(void* self) {
    return QVideoFrameFormat_IsMirrored((QVideoFrameFormat*)self);
}

void q_videoframeformat_set_mirrored(void* self, bool mirrored) {
    QVideoFrameFormat_SetMirrored((QVideoFrameFormat*)self, mirrored);
}

int64_t q_videoframeformat_rotation(void* self) {
    return QVideoFrameFormat_Rotation((QVideoFrameFormat*)self);
}

void q_videoframeformat_set_rotation(void* self, int64_t rotation) {
    QVideoFrameFormat_SetRotation((QVideoFrameFormat*)self, rotation);
}

const char* q_videoframeformat_vertex_shader_file_name(void* self) {
    libqt_string _str = QVideoFrameFormat_VertexShaderFileName((QVideoFrameFormat*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_videoframeformat_fragment_shader_file_name(void* self) {
    libqt_string _str = QVideoFrameFormat_FragmentShaderFileName((QVideoFrameFormat*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

float q_videoframeformat_max_luminance(void* self) {
    return QVideoFrameFormat_MaxLuminance((QVideoFrameFormat*)self);
}

void q_videoframeformat_set_max_luminance(void* self, float lum) {
    QVideoFrameFormat_SetMaxLuminance((QVideoFrameFormat*)self, lum);
}

int64_t q_videoframeformat_pixel_format_from_image_format(int64_t format) {
    return QVideoFrameFormat_PixelFormatFromImageFormat(format);
}

int64_t q_videoframeformat_image_format_from_pixel_format(int64_t format) {
    return QVideoFrameFormat_ImageFormatFromPixelFormat(format);
}

const char* q_videoframeformat_pixel_format_to_string(int64_t pixelFormat) {
    libqt_string _str = QVideoFrameFormat_PixelFormatToString(pixelFormat);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_videoframeformat_delete(void* self) {
    QVideoFrameFormat_Delete((QVideoFrameFormat*)(self));
}
