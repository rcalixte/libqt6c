#pragma once
#ifndef MULTIMEDIA_LIBQCAMERADEVICE_H
#define MULTIMEDIA_LIBQCAMERADEVICE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qcameraformat.html)

/// q_cameraformat_new constructs a new QCameraFormat object.
///
QCameraFormat* q_cameraformat_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qcameraformat.html)

/// q_cameraformat_new2 constructs a new QCameraFormat object.
///
/// @param other QCameraFormat*
///
QCameraFormat* q_cameraformat_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcameraformat.html#operator-eq)
///
/// @param self QCameraFormat*
/// @param other QCameraFormat*
///
void q_cameraformat_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcameraformat.html#pixelFormat)
///
/// @param self const QCameraFormat*
///
/// @return enum QVideoFrameFormat__PixelFormat
///
int32_t q_cameraformat_pixel_format(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcameraformat.html#resolution)
///
/// @param self const QCameraFormat*
///
QSize* q_cameraformat_resolution(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcameraformat.html#minFrameRate)
///
/// @param self const QCameraFormat*
///
float q_cameraformat_min_frame_rate(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcameraformat.html#maxFrameRate)
///
/// @param self const QCameraFormat*
///
float q_cameraformat_max_frame_rate(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcameraformat.html#isNull)
///
/// @param self const QCameraFormat*
///
bool q_cameraformat_is_null(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcameraformat.html#operator-eq-eq)
///
/// @param self const QCameraFormat*
/// @param other QCameraFormat*
///
bool q_cameraformat_operator_equal(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcameraformat.html#operator-not-eq)
///
/// @param self const QCameraFormat*
/// @param other QCameraFormat*
///
bool q_cameraformat_operator_not_equal(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcameraformat.html#dtor.QCameraFormat)
///
/// Delete this object from C++ memory.
///
/// @param self QCameraFormat*
///
void q_cameraformat_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcameradevice.html)

/// q_cameradevice_new constructs a new QCameraDevice object.
///
QCameraDevice* q_cameradevice_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qcameradevice.html)

/// q_cameradevice_new2 constructs a new QCameraDevice object.
///
/// @param other QCameraDevice*
///
QCameraDevice* q_cameradevice_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcameradevice.html#operator-eq)
///
/// @param self QCameraDevice*
/// @param other QCameraDevice*
///
void q_cameradevice_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcameradevice.html#operator-eq-eq)
///
/// @param self const QCameraDevice*
/// @param other QCameraDevice*
///
bool q_cameradevice_operator_equal(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcameradevice.html#operator-not-eq)
///
/// @param self const QCameraDevice*
/// @param other QCameraDevice*
///
bool q_cameradevice_operator_not_equal(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcameradevice.html#isNull)
///
/// @param self const QCameraDevice*
///
bool q_cameradevice_is_null(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcameradevice.html#id)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCameraDevice*
///
const char* q_cameradevice_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcameradevice.html#description)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCameraDevice*
///
const char* q_cameradevice_description(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcameradevice.html#isDefault)
///
/// @param self const QCameraDevice*
///
bool q_cameradevice_is_default(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcameradevice.html#position)
///
/// @param self const QCameraDevice*
///
/// @return enum QCameraDevice__Position
///
int32_t q_cameradevice_position(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcameradevice.html#photoResolutions)
///
/// @param self const QCameraDevice*
///
/// @return libqt_list of QSize*
///
libqt_list q_cameradevice_photo_resolutions(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcameradevice.html#videoFormats)
///
/// @param self const QCameraDevice*
///
/// @return libqt_list of QCameraFormat*
///
libqt_list q_cameradevice_video_formats(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcameradevice.html#correctionAngle)
///
/// @param self const QCameraDevice*
///
/// @return enum QtVideo__Rotation
///
int32_t q_cameradevice_correction_angle(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcameradevice.html#dtor.QCameraDevice)
///
/// Delete this object from C++ memory.
///
/// @param self QCameraDevice*
///
void q_cameradevice_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcameradevice.html#public-types)

typedef enum {
    QCAMERADEVICE_POSITION_UNSPECIFIEDPOSITION = 0,
    QCAMERADEVICE_POSITION_BACKFACE = 1,
    QCAMERADEVICE_POSITION_FRONTFACE = 2
} QCameraDevice__Position;

#endif
