#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQCAMERADEVICE_H
#define SRC_MULTIMEDIAQT6C_LIBQCAMERADEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqsize.h"
#include <string.h>

QCameraFormat* q_cameraformat_new();
QCameraFormat* q_cameraformat_new2(void* other);
void q_cameraformat_operator_assign(void* self, void* other);
int64_t q_cameraformat_pixel_format(void* self);
QSize* q_cameraformat_resolution(void* self);
float q_cameraformat_min_frame_rate(void* self);
float q_cameraformat_max_frame_rate(void* self);
bool q_cameraformat_is_null(void* self);
bool q_cameraformat_operator_equal(void* self, void* other);
bool q_cameraformat_operator_not_equal(void* self, void* other);
void q_cameraformat_delete(void* self);

QCameraDevice* q_cameradevice_new();
QCameraDevice* q_cameradevice_new2(void* other);
void q_cameradevice_operator_assign(void* self, void* other);
bool q_cameradevice_operator_equal(void* self, void* other);
bool q_cameradevice_operator_not_equal(void* self, void* other);
bool q_cameradevice_is_null(void* self);
char* q_cameradevice_id(void* self);
const char* q_cameradevice_description(void* self);
bool q_cameradevice_is_default(void* self);
int64_t q_cameradevice_position(void* self);
libqt_list /* of QSize* */ q_cameradevice_photo_resolutions(void* self);
libqt_list /* of QCameraFormat* */ q_cameradevice_video_formats(void* self);
void q_cameradevice_delete(void* self);

/// https://doc.qt.io/qt-6/qcameradevice.html#types

typedef enum {
    QCAMERADEVICE_POSITION_UNSPECIFIEDPOSITION = 0,
    QCAMERADEVICE_POSITION_BACKFACE = 1,
    QCAMERADEVICE_POSITION_FRONTFACE = 2
} QCameraDevice__Position;

#endif
