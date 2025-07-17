#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQCAMERADEVICE_H
#define SRC_MULTIMEDIAQT6C_LIBQCAMERADEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qcameraformat.html

/// q_cameraformat_new constructs a new QCameraFormat object.
///
///
QCameraFormat* q_cameraformat_new();

/// q_cameraformat_new2 constructs a new QCameraFormat object.
///
/// ``` QCameraFormat* other ```
QCameraFormat* q_cameraformat_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#operator-eq)
///
/// ``` QCameraFormat* self, QCameraFormat* other ```
void q_cameraformat_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#pixelFormat)
///
/// ``` QCameraFormat* self ```
int64_t q_cameraformat_pixel_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#resolution)
///
/// ``` QCameraFormat* self ```
QSize* q_cameraformat_resolution(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#minFrameRate)
///
/// ``` QCameraFormat* self ```
float q_cameraformat_min_frame_rate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#maxFrameRate)
///
/// ``` QCameraFormat* self ```
float q_cameraformat_max_frame_rate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#isNull)
///
/// ``` QCameraFormat* self ```
bool q_cameraformat_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#operator-eq-eq)
///
/// ``` QCameraFormat* self, QCameraFormat* other ```
bool q_cameraformat_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#operator-not-eq)
///
/// ``` QCameraFormat* self, QCameraFormat* other ```
bool q_cameraformat_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#dtor.QCameraFormat)
///
/// Delete this object from C++ memory.
///
/// ``` QCameraFormat* self ```
void q_cameraformat_delete(void* self);

/// https://doc.qt.io/qt-6/qcameradevice.html

/// q_cameradevice_new constructs a new QCameraDevice object.
///
///
QCameraDevice* q_cameradevice_new();

/// q_cameradevice_new2 constructs a new QCameraDevice object.
///
/// ``` QCameraDevice* other ```
QCameraDevice* q_cameradevice_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#operator-eq)
///
/// ``` QCameraDevice* self, QCameraDevice* other ```
void q_cameradevice_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#operator-eq-eq)
///
/// ``` QCameraDevice* self, QCameraDevice* other ```
bool q_cameradevice_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#operator-not-eq)
///
/// ``` QCameraDevice* self, QCameraDevice* other ```
bool q_cameradevice_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#isNull)
///
/// ``` QCameraDevice* self ```
bool q_cameradevice_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#id)
///
/// ``` QCameraDevice* self ```
char* q_cameradevice_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#description)
///
/// ``` QCameraDevice* self ```
const char* q_cameradevice_description(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#isDefault)
///
/// ``` QCameraDevice* self ```
bool q_cameradevice_is_default(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#position)
///
/// ``` QCameraDevice* self ```
int64_t q_cameradevice_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#photoResolutions)
///
/// ``` QCameraDevice* self ```
libqt_list /* of QSize* */ q_cameradevice_photo_resolutions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#videoFormats)
///
/// ``` QCameraDevice* self ```
libqt_list /* of QCameraFormat* */ q_cameradevice_video_formats(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#correctionAngle)
///
/// ``` QCameraDevice* self ```
int64_t q_cameradevice_correction_angle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#dtor.QCameraDevice)
///
/// Delete this object from C++ memory.
///
/// ``` QCameraDevice* self ```
void q_cameradevice_delete(void* self);

/// https://doc.qt.io/qt-6/qcameradevice.html#types

typedef enum {
    QCAMERADEVICE_POSITION_UNSPECIFIEDPOSITION = 0,
    QCAMERADEVICE_POSITION_BACKFACE = 1,
    QCAMERADEVICE_POSITION_FRONTFACE = 2
} QCameraDevice__Position;

#endif
