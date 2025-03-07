#include "../libqrect.hpp"
#include "../libqsize.hpp"
#include <string.h>
#include "libqvideoframeformat.hpp"
#include "libqvideoframeformat.h"

/// https://doc.qt.io/qt-6/qvideoframeformat.html

/// q_videoframeformat_new constructs a new QVideoFrameFormat object.
///
///
QVideoFrameFormat* q_videoframeformat_new() {
    return QVideoFrameFormat_new();
}

/// q_videoframeformat_new2 constructs a new QVideoFrameFormat object.
///
/// ``` QSize* size, enum QVideoFrameFormat__PixelFormat pixelFormat ```
QVideoFrameFormat* q_videoframeformat_new2(void* size, int64_t pixelFormat) {
    return QVideoFrameFormat_new2((QSize*)size, pixelFormat);
}

/// q_videoframeformat_new3 constructs a new QVideoFrameFormat object.
///
/// ``` QVideoFrameFormat* format ```
QVideoFrameFormat* q_videoframeformat_new3(void* format) {
    return QVideoFrameFormat_new3((QVideoFrameFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#swap)
///
/// ``` QVideoFrameFormat* self, QVideoFrameFormat* other ```
void q_videoframeformat_swap(void* self, void* other) {
    QVideoFrameFormat_Swap((QVideoFrameFormat*)self, (QVideoFrameFormat*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#detach)
///
/// ``` QVideoFrameFormat* self ```
void q_videoframeformat_detach(void* self) {
    QVideoFrameFormat_Detach((QVideoFrameFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#operator=)
///
/// ``` QVideoFrameFormat* self, QVideoFrameFormat* format ```
void q_videoframeformat_operator_assign(void* self, void* format) {
    QVideoFrameFormat_OperatorAssign((QVideoFrameFormat*)self, (QVideoFrameFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#operator==)
///
/// ``` QVideoFrameFormat* self, QVideoFrameFormat* format ```
bool q_videoframeformat_operator_equal(void* self, void* format) {
    return QVideoFrameFormat_OperatorEqual((QVideoFrameFormat*)self, (QVideoFrameFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#operator!=)
///
/// ``` QVideoFrameFormat* self, QVideoFrameFormat* format ```
bool q_videoframeformat_operator_not_equal(void* self, void* format) {
    return QVideoFrameFormat_OperatorNotEqual((QVideoFrameFormat*)self, (QVideoFrameFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#isValid)
///
/// ``` QVideoFrameFormat* self ```
bool q_videoframeformat_is_valid(void* self) {
    return QVideoFrameFormat_IsValid((QVideoFrameFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#pixelFormat)
///
/// ``` QVideoFrameFormat* self ```
int64_t q_videoframeformat_pixel_format(void* self) {
    return QVideoFrameFormat_PixelFormat((QVideoFrameFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#frameSize)
///
/// ``` QVideoFrameFormat* self ```
QSize* q_videoframeformat_frame_size(void* self) {
    return QVideoFrameFormat_FrameSize((QVideoFrameFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setFrameSize)
///
/// ``` QVideoFrameFormat* self, QSize* size ```
void q_videoframeformat_set_frame_size(void* self, void* size) {
    QVideoFrameFormat_SetFrameSize((QVideoFrameFormat*)self, (QSize*)size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setFrameSize)
///
/// ``` QVideoFrameFormat* self, int width, int height ```
void q_videoframeformat_set_frame_size2(void* self, int width, int height) {
    QVideoFrameFormat_SetFrameSize2((QVideoFrameFormat*)self, width, height);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#frameWidth)
///
/// ``` QVideoFrameFormat* self ```
int32_t q_videoframeformat_frame_width(void* self) {
    return QVideoFrameFormat_FrameWidth((QVideoFrameFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#frameHeight)
///
/// ``` QVideoFrameFormat* self ```
int32_t q_videoframeformat_frame_height(void* self) {
    return QVideoFrameFormat_FrameHeight((QVideoFrameFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#planeCount)
///
/// ``` QVideoFrameFormat* self ```
int32_t q_videoframeformat_plane_count(void* self) {
    return QVideoFrameFormat_PlaneCount((QVideoFrameFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#viewport)
///
/// ``` QVideoFrameFormat* self ```
QRect* q_videoframeformat_viewport(void* self) {
    return QVideoFrameFormat_Viewport((QVideoFrameFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setViewport)
///
/// ``` QVideoFrameFormat* self, QRect* viewport ```
void q_videoframeformat_set_viewport(void* self, void* viewport) {
    QVideoFrameFormat_SetViewport((QVideoFrameFormat*)self, (QRect*)viewport);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#scanLineDirection)
///
/// ``` QVideoFrameFormat* self ```
int64_t q_videoframeformat_scan_line_direction(void* self) {
    return QVideoFrameFormat_ScanLineDirection((QVideoFrameFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setScanLineDirection)
///
/// ``` QVideoFrameFormat* self, enum QVideoFrameFormat__Direction direction ```
void q_videoframeformat_set_scan_line_direction(void* self, int64_t direction) {
    QVideoFrameFormat_SetScanLineDirection((QVideoFrameFormat*)self, direction);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#frameRate)
///
/// ``` QVideoFrameFormat* self ```
double q_videoframeformat_frame_rate(void* self) {
    return QVideoFrameFormat_FrameRate((QVideoFrameFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setFrameRate)
///
/// ``` QVideoFrameFormat* self, double rate ```
void q_videoframeformat_set_frame_rate(void* self, double rate) {
    QVideoFrameFormat_SetFrameRate((QVideoFrameFormat*)self, rate);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#yCbCrColorSpace)
///
/// ``` QVideoFrameFormat* self ```
int64_t q_videoframeformat_y_cb_cr_color_space(void* self) {
    return QVideoFrameFormat_YCbCrColorSpace((QVideoFrameFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setYCbCrColorSpace)
///
/// ``` QVideoFrameFormat* self, enum QVideoFrameFormat__YCbCrColorSpace colorSpace ```
void q_videoframeformat_set_y_cb_cr_color_space(void* self, int64_t colorSpace) {
    QVideoFrameFormat_SetYCbCrColorSpace((QVideoFrameFormat*)self, colorSpace);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#colorSpace)
///
/// ``` QVideoFrameFormat* self ```
int64_t q_videoframeformat_color_space(void* self) {
    return QVideoFrameFormat_ColorSpace((QVideoFrameFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setColorSpace)
///
/// ``` QVideoFrameFormat* self, enum QVideoFrameFormat__ColorSpace colorSpace ```
void q_videoframeformat_set_color_space(void* self, int64_t colorSpace) {
    QVideoFrameFormat_SetColorSpace((QVideoFrameFormat*)self, colorSpace);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#colorTransfer)
///
/// ``` QVideoFrameFormat* self ```
int64_t q_videoframeformat_color_transfer(void* self) {
    return QVideoFrameFormat_ColorTransfer((QVideoFrameFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setColorTransfer)
///
/// ``` QVideoFrameFormat* self, enum QVideoFrameFormat__ColorTransfer colorTransfer ```
void q_videoframeformat_set_color_transfer(void* self, int64_t colorTransfer) {
    QVideoFrameFormat_SetColorTransfer((QVideoFrameFormat*)self, colorTransfer);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#colorRange)
///
/// ``` QVideoFrameFormat* self ```
int64_t q_videoframeformat_color_range(void* self) {
    return QVideoFrameFormat_ColorRange((QVideoFrameFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setColorRange)
///
/// ``` QVideoFrameFormat* self, enum QVideoFrameFormat__ColorRange range ```
void q_videoframeformat_set_color_range(void* self, int64_t range) {
    QVideoFrameFormat_SetColorRange((QVideoFrameFormat*)self, range);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#isMirrored)
///
/// ``` QVideoFrameFormat* self ```
bool q_videoframeformat_is_mirrored(void* self) {
    return QVideoFrameFormat_IsMirrored((QVideoFrameFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setMirrored)
///
/// ``` QVideoFrameFormat* self, bool mirrored ```
void q_videoframeformat_set_mirrored(void* self, bool mirrored) {
    QVideoFrameFormat_SetMirrored((QVideoFrameFormat*)self, mirrored);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#vertexShaderFileName)
///
/// ``` QVideoFrameFormat* self ```
const char* q_videoframeformat_vertex_shader_file_name(void* self) {
    libqt_string _str = QVideoFrameFormat_VertexShaderFileName((QVideoFrameFormat*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#fragmentShaderFileName)
///
/// ``` QVideoFrameFormat* self ```
const char* q_videoframeformat_fragment_shader_file_name(void* self) {
    libqt_string _str = QVideoFrameFormat_FragmentShaderFileName((QVideoFrameFormat*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#maxLuminance)
///
/// ``` QVideoFrameFormat* self ```
float q_videoframeformat_max_luminance(void* self) {
    return QVideoFrameFormat_MaxLuminance((QVideoFrameFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#setMaxLuminance)
///
/// ``` QVideoFrameFormat* self, float lum ```
void q_videoframeformat_set_max_luminance(void* self, float lum) {
    QVideoFrameFormat_SetMaxLuminance((QVideoFrameFormat*)self, lum);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#pixelFormatFromImageFormat)
///
/// ``` enum QImage__Format format ```
int64_t q_videoframeformat_pixel_format_from_image_format(int64_t format) {
    return QVideoFrameFormat_PixelFormatFromImageFormat(format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#imageFormatFromPixelFormat)
///
/// ``` enum QVideoFrameFormat__PixelFormat format ```
int64_t q_videoframeformat_image_format_from_pixel_format(int64_t format) {
    return QVideoFrameFormat_ImageFormatFromPixelFormat(format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframeformat.html#pixelFormatToString)
///
/// ``` enum QVideoFrameFormat__PixelFormat pixelFormat ```
const char* q_videoframeformat_pixel_format_to_string(int64_t pixelFormat) {
    libqt_string _str = QVideoFrameFormat_PixelFormatToString(pixelFormat);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QVideoFrameFormat* self ```
void q_videoframeformat_delete(void* self) {
    QVideoFrameFormat_Delete((QVideoFrameFormat*)(self));
}