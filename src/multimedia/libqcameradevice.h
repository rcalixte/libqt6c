#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQCAMERADEVICE_H
#define SRC_MULTIMEDIAQT6C_LIBQCAMERADEVICE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qcameraformat.html

/// q_cameraformat_new constructs a new QCameraFormat object.
///
QCameraFormat* q_cameraformat_new();

/// q_cameraformat_new2 constructs a new QCameraFormat object.
///
/// @param other QCameraFormat*
QCameraFormat* q_cameraformat_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#operator-eq)
///
/// @param self QCameraFormat*
/// @param other QCameraFormat*
void q_cameraformat_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#pixelFormat)
///
/// @param self QCameraFormat*
///
/// @return enum QVideoFrameFormat__PixelFormat
int64_t q_cameraformat_pixel_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#resolution)
///
/// @param self QCameraFormat*
QSize* q_cameraformat_resolution(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#minFrameRate)
///
/// @param self QCameraFormat*
float q_cameraformat_min_frame_rate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#maxFrameRate)
///
/// @param self QCameraFormat*
float q_cameraformat_max_frame_rate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#isNull)
///
/// @param self QCameraFormat*
bool q_cameraformat_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#operator-eq-eq)
///
/// @param self QCameraFormat*
/// @param other QCameraFormat*
bool q_cameraformat_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#operator-not-eq)
///
/// @param self QCameraFormat*
/// @param other QCameraFormat*
bool q_cameraformat_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#dtor.QCameraFormat)
///
/// Delete this object from C++ memory.
///
/// @param self QCameraFormat*
void q_cameraformat_delete(void* self);

/// https://doc.qt.io/qt-6/qcameradevice.html

/// q_cameradevice_new constructs a new QCameraDevice object.
///
QCameraDevice* q_cameradevice_new();

/// q_cameradevice_new2 constructs a new QCameraDevice object.
///
/// @param other QCameraDevice*
QCameraDevice* q_cameradevice_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#operator-eq)
///
/// @param self QCameraDevice*
/// @param other QCameraDevice*
void q_cameradevice_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#operator-eq-eq)
///
/// @param self QCameraDevice*
/// @param other QCameraDevice*
bool q_cameradevice_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#operator-not-eq)
///
/// @param self QCameraDevice*
/// @param other QCameraDevice*
bool q_cameradevice_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#isNull)
///
/// @param self QCameraDevice*
bool q_cameradevice_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#id)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCameraDevice*
char* q_cameradevice_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#description)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCameraDevice*
const char* q_cameradevice_description(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#isDefault)
///
/// @param self QCameraDevice*
bool q_cameradevice_is_default(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#position)
///
/// @param self QCameraDevice*
///
/// @return enum QCameraDevice__Position
int64_t q_cameradevice_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#photoResolutions)
///
/// @param self QCameraDevice*
libqt_list /* of QSize* */ q_cameradevice_photo_resolutions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#videoFormats)
///
/// @param self QCameraDevice*
libqt_list /* of QCameraFormat* */ q_cameradevice_video_formats(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#correctionAngle)
///
/// @param self QCameraDevice*
///
/// @return enum QtVideo__Rotation
int64_t q_cameradevice_correction_angle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#dtor.QCameraDevice)
///
/// Delete this object from C++ memory.
///
/// @param self QCameraDevice*
void q_cameradevice_delete(void* self);

/// https://doc.qt.io/qt-6/qcameradevice.html#types

typedef enum {
    QCAMERADEVICE_POSITION_UNSPECIFIEDPOSITION = 0,
    QCAMERADEVICE_POSITION_BACKFACE = 1,
    QCAMERADEVICE_POSITION_FRONTFACE = 2
} QCameraDevice__Position;

#endif
