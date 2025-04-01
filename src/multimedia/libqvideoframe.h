#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQVIDEOFRAME_H
#define SRC_MULTIMEDIAQT6C_LIBQVIDEOFRAME_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqimage.h"
#include "../libqpainter.h"
#include "../libqrect.h"
#include "../libqsize.h"
#include <string.h>
#include "libqvideoframeformat.h"

/// https://doc.qt.io/qt-6/qvideoframe.html

/// q_videoframe_new constructs a new QVideoFrame object.
///
///
QVideoFrame* q_videoframe_new();

/// q_videoframe_new2 constructs a new QVideoFrame object.
///
/// ``` QVideoFrameFormat* format ```
QVideoFrame* q_videoframe_new2(void* format);

/// q_videoframe_new3 constructs a new QVideoFrame object.
///
/// ``` QVideoFrame* other ```
QVideoFrame* q_videoframe_new3(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#swap)
///
/// ``` QVideoFrame* self, QVideoFrame* other ```
void q_videoframe_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#operator=)
///
/// ``` QVideoFrame* self, QVideoFrame* other ```
void q_videoframe_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#operator==)
///
/// ``` QVideoFrame* self, QVideoFrame* other ```
bool q_videoframe_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#operator!=)
///
/// ``` QVideoFrame* self, QVideoFrame* other ```
bool q_videoframe_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#isValid)
///
/// ``` QVideoFrame* self ```
bool q_videoframe_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#pixelFormat)
///
/// ``` QVideoFrame* self ```
int64_t q_videoframe_pixel_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#surfaceFormat)
///
/// ``` QVideoFrame* self ```
QVideoFrameFormat* q_videoframe_surface_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#handleType)
///
/// ``` QVideoFrame* self ```
int64_t q_videoframe_handle_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#size)
///
/// ``` QVideoFrame* self ```
QSize* q_videoframe_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#width)
///
/// ``` QVideoFrame* self ```
int32_t q_videoframe_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#height)
///
/// ``` QVideoFrame* self ```
int32_t q_videoframe_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#isMapped)
///
/// ``` QVideoFrame* self ```
bool q_videoframe_is_mapped(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#isReadable)
///
/// ``` QVideoFrame* self ```
bool q_videoframe_is_readable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#isWritable)
///
/// ``` QVideoFrame* self ```
bool q_videoframe_is_writable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#mapMode)
///
/// ``` QVideoFrame* self ```
int64_t q_videoframe_map_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#map)
///
/// ``` QVideoFrame* self, enum QVideoFrame__MapMode mode ```
bool q_videoframe_map(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#unmap)
///
/// ``` QVideoFrame* self ```
void q_videoframe_unmap(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#bytesPerLine)
///
/// ``` QVideoFrame* self, int plane ```
int32_t q_videoframe_bytes_per_line(void* self, int plane);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#bits)
///
/// ``` QVideoFrame* self, int plane ```
unsigned char* q_videoframe_bits(void* self, int plane);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#bits)
///
/// ``` QVideoFrame* self, int plane ```
unsigned char* q_videoframe_bits_with_plane(void* self, int plane);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#mappedBytes)
///
/// ``` QVideoFrame* self, int plane ```
int32_t q_videoframe_mapped_bytes(void* self, int plane);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#planeCount)
///
/// ``` QVideoFrame* self ```
int32_t q_videoframe_plane_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#startTime)
///
/// ``` QVideoFrame* self ```
long long q_videoframe_start_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#setStartTime)
///
/// ``` QVideoFrame* self, long long time ```
void q_videoframe_set_start_time(void* self, long long time);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#endTime)
///
/// ``` QVideoFrame* self ```
long long q_videoframe_end_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#setEndTime)
///
/// ``` QVideoFrame* self, long long time ```
void q_videoframe_set_end_time(void* self, long long time);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#setRotationAngle)
///
/// ``` QVideoFrame* self, enum QVideoFrame__RotationAngle rotationAngle ```
void q_videoframe_set_rotation_angle(void* self, int64_t rotationAngle);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#rotationAngle)
///
/// ``` QVideoFrame* self ```
int64_t q_videoframe_rotation_angle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#setMirrored)
///
/// ``` QVideoFrame* self, bool mirrored ```
void q_videoframe_set_mirrored(void* self, bool mirrored);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#mirrored)
///
/// ``` QVideoFrame* self ```
bool q_videoframe_mirrored(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#toImage)
///
/// ``` QVideoFrame* self ```
QImage* q_videoframe_to_image(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#subtitleText)
///
/// ``` QVideoFrame* self ```
const char* q_videoframe_subtitle_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#setSubtitleText)
///
/// ``` QVideoFrame* self, const char* text ```
void q_videoframe_set_subtitle_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qvideoframe.html#paint)
///
/// ``` QVideoFrame* self, QPainter* painter, QRectF* rect, QVideoFrame__PaintOptions* options ```
void q_videoframe_paint(void* self, void* painter, void* rect, void* options);

/// Delete this object from C++ memory.
///
/// ``` QVideoFrame* self ```
void q_videoframe_delete(void* self);

/// https://doc.qt.io/qt-6/qvideoframe-paintoptions.html

/// q_videoframe__paintoptions_new constructs a new QVideoFrame::PaintOptions object.
///
/// ``` QVideoFrame__PaintOptions* other ```
QVideoFrame__PaintOptions* q_videoframe__paintoptions_new(void* other);

/// q_videoframe__paintoptions_new2 constructs a new QVideoFrame::PaintOptions object and invalidates the source QVideoFrame::PaintOptions object.
///
/// ``` QVideoFrame__PaintOptions* other ```
QVideoFrame__PaintOptions* q_videoframe__paintoptions_new2(void* other);

/// q_videoframe__paintoptions_copy_assign shallow copies `other` into `self`.
///
/// ``` QVideoFrame__PaintOptions* self, QVideoFrame__PaintOptions* other ```
void q_videoframe__paintoptions_copy_assign(void* self, void* other);

/// q_videoframe__paintoptions_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QVideoFrame__PaintOptions* self, QVideoFrame__PaintOptions* other ```
void q_videoframe__paintoptions_move_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// ``` QVideoFrame__PaintOptions* self ```
void q_videoframe__paintoptions_delete(void* self);

/// https://doc.qt.io/qt-6/qvideoframe.html#types

typedef enum {
    QVIDEOFRAME_HANDLETYPE_NOHANDLE = 0,
    QVIDEOFRAME_HANDLETYPE_RHITEXTUREHANDLE = 1
} QVideoFrame__HandleType;

typedef enum {
    QVIDEOFRAME_MAPMODE_NOTMAPPED = 0,
    QVIDEOFRAME_MAPMODE_READONLY = 1,
    QVIDEOFRAME_MAPMODE_WRITEONLY = 2,
    QVIDEOFRAME_MAPMODE_READWRITE = 3
} QVideoFrame__MapMode;

typedef enum {
    QVIDEOFRAME_ROTATIONANGLE_ROTATION0 = 0,
    QVIDEOFRAME_ROTATIONANGLE_ROTATION90 = 90,
    QVIDEOFRAME_ROTATIONANGLE_ROTATION180 = 180,
    QVIDEOFRAME_ROTATIONANGLE_ROTATION270 = 270
} QVideoFrame__RotationAngle;

typedef enum {
    QVIDEOFRAME_PAINTOPTIONS_PAINTFLAG_DONTDRAWSUBTITLES = 1
} QVideoFrame__PaintOptions__PaintFlag;

#endif
