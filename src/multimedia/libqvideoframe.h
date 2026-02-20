#pragma once
#ifndef SRC_MULTIMEDIA_QT6C_LIBQVIDEOFRAME_H
#define SRC_MULTIMEDIA_QT6C_LIBQVIDEOFRAME_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html)

/// q_videoframe_new constructs a new QVideoFrame object.
///
QVideoFrame* q_videoframe_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html)

/// q_videoframe_new2 constructs a new QVideoFrame object.
///
/// @param format QVideoFrameFormat*
///
QVideoFrame* q_videoframe_new2(void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html)

/// q_videoframe_new3 constructs a new QVideoFrame object.
///
/// @param image QImage*
///
QVideoFrame* q_videoframe_new3(void* image);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html)

/// q_videoframe_new4 constructs a new QVideoFrame object.
///
/// @param videoBuffer QAbstractVideoBuffer* (WARNING: The library takes ownership of this parameter's memory and attempting to access it will lead to a crash.)
///
QVideoFrame* q_videoframe_new4(void* videoBuffer);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html)

/// q_videoframe_new5 constructs a new QVideoFrame object.
///
/// @param other QVideoFrame*
///
QVideoFrame* q_videoframe_new5(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html)

/// q_videoframe_new6 constructs a new QVideoFrame object.
///
/// @param buffer QAbstractVideoBuffer*
/// @param format QVideoFrameFormat*
///
QVideoFrame* q_videoframe_new6(void* buffer, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#swap)
///
/// @param self QVideoFrame*
/// @param other QVideoFrame*
///
void q_videoframe_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#operator-eq)
///
/// @param self QVideoFrame*
/// @param other QVideoFrame*
///
void q_videoframe_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#operator-eq-eq)
///
/// @param self QVideoFrame*
/// @param other QVideoFrame*
///
bool q_videoframe_operator_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#operator-not-eq)
///
/// @param self QVideoFrame*
/// @param other QVideoFrame*
///
bool q_videoframe_operator_not_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#isValid)
///
/// @param self QVideoFrame*
///
bool q_videoframe_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#pixelFormat)
///
/// @param self QVideoFrame*
///
/// @return enum QVideoFrameFormat__PixelFormat
///
int32_t q_videoframe_pixel_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#surfaceFormat)
///
/// @param self QVideoFrame*
///
QVideoFrameFormat* q_videoframe_surface_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#handleType)
///
/// @param self QVideoFrame*
///
/// @return enum QVideoFrame__HandleType
///
int32_t q_videoframe_handle_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#size)
///
/// @param self QVideoFrame*
///
QSize* q_videoframe_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#width)
///
/// @param self QVideoFrame*
///
int32_t q_videoframe_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#height)
///
/// @param self QVideoFrame*
///
int32_t q_videoframe_height(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#isMapped)
///
/// @param self QVideoFrame*
///
bool q_videoframe_is_mapped(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#isReadable)
///
/// @param self QVideoFrame*
///
bool q_videoframe_is_readable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#isWritable)
///
/// @param self QVideoFrame*
///
bool q_videoframe_is_writable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#mapMode)
///
/// @param self QVideoFrame*
///
/// @return enum QVideoFrame__MapMode
///
int32_t q_videoframe_map_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#map)
///
/// @param self QVideoFrame*
/// @param mode enum QVideoFrame__MapMode
///
bool q_videoframe_map(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#unmap)
///
/// @param self QVideoFrame*
///
void q_videoframe_unmap(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#bytesPerLine)
///
/// @param self QVideoFrame*
/// @param plane int
///
int32_t q_videoframe_bytes_per_line(void* self, int plane);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#bits)
///
/// @param self QVideoFrame*
/// @param plane int
///
unsigned char* q_videoframe_bits(void* self, int plane);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#bits)
///
/// @param self QVideoFrame*
/// @param plane int
///
const unsigned char* q_videoframe_bits2(void* self, int plane);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#mappedBytes)
///
/// @param self QVideoFrame*
/// @param plane int
///
int32_t q_videoframe_mapped_bytes(void* self, int plane);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#planeCount)
///
/// @param self QVideoFrame*
///
int32_t q_videoframe_plane_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#startTime)
///
/// @param self QVideoFrame*
///
long long q_videoframe_start_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#setStartTime)
///
/// @param self QVideoFrame*
/// @param time long long
///
void q_videoframe_set_start_time(void* self, long long time);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#endTime)
///
/// @param self QVideoFrame*
///
long long q_videoframe_end_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#setEndTime)
///
/// @param self QVideoFrame*
/// @param time long long
///
void q_videoframe_set_end_time(void* self, long long time);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#setRotationAngle)
///
/// @param self QVideoFrame*
/// @param angle enum QVideoFrame__RotationAngle
///
void q_videoframe_set_rotation_angle(void* self, int32_t angle);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#rotationAngle)
///
/// @param self QVideoFrame*
///
/// @return enum QVideoFrame__RotationAngle
///
int32_t q_videoframe_rotation_angle(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#setRotation)
///
/// @param self QVideoFrame*
/// @param angle enum QtVideo__Rotation
///
void q_videoframe_set_rotation(void* self, int32_t angle);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#rotation)
///
/// @param self QVideoFrame*
///
/// @return enum QtVideo__Rotation
///
int32_t q_videoframe_rotation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#setMirrored)
///
/// @param self QVideoFrame*
/// @param mirrored bool
///
void q_videoframe_set_mirrored(void* self, bool mirrored);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#mirrored)
///
/// @param self QVideoFrame*
///
bool q_videoframe_mirrored(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#setStreamFrameRate)
///
/// @param self QVideoFrame*
/// @param rate double
///
void q_videoframe_set_stream_frame_rate(void* self, double rate);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#streamFrameRate)
///
/// @param self QVideoFrame*
///
double q_videoframe_stream_frame_rate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#toImage)
///
/// @param self QVideoFrame*
///
QImage* q_videoframe_to_image(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#subtitleText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QVideoFrame*
///
const char* q_videoframe_subtitle_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#setSubtitleText)
///
/// @param self QVideoFrame*
/// @param text const char*
///
void q_videoframe_set_subtitle_text(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#paint)
///
/// @param self QVideoFrame*
/// @param painter QPainter*
/// @param rect QRectF*
/// @param options QVideoFrame__PaintOptions*
///
void q_videoframe_paint(void* self, void* painter, void* rect, void* options);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#videoBuffer)
///
/// @param self QVideoFrame*
///
QAbstractVideoBuffer* q_videoframe_video_buffer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#dtor.QVideoFrame)
///
/// Delete this object from C++ memory.
///
/// @param self QVideoFrame*
///
void q_videoframe_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe-paintoptions.html)

/// q_videoframe__paintoptions_new constructs a new QVideoFrame::PaintOptions object.
///
/// @param other QVideoFrame__PaintOptions*
///
QVideoFrame__PaintOptions* q_videoframe__paintoptions_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe-paintoptions.html)

/// q_videoframe__paintoptions_new2 constructs a new QVideoFrame::PaintOptions object and invalidates the source QVideoFrame::PaintOptions object.
///
/// @param other QVideoFrame__PaintOptions*
///
QVideoFrame__PaintOptions* q_videoframe__paintoptions_new2(void* other);

/// q_videoframe__paintoptions_copy_assign shallow copies `other` into `self`.
///
/// @param self QVideoFrame__PaintOptions*
/// @param other QVideoFrame__PaintOptions*
///
void q_videoframe__paintoptions_copy_assign(void* self, void* other);

/// q_videoframe__paintoptions_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QVideoFrame__PaintOptions*
/// @param other QVideoFrame__PaintOptions*
///
void q_videoframe__paintoptions_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe-paintoptions.html#backgroundColor-var)
///
/// @param self QVideoFrame__PaintOptions*
///
QColor* q_videoframe__paintoptions_background_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe-paintoptions.html#backgroundColor-var)
///
/// @param self QVideoFrame__PaintOptions*
/// @param backgroundColor QColor*
///
void q_videoframe__paintoptions_set_background_color(void* self, void* backgroundColor);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe-paintoptions.html#aspectRatioMode-var)
///
/// @param self QVideoFrame__PaintOptions*
///
/// @return enum Qt__AspectRatioMode
///
int32_t q_videoframe__paintoptions_aspect_ratio_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe-paintoptions.html#aspectRatioMode-var)
///
/// @param self QVideoFrame__PaintOptions*
/// @param aspectRatioMode enum Qt__AspectRatioMode
///
void q_videoframe__paintoptions_set_aspect_ratio_mode(void* self, int32_t aspectRatioMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe-paintoptions.html#paintFlags-var)
///
/// @param self QVideoFrame__PaintOptions*
///
/// @return flag of enum QVideoFrame__PaintOptions__PaintFlag
///
int32_t q_videoframe__paintoptions_paint_flags(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe-paintoptions.html#paintFlags-var)
///
/// @param self QVideoFrame__PaintOptions*
/// @param paintFlags flag of enum QVideoFrame__PaintOptions__PaintFlag
///
void q_videoframe__paintoptions_set_paint_flags(void* self, int32_t paintFlags);

/// Delete this object from C++ memory.
///
/// @param self QVideoFrame__PaintOptions*
///
void q_videoframe__paintoptions_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#public-types)

typedef enum {
    QVIDEOFRAME_HANDLETYPE_NOHANDLE = 0,
    QVIDEOFRAME_HANDLETYPE_RHITEXTUREHANDLE = 1
} QVideoFrame__HandleType;

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#public-types)

typedef enum {
    QVIDEOFRAME_MAPMODE_NOTMAPPED = 0,
    QVIDEOFRAME_MAPMODE_READONLY = 1,
    QVIDEOFRAME_MAPMODE_WRITEONLY = 2,
    QVIDEOFRAME_MAPMODE_READWRITE = 3
} QVideoFrame__MapMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#public-types)

typedef enum {
    QVIDEOFRAME_ROTATIONANGLE_ROTATION0 = 0,
    QVIDEOFRAME_ROTATIONANGLE_ROTATION90 = 90,
    QVIDEOFRAME_ROTATIONANGLE_ROTATION180 = 180,
    QVIDEOFRAME_ROTATIONANGLE_ROTATION270 = 270
} QVideoFrame__RotationAngle;

/// [Upstream resources](https://doc.qt.io/qt-6/qvideoframe.html#public-types)

typedef enum {
    QVIDEOFRAME_PAINTOPTIONS_PAINTFLAG_DONTDRAWSUBTITLES = 1
} QVideoFrame__PaintOptions__PaintFlag;

#endif
