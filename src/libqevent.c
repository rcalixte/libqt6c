#include "libqaction.hpp"
#include "libqeventpoint.hpp"
#include "libqfile.hpp"
#include "libqinputdevice.hpp"
#include "libqnamespace.hpp"
#include "libqkeysequence.hpp"
#include "libqmimedata.hpp"
#include "libqobject.hpp"
#include "libqpoint.hpp"
#include "libqpointingdevice.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqscreen.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqurl.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqevent.hpp"
#include "libqevent.h"

QInputEvent* q_inputevent_new(int64_t typeVal, void* m_dev) {
    return QInputEvent_new(typeVal, (QInputDevice*)m_dev);
}

QInputEvent* q_inputevent_new2(int64_t typeVal, void* m_dev, int64_t modifiers) {
    return QInputEvent_new2(typeVal, (QInputDevice*)m_dev, modifiers);
}

QInputEvent* q_inputevent_clone(void* self) {
    return QInputEvent_Clone((QInputEvent*)self);
}

void q_inputevent_on_clone(void* self, QInputEvent* (*slot)()) {
    QInputEvent_OnClone((QInputEvent*)self, (intptr_t)slot);
}

QInputEvent* q_inputevent_qbase_clone(void* self) {
    return QInputEvent_QBaseClone((QInputEvent*)self);
}

const QInputDevice* q_inputevent_device(void* self) {
    return QInputEvent_Device((QInputEvent*)self);
}

int64_t q_inputevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

int64_t q_inputevent_modifiers(void* self) {
    return QInputEvent_Modifiers((QInputEvent*)self);
}

void q_inputevent_set_modifiers(void* self, int64_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

uint64_t q_inputevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

void q_inputevent_set_timestamp(void* self, uint64_t timestamp) {
    QInputEvent_SetTimestamp((QInputEvent*)self, timestamp);
}

void q_inputevent_on_set_timestamp(void* self, void (*slot)(void*, uint64_t)) {
    QInputEvent_OnSetTimestamp((QInputEvent*)self, (intptr_t)slot);
}

void q_inputevent_qbase_set_timestamp(void* self, uint64_t timestamp) {
    QInputEvent_QBaseSetTimestamp((QInputEvent*)self, timestamp);
}

int64_t q_inputevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_inputevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_inputevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_inputevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_inputevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_inputevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_inputevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_inputevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_inputevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_inputevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_inputevent_set_accepted(void* self, bool accepted) {
    QInputEvent_SetAccepted((QInputEvent*)self, accepted);
}

void q_inputevent_qbase_set_accepted(void* self, bool accepted) {
    QInputEvent_QBaseSetAccepted((QInputEvent*)self, accepted);
}

void q_inputevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QInputEvent_OnSetAccepted((QInputEvent*)self, (intptr_t)slot);
}

void q_inputevent_delete(void* self) {
    QInputEvent_Delete((QInputEvent*)(self));
}

QPointerEvent* q_pointerevent_new(int64_t typeVal, void* dev) {
    return QPointerEvent_new(typeVal, (QPointingDevice*)dev);
}

QPointerEvent* q_pointerevent_new2(int64_t typeVal, void* dev, int64_t modifiers) {
    return QPointerEvent_new2(typeVal, (QPointingDevice*)dev, modifiers);
}

QPointerEvent* q_pointerevent_new3(int64_t typeVal, void* dev, int64_t modifiers, libqt_list points) {
    return QPointerEvent_new3(typeVal, (QPointingDevice*)dev, modifiers, points);
}

QPointerEvent* q_pointerevent_clone(void* self) {
    return QPointerEvent_Clone((QPointerEvent*)self);
}

void q_pointerevent_on_clone(void* self, QPointerEvent* (*slot)()) {
    QPointerEvent_OnClone((QPointerEvent*)self, (intptr_t)slot);
}

QPointerEvent* q_pointerevent_qbase_clone(void* self) {
    return QPointerEvent_QBaseClone((QPointerEvent*)self);
}

const QPointingDevice* q_pointerevent_pointing_device(void* self) {
    return QPointerEvent_PointingDevice((QPointerEvent*)self);
}

int64_t q_pointerevent_pointer_type(void* self) {
    return QPointerEvent_PointerType((QPointerEvent*)self);
}

void q_pointerevent_set_timestamp(void* self, uint64_t timestamp) {
    QPointerEvent_SetTimestamp((QPointerEvent*)self, timestamp);
}

void q_pointerevent_on_set_timestamp(void* self, void (*slot)(void*, uint64_t)) {
    QPointerEvent_OnSetTimestamp((QPointerEvent*)self, (intptr_t)slot);
}

void q_pointerevent_qbase_set_timestamp(void* self, uint64_t timestamp) {
    QPointerEvent_QBaseSetTimestamp((QPointerEvent*)self, timestamp);
}

int64_t q_pointerevent_point_count(void* self) {
    return QPointerEvent_PointCount((QPointerEvent*)self);
}

QEventPoint* q_pointerevent_point(void* self, int64_t i) {
    return QPointerEvent_Point((QPointerEvent*)self, i);
}

libqt_list /* of QEventPoint* */ q_pointerevent_points(void* self) {
    libqt_list _arr = QPointerEvent_Points((QPointerEvent*)self);
    return _arr;
}

QEventPoint* q_pointerevent_point_by_id(void* self, int id) {
    return QPointerEvent_PointById((QPointerEvent*)self, id);
}

bool q_pointerevent_all_points_grabbed(void* self) {
    return QPointerEvent_AllPointsGrabbed((QPointerEvent*)self);
}

bool q_pointerevent_is_begin_event(void* self) {
    return QPointerEvent_IsBeginEvent((QPointerEvent*)self);
}

void q_pointerevent_on_is_begin_event(void* self, bool (*slot)()) {
    QPointerEvent_OnIsBeginEvent((QPointerEvent*)self, (intptr_t)slot);
}

bool q_pointerevent_qbase_is_begin_event(void* self) {
    return QPointerEvent_QBaseIsBeginEvent((QPointerEvent*)self);
}

bool q_pointerevent_is_update_event(void* self) {
    return QPointerEvent_IsUpdateEvent((QPointerEvent*)self);
}

void q_pointerevent_on_is_update_event(void* self, bool (*slot)()) {
    QPointerEvent_OnIsUpdateEvent((QPointerEvent*)self, (intptr_t)slot);
}

bool q_pointerevent_qbase_is_update_event(void* self) {
    return QPointerEvent_QBaseIsUpdateEvent((QPointerEvent*)self);
}

bool q_pointerevent_is_end_event(void* self) {
    return QPointerEvent_IsEndEvent((QPointerEvent*)self);
}

void q_pointerevent_on_is_end_event(void* self, bool (*slot)()) {
    QPointerEvent_OnIsEndEvent((QPointerEvent*)self, (intptr_t)slot);
}

bool q_pointerevent_qbase_is_end_event(void* self) {
    return QPointerEvent_QBaseIsEndEvent((QPointerEvent*)self);
}

bool q_pointerevent_all_points_accepted(void* self) {
    return QPointerEvent_AllPointsAccepted((QPointerEvent*)self);
}

void q_pointerevent_set_accepted(void* self, bool accepted) {
    QPointerEvent_SetAccepted((QPointerEvent*)self, accepted);
}

void q_pointerevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QPointerEvent_OnSetAccepted((QPointerEvent*)self, (intptr_t)slot);
}

void q_pointerevent_qbase_set_accepted(void* self, bool accepted) {
    QPointerEvent_QBaseSetAccepted((QPointerEvent*)self, accepted);
}

QObject* q_pointerevent_exclusive_grabber(void* self, void* point) {
    return QPointerEvent_ExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point);
}

void q_pointerevent_set_exclusive_grabber(void* self, void* point, void* exclusiveGrabber) {
    QPointerEvent_SetExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)exclusiveGrabber);
}

void q_pointerevent_clear_passive_grabbers(void* self, void* point) {
    QPointerEvent_ClearPassiveGrabbers((QPointerEvent*)self, (QEventPoint*)point);
}

bool q_pointerevent_add_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_AddPassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

bool q_pointerevent_remove_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_RemovePassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

const QInputDevice* q_pointerevent_device(void* self) {
    return QInputEvent_Device((QInputEvent*)self);
}

int64_t q_pointerevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

int64_t q_pointerevent_modifiers(void* self) {
    return QInputEvent_Modifiers((QInputEvent*)self);
}

void q_pointerevent_set_modifiers(void* self, int64_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

uint64_t q_pointerevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

int64_t q_pointerevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_pointerevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_pointerevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_pointerevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_pointerevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_pointerevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_pointerevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_pointerevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_pointerevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_pointerevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_pointerevent_delete(void* self) {
    QPointerEvent_Delete((QPointerEvent*)(self));
}

QSinglePointEvent* q_singlepointevent_clone(void* self) {
    return QSinglePointEvent_Clone((QSinglePointEvent*)self);
}

int64_t q_singlepointevent_button(void* self) {
    return QSinglePointEvent_Button((QSinglePointEvent*)self);
}

int64_t q_singlepointevent_buttons(void* self) {
    return QSinglePointEvent_Buttons((QSinglePointEvent*)self);
}

QPointF* q_singlepointevent_position(void* self) {
    return QSinglePointEvent_Position((QSinglePointEvent*)self);
}

QPointF* q_singlepointevent_scene_position(void* self) {
    return QSinglePointEvent_ScenePosition((QSinglePointEvent*)self);
}

QPointF* q_singlepointevent_global_position(void* self) {
    return QSinglePointEvent_GlobalPosition((QSinglePointEvent*)self);
}

bool q_singlepointevent_is_begin_event(void* self) {
    return QSinglePointEvent_IsBeginEvent((QSinglePointEvent*)self);
}

bool q_singlepointevent_is_update_event(void* self) {
    return QSinglePointEvent_IsUpdateEvent((QSinglePointEvent*)self);
}

bool q_singlepointevent_is_end_event(void* self) {
    return QSinglePointEvent_IsEndEvent((QSinglePointEvent*)self);
}

QObject* q_singlepointevent_exclusive_point_grabber(void* self) {
    return QSinglePointEvent_ExclusivePointGrabber((QSinglePointEvent*)self);
}

void q_singlepointevent_set_exclusive_point_grabber(void* self, void* exclusiveGrabber) {
    QSinglePointEvent_SetExclusivePointGrabber((QSinglePointEvent*)self, (QObject*)exclusiveGrabber);
}

const QPointingDevice* q_singlepointevent_pointing_device(void* self) {
    return QPointerEvent_PointingDevice((QPointerEvent*)self);
}

int64_t q_singlepointevent_pointer_type(void* self) {
    return QPointerEvent_PointerType((QPointerEvent*)self);
}

void q_singlepointevent_set_timestamp(void* self, uint64_t timestamp) {
    QPointerEvent_SetTimestamp((QPointerEvent*)self, timestamp);
}

int64_t q_singlepointevent_point_count(void* self) {
    return QPointerEvent_PointCount((QPointerEvent*)self);
}

QEventPoint* q_singlepointevent_point(void* self, int64_t i) {
    return QPointerEvent_Point((QPointerEvent*)self, i);
}

libqt_list /* of QEventPoint* */ q_singlepointevent_points(void* self) {
    libqt_list _arr = QPointerEvent_Points((QPointerEvent*)self);
    return _arr;
}

QEventPoint* q_singlepointevent_point_by_id(void* self, int id) {
    return QPointerEvent_PointById((QPointerEvent*)self, id);
}

bool q_singlepointevent_all_points_grabbed(void* self) {
    return QPointerEvent_AllPointsGrabbed((QPointerEvent*)self);
}

bool q_singlepointevent_all_points_accepted(void* self) {
    return QPointerEvent_AllPointsAccepted((QPointerEvent*)self);
}

void q_singlepointevent_set_accepted(void* self, bool accepted) {
    QPointerEvent_SetAccepted((QPointerEvent*)self, accepted);
}

QObject* q_singlepointevent_exclusive_grabber(void* self, void* point) {
    return QPointerEvent_ExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point);
}

void q_singlepointevent_set_exclusive_grabber(void* self, void* point, void* exclusiveGrabber) {
    QPointerEvent_SetExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)exclusiveGrabber);
}

void q_singlepointevent_clear_passive_grabbers(void* self, void* point) {
    QPointerEvent_ClearPassiveGrabbers((QPointerEvent*)self, (QEventPoint*)point);
}

bool q_singlepointevent_add_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_AddPassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

bool q_singlepointevent_remove_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_RemovePassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

const QInputDevice* q_singlepointevent_device(void* self) {
    return QInputEvent_Device((QInputEvent*)self);
}

int64_t q_singlepointevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

int64_t q_singlepointevent_modifiers(void* self) {
    return QInputEvent_Modifiers((QInputEvent*)self);
}

void q_singlepointevent_set_modifiers(void* self, int64_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

uint64_t q_singlepointevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

int64_t q_singlepointevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_singlepointevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_singlepointevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_singlepointevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_singlepointevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_singlepointevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_singlepointevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_singlepointevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_singlepointevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_singlepointevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_singlepointevent_delete(void* self) {
    QSinglePointEvent_Delete((QSinglePointEvent*)(self));
}

QEnterEvent* q_enterevent_new(void* localPos, void* scenePos, void* globalPos) {
    return QEnterEvent_new((QPointF*)localPos, (QPointF*)scenePos, (QPointF*)globalPos);
}

QEnterEvent* q_enterevent_new2(void* localPos, void* scenePos, void* globalPos, void* device) {
    return QEnterEvent_new2((QPointF*)localPos, (QPointF*)scenePos, (QPointF*)globalPos, (QPointingDevice*)device);
}

QEnterEvent* q_enterevent_clone(void* self) {
    return QEnterEvent_Clone((QEnterEvent*)self);
}

void q_enterevent_on_clone(void* self, QEnterEvent* (*slot)()) {
    QEnterEvent_OnClone((QEnterEvent*)self, (intptr_t)slot);
}

QEnterEvent* q_enterevent_qbase_clone(void* self) {
    return QEnterEvent_QBaseClone((QEnterEvent*)self);
}

QPoint* q_enterevent_pos(void* self) {
    return QEnterEvent_Pos((QEnterEvent*)self);
}

QPoint* q_enterevent_global_pos(void* self) {
    return QEnterEvent_GlobalPos((QEnterEvent*)self);
}

int32_t q_enterevent_x(void* self) {
    return QEnterEvent_X((QEnterEvent*)self);
}

int32_t q_enterevent_y(void* self) {
    return QEnterEvent_Y((QEnterEvent*)self);
}

int32_t q_enterevent_global_x(void* self) {
    return QEnterEvent_GlobalX((QEnterEvent*)self);
}

int32_t q_enterevent_global_y(void* self) {
    return QEnterEvent_GlobalY((QEnterEvent*)self);
}

QPointF* q_enterevent_local_pos(void* self) {
    return QEnterEvent_LocalPos((QEnterEvent*)self);
}

QPointF* q_enterevent_window_pos(void* self) {
    return QEnterEvent_WindowPos((QEnterEvent*)self);
}

QPointF* q_enterevent_screen_pos(void* self) {
    return QEnterEvent_ScreenPos((QEnterEvent*)self);
}

int64_t q_enterevent_button(void* self) {
    return QSinglePointEvent_Button((QSinglePointEvent*)self);
}

int64_t q_enterevent_buttons(void* self) {
    return QSinglePointEvent_Buttons((QSinglePointEvent*)self);
}

QPointF* q_enterevent_position(void* self) {
    return QSinglePointEvent_Position((QSinglePointEvent*)self);
}

QPointF* q_enterevent_scene_position(void* self) {
    return QSinglePointEvent_ScenePosition((QSinglePointEvent*)self);
}

QPointF* q_enterevent_global_position(void* self) {
    return QSinglePointEvent_GlobalPosition((QSinglePointEvent*)self);
}

QObject* q_enterevent_exclusive_point_grabber(void* self) {
    return QSinglePointEvent_ExclusivePointGrabber((QSinglePointEvent*)self);
}

void q_enterevent_set_exclusive_point_grabber(void* self, void* exclusiveGrabber) {
    QSinglePointEvent_SetExclusivePointGrabber((QSinglePointEvent*)self, (QObject*)exclusiveGrabber);
}

const QPointingDevice* q_enterevent_pointing_device(void* self) {
    return QPointerEvent_PointingDevice((QPointerEvent*)self);
}

int64_t q_enterevent_pointer_type(void* self) {
    return QPointerEvent_PointerType((QPointerEvent*)self);
}

int64_t q_enterevent_point_count(void* self) {
    return QPointerEvent_PointCount((QPointerEvent*)self);
}

QEventPoint* q_enterevent_point(void* self, int64_t i) {
    return QPointerEvent_Point((QPointerEvent*)self, i);
}

libqt_list /* of QEventPoint* */ q_enterevent_points(void* self) {
    libqt_list _arr = QPointerEvent_Points((QPointerEvent*)self);
    return _arr;
}

QEventPoint* q_enterevent_point_by_id(void* self, int id) {
    return QPointerEvent_PointById((QPointerEvent*)self, id);
}

bool q_enterevent_all_points_grabbed(void* self) {
    return QPointerEvent_AllPointsGrabbed((QPointerEvent*)self);
}

bool q_enterevent_all_points_accepted(void* self) {
    return QPointerEvent_AllPointsAccepted((QPointerEvent*)self);
}

QObject* q_enterevent_exclusive_grabber(void* self, void* point) {
    return QPointerEvent_ExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point);
}

void q_enterevent_set_exclusive_grabber(void* self, void* point, void* exclusiveGrabber) {
    QPointerEvent_SetExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)exclusiveGrabber);
}

