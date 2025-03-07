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

QEventPoint* q_eventpoint_new();
QEventPoint* q_eventpoint_new2(int pointId, int64_t state, void* scenePosition, void* globalPosition);
QEventPoint* q_eventpoint_new3(void* other);
QEventPoint* q_eventpoint_new4(int id);
QEventPoint* q_eventpoint_new5(int id, void* device);
void q_eventpoint_operator_assign(void* self, void* other);
bool q_eventpoint_operator_equal(void* self, void* other);
bool q_eventpoint_operator_not_equal(void* self, void* other);
void q_eventpoint_swap(void* self, void* other);
QPointF* q_eventpoint_position(void* self);
QPointF* q_eventpoint_press_position(void* self);
QPointF* q_eventpoint_grab_position(void* self);
QPointF* q_eventpoint_last_position(void* self);
QPointF* q_eventpoint_scene_position(void* self);
QPointF* q_eventpoint_scene_press_position(void* self);
QPointF* q_eventpoint_scene_grab_position(void* self);
QPointF* q_eventpoint_scene_last_position(void* self);
QPointF* q_eventpoint_global_position(void* self);
QPointF* q_eventpoint_global_press_position(void* self);
QPointF* q_eventpoint_global_grab_position(void* self);
QPointF* q_eventpoint_global_last_position(void* self);
QPointF* q_eventpoint_normalized_position(void* self);
QPointF* q_eventpoint_pos(void* self);
QPointF* q_eventpoint_start_pos(void* self);
QPointF* q_eventpoint_scene_pos(void* self);
QPointF* q_eventpoint_start_scene_pos(void* self);
QPointF* q_eventpoint_screen_pos(void* self);
QPointF* q_eventpoint_start_screen_pos(void* self);
QPointF* q_eventpoint_start_normalized_pos(void* self);
QPointF* q_eventpoint_normalized_pos(void* self);
QPointF* q_eventpoint_last_pos(void* self);
QPointF* q_eventpoint_last_scene_pos(void* self);
QPointF* q_eventpoint_last_screen_pos(void* self);
QPointF* q_eventpoint_last_normalized_pos(void* self);
QVector2D* q_eventpoint_velocity(void* self);
int64_t q_eventpoint_state(void* self);
QPointingDevice* q_eventpoint_device(void* self);
int32_t q_eventpoint_id(void* self);
QPointingDeviceUniqueId* q_eventpoint_unique_id(void* self);
uint64_t q_eventpoint_timestamp(void* self);
uint64_t q_eventpoint_last_timestamp(void* self);
uint64_t q_eventpoint_press_timestamp(void* self);
double q_eventpoint_time_held(void* self);
double q_eventpoint_pressure(void* self);
double q_eventpoint_rotation(void* self);
QSizeF* q_eventpoint_ellipse_diameters(void* self);
bool q_eventpoint_is_accepted(void* self);
void q_eventpoint_set_accepted(void* self);
void q_eventpoint_set_accepted1(void* self, bool accepted);
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
