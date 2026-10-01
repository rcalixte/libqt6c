#include "libqabstractvideobuffer.hpp"
#include "../libqcolor.hpp"
#include "../libqimage.hpp"
#include "../libqpainter.hpp"
#include "../libqrect.hpp"
#include "../libqsize.hpp"
#include "libqvideoframeformat.hpp"
#include "libqvideoframe.hpp"
#include "libqvideoframe.h"

QVideoFrame* q_videoframe_new() {
    return QVideoFrame_New();
}

QVideoFrame* q_videoframe_new2(const void* format) {
    return QVideoFrame_New2((QVideoFrameFormat*)format);
}

QVideoFrame* q_videoframe_new3(const void* image) {
    return QVideoFrame_New3((QImage*)image);
}

QVideoFrame* q_videoframe_new4(void* videoBuffer) {
    return QVideoFrame_New4((QAbstractVideoBuffer*)videoBuffer);
}

QVideoFrame* q_videoframe_new5(const void* other) {
    return QVideoFrame_New5((QVideoFrame*)other);
}

QVideoFrame* q_videoframe_new6(void* buffer, const void* format) {
    return QVideoFrame_New6((QAbstractVideoBuffer*)buffer, (QVideoFrameFormat*)format);
}

void q_videoframe_swap(void* self, void* other) {
    QVideoFrame_Swap((QVideoFrame*)self, (QVideoFrame*)other);
}

void q_videoframe_operator_assign(void* self, const void* other) {
    QVideoFrame_OperatorAssign((QVideoFrame*)self, (QVideoFrame*)other);
}

bool q_videoframe_operator_equal(const void* self, const void* other) {
    return QVideoFrame_OperatorEqual((QVideoFrame*)self, (QVideoFrame*)other);
}

bool q_videoframe_operator_not_equal(const void* self, const void* other) {
    return QVideoFrame_OperatorNotEqual((QVideoFrame*)self, (QVideoFrame*)other);
}

bool q_videoframe_is_valid(const void* self) {
    return QVideoFrame_IsValid((QVideoFrame*)self);
}

int32_t q_videoframe_pixel_format(const void* self) {
    return QVideoFrame_PixelFormat((QVideoFrame*)self);
}

QVideoFrameFormat* q_videoframe_surface_format(const void* self) {
    return QVideoFrame_SurfaceFormat((QVideoFrame*)self);
}

int32_t q_videoframe_handle_type(const void* self) {
    return QVideoFrame_HandleType((QVideoFrame*)self);
}

QSize* q_videoframe_size(const void* self) {
    return QVideoFrame_Size((QVideoFrame*)self);
}

int32_t q_videoframe_width(const void* self) {
    return QVideoFrame_Width((QVideoFrame*)self);
}

int32_t q_videoframe_height(const void* self) {
    return QVideoFrame_Height((QVideoFrame*)self);
}

bool q_videoframe_is_mapped(const void* self) {
    return QVideoFrame_IsMapped((QVideoFrame*)self);
}

bool q_videoframe_is_readable(const void* self) {
    return QVideoFrame_IsReadable((QVideoFrame*)self);
}

bool q_videoframe_is_writable(const void* self) {
    return QVideoFrame_IsWritable((QVideoFrame*)self);
}

int32_t q_videoframe_map_mode(const void* self) {
    return QVideoFrame_MapMode((QVideoFrame*)self);
}

bool q_videoframe_map(void* self, int32_t mode) {
    return QVideoFrame_Map((QVideoFrame*)self, mode);
}

void q_videoframe_unmap(void* self) {
    QVideoFrame_Unmap((QVideoFrame*)self);
}

int32_t q_videoframe_bytes_per_line(const void* self, int plane) {
    return QVideoFrame_BytesPerLine((QVideoFrame*)self, plane);
}

unsigned char* q_videoframe_bits(void* self, int plane) {
    return (unsigned char*)QVideoFrame_Bits((QVideoFrame*)self, plane);
}

const unsigned char* q_videoframe_bits2(const void* self, int plane) {
    return (unsigned char*)QVideoFrame_Bits2((QVideoFrame*)self, plane);
}

int32_t q_videoframe_mapped_bytes(const void* self, int plane) {
    return QVideoFrame_MappedBytes((QVideoFrame*)self, plane);
}

int32_t q_videoframe_plane_count(const void* self) {
    return QVideoFrame_PlaneCount((QVideoFrame*)self);
}

int64_t q_videoframe_start_time(const void* self) {
    return QVideoFrame_StartTime((QVideoFrame*)self);
}

void q_videoframe_set_start_time(void* self, int64_t time) {
    QVideoFrame_SetStartTime((QVideoFrame*)self, time);
}

int64_t q_videoframe_end_time(const void* self) {
    return QVideoFrame_EndTime((QVideoFrame*)self);
}

