#include "libqpoint.hpp"
#include "libqpointingdevice.hpp"
#include "libqsize.hpp"
#include "libqvectornd.hpp"
#include "libqeventpoint.hpp"
#include "libqeventpoint.h"

QEventPoint* q_eventpoint_new() {
    return QEventPoint_new();
}

QEventPoint* q_eventpoint_new2(int pointId, uint8_t state, void* scenePosition, void* globalPosition) {
    return QEventPoint_new2(pointId, state, (QPointF*)scenePosition, (QPointF*)globalPosition);
}

QEventPoint* q_eventpoint_new3(void* other) {
    return QEventPoint_new3((QEventPoint*)other);
}

QEventPoint* q_eventpoint_new4(int id) {
    return QEventPoint_new4(id);
}

QEventPoint* q_eventpoint_new5(int id, void* device) {
    return QEventPoint_new5(id, (QPointingDevice*)device);
}

void q_eventpoint_operator_assign(void* self, void* other) {
    QEventPoint_OperatorAssign((QEventPoint*)self, (QEventPoint*)other);
}

bool q_eventpoint_operator_equal(void* self, void* other) {
    return QEventPoint_OperatorEqual((QEventPoint*)self, (QEventPoint*)other);
}

bool q_eventpoint_operator_not_equal(void* self, void* other) {
    return QEventPoint_OperatorNotEqual((QEventPoint*)self, (QEventPoint*)other);
}

void q_eventpoint_swap(void* self, void* other) {
    QEventPoint_Swap((QEventPoint*)self, (QEventPoint*)other);
}

QPointF* q_eventpoint_position(void* self) {
    return QEventPoint_Position((QEventPoint*)self);
}

QPointF* q_eventpoint_press_position(void* self) {
    return QEventPoint_PressPosition((QEventPoint*)self);
}

QPointF* q_eventpoint_grab_position(void* self) {
    return QEventPoint_GrabPosition((QEventPoint*)self);
}

QPointF* q_eventpoint_last_position(void* self) {
    return QEventPoint_LastPosition((QEventPoint*)self);
}

QPointF* q_eventpoint_scene_position(void* self) {
    return QEventPoint_ScenePosition((QEventPoint*)self);
}

QPointF* q_eventpoint_scene_press_position(void* self) {
    return QEventPoint_ScenePressPosition((QEventPoint*)self);
}

QPointF* q_eventpoint_scene_grab_position(void* self) {
    return QEventPoint_SceneGrabPosition((QEventPoint*)self);
}

QPointF* q_eventpoint_scene_last_position(void* self) {
    return QEventPoint_SceneLastPosition((QEventPoint*)self);
}

QPointF* q_eventpoint_global_position(void* self) {
    return QEventPoint_GlobalPosition((QEventPoint*)self);
}

QPointF* q_eventpoint_global_press_position(void* self) {
    return QEventPoint_GlobalPressPosition((QEventPoint*)self);
}

QPointF* q_eventpoint_global_grab_position(void* self) {
    return QEventPoint_GlobalGrabPosition((QEventPoint*)self);
}

QPointF* q_eventpoint_global_last_position(void* self) {
    return QEventPoint_GlobalLastPosition((QEventPoint*)self);
}

QPointF* q_eventpoint_normalized_position(void* self) {
    return QEventPoint_NormalizedPosition((QEventPoint*)self);
}

QPointF* q_eventpoint_pos(void* self) {
    return QEventPoint_Pos((QEventPoint*)self);
}

QPointF* q_eventpoint_start_pos(void* self) {
    return QEventPoint_StartPos((QEventPoint*)self);
}

QPointF* q_eventpoint_scene_pos(void* self) {
    return QEventPoint_ScenePos((QEventPoint*)self);
}

QPointF* q_eventpoint_start_scene_pos(void* self) {
    return QEventPoint_StartScenePos((QEventPoint*)self);
}

QPointF* q_eventpoint_screen_pos(void* self) {
    return QEventPoint_ScreenPos((QEventPoint*)self);
}

QPointF* q_eventpoint_start_screen_pos(void* self) {
    return QEventPoint_StartScreenPos((QEventPoint*)self);
}

QPointF* q_eventpoint_start_normalized_pos(void* self) {
    return QEventPoint_StartNormalizedPos((QEventPoint*)self);
}

QPointF* q_eventpoint_normalized_pos(void* self) {
    return QEventPoint_NormalizedPos((QEventPoint*)self);
}

QPointF* q_eventpoint_last_pos(void* self) {
    return QEventPoint_LastPos((QEventPoint*)self);
}

QPointF* q_eventpoint_last_scene_pos(void* self) {
    return QEventPoint_LastScenePos((QEventPoint*)self);
}

QPointF* q_eventpoint_last_screen_pos(void* self) {
    return QEventPoint_LastScreenPos((QEventPoint*)self);
}

QPointF* q_eventpoint_last_normalized_pos(void* self) {
    return QEventPoint_LastNormalizedPos((QEventPoint*)self);
}

QVector2D* q_eventpoint_velocity(void* self) {
    return QEventPoint_Velocity((QEventPoint*)self);
}

uint8_t q_eventpoint_state(void* self) {
    return QEventPoint_State((QEventPoint*)self);
}

const QPointingDevice* q_eventpoint_device(void* self) {
    return QEventPoint_Device((QEventPoint*)self);
}

int32_t q_eventpoint_id(void* self) {
    return QEventPoint_Id((QEventPoint*)self);
}

QPointingDeviceUniqueId* q_eventpoint_unique_id(void* self) {
    return QEventPoint_UniqueId((QEventPoint*)self);
}

uint64_t q_eventpoint_timestamp(void* self) {
    return QEventPoint_Timestamp((QEventPoint*)self);
}

uint64_t q_eventpoint_last_timestamp(void* self) {
    return QEventPoint_LastTimestamp((QEventPoint*)self);
}

uint64_t q_eventpoint_press_timestamp(void* self) {
    return QEventPoint_PressTimestamp((QEventPoint*)self);
}

double q_eventpoint_time_held(void* self) {
    return QEventPoint_TimeHeld((QEventPoint*)self);
}

double q_eventpoint_pressure(void* self) {
    return QEventPoint_Pressure((QEventPoint*)self);
}

double q_eventpoint_rotation(void* self) {
    return QEventPoint_Rotation((QEventPoint*)self);
}

QSizeF* q_eventpoint_ellipse_diameters(void* self) {
    return QEventPoint_EllipseDiameters((QEventPoint*)self);
}

bool q_eventpoint_is_accepted(void* self) {
    return QEventPoint_IsAccepted((QEventPoint*)self);
}

void q_eventpoint_set_accepted(void* self) {
    QEventPoint_SetAccepted((QEventPoint*)self);
}

void q_eventpoint_set_accepted1(void* self, bool accepted) {
    QEventPoint_SetAccepted1((QEventPoint*)self, accepted);
}

void q_eventpoint_delete(void* self) {
    QEventPoint_Delete((QEventPoint*)(self));
}
