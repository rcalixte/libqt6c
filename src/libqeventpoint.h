#pragma once
#ifndef SRCQT6C_LIBQEVENTPOINT_H
#define SRCQT6C_LIBQEVENTPOINT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqpoint.h"
#include "libqpointingdevice.h"
#include "libqsize.h"
#include "libqvectornd.h"

/// https://doc.qt.io/qt-6/qeventpoint.html

/// q_eventpoint_new constructs a new QEventPoint object.
///
///
QEventPoint* q_eventpoint_new();

/// q_eventpoint_new2 constructs a new QEventPoint object.
///
/// ``` int pointId, enum QEventPoint__State state, QPointF* scenePosition, QPointF* globalPosition ```
QEventPoint* q_eventpoint_new2(int pointId, int64_t state, void* scenePosition, void* globalPosition);

/// q_eventpoint_new3 constructs a new QEventPoint object.
///
/// ``` QEventPoint* other ```
QEventPoint* q_eventpoint_new3(void* other);

/// q_eventpoint_new4 constructs a new QEventPoint object.
///
/// ``` int id ```
QEventPoint* q_eventpoint_new4(int id);

/// q_eventpoint_new5 constructs a new QEventPoint object.
///
/// ``` int id, QPointingDevice* device ```
QEventPoint* q_eventpoint_new5(int id, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#operator=)
///
/// ``` QEventPoint* self, QEventPoint* other ```
void q_eventpoint_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#operator==)
///
/// ``` QEventPoint* self, QEventPoint* other ```
bool q_eventpoint_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#operator!=)
///
/// ``` QEventPoint* self, QEventPoint* other ```
bool q_eventpoint_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#swap)
///
/// ``` QEventPoint* self, QEventPoint* other ```
void q_eventpoint_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#position)
///
/// ``` QEventPoint* self ```
QPointF* q_eventpoint_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#pressPosition)
///
/// ``` QEventPoint* self ```
QPointF* q_eventpoint_press_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#grabPosition)
///
/// ``` QEventPoint* self ```
QPointF* q_eventpoint_grab_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#lastPosition)
///
/// ``` QEventPoint* self ```
QPointF* q_eventpoint_last_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#scenePosition)
///
/// ``` QEventPoint* self ```
QPointF* q_eventpoint_scene_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#scenePressPosition)
///
/// ``` QEventPoint* self ```
QPointF* q_eventpoint_scene_press_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#sceneGrabPosition)
///
/// ``` QEventPoint* self ```
QPointF* q_eventpoint_scene_grab_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#sceneLastPosition)
///
/// ``` QEventPoint* self ```
QPointF* q_eventpoint_scene_last_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#globalPosition)
///
/// ``` QEventPoint* self ```
QPointF* q_eventpoint_global_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#globalPressPosition)
///
/// ``` QEventPoint* self ```
QPointF* q_eventpoint_global_press_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#globalGrabPosition)
///
/// ``` QEventPoint* self ```
QPointF* q_eventpoint_global_grab_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#globalLastPosition)
///
/// ``` QEventPoint* self ```
QPointF* q_eventpoint_global_last_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#normalizedPosition)
///
/// ``` QEventPoint* self ```
QPointF* q_eventpoint_normalized_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#pos)
///
/// ``` QEventPoint* self ```
QPointF* q_eventpoint_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#startPos)
///
/// ``` QEventPoint* self ```
QPointF* q_eventpoint_start_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#scenePos)
///
/// ``` QEventPoint* self ```
QPointF* q_eventpoint_scene_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#startScenePos)
///
/// ``` QEventPoint* self ```
QPointF* q_eventpoint_start_scene_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#screenPos)
///
/// ``` QEventPoint* self ```
QPointF* q_eventpoint_screen_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#startScreenPos)
///
/// ``` QEventPoint* self ```
QPointF* q_eventpoint_start_screen_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#startNormalizedPos)
///
/// ``` QEventPoint* self ```
QPointF* q_eventpoint_start_normalized_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#normalizedPos)
///
/// ``` QEventPoint* self ```
QPointF* q_eventpoint_normalized_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#lastPos)
///
/// ``` QEventPoint* self ```
QPointF* q_eventpoint_last_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#lastScenePos)
///
/// ``` QEventPoint* self ```
QPointF* q_eventpoint_last_scene_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#lastScreenPos)
///
/// ``` QEventPoint* self ```
QPointF* q_eventpoint_last_screen_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#lastNormalizedPos)
///
/// ``` QEventPoint* self ```
QPointF* q_eventpoint_last_normalized_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#velocity)
///
/// ``` QEventPoint* self ```
QVector2D* q_eventpoint_velocity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#state)
///
/// ``` QEventPoint* self ```
int64_t q_eventpoint_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#device)
///
/// ``` QEventPoint* self ```
const QPointingDevice* q_eventpoint_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#id)
///
/// ``` QEventPoint* self ```
int32_t q_eventpoint_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#uniqueId)
///
/// ``` QEventPoint* self ```
QPointingDeviceUniqueId* q_eventpoint_unique_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#timestamp)
///
/// ``` QEventPoint* self ```
uint64_t q_eventpoint_timestamp(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#lastTimestamp)
///
/// ``` QEventPoint* self ```
uint64_t q_eventpoint_last_timestamp(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#pressTimestamp)
///
/// ``` QEventPoint* self ```
uint64_t q_eventpoint_press_timestamp(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#timeHeld)
///
/// ``` QEventPoint* self ```
double q_eventpoint_time_held(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#pressure)
///
/// ``` QEventPoint* self ```
double q_eventpoint_pressure(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#rotation)
///
/// ``` QEventPoint* self ```
double q_eventpoint_rotation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#ellipseDiameters)
///
/// ``` QEventPoint* self ```
QSizeF* q_eventpoint_ellipse_diameters(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#isAccepted)
///
/// ``` QEventPoint* self ```
bool q_eventpoint_is_accepted(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#setAccepted)
///
/// ``` QEventPoint* self ```
void q_eventpoint_set_accepted(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#setAccepted)
///
/// ``` QEventPoint* self, bool accepted ```
void q_eventpoint_set_accepted1(void* self, bool accepted);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#dtor.QEventPoint)
///
/// Delete this object from C++ memory.
///
/// ``` QEventPoint* self ```
void q_eventpoint_delete(void* self);

/// https://doc.qt.io/qt-6/qeventpoint.html#types

typedef enum {
    QEVENTPOINT_STATE_UNKNOWN = 0,
    QEVENTPOINT_STATE_STATIONARY = 4,
    QEVENTPOINT_STATE_PRESSED = 1,
    QEVENTPOINT_STATE_UPDATED = 2,
    QEVENTPOINT_STATE_RELEASED = 8
} QEventPoint__State;

#endif
