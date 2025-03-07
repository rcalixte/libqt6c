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

QVideoFrame* q_videoframe_new();
QVideoFrame* q_videoframe_new2(void* format);
QVideoFrame* q_videoframe_new3(void* other);
void q_videoframe_swap(void* self, void* other);
void q_videoframe_operator_assign(void* self, void* other);
bool q_videoframe_operator_equal(void* self, void* other);
bool q_videoframe_operator_not_equal(void* self, void* other);
bool q_videoframe_is_valid(void* self);
int64_t q_videoframe_pixel_format(void* self);
QVideoFrameFormat* q_videoframe_surface_format(void* self);
int64_t q_videoframe_handle_type(void* self);
QSize* q_videoframe_size(void* self);
int32_t q_videoframe_width(void* self);
int32_t q_videoframe_height(void* self);
bool q_videoframe_is_mapped(void* self);
bool q_videoframe_is_readable(void* self);
bool q_videoframe_is_writable(void* self);
int64_t q_videoframe_map_mode(void* self);
bool q_videoframe_map(void* self, int64_t mode);
void q_videoframe_unmap(void* self);
int32_t q_videoframe_bytes_per_line(void* self, int plane);
unsigned char* q_videoframe_bits(void* self, int plane);
unsigned char* q_videoframe_bits_with_plane(void* self, int plane);
int32_t q_videoframe_mapped_bytes(void* self, int plane);
int32_t q_videoframe_plane_count(void* self);
long long q_videoframe_start_time(void* self);
void q_videoframe_set_start_time(void* self, long long time);
long long q_videoframe_end_time(void* self);
void q_videoframe_set_end_time(void* self, long long time);
void q_videoframe_set_rotation_angle(void* self, int64_t rotationAngle);
int64_t q_videoframe_rotation_angle(void* self);
void q_videoframe_set_mirrored(void* self, bool mirrored);
bool q_videoframe_mirrored(void* self);
QImage* q_videoframe_to_image(void* self);
const char* q_videoframe_subtitle_text(void* self);
void q_videoframe_set_subtitle_text(void* self, const char* text);
void q_videoframe_paint(void* self, void* painter, void* rect, void* options);
void q_videoframe_delete(void* self);

QVideoFrame__PaintOptions* q_videoframe__paintoptions_new(void* other);
QVideoFrame__PaintOptions* q_videoframe__paintoptions_new2(void* other);
void q_videoframe__paintoptions_copy_assign(void* self, void* other);
void q_videoframe__paintoptions_move_assign(void* self, void* other);
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