void q_enterevent_clear_passive_grabbers(void* self, void* point) {
    QPointerEvent_ClearPassiveGrabbers((QPointerEvent*)self, (QEventPoint*)point);
}

bool q_enterevent_add_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_AddPassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

bool q_enterevent_remove_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_RemovePassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

const QInputDevice* q_enterevent_device(void* self) {
    return QInputEvent_Device((QInputEvent*)self);
}

int64_t q_enterevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

int64_t q_enterevent_modifiers(void* self) {
    return QInputEvent_Modifiers((QInputEvent*)self);
}

void q_enterevent_set_modifiers(void* self, int64_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

uint64_t q_enterevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

int64_t q_enterevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_enterevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_enterevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_enterevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_enterevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_enterevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_enterevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_enterevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_enterevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_enterevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

bool q_enterevent_is_begin_event(void* self) {
    return QEnterEvent_IsBeginEvent((QEnterEvent*)self);
}

bool q_enterevent_qbase_is_begin_event(void* self) {
    return QEnterEvent_QBaseIsBeginEvent((QEnterEvent*)self);
}

void q_enterevent_on_is_begin_event(void* self, bool (*slot)()) {
    QEnterEvent_OnIsBeginEvent((QEnterEvent*)self, (intptr_t)slot);
}

bool q_enterevent_is_update_event(void* self) {
    return QEnterEvent_IsUpdateEvent((QEnterEvent*)self);
}

bool q_enterevent_qbase_is_update_event(void* self) {
    return QEnterEvent_QBaseIsUpdateEvent((QEnterEvent*)self);
}

void q_enterevent_on_is_update_event(void* self, bool (*slot)()) {
    QEnterEvent_OnIsUpdateEvent((QEnterEvent*)self, (intptr_t)slot);
}

bool q_enterevent_is_end_event(void* self) {
    return QEnterEvent_IsEndEvent((QEnterEvent*)self);
}

bool q_enterevent_qbase_is_end_event(void* self) {
    return QEnterEvent_QBaseIsEndEvent((QEnterEvent*)self);
}

void q_enterevent_on_is_end_event(void* self, bool (*slot)()) {
    QEnterEvent_OnIsEndEvent((QEnterEvent*)self, (intptr_t)slot);
}

void q_enterevent_set_timestamp(void* self, uint64_t timestamp) {
    QEnterEvent_SetTimestamp((QEnterEvent*)self, timestamp);
}

void q_enterevent_qbase_set_timestamp(void* self, uint64_t timestamp) {
    QEnterEvent_QBaseSetTimestamp((QEnterEvent*)self, timestamp);
}

void q_enterevent_on_set_timestamp(void* self, void (*slot)(void*, uint64_t)) {
    QEnterEvent_OnSetTimestamp((QEnterEvent*)self, (intptr_t)slot);
}

void q_enterevent_set_accepted(void* self, bool accepted) {
    QEnterEvent_SetAccepted((QEnterEvent*)self, accepted);
}

void q_enterevent_qbase_set_accepted(void* self, bool accepted) {
    QEnterEvent_QBaseSetAccepted((QEnterEvent*)self, accepted);
}

void q_enterevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QEnterEvent_OnSetAccepted((QEnterEvent*)self, (intptr_t)slot);
}

void q_enterevent_delete(void* self) {
    QEnterEvent_Delete((QEnterEvent*)(self));
}

QMouseEvent* q_mouseevent_new(int64_t typeVal, void* localPos, int64_t button, int64_t buttons, int64_t modifiers) {
    return QMouseEvent_new(typeVal, (QPointF*)localPos, button, buttons, modifiers);
}

QMouseEvent* q_mouseevent_new2(int64_t typeVal, void* localPos, void* globalPos, int64_t button, int64_t buttons, int64_t modifiers) {
    return QMouseEvent_new2(typeVal, (QPointF*)localPos, (QPointF*)globalPos, button, buttons, modifiers);
}

QMouseEvent* q_mouseevent_new3(int64_t typeVal, void* localPos, void* scenePos, void* globalPos, int64_t button, int64_t buttons, int64_t modifiers) {
    return QMouseEvent_new3(typeVal, (QPointF*)localPos, (QPointF*)scenePos, (QPointF*)globalPos, button, buttons, modifiers);
}

QMouseEvent* q_mouseevent_new4(int64_t typeVal, void* localPos, void* scenePos, void* globalPos, int64_t button, int64_t buttons, int64_t modifiers, int64_t source) {
    return QMouseEvent_new4(typeVal, (QPointF*)localPos, (QPointF*)scenePos, (QPointF*)globalPos, button, buttons, modifiers, source);
}

QMouseEvent* q_mouseevent_new5(int64_t typeVal, void* localPos, int64_t button, int64_t buttons, int64_t modifiers, void* device) {
    return QMouseEvent_new5(typeVal, (QPointF*)localPos, button, buttons, modifiers, (QPointingDevice*)device);
}

QMouseEvent* q_mouseevent_new6(int64_t typeVal, void* localPos, void* globalPos, int64_t button, int64_t buttons, int64_t modifiers, void* device) {
    return QMouseEvent_new6(typeVal, (QPointF*)localPos, (QPointF*)globalPos, button, buttons, modifiers, (QPointingDevice*)device);
}

QMouseEvent* q_mouseevent_new7(int64_t typeVal, void* localPos, void* scenePos, void* globalPos, int64_t button, int64_t buttons, int64_t modifiers, void* device) {
    return QMouseEvent_new7(typeVal, (QPointF*)localPos, (QPointF*)scenePos, (QPointF*)globalPos, button, buttons, modifiers, (QPointingDevice*)device);
}

QMouseEvent* q_mouseevent_new8(int64_t typeVal, void* localPos, void* scenePos, void* globalPos, int64_t button, int64_t buttons, int64_t modifiers, int64_t source, void* device) {
    return QMouseEvent_new8(typeVal, (QPointF*)localPos, (QPointF*)scenePos, (QPointF*)globalPos, button, buttons, modifiers, source, (QPointingDevice*)device);
}

QMouseEvent* q_mouseevent_clone(void* self) {
    return QMouseEvent_Clone((QMouseEvent*)self);
}

void q_mouseevent_on_clone(void* self, QMouseEvent* (*slot)()) {
    QMouseEvent_OnClone((QMouseEvent*)self, (intptr_t)slot);
}

QMouseEvent* q_mouseevent_qbase_clone(void* self) {
    return QMouseEvent_QBaseClone((QMouseEvent*)self);
}

QPoint* q_mouseevent_pos(void* self) {
    return QMouseEvent_Pos((QMouseEvent*)self);
}

QPoint* q_mouseevent_global_pos(void* self) {
    return QMouseEvent_GlobalPos((QMouseEvent*)self);
}

int32_t q_mouseevent_x(void* self) {
    return QMouseEvent_X((QMouseEvent*)self);
}

int32_t q_mouseevent_y(void* self) {
    return QMouseEvent_Y((QMouseEvent*)self);
}

int32_t q_mouseevent_global_x(void* self) {
    return QMouseEvent_GlobalX((QMouseEvent*)self);
}

int32_t q_mouseevent_global_y(void* self) {
    return QMouseEvent_GlobalY((QMouseEvent*)self);
}

QPointF* q_mouseevent_local_pos(void* self) {
    return QMouseEvent_LocalPos((QMouseEvent*)self);
}

QPointF* q_mouseevent_window_pos(void* self) {
    return QMouseEvent_WindowPos((QMouseEvent*)self);
}

QPointF* q_mouseevent_screen_pos(void* self) {
    return QMouseEvent_ScreenPos((QMouseEvent*)self);
}

int64_t q_mouseevent_source(void* self) {
    return QMouseEvent_Source((QMouseEvent*)self);
}

int64_t q_mouseevent_flags(void* self) {
    return QMouseEvent_Flags((QMouseEvent*)self);
}

int64_t q_mouseevent_button(void* self) {
    return QSinglePointEvent_Button((QSinglePointEvent*)self);
}

int64_t q_mouseevent_buttons(void* self) {
    return QSinglePointEvent_Buttons((QSinglePointEvent*)self);
}

QPointF* q_mouseevent_position(void* self) {
    return QSinglePointEvent_Position((QSinglePointEvent*)self);
}

QPointF* q_mouseevent_scene_position(void* self) {
    return QSinglePointEvent_ScenePosition((QSinglePointEvent*)self);
}

QPointF* q_mouseevent_global_position(void* self) {
    return QSinglePointEvent_GlobalPosition((QSinglePointEvent*)self);
}

QObject* q_mouseevent_exclusive_point_grabber(void* self) {
    return QSinglePointEvent_ExclusivePointGrabber((QSinglePointEvent*)self);
}

void q_mouseevent_set_exclusive_point_grabber(void* self, void* exclusiveGrabber) {
    QSinglePointEvent_SetExclusivePointGrabber((QSinglePointEvent*)self, (QObject*)exclusiveGrabber);
}

const QPointingDevice* q_mouseevent_pointing_device(void* self) {
    return QPointerEvent_PointingDevice((QPointerEvent*)self);
}

int64_t q_mouseevent_pointer_type(void* self) {
    return QPointerEvent_PointerType((QPointerEvent*)self);
}

int64_t q_mouseevent_point_count(void* self) {
    return QPointerEvent_PointCount((QPointerEvent*)self);
}

QEventPoint* q_mouseevent_point(void* self, int64_t i) {
    return QPointerEvent_Point((QPointerEvent*)self, i);
}

libqt_list /* of QEventPoint* */ q_mouseevent_points(void* self) {
    libqt_list _arr = QPointerEvent_Points((QPointerEvent*)self);
    return _arr;
}

QEventPoint* q_mouseevent_point_by_id(void* self, int id) {
    return QPointerEvent_PointById((QPointerEvent*)self, id);
}

bool q_mouseevent_all_points_grabbed(void* self) {
    return QPointerEvent_AllPointsGrabbed((QPointerEvent*)self);
}

bool q_mouseevent_all_points_accepted(void* self) {
    return QPointerEvent_AllPointsAccepted((QPointerEvent*)self);
}

QObject* q_mouseevent_exclusive_grabber(void* self, void* point) {
    return QPointerEvent_ExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point);
}

void q_mouseevent_set_exclusive_grabber(void* self, void* point, void* exclusiveGrabber) {
    QPointerEvent_SetExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)exclusiveGrabber);
}

void q_mouseevent_clear_passive_grabbers(void* self, void* point) {
    QPointerEvent_ClearPassiveGrabbers((QPointerEvent*)self, (QEventPoint*)point);
}

bool q_mouseevent_add_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_AddPassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

bool q_mouseevent_remove_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_RemovePassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

const QInputDevice* q_mouseevent_device(void* self) {
    return QInputEvent_Device((QInputEvent*)self);
}

int64_t q_mouseevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

int64_t q_mouseevent_modifiers(void* self) {
    return QInputEvent_Modifiers((QInputEvent*)self);
}

void q_mouseevent_set_modifiers(void* self, int64_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

uint64_t q_mouseevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

int64_t q_mouseevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_mouseevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_mouseevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_mouseevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_mouseevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_mouseevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_mouseevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_mouseevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_mouseevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_mouseevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

bool q_mouseevent_is_begin_event(void* self) {
    return QMouseEvent_IsBeginEvent((QMouseEvent*)self);
}

bool q_mouseevent_qbase_is_begin_event(void* self) {
    return QMouseEvent_QBaseIsBeginEvent((QMouseEvent*)self);
}

void q_mouseevent_on_is_begin_event(void* self, bool (*slot)()) {
    QMouseEvent_OnIsBeginEvent((QMouseEvent*)self, (intptr_t)slot);
}

bool q_mouseevent_is_update_event(void* self) {
    return QMouseEvent_IsUpdateEvent((QMouseEvent*)self);
}

bool q_mouseevent_qbase_is_update_event(void* self) {
    return QMouseEvent_QBaseIsUpdateEvent((QMouseEvent*)self);
}

void q_mouseevent_on_is_update_event(void* self, bool (*slot)()) {
    QMouseEvent_OnIsUpdateEvent((QMouseEvent*)self, (intptr_t)slot);
}

bool q_mouseevent_is_end_event(void* self) {
    return QMouseEvent_IsEndEvent((QMouseEvent*)self);
}

bool q_mouseevent_qbase_is_end_event(void* self) {
    return QMouseEvent_QBaseIsEndEvent((QMouseEvent*)self);
}

void q_mouseevent_on_is_end_event(void* self, bool (*slot)()) {
    QMouseEvent_OnIsEndEvent((QMouseEvent*)self, (intptr_t)slot);
}

void q_mouseevent_set_timestamp(void* self, uint64_t timestamp) {
    QMouseEvent_SetTimestamp((QMouseEvent*)self, timestamp);
}

void q_mouseevent_qbase_set_timestamp(void* self, uint64_t timestamp) {
    QMouseEvent_QBaseSetTimestamp((QMouseEvent*)self, timestamp);
}

void q_mouseevent_on_set_timestamp(void* self, void (*slot)(void*, uint64_t)) {
    QMouseEvent_OnSetTimestamp((QMouseEvent*)self, (intptr_t)slot);
}

void q_mouseevent_set_accepted(void* self, bool accepted) {
    QMouseEvent_SetAccepted((QMouseEvent*)self, accepted);
}

void q_mouseevent_qbase_set_accepted(void* self, bool accepted) {
    QMouseEvent_QBaseSetAccepted((QMouseEvent*)self, accepted);
}

void q_mouseevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QMouseEvent_OnSetAccepted((QMouseEvent*)self, (intptr_t)slot);
}

void q_mouseevent_delete(void* self) {
    QMouseEvent_Delete((QMouseEvent*)(self));
}

QHoverEvent* q_hoverevent_new(int64_t typeVal, void* scenePos, void* globalPos, void* oldPos) {
    return QHoverEvent_new(typeVal, (QPointF*)scenePos, (QPointF*)globalPos, (QPointF*)oldPos);
}

QHoverEvent* q_hoverevent_new2(int64_t typeVal, void* pos, void* oldPos) {
    return QHoverEvent_new2(typeVal, (QPointF*)pos, (QPointF*)oldPos);
}

QHoverEvent* q_hoverevent_new3(int64_t typeVal, void* scenePos, void* globalPos, void* oldPos, int64_t modifiers) {
    return QHoverEvent_new3(typeVal, (QPointF*)scenePos, (QPointF*)globalPos, (QPointF*)oldPos, modifiers);
}

QHoverEvent* q_hoverevent_new4(int64_t typeVal, void* scenePos, void* globalPos, void* oldPos, int64_t modifiers, void* device) {
    return QHoverEvent_new4(typeVal, (QPointF*)scenePos, (QPointF*)globalPos, (QPointF*)oldPos, modifiers, (QPointingDevice*)device);
}

QHoverEvent* q_hoverevent_new5(int64_t typeVal, void* pos, void* oldPos, int64_t modifiers) {
    return QHoverEvent_new5(typeVal, (QPointF*)pos, (QPointF*)oldPos, modifiers);
}

QHoverEvent* q_hoverevent_new6(int64_t typeVal, void* pos, void* oldPos, int64_t modifiers, void* device) {
    return QHoverEvent_new6(typeVal, (QPointF*)pos, (QPointF*)oldPos, modifiers, (QPointingDevice*)device);
}

QHoverEvent* q_hoverevent_clone(void* self) {
    return QHoverEvent_Clone((QHoverEvent*)self);
}

void q_hoverevent_on_clone(void* self, QHoverEvent* (*slot)()) {
    QHoverEvent_OnClone((QHoverEvent*)self, (intptr_t)slot);
}

QHoverEvent* q_hoverevent_qbase_clone(void* self) {
    return QHoverEvent_QBaseClone((QHoverEvent*)self);
}

QPoint* q_hoverevent_pos(void* self) {
    return QHoverEvent_Pos((QHoverEvent*)self);
}

QPointF* q_hoverevent_pos_f(void* self) {
    return QHoverEvent_PosF((QHoverEvent*)self);
}

bool q_hoverevent_is_update_event(void* self) {
    return QHoverEvent_IsUpdateEvent((QHoverEvent*)self);
}

void q_hoverevent_on_is_update_event(void* self, bool (*slot)()) {
    QHoverEvent_OnIsUpdateEvent((QHoverEvent*)self, (intptr_t)slot);
}

bool q_hoverevent_qbase_is_update_event(void* self) {
    return QHoverEvent_QBaseIsUpdateEvent((QHoverEvent*)self);
}

QPoint* q_hoverevent_old_pos(void* self) {
    return QHoverEvent_OldPos((QHoverEvent*)self);
}

QPointF* q_hoverevent_old_pos_f(void* self) {
    return QHoverEvent_OldPosF((QHoverEvent*)self);
}

int64_t q_hoverevent_button(void* self) {
    return QSinglePointEvent_Button((QSinglePointEvent*)self);
}

int64_t q_hoverevent_buttons(void* self) {
    return QSinglePointEvent_Buttons((QSinglePointEvent*)self);
}

QPointF* q_hoverevent_position(void* self) {
    return QSinglePointEvent_Position((QSinglePointEvent*)self);
}

QPointF* q_hoverevent_scene_position(void* self) {
    return QSinglePointEvent_ScenePosition((QSinglePointEvent*)self);
}

QPointF* q_hoverevent_global_position(void* self) {
    return QSinglePointEvent_GlobalPosition((QSinglePointEvent*)self);
}

QObject* q_hoverevent_exclusive_point_grabber(void* self) {
    return QSinglePointEvent_ExclusivePointGrabber((QSinglePointEvent*)self);
}