void q_videoframe_set_end_time(void* self, int64_t time) {
    QVideoFrame_SetEndTime((QVideoFrame*)self, time);
}

void q_videoframe_set_rotation_angle(void* self, int32_t angle) {
    QVideoFrame_SetRotationAngle((QVideoFrame*)self, angle);
}

int32_t q_videoframe_rotation_angle(const void* self) {
    return QVideoFrame_RotationAngle((QVideoFrame*)self);
}

void q_videoframe_set_rotation(void* self, int32_t angle) {
    QVideoFrame_SetRotation((QVideoFrame*)self, angle);
}

int32_t q_videoframe_rotation(const void* self) {
    return QVideoFrame_Rotation((QVideoFrame*)self);
}

void q_videoframe_set_mirrored(void* self, bool mirrored) {
    QVideoFrame_SetMirrored((QVideoFrame*)self, mirrored);
}

bool q_videoframe_mirrored(const void* self) {
    return QVideoFrame_Mirrored((QVideoFrame*)self);
}

void q_videoframe_set_stream_frame_rate(void* self, double rate) {
    QVideoFrame_SetStreamFrameRate((QVideoFrame*)self, rate);
}

double q_videoframe_stream_frame_rate(const void* self) {
    return QVideoFrame_StreamFrameRate((QVideoFrame*)self);
}

QImage* q_videoframe_to_image(const void* self) {
    return QVideoFrame_ToImage((QVideoFrame*)self);
}

const char* q_videoframe_subtitle_text(const void* self) {
    libqt_string _str = QVideoFrame_SubtitleText((QVideoFrame*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_videoframe_set_subtitle_text(void* self, const char* text) {
    QVideoFrame_SetSubtitleText((QVideoFrame*)self, qstring(text));
}

void q_videoframe_paint(void* self, void* painter, const void* rect, const void* options) {
    QVideoFrame_Paint((QVideoFrame*)self, (QPainter*)painter, (QRectF*)rect, (QVideoFrame__PaintOptions*)options);
}

QAbstractVideoBuffer* q_videoframe_video_buffer(const void* self) {
    return QVideoFrame_VideoBuffer((QVideoFrame*)self);
}

void q_videoframe_delete(void* self) {
    QVideoFrame_Delete((QVideoFrame*)(self));
}

QVideoFrame__PaintOptions* q_videoframe__paintoptions_new() {
    return QVideoFrame__PaintOptions_New();
}

QVideoFrame__PaintOptions* q_videoframe__paintoptions_new2(const void* other) {
    return QVideoFrame__PaintOptions_New2((QVideoFrame__PaintOptions*)other);
}

QVideoFrame__PaintOptions* q_videoframe__paintoptions_new3(void* other) {
    return QVideoFrame__PaintOptions_New3((QVideoFrame__PaintOptions*)other);
}

void q_videoframe__paintoptions_copy_assign(void* self, void* other) {
    QVideoFrame__PaintOptions_CopyAssign((QVideoFrame__PaintOptions*)self, (QVideoFrame__PaintOptions*)other);
}

void q_videoframe__paintoptions_move_assign(void* self, void* other) {
    QVideoFrame__PaintOptions_MoveAssign((QVideoFrame__PaintOptions*)self, (QVideoFrame__PaintOptions*)other);
}

QColor* q_videoframe__paintoptions_background_color(const void* self) {
    return QVideoFrame__PaintOptions_BackgroundColor((QVideoFrame__PaintOptions*)self);
}

void q_videoframe__paintoptions_set_background_color(void* self, void* backgroundColor) {
    QVideoFrame__PaintOptions_SetBackgroundColor((QVideoFrame__PaintOptions*)self, (QColor*)backgroundColor);
}

int32_t q_videoframe__paintoptions_aspect_ratio_mode(const void* self) {
    return QVideoFrame__PaintOptions_AspectRatioMode((QVideoFrame__PaintOptions*)self);
}

void q_videoframe__paintoptions_set_aspect_ratio_mode(void* self, int32_t aspectRatioMode) {
    QVideoFrame__PaintOptions_SetAspectRatioMode((QVideoFrame__PaintOptions*)self, aspectRatioMode);
}

int32_t q_videoframe__paintoptions_paint_flags(const void* self) {
    return QVideoFrame__PaintOptions_PaintFlags((QVideoFrame__PaintOptions*)self);
}

void q_videoframe__paintoptions_set_paint_flags(void* self, int32_t paintFlags) {
    QVideoFrame__PaintOptions_SetPaintFlags((QVideoFrame__PaintOptions*)self, paintFlags);
}

void q_videoframe__paintoptions_delete(void* self) {
    QVideoFrame__PaintOptions_Delete((QVideoFrame__PaintOptions*)(self));
}
