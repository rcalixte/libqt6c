#include "../libqimage.hpp"
#include "../libqpainter.hpp"
#include "../libqrect.hpp"
#include "../libqsize.hpp"
#include <string.h>
#include "libqvideoframeformat.hpp"
#include "libqvideoframe.hpp"
#include "libqvideoframe.h"

QVideoFrame* q_videoframe_new() {
    return QVideoFrame_new();
}

QVideoFrame* q_videoframe_new2(void* format) {
    return QVideoFrame_new2((QVideoFrameFormat*)format);
}

QVideoFrame* q_videoframe_new3(void* other) {
    return QVideoFrame_new3((QVideoFrame*)other);
}

void q_videoframe_swap(void* self, void* other) {
    QVideoFrame_Swap((QVideoFrame*)self, (QVideoFrame*)other);
}

void q_videoframe_operator_assign(void* self, void* other) {
    QVideoFrame_OperatorAssign((QVideoFrame*)self, (QVideoFrame*)other);
}

bool q_videoframe_operator_equal(void* self, void* other) {
    return QVideoFrame_OperatorEqual((QVideoFrame*)self, (QVideoFrame*)other);
}

bool q_videoframe_operator_not_equal(void* self, void* other) {
    return QVideoFrame_OperatorNotEqual((QVideoFrame*)self, (QVideoFrame*)other);
}

bool q_videoframe_is_valid(void* self) {
    return QVideoFrame_IsValid((QVideoFrame*)self);
}

int64_t q_videoframe_pixel_format(void* self) {
    return QVideoFrame_PixelFormat((QVideoFrame*)self);
}

QVideoFrameFormat* q_videoframe_surface_format(void* self) {
    return QVideoFrame_SurfaceFormat((QVideoFrame*)self);
}

int64_t q_videoframe_handle_type(void* self) {
    return QVideoFrame_HandleType((QVideoFrame*)self);
}

QSize* q_videoframe_size(void* self) {
    return QVideoFrame_Size((QVideoFrame*)self);
}

int32_t q_videoframe_width(void* self) {
    return QVideoFrame_Width((QVideoFrame*)self);
}

int32_t q_videoframe_height(void* self) {
    return QVideoFrame_Height((QVideoFrame*)self);
}

bool q_videoframe_is_mapped(void* self) {
    return QVideoFrame_IsMapped((QVideoFrame*)self);
}

bool q_videoframe_is_readable(void* self) {
    return QVideoFrame_IsReadable((QVideoFrame*)self);
}

bool q_videoframe_is_writable(void* self) {
    return QVideoFrame_IsWritable((QVideoFrame*)self);
}

int64_t q_videoframe_map_mode(void* self) {
    return QVideoFrame_MapMode((QVideoFrame*)self);
}

bool q_videoframe_map(void* self, int64_t mode) {
    return QVideoFrame_Map((QVideoFrame*)self, mode);
}

void q_videoframe_unmap(void* self) {
    QVideoFrame_Unmap((QVideoFrame*)self);
}

int32_t q_videoframe_bytes_per_line(void* self, int plane) {
    return QVideoFrame_BytesPerLine((QVideoFrame*)self, plane);
}

unsigned char* q_videoframe_bits(void* self, int plane) {
    return (unsigned char*)QVideoFrame_Bits((QVideoFrame*)self, plane);
}

unsigned char* q_videoframe_bits_with_plane(void* self, int plane) {
    return (unsigned char*)QVideoFrame_BitsWithPlane((QVideoFrame*)self, plane);
}

int32_t q_videoframe_mapped_bytes(void* self, int plane) {
    return QVideoFrame_MappedBytes((QVideoFrame*)self, plane);
}

int32_t q_videoframe_plane_count(void* self) {
    return QVideoFrame_PlaneCount((QVideoFrame*)self);
}

long long q_videoframe_start_time(void* self) {
    return QVideoFrame_StartTime((QVideoFrame*)self);
}

void q_videoframe_set_start_time(void* self, long long time) {
    QVideoFrame_SetStartTime((QVideoFrame*)self, time);
}

long long q_videoframe_end_time(void* self) {
    return QVideoFrame_EndTime((QVideoFrame*)self);
}

void q_videoframe_set_end_time(void* self, long long time) {
    QVideoFrame_SetEndTime((QVideoFrame*)self, time);
}

void q_videoframe_set_rotation_angle(void* self, int64_t rotationAngle) {
    QVideoFrame_SetRotationAngle((QVideoFrame*)self, rotationAngle);
}

int64_t q_videoframe_rotation_angle(void* self) {
    return QVideoFrame_RotationAngle((QVideoFrame*)self);
}

void q_videoframe_set_mirrored(void* self, bool mirrored) {
    QVideoFrame_SetMirrored((QVideoFrame*)self, mirrored);
}

bool q_videoframe_mirrored(void* self) {
    return QVideoFrame_Mirrored((QVideoFrame*)self);
}

QImage* q_videoframe_to_image(void* self) {
    return QVideoFrame_ToImage((QVideoFrame*)self);
}

const char* q_videoframe_subtitle_text(void* self) {
    libqt_string _str = QVideoFrame_SubtitleText((QVideoFrame*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_videoframe_set_subtitle_text(void* self, const char* text) {
    QVideoFrame_SetSubtitleText((QVideoFrame*)self, qstring(text));
}

void q_videoframe_paint(void* self, void* painter, void* rect, void* options) {
    QVideoFrame_Paint((QVideoFrame*)self, (QPainter*)painter, (QRectF*)rect, (QVideoFrame__PaintOptions*)options);
}

void q_videoframe_delete(void* self) {
    QVideoFrame_Delete((QVideoFrame*)(self));
}

QVideoFrame__PaintOptions* q_videoframe__paintoptions_new(void* other) {
    return QVideoFrame__PaintOptions_new((QVideoFrame__PaintOptions*)other);
}

QVideoFrame__PaintOptions* q_videoframe__paintoptions_new2(void* other) {
    return QVideoFrame__PaintOptions_new2((QVideoFrame__PaintOptions*)other);
}

void q_videoframe__paintoptions_copy_assign(void* self, void* other) {
    QVideoFrame__PaintOptions_CopyAssign((QVideoFrame__PaintOptions*)self, (QVideoFrame__PaintOptions*)other);
}

void q_videoframe__paintoptions_move_assign(void* self, void* other) {
    QVideoFrame__PaintOptions_MoveAssign((QVideoFrame__PaintOptions*)self, (QVideoFrame__PaintOptions*)other);
}

void q_videoframe__paintoptions_delete(void* self) {
    QVideoFrame__PaintOptions_Delete((QVideoFrame__PaintOptions*)(self));
}