void q_hoverevent_set_exclusive_point_grabber(void* self, void* exclusiveGrabber) {
    QSinglePointEvent_SetExclusivePointGrabber((QSinglePointEvent*)self, (QObject*)exclusiveGrabber);
}

const QPointingDevice* q_hoverevent_pointing_device(void* self) {
    return QPointerEvent_PointingDevice((QPointerEvent*)self);
}

int64_t q_hoverevent_pointer_type(void* self) {
    return QPointerEvent_PointerType((QPointerEvent*)self);
}

int64_t q_hoverevent_point_count(void* self) {
    return QPointerEvent_PointCount((QPointerEvent*)self);
}

QEventPoint* q_hoverevent_point(void* self, int64_t i) {
    return QPointerEvent_Point((QPointerEvent*)self, i);
}

libqt_list /* of QEventPoint* */ q_hoverevent_points(void* self) {
    libqt_list _arr = QPointerEvent_Points((QPointerEvent*)self);
    return _arr;
}

QEventPoint* q_hoverevent_point_by_id(void* self, int id) {
    return QPointerEvent_PointById((QPointerEvent*)self, id);
}

bool q_hoverevent_all_points_grabbed(void* self) {
    return QPointerEvent_AllPointsGrabbed((QPointerEvent*)self);
}

bool q_hoverevent_all_points_accepted(void* self) {
    return QPointerEvent_AllPointsAccepted((QPointerEvent*)self);
}

QObject* q_hoverevent_exclusive_grabber(void* self, void* point) {
    return QPointerEvent_ExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point);
}

void q_hoverevent_set_exclusive_grabber(void* self, void* point, void* exclusiveGrabber) {
    QPointerEvent_SetExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)exclusiveGrabber);
}

void q_hoverevent_clear_passive_grabbers(void* self, void* point) {
    QPointerEvent_ClearPassiveGrabbers((QPointerEvent*)self, (QEventPoint*)point);
}

bool q_hoverevent_add_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_AddPassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

bool q_hoverevent_remove_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_RemovePassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

const QInputDevice* q_hoverevent_device(void* self) {
    return QInputEvent_Device((QInputEvent*)self);
}

int64_t q_hoverevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

int64_t q_hoverevent_modifiers(void* self) {
    return QInputEvent_Modifiers((QInputEvent*)self);
}

void q_hoverevent_set_modifiers(void* self, int64_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

uint64_t q_hoverevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

int64_t q_hoverevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_hoverevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_hoverevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_hoverevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_hoverevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_hoverevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_hoverevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_hoverevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_hoverevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_hoverevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

bool q_hoverevent_is_begin_event(void* self) {
    return QHoverEvent_IsBeginEvent((QHoverEvent*)self);
}

bool q_hoverevent_qbase_is_begin_event(void* self) {
    return QHoverEvent_QBaseIsBeginEvent((QHoverEvent*)self);
}

void q_hoverevent_on_is_begin_event(void* self, bool (*slot)()) {
    QHoverEvent_OnIsBeginEvent((QHoverEvent*)self, (intptr_t)slot);
}

bool q_hoverevent_is_end_event(void* self) {
    return QHoverEvent_IsEndEvent((QHoverEvent*)self);
}

bool q_hoverevent_qbase_is_end_event(void* self) {
    return QHoverEvent_QBaseIsEndEvent((QHoverEvent*)self);
}

void q_hoverevent_on_is_end_event(void* self, bool (*slot)()) {
    QHoverEvent_OnIsEndEvent((QHoverEvent*)self, (intptr_t)slot);
}

void q_hoverevent_set_timestamp(void* self, uint64_t timestamp) {
    QHoverEvent_SetTimestamp((QHoverEvent*)self, timestamp);
}

void q_hoverevent_qbase_set_timestamp(void* self, uint64_t timestamp) {
    QHoverEvent_QBaseSetTimestamp((QHoverEvent*)self, timestamp);
}

void q_hoverevent_on_set_timestamp(void* self, void (*slot)(void*, uint64_t)) {
    QHoverEvent_OnSetTimestamp((QHoverEvent*)self, (intptr_t)slot);
}

void q_hoverevent_set_accepted(void* self, bool accepted) {
    QHoverEvent_SetAccepted((QHoverEvent*)self, accepted);
}

void q_hoverevent_qbase_set_accepted(void* self, bool accepted) {
    QHoverEvent_QBaseSetAccepted((QHoverEvent*)self, accepted);
}

void q_hoverevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QHoverEvent_OnSetAccepted((QHoverEvent*)self, (intptr_t)slot);
}

void q_hoverevent_delete(void* self) {
    QHoverEvent_Delete((QHoverEvent*)(self));
}

QWheelEvent* q_wheelevent_new(void* pos, void* globalPos, void* pixelDelta, void* angleDelta, int64_t buttons, int64_t modifiers, int64_t phase, bool inverted) {
    return QWheelEvent_new((QPointF*)pos, (QPointF*)globalPos, (QPoint*)pixelDelta, (QPoint*)angleDelta, buttons, modifiers, phase, inverted);
}

QWheelEvent* q_wheelevent_new2(void* pos, void* globalPos, void* pixelDelta, void* angleDelta, int64_t buttons, int64_t modifiers, int64_t phase, bool inverted, int64_t source) {
    return QWheelEvent_new2((QPointF*)pos, (QPointF*)globalPos, (QPoint*)pixelDelta, (QPoint*)angleDelta, buttons, modifiers, phase, inverted, source);
}

QWheelEvent* q_wheelevent_new3(void* pos, void* globalPos, void* pixelDelta, void* angleDelta, int64_t buttons, int64_t modifiers, int64_t phase, bool inverted, int64_t source, void* device) {
    return QWheelEvent_new3((QPointF*)pos, (QPointF*)globalPos, (QPoint*)pixelDelta, (QPoint*)angleDelta, buttons, modifiers, phase, inverted, source, (QPointingDevice*)device);
}

QWheelEvent* q_wheelevent_clone(void* self) {
    return QWheelEvent_Clone((QWheelEvent*)self);
}

void q_wheelevent_on_clone(void* self, QWheelEvent* (*slot)()) {
    QWheelEvent_OnClone((QWheelEvent*)self, (intptr_t)slot);
}

QWheelEvent* q_wheelevent_qbase_clone(void* self) {
    return QWheelEvent_QBaseClone((QWheelEvent*)self);
}

QPoint* q_wheelevent_pixel_delta(void* self) {
    return QWheelEvent_PixelDelta((QWheelEvent*)self);
}

QPoint* q_wheelevent_angle_delta(void* self) {
    return QWheelEvent_AngleDelta((QWheelEvent*)self);
}

int64_t q_wheelevent_phase(void* self) {
    return QWheelEvent_Phase((QWheelEvent*)self);
}

bool q_wheelevent_inverted(void* self) {
    return QWheelEvent_Inverted((QWheelEvent*)self);
}

bool q_wheelevent_is_inverted(void* self) {
    return QWheelEvent_IsInverted((QWheelEvent*)self);
}

bool q_wheelevent_has_pixel_delta(void* self) {
    return QWheelEvent_HasPixelDelta((QWheelEvent*)self);
}

bool q_wheelevent_is_begin_event(void* self) {
    return QWheelEvent_IsBeginEvent((QWheelEvent*)self);
}

void q_wheelevent_on_is_begin_event(void* self, bool (*slot)()) {
    QWheelEvent_OnIsBeginEvent((QWheelEvent*)self, (intptr_t)slot);
}

bool q_wheelevent_qbase_is_begin_event(void* self) {
    return QWheelEvent_QBaseIsBeginEvent((QWheelEvent*)self);
}

bool q_wheelevent_is_update_event(void* self) {
    return QWheelEvent_IsUpdateEvent((QWheelEvent*)self);
}

void q_wheelevent_on_is_update_event(void* self, bool (*slot)()) {
    QWheelEvent_OnIsUpdateEvent((QWheelEvent*)self, (intptr_t)slot);
}

bool q_wheelevent_qbase_is_update_event(void* self) {
    return QWheelEvent_QBaseIsUpdateEvent((QWheelEvent*)self);
}

bool q_wheelevent_is_end_event(void* self) {
    return QWheelEvent_IsEndEvent((QWheelEvent*)self);
}

void q_wheelevent_on_is_end_event(void* self, bool (*slot)()) {
    QWheelEvent_OnIsEndEvent((QWheelEvent*)self, (intptr_t)slot);
}

bool q_wheelevent_qbase_is_end_event(void* self) {
    return QWheelEvent_QBaseIsEndEvent((QWheelEvent*)self);
}

int64_t q_wheelevent_source(void* self) {
    return QWheelEvent_Source((QWheelEvent*)self);
}

int64_t q_wheelevent_button(void* self) {
    return QSinglePointEvent_Button((QSinglePointEvent*)self);
}

int64_t q_wheelevent_buttons(void* self) {
    return QSinglePointEvent_Buttons((QSinglePointEvent*)self);
}

QPointF* q_wheelevent_position(void* self) {
    return QSinglePointEvent_Position((QSinglePointEvent*)self);
}

QPointF* q_wheelevent_scene_position(void* self) {
    return QSinglePointEvent_ScenePosition((QSinglePointEvent*)self);
}

QPointF* q_wheelevent_global_position(void* self) {
    return QSinglePointEvent_GlobalPosition((QSinglePointEvent*)self);
}

QObject* q_wheelevent_exclusive_point_grabber(void* self) {
    return QSinglePointEvent_ExclusivePointGrabber((QSinglePointEvent*)self);
}

void q_wheelevent_set_exclusive_point_grabber(void* self, void* exclusiveGrabber) {
    QSinglePointEvent_SetExclusivePointGrabber((QSinglePointEvent*)self, (QObject*)exclusiveGrabber);
}

const QPointingDevice* q_wheelevent_pointing_device(void* self) {
    return QPointerEvent_PointingDevice((QPointerEvent*)self);
}

int64_t q_wheelevent_pointer_type(void* self) {
    return QPointerEvent_PointerType((QPointerEvent*)self);
}

int64_t q_wheelevent_point_count(void* self) {
    return QPointerEvent_PointCount((QPointerEvent*)self);
}

QEventPoint* q_wheelevent_point(void* self, int64_t i) {
    return QPointerEvent_Point((QPointerEvent*)self, i);
}

libqt_list /* of QEventPoint* */ q_wheelevent_points(void* self) {
    libqt_list _arr = QPointerEvent_Points((QPointerEvent*)self);
    return _arr;
}

QEventPoint* q_wheelevent_point_by_id(void* self, int id) {
    return QPointerEvent_PointById((QPointerEvent*)self, id);
}

bool q_wheelevent_all_points_grabbed(void* self) {
    return QPointerEvent_AllPointsGrabbed((QPointerEvent*)self);
}

bool q_wheelevent_all_points_accepted(void* self) {
    return QPointerEvent_AllPointsAccepted((QPointerEvent*)self);
}

QObject* q_wheelevent_exclusive_grabber(void* self, void* point) {
    return QPointerEvent_ExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point);
}

void q_wheelevent_set_exclusive_grabber(void* self, void* point, void* exclusiveGrabber) {
    QPointerEvent_SetExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)exclusiveGrabber);
}

void q_wheelevent_clear_passive_grabbers(void* self, void* point) {
    QPointerEvent_ClearPassiveGrabbers((QPointerEvent*)self, (QEventPoint*)point);
}

bool q_wheelevent_add_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_AddPassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

bool q_wheelevent_remove_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_RemovePassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

const QInputDevice* q_wheelevent_device(void* self) {
    return QInputEvent_Device((QInputEvent*)self);
}

int64_t q_wheelevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

int64_t q_wheelevent_modifiers(void* self) {
    return QInputEvent_Modifiers((QInputEvent*)self);
}

void q_wheelevent_set_modifiers(void* self, int64_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

uint64_t q_wheelevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

int64_t q_wheelevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_wheelevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_wheelevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_wheelevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_wheelevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_wheelevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_wheelevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_wheelevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_wheelevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_wheelevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_wheelevent_set_timestamp(void* self, uint64_t timestamp) {
    QWheelEvent_SetTimestamp((QWheelEvent*)self, timestamp);
}

void q_wheelevent_qbase_set_timestamp(void* self, uint64_t timestamp) {
    QWheelEvent_QBaseSetTimestamp((QWheelEvent*)self, timestamp);
}

void q_wheelevent_on_set_timestamp(void* self, void (*slot)(void*, uint64_t)) {
    QWheelEvent_OnSetTimestamp((QWheelEvent*)self, (intptr_t)slot);
}

void q_wheelevent_set_accepted(void* self, bool accepted) {
    QWheelEvent_SetAccepted((QWheelEvent*)self, accepted);
}

void q_wheelevent_qbase_set_accepted(void* self, bool accepted) {
    QWheelEvent_QBaseSetAccepted((QWheelEvent*)self, accepted);
}

void q_wheelevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QWheelEvent_OnSetAccepted((QWheelEvent*)self, (intptr_t)slot);
}

void q_wheelevent_delete(void* self) {
    QWheelEvent_Delete((QWheelEvent*)(self));
}

QTabletEvent* q_tabletevent_new(int64_t t, void* device, void* pos, void* globalPos, double pressure, float xTilt, float yTilt, float tangentialPressure, double rotation, float z, int64_t keyState, int64_t button, int64_t buttons) {
    return QTabletEvent_new(t, (QPointingDevice*)device, (QPointF*)pos, (QPointF*)globalPos, pressure, xTilt, yTilt, tangentialPressure, rotation, z, keyState, button, buttons);
}

QTabletEvent* q_tabletevent_clone(void* self) {
    return QTabletEvent_Clone((QTabletEvent*)self);
}

void q_tabletevent_on_clone(void* self, QTabletEvent* (*slot)()) {
    QTabletEvent_OnClone((QTabletEvent*)self, (intptr_t)slot);
}

QTabletEvent* q_tabletevent_qbase_clone(void* self) {
    return QTabletEvent_QBaseClone((QTabletEvent*)self);
}

QPoint* q_tabletevent_pos(void* self) {
    return QTabletEvent_Pos((QTabletEvent*)self);
}

QPoint* q_tabletevent_global_pos(void* self) {
    return QTabletEvent_GlobalPos((QTabletEvent*)self);
}

const QPointF* q_tabletevent_pos_f(void* self) {
    return QTabletEvent_PosF((QTabletEvent*)self);
}

const QPointF* q_tabletevent_global_pos_f(void* self) {
    return QTabletEvent_GlobalPosF((QTabletEvent*)self);
}

int32_t q_tabletevent_x(void* self) {
    return QTabletEvent_X((QTabletEvent*)self);
}

int32_t q_tabletevent_y(void* self) {
    return QTabletEvent_Y((QTabletEvent*)self);
}

int32_t q_tabletevent_global_x(void* self) {
    return QTabletEvent_GlobalX((QTabletEvent*)self);
}

int32_t q_tabletevent_global_y(void* self) {
    return QTabletEvent_GlobalY((QTabletEvent*)self);
}

double q_tabletevent_hi_res_global_x(void* self) {
    return QTabletEvent_HiResGlobalX((QTabletEvent*)self);
}

double q_tabletevent_hi_res_global_y(void* self) {
    return QTabletEvent_HiResGlobalY((QTabletEvent*)self);
}

long long q_tabletevent_unique_id(void* self) {
    return QTabletEvent_UniqueId((QTabletEvent*)self);
}

double q_tabletevent_pressure(void* self) {
    return QTabletEvent_Pressure((QTabletEvent*)self);
}

double q_tabletevent_rotation(void* self) {
    return QTabletEvent_Rotation((QTabletEvent*)self);
}

double q_tabletevent_z(void* self) {
    return QTabletEvent_Z((QTabletEvent*)self);
}

double q_tabletevent_tangential_pressure(void* self) {
    return QTabletEvent_TangentialPressure((QTabletEvent*)self);
}

double q_tabletevent_x_tilt(void* self) {
    return QTabletEvent_XTilt((QTabletEvent*)self);
}

double q_tabletevent_y_tilt(void* self) {
    return QTabletEvent_YTilt((QTabletEvent*)self);
}

int64_t q_tabletevent_button(void* self) {
    return QSinglePointEvent_Button((QSinglePointEvent*)self);
}

int64_t q_tabletevent_buttons(void* self) {
    return QSinglePointEvent_Buttons((QSinglePointEvent*)self);
}

QPointF* q_tabletevent_position(void* self) {
    return QSinglePointEvent_Position((QSinglePointEvent*)self);
}

QPointF* q_tabletevent_scene_position(void* self) {
    return QSinglePointEvent_ScenePosition((QSinglePointEvent*)self);
}

QPointF* q_tabletevent_global_position(void* self) {
    return QSinglePointEvent_GlobalPosition((QSinglePointEvent*)self);
}

QObject* q_tabletevent_exclusive_point_grabber(void* self) {
    return QSinglePointEvent_ExclusivePointGrabber((QSinglePointEvent*)self);
}

void q_tabletevent_set_exclusive_point_grabber(void* self, void* exclusiveGrabber) {
    QSinglePointEvent_SetExclusivePointGrabber((QSinglePointEvent*)self, (QObject*)exclusiveGrabber);
}

const QPointingDevice* q_tabletevent_pointing_device(void* self) {
    return QPointerEvent_PointingDevice((QPointerEvent*)self);
}

int64_t q_tabletevent_pointer_type(void* self) {
    return QPointerEvent_PointerType((QPointerEvent*)self);
}

int64_t q_tabletevent_point_count(void* self) {
    return QPointerEvent_PointCount((QPointerEvent*)self);
}

