#include "../libqimage.hpp"
#include "../libqpainter.hpp"
#include "../libqrect.hpp"
#include "../libqsize.hpp"
#include <string.h>
#include "libqvideoframeformat.hpp"
#include "libqvideoframe.hpp"
#include "libqvideoframe.h"

/// https://doc.qt.io/qt-6/qvideoframe.html

/// q_videoframe_new constructs a new QVideoFrame object.
///
///
QVideoFrame* q_videoframe_new() {
    return QVideoFrame_new();
}

/// q_videoframe_new2 constructs a new QVideoFrame object.
///
/// ``` QVideoFrameFormat* format ```
QVideoFrame* q_videoframe_new2(void* format) {
    return QVideoFrame_new2((QVideoFrameFormat*)format);
}

/// q_videoframe_new3 constructs a new QVideoFrame object.
///
/// ``` QVideoFrame* other ```
QVideoFrame* q_videoframe_new3(void* other) {
    return QVideoFrame_new3((QVideoFrame*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#swap)
///
/// ``` QVideoFrame* self, QVideoFrame* other ```
void q_videoframe_swap(void* self, void* other) {
    QVideoFrame_Swap((QVideoFrame*)self, (QVideoFrame*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#operator=)
///
/// ``` QVideoFrame* self, QVideoFrame* other ```
void q_videoframe_operator_assign(void* self, void* other) {
    QVideoFrame_OperatorAssign((QVideoFrame*)self, (QVideoFrame*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#operator==)
///
/// ``` QVideoFrame* self, QVideoFrame* other ```
bool q_videoframe_operator_equal(void* self, void* other) {
    return QVideoFrame_OperatorEqual((QVideoFrame*)self, (QVideoFrame*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#operator!=)
///
/// ``` QVideoFrame* self, QVideoFrame* other ```
bool q_videoframe_operator_not_equal(void* self, void* other) {
    return QVideoFrame_OperatorNotEqual((QVideoFrame*)self, (QVideoFrame*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#isValid)
///
/// ``` QVideoFrame* self ```
bool q_videoframe_is_valid(void* self) {
    return QVideoFrame_IsValid((QVideoFrame*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#pixelFormat)
///
/// ``` QVideoFrame* self ```
int64_t q_videoframe_pixel_format(void* self) {
    return QVideoFrame_PixelFormat((QVideoFrame*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#surfaceFormat)
///
/// ``` QVideoFrame* self ```
QVideoFrameFormat* q_videoframe_surface_format(void* self) {
    return QVideoFrame_SurfaceFormat((QVideoFrame*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#handleType)
///
/// ``` QVideoFrame* self ```
int64_t q_videoframe_handle_type(void* self) {
    return QVideoFrame_HandleType((QVideoFrame*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#size)
///
/// ``` QVideoFrame* self ```
QSize* q_videoframe_size(void* self) {
    return QVideoFrame_Size((QVideoFrame*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#width)
///
/// ``` QVideoFrame* self ```
int32_t q_videoframe_width(void* self) {
    return QVideoFrame_Width((QVideoFrame*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#height)
///
/// ``` QVideoFrame* self ```
int32_t q_videoframe_height(void* self) {
    return QVideoFrame_Height((QVideoFrame*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#isMapped)
///
/// ``` QVideoFrame* self ```
bool q_videoframe_is_mapped(void* self) {
    return QVideoFrame_IsMapped((QVideoFrame*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#isReadable)
///
/// ``` QVideoFrame* self ```
bool q_videoframe_is_readable(void* self) {
    return QVideoFrame_IsReadable((QVideoFrame*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#isWritable)
///
/// ``` QVideoFrame* self ```
bool q_videoframe_is_writable(void* self) {
    return QVideoFrame_IsWritable((QVideoFrame*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#mapMode)
///
/// ``` QVideoFrame* self ```
int64_t q_videoframe_map_mode(void* self) {
    return QVideoFrame_MapMode((QVideoFrame*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#map)
///
/// ``` QVideoFrame* self, enum QVideoFrame__MapMode mode ```
bool q_videoframe_map(void* self, int64_t mode) {
    return QVideoFrame_Map((QVideoFrame*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#unmap)
///
/// ``` QVideoFrame* self ```
void q_videoframe_unmap(void* self) {
    QVideoFrame_Unmap((QVideoFrame*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#bytesPerLine)
///
/// ``` QVideoFrame* self, int plane ```
int32_t q_videoframe_bytes_per_line(void* self, int plane) {
    return QVideoFrame_BytesPerLine((QVideoFrame*)self, plane);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#bits)
///
/// ``` QVideoFrame* self, int plane ```
unsigned char* q_videoframe_bits(void* self, int plane) {
    return (unsigned char*)QVideoFrame_Bits((QVideoFrame*)self, plane);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#bits)
///
/// ``` QVideoFrame* self, int plane ```
unsigned char* q_videoframe_bits_with_plane(void* self, int plane) {
    return (unsigned char*)QVideoFrame_BitsWithPlane((QVideoFrame*)self, plane);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#mappedBytes)
///
/// ``` QVideoFrame* self, int plane ```
int32_t q_videoframe_mapped_bytes(void* self, int plane) {
    return QVideoFrame_MappedBytes((QVideoFrame*)self, plane);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#planeCount)
///
/// ``` QVideoFrame* self ```
int32_t q_videoframe_plane_count(void* self) {
    return QVideoFrame_PlaneCount((QVideoFrame*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#startTime)
///
/// ``` QVideoFrame* self ```
long long q_videoframe_start_time(void* self) {
    return QVideoFrame_StartTime((QVideoFrame*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#setStartTime)
///
/// ``` QVideoFrame* self, long long time ```
void q_videoframe_set_start_time(void* self, long long time) {
    QVideoFrame_SetStartTime((QVideoFrame*)self, time);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#endTime)
///
/// ``` QVideoFrame* self ```
long long q_videoframe_end_time(void* self) {
    return QVideoFrame_EndTime((QVideoFrame*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#setEndTime)
///
/// ``` QVideoFrame* self, long long time ```
void q_videoframe_set_end_time(void* self, long long time) {
    QVideoFrame_SetEndTime((QVideoFrame*)self, time);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#setRotationAngle)
///
/// ``` QVideoFrame* self, enum QVideoFrame__RotationAngle rotationAngle ```
void q_videoframe_set_rotation_angle(void* self, int64_t rotationAngle) {
    QVideoFrame_SetRotationAngle((QVideoFrame*)self, rotationAngle);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#rotationAngle)
///
/// ``` QVideoFrame* self ```
int64_t q_videoframe_rotation_angle(void* self) {
    return QVideoFrame_RotationAngle((QVideoFrame*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#setMirrored)
///
/// ``` QVideoFrame* self, bool mirrored ```
void q_videoframe_set_mirrored(void* self, bool mirrored) {
    QVideoFrame_SetMirrored((QVideoFrame*)self, mirrored);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#mirrored)
///
/// ``` QVideoFrame* self ```
bool q_videoframe_mirrored(void* self) {
    return QVideoFrame_Mirrored((QVideoFrame*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#toImage)
///
/// ``` QVideoFrame* self ```
QImage* q_videoframe_to_image(void* self) {
    return QVideoFrame_ToImage((QVideoFrame*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#subtitleText)
///
/// ``` QVideoFrame* self ```
const char* q_videoframe_subtitle_text(void* self) {
    libqt_string _str = QVideoFrame_SubtitleText((QVideoFrame*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#setSubtitleText)
///
/// ``` QVideoFrame* self, const char* text ```
void q_videoframe_set_subtitle_text(void* self, const char* text) {
    QVideoFrame_SetSubtitleText((QVideoFrame*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#paint)
///
/// ``` QVideoFrame* self, QPainter* painter, QRectF* rect, QVideoFrame__PaintOptions* options ```
void q_videoframe_paint(void* self, void* painter, void* rect, void* options) {
    QVideoFrame_Paint((QVideoFrame*)self, (QPainter*)painter, (QRectF*)rect, (QVideoFrame__PaintOptions*)options);
}

/// Delete this object from C++ memory.
///
/// ``` QVideoFrame* self ```
void q_videoframe_delete(void* self) {
    QVideoFrame_Delete((QVideoFrame*)(self));
}

/// https://doc.qt.io/qt-6/qvideoframe-paintoptions.html

/// q_videoframe__paintoptions_new constructs a new QVideoFrame::PaintOptions object.
///
/// ``` QVideoFrame__PaintOptions* other ```
QVideoFrame__PaintOptions* q_videoframe__paintoptions_new(void* other) {
    return QVideoFrame__PaintOptions_new((QVideoFrame__PaintOptions*)other);
}

/// q_videoframe__paintoptions_new2 constructs a new QVideoFrame::PaintOptions object and invalidates the source QVideoFrame::PaintOptions object.
///
/// ``` QVideoFrame__PaintOptions* other ```
QVideoFrame__PaintOptions* q_videoframe__paintoptions_new2(void* other) {
    return QVideoFrame__PaintOptions_new2((QVideoFrame__PaintOptions*)other);
}

/// q_videoframe__paintoptions_copy_assign shallow copies `other` into `self`.
///
/// ``` QVideoFrame__PaintOptions* self, QVideoFrame__PaintOptions* other ```
void q_videoframe__paintoptions_copy_assign(void* self, void* other) {
    QVideoFrame__PaintOptions_CopyAssign((QVideoFrame__PaintOptions*)self, (QVideoFrame__PaintOptions*)other);
}

/// q_videoframe__paintoptions_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QVideoFrame__PaintOptions* self, QVideoFrame__PaintOptions* other ```
void q_videoframe__paintoptions_move_assign(void* self, void* other) {
    QVideoFrame__PaintOptions_MoveAssign((QVideoFrame__PaintOptions*)self, (QVideoFrame__PaintOptions*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QVideoFrame__PaintOptions* self ```
void q_videoframe__paintoptions_delete(void* self) {
    QVideoFrame__PaintOptions_Delete((QVideoFrame__PaintOptions*)(self));
}