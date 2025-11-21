#pragma once
#ifndef SRC_QT6C_LIBQEVENTPOINT_H
#define SRC_QT6C_LIBQEVENTPOINT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qeventpoint.html

/// q_eventpoint_new constructs a new QEventPoint object.
///
QEventPoint* q_eventpoint_new();

/// q_eventpoint_new2 constructs a new QEventPoint object.
///
/// @param pointId int
/// @param state enum QEventPoint__State
/// @param scenePosition QPointF*
/// @param globalPosition QPointF*
QEventPoint* q_eventpoint_new2(int pointId, uint8_t state, void* scenePosition, void* globalPosition);

/// q_eventpoint_new3 constructs a new QEventPoint object.
///
/// @param other QEventPoint*
QEventPoint* q_eventpoint_new3(void* other);

/// q_eventpoint_new4 constructs a new QEventPoint object.
///
/// @param id int
QEventPoint* q_eventpoint_new4(int id);

/// q_eventpoint_new5 constructs a new QEventPoint object.
///
/// @param id int
/// @param device QPointingDevice*
QEventPoint* q_eventpoint_new5(int id, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#operator-eq)
///
/// @param self QEventPoint*
/// @param other QEventPoint*
void q_eventpoint_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#operator-eq-eq)
///
/// @param self QEventPoint*
/// @param other QEventPoint*
bool q_eventpoint_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#operator-not-eq)
///
/// @param self QEventPoint*
/// @param other QEventPoint*
bool q_eventpoint_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#swap)
///
/// @param self QEventPoint*
/// @param other QEventPoint*
void q_eventpoint_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#position)
///
/// @param self QEventPoint*
QPointF* q_eventpoint_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#pressPosition)
///
/// @param self QEventPoint*
QPointF* q_eventpoint_press_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#grabPosition)
///
/// @param self QEventPoint*
QPointF* q_eventpoint_grab_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#lastPosition)
///
/// @param self QEventPoint*
QPointF* q_eventpoint_last_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#scenePosition)
///
/// @param self QEventPoint*
QPointF* q_eventpoint_scene_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#scenePressPosition)
///
/// @param self QEventPoint*
QPointF* q_eventpoint_scene_press_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#sceneGrabPosition)
///
/// @param self QEventPoint*
QPointF* q_eventpoint_scene_grab_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#sceneLastPosition)
///
/// @param self QEventPoint*
QPointF* q_eventpoint_scene_last_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#globalPosition)
///
/// @param self QEventPoint*
QPointF* q_eventpoint_global_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#globalPressPosition)
///
/// @param self QEventPoint*
QPointF* q_eventpoint_global_press_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#globalGrabPosition)
///
/// @param self QEventPoint*
QPointF* q_eventpoint_global_grab_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#globalLastPosition)
///
/// @param self QEventPoint*
QPointF* q_eventpoint_global_last_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#normalizedPosition)
///
/// @param self QEventPoint*
QPointF* q_eventpoint_normalized_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#pos)
///
/// @param self QEventPoint*
QPointF* q_eventpoint_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#startPos)
///
/// @param self QEventPoint*
QPointF* q_eventpoint_start_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#scenePos)
///
/// @param self QEventPoint*
QPointF* q_eventpoint_scene_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#startScenePos)
///
/// @param self QEventPoint*
QPointF* q_eventpoint_start_scene_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#screenPos)
///
/// @param self QEventPoint*
QPointF* q_eventpoint_screen_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#startScreenPos)
///
/// @param self QEventPoint*
QPointF* q_eventpoint_start_screen_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#startNormalizedPos)
///
/// @param self QEventPoint*
QPointF* q_eventpoint_start_normalized_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#normalizedPos)
///
/// @param self QEventPoint*
QPointF* q_eventpoint_normalized_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#lastPos)
///
/// @param self QEventPoint*
QPointF* q_eventpoint_last_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#lastScenePos)
///
/// @param self QEventPoint*
QPointF* q_eventpoint_last_scene_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#lastScreenPos)
///
/// @param self QEventPoint*
QPointF* q_eventpoint_last_screen_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#lastNormalizedPos)
///
/// @param self QEventPoint*
QPointF* q_eventpoint_last_normalized_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#velocity)
///
/// @param self QEventPoint*
QVector2D* q_eventpoint_velocity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#state)
///
/// @param self QEventPoint*
///
/// @return enum QEventPoint__State
uint8_t q_eventpoint_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#device)
///
/// @param self QEventPoint*
const QPointingDevice* q_eventpoint_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#id)
///
/// @param self QEventPoint*
int32_t q_eventpoint_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#uniqueId)
///
/// @param self QEventPoint*
QPointingDeviceUniqueId* q_eventpoint_unique_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#timestamp)
///
/// @param self QEventPoint*
uint64_t q_eventpoint_timestamp(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#lastTimestamp)
///
/// @param self QEventPoint*
uint64_t q_eventpoint_last_timestamp(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#pressTimestamp)
///
/// @param self QEventPoint*
uint64_t q_eventpoint_press_timestamp(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#timeHeld)
///
/// @param self QEventPoint*
double q_eventpoint_time_held(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#pressure)
///
/// @param self QEventPoint*
double q_eventpoint_pressure(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#rotation)
///
/// @param self QEventPoint*
double q_eventpoint_rotation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#ellipseDiameters)
///
/// @param self QEventPoint*
QSizeF* q_eventpoint_ellipse_diameters(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#isAccepted)
///
/// @param self QEventPoint*
bool q_eventpoint_is_accepted(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#setAccepted)
///
/// @param self QEventPoint*
void q_eventpoint_set_accepted(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#setAccepted)
///
/// @param self QEventPoint*
/// @param accepted bool
void q_eventpoint_set_accepted1(void* self, bool accepted);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventpoint.html#dtor.QEventPoint)
///
/// Delete this object from C++ memory.
///
/// @param self QEventPoint*
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