QEventPoint* q_tabletevent_point(void* self, int64_t i) {
    return QPointerEvent_Point((QPointerEvent*)self, i);
}

libqt_list /* of QEventPoint* */ q_tabletevent_points(void* self) {
    libqt_list _arr = QPointerEvent_Points((QPointerEvent*)self);
    return _arr;
}

QEventPoint* q_tabletevent_point_by_id(void* self, int id) {
    return QPointerEvent_PointById((QPointerEvent*)self, id);
}

bool q_tabletevent_all_points_grabbed(void* self) {
    return QPointerEvent_AllPointsGrabbed((QPointerEvent*)self);
}

bool q_tabletevent_all_points_accepted(void* self) {
    return QPointerEvent_AllPointsAccepted((QPointerEvent*)self);
}

QObject* q_tabletevent_exclusive_grabber(void* self, void* point) {
    return QPointerEvent_ExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point);
}

void q_tabletevent_set_exclusive_grabber(void* self, void* point, void* exclusiveGrabber) {
    QPointerEvent_SetExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)exclusiveGrabber);
}

void q_tabletevent_clear_passive_grabbers(void* self, void* point) {
    QPointerEvent_ClearPassiveGrabbers((QPointerEvent*)self, (QEventPoint*)point);
}

bool q_tabletevent_add_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_AddPassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

bool q_tabletevent_remove_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_RemovePassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

const QInputDevice* q_tabletevent_device(void* self) {
    return QInputEvent_Device((QInputEvent*)self);
}

int64_t q_tabletevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

int64_t q_tabletevent_modifiers(void* self) {
    return QInputEvent_Modifiers((QInputEvent*)self);
}

void q_tabletevent_set_modifiers(void* self, int64_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

uint64_t q_tabletevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

int64_t q_tabletevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_tabletevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_tabletevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_tabletevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_tabletevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_tabletevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_tabletevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_tabletevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_tabletevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_tabletevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

bool q_tabletevent_is_begin_event(void* self) {
    return QTabletEvent_IsBeginEvent((QTabletEvent*)self);
}

bool q_tabletevent_qbase_is_begin_event(void* self) {
    return QTabletEvent_QBaseIsBeginEvent((QTabletEvent*)self);
}

void q_tabletevent_on_is_begin_event(void* self, bool (*slot)()) {
    QTabletEvent_OnIsBeginEvent((QTabletEvent*)self, (intptr_t)slot);
}

bool q_tabletevent_is_update_event(void* self) {
    return QTabletEvent_IsUpdateEvent((QTabletEvent*)self);
}

bool q_tabletevent_qbase_is_update_event(void* self) {
    return QTabletEvent_QBaseIsUpdateEvent((QTabletEvent*)self);
}

void q_tabletevent_on_is_update_event(void* self, bool (*slot)()) {
    QTabletEvent_OnIsUpdateEvent((QTabletEvent*)self, (intptr_t)slot);
}

bool q_tabletevent_is_end_event(void* self) {
    return QTabletEvent_IsEndEvent((QTabletEvent*)self);
}

bool q_tabletevent_qbase_is_end_event(void* self) {
    return QTabletEvent_QBaseIsEndEvent((QTabletEvent*)self);
}

void q_tabletevent_on_is_end_event(void* self, bool (*slot)()) {
    QTabletEvent_OnIsEndEvent((QTabletEvent*)self, (intptr_t)slot);
}

void q_tabletevent_set_timestamp(void* self, uint64_t timestamp) {
    QTabletEvent_SetTimestamp((QTabletEvent*)self, timestamp);
}

void q_tabletevent_qbase_set_timestamp(void* self, uint64_t timestamp) {
    QTabletEvent_QBaseSetTimestamp((QTabletEvent*)self, timestamp);
}

void q_tabletevent_on_set_timestamp(void* self, void (*slot)(void*, uint64_t)) {
    QTabletEvent_OnSetTimestamp((QTabletEvent*)self, (intptr_t)slot);
}

void q_tabletevent_set_accepted(void* self, bool accepted) {
    QTabletEvent_SetAccepted((QTabletEvent*)self, accepted);
}

void q_tabletevent_qbase_set_accepted(void* self, bool accepted) {
    QTabletEvent_QBaseSetAccepted((QTabletEvent*)self, accepted);
}

void q_tabletevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QTabletEvent_OnSetAccepted((QTabletEvent*)self, (intptr_t)slot);
}

void q_tabletevent_delete(void* self) {
    QTabletEvent_Delete((QTabletEvent*)(self));
}

QNativeGestureEvent* q_nativegestureevent_new(int64_t typeVal, void* dev, void* localPos, void* scenePos, void* globalPos, double value, uint64_t sequenceId, uint64_t intArgument) {
    return QNativeGestureEvent_new(typeVal, (QPointingDevice*)dev, (QPointF*)localPos, (QPointF*)scenePos, (QPointF*)globalPos, value, sequenceId, intArgument);
}

QNativeGestureEvent* q_nativegestureevent_new2(int64_t typeVal, void* dev, int fingerCount, void* localPos, void* scenePos, void* globalPos, double value, void* delta) {
    return QNativeGestureEvent_new2(typeVal, (QPointingDevice*)dev, fingerCount, (QPointF*)localPos, (QPointF*)scenePos, (QPointF*)globalPos, value, (QPointF*)delta);
}

QNativeGestureEvent* q_nativegestureevent_new3(int64_t typeVal, void* dev, int fingerCount, void* localPos, void* scenePos, void* globalPos, double value, void* delta, uint64_t sequenceId) {
    return QNativeGestureEvent_new3(typeVal, (QPointingDevice*)dev, fingerCount, (QPointF*)localPos, (QPointF*)scenePos, (QPointF*)globalPos, value, (QPointF*)delta, sequenceId);
}

QNativeGestureEvent* q_nativegestureevent_clone(void* self) {
    return QNativeGestureEvent_Clone((QNativeGestureEvent*)self);
}

void q_nativegestureevent_on_clone(void* self, QNativeGestureEvent* (*slot)()) {
    QNativeGestureEvent_OnClone((QNativeGestureEvent*)self, (intptr_t)slot);
}

QNativeGestureEvent* q_nativegestureevent_qbase_clone(void* self) {
    return QNativeGestureEvent_QBaseClone((QNativeGestureEvent*)self);
}

int64_t q_nativegestureevent_gesture_type(void* self) {
    return QNativeGestureEvent_GestureType((QNativeGestureEvent*)self);
}

int32_t q_nativegestureevent_finger_count(void* self) {
    return QNativeGestureEvent_FingerCount((QNativeGestureEvent*)self);
}

double q_nativegestureevent_value(void* self) {
    return QNativeGestureEvent_Value((QNativeGestureEvent*)self);
}

QPointF* q_nativegestureevent_delta(void* self) {
    return QNativeGestureEvent_Delta((QNativeGestureEvent*)self);
}

const QPoint* q_nativegestureevent_pos(void* self) {
    return QNativeGestureEvent_Pos((QNativeGestureEvent*)self);
}

const QPoint* q_nativegestureevent_global_pos(void* self) {
    return QNativeGestureEvent_GlobalPos((QNativeGestureEvent*)self);
}

QPointF* q_nativegestureevent_local_pos(void* self) {
    return QNativeGestureEvent_LocalPos((QNativeGestureEvent*)self);
}

QPointF* q_nativegestureevent_window_pos(void* self) {
    return QNativeGestureEvent_WindowPos((QNativeGestureEvent*)self);
}

QPointF* q_nativegestureevent_screen_pos(void* self) {
    return QNativeGestureEvent_ScreenPos((QNativeGestureEvent*)self);
}

int64_t q_nativegestureevent_button(void* self) {
    return QSinglePointEvent_Button((QSinglePointEvent*)self);
}

int64_t q_nativegestureevent_buttons(void* self) {
    return QSinglePointEvent_Buttons((QSinglePointEvent*)self);
}

QPointF* q_nativegestureevent_position(void* self) {
    return QSinglePointEvent_Position((QSinglePointEvent*)self);
}

QPointF* q_nativegestureevent_scene_position(void* self) {
    return QSinglePointEvent_ScenePosition((QSinglePointEvent*)self);
}

QPointF* q_nativegestureevent_global_position(void* self) {
    return QSinglePointEvent_GlobalPosition((QSinglePointEvent*)self);
}

QObject* q_nativegestureevent_exclusive_point_grabber(void* self) {
    return QSinglePointEvent_ExclusivePointGrabber((QSinglePointEvent*)self);
}

void q_nativegestureevent_set_exclusive_point_grabber(void* self, void* exclusiveGrabber) {
    QSinglePointEvent_SetExclusivePointGrabber((QSinglePointEvent*)self, (QObject*)exclusiveGrabber);
}

const QPointingDevice* q_nativegestureevent_pointing_device(void* self) {
    return QPointerEvent_PointingDevice((QPointerEvent*)self);
}

int64_t q_nativegestureevent_pointer_type(void* self) {
    return QPointerEvent_PointerType((QPointerEvent*)self);
}

int64_t q_nativegestureevent_point_count(void* self) {
    return QPointerEvent_PointCount((QPointerEvent*)self);
}

QEventPoint* q_nativegestureevent_point(void* self, int64_t i) {
    return QPointerEvent_Point((QPointerEvent*)self, i);
}

libqt_list /* of QEventPoint* */ q_nativegestureevent_points(void* self) {
    libqt_list _arr = QPointerEvent_Points((QPointerEvent*)self);
    return _arr;
}

QEventPoint* q_nativegestureevent_point_by_id(void* self, int id) {
    return QPointerEvent_PointById((QPointerEvent*)self, id);
}

bool q_nativegestureevent_all_points_grabbed(void* self) {
    return QPointerEvent_AllPointsGrabbed((QPointerEvent*)self);
}

bool q_nativegestureevent_all_points_accepted(void* self) {
    return QPointerEvent_AllPointsAccepted((QPointerEvent*)self);
}

QObject* q_nativegestureevent_exclusive_grabber(void* self, void* point) {
    return QPointerEvent_ExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point);
}

void q_nativegestureevent_set_exclusive_grabber(void* self, void* point, void* exclusiveGrabber) {
    QPointerEvent_SetExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)exclusiveGrabber);
}

void q_nativegestureevent_clear_passive_grabbers(void* self, void* point) {
    QPointerEvent_ClearPassiveGrabbers((QPointerEvent*)self, (QEventPoint*)point);
}

bool q_nativegestureevent_add_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_AddPassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

bool q_nativegestureevent_remove_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_RemovePassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

const QInputDevice* q_nativegestureevent_device(void* self) {
    return QInputEvent_Device((QInputEvent*)self);
}

int64_t q_nativegestureevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

int64_t q_nativegestureevent_modifiers(void* self) {
    return QInputEvent_Modifiers((QInputEvent*)self);
}

void q_nativegestureevent_set_modifiers(void* self, int64_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

uint64_t q_nativegestureevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

int64_t q_nativegestureevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_nativegestureevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_nativegestureevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_nativegestureevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_nativegestureevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_nativegestureevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_nativegestureevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_nativegestureevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_nativegestureevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_nativegestureevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

bool q_nativegestureevent_is_begin_event(void* self) {
    return QNativeGestureEvent_IsBeginEvent((QNativeGestureEvent*)self);
}

bool q_nativegestureevent_qbase_is_begin_event(void* self) {
    return QNativeGestureEvent_QBaseIsBeginEvent((QNativeGestureEvent*)self);
}

void q_nativegestureevent_on_is_begin_event(void* self, bool (*slot)()) {
    QNativeGestureEvent_OnIsBeginEvent((QNativeGestureEvent*)self, (intptr_t)slot);
}

bool q_nativegestureevent_is_update_event(void* self) {
    return QNativeGestureEvent_IsUpdateEvent((QNativeGestureEvent*)self);
}

bool q_nativegestureevent_qbase_is_update_event(void* self) {
    return QNativeGestureEvent_QBaseIsUpdateEvent((QNativeGestureEvent*)self);
}

void q_nativegestureevent_on_is_update_event(void* self, bool (*slot)()) {
    QNativeGestureEvent_OnIsUpdateEvent((QNativeGestureEvent*)self, (intptr_t)slot);
}

bool q_nativegestureevent_is_end_event(void* self) {
    return QNativeGestureEvent_IsEndEvent((QNativeGestureEvent*)self);
}

bool q_nativegestureevent_qbase_is_end_event(void* self) {
    return QNativeGestureEvent_QBaseIsEndEvent((QNativeGestureEvent*)self);
}

void q_nativegestureevent_on_is_end_event(void* self, bool (*slot)()) {
    QNativeGestureEvent_OnIsEndEvent((QNativeGestureEvent*)self, (intptr_t)slot);
}

void q_nativegestureevent_set_timestamp(void* self, uint64_t timestamp) {
    QNativeGestureEvent_SetTimestamp((QNativeGestureEvent*)self, timestamp);
}

void q_nativegestureevent_qbase_set_timestamp(void* self, uint64_t timestamp) {
    QNativeGestureEvent_QBaseSetTimestamp((QNativeGestureEvent*)self, timestamp);
}

void q_nativegestureevent_on_set_timestamp(void* self, void (*slot)(void*, uint64_t)) {
    QNativeGestureEvent_OnSetTimestamp((QNativeGestureEvent*)self, (intptr_t)slot);
}

void q_nativegestureevent_set_accepted(void* self, bool accepted) {
    QNativeGestureEvent_SetAccepted((QNativeGestureEvent*)self, accepted);
}

void q_nativegestureevent_qbase_set_accepted(void* self, bool accepted) {
    QNativeGestureEvent_QBaseSetAccepted((QNativeGestureEvent*)self, accepted);
}

void q_nativegestureevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QNativeGestureEvent_OnSetAccepted((QNativeGestureEvent*)self, (intptr_t)slot);
}

void q_nativegestureevent_delete(void* self) {
    QNativeGestureEvent_Delete((QNativeGestureEvent*)(self));
}

QKeyEvent* q_keyevent_new(int64_t typeVal, int key, int64_t modifiers) {
    return QKeyEvent_new(typeVal, key, modifiers);
}

QKeyEvent* q_keyevent_new2(int64_t typeVal, int key, int64_t modifiers, uint32_t nativeScanCode, uint32_t nativeVirtualKey, uint32_t nativeModifiers) {
    return QKeyEvent_new2(typeVal, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers);
}

QKeyEvent* q_keyevent_new3(int64_t typeVal, int key, int64_t modifiers, const char* text) {
    return QKeyEvent_new3(typeVal, key, modifiers, qstring(text));
}

QKeyEvent* q_keyevent_new4(int64_t typeVal, int key, int64_t modifiers, const char* text, bool autorep) {
    return QKeyEvent_new4(typeVal, key, modifiers, qstring(text), autorep);
}

QKeyEvent* q_keyevent_new5(int64_t typeVal, int key, int64_t modifiers, const char* text, bool autorep, unsigned short count) {
    return QKeyEvent_new5(typeVal, key, modifiers, qstring(text), autorep, count);
}

QKeyEvent* q_keyevent_new6(int64_t typeVal, int key, int64_t modifiers, uint32_t nativeScanCode, uint32_t nativeVirtualKey, uint32_t nativeModifiers, const char* text) {
    return QKeyEvent_new6(typeVal, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, qstring(text));
}

QKeyEvent* q_keyevent_new7(int64_t typeVal, int key, int64_t modifiers, uint32_t nativeScanCode, uint32_t nativeVirtualKey, uint32_t nativeModifiers, const char* text, bool autorep) {
    return QKeyEvent_new7(typeVal, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, qstring(text), autorep);
}

QKeyEvent* q_keyevent_new8(int64_t typeVal, int key, int64_t modifiers, uint32_t nativeScanCode, uint32_t nativeVirtualKey, uint32_t nativeModifiers, const char* text, bool autorep, unsigned short count) {
    return QKeyEvent_new8(typeVal, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, qstring(text), autorep, count);
}

QKeyEvent* q_keyevent_new9(int64_t typeVal, int key, int64_t modifiers, uint32_t nativeScanCode, uint32_t nativeVirtualKey, uint32_t nativeModifiers, const char* text, bool autorep, unsigned short count, void* device) {
    return QKeyEvent_new9(typeVal, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, qstring(text), autorep, count, (QInputDevice*)device);
}

QKeyEvent* q_keyevent_clone(void* self) {
    return QKeyEvent_Clone((QKeyEvent*)self);
}

void q_keyevent_on_clone(void* self, QKeyEvent* (*slot)()) {
    QKeyEvent_OnClone((QKeyEvent*)self, (intptr_t)slot);
}

QKeyEvent* q_keyevent_qbase_clone(void* self) {
    return QKeyEvent_QBaseClone((QKeyEvent*)self);
}

int32_t q_keyevent_key(void* self) {
    return QKeyEvent_Key((QKeyEvent*)self);
}

bool q_keyevent_matches(void* self, int64_t key) {
    return QKeyEvent_Matches((QKeyEvent*)self, key);
}

int64_t q_keyevent_modifiers(void* self) {
    return QKeyEvent_Modifiers((QKeyEvent*)self);
}

QKeyCombination* q_keyevent_key_combination(void* self) {
    return QKeyEvent_KeyCombination((QKeyEvent*)self);
}

const char* q_keyevent_text(void* self) {
    libqt_string _str = QKeyEvent_Text((QKeyEvent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_keyevent_is_auto_repeat(void* self) {
    return QKeyEvent_IsAutoRepeat((QKeyEvent*)self);
}

int32_t q_keyevent_count(void* self) {
    return QKeyEvent_Count((QKeyEvent*)self);
}

uint32_t q_keyevent_native_scan_code(void* self) {
    return QKeyEvent_NativeScanCode((QKeyEvent*)self);
}

uint32_t q_keyevent_native_virtual_key(void* self) {
    return QKeyEvent_NativeVirtualKey((QKeyEvent*)self);
}

uint32_t q_keyevent_native_modifiers(void* self) {
    return QKeyEvent_NativeModifiers((QKeyEvent*)self);
}

const QInputDevice* q_keyevent_device(void* self) {
    return QInputEvent_Device((QInputEvent*)self);
}

int64_t q_keyevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

void q_keyevent_set_modifiers(void* self, int64_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

uint64_t q_keyevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

int64_t q_keyevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_keyevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_keyevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_keyevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_keyevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_keyevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_keyevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_keyevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_keyevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_keyevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_keyevent_set_timestamp(void* self, uint64_t timestamp) {
    QKeyEvent_SetTimestamp((QKeyEvent*)self, timestamp);
}

void q_keyevent_qbase_set_timestamp(void* self, uint64_t timestamp) {
    QKeyEvent_QBaseSetTimestamp((QKeyEvent*)self, timestamp);
}

void q_keyevent_on_set_timestamp(void* self, void (*slot)(void*, uint64_t)) {
    QKeyEvent_OnSetTimestamp((QKeyEvent*)self, (intptr_t)slot);
}

void q_keyevent_set_accepted(void* self, bool accepted) {
    QKeyEvent_SetAccepted((QKeyEvent*)self, accepted);
}

void q_keyevent_qbase_set_accepted(void* self, bool accepted) {
    QKeyEvent_QBaseSetAccepted((QKeyEvent*)self, accepted);
}

void q_keyevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QKeyEvent_OnSetAccepted((QKeyEvent*)self, (intptr_t)slot);
}

void q_keyevent_delete(void* self) {
    QKeyEvent_Delete((QKeyEvent*)(self));
}

QFocusEvent* q_focusevent_new(int64_t typeVal) {
    return QFocusEvent_new(typeVal);
}

QFocusEvent* q_focusevent_new2(int64_t typeVal, int64_t reason) {
    return QFocusEvent_new2(typeVal, reason);
}

QFocusEvent* q_focusevent_clone(void* self) {
    return QFocusEvent_Clone((QFocusEvent*)self);
}

void q_focusevent_on_clone(void* self, QFocusEvent* (*slot)()) {
    QFocusEvent_OnClone((QFocusEvent*)self, (intptr_t)slot);
}

QFocusEvent* q_focusevent_qbase_clone(void* self) {
    return QFocusEvent_QBaseClone((QFocusEvent*)self);
}

bool q_focusevent_got_focus(void* self) {
    return QFocusEvent_GotFocus((QFocusEvent*)self);
}

bool q_focusevent_lost_focus(void* self) {
    return QFocusEvent_LostFocus((QFocusEvent*)self);
}

int64_t q_focusevent_reason(void* self) {
    return QFocusEvent_Reason((QFocusEvent*)self);
}

int64_t q_focusevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_focusevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_focusevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_focusevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_focusevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_focusevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_focusevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_focusevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_focusevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_focusevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_focusevent_set_accepted(void* self, bool accepted) {
    QFocusEvent_SetAccepted((QFocusEvent*)self, accepted);
}

void q_focusevent_qbase_set_accepted(void* self, bool accepted) {
    QFocusEvent_QBaseSetAccepted((QFocusEvent*)self, accepted);
}

void q_focusevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QFocusEvent_OnSetAccepted((QFocusEvent*)self, (intptr_t)slot);
}

void q_focusevent_delete(void* self) {
    QFocusEvent_Delete((QFocusEvent*)(self));
}

QPaintEvent* q_paintevent_new(void* paintRegion) {
    return QPaintEvent_new((QRegion*)paintRegion);
}

QPaintEvent* q_paintevent_new2(void* paintRect) {
    return QPaintEvent_new2((QRect*)paintRect);
}

QPaintEvent* q_paintevent_clone(void* self) {
    return QPaintEvent_Clone((QPaintEvent*)self);
}

void q_paintevent_on_clone(void* self, QPaintEvent* (*slot)()) {
    QPaintEvent_OnClone((QPaintEvent*)self, (intptr_t)slot);
}

QPaintEvent* q_paintevent_qbase_clone(void* self) {
    return QPaintEvent_QBaseClone((QPaintEvent*)self);
}

const QRect* q_paintevent_rect(void* self) {
    return QPaintEvent_Rect((QPaintEvent*)self);
}

const QRegion* q_paintevent_region(void* self) {
    return QPaintEvent_Region((QPaintEvent*)self);
}

int64_t q_paintevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_paintevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_paintevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_paintevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_paintevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_paintevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_paintevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_paintevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_paintevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_paintevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_paintevent_set_accepted(void* self, bool accepted) {
    QPaintEvent_SetAccepted((QPaintEvent*)self, accepted);
}

void q_paintevent_qbase_set_accepted(void* self, bool accepted) {
    QPaintEvent_QBaseSetAccepted((QPaintEvent*)self, accepted);
}

void q_paintevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QPaintEvent_OnSetAccepted((QPaintEvent*)self, (intptr_t)slot);
}

void q_paintevent_delete(void* self) {
    QPaintEvent_Delete((QPaintEvent*)(self));
}

QMoveEvent* q_moveevent_new(void* pos, void* oldPos) {
    return QMoveEvent_new((QPoint*)pos, (QPoint*)oldPos);
}

QMoveEvent* q_moveevent_clone(void* self) {
    return QMoveEvent_Clone((QMoveEvent*)self);
}

void q_moveevent_on_clone(void* self, QMoveEvent* (*slot)()) {
    QMoveEvent_OnClone((QMoveEvent*)self, (intptr_t)slot);
}

QMoveEvent* q_moveevent_qbase_clone(void* self) {
    return QMoveEvent_QBaseClone((QMoveEvent*)self);
}

const QPoint* q_moveevent_pos(void* self) {
    return QMoveEvent_Pos((QMoveEvent*)self);
}

const QPoint* q_moveevent_old_pos(void* self) {
    return QMoveEvent_OldPos((QMoveEvent*)self);
}

int64_t q_moveevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_moveevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_moveevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_moveevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_moveevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_moveevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_moveevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_moveevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_moveevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_moveevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_moveevent_set_accepted(void* self, bool accepted) {
    QMoveEvent_SetAccepted((QMoveEvent*)self, accepted);
}

void q_moveevent_qbase_set_accepted(void* self, bool accepted) {
    QMoveEvent_QBaseSetAccepted((QMoveEvent*)self, accepted);
}

void q_moveevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QMoveEvent_OnSetAccepted((QMoveEvent*)self, (intptr_t)slot);
}

void q_moveevent_delete(void* self) {
    QMoveEvent_Delete((QMoveEvent*)(self));
}

QExposeEvent* q_exposeevent_new(void* m_region) {
    return QExposeEvent_new((QRegion*)m_region);
}

QExposeEvent* q_exposeevent_clone(void* self) {
    return QExposeEvent_Clone((QExposeEvent*)self);
}

void q_exposeevent_on_clone(void* self, QExposeEvent* (*slot)()) {
    QExposeEvent_OnClone((QExposeEvent*)self, (intptr_t)slot);
}

QExposeEvent* q_exposeevent_qbase_clone(void* self) {
    return QExposeEvent_QBaseClone((QExposeEvent*)self);
}

const QRegion* q_exposeevent_region(void* self) {
    return QExposeEvent_Region((QExposeEvent*)self);
}

int64_t q_exposeevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_exposeevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_exposeevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_exposeevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_exposeevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_exposeevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_exposeevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_exposeevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_exposeevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_exposeevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_exposeevent_set_accepted(void* self, bool accepted) {
    QExposeEvent_SetAccepted((QExposeEvent*)self, accepted);
}

void q_exposeevent_qbase_set_accepted(void* self, bool accepted) {
    QExposeEvent_QBaseSetAccepted((QExposeEvent*)self, accepted);
}

void q_exposeevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QExposeEvent_OnSetAccepted((QExposeEvent*)self, (intptr_t)slot);
}

void q_exposeevent_delete(void* self) {
    QExposeEvent_Delete((QExposeEvent*)(self));
}

QPlatformSurfaceEvent* q_platformsurfaceevent_new(int64_t surfaceEventType) {
    return QPlatformSurfaceEvent_new(surfaceEventType);
}

QPlatformSurfaceEvent* q_platformsurfaceevent_clone(void* self) {
    return QPlatformSurfaceEvent_Clone((QPlatformSurfaceEvent*)self);
}

void q_platformsurfaceevent_on_clone(void* self, QPlatformSurfaceEvent* (*slot)()) {
    QPlatformSurfaceEvent_OnClone((QPlatformSurfaceEvent*)self, (intptr_t)slot);
}

QPlatformSurfaceEvent* q_platformsurfaceevent_qbase_clone(void* self) {
    return QPlatformSurfaceEvent_QBaseClone((QPlatformSurfaceEvent*)self);
}

int64_t q_platformsurfaceevent_surface_event_type(void* self) {
    return QPlatformSurfaceEvent_SurfaceEventType((QPlatformSurfaceEvent*)self);
}

int64_t q_platformsurfaceevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_platformsurfaceevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_platformsurfaceevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_platformsurfaceevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_platformsurfaceevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_platformsurfaceevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_platformsurfaceevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_platformsurfaceevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_platformsurfaceevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_platformsurfaceevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_platformsurfaceevent_set_accepted(void* self, bool accepted) {
    QPlatformSurfaceEvent_SetAccepted((QPlatformSurfaceEvent*)self, accepted);
}

void q_platformsurfaceevent_qbase_set_accepted(void* self, bool accepted) {
    QPlatformSurfaceEvent_QBaseSetAccepted((QPlatformSurfaceEvent*)self, accepted);
}

void q_platformsurfaceevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QPlatformSurfaceEvent_OnSetAccepted((QPlatformSurfaceEvent*)self, (intptr_t)slot);
}

void q_platformsurfaceevent_delete(void* self) {
    QPlatformSurfaceEvent_Delete((QPlatformSurfaceEvent*)(self));
}

QResizeEvent* q_resizeevent_new(void* size, void* oldSize) {
    return QResizeEvent_new((QSize*)size, (QSize*)oldSize);
}

QResizeEvent* q_resizeevent_clone(void* self) {
    return QResizeEvent_Clone((QResizeEvent*)self);
}

void q_resizeevent_on_clone(void* self, QResizeEvent* (*slot)()) {
    QResizeEvent_OnClone((QResizeEvent*)self, (intptr_t)slot);
}

QResizeEvent* q_resizeevent_qbase_clone(void* self) {
    return QResizeEvent_QBaseClone((QResizeEvent*)self);
}

const QSize* q_resizeevent_size(void* self) {
    return QResizeEvent_Size((QResizeEvent*)self);
}

const QSize* q_resizeevent_old_size(void* self) {
    return QResizeEvent_OldSize((QResizeEvent*)self);
}

int64_t q_resizeevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_resizeevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_resizeevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_resizeevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_resizeevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_resizeevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_resizeevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_resizeevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_resizeevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_resizeevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_resizeevent_set_accepted(void* self, bool accepted) {
    QResizeEvent_SetAccepted((QResizeEvent*)self, accepted);
}

void q_resizeevent_qbase_set_accepted(void* self, bool accepted) {
    QResizeEvent_QBaseSetAccepted((QResizeEvent*)self, accepted);
}

void q_resizeevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QResizeEvent_OnSetAccepted((QResizeEvent*)self, (intptr_t)slot);
}

void q_resizeevent_delete(void* self) {
    QResizeEvent_Delete((QResizeEvent*)(self));
}

QCloseEvent* q_closeevent_new() {
    return QCloseEvent_new();
}

QCloseEvent* q_closeevent_clone(void* self) {
    return QCloseEvent_Clone((QCloseEvent*)self);
}

void q_closeevent_on_clone(void* self, QCloseEvent* (*slot)()) {
    QCloseEvent_OnClone((QCloseEvent*)self, (intptr_t)slot);
}

QCloseEvent* q_closeevent_qbase_clone(void* self) {
    return QCloseEvent_QBaseClone((QCloseEvent*)self);
}

int64_t q_closeevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_closeevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_closeevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_closeevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_closeevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_closeevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_closeevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_closeevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_closeevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_closeevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_closeevent_set_accepted(void* self, bool accepted) {
    QCloseEvent_SetAccepted((QCloseEvent*)self, accepted);
}

void q_closeevent_qbase_set_accepted(void* self, bool accepted) {
    QCloseEvent_QBaseSetAccepted((QCloseEvent*)self, accepted);
}

void q_closeevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QCloseEvent_OnSetAccepted((QCloseEvent*)self, (intptr_t)slot);
}

void q_closeevent_delete(void* self) {
    QCloseEvent_Delete((QCloseEvent*)(self));
}

QIconDragEvent* q_icondragevent_new() {
    return QIconDragEvent_new();
}

QIconDragEvent* q_icondragevent_clone(void* self) {
    return QIconDragEvent_Clone((QIconDragEvent*)self);
}

void q_icondragevent_on_clone(void* self, QIconDragEvent* (*slot)()) {
    QIconDragEvent_OnClone((QIconDragEvent*)self, (intptr_t)slot);
}

QIconDragEvent* q_icondragevent_qbase_clone(void* self) {
    return QIconDragEvent_QBaseClone((QIconDragEvent*)self);
}

int64_t q_icondragevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_icondragevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_icondragevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_icondragevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_icondragevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_icondragevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_icondragevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_icondragevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_icondragevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_icondragevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_icondragevent_set_accepted(void* self, bool accepted) {
    QIconDragEvent_SetAccepted((QIconDragEvent*)self, accepted);
}

void q_icondragevent_qbase_set_accepted(void* self, bool accepted) {
    QIconDragEvent_QBaseSetAccepted((QIconDragEvent*)self, accepted);
}

void q_icondragevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QIconDragEvent_OnSetAccepted((QIconDragEvent*)self, (intptr_t)slot);
}

void q_icondragevent_delete(void* self) {
    QIconDragEvent_Delete((QIconDragEvent*)(self));
}

QShowEvent* q_showevent_new() {
    return QShowEvent_new();
}

QShowEvent* q_showevent_clone(void* self) {
    return QShowEvent_Clone((QShowEvent*)self);
}

void q_showevent_on_clone(void* self, QShowEvent* (*slot)()) {
    QShowEvent_OnClone((QShowEvent*)self, (intptr_t)slot);
}

QShowEvent* q_showevent_qbase_clone(void* self) {
    return QShowEvent_QBaseClone((QShowEvent*)self);
}

int64_t q_showevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_showevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_showevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_showevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_showevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_showevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_showevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_showevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_showevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_showevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_showevent_set_accepted(void* self, bool accepted) {
    QShowEvent_SetAccepted((QShowEvent*)self, accepted);
}

void q_showevent_qbase_set_accepted(void* self, bool accepted) {
    QShowEvent_QBaseSetAccepted((QShowEvent*)self, accepted);
}

void q_showevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QShowEvent_OnSetAccepted((QShowEvent*)self, (intptr_t)slot);
}

void q_showevent_delete(void* self) {
    QShowEvent_Delete((QShowEvent*)(self));
}

QHideEvent* q_hideevent_new() {
    return QHideEvent_new();
}

QHideEvent* q_hideevent_clone(void* self) {
    return QHideEvent_Clone((QHideEvent*)self);
}

void q_hideevent_on_clone(void* self, QHideEvent* (*slot)()) {
    QHideEvent_OnClone((QHideEvent*)self, (intptr_t)slot);
}

QHideEvent* q_hideevent_qbase_clone(void* self) {
    return QHideEvent_QBaseClone((QHideEvent*)self);
}

int64_t q_hideevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_hideevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_hideevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_hideevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_hideevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_hideevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_hideevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_hideevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_hideevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_hideevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_hideevent_set_accepted(void* self, bool accepted) {
    QHideEvent_SetAccepted((QHideEvent*)self, accepted);
}

void q_hideevent_qbase_set_accepted(void* self, bool accepted) {
    QHideEvent_QBaseSetAccepted((QHideEvent*)self, accepted);
}

void q_hideevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QHideEvent_OnSetAccepted((QHideEvent*)self, (intptr_t)slot);
}

void q_hideevent_delete(void* self) {
    QHideEvent_Delete((QHideEvent*)(self));
}

QContextMenuEvent* q_contextmenuevent_new(int64_t reason, void* pos, void* globalPos) {
    return QContextMenuEvent_new(reason, (QPoint*)pos, (QPoint*)globalPos);
}

QContextMenuEvent* q_contextmenuevent_new2(int64_t reason, void* pos) {
    return QContextMenuEvent_new2(reason, (QPoint*)pos);
}

QContextMenuEvent* q_contextmenuevent_new3(int64_t reason, void* pos, void* globalPos, int64_t modifiers) {
    return QContextMenuEvent_new3(reason, (QPoint*)pos, (QPoint*)globalPos, modifiers);
}

QContextMenuEvent* q_contextmenuevent_clone(void* self) {
    return QContextMenuEvent_Clone((QContextMenuEvent*)self);
}

void q_contextmenuevent_on_clone(void* self, QContextMenuEvent* (*slot)()) {
    QContextMenuEvent_OnClone((QContextMenuEvent*)self, (intptr_t)slot);
}

QContextMenuEvent* q_contextmenuevent_qbase_clone(void* self) {
    return QContextMenuEvent_QBaseClone((QContextMenuEvent*)self);
}

int32_t q_contextmenuevent_x(void* self) {
    return QContextMenuEvent_X((QContextMenuEvent*)self);
}

int32_t q_contextmenuevent_y(void* self) {
    return QContextMenuEvent_Y((QContextMenuEvent*)self);
}

int32_t q_contextmenuevent_global_x(void* self) {
    return QContextMenuEvent_GlobalX((QContextMenuEvent*)self);
}

int32_t q_contextmenuevent_global_y(void* self) {
    return QContextMenuEvent_GlobalY((QContextMenuEvent*)self);
}

const QPoint* q_contextmenuevent_pos(void* self) {
    return QContextMenuEvent_Pos((QContextMenuEvent*)self);
}

const QPoint* q_contextmenuevent_global_pos(void* self) {
    return QContextMenuEvent_GlobalPos((QContextMenuEvent*)self);
}

int64_t q_contextmenuevent_reason(void* self) {
    return QContextMenuEvent_Reason((QContextMenuEvent*)self);
}

const QInputDevice* q_contextmenuevent_device(void* self) {
    return QInputEvent_Device((QInputEvent*)self);
}

int64_t q_contextmenuevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

int64_t q_contextmenuevent_modifiers(void* self) {
    return QInputEvent_Modifiers((QInputEvent*)self);
}

void q_contextmenuevent_set_modifiers(void* self, int64_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

uint64_t q_contextmenuevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

int64_t q_contextmenuevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_contextmenuevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_contextmenuevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_contextmenuevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_contextmenuevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_contextmenuevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_contextmenuevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_contextmenuevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_contextmenuevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_contextmenuevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_contextmenuevent_set_timestamp(void* self, uint64_t timestamp) {
    QContextMenuEvent_SetTimestamp((QContextMenuEvent*)self, timestamp);
}

void q_contextmenuevent_qbase_set_timestamp(void* self, uint64_t timestamp) {
    QContextMenuEvent_QBaseSetTimestamp((QContextMenuEvent*)self, timestamp);
}

void q_contextmenuevent_on_set_timestamp(void* self, void (*slot)(void*, uint64_t)) {
    QContextMenuEvent_OnSetTimestamp((QContextMenuEvent*)self, (intptr_t)slot);
}

void q_contextmenuevent_set_accepted(void* self, bool accepted) {
    QContextMenuEvent_SetAccepted((QContextMenuEvent*)self, accepted);
}

void q_contextmenuevent_qbase_set_accepted(void* self, bool accepted) {
    QContextMenuEvent_QBaseSetAccepted((QContextMenuEvent*)self, accepted);
}

void q_contextmenuevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QContextMenuEvent_OnSetAccepted((QContextMenuEvent*)self, (intptr_t)slot);
}

void q_contextmenuevent_delete(void* self) {
    QContextMenuEvent_Delete((QContextMenuEvent*)(self));
}

QInputMethodEvent* q_inputmethodevent_new() {
    return QInputMethodEvent_new();
}

QInputMethodEvent* q_inputmethodevent_new2(const char* preeditText, libqt_list attributes) {
    return QInputMethodEvent_new2(qstring(preeditText), attributes);
}

QInputMethodEvent* q_inputmethodevent_clone(void* self) {
    return QInputMethodEvent_Clone((QInputMethodEvent*)self);
}

void q_inputmethodevent_on_clone(void* self, QInputMethodEvent* (*slot)()) {
    QInputMethodEvent_OnClone((QInputMethodEvent*)self, (intptr_t)slot);
}

QInputMethodEvent* q_inputmethodevent_qbase_clone(void* self) {
    return QInputMethodEvent_QBaseClone((QInputMethodEvent*)self);
}

void q_inputmethodevent_set_commit_string(void* self, const char* commitString) {
    QInputMethodEvent_SetCommitString((QInputMethodEvent*)self, qstring(commitString));
}

libqt_list /* of QInputMethodEvent__Attribute* */ q_inputmethodevent_attributes(void* self) {
    libqt_list _arr = QInputMethodEvent_Attributes((QInputMethodEvent*)self);
    return _arr;
}

const char* q_inputmethodevent_preedit_string(void* self) {
    libqt_string _str = QInputMethodEvent_PreeditString((QInputMethodEvent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_inputmethodevent_commit_string(void* self) {
    libqt_string _str = QInputMethodEvent_CommitString((QInputMethodEvent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_inputmethodevent_replacement_start(void* self) {
    return QInputMethodEvent_ReplacementStart((QInputMethodEvent*)self);
}

int32_t q_inputmethodevent_replacement_length(void* self) {
    return QInputMethodEvent_ReplacementLength((QInputMethodEvent*)self);
}

void q_inputmethodevent_set_commit_string2(void* self, const char* commitString, int replaceFrom) {
    QInputMethodEvent_SetCommitString2((QInputMethodEvent*)self, qstring(commitString), replaceFrom);
}

void q_inputmethodevent_set_commit_string3(void* self, const char* commitString, int replaceFrom, int replaceLength) {
    QInputMethodEvent_SetCommitString3((QInputMethodEvent*)self, qstring(commitString), replaceFrom, replaceLength);
}

int64_t q_inputmethodevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_inputmethodevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_inputmethodevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_inputmethodevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_inputmethodevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_inputmethodevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_inputmethodevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_inputmethodevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_inputmethodevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_inputmethodevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_inputmethodevent_set_accepted(void* self, bool accepted) {
    QInputMethodEvent_SetAccepted((QInputMethodEvent*)self, accepted);
}

void q_inputmethodevent_qbase_set_accepted(void* self, bool accepted) {
    QInputMethodEvent_QBaseSetAccepted((QInputMethodEvent*)self, accepted);
}

void q_inputmethodevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QInputMethodEvent_OnSetAccepted((QInputMethodEvent*)self, (intptr_t)slot);
}

void q_inputmethodevent_delete(void* self) {
    QInputMethodEvent_Delete((QInputMethodEvent*)(self));
}

QInputMethodQueryEvent* q_inputmethodqueryevent_new(int64_t queries) {
    return QInputMethodQueryEvent_new(queries);
}

QInputMethodQueryEvent* q_inputmethodqueryevent_clone(void* self) {
    return QInputMethodQueryEvent_Clone((QInputMethodQueryEvent*)self);
}

void q_inputmethodqueryevent_on_clone(void* self, QInputMethodQueryEvent* (*slot)()) {
    QInputMethodQueryEvent_OnClone((QInputMethodQueryEvent*)self, (intptr_t)slot);
}

QInputMethodQueryEvent* q_inputmethodqueryevent_qbase_clone(void* self) {
    return QInputMethodQueryEvent_QBaseClone((QInputMethodQueryEvent*)self);
}

int64_t q_inputmethodqueryevent_queries(void* self) {
    return QInputMethodQueryEvent_Queries((QInputMethodQueryEvent*)self);
}

void q_inputmethodqueryevent_set_value(void* self, int64_t query, void* value) {
    QInputMethodQueryEvent_SetValue((QInputMethodQueryEvent*)self, query, (QVariant*)value);
}

QVariant* q_inputmethodqueryevent_value(void* self, int64_t query) {
    return QInputMethodQueryEvent_Value((QInputMethodQueryEvent*)self, query);
}

int64_t q_inputmethodqueryevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_inputmethodqueryevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_inputmethodqueryevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_inputmethodqueryevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_inputmethodqueryevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_inputmethodqueryevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_inputmethodqueryevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_inputmethodqueryevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_inputmethodqueryevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_inputmethodqueryevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_inputmethodqueryevent_set_accepted(void* self, bool accepted) {
    QInputMethodQueryEvent_SetAccepted((QInputMethodQueryEvent*)self, accepted);
}

void q_inputmethodqueryevent_qbase_set_accepted(void* self, bool accepted) {
    QInputMethodQueryEvent_QBaseSetAccepted((QInputMethodQueryEvent*)self, accepted);
}

void q_inputmethodqueryevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QInputMethodQueryEvent_OnSetAccepted((QInputMethodQueryEvent*)self, (intptr_t)slot);
}

void q_inputmethodqueryevent_delete(void* self) {
    QInputMethodQueryEvent_Delete((QInputMethodQueryEvent*)(self));
}

QDropEvent* q_dropevent_new(void* pos, int64_t actions, void* data, int64_t buttons, int64_t modifiers) {
    return QDropEvent_new((QPointF*)pos, actions, (QMimeData*)data, buttons, modifiers);
}

QDropEvent* q_dropevent_new2(void* pos, int64_t actions, void* data, int64_t buttons, int64_t modifiers, int64_t typeVal) {
    return QDropEvent_new2((QPointF*)pos, actions, (QMimeData*)data, buttons, modifiers, typeVal);
}

QDropEvent* q_dropevent_clone(void* self) {
    return QDropEvent_Clone((QDropEvent*)self);
}

void q_dropevent_on_clone(void* self, QDropEvent* (*slot)()) {
    QDropEvent_OnClone((QDropEvent*)self, (intptr_t)slot);
}

QDropEvent* q_dropevent_qbase_clone(void* self) {
    return QDropEvent_QBaseClone((QDropEvent*)self);
}

QPoint* q_dropevent_pos(void* self) {
    return QDropEvent_Pos((QDropEvent*)self);
}

QPointF* q_dropevent_pos_f(void* self) {
    return QDropEvent_PosF((QDropEvent*)self);
}

int64_t q_dropevent_mouse_buttons(void* self) {
    return QDropEvent_MouseButtons((QDropEvent*)self);
}

int64_t q_dropevent_keyboard_modifiers(void* self) {
    return QDropEvent_KeyboardModifiers((QDropEvent*)self);
}

QPointF* q_dropevent_position(void* self) {
    return QDropEvent_Position((QDropEvent*)self);
}

int64_t q_dropevent_buttons(void* self) {
    return QDropEvent_Buttons((QDropEvent*)self);
}

int64_t q_dropevent_modifiers(void* self) {
    return QDropEvent_Modifiers((QDropEvent*)self);
}

int64_t q_dropevent_possible_actions(void* self) {
    return QDropEvent_PossibleActions((QDropEvent*)self);
}

int64_t q_dropevent_proposed_action(void* self) {
    return QDropEvent_ProposedAction((QDropEvent*)self);
}

void q_dropevent_accept_proposed_action(void* self) {
    QDropEvent_AcceptProposedAction((QDropEvent*)self);
}

int64_t q_dropevent_drop_action(void* self) {
    return QDropEvent_DropAction((QDropEvent*)self);
}

void q_dropevent_set_drop_action(void* self, int64_t action) {
    QDropEvent_SetDropAction((QDropEvent*)self, action);
}

QObject* q_dropevent_source(void* self) {
    return QDropEvent_Source((QDropEvent*)self);
}

const QMimeData* q_dropevent_mime_data(void* self) {
    return QDropEvent_MimeData((QDropEvent*)self);
}

int64_t q_dropevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_dropevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_dropevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_dropevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_dropevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_dropevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_dropevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_dropevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_dropevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_dropevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_dropevent_set_accepted(void* self, bool accepted) {
    QDropEvent_SetAccepted((QDropEvent*)self, accepted);
}

void q_dropevent_qbase_set_accepted(void* self, bool accepted) {
    QDropEvent_QBaseSetAccepted((QDropEvent*)self, accepted);
}

void q_dropevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QDropEvent_OnSetAccepted((QDropEvent*)self, (intptr_t)slot);
}

void q_dropevent_delete(void* self) {
    QDropEvent_Delete((QDropEvent*)(self));
}

QDragMoveEvent* q_dragmoveevent_new(void* pos, int64_t actions, void* data, int64_t buttons, int64_t modifiers) {
    return QDragMoveEvent_new((QPoint*)pos, actions, (QMimeData*)data, buttons, modifiers);
}

QDragMoveEvent* q_dragmoveevent_new2(void* pos, int64_t actions, void* data, int64_t buttons, int64_t modifiers, int64_t typeVal) {
    return QDragMoveEvent_new2((QPoint*)pos, actions, (QMimeData*)data, buttons, modifiers, typeVal);
}

QDragMoveEvent* q_dragmoveevent_clone(void* self) {
    return QDragMoveEvent_Clone((QDragMoveEvent*)self);
}

void q_dragmoveevent_on_clone(void* self, QDragMoveEvent* (*slot)()) {
    QDragMoveEvent_OnClone((QDragMoveEvent*)self, (intptr_t)slot);
}

QDragMoveEvent* q_dragmoveevent_qbase_clone(void* self) {
    return QDragMoveEvent_QBaseClone((QDragMoveEvent*)self);
}

QRect* q_dragmoveevent_answer_rect(void* self) {
    return QDragMoveEvent_AnswerRect((QDragMoveEvent*)self);
}

void q_dragmoveevent_accept(void* self) {
    QDragMoveEvent_Accept((QDragMoveEvent*)self);
}

void q_dragmoveevent_ignore(void* self) {
    QDragMoveEvent_Ignore((QDragMoveEvent*)self);
}

void q_dragmoveevent_accept_with_q_rect(void* self, void* r) {
    QDragMoveEvent_AcceptWithQRect((QDragMoveEvent*)self, (QRect*)r);
}

void q_dragmoveevent_ignore_with_q_rect(void* self, void* r) {
    QDragMoveEvent_IgnoreWithQRect((QDragMoveEvent*)self, (QRect*)r);
}

QPoint* q_dragmoveevent_pos(void* self) {
    return QDropEvent_Pos((QDropEvent*)self);
}

QPointF* q_dragmoveevent_pos_f(void* self) {
    return QDropEvent_PosF((QDropEvent*)self);
}

int64_t q_dragmoveevent_mouse_buttons(void* self) {
    return QDropEvent_MouseButtons((QDropEvent*)self);
}

int64_t q_dragmoveevent_keyboard_modifiers(void* self) {
    return QDropEvent_KeyboardModifiers((QDropEvent*)self);
}

QPointF* q_dragmoveevent_position(void* self) {
    return QDropEvent_Position((QDropEvent*)self);
}

int64_t q_dragmoveevent_buttons(void* self) {
    return QDropEvent_Buttons((QDropEvent*)self);
}

int64_t q_dragmoveevent_modifiers(void* self) {
    return QDropEvent_Modifiers((QDropEvent*)self);
}

int64_t q_dragmoveevent_possible_actions(void* self) {
    return QDropEvent_PossibleActions((QDropEvent*)self);
}

int64_t q_dragmoveevent_proposed_action(void* self) {
    return QDropEvent_ProposedAction((QDropEvent*)self);
}

void q_dragmoveevent_accept_proposed_action(void* self) {
    QDropEvent_AcceptProposedAction((QDropEvent*)self);
}

int64_t q_dragmoveevent_drop_action(void* self) {
    return QDropEvent_DropAction((QDropEvent*)self);
}

void q_dragmoveevent_set_drop_action(void* self, int64_t action) {
    QDropEvent_SetDropAction((QDropEvent*)self, action);
}

QObject* q_dragmoveevent_source(void* self) {
    return QDropEvent_Source((QDropEvent*)self);
}

const QMimeData* q_dragmoveevent_mime_data(void* self) {
    return QDropEvent_MimeData((QDropEvent*)self);
}

int64_t q_dragmoveevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_dragmoveevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_dragmoveevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

bool q_dragmoveevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_dragmoveevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_dragmoveevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_dragmoveevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_dragmoveevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_dragmoveevent_set_accepted(void* self, bool accepted) {
    QDragMoveEvent_SetAccepted((QDragMoveEvent*)self, accepted);
}

void q_dragmoveevent_qbase_set_accepted(void* self, bool accepted) {
    QDragMoveEvent_QBaseSetAccepted((QDragMoveEvent*)self, accepted);
}

void q_dragmoveevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QDragMoveEvent_OnSetAccepted((QDragMoveEvent*)self, (intptr_t)slot);
}

void q_dragmoveevent_delete(void* self) {
    QDragMoveEvent_Delete((QDragMoveEvent*)(self));
}

QDragEnterEvent* q_dragenterevent_new(void* pos, int64_t actions, void* data, int64_t buttons, int64_t modifiers) {
    return QDragEnterEvent_new((QPoint*)pos, actions, (QMimeData*)data, buttons, modifiers);
}

QDragEnterEvent* q_dragenterevent_clone(void* self) {
    return QDragEnterEvent_Clone((QDragEnterEvent*)self);
}

void q_dragenterevent_on_clone(void* self, QDragEnterEvent* (*slot)()) {
    QDragEnterEvent_OnClone((QDragEnterEvent*)self, (intptr_t)slot);
}

QDragEnterEvent* q_dragenterevent_qbase_clone(void* self) {
    return QDragEnterEvent_QBaseClone((QDragEnterEvent*)self);
}

QRect* q_dragenterevent_answer_rect(void* self) {
    return QDragMoveEvent_AnswerRect((QDragMoveEvent*)self);
}

void q_dragenterevent_accept(void* self) {
    QDragMoveEvent_Accept((QDragMoveEvent*)self);
}

void q_dragenterevent_ignore(void* self) {
    QDragMoveEvent_Ignore((QDragMoveEvent*)self);
}

void q_dragenterevent_accept_with_q_rect(void* self, void* r) {
    QDragMoveEvent_AcceptWithQRect((QDragMoveEvent*)self, (QRect*)r);
}

void q_dragenterevent_ignore_with_q_rect(void* self, void* r) {
    QDragMoveEvent_IgnoreWithQRect((QDragMoveEvent*)self, (QRect*)r);
}

QPoint* q_dragenterevent_pos(void* self) {
    return QDropEvent_Pos((QDropEvent*)self);
}

QPointF* q_dragenterevent_pos_f(void* self) {
    return QDropEvent_PosF((QDropEvent*)self);
}

int64_t q_dragenterevent_mouse_buttons(void* self) {
    return QDropEvent_MouseButtons((QDropEvent*)self);
}

int64_t q_dragenterevent_keyboard_modifiers(void* self) {
    return QDropEvent_KeyboardModifiers((QDropEvent*)self);
}

QPointF* q_dragenterevent_position(void* self) {
    return QDropEvent_Position((QDropEvent*)self);
}

int64_t q_dragenterevent_buttons(void* self) {
    return QDropEvent_Buttons((QDropEvent*)self);
}

int64_t q_dragenterevent_modifiers(void* self) {
    return QDropEvent_Modifiers((QDropEvent*)self);
}

int64_t q_dragenterevent_possible_actions(void* self) {
    return QDropEvent_PossibleActions((QDropEvent*)self);
}

int64_t q_dragenterevent_proposed_action(void* self) {
    return QDropEvent_ProposedAction((QDropEvent*)self);
}

void q_dragenterevent_accept_proposed_action(void* self) {
    QDropEvent_AcceptProposedAction((QDropEvent*)self);
}

int64_t q_dragenterevent_drop_action(void* self) {
    return QDropEvent_DropAction((QDropEvent*)self);
}

void q_dragenterevent_set_drop_action(void* self, int64_t action) {
    QDropEvent_SetDropAction((QDropEvent*)self, action);
}

QObject* q_dragenterevent_source(void* self) {
    return QDropEvent_Source((QDropEvent*)self);
}

const QMimeData* q_dragenterevent_mime_data(void* self) {
    return QDropEvent_MimeData((QDropEvent*)self);
}

int64_t q_dragenterevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_dragenterevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_dragenterevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

bool q_dragenterevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_dragenterevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_dragenterevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_dragenterevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_dragenterevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_dragenterevent_set_accepted(void* self, bool accepted) {
    QDragEnterEvent_SetAccepted((QDragEnterEvent*)self, accepted);
}

void q_dragenterevent_qbase_set_accepted(void* self, bool accepted) {
    QDragEnterEvent_QBaseSetAccepted((QDragEnterEvent*)self, accepted);
}

void q_dragenterevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QDragEnterEvent_OnSetAccepted((QDragEnterEvent*)self, (intptr_t)slot);
}

void q_dragenterevent_delete(void* self) {
    QDragEnterEvent_Delete((QDragEnterEvent*)(self));
}

QDragLeaveEvent* q_dragleaveevent_new() {
    return QDragLeaveEvent_new();
}

QDragLeaveEvent* q_dragleaveevent_clone(void* self) {
    return QDragLeaveEvent_Clone((QDragLeaveEvent*)self);
}

void q_dragleaveevent_on_clone(void* self, QDragLeaveEvent* (*slot)()) {
    QDragLeaveEvent_OnClone((QDragLeaveEvent*)self, (intptr_t)slot);
}

QDragLeaveEvent* q_dragleaveevent_qbase_clone(void* self) {
    return QDragLeaveEvent_QBaseClone((QDragLeaveEvent*)self);
}

int64_t q_dragleaveevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_dragleaveevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_dragleaveevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_dragleaveevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_dragleaveevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_dragleaveevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_dragleaveevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_dragleaveevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_dragleaveevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_dragleaveevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_dragleaveevent_set_accepted(void* self, bool accepted) {
    QDragLeaveEvent_SetAccepted((QDragLeaveEvent*)self, accepted);
}

void q_dragleaveevent_qbase_set_accepted(void* self, bool accepted) {
    QDragLeaveEvent_QBaseSetAccepted((QDragLeaveEvent*)self, accepted);
}

void q_dragleaveevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QDragLeaveEvent_OnSetAccepted((QDragLeaveEvent*)self, (intptr_t)slot);
}

void q_dragleaveevent_delete(void* self) {
    QDragLeaveEvent_Delete((QDragLeaveEvent*)(self));
}

QHelpEvent* q_helpevent_new(int64_t typeVal, void* pos, void* globalPos) {
    return QHelpEvent_new(typeVal, (QPoint*)pos, (QPoint*)globalPos);
}

QHelpEvent* q_helpevent_clone(void* self) {
    return QHelpEvent_Clone((QHelpEvent*)self);
}

void q_helpevent_on_clone(void* self, QHelpEvent* (*slot)()) {
    QHelpEvent_OnClone((QHelpEvent*)self, (intptr_t)slot);
}

QHelpEvent* q_helpevent_qbase_clone(void* self) {
    return QHelpEvent_QBaseClone((QHelpEvent*)self);
}

int32_t q_helpevent_x(void* self) {
    return QHelpEvent_X((QHelpEvent*)self);
}

int32_t q_helpevent_y(void* self) {
    return QHelpEvent_Y((QHelpEvent*)self);
}

int32_t q_helpevent_global_x(void* self) {
    return QHelpEvent_GlobalX((QHelpEvent*)self);
}

int32_t q_helpevent_global_y(void* self) {
    return QHelpEvent_GlobalY((QHelpEvent*)self);
}

const QPoint* q_helpevent_pos(void* self) {
    return QHelpEvent_Pos((QHelpEvent*)self);
}

const QPoint* q_helpevent_global_pos(void* self) {
    return QHelpEvent_GlobalPos((QHelpEvent*)self);
}

int64_t q_helpevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_helpevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_helpevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_helpevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_helpevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_helpevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_helpevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_helpevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_helpevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_helpevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_helpevent_set_accepted(void* self, bool accepted) {
    QHelpEvent_SetAccepted((QHelpEvent*)self, accepted);
}

void q_helpevent_qbase_set_accepted(void* self, bool accepted) {
    QHelpEvent_QBaseSetAccepted((QHelpEvent*)self, accepted);
}

void q_helpevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QHelpEvent_OnSetAccepted((QHelpEvent*)self, (intptr_t)slot);
}

void q_helpevent_delete(void* self) {
    QHelpEvent_Delete((QHelpEvent*)(self));
}

QStatusTipEvent* q_statustipevent_new(const char* tip) {
    return QStatusTipEvent_new(qstring(tip));
}

QStatusTipEvent* q_statustipevent_clone(void* self) {
    return QStatusTipEvent_Clone((QStatusTipEvent*)self);
}

void q_statustipevent_on_clone(void* self, QStatusTipEvent* (*slot)()) {
    QStatusTipEvent_OnClone((QStatusTipEvent*)self, (intptr_t)slot);
}

QStatusTipEvent* q_statustipevent_qbase_clone(void* self) {
    return QStatusTipEvent_QBaseClone((QStatusTipEvent*)self);
}

const char* q_statustipevent_tip(void* self) {
    libqt_string _str = QStatusTipEvent_Tip((QStatusTipEvent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_statustipevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_statustipevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_statustipevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_statustipevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_statustipevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_statustipevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_statustipevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_statustipevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_statustipevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_statustipevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_statustipevent_set_accepted(void* self, bool accepted) {
    QStatusTipEvent_SetAccepted((QStatusTipEvent*)self, accepted);
}

void q_statustipevent_qbase_set_accepted(void* self, bool accepted) {
    QStatusTipEvent_QBaseSetAccepted((QStatusTipEvent*)self, accepted);
}

void q_statustipevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QStatusTipEvent_OnSetAccepted((QStatusTipEvent*)self, (intptr_t)slot);
}

void q_statustipevent_delete(void* self) {
    QStatusTipEvent_Delete((QStatusTipEvent*)(self));
}

QWhatsThisClickedEvent* q_whatsthisclickedevent_new(const char* href) {
    return QWhatsThisClickedEvent_new(qstring(href));
}

QWhatsThisClickedEvent* q_whatsthisclickedevent_clone(void* self) {
    return QWhatsThisClickedEvent_Clone((QWhatsThisClickedEvent*)self);
}

void q_whatsthisclickedevent_on_clone(void* self, QWhatsThisClickedEvent* (*slot)()) {
    QWhatsThisClickedEvent_OnClone((QWhatsThisClickedEvent*)self, (intptr_t)slot);
}

QWhatsThisClickedEvent* q_whatsthisclickedevent_qbase_clone(void* self) {
    return QWhatsThisClickedEvent_QBaseClone((QWhatsThisClickedEvent*)self);
}

const char* q_whatsthisclickedevent_href(void* self) {
    libqt_string _str = QWhatsThisClickedEvent_Href((QWhatsThisClickedEvent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_whatsthisclickedevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_whatsthisclickedevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_whatsthisclickedevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_whatsthisclickedevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_whatsthisclickedevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_whatsthisclickedevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_whatsthisclickedevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_whatsthisclickedevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_whatsthisclickedevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_whatsthisclickedevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_whatsthisclickedevent_set_accepted(void* self, bool accepted) {
    QWhatsThisClickedEvent_SetAccepted((QWhatsThisClickedEvent*)self, accepted);
}

void q_whatsthisclickedevent_qbase_set_accepted(void* self, bool accepted) {
    QWhatsThisClickedEvent_QBaseSetAccepted((QWhatsThisClickedEvent*)self, accepted);
}

void q_whatsthisclickedevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QWhatsThisClickedEvent_OnSetAccepted((QWhatsThisClickedEvent*)self, (intptr_t)slot);
}

void q_whatsthisclickedevent_delete(void* self) {
    QWhatsThisClickedEvent_Delete((QWhatsThisClickedEvent*)(self));
}

QActionEvent* q_actionevent_new(int typeVal, void* action) {
    return QActionEvent_new(typeVal, (QAction*)action);
}

QActionEvent* q_actionevent_new2(int typeVal, void* action, void* before) {
    return QActionEvent_new2(typeVal, (QAction*)action, (QAction*)before);
}

QActionEvent* q_actionevent_clone(void* self) {
    return QActionEvent_Clone((QActionEvent*)self);
}

void q_actionevent_on_clone(void* self, QActionEvent* (*slot)()) {
    QActionEvent_OnClone((QActionEvent*)self, (intptr_t)slot);
}

QActionEvent* q_actionevent_qbase_clone(void* self) {
    return QActionEvent_QBaseClone((QActionEvent*)self);
}

QAction* q_actionevent_action(void* self) {
    return QActionEvent_Action((QActionEvent*)self);
}

QAction* q_actionevent_before(void* self) {
    return QActionEvent_Before((QActionEvent*)self);
}

int64_t q_actionevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_actionevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_actionevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_actionevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_actionevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_actionevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_actionevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_actionevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_actionevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_actionevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_actionevent_set_accepted(void* self, bool accepted) {
    QActionEvent_SetAccepted((QActionEvent*)self, accepted);
}

void q_actionevent_qbase_set_accepted(void* self, bool accepted) {
    QActionEvent_QBaseSetAccepted((QActionEvent*)self, accepted);
}

void q_actionevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QActionEvent_OnSetAccepted((QActionEvent*)self, (intptr_t)slot);
}

void q_actionevent_delete(void* self) {
    QActionEvent_Delete((QActionEvent*)(self));
}

QFileOpenEvent* q_fileopenevent_new(const char* file) {
    return QFileOpenEvent_new(qstring(file));
}

QFileOpenEvent* q_fileopenevent_new2(void* url) {
    return QFileOpenEvent_new2((QUrl*)url);
}

QFileOpenEvent* q_fileopenevent_clone(void* self) {
    return QFileOpenEvent_Clone((QFileOpenEvent*)self);
}

void q_fileopenevent_on_clone(void* self, QFileOpenEvent* (*slot)()) {
    QFileOpenEvent_OnClone((QFileOpenEvent*)self, (intptr_t)slot);
}

QFileOpenEvent* q_fileopenevent_qbase_clone(void* self) {
    return QFileOpenEvent_QBaseClone((QFileOpenEvent*)self);
}

const char* q_fileopenevent_file(void* self) {
    libqt_string _str = QFileOpenEvent_File((QFileOpenEvent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* q_fileopenevent_url(void* self) {
    return QFileOpenEvent_Url((QFileOpenEvent*)self);
}

bool q_fileopenevent_open_file(void* self, void* file, int64_t flags) {
    return QFileOpenEvent_OpenFile((QFileOpenEvent*)self, (QFile*)file, flags);
}

int64_t q_fileopenevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_fileopenevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_fileopenevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_fileopenevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_fileopenevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_fileopenevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_fileopenevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_fileopenevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_fileopenevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_fileopenevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_fileopenevent_set_accepted(void* self, bool accepted) {
    QFileOpenEvent_SetAccepted((QFileOpenEvent*)self, accepted);
}

void q_fileopenevent_qbase_set_accepted(void* self, bool accepted) {
    QFileOpenEvent_QBaseSetAccepted((QFileOpenEvent*)self, accepted);
}

void q_fileopenevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QFileOpenEvent_OnSetAccepted((QFileOpenEvent*)self, (intptr_t)slot);
}

void q_fileopenevent_delete(void* self) {
    QFileOpenEvent_Delete((QFileOpenEvent*)(self));
}

QToolBarChangeEvent* q_toolbarchangeevent_new(bool t) {
    return QToolBarChangeEvent_new(t);
}

QToolBarChangeEvent* q_toolbarchangeevent_clone(void* self) {
    return QToolBarChangeEvent_Clone((QToolBarChangeEvent*)self);
}

void q_toolbarchangeevent_on_clone(void* self, QToolBarChangeEvent* (*slot)()) {
    QToolBarChangeEvent_OnClone((QToolBarChangeEvent*)self, (intptr_t)slot);
}

QToolBarChangeEvent* q_toolbarchangeevent_qbase_clone(void* self) {
    return QToolBarChangeEvent_QBaseClone((QToolBarChangeEvent*)self);
}

bool q_toolbarchangeevent_toggle(void* self) {
    return QToolBarChangeEvent_Toggle((QToolBarChangeEvent*)self);
}

int64_t q_toolbarchangeevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_toolbarchangeevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_toolbarchangeevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_toolbarchangeevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_toolbarchangeevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_toolbarchangeevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_toolbarchangeevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_toolbarchangeevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_toolbarchangeevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_toolbarchangeevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_toolbarchangeevent_set_accepted(void* self, bool accepted) {
    QToolBarChangeEvent_SetAccepted((QToolBarChangeEvent*)self, accepted);
}

void q_toolbarchangeevent_qbase_set_accepted(void* self, bool accepted) {
    QToolBarChangeEvent_QBaseSetAccepted((QToolBarChangeEvent*)self, accepted);
}

void q_toolbarchangeevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QToolBarChangeEvent_OnSetAccepted((QToolBarChangeEvent*)self, (intptr_t)slot);
}

void q_toolbarchangeevent_delete(void* self) {
    QToolBarChangeEvent_Delete((QToolBarChangeEvent*)(self));
}

QShortcutEvent* q_shortcutevent_new(void* key, int id) {
    return QShortcutEvent_new((QKeySequence*)key, id);
}

QShortcutEvent* q_shortcutevent_new2(void* key, int id, bool ambiguous) {
    return QShortcutEvent_new2((QKeySequence*)key, id, ambiguous);
}

QShortcutEvent* q_shortcutevent_clone(void* self) {
    return QShortcutEvent_Clone((QShortcutEvent*)self);
}

void q_shortcutevent_on_clone(void* self, QShortcutEvent* (*slot)()) {
    QShortcutEvent_OnClone((QShortcutEvent*)self, (intptr_t)slot);
}

QShortcutEvent* q_shortcutevent_qbase_clone(void* self) {
    return QShortcutEvent_QBaseClone((QShortcutEvent*)self);
}

const QKeySequence* q_shortcutevent_key(void* self) {
    return QShortcutEvent_Key((QShortcutEvent*)self);
}

int32_t q_shortcutevent_shortcut_id(void* self) {
    return QShortcutEvent_ShortcutId((QShortcutEvent*)self);
}

bool q_shortcutevent_is_ambiguous(void* self) {
    return QShortcutEvent_IsAmbiguous((QShortcutEvent*)self);
}

int64_t q_shortcutevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_shortcutevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_shortcutevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_shortcutevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_shortcutevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_shortcutevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_shortcutevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_shortcutevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_shortcutevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_shortcutevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_shortcutevent_set_accepted(void* self, bool accepted) {
    QShortcutEvent_SetAccepted((QShortcutEvent*)self, accepted);
}

void q_shortcutevent_qbase_set_accepted(void* self, bool accepted) {
    QShortcutEvent_QBaseSetAccepted((QShortcutEvent*)self, accepted);
}

void q_shortcutevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QShortcutEvent_OnSetAccepted((QShortcutEvent*)self, (intptr_t)slot);
}

void q_shortcutevent_delete(void* self) {
    QShortcutEvent_Delete((QShortcutEvent*)(self));
}

QWindowStateChangeEvent* q_windowstatechangeevent_new(int64_t oldState) {
    return QWindowStateChangeEvent_new(oldState);
}

QWindowStateChangeEvent* q_windowstatechangeevent_new2(int64_t oldState, bool isOverride) {
    return QWindowStateChangeEvent_new2(oldState, isOverride);
}

QWindowStateChangeEvent* q_windowstatechangeevent_clone(void* self) {
    return QWindowStateChangeEvent_Clone((QWindowStateChangeEvent*)self);
}

void q_windowstatechangeevent_on_clone(void* self, QWindowStateChangeEvent* (*slot)()) {
    QWindowStateChangeEvent_OnClone((QWindowStateChangeEvent*)self, (intptr_t)slot);
}

QWindowStateChangeEvent* q_windowstatechangeevent_qbase_clone(void* self) {
    return QWindowStateChangeEvent_QBaseClone((QWindowStateChangeEvent*)self);
}

int64_t q_windowstatechangeevent_old_state(void* self) {
    return QWindowStateChangeEvent_OldState((QWindowStateChangeEvent*)self);
}

bool q_windowstatechangeevent_is_override(void* self) {
    return QWindowStateChangeEvent_IsOverride((QWindowStateChangeEvent*)self);
}

int64_t q_windowstatechangeevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_windowstatechangeevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_windowstatechangeevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_windowstatechangeevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_windowstatechangeevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_windowstatechangeevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_windowstatechangeevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_windowstatechangeevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_windowstatechangeevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_windowstatechangeevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_windowstatechangeevent_set_accepted(void* self, bool accepted) {
    QWindowStateChangeEvent_SetAccepted((QWindowStateChangeEvent*)self, accepted);
}

void q_windowstatechangeevent_qbase_set_accepted(void* self, bool accepted) {
    QWindowStateChangeEvent_QBaseSetAccepted((QWindowStateChangeEvent*)self, accepted);
}

void q_windowstatechangeevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QWindowStateChangeEvent_OnSetAccepted((QWindowStateChangeEvent*)self, (intptr_t)slot);
}

void q_windowstatechangeevent_delete(void* self) {
    QWindowStateChangeEvent_Delete((QWindowStateChangeEvent*)(self));
}

QTouchEvent* q_touchevent_new(int64_t eventType) {
    return QTouchEvent_new(eventType);
}

QTouchEvent* q_touchevent_new2(int64_t eventType, void* device, int64_t modifiers, int64_t touchPointStates) {
    return QTouchEvent_new2(eventType, (QPointingDevice*)device, modifiers, touchPointStates);
}

QTouchEvent* q_touchevent_new3(int64_t eventType, void* device) {
    return QTouchEvent_new3(eventType, (QPointingDevice*)device);
}

QTouchEvent* q_touchevent_new4(int64_t eventType, void* device, int64_t modifiers) {
    return QTouchEvent_new4(eventType, (QPointingDevice*)device, modifiers);
}

QTouchEvent* q_touchevent_new5(int64_t eventType, void* device, int64_t modifiers, libqt_list touchPoints) {
    return QTouchEvent_new5(eventType, (QPointingDevice*)device, modifiers, touchPoints);
}

QTouchEvent* q_touchevent_new6(int64_t eventType, void* device, int64_t modifiers, int64_t touchPointStates, libqt_list touchPoints) {
    return QTouchEvent_new6(eventType, (QPointingDevice*)device, modifiers, touchPointStates, touchPoints);
}

QTouchEvent* q_touchevent_clone(void* self) {
    return QTouchEvent_Clone((QTouchEvent*)self);
}

void q_touchevent_on_clone(void* self, QTouchEvent* (*slot)()) {
    QTouchEvent_OnClone((QTouchEvent*)self, (intptr_t)slot);
}

QTouchEvent* q_touchevent_qbase_clone(void* self) {
    return QTouchEvent_QBaseClone((QTouchEvent*)self);
}

QObject* q_touchevent_target(void* self) {
    return QTouchEvent_Target((QTouchEvent*)self);
}

int64_t q_touchevent_touch_point_states(void* self) {
    return QTouchEvent_TouchPointStates((QTouchEvent*)self);
}

libqt_list /* of QEventPoint* */ q_touchevent_touch_points(void* self) {
    libqt_list _arr = QTouchEvent_TouchPoints((QTouchEvent*)self);
    return _arr;
}

bool q_touchevent_is_begin_event(void* self) {
    return QTouchEvent_IsBeginEvent((QTouchEvent*)self);
}

void q_touchevent_on_is_begin_event(void* self, bool (*slot)()) {
    QTouchEvent_OnIsBeginEvent((QTouchEvent*)self, (intptr_t)slot);
}

bool q_touchevent_qbase_is_begin_event(void* self) {
    return QTouchEvent_QBaseIsBeginEvent((QTouchEvent*)self);
}

bool q_touchevent_is_update_event(void* self) {
    return QTouchEvent_IsUpdateEvent((QTouchEvent*)self);
}

void q_touchevent_on_is_update_event(void* self, bool (*slot)()) {
    QTouchEvent_OnIsUpdateEvent((QTouchEvent*)self, (intptr_t)slot);
}

bool q_touchevent_qbase_is_update_event(void* self) {
    return QTouchEvent_QBaseIsUpdateEvent((QTouchEvent*)self);
}

bool q_touchevent_is_end_event(void* self) {
    return QTouchEvent_IsEndEvent((QTouchEvent*)self);
}

void q_touchevent_on_is_end_event(void* self, bool (*slot)()) {
    QTouchEvent_OnIsEndEvent((QTouchEvent*)self, (intptr_t)slot);
}

bool q_touchevent_qbase_is_end_event(void* self) {
    return QTouchEvent_QBaseIsEndEvent((QTouchEvent*)self);
}

const QPointingDevice* q_touchevent_pointing_device(void* self) {
    return QPointerEvent_PointingDevice((QPointerEvent*)self);
}

int64_t q_touchevent_pointer_type(void* self) {
    return QPointerEvent_PointerType((QPointerEvent*)self);
}

int64_t q_touchevent_point_count(void* self) {
    return QPointerEvent_PointCount((QPointerEvent*)self);
}

QEventPoint* q_touchevent_point(void* self, int64_t i) {
    return QPointerEvent_Point((QPointerEvent*)self, i);
}

libqt_list /* of QEventPoint* */ q_touchevent_points(void* self) {
    libqt_list _arr = QPointerEvent_Points((QPointerEvent*)self);
    return _arr;
}

QEventPoint* q_touchevent_point_by_id(void* self, int id) {
    return QPointerEvent_PointById((QPointerEvent*)self, id);
}

bool q_touchevent_all_points_grabbed(void* self) {
    return QPointerEvent_AllPointsGrabbed((QPointerEvent*)self);
}

bool q_touchevent_all_points_accepted(void* self) {
    return QPointerEvent_AllPointsAccepted((QPointerEvent*)self);
}

QObject* q_touchevent_exclusive_grabber(void* self, void* point) {
    return QPointerEvent_ExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point);
}

void q_touchevent_set_exclusive_grabber(void* self, void* point, void* exclusiveGrabber) {
    QPointerEvent_SetExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)exclusiveGrabber);
}

void q_touchevent_clear_passive_grabbers(void* self, void* point) {
    QPointerEvent_ClearPassiveGrabbers((QPointerEvent*)self, (QEventPoint*)point);
}

bool q_touchevent_add_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_AddPassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

bool q_touchevent_remove_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_RemovePassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

const QInputDevice* q_touchevent_device(void* self) {
    return QInputEvent_Device((QInputEvent*)self);
}

int64_t q_touchevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

int64_t q_touchevent_modifiers(void* self) {
    return QInputEvent_Modifiers((QInputEvent*)self);
}

void q_touchevent_set_modifiers(void* self, int64_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

uint64_t q_touchevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

int64_t q_touchevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_touchevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_touchevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_touchevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_touchevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_touchevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_touchevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_touchevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_touchevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_touchevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_touchevent_set_timestamp(void* self, uint64_t timestamp) {
    QTouchEvent_SetTimestamp((QTouchEvent*)self, timestamp);
}

void q_touchevent_qbase_set_timestamp(void* self, uint64_t timestamp) {
    QTouchEvent_QBaseSetTimestamp((QTouchEvent*)self, timestamp);
}

void q_touchevent_on_set_timestamp(void* self, void (*slot)(void*, uint64_t)) {
    QTouchEvent_OnSetTimestamp((QTouchEvent*)self, (intptr_t)slot);
}

void q_touchevent_set_accepted(void* self, bool accepted) {
    QTouchEvent_SetAccepted((QTouchEvent*)self, accepted);
}

void q_touchevent_qbase_set_accepted(void* self, bool accepted) {
    QTouchEvent_QBaseSetAccepted((QTouchEvent*)self, accepted);
}

void q_touchevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QTouchEvent_OnSetAccepted((QTouchEvent*)self, (intptr_t)slot);
}

void q_touchevent_delete(void* self) {
    QTouchEvent_Delete((QTouchEvent*)(self));
}

QScrollPrepareEvent* q_scrollprepareevent_new(void* startPos) {
    return QScrollPrepareEvent_new((QPointF*)startPos);
}

QScrollPrepareEvent* q_scrollprepareevent_clone(void* self) {
    return QScrollPrepareEvent_Clone((QScrollPrepareEvent*)self);
}

void q_scrollprepareevent_on_clone(void* self, QScrollPrepareEvent* (*slot)()) {
    QScrollPrepareEvent_OnClone((QScrollPrepareEvent*)self, (intptr_t)slot);
}

QScrollPrepareEvent* q_scrollprepareevent_qbase_clone(void* self) {
    return QScrollPrepareEvent_QBaseClone((QScrollPrepareEvent*)self);
}

QPointF* q_scrollprepareevent_start_pos(void* self) {
    return QScrollPrepareEvent_StartPos((QScrollPrepareEvent*)self);
}

QSizeF* q_scrollprepareevent_viewport_size(void* self) {
    return QScrollPrepareEvent_ViewportSize((QScrollPrepareEvent*)self);
}

QRectF* q_scrollprepareevent_content_pos_range(void* self) {
    return QScrollPrepareEvent_ContentPosRange((QScrollPrepareEvent*)self);
}

QPointF* q_scrollprepareevent_content_pos(void* self) {
    return QScrollPrepareEvent_ContentPos((QScrollPrepareEvent*)self);
}

void q_scrollprepareevent_set_viewport_size(void* self, void* size) {
    QScrollPrepareEvent_SetViewportSize((QScrollPrepareEvent*)self, (QSizeF*)size);
}

void q_scrollprepareevent_set_content_pos_range(void* self, void* rect) {
    QScrollPrepareEvent_SetContentPosRange((QScrollPrepareEvent*)self, (QRectF*)rect);
}

void q_scrollprepareevent_set_content_pos(void* self, void* pos) {
    QScrollPrepareEvent_SetContentPos((QScrollPrepareEvent*)self, (QPointF*)pos);
}

int64_t q_scrollprepareevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_scrollprepareevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_scrollprepareevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_scrollprepareevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_scrollprepareevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_scrollprepareevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_scrollprepareevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_scrollprepareevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_scrollprepareevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_scrollprepareevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_scrollprepareevent_set_accepted(void* self, bool accepted) {
    QScrollPrepareEvent_SetAccepted((QScrollPrepareEvent*)self, accepted);
}

void q_scrollprepareevent_qbase_set_accepted(void* self, bool accepted) {
    QScrollPrepareEvent_QBaseSetAccepted((QScrollPrepareEvent*)self, accepted);
}

void q_scrollprepareevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QScrollPrepareEvent_OnSetAccepted((QScrollPrepareEvent*)self, (intptr_t)slot);
}

void q_scrollprepareevent_delete(void* self) {
    QScrollPrepareEvent_Delete((QScrollPrepareEvent*)(self));
}

QScrollEvent* q_scrollevent_new(void* contentPos, void* overshoot, int64_t scrollState) {
    return QScrollEvent_new((QPointF*)contentPos, (QPointF*)overshoot, scrollState);
}

QScrollEvent* q_scrollevent_clone(void* self) {
    return QScrollEvent_Clone((QScrollEvent*)self);
}

void q_scrollevent_on_clone(void* self, QScrollEvent* (*slot)()) {
    QScrollEvent_OnClone((QScrollEvent*)self, (intptr_t)slot);
}

QScrollEvent* q_scrollevent_qbase_clone(void* self) {
    return QScrollEvent_QBaseClone((QScrollEvent*)self);
}

QPointF* q_scrollevent_content_pos(void* self) {
    return QScrollEvent_ContentPos((QScrollEvent*)self);
}

QPointF* q_scrollevent_overshoot_distance(void* self) {
    return QScrollEvent_OvershootDistance((QScrollEvent*)self);
}

int64_t q_scrollevent_scroll_state(void* self) {
    return QScrollEvent_ScrollState((QScrollEvent*)self);
}

int64_t q_scrollevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_scrollevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_scrollevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_scrollevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_scrollevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_scrollevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_scrollevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_scrollevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_scrollevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_scrollevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_scrollevent_set_accepted(void* self, bool accepted) {
    QScrollEvent_SetAccepted((QScrollEvent*)self, accepted);
}

void q_scrollevent_qbase_set_accepted(void* self, bool accepted) {
    QScrollEvent_QBaseSetAccepted((QScrollEvent*)self, accepted);
}

void q_scrollevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QScrollEvent_OnSetAccepted((QScrollEvent*)self, (intptr_t)slot);
}

void q_scrollevent_delete(void* self) {
    QScrollEvent_Delete((QScrollEvent*)(self));
}

QScreenOrientationChangeEvent* q_screenorientationchangeevent_new(void* screen, int64_t orientation) {
    return QScreenOrientationChangeEvent_new((QScreen*)screen, orientation);
}

QScreenOrientationChangeEvent* q_screenorientationchangeevent_clone(void* self) {
    return QScreenOrientationChangeEvent_Clone((QScreenOrientationChangeEvent*)self);
}

void q_screenorientationchangeevent_on_clone(void* self, QScreenOrientationChangeEvent* (*slot)()) {
    QScreenOrientationChangeEvent_OnClone((QScreenOrientationChangeEvent*)self, (intptr_t)slot);
}

QScreenOrientationChangeEvent* q_screenorientationchangeevent_qbase_clone(void* self) {
    return QScreenOrientationChangeEvent_QBaseClone((QScreenOrientationChangeEvent*)self);
}

QScreen* q_screenorientationchangeevent_screen(void* self) {
    return QScreenOrientationChangeEvent_Screen((QScreenOrientationChangeEvent*)self);
}

int64_t q_screenorientationchangeevent_orientation(void* self) {
    return QScreenOrientationChangeEvent_Orientation((QScreenOrientationChangeEvent*)self);
}

int64_t q_screenorientationchangeevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_screenorientationchangeevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_screenorientationchangeevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_screenorientationchangeevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_screenorientationchangeevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_screenorientationchangeevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_screenorientationchangeevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_screenorientationchangeevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_screenorientationchangeevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_screenorientationchangeevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_screenorientationchangeevent_set_accepted(void* self, bool accepted) {
    QScreenOrientationChangeEvent_SetAccepted((QScreenOrientationChangeEvent*)self, accepted);
}

void q_screenorientationchangeevent_qbase_set_accepted(void* self, bool accepted) {
    QScreenOrientationChangeEvent_QBaseSetAccepted((QScreenOrientationChangeEvent*)self, accepted);
}

void q_screenorientationchangeevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QScreenOrientationChangeEvent_OnSetAccepted((QScreenOrientationChangeEvent*)self, (intptr_t)slot);
}

void q_screenorientationchangeevent_delete(void* self) {
    QScreenOrientationChangeEvent_Delete((QScreenOrientationChangeEvent*)(self));
}

QApplicationStateChangeEvent* q_applicationstatechangeevent_new(int64_t state) {
    return QApplicationStateChangeEvent_new(state);
}

QApplicationStateChangeEvent* q_applicationstatechangeevent_clone(void* self) {
    return QApplicationStateChangeEvent_Clone((QApplicationStateChangeEvent*)self);
}

void q_applicationstatechangeevent_on_clone(void* self, QApplicationStateChangeEvent* (*slot)()) {
    QApplicationStateChangeEvent_OnClone((QApplicationStateChangeEvent*)self, (intptr_t)slot);
}

QApplicationStateChangeEvent* q_applicationstatechangeevent_qbase_clone(void* self) {
    return QApplicationStateChangeEvent_QBaseClone((QApplicationStateChangeEvent*)self);
}

int64_t q_applicationstatechangeevent_application_state(void* self) {
    return QApplicationStateChangeEvent_ApplicationState((QApplicationStateChangeEvent*)self);
}

int64_t q_applicationstatechangeevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_applicationstatechangeevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_applicationstatechangeevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_applicationstatechangeevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_applicationstatechangeevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_applicationstatechangeevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_applicationstatechangeevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_applicationstatechangeevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_applicationstatechangeevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_applicationstatechangeevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_applicationstatechangeevent_set_accepted(void* self, bool accepted) {
    QApplicationStateChangeEvent_SetAccepted((QApplicationStateChangeEvent*)self, accepted);
}

void q_applicationstatechangeevent_qbase_set_accepted(void* self, bool accepted) {
    QApplicationStateChangeEvent_QBaseSetAccepted((QApplicationStateChangeEvent*)self, accepted);
}

void q_applicationstatechangeevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QApplicationStateChangeEvent_OnSetAccepted((QApplicationStateChangeEvent*)self, (intptr_t)slot);
}

void q_applicationstatechangeevent_delete(void* self) {
    QApplicationStateChangeEvent_Delete((QApplicationStateChangeEvent*)(self));
}

QInputMethodEvent__Attribute* q_inputmethodevent__attribute_new(int64_t typ, int s, int l, void* val) {
    return QInputMethodEvent__Attribute_new(typ, s, l, (QVariant*)val);
}

QInputMethodEvent__Attribute* q_inputmethodevent__attribute_new2(int64_t typ, int s, int l) {
    return QInputMethodEvent__Attribute_new2(typ, s, l);
}

QInputMethodEvent__Attribute* q_inputmethodevent__attribute_new3(void* param1) {
    return QInputMethodEvent__Attribute_new3((QInputMethodEvent__Attribute*)param1);
}

void q_inputmethodevent__attribute_operator_assign(void* self, void* param1) {
    QInputMethodEvent__Attribute_OperatorAssign((QInputMethodEvent__Attribute*)self, (QInputMethodEvent__Attribute*)param1);
}

void q_inputmethodevent__attribute_delete(void* self) {
    QInputMethodEvent__Attribute_Delete((QInputMethodEvent__Attribute*)(self));
}
