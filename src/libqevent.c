#include "libqaction.hpp"
#include "libqcoreevent.hpp"
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
#include "libqshortcut.hpp"
#include "libqsize.hpp"
#include "libqurl.hpp"
#include "libqvariant.hpp"
#include "libqwindow.hpp"
#include "libqevent.hpp"
#include "libqevent.h"

QInputEvent* q_inputevent_new(int32_t type, void* m_dev) {
    return QInputEvent_new(type, (QInputDevice*)m_dev);
}

QInputEvent* q_inputevent_new2(int32_t type, void* m_dev, int32_t modifiers) {
    return QInputEvent_new2(type, (QInputDevice*)m_dev, modifiers);
}

QInputEvent* q_inputevent_clone(void* self) {
    return QInputEvent_Clone((QInputEvent*)self);
}

void q_inputevent_on_clone(void* self, QInputEvent* (*callback)()) {
    QInputEvent_OnClone((QInputEvent*)self, (intptr_t)callback);
}

QInputEvent* q_inputevent_super_clone(void* self) {
    return QInputEvent_SuperClone((QInputEvent*)self);
}

const QInputDevice* q_inputevent_device(void* self) {
    return QInputEvent_Device((QInputEvent*)self);
}

int32_t q_inputevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

int32_t q_inputevent_modifiers(void* self) {
    return QInputEvent_Modifiers((QInputEvent*)self);
}

void q_inputevent_set_modifiers(void* self, int32_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

uint64_t q_inputevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

void q_inputevent_set_timestamp(void* self, uint64_t timestamp) {
    QInputEvent_SetTimestamp((QInputEvent*)self, timestamp);
}

void q_inputevent_on_set_timestamp(void* self, void (*callback)(void*, uint64_t)) {
    QInputEvent_OnSetTimestamp((QInputEvent*)self, (intptr_t)callback);
}

void q_inputevent_super_set_timestamp(void* self, uint64_t timestamp) {
    QInputEvent_SuperSetTimestamp((QInputEvent*)self, timestamp);
}

int32_t q_inputevent_type(void* self) {
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

void q_inputevent_super_set_accepted(void* self, bool accepted) {
    QInputEvent_SuperSetAccepted((QInputEvent*)self, accepted);
}

void q_inputevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QInputEvent_OnSetAccepted((QInputEvent*)self, (intptr_t)callback);
}

void q_inputevent_delete(void* self) {
    QInputEvent_Delete((QInputEvent*)(self));
}

QPointerEvent* q_pointerevent_new(int32_t type, void* dev) {
    return QPointerEvent_new(type, (QPointingDevice*)dev);
}

QPointerEvent* q_pointerevent_new2(int32_t type, void* dev, int32_t modifiers) {
    return QPointerEvent_new2(type, (QPointingDevice*)dev, modifiers);
}

QPointerEvent* q_pointerevent_new3(int32_t type, void* dev, int32_t modifiers, libqt_list /* of QEventPoint* */ points) {
    return QPointerEvent_new3(type, (QPointingDevice*)dev, modifiers, points);
}

QPointerEvent* q_pointerevent_clone(void* self) {
    return QPointerEvent_Clone((QPointerEvent*)self);
}

void q_pointerevent_on_clone(void* self, QPointerEvent* (*callback)()) {
    QPointerEvent_OnClone((QPointerEvent*)self, (intptr_t)callback);
}

QPointerEvent* q_pointerevent_super_clone(void* self) {
    return QPointerEvent_SuperClone((QPointerEvent*)self);
}

const QPointingDevice* q_pointerevent_pointing_device(void* self) {
    return QPointerEvent_PointingDevice((QPointerEvent*)self);
}

int32_t q_pointerevent_pointer_type(void* self) {
    return QPointerEvent_PointerType((QPointerEvent*)self);
}

void q_pointerevent_set_timestamp(void* self, uint64_t timestamp) {
    QPointerEvent_SetTimestamp((QPointerEvent*)self, timestamp);
}

void q_pointerevent_on_set_timestamp(void* self, void (*callback)(void*, uint64_t)) {
    QPointerEvent_OnSetTimestamp((QPointerEvent*)self, (intptr_t)callback);
}

void q_pointerevent_super_set_timestamp(void* self, uint64_t timestamp) {
    QPointerEvent_SuperSetTimestamp((QPointerEvent*)self, timestamp);
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

void q_pointerevent_on_is_begin_event(void* self, bool (*callback)()) {
    QPointerEvent_OnIsBeginEvent((QPointerEvent*)self, (intptr_t)callback);
}

bool q_pointerevent_super_is_begin_event(void* self) {
    return QPointerEvent_SuperIsBeginEvent((QPointerEvent*)self);
}

bool q_pointerevent_is_update_event(void* self) {
    return QPointerEvent_IsUpdateEvent((QPointerEvent*)self);
}

void q_pointerevent_on_is_update_event(void* self, bool (*callback)()) {
    QPointerEvent_OnIsUpdateEvent((QPointerEvent*)self, (intptr_t)callback);
}

bool q_pointerevent_super_is_update_event(void* self) {
    return QPointerEvent_SuperIsUpdateEvent((QPointerEvent*)self);
}

bool q_pointerevent_is_end_event(void* self) {
    return QPointerEvent_IsEndEvent((QPointerEvent*)self);
}

void q_pointerevent_on_is_end_event(void* self, bool (*callback)()) {
    QPointerEvent_OnIsEndEvent((QPointerEvent*)self, (intptr_t)callback);
}

bool q_pointerevent_super_is_end_event(void* self) {
    return QPointerEvent_SuperIsEndEvent((QPointerEvent*)self);
}

bool q_pointerevent_all_points_accepted(void* self) {
    return QPointerEvent_AllPointsAccepted((QPointerEvent*)self);
}

void q_pointerevent_set_accepted(void* self, bool accepted) {
    QPointerEvent_SetAccepted((QPointerEvent*)self, accepted);
}

void q_pointerevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QPointerEvent_OnSetAccepted((QPointerEvent*)self, (intptr_t)callback);
}

void q_pointerevent_super_set_accepted(void* self, bool accepted) {
    QPointerEvent_SuperSetAccepted((QPointerEvent*)self, accepted);
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

int32_t q_pointerevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

int32_t q_pointerevent_modifiers(void* self) {
    return QInputEvent_Modifiers((QInputEvent*)self);
}

void q_pointerevent_set_modifiers(void* self, int32_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

uint64_t q_pointerevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

int32_t q_pointerevent_type(void* self) {
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

int32_t q_singlepointevent_button(void* self) {
    return QSinglePointEvent_Button((QSinglePointEvent*)self);
}

int32_t q_singlepointevent_buttons(void* self) {
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

int32_t q_singlepointevent_pointer_type(void* self) {
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

int32_t q_singlepointevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

int32_t q_singlepointevent_modifiers(void* self) {
    return QInputEvent_Modifiers((QInputEvent*)self);
}

void q_singlepointevent_set_modifiers(void* self, int32_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

uint64_t q_singlepointevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

int32_t q_singlepointevent_type(void* self) {
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

void q_enterevent_on_clone(void* self, QEnterEvent* (*callback)()) {
    QEnterEvent_OnClone((QEnterEvent*)self, (intptr_t)callback);
}

QEnterEvent* q_enterevent_super_clone(void* self) {
    return QEnterEvent_SuperClone((QEnterEvent*)self);
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

int32_t q_enterevent_button(void* self) {
    return QSinglePointEvent_Button((QSinglePointEvent*)self);
}

int32_t q_enterevent_buttons(void* self) {
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

int32_t q_enterevent_pointer_type(void* self) {
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

int32_t q_enterevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

int32_t q_enterevent_modifiers(void* self) {
    return QInputEvent_Modifiers((QInputEvent*)self);
}

void q_enterevent_set_modifiers(void* self, int32_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

uint64_t q_enterevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

int32_t q_enterevent_type(void* self) {
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

bool q_enterevent_super_is_begin_event(void* self) {
    return QEnterEvent_SuperIsBeginEvent((QEnterEvent*)self);
}

void q_enterevent_on_is_begin_event(void* self, bool (*callback)()) {
    QEnterEvent_OnIsBeginEvent((QEnterEvent*)self, (intptr_t)callback);
}

bool q_enterevent_is_update_event(void* self) {
    return QEnterEvent_IsUpdateEvent((QEnterEvent*)self);
}

bool q_enterevent_super_is_update_event(void* self) {
    return QEnterEvent_SuperIsUpdateEvent((QEnterEvent*)self);
}

void q_enterevent_on_is_update_event(void* self, bool (*callback)()) {
    QEnterEvent_OnIsUpdateEvent((QEnterEvent*)self, (intptr_t)callback);
}

bool q_enterevent_is_end_event(void* self) {
    return QEnterEvent_IsEndEvent((QEnterEvent*)self);
}

bool q_enterevent_super_is_end_event(void* self) {
    return QEnterEvent_SuperIsEndEvent((QEnterEvent*)self);
}

void q_enterevent_on_is_end_event(void* self, bool (*callback)()) {
    QEnterEvent_OnIsEndEvent((QEnterEvent*)self, (intptr_t)callback);
}

void q_enterevent_set_timestamp(void* self, uint64_t timestamp) {
    QEnterEvent_SetTimestamp((QEnterEvent*)self, timestamp);
}

void q_enterevent_super_set_timestamp(void* self, uint64_t timestamp) {
    QEnterEvent_SuperSetTimestamp((QEnterEvent*)self, timestamp);
}

void q_enterevent_on_set_timestamp(void* self, void (*callback)(void*, uint64_t)) {
    QEnterEvent_OnSetTimestamp((QEnterEvent*)self, (intptr_t)callback);
}

void q_enterevent_set_accepted(void* self, bool accepted) {
    QEnterEvent_SetAccepted((QEnterEvent*)self, accepted);
}

void q_enterevent_super_set_accepted(void* self, bool accepted) {
    QEnterEvent_SuperSetAccepted((QEnterEvent*)self, accepted);
}

void q_enterevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QEnterEvent_OnSetAccepted((QEnterEvent*)self, (intptr_t)callback);
}

void q_enterevent_delete(void* self) {
    QEnterEvent_Delete((QEnterEvent*)(self));
}

QMouseEvent* q_mouseevent_new(int32_t type, void* localPos, int32_t button, int32_t buttons, int32_t modifiers) {
    return QMouseEvent_new(type, (QPointF*)localPos, button, buttons, modifiers);
}

QMouseEvent* q_mouseevent_new2(int32_t type, void* localPos, void* globalPos, int32_t button, int32_t buttons, int32_t modifiers) {
    return QMouseEvent_new2(type, (QPointF*)localPos, (QPointF*)globalPos, button, buttons, modifiers);
}

QMouseEvent* q_mouseevent_new3(int32_t type, void* localPos, void* scenePos, void* globalPos, int32_t button, int32_t buttons, int32_t modifiers) {
    return QMouseEvent_new3(type, (QPointF*)localPos, (QPointF*)scenePos, (QPointF*)globalPos, button, buttons, modifiers);
}

QMouseEvent* q_mouseevent_new4(int32_t type, void* localPos, void* scenePos, void* globalPos, int32_t button, int32_t buttons, int32_t modifiers, int32_t source) {
    return QMouseEvent_new4(type, (QPointF*)localPos, (QPointF*)scenePos, (QPointF*)globalPos, button, buttons, modifiers, source);
}

QMouseEvent* q_mouseevent_new5(int32_t type, void* localPos, int32_t button, int32_t buttons, int32_t modifiers, void* device) {
    return QMouseEvent_new5(type, (QPointF*)localPos, button, buttons, modifiers, (QPointingDevice*)device);
}

QMouseEvent* q_mouseevent_new6(int32_t type, void* localPos, void* globalPos, int32_t button, int32_t buttons, int32_t modifiers, void* device) {
    return QMouseEvent_new6(type, (QPointF*)localPos, (QPointF*)globalPos, button, buttons, modifiers, (QPointingDevice*)device);
}

QMouseEvent* q_mouseevent_new7(int32_t type, void* localPos, void* scenePos, void* globalPos, int32_t button, int32_t buttons, int32_t modifiers, void* device) {
    return QMouseEvent_new7(type, (QPointF*)localPos, (QPointF*)scenePos, (QPointF*)globalPos, button, buttons, modifiers, (QPointingDevice*)device);
}

QMouseEvent* q_mouseevent_new8(int32_t type, void* localPos, void* scenePos, void* globalPos, int32_t button, int32_t buttons, int32_t modifiers, int32_t source, void* device) {
    return QMouseEvent_new8(type, (QPointF*)localPos, (QPointF*)scenePos, (QPointF*)globalPos, button, buttons, modifiers, source, (QPointingDevice*)device);
}

QMouseEvent* q_mouseevent_clone(void* self) {
    return QMouseEvent_Clone((QMouseEvent*)self);
}

void q_mouseevent_on_clone(void* self, QMouseEvent* (*callback)()) {
    QMouseEvent_OnClone((QMouseEvent*)self, (intptr_t)callback);
}

QMouseEvent* q_mouseevent_super_clone(void* self) {
    return QMouseEvent_SuperClone((QMouseEvent*)self);
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

int32_t q_mouseevent_source(void* self) {
    return QMouseEvent_Source((QMouseEvent*)self);
}

int32_t q_mouseevent_flags(void* self) {
    return QMouseEvent_Flags((QMouseEvent*)self);
}

int32_t q_mouseevent_button(void* self) {
    return QSinglePointEvent_Button((QSinglePointEvent*)self);
}

int32_t q_mouseevent_buttons(void* self) {
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

int32_t q_mouseevent_pointer_type(void* self) {
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

int32_t q_mouseevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

int32_t q_mouseevent_modifiers(void* self) {
    return QInputEvent_Modifiers((QInputEvent*)self);
}

void q_mouseevent_set_modifiers(void* self, int32_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

uint64_t q_mouseevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

int32_t q_mouseevent_type(void* self) {
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

bool q_mouseevent_super_is_begin_event(void* self) {
    return QMouseEvent_SuperIsBeginEvent((QMouseEvent*)self);
}

void q_mouseevent_on_is_begin_event(void* self, bool (*callback)()) {
    QMouseEvent_OnIsBeginEvent((QMouseEvent*)self, (intptr_t)callback);
}

bool q_mouseevent_is_update_event(void* self) {
    return QMouseEvent_IsUpdateEvent((QMouseEvent*)self);
}

bool q_mouseevent_super_is_update_event(void* self) {
    return QMouseEvent_SuperIsUpdateEvent((QMouseEvent*)self);
}

void q_mouseevent_on_is_update_event(void* self, bool (*callback)()) {
    QMouseEvent_OnIsUpdateEvent((QMouseEvent*)self, (intptr_t)callback);
}

bool q_mouseevent_is_end_event(void* self) {
    return QMouseEvent_IsEndEvent((QMouseEvent*)self);
}

bool q_mouseevent_super_is_end_event(void* self) {
    return QMouseEvent_SuperIsEndEvent((QMouseEvent*)self);
}

void q_mouseevent_on_is_end_event(void* self, bool (*callback)()) {
    QMouseEvent_OnIsEndEvent((QMouseEvent*)self, (intptr_t)callback);
}

void q_mouseevent_set_timestamp(void* self, uint64_t timestamp) {
    QMouseEvent_SetTimestamp((QMouseEvent*)self, timestamp);
}

void q_mouseevent_super_set_timestamp(void* self, uint64_t timestamp) {
    QMouseEvent_SuperSetTimestamp((QMouseEvent*)self, timestamp);
}

void q_mouseevent_on_set_timestamp(void* self, void (*callback)(void*, uint64_t)) {
    QMouseEvent_OnSetTimestamp((QMouseEvent*)self, (intptr_t)callback);
}

void q_mouseevent_set_accepted(void* self, bool accepted) {
    QMouseEvent_SetAccepted((QMouseEvent*)self, accepted);
}

void q_mouseevent_super_set_accepted(void* self, bool accepted) {
    QMouseEvent_SuperSetAccepted((QMouseEvent*)self, accepted);
}

void q_mouseevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QMouseEvent_OnSetAccepted((QMouseEvent*)self, (intptr_t)callback);
}

void q_mouseevent_delete(void* self) {
    QMouseEvent_Delete((QMouseEvent*)(self));
}

QHoverEvent* q_hoverevent_new(int32_t type, void* scenePos, void* globalPos, void* oldPos) {
    return QHoverEvent_new(type, (QPointF*)scenePos, (QPointF*)globalPos, (QPointF*)oldPos);
}

QHoverEvent* q_hoverevent_new2(int32_t type, void* pos, void* oldPos) {
    return QHoverEvent_new2(type, (QPointF*)pos, (QPointF*)oldPos);
}

QHoverEvent* q_hoverevent_new3(int32_t type, void* scenePos, void* globalPos, void* oldPos, int32_t modifiers) {
    return QHoverEvent_new3(type, (QPointF*)scenePos, (QPointF*)globalPos, (QPointF*)oldPos, modifiers);
}

QHoverEvent* q_hoverevent_new4(int32_t type, void* scenePos, void* globalPos, void* oldPos, int32_t modifiers, void* device) {
    return QHoverEvent_new4(type, (QPointF*)scenePos, (QPointF*)globalPos, (QPointF*)oldPos, modifiers, (QPointingDevice*)device);
}

QHoverEvent* q_hoverevent_new5(int32_t type, void* pos, void* oldPos, int32_t modifiers) {
    return QHoverEvent_new5(type, (QPointF*)pos, (QPointF*)oldPos, modifiers);
}

QHoverEvent* q_hoverevent_new6(int32_t type, void* pos, void* oldPos, int32_t modifiers, void* device) {
    return QHoverEvent_new6(type, (QPointF*)pos, (QPointF*)oldPos, modifiers, (QPointingDevice*)device);
}

QHoverEvent* q_hoverevent_clone(void* self) {
    return QHoverEvent_Clone((QHoverEvent*)self);
}

void q_hoverevent_on_clone(void* self, QHoverEvent* (*callback)()) {
    QHoverEvent_OnClone((QHoverEvent*)self, (intptr_t)callback);
}

QHoverEvent* q_hoverevent_super_clone(void* self) {
    return QHoverEvent_SuperClone((QHoverEvent*)self);
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

void q_hoverevent_on_is_update_event(void* self, bool (*callback)()) {
    QHoverEvent_OnIsUpdateEvent((QHoverEvent*)self, (intptr_t)callback);
}

bool q_hoverevent_super_is_update_event(void* self) {
    return QHoverEvent_SuperIsUpdateEvent((QHoverEvent*)self);
}

QPoint* q_hoverevent_old_pos(void* self) {
    return QHoverEvent_OldPos((QHoverEvent*)self);
}

QPointF* q_hoverevent_old_pos_f(void* self) {
    return QHoverEvent_OldPosF((QHoverEvent*)self);
}

int32_t q_hoverevent_button(void* self) {
    return QSinglePointEvent_Button((QSinglePointEvent*)self);
}

int32_t q_hoverevent_buttons(void* self) {
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

int32_t q_hoverevent_pointer_type(void* self) {
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

int32_t q_hoverevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

int32_t q_hoverevent_modifiers(void* self) {
    return QInputEvent_Modifiers((QInputEvent*)self);
}

void q_hoverevent_set_modifiers(void* self, int32_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

uint64_t q_hoverevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

int32_t q_hoverevent_type(void* self) {
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

bool q_hoverevent_super_is_begin_event(void* self) {
    return QHoverEvent_SuperIsBeginEvent((QHoverEvent*)self);
}

void q_hoverevent_on_is_begin_event(void* self, bool (*callback)()) {
    QHoverEvent_OnIsBeginEvent((QHoverEvent*)self, (intptr_t)callback);
}

bool q_hoverevent_is_end_event(void* self) {
    return QHoverEvent_IsEndEvent((QHoverEvent*)self);
}

bool q_hoverevent_super_is_end_event(void* self) {
    return QHoverEvent_SuperIsEndEvent((QHoverEvent*)self);
}

void q_hoverevent_on_is_end_event(void* self, bool (*callback)()) {
    QHoverEvent_OnIsEndEvent((QHoverEvent*)self, (intptr_t)callback);
}

void q_hoverevent_set_timestamp(void* self, uint64_t timestamp) {
    QHoverEvent_SetTimestamp((QHoverEvent*)self, timestamp);
}

void q_hoverevent_super_set_timestamp(void* self, uint64_t timestamp) {
    QHoverEvent_SuperSetTimestamp((QHoverEvent*)self, timestamp);
}

void q_hoverevent_on_set_timestamp(void* self, void (*callback)(void*, uint64_t)) {
    QHoverEvent_OnSetTimestamp((QHoverEvent*)self, (intptr_t)callback);
}

void q_hoverevent_set_accepted(void* self, bool accepted) {
    QHoverEvent_SetAccepted((QHoverEvent*)self, accepted);
}

void q_hoverevent_super_set_accepted(void* self, bool accepted) {
    QHoverEvent_SuperSetAccepted((QHoverEvent*)self, accepted);
}

void q_hoverevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QHoverEvent_OnSetAccepted((QHoverEvent*)self, (intptr_t)callback);
}

void q_hoverevent_delete(void* self) {
    QHoverEvent_Delete((QHoverEvent*)(self));
}

QWheelEvent* q_wheelevent_new(void* pos, void* globalPos, void* pixelDelta, void* angleDelta, int32_t buttons, int32_t modifiers, int32_t phase, bool inverted) {
    return QWheelEvent_new((QPointF*)pos, (QPointF*)globalPos, (QPoint*)pixelDelta, (QPoint*)angleDelta, buttons, modifiers, phase, inverted);
}

QWheelEvent* q_wheelevent_new2(void* pos, void* globalPos, void* pixelDelta, void* angleDelta, int32_t buttons, int32_t modifiers, int32_t phase, bool inverted, int32_t source) {
    return QWheelEvent_new2((QPointF*)pos, (QPointF*)globalPos, (QPoint*)pixelDelta, (QPoint*)angleDelta, buttons, modifiers, phase, inverted, source);
}

QWheelEvent* q_wheelevent_new3(void* pos, void* globalPos, void* pixelDelta, void* angleDelta, int32_t buttons, int32_t modifiers, int32_t phase, bool inverted, int32_t source, void* device) {
    return QWheelEvent_new3((QPointF*)pos, (QPointF*)globalPos, (QPoint*)pixelDelta, (QPoint*)angleDelta, buttons, modifiers, phase, inverted, source, (QPointingDevice*)device);
}

QWheelEvent* q_wheelevent_clone(void* self) {
    return QWheelEvent_Clone((QWheelEvent*)self);
}

void q_wheelevent_on_clone(void* self, QWheelEvent* (*callback)()) {
    QWheelEvent_OnClone((QWheelEvent*)self, (intptr_t)callback);
}

QWheelEvent* q_wheelevent_super_clone(void* self) {
    return QWheelEvent_SuperClone((QWheelEvent*)self);
}

QPoint* q_wheelevent_pixel_delta(void* self) {
    return QWheelEvent_PixelDelta((QWheelEvent*)self);
}

QPoint* q_wheelevent_angle_delta(void* self) {
    return QWheelEvent_AngleDelta((QWheelEvent*)self);
}

int32_t q_wheelevent_phase(void* self) {
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

void q_wheelevent_on_is_begin_event(void* self, bool (*callback)()) {
    QWheelEvent_OnIsBeginEvent((QWheelEvent*)self, (intptr_t)callback);
}

bool q_wheelevent_super_is_begin_event(void* self) {
    return QWheelEvent_SuperIsBeginEvent((QWheelEvent*)self);
}

bool q_wheelevent_is_update_event(void* self) {
    return QWheelEvent_IsUpdateEvent((QWheelEvent*)self);
}

void q_wheelevent_on_is_update_event(void* self, bool (*callback)()) {
    QWheelEvent_OnIsUpdateEvent((QWheelEvent*)self, (intptr_t)callback);
}

bool q_wheelevent_super_is_update_event(void* self) {
    return QWheelEvent_SuperIsUpdateEvent((QWheelEvent*)self);
}

bool q_wheelevent_is_end_event(void* self) {
    return QWheelEvent_IsEndEvent((QWheelEvent*)self);
}

void q_wheelevent_on_is_end_event(void* self, bool (*callback)()) {
    QWheelEvent_OnIsEndEvent((QWheelEvent*)self, (intptr_t)callback);
}

bool q_wheelevent_super_is_end_event(void* self) {
    return QWheelEvent_SuperIsEndEvent((QWheelEvent*)self);
}

int32_t q_wheelevent_source(void* self) {
    return QWheelEvent_Source((QWheelEvent*)self);
}

int32_t q_wheelevent_button(void* self) {
    return QSinglePointEvent_Button((QSinglePointEvent*)self);
}

int32_t q_wheelevent_buttons(void* self) {
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

int32_t q_wheelevent_pointer_type(void* self) {
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

int32_t q_wheelevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

int32_t q_wheelevent_modifiers(void* self) {
    return QInputEvent_Modifiers((QInputEvent*)self);
}

void q_wheelevent_set_modifiers(void* self, int32_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

uint64_t q_wheelevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

int32_t q_wheelevent_type(void* self) {
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

void q_wheelevent_super_set_timestamp(void* self, uint64_t timestamp) {
    QWheelEvent_SuperSetTimestamp((QWheelEvent*)self, timestamp);
}

void q_wheelevent_on_set_timestamp(void* self, void (*callback)(void*, uint64_t)) {
    QWheelEvent_OnSetTimestamp((QWheelEvent*)self, (intptr_t)callback);
}

void q_wheelevent_set_accepted(void* self, bool accepted) {
    QWheelEvent_SetAccepted((QWheelEvent*)self, accepted);
}

void q_wheelevent_super_set_accepted(void* self, bool accepted) {
    QWheelEvent_SuperSetAccepted((QWheelEvent*)self, accepted);
}

void q_wheelevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QWheelEvent_OnSetAccepted((QWheelEvent*)self, (intptr_t)callback);
}

void q_wheelevent_delete(void* self) {
    QWheelEvent_Delete((QWheelEvent*)(self));
}

QTabletEvent* q_tabletevent_new(int32_t t, void* device, void* pos, void* globalPos, double pressure, float xTilt, float yTilt, float tangentialPressure, double rotation, float z, int32_t keyState, int32_t button, int32_t buttons) {
    return QTabletEvent_new(t, (QPointingDevice*)device, (QPointF*)pos, (QPointF*)globalPos, pressure, xTilt, yTilt, tangentialPressure, rotation, z, keyState, button, buttons);
}

QTabletEvent* q_tabletevent_clone(void* self) {
    return QTabletEvent_Clone((QTabletEvent*)self);
}

void q_tabletevent_on_clone(void* self, QTabletEvent* (*callback)()) {
    QTabletEvent_OnClone((QTabletEvent*)self, (intptr_t)callback);
}

QTabletEvent* q_tabletevent_super_clone(void* self) {
    return QTabletEvent_SuperClone((QTabletEvent*)self);
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

int32_t q_tabletevent_button(void* self) {
    return QSinglePointEvent_Button((QSinglePointEvent*)self);
}

int32_t q_tabletevent_buttons(void* self) {
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

int32_t q_tabletevent_pointer_type(void* self) {
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

int32_t q_tabletevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

int32_t q_tabletevent_modifiers(void* self) {
    return QInputEvent_Modifiers((QInputEvent*)self);
}

void q_tabletevent_set_modifiers(void* self, int32_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

uint64_t q_tabletevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

int32_t q_tabletevent_type(void* self) {
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

bool q_tabletevent_super_is_begin_event(void* self) {
    return QTabletEvent_SuperIsBeginEvent((QTabletEvent*)self);
}

void q_tabletevent_on_is_begin_event(void* self, bool (*callback)()) {
    QTabletEvent_OnIsBeginEvent((QTabletEvent*)self, (intptr_t)callback);
}

bool q_tabletevent_is_update_event(void* self) {
    return QTabletEvent_IsUpdateEvent((QTabletEvent*)self);
}

bool q_tabletevent_super_is_update_event(void* self) {
    return QTabletEvent_SuperIsUpdateEvent((QTabletEvent*)self);
}

void q_tabletevent_on_is_update_event(void* self, bool (*callback)()) {
    QTabletEvent_OnIsUpdateEvent((QTabletEvent*)self, (intptr_t)callback);
}

bool q_tabletevent_is_end_event(void* self) {
    return QTabletEvent_IsEndEvent((QTabletEvent*)self);
}

bool q_tabletevent_super_is_end_event(void* self) {
    return QTabletEvent_SuperIsEndEvent((QTabletEvent*)self);
}

void q_tabletevent_on_is_end_event(void* self, bool (*callback)()) {
    QTabletEvent_OnIsEndEvent((QTabletEvent*)self, (intptr_t)callback);
}

void q_tabletevent_set_timestamp(void* self, uint64_t timestamp) {
    QTabletEvent_SetTimestamp((QTabletEvent*)self, timestamp);
}

void q_tabletevent_super_set_timestamp(void* self, uint64_t timestamp) {
    QTabletEvent_SuperSetTimestamp((QTabletEvent*)self, timestamp);
}

void q_tabletevent_on_set_timestamp(void* self, void (*callback)(void*, uint64_t)) {
    QTabletEvent_OnSetTimestamp((QTabletEvent*)self, (intptr_t)callback);
}

void q_tabletevent_set_accepted(void* self, bool accepted) {
    QTabletEvent_SetAccepted((QTabletEvent*)self, accepted);
}

void q_tabletevent_super_set_accepted(void* self, bool accepted) {
    QTabletEvent_SuperSetAccepted((QTabletEvent*)self, accepted);
}

void q_tabletevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QTabletEvent_OnSetAccepted((QTabletEvent*)self, (intptr_t)callback);
}

void q_tabletevent_delete(void* self) {
    QTabletEvent_Delete((QTabletEvent*)(self));
}

QNativeGestureEvent* q_nativegestureevent_new(int32_t type, void* dev, void* localPos, void* scenePos, void* globalPos, double value, uint64_t sequenceId, uint64_t intArgument) {
    return QNativeGestureEvent_new(type, (QPointingDevice*)dev, (QPointF*)localPos, (QPointF*)scenePos, (QPointF*)globalPos, value, sequenceId, intArgument);
}

QNativeGestureEvent* q_nativegestureevent_new2(int32_t type, void* dev, int fingerCount, void* localPos, void* scenePos, void* globalPos, double value, void* delta) {
    return QNativeGestureEvent_new2(type, (QPointingDevice*)dev, fingerCount, (QPointF*)localPos, (QPointF*)scenePos, (QPointF*)globalPos, value, (QPointF*)delta);
}

QNativeGestureEvent* q_nativegestureevent_new3(int32_t type, void* dev, int fingerCount, void* localPos, void* scenePos, void* globalPos, double value, void* delta, uint64_t sequenceId) {
    return QNativeGestureEvent_new3(type, (QPointingDevice*)dev, fingerCount, (QPointF*)localPos, (QPointF*)scenePos, (QPointF*)globalPos, value, (QPointF*)delta, sequenceId);
}

QNativeGestureEvent* q_nativegestureevent_clone(void* self) {
    return QNativeGestureEvent_Clone((QNativeGestureEvent*)self);
}

void q_nativegestureevent_on_clone(void* self, QNativeGestureEvent* (*callback)()) {
    QNativeGestureEvent_OnClone((QNativeGestureEvent*)self, (intptr_t)callback);
}

QNativeGestureEvent* q_nativegestureevent_super_clone(void* self) {
    return QNativeGestureEvent_SuperClone((QNativeGestureEvent*)self);
}

int32_t q_nativegestureevent_gesture_type(void* self) {
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

int32_t q_nativegestureevent_button(void* self) {
    return QSinglePointEvent_Button((QSinglePointEvent*)self);
}

int32_t q_nativegestureevent_buttons(void* self) {
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

int32_t q_nativegestureevent_pointer_type(void* self) {
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

int32_t q_nativegestureevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

int32_t q_nativegestureevent_modifiers(void* self) {
    return QInputEvent_Modifiers((QInputEvent*)self);
}

void q_nativegestureevent_set_modifiers(void* self, int32_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

uint64_t q_nativegestureevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

int32_t q_nativegestureevent_type(void* self) {
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

bool q_nativegestureevent_super_is_begin_event(void* self) {
    return QNativeGestureEvent_SuperIsBeginEvent((QNativeGestureEvent*)self);
}

void q_nativegestureevent_on_is_begin_event(void* self, bool (*callback)()) {
    QNativeGestureEvent_OnIsBeginEvent((QNativeGestureEvent*)self, (intptr_t)callback);
}

bool q_nativegestureevent_is_update_event(void* self) {
    return QNativeGestureEvent_IsUpdateEvent((QNativeGestureEvent*)self);
}

bool q_nativegestureevent_super_is_update_event(void* self) {
    return QNativeGestureEvent_SuperIsUpdateEvent((QNativeGestureEvent*)self);
}

void q_nativegestureevent_on_is_update_event(void* self, bool (*callback)()) {
    QNativeGestureEvent_OnIsUpdateEvent((QNativeGestureEvent*)self, (intptr_t)callback);
}

bool q_nativegestureevent_is_end_event(void* self) {
    return QNativeGestureEvent_IsEndEvent((QNativeGestureEvent*)self);
}

bool q_nativegestureevent_super_is_end_event(void* self) {
    return QNativeGestureEvent_SuperIsEndEvent((QNativeGestureEvent*)self);
}

void q_nativegestureevent_on_is_end_event(void* self, bool (*callback)()) {
    QNativeGestureEvent_OnIsEndEvent((QNativeGestureEvent*)self, (intptr_t)callback);
}

void q_nativegestureevent_set_timestamp(void* self, uint64_t timestamp) {
    QNativeGestureEvent_SetTimestamp((QNativeGestureEvent*)self, timestamp);
}

void q_nativegestureevent_super_set_timestamp(void* self, uint64_t timestamp) {
    QNativeGestureEvent_SuperSetTimestamp((QNativeGestureEvent*)self, timestamp);
}

void q_nativegestureevent_on_set_timestamp(void* self, void (*callback)(void*, uint64_t)) {
    QNativeGestureEvent_OnSetTimestamp((QNativeGestureEvent*)self, (intptr_t)callback);
}

void q_nativegestureevent_set_accepted(void* self, bool accepted) {
    QNativeGestureEvent_SetAccepted((QNativeGestureEvent*)self, accepted);
}

void q_nativegestureevent_super_set_accepted(void* self, bool accepted) {
    QNativeGestureEvent_SuperSetAccepted((QNativeGestureEvent*)self, accepted);
}

void q_nativegestureevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QNativeGestureEvent_OnSetAccepted((QNativeGestureEvent*)self, (intptr_t)callback);
}

void q_nativegestureevent_delete(void* self) {
    QNativeGestureEvent_Delete((QNativeGestureEvent*)(self));
}

QKeyEvent* q_keyevent_new(int32_t type, int key, int32_t modifiers) {
    return QKeyEvent_new(type, key, modifiers);
}

QKeyEvent* q_keyevent_new2(int32_t type, int key, int32_t modifiers, uint32_t nativeScanCode, uint32_t nativeVirtualKey, uint32_t nativeModifiers) {
    return QKeyEvent_new2(type, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers);
}

QKeyEvent* q_keyevent_new3(int32_t type, int key, int32_t modifiers, const char* text) {
    return QKeyEvent_new3(type, key, modifiers, qstring(text));
}

QKeyEvent* q_keyevent_new4(int32_t type, int key, int32_t modifiers, const char* text, bool autorep) {
    return QKeyEvent_new4(type, key, modifiers, qstring(text), autorep);
}

QKeyEvent* q_keyevent_new5(int32_t type, int key, int32_t modifiers, const char* text, bool autorep, unsigned short count) {
    return QKeyEvent_new5(type, key, modifiers, qstring(text), autorep, count);
}

QKeyEvent* q_keyevent_new6(int32_t type, int key, int32_t modifiers, uint32_t nativeScanCode, uint32_t nativeVirtualKey, uint32_t nativeModifiers, const char* text) {
    return QKeyEvent_new6(type, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, qstring(text));
}

QKeyEvent* q_keyevent_new7(int32_t type, int key, int32_t modifiers, uint32_t nativeScanCode, uint32_t nativeVirtualKey, uint32_t nativeModifiers, const char* text, bool autorep) {
    return QKeyEvent_new7(type, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, qstring(text), autorep);
}

QKeyEvent* q_keyevent_new8(int32_t type, int key, int32_t modifiers, uint32_t nativeScanCode, uint32_t nativeVirtualKey, uint32_t nativeModifiers, const char* text, bool autorep, unsigned short count) {
    return QKeyEvent_new8(type, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, qstring(text), autorep, count);
}

QKeyEvent* q_keyevent_new9(int32_t type, int key, int32_t modifiers, uint32_t nativeScanCode, uint32_t nativeVirtualKey, uint32_t nativeModifiers, const char* text, bool autorep, unsigned short count, void* device) {
    return QKeyEvent_new9(type, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, qstring(text), autorep, count, (QInputDevice*)device);
}

QKeyEvent* q_keyevent_clone(void* self) {
    return QKeyEvent_Clone((QKeyEvent*)self);
}

void q_keyevent_on_clone(void* self, QKeyEvent* (*callback)()) {
    QKeyEvent_OnClone((QKeyEvent*)self, (intptr_t)callback);
}

QKeyEvent* q_keyevent_super_clone(void* self) {
    return QKeyEvent_SuperClone((QKeyEvent*)self);
}

int32_t q_keyevent_key(void* self) {
    return QKeyEvent_Key((QKeyEvent*)self);
}

bool q_keyevent_matches(void* self, int32_t key) {
    return QKeyEvent_Matches((QKeyEvent*)self, key);
}

int32_t q_keyevent_modifiers(void* self) {
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

int32_t q_keyevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

void q_keyevent_set_modifiers(void* self, int32_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

uint64_t q_keyevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

int32_t q_keyevent_type(void* self) {
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

void q_keyevent_super_set_timestamp(void* self, uint64_t timestamp) {
    QKeyEvent_SuperSetTimestamp((QKeyEvent*)self, timestamp);
}

void q_keyevent_on_set_timestamp(void* self, void (*callback)(void*, uint64_t)) {
    QKeyEvent_OnSetTimestamp((QKeyEvent*)self, (intptr_t)callback);
}

void q_keyevent_set_accepted(void* self, bool accepted) {
    QKeyEvent_SetAccepted((QKeyEvent*)self, accepted);
}

void q_keyevent_super_set_accepted(void* self, bool accepted) {
    QKeyEvent_SuperSetAccepted((QKeyEvent*)self, accepted);
}

void q_keyevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QKeyEvent_OnSetAccepted((QKeyEvent*)self, (intptr_t)callback);
}

void q_keyevent_delete(void* self) {
    QKeyEvent_Delete((QKeyEvent*)(self));
}

QFocusEvent* q_focusevent_new(int32_t type) {
    return QFocusEvent_new(type);
}

QFocusEvent* q_focusevent_new2(int32_t type, int32_t reason) {
    return QFocusEvent_new2(type, reason);
}

QFocusEvent* q_focusevent_clone(void* self) {
    return QFocusEvent_Clone((QFocusEvent*)self);
}

void q_focusevent_on_clone(void* self, QFocusEvent* (*callback)()) {
    QFocusEvent_OnClone((QFocusEvent*)self, (intptr_t)callback);
}

QFocusEvent* q_focusevent_super_clone(void* self) {
    return QFocusEvent_SuperClone((QFocusEvent*)self);
}

bool q_focusevent_got_focus(void* self) {
    return QFocusEvent_GotFocus((QFocusEvent*)self);
}

bool q_focusevent_lost_focus(void* self) {
    return QFocusEvent_LostFocus((QFocusEvent*)self);
}

int32_t q_focusevent_reason(void* self) {
    return QFocusEvent_Reason((QFocusEvent*)self);
}

int32_t q_focusevent_type(void* self) {
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

void q_focusevent_super_set_accepted(void* self, bool accepted) {
    QFocusEvent_SuperSetAccepted((QFocusEvent*)self, accepted);
}

void q_focusevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QFocusEvent_OnSetAccepted((QFocusEvent*)self, (intptr_t)callback);
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

void q_paintevent_on_clone(void* self, QPaintEvent* (*callback)()) {
    QPaintEvent_OnClone((QPaintEvent*)self, (intptr_t)callback);
}

QPaintEvent* q_paintevent_super_clone(void* self) {
    return QPaintEvent_SuperClone((QPaintEvent*)self);
}

const QRect* q_paintevent_rect(void* self) {
    return QPaintEvent_Rect((QPaintEvent*)self);
}

const QRegion* q_paintevent_region(void* self) {
    return QPaintEvent_Region((QPaintEvent*)self);
}

int32_t q_paintevent_type(void* self) {
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

void q_paintevent_super_set_accepted(void* self, bool accepted) {
    QPaintEvent_SuperSetAccepted((QPaintEvent*)self, accepted);
}

void q_paintevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QPaintEvent_OnSetAccepted((QPaintEvent*)self, (intptr_t)callback);
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

void q_moveevent_on_clone(void* self, QMoveEvent* (*callback)()) {
    QMoveEvent_OnClone((QMoveEvent*)self, (intptr_t)callback);
}

QMoveEvent* q_moveevent_super_clone(void* self) {
    return QMoveEvent_SuperClone((QMoveEvent*)self);
}

const QPoint* q_moveevent_pos(void* self) {
    return QMoveEvent_Pos((QMoveEvent*)self);
}

const QPoint* q_moveevent_old_pos(void* self) {
    return QMoveEvent_OldPos((QMoveEvent*)self);
}

int32_t q_moveevent_type(void* self) {
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

void q_moveevent_super_set_accepted(void* self, bool accepted) {
    QMoveEvent_SuperSetAccepted((QMoveEvent*)self, accepted);
}

void q_moveevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QMoveEvent_OnSetAccepted((QMoveEvent*)self, (intptr_t)callback);
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

void q_exposeevent_on_clone(void* self, QExposeEvent* (*callback)()) {
    QExposeEvent_OnClone((QExposeEvent*)self, (intptr_t)callback);
}

QExposeEvent* q_exposeevent_super_clone(void* self) {
    return QExposeEvent_SuperClone((QExposeEvent*)self);
}

const QRegion* q_exposeevent_region(void* self) {
    return QExposeEvent_Region((QExposeEvent*)self);
}

int32_t q_exposeevent_type(void* self) {
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

void q_exposeevent_super_set_accepted(void* self, bool accepted) {
    QExposeEvent_SuperSetAccepted((QExposeEvent*)self, accepted);
}

void q_exposeevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QExposeEvent_OnSetAccepted((QExposeEvent*)self, (intptr_t)callback);
}

void q_exposeevent_delete(void* self) {
    QExposeEvent_Delete((QExposeEvent*)(self));
}

QPlatformSurfaceEvent* q_platformsurfaceevent_new(int32_t surfaceEventType) {
    return QPlatformSurfaceEvent_new(surfaceEventType);
}

QPlatformSurfaceEvent* q_platformsurfaceevent_clone(void* self) {
    return QPlatformSurfaceEvent_Clone((QPlatformSurfaceEvent*)self);
}

void q_platformsurfaceevent_on_clone(void* self, QPlatformSurfaceEvent* (*callback)()) {
    QPlatformSurfaceEvent_OnClone((QPlatformSurfaceEvent*)self, (intptr_t)callback);
}

QPlatformSurfaceEvent* q_platformsurfaceevent_super_clone(void* self) {
    return QPlatformSurfaceEvent_SuperClone((QPlatformSurfaceEvent*)self);
}

int32_t q_platformsurfaceevent_surface_event_type(void* self) {
    return QPlatformSurfaceEvent_SurfaceEventType((QPlatformSurfaceEvent*)self);
}

int32_t q_platformsurfaceevent_type(void* self) {
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

void q_platformsurfaceevent_super_set_accepted(void* self, bool accepted) {
    QPlatformSurfaceEvent_SuperSetAccepted((QPlatformSurfaceEvent*)self, accepted);
}

void q_platformsurfaceevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QPlatformSurfaceEvent_OnSetAccepted((QPlatformSurfaceEvent*)self, (intptr_t)callback);
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

void q_resizeevent_on_clone(void* self, QResizeEvent* (*callback)()) {
    QResizeEvent_OnClone((QResizeEvent*)self, (intptr_t)callback);
}

QResizeEvent* q_resizeevent_super_clone(void* self) {
    return QResizeEvent_SuperClone((QResizeEvent*)self);
}

const QSize* q_resizeevent_size(void* self) {
    return QResizeEvent_Size((QResizeEvent*)self);
}

const QSize* q_resizeevent_old_size(void* self) {
    return QResizeEvent_OldSize((QResizeEvent*)self);
}

int32_t q_resizeevent_type(void* self) {
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

void q_resizeevent_super_set_accepted(void* self, bool accepted) {
    QResizeEvent_SuperSetAccepted((QResizeEvent*)self, accepted);
}

void q_resizeevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QResizeEvent_OnSetAccepted((QResizeEvent*)self, (intptr_t)callback);
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

void q_closeevent_on_clone(void* self, QCloseEvent* (*callback)()) {
    QCloseEvent_OnClone((QCloseEvent*)self, (intptr_t)callback);
}

QCloseEvent* q_closeevent_super_clone(void* self) {
    return QCloseEvent_SuperClone((QCloseEvent*)self);
}

int32_t q_closeevent_type(void* self) {
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

void q_closeevent_super_set_accepted(void* self, bool accepted) {
    QCloseEvent_SuperSetAccepted((QCloseEvent*)self, accepted);
}

void q_closeevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QCloseEvent_OnSetAccepted((QCloseEvent*)self, (intptr_t)callback);
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

void q_icondragevent_on_clone(void* self, QIconDragEvent* (*callback)()) {
    QIconDragEvent_OnClone((QIconDragEvent*)self, (intptr_t)callback);
}

QIconDragEvent* q_icondragevent_super_clone(void* self) {
    return QIconDragEvent_SuperClone((QIconDragEvent*)self);
}

int32_t q_icondragevent_type(void* self) {
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

void q_icondragevent_super_set_accepted(void* self, bool accepted) {
    QIconDragEvent_SuperSetAccepted((QIconDragEvent*)self, accepted);
}

void q_icondragevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QIconDragEvent_OnSetAccepted((QIconDragEvent*)self, (intptr_t)callback);
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

void q_showevent_on_clone(void* self, QShowEvent* (*callback)()) {
    QShowEvent_OnClone((QShowEvent*)self, (intptr_t)callback);
}

QShowEvent* q_showevent_super_clone(void* self) {
    return QShowEvent_SuperClone((QShowEvent*)self);
}

int32_t q_showevent_type(void* self) {
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

void q_showevent_super_set_accepted(void* self, bool accepted) {
    QShowEvent_SuperSetAccepted((QShowEvent*)self, accepted);
}

void q_showevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QShowEvent_OnSetAccepted((QShowEvent*)self, (intptr_t)callback);
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

void q_hideevent_on_clone(void* self, QHideEvent* (*callback)()) {
    QHideEvent_OnClone((QHideEvent*)self, (intptr_t)callback);
}

QHideEvent* q_hideevent_super_clone(void* self) {
    return QHideEvent_SuperClone((QHideEvent*)self);
}

int32_t q_hideevent_type(void* self) {
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

void q_hideevent_super_set_accepted(void* self, bool accepted) {
    QHideEvent_SuperSetAccepted((QHideEvent*)self, accepted);
}

void q_hideevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QHideEvent_OnSetAccepted((QHideEvent*)self, (intptr_t)callback);
}

void q_hideevent_delete(void* self) {
    QHideEvent_Delete((QHideEvent*)(self));
}

QContextMenuEvent* q_contextmenuevent_new(int32_t reason, void* pos, void* globalPos) {
    return QContextMenuEvent_new(reason, (QPoint*)pos, (QPoint*)globalPos);
}

QContextMenuEvent* q_contextmenuevent_new2(int32_t reason, void* pos) {
    return QContextMenuEvent_new2(reason, (QPoint*)pos);
}

QContextMenuEvent* q_contextmenuevent_new3(int32_t reason, void* pos, void* globalPos, int32_t modifiers) {
    return QContextMenuEvent_new3(reason, (QPoint*)pos, (QPoint*)globalPos, modifiers);
}

QContextMenuEvent* q_contextmenuevent_clone(void* self) {
    return QContextMenuEvent_Clone((QContextMenuEvent*)self);
}

void q_contextmenuevent_on_clone(void* self, QContextMenuEvent* (*callback)()) {
    QContextMenuEvent_OnClone((QContextMenuEvent*)self, (intptr_t)callback);
}

QContextMenuEvent* q_contextmenuevent_super_clone(void* self) {
    return QContextMenuEvent_SuperClone((QContextMenuEvent*)self);
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

int32_t q_contextmenuevent_reason(void* self) {
    return QContextMenuEvent_Reason((QContextMenuEvent*)self);
}

const QInputDevice* q_contextmenuevent_device(void* self) {
    return QInputEvent_Device((QInputEvent*)self);
}

int32_t q_contextmenuevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

int32_t q_contextmenuevent_modifiers(void* self) {
    return QInputEvent_Modifiers((QInputEvent*)self);
}

void q_contextmenuevent_set_modifiers(void* self, int32_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

uint64_t q_contextmenuevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

int32_t q_contextmenuevent_type(void* self) {
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

void q_contextmenuevent_super_set_timestamp(void* self, uint64_t timestamp) {
    QContextMenuEvent_SuperSetTimestamp((QContextMenuEvent*)self, timestamp);
}

void q_contextmenuevent_on_set_timestamp(void* self, void (*callback)(void*, uint64_t)) {
    QContextMenuEvent_OnSetTimestamp((QContextMenuEvent*)self, (intptr_t)callback);
}

void q_contextmenuevent_set_accepted(void* self, bool accepted) {
    QContextMenuEvent_SetAccepted((QContextMenuEvent*)self, accepted);
}

void q_contextmenuevent_super_set_accepted(void* self, bool accepted) {
    QContextMenuEvent_SuperSetAccepted((QContextMenuEvent*)self, accepted);
}

void q_contextmenuevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QContextMenuEvent_OnSetAccepted((QContextMenuEvent*)self, (intptr_t)callback);
}

void q_contextmenuevent_delete(void* self) {
    QContextMenuEvent_Delete((QContextMenuEvent*)(self));
}

QInputMethodEvent* q_inputmethodevent_new() {
    return QInputMethodEvent_new();
}

QInputMethodEvent* q_inputmethodevent_new2(const char* preeditText, libqt_list /* of QInputMethodEvent__Attribute* */ attributes) {
    return QInputMethodEvent_new2(qstring(preeditText), attributes);
}

QInputMethodEvent* q_inputmethodevent_clone(void* self) {
    return QInputMethodEvent_Clone((QInputMethodEvent*)self);
}

void q_inputmethodevent_on_clone(void* self, QInputMethodEvent* (*callback)()) {
    QInputMethodEvent_OnClone((QInputMethodEvent*)self, (intptr_t)callback);
}

QInputMethodEvent* q_inputmethodevent_super_clone(void* self) {
    return QInputMethodEvent_SuperClone((QInputMethodEvent*)self);
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

int32_t q_inputmethodevent_type(void* self) {
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

void q_inputmethodevent_super_set_accepted(void* self, bool accepted) {
    QInputMethodEvent_SuperSetAccepted((QInputMethodEvent*)self, accepted);
}

void q_inputmethodevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QInputMethodEvent_OnSetAccepted((QInputMethodEvent*)self, (intptr_t)callback);
}

void q_inputmethodevent_delete(void* self) {
    QInputMethodEvent_Delete((QInputMethodEvent*)(self));
}

QInputMethodQueryEvent* q_inputmethodqueryevent_new(int32_t queries) {
    return QInputMethodQueryEvent_new(queries);
}

QInputMethodQueryEvent* q_inputmethodqueryevent_clone(void* self) {
    return QInputMethodQueryEvent_Clone((QInputMethodQueryEvent*)self);
}

void q_inputmethodqueryevent_on_clone(void* self, QInputMethodQueryEvent* (*callback)()) {
    QInputMethodQueryEvent_OnClone((QInputMethodQueryEvent*)self, (intptr_t)callback);
}

QInputMethodQueryEvent* q_inputmethodqueryevent_super_clone(void* self) {
    return QInputMethodQueryEvent_SuperClone((QInputMethodQueryEvent*)self);
}

int32_t q_inputmethodqueryevent_queries(void* self) {
    return QInputMethodQueryEvent_Queries((QInputMethodQueryEvent*)self);
}

void q_inputmethodqueryevent_set_value(void* self, int32_t query, void* value) {
    QInputMethodQueryEvent_SetValue((QInputMethodQueryEvent*)self, query, (QVariant*)value);
}

QVariant* q_inputmethodqueryevent_value(void* self, int32_t query) {
    return QInputMethodQueryEvent_Value((QInputMethodQueryEvent*)self, query);
}

int32_t q_inputmethodqueryevent_type(void* self) {
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

void q_inputmethodqueryevent_super_set_accepted(void* self, bool accepted) {
    QInputMethodQueryEvent_SuperSetAccepted((QInputMethodQueryEvent*)self, accepted);
}

void q_inputmethodqueryevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QInputMethodQueryEvent_OnSetAccepted((QInputMethodQueryEvent*)self, (intptr_t)callback);
}

void q_inputmethodqueryevent_delete(void* self) {
    QInputMethodQueryEvent_Delete((QInputMethodQueryEvent*)(self));
}

QDropEvent* q_dropevent_new(void* pos, int32_t actions, void* data, int32_t buttons, int32_t modifiers) {
    return QDropEvent_new((QPointF*)pos, actions, (QMimeData*)data, buttons, modifiers);
}

QDropEvent* q_dropevent_new2(void* pos, int32_t actions, void* data, int32_t buttons, int32_t modifiers, int32_t type) {
    return QDropEvent_new2((QPointF*)pos, actions, (QMimeData*)data, buttons, modifiers, type);
}

QDropEvent* q_dropevent_clone(void* self) {
    return QDropEvent_Clone((QDropEvent*)self);
}

void q_dropevent_on_clone(void* self, QDropEvent* (*callback)()) {
    QDropEvent_OnClone((QDropEvent*)self, (intptr_t)callback);
}

QDropEvent* q_dropevent_super_clone(void* self) {
    return QDropEvent_SuperClone((QDropEvent*)self);
}

QPoint* q_dropevent_pos(void* self) {
    return QDropEvent_Pos((QDropEvent*)self);
}

QPointF* q_dropevent_pos_f(void* self) {
    return QDropEvent_PosF((QDropEvent*)self);
}

int32_t q_dropevent_mouse_buttons(void* self) {
    return QDropEvent_MouseButtons((QDropEvent*)self);
}

int32_t q_dropevent_keyboard_modifiers(void* self) {
    return QDropEvent_KeyboardModifiers((QDropEvent*)self);
}

QPointF* q_dropevent_position(void* self) {
    return QDropEvent_Position((QDropEvent*)self);
}

int32_t q_dropevent_buttons(void* self) {
    return QDropEvent_Buttons((QDropEvent*)self);
}

int32_t q_dropevent_modifiers(void* self) {
    return QDropEvent_Modifiers((QDropEvent*)self);
}

int32_t q_dropevent_possible_actions(void* self) {
    return QDropEvent_PossibleActions((QDropEvent*)self);
}

int32_t q_dropevent_proposed_action(void* self) {
    return QDropEvent_ProposedAction((QDropEvent*)self);
}

void q_dropevent_accept_proposed_action(void* self) {
    QDropEvent_AcceptProposedAction((QDropEvent*)self);
}

int32_t q_dropevent_drop_action(void* self) {
    return QDropEvent_DropAction((QDropEvent*)self);
}

void q_dropevent_set_drop_action(void* self, int32_t action) {
    QDropEvent_SetDropAction((QDropEvent*)self, action);
}

QObject* q_dropevent_source(void* self) {
    return QDropEvent_Source((QDropEvent*)self);
}

const QMimeData* q_dropevent_mime_data(void* self) {
    return QDropEvent_MimeData((QDropEvent*)self);
}

int32_t q_dropevent_type(void* self) {
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

void q_dropevent_super_set_accepted(void* self, bool accepted) {
    QDropEvent_SuperSetAccepted((QDropEvent*)self, accepted);
}

void q_dropevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QDropEvent_OnSetAccepted((QDropEvent*)self, (intptr_t)callback);
}

void q_dropevent_delete(void* self) {
    QDropEvent_Delete((QDropEvent*)(self));
}

QDragMoveEvent* q_dragmoveevent_new(void* pos, int32_t actions, void* data, int32_t buttons, int32_t modifiers) {
    return QDragMoveEvent_new((QPoint*)pos, actions, (QMimeData*)data, buttons, modifiers);
}

QDragMoveEvent* q_dragmoveevent_new2(void* pos, int32_t actions, void* data, int32_t buttons, int32_t modifiers, int32_t type) {
    return QDragMoveEvent_new2((QPoint*)pos, actions, (QMimeData*)data, buttons, modifiers, type);
}

QDragMoveEvent* q_dragmoveevent_clone(void* self) {
    return QDragMoveEvent_Clone((QDragMoveEvent*)self);
}

void q_dragmoveevent_on_clone(void* self, QDragMoveEvent* (*callback)()) {
    QDragMoveEvent_OnClone((QDragMoveEvent*)self, (intptr_t)callback);
}

QDragMoveEvent* q_dragmoveevent_super_clone(void* self) {
    return QDragMoveEvent_SuperClone((QDragMoveEvent*)self);
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

void q_dragmoveevent_accept2(void* self, void* r) {
    QDragMoveEvent_Accept2((QDragMoveEvent*)self, (QRect*)r);
}

void q_dragmoveevent_ignore2(void* self, void* r) {
    QDragMoveEvent_Ignore2((QDragMoveEvent*)self, (QRect*)r);
}

QPoint* q_dragmoveevent_pos(void* self) {
    return QDropEvent_Pos((QDropEvent*)self);
}

QPointF* q_dragmoveevent_pos_f(void* self) {
    return QDropEvent_PosF((QDropEvent*)self);
}

int32_t q_dragmoveevent_mouse_buttons(void* self) {
    return QDropEvent_MouseButtons((QDropEvent*)self);
}

int32_t q_dragmoveevent_keyboard_modifiers(void* self) {
    return QDropEvent_KeyboardModifiers((QDropEvent*)self);
}

QPointF* q_dragmoveevent_position(void* self) {
    return QDropEvent_Position((QDropEvent*)self);
}

int32_t q_dragmoveevent_buttons(void* self) {
    return QDropEvent_Buttons((QDropEvent*)self);
}

int32_t q_dragmoveevent_modifiers(void* self) {
    return QDropEvent_Modifiers((QDropEvent*)self);
}

int32_t q_dragmoveevent_possible_actions(void* self) {
    return QDropEvent_PossibleActions((QDropEvent*)self);
}

int32_t q_dragmoveevent_proposed_action(void* self) {
    return QDropEvent_ProposedAction((QDropEvent*)self);
}

void q_dragmoveevent_accept_proposed_action(void* self) {
    QDropEvent_AcceptProposedAction((QDropEvent*)self);
}

int32_t q_dragmoveevent_drop_action(void* self) {
    return QDropEvent_DropAction((QDropEvent*)self);
}

void q_dragmoveevent_set_drop_action(void* self, int32_t action) {
    QDropEvent_SetDropAction((QDropEvent*)self, action);
}

QObject* q_dragmoveevent_source(void* self) {
    return QDropEvent_Source((QDropEvent*)self);
}

const QMimeData* q_dragmoveevent_mime_data(void* self) {
    return QDropEvent_MimeData((QDropEvent*)self);
}

int32_t q_dragmoveevent_type(void* self) {
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

void q_dragmoveevent_super_set_accepted(void* self, bool accepted) {
    QDragMoveEvent_SuperSetAccepted((QDragMoveEvent*)self, accepted);
}

void q_dragmoveevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QDragMoveEvent_OnSetAccepted((QDragMoveEvent*)self, (intptr_t)callback);
}

void q_dragmoveevent_delete(void* self) {
    QDragMoveEvent_Delete((QDragMoveEvent*)(self));
}

QDragEnterEvent* q_dragenterevent_new(void* pos, int32_t actions, void* data, int32_t buttons, int32_t modifiers) {
    return QDragEnterEvent_new((QPoint*)pos, actions, (QMimeData*)data, buttons, modifiers);
}

QDragEnterEvent* q_dragenterevent_clone(void* self) {
    return QDragEnterEvent_Clone((QDragEnterEvent*)self);
}

void q_dragenterevent_on_clone(void* self, QDragEnterEvent* (*callback)()) {
    QDragEnterEvent_OnClone((QDragEnterEvent*)self, (intptr_t)callback);
}

QDragEnterEvent* q_dragenterevent_super_clone(void* self) {
    return QDragEnterEvent_SuperClone((QDragEnterEvent*)self);
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

void q_dragenterevent_accept2(void* self, void* r) {
    QDragMoveEvent_Accept2((QDragMoveEvent*)self, (QRect*)r);
}

void q_dragenterevent_ignore2(void* self, void* r) {
    QDragMoveEvent_Ignore2((QDragMoveEvent*)self, (QRect*)r);
}

QPoint* q_dragenterevent_pos(void* self) {
    return QDropEvent_Pos((QDropEvent*)self);
}

QPointF* q_dragenterevent_pos_f(void* self) {
    return QDropEvent_PosF((QDropEvent*)self);
}

int32_t q_dragenterevent_mouse_buttons(void* self) {
    return QDropEvent_MouseButtons((QDropEvent*)self);
}

int32_t q_dragenterevent_keyboard_modifiers(void* self) {
    return QDropEvent_KeyboardModifiers((QDropEvent*)self);
}

QPointF* q_dragenterevent_position(void* self) {
    return QDropEvent_Position((QDropEvent*)self);
}

int32_t q_dragenterevent_buttons(void* self) {
    return QDropEvent_Buttons((QDropEvent*)self);
}

int32_t q_dragenterevent_modifiers(void* self) {
    return QDropEvent_Modifiers((QDropEvent*)self);
}

int32_t q_dragenterevent_possible_actions(void* self) {
    return QDropEvent_PossibleActions((QDropEvent*)self);
}

int32_t q_dragenterevent_proposed_action(void* self) {
    return QDropEvent_ProposedAction((QDropEvent*)self);
}

void q_dragenterevent_accept_proposed_action(void* self) {
    QDropEvent_AcceptProposedAction((QDropEvent*)self);
}

int32_t q_dragenterevent_drop_action(void* self) {
    return QDropEvent_DropAction((QDropEvent*)self);
}

void q_dragenterevent_set_drop_action(void* self, int32_t action) {
    QDropEvent_SetDropAction((QDropEvent*)self, action);
}

QObject* q_dragenterevent_source(void* self) {
    return QDropEvent_Source((QDropEvent*)self);
}

const QMimeData* q_dragenterevent_mime_data(void* self) {
    return QDropEvent_MimeData((QDropEvent*)self);
}

int32_t q_dragenterevent_type(void* self) {
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

void q_dragenterevent_super_set_accepted(void* self, bool accepted) {
    QDragEnterEvent_SuperSetAccepted((QDragEnterEvent*)self, accepted);
}

void q_dragenterevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QDragEnterEvent_OnSetAccepted((QDragEnterEvent*)self, (intptr_t)callback);
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

void q_dragleaveevent_on_clone(void* self, QDragLeaveEvent* (*callback)()) {
    QDragLeaveEvent_OnClone((QDragLeaveEvent*)self, (intptr_t)callback);
}

QDragLeaveEvent* q_dragleaveevent_super_clone(void* self) {
    return QDragLeaveEvent_SuperClone((QDragLeaveEvent*)self);
}

int32_t q_dragleaveevent_type(void* self) {
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

void q_dragleaveevent_super_set_accepted(void* self, bool accepted) {
    QDragLeaveEvent_SuperSetAccepted((QDragLeaveEvent*)self, accepted);
}

void q_dragleaveevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QDragLeaveEvent_OnSetAccepted((QDragLeaveEvent*)self, (intptr_t)callback);
}

void q_dragleaveevent_delete(void* self) {
    QDragLeaveEvent_Delete((QDragLeaveEvent*)(self));
}

QHelpEvent* q_helpevent_new(int32_t type, void* pos, void* globalPos) {
    return QHelpEvent_new(type, (QPoint*)pos, (QPoint*)globalPos);
}

QHelpEvent* q_helpevent_clone(void* self) {
    return QHelpEvent_Clone((QHelpEvent*)self);
}

void q_helpevent_on_clone(void* self, QHelpEvent* (*callback)()) {
    QHelpEvent_OnClone((QHelpEvent*)self, (intptr_t)callback);
}

QHelpEvent* q_helpevent_super_clone(void* self) {
    return QHelpEvent_SuperClone((QHelpEvent*)self);
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

int32_t q_helpevent_type(void* self) {
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

void q_helpevent_super_set_accepted(void* self, bool accepted) {
    QHelpEvent_SuperSetAccepted((QHelpEvent*)self, accepted);
}

void q_helpevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QHelpEvent_OnSetAccepted((QHelpEvent*)self, (intptr_t)callback);
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

void q_statustipevent_on_clone(void* self, QStatusTipEvent* (*callback)()) {
    QStatusTipEvent_OnClone((QStatusTipEvent*)self, (intptr_t)callback);
}

QStatusTipEvent* q_statustipevent_super_clone(void* self) {
    return QStatusTipEvent_SuperClone((QStatusTipEvent*)self);
}

const char* q_statustipevent_tip(void* self) {
    libqt_string _str = QStatusTipEvent_Tip((QStatusTipEvent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_statustipevent_type(void* self) {
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

void q_statustipevent_super_set_accepted(void* self, bool accepted) {
    QStatusTipEvent_SuperSetAccepted((QStatusTipEvent*)self, accepted);
}

void q_statustipevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QStatusTipEvent_OnSetAccepted((QStatusTipEvent*)self, (intptr_t)callback);
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

void q_whatsthisclickedevent_on_clone(void* self, QWhatsThisClickedEvent* (*callback)()) {
    QWhatsThisClickedEvent_OnClone((QWhatsThisClickedEvent*)self, (intptr_t)callback);
}

QWhatsThisClickedEvent* q_whatsthisclickedevent_super_clone(void* self) {
    return QWhatsThisClickedEvent_SuperClone((QWhatsThisClickedEvent*)self);
}

const char* q_whatsthisclickedevent_href(void* self) {
    libqt_string _str = QWhatsThisClickedEvent_Href((QWhatsThisClickedEvent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_whatsthisclickedevent_type(void* self) {
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

void q_whatsthisclickedevent_super_set_accepted(void* self, bool accepted) {
    QWhatsThisClickedEvent_SuperSetAccepted((QWhatsThisClickedEvent*)self, accepted);
}

void q_whatsthisclickedevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QWhatsThisClickedEvent_OnSetAccepted((QWhatsThisClickedEvent*)self, (intptr_t)callback);
}

void q_whatsthisclickedevent_delete(void* self) {
    QWhatsThisClickedEvent_Delete((QWhatsThisClickedEvent*)(self));
}

QActionEvent* q_actionevent_new(int type, void* action) {
    return QActionEvent_new(type, (QAction*)action);
}

QActionEvent* q_actionevent_new2(int type, void* action, void* before) {
    return QActionEvent_new2(type, (QAction*)action, (QAction*)before);
}

QActionEvent* q_actionevent_clone(void* self) {
    return QActionEvent_Clone((QActionEvent*)self);
}

void q_actionevent_on_clone(void* self, QActionEvent* (*callback)()) {
    QActionEvent_OnClone((QActionEvent*)self, (intptr_t)callback);
}

QActionEvent* q_actionevent_super_clone(void* self) {
    return QActionEvent_SuperClone((QActionEvent*)self);
}

QAction* q_actionevent_action(void* self) {
    return QActionEvent_Action((QActionEvent*)self);
}

QAction* q_actionevent_before(void* self) {
    return QActionEvent_Before((QActionEvent*)self);
}

int32_t q_actionevent_type(void* self) {
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

void q_actionevent_super_set_accepted(void* self, bool accepted) {
    QActionEvent_SuperSetAccepted((QActionEvent*)self, accepted);
}

void q_actionevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QActionEvent_OnSetAccepted((QActionEvent*)self, (intptr_t)callback);
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

void q_fileopenevent_on_clone(void* self, QFileOpenEvent* (*callback)()) {
    QFileOpenEvent_OnClone((QFileOpenEvent*)self, (intptr_t)callback);
}

QFileOpenEvent* q_fileopenevent_super_clone(void* self) {
    return QFileOpenEvent_SuperClone((QFileOpenEvent*)self);
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

bool q_fileopenevent_open_file(void* self, void* file, int32_t flags) {
    return QFileOpenEvent_OpenFile((QFileOpenEvent*)self, (QFile*)file, flags);
}

int32_t q_fileopenevent_type(void* self) {
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

void q_fileopenevent_super_set_accepted(void* self, bool accepted) {
    QFileOpenEvent_SuperSetAccepted((QFileOpenEvent*)self, accepted);
}

void q_fileopenevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QFileOpenEvent_OnSetAccepted((QFileOpenEvent*)self, (intptr_t)callback);
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

void q_toolbarchangeevent_on_clone(void* self, QToolBarChangeEvent* (*callback)()) {
    QToolBarChangeEvent_OnClone((QToolBarChangeEvent*)self, (intptr_t)callback);
}

QToolBarChangeEvent* q_toolbarchangeevent_super_clone(void* self) {
    return QToolBarChangeEvent_SuperClone((QToolBarChangeEvent*)self);
}

bool q_toolbarchangeevent_toggle(void* self) {
    return QToolBarChangeEvent_Toggle((QToolBarChangeEvent*)self);
}

int32_t q_toolbarchangeevent_type(void* self) {
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

void q_toolbarchangeevent_super_set_accepted(void* self, bool accepted) {
    QToolBarChangeEvent_SuperSetAccepted((QToolBarChangeEvent*)self, accepted);
}

void q_toolbarchangeevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QToolBarChangeEvent_OnSetAccepted((QToolBarChangeEvent*)self, (intptr_t)callback);
}

void q_toolbarchangeevent_delete(void* self) {
    QToolBarChangeEvent_Delete((QToolBarChangeEvent*)(self));
}

QShortcutEvent* q_shortcutevent_new(void* key, int id) {
    return QShortcutEvent_new((QKeySequence*)key, id);
}

QShortcutEvent* q_shortcutevent_new2(void* key) {
    return QShortcutEvent_new2((QKeySequence*)key);
}

QShortcutEvent* q_shortcutevent_new3(void* key, int id, bool ambiguous) {
    return QShortcutEvent_new3((QKeySequence*)key, id, ambiguous);
}

QShortcutEvent* q_shortcutevent_new4(void* key, void* shortcut) {
    return QShortcutEvent_new4((QKeySequence*)key, (QShortcut*)shortcut);
}

QShortcutEvent* q_shortcutevent_new5(void* key, void* shortcut, bool ambiguous) {
    return QShortcutEvent_new5((QKeySequence*)key, (QShortcut*)shortcut, ambiguous);
}

QShortcutEvent* q_shortcutevent_clone(void* self) {
    return QShortcutEvent_Clone((QShortcutEvent*)self);
}

void q_shortcutevent_on_clone(void* self, QShortcutEvent* (*callback)()) {
    QShortcutEvent_OnClone((QShortcutEvent*)self, (intptr_t)callback);
}

QShortcutEvent* q_shortcutevent_super_clone(void* self) {
    return QShortcutEvent_SuperClone((QShortcutEvent*)self);
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

int32_t q_shortcutevent_type(void* self) {
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

void q_shortcutevent_super_set_accepted(void* self, bool accepted) {
    QShortcutEvent_SuperSetAccepted((QShortcutEvent*)self, accepted);
}

void q_shortcutevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QShortcutEvent_OnSetAccepted((QShortcutEvent*)self, (intptr_t)callback);
}

void q_shortcutevent_delete(void* self) {
    QShortcutEvent_Delete((QShortcutEvent*)(self));
}

QWindowStateChangeEvent* q_windowstatechangeevent_new(int32_t oldState) {
    return QWindowStateChangeEvent_new(oldState);
}

QWindowStateChangeEvent* q_windowstatechangeevent_new2(int32_t oldState, bool isOverride) {
    return QWindowStateChangeEvent_new2(oldState, isOverride);
}

QWindowStateChangeEvent* q_windowstatechangeevent_clone(void* self) {
    return QWindowStateChangeEvent_Clone((QWindowStateChangeEvent*)self);
}

void q_windowstatechangeevent_on_clone(void* self, QWindowStateChangeEvent* (*callback)()) {
    QWindowStateChangeEvent_OnClone((QWindowStateChangeEvent*)self, (intptr_t)callback);
}

QWindowStateChangeEvent* q_windowstatechangeevent_super_clone(void* self) {
    return QWindowStateChangeEvent_SuperClone((QWindowStateChangeEvent*)self);
}

int32_t q_windowstatechangeevent_old_state(void* self) {
    return QWindowStateChangeEvent_OldState((QWindowStateChangeEvent*)self);
}

bool q_windowstatechangeevent_is_override(void* self) {
    return QWindowStateChangeEvent_IsOverride((QWindowStateChangeEvent*)self);
}

int32_t q_windowstatechangeevent_type(void* self) {
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

void q_windowstatechangeevent_super_set_accepted(void* self, bool accepted) {
    QWindowStateChangeEvent_SuperSetAccepted((QWindowStateChangeEvent*)self, accepted);
}

void q_windowstatechangeevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QWindowStateChangeEvent_OnSetAccepted((QWindowStateChangeEvent*)self, (intptr_t)callback);
}

void q_windowstatechangeevent_delete(void* self) {
    QWindowStateChangeEvent_Delete((QWindowStateChangeEvent*)(self));
}

QTouchEvent* q_touchevent_new(int32_t eventType) {
    return QTouchEvent_new(eventType);
}

QTouchEvent* q_touchevent_new2(int32_t eventType, void* device, int32_t modifiers, uint8_t touchPointStates) {
    return QTouchEvent_new2(eventType, (QPointingDevice*)device, modifiers, touchPointStates);
}

QTouchEvent* q_touchevent_new3(int32_t eventType, void* device) {
    return QTouchEvent_new3(eventType, (QPointingDevice*)device);
}

QTouchEvent* q_touchevent_new4(int32_t eventType, void* device, int32_t modifiers) {
    return QTouchEvent_new4(eventType, (QPointingDevice*)device, modifiers);
}

QTouchEvent* q_touchevent_new5(int32_t eventType, void* device, int32_t modifiers, libqt_list /* of QEventPoint* */ touchPoints) {
    return QTouchEvent_new5(eventType, (QPointingDevice*)device, modifiers, touchPoints);
}

QTouchEvent* q_touchevent_new6(int32_t eventType, void* device, int32_t modifiers, uint8_t touchPointStates, libqt_list /* of QEventPoint* */ touchPoints) {
    return QTouchEvent_new6(eventType, (QPointingDevice*)device, modifiers, touchPointStates, touchPoints);
}

QTouchEvent* q_touchevent_clone(void* self) {
    return QTouchEvent_Clone((QTouchEvent*)self);
}

void q_touchevent_on_clone(void* self, QTouchEvent* (*callback)()) {
    QTouchEvent_OnClone((QTouchEvent*)self, (intptr_t)callback);
}

QTouchEvent* q_touchevent_super_clone(void* self) {
    return QTouchEvent_SuperClone((QTouchEvent*)self);
}

QObject* q_touchevent_target(void* self) {
    return QTouchEvent_Target((QTouchEvent*)self);
}

uint8_t q_touchevent_touch_point_states(void* self) {
    return QTouchEvent_TouchPointStates((QTouchEvent*)self);
}

libqt_list /* of QEventPoint* */ q_touchevent_touch_points(void* self) {
    libqt_list _arr = QTouchEvent_TouchPoints((QTouchEvent*)self);
    return _arr;
}

bool q_touchevent_is_begin_event(void* self) {
    return QTouchEvent_IsBeginEvent((QTouchEvent*)self);
}

void q_touchevent_on_is_begin_event(void* self, bool (*callback)()) {
    QTouchEvent_OnIsBeginEvent((QTouchEvent*)self, (intptr_t)callback);
}

bool q_touchevent_super_is_begin_event(void* self) {
    return QTouchEvent_SuperIsBeginEvent((QTouchEvent*)self);
}

bool q_touchevent_is_update_event(void* self) {
    return QTouchEvent_IsUpdateEvent((QTouchEvent*)self);
}

void q_touchevent_on_is_update_event(void* self, bool (*callback)()) {
    QTouchEvent_OnIsUpdateEvent((QTouchEvent*)self, (intptr_t)callback);
}

bool q_touchevent_super_is_update_event(void* self) {
    return QTouchEvent_SuperIsUpdateEvent((QTouchEvent*)self);
}

bool q_touchevent_is_end_event(void* self) {
    return QTouchEvent_IsEndEvent((QTouchEvent*)self);
}

void q_touchevent_on_is_end_event(void* self, bool (*callback)()) {
    QTouchEvent_OnIsEndEvent((QTouchEvent*)self, (intptr_t)callback);
}

bool q_touchevent_super_is_end_event(void* self) {
    return QTouchEvent_SuperIsEndEvent((QTouchEvent*)self);
}

const QPointingDevice* q_touchevent_pointing_device(void* self) {
    return QPointerEvent_PointingDevice((QPointerEvent*)self);
}

int32_t q_touchevent_pointer_type(void* self) {
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

int32_t q_touchevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

int32_t q_touchevent_modifiers(void* self) {
    return QInputEvent_Modifiers((QInputEvent*)self);
}

void q_touchevent_set_modifiers(void* self, int32_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

uint64_t q_touchevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

int32_t q_touchevent_type(void* self) {
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

void q_touchevent_super_set_timestamp(void* self, uint64_t timestamp) {
    QTouchEvent_SuperSetTimestamp((QTouchEvent*)self, timestamp);
}

void q_touchevent_on_set_timestamp(void* self, void (*callback)(void*, uint64_t)) {
    QTouchEvent_OnSetTimestamp((QTouchEvent*)self, (intptr_t)callback);
}

void q_touchevent_set_accepted(void* self, bool accepted) {
    QTouchEvent_SetAccepted((QTouchEvent*)self, accepted);
}

void q_touchevent_super_set_accepted(void* self, bool accepted) {
    QTouchEvent_SuperSetAccepted((QTouchEvent*)self, accepted);
}

void q_touchevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QTouchEvent_OnSetAccepted((QTouchEvent*)self, (intptr_t)callback);
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

void q_scrollprepareevent_on_clone(void* self, QScrollPrepareEvent* (*callback)()) {
    QScrollPrepareEvent_OnClone((QScrollPrepareEvent*)self, (intptr_t)callback);
}

QScrollPrepareEvent* q_scrollprepareevent_super_clone(void* self) {
    return QScrollPrepareEvent_SuperClone((QScrollPrepareEvent*)self);
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

int32_t q_scrollprepareevent_type(void* self) {
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

void q_scrollprepareevent_super_set_accepted(void* self, bool accepted) {
    QScrollPrepareEvent_SuperSetAccepted((QScrollPrepareEvent*)self, accepted);
}

void q_scrollprepareevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QScrollPrepareEvent_OnSetAccepted((QScrollPrepareEvent*)self, (intptr_t)callback);
}

void q_scrollprepareevent_delete(void* self) {
    QScrollPrepareEvent_Delete((QScrollPrepareEvent*)(self));
}

QScrollEvent* q_scrollevent_new(void* contentPos, void* overshoot, int32_t scrollState) {
    return QScrollEvent_new((QPointF*)contentPos, (QPointF*)overshoot, scrollState);
}

QScrollEvent* q_scrollevent_clone(void* self) {
    return QScrollEvent_Clone((QScrollEvent*)self);
}

void q_scrollevent_on_clone(void* self, QScrollEvent* (*callback)()) {
    QScrollEvent_OnClone((QScrollEvent*)self, (intptr_t)callback);
}

QScrollEvent* q_scrollevent_super_clone(void* self) {
    return QScrollEvent_SuperClone((QScrollEvent*)self);
}

QPointF* q_scrollevent_content_pos(void* self) {
    return QScrollEvent_ContentPos((QScrollEvent*)self);
}

QPointF* q_scrollevent_overshoot_distance(void* self) {
    return QScrollEvent_OvershootDistance((QScrollEvent*)self);
}

int32_t q_scrollevent_scroll_state(void* self) {
    return QScrollEvent_ScrollState((QScrollEvent*)self);
}

int32_t q_scrollevent_type(void* self) {
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

void q_scrollevent_super_set_accepted(void* self, bool accepted) {
    QScrollEvent_SuperSetAccepted((QScrollEvent*)self, accepted);
}

void q_scrollevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QScrollEvent_OnSetAccepted((QScrollEvent*)self, (intptr_t)callback);
}

void q_scrollevent_delete(void* self) {
    QScrollEvent_Delete((QScrollEvent*)(self));
}

QScreenOrientationChangeEvent* q_screenorientationchangeevent_new(void* screen, int32_t orientation) {
    return QScreenOrientationChangeEvent_new((QScreen*)screen, orientation);
}

QScreenOrientationChangeEvent* q_screenorientationchangeevent_clone(void* self) {
    return QScreenOrientationChangeEvent_Clone((QScreenOrientationChangeEvent*)self);
}

void q_screenorientationchangeevent_on_clone(void* self, QScreenOrientationChangeEvent* (*callback)()) {
    QScreenOrientationChangeEvent_OnClone((QScreenOrientationChangeEvent*)self, (intptr_t)callback);
}

QScreenOrientationChangeEvent* q_screenorientationchangeevent_super_clone(void* self) {
    return QScreenOrientationChangeEvent_SuperClone((QScreenOrientationChangeEvent*)self);
}

QScreen* q_screenorientationchangeevent_screen(void* self) {
    return QScreenOrientationChangeEvent_Screen((QScreenOrientationChangeEvent*)self);
}

int32_t q_screenorientationchangeevent_orientation(void* self) {
    return QScreenOrientationChangeEvent_Orientation((QScreenOrientationChangeEvent*)self);
}

int32_t q_screenorientationchangeevent_type(void* self) {
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

void q_screenorientationchangeevent_super_set_accepted(void* self, bool accepted) {
    QScreenOrientationChangeEvent_SuperSetAccepted((QScreenOrientationChangeEvent*)self, accepted);
}

void q_screenorientationchangeevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QScreenOrientationChangeEvent_OnSetAccepted((QScreenOrientationChangeEvent*)self, (intptr_t)callback);
}

void q_screenorientationchangeevent_delete(void* self) {
    QScreenOrientationChangeEvent_Delete((QScreenOrientationChangeEvent*)(self));
}

QApplicationStateChangeEvent* q_applicationstatechangeevent_new(int32_t state) {
    return QApplicationStateChangeEvent_new(state);
}

QApplicationStateChangeEvent* q_applicationstatechangeevent_clone(void* self) {
    return QApplicationStateChangeEvent_Clone((QApplicationStateChangeEvent*)self);
}

void q_applicationstatechangeevent_on_clone(void* self, QApplicationStateChangeEvent* (*callback)()) {
    QApplicationStateChangeEvent_OnClone((QApplicationStateChangeEvent*)self, (intptr_t)callback);
}

QApplicationStateChangeEvent* q_applicationstatechangeevent_super_clone(void* self) {
    return QApplicationStateChangeEvent_SuperClone((QApplicationStateChangeEvent*)self);
}

int32_t q_applicationstatechangeevent_application_state(void* self) {
    return QApplicationStateChangeEvent_ApplicationState((QApplicationStateChangeEvent*)self);
}

int32_t q_applicationstatechangeevent_type(void* self) {
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

void q_applicationstatechangeevent_super_set_accepted(void* self, bool accepted) {
    QApplicationStateChangeEvent_SuperSetAccepted((QApplicationStateChangeEvent*)self, accepted);
}

void q_applicationstatechangeevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QApplicationStateChangeEvent_OnSetAccepted((QApplicationStateChangeEvent*)self, (intptr_t)callback);
}

void q_applicationstatechangeevent_delete(void* self) {
    QApplicationStateChangeEvent_Delete((QApplicationStateChangeEvent*)(self));
}

QChildWindowEvent* q_childwindowevent_new(int32_t type, void* childWindow) {
    return QChildWindowEvent_new(type, (QWindow*)childWindow);
}

QChildWindowEvent* q_childwindowevent_clone(void* self) {
    return QChildWindowEvent_Clone((QChildWindowEvent*)self);
}

void q_childwindowevent_on_clone(void* self, QChildWindowEvent* (*callback)()) {
    QChildWindowEvent_OnClone((QChildWindowEvent*)self, (intptr_t)callback);
}

QChildWindowEvent* q_childwindowevent_super_clone(void* self) {
    return QChildWindowEvent_SuperClone((QChildWindowEvent*)self);
}

QWindow* q_childwindowevent_child(void* self) {
    return QChildWindowEvent_Child((QChildWindowEvent*)self);
}

int32_t q_childwindowevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_childwindowevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_childwindowevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_childwindowevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_childwindowevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_childwindowevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_childwindowevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_childwindowevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_childwindowevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_childwindowevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_childwindowevent_set_accepted(void* self, bool accepted) {
    QChildWindowEvent_SetAccepted((QChildWindowEvent*)self, accepted);
}

void q_childwindowevent_super_set_accepted(void* self, bool accepted) {
    QChildWindowEvent_SuperSetAccepted((QChildWindowEvent*)self, accepted);
}

void q_childwindowevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    QChildWindowEvent_OnSetAccepted((QChildWindowEvent*)self, (intptr_t)callback);
}

void q_childwindowevent_delete(void* self) {
    QChildWindowEvent_Delete((QChildWindowEvent*)(self));
}

QInputMethodEvent__Attribute* q_inputmethodevent__attribute_new(int32_t typ, int s, int l, void* val) {
    return QInputMethodEvent__Attribute_new(typ, s, l, (QVariant*)val);
}

QInputMethodEvent__Attribute* q_inputmethodevent__attribute_new2(int32_t typ, int s, int l) {
    return QInputMethodEvent__Attribute_new2(typ, s, l);
}

QInputMethodEvent__Attribute* q_inputmethodevent__attribute_new3(void* param1) {
    return QInputMethodEvent__Attribute_new3((QInputMethodEvent__Attribute*)param1);
}

int32_t q_inputmethodevent__attribute_type(void* self) {
    return QInputMethodEvent__Attribute_Type((QInputMethodEvent__Attribute*)self);
}

void q_inputmethodevent__attribute_set_type(void* self, int32_t type) {
    QInputMethodEvent__Attribute_SetType((QInputMethodEvent__Attribute*)self, type);
}

int32_t q_inputmethodevent__attribute_start(void* self) {
    return QInputMethodEvent__Attribute_Start((QInputMethodEvent__Attribute*)self);
}

void q_inputmethodevent__attribute_set_start(void* self, int start) {
    QInputMethodEvent__Attribute_SetStart((QInputMethodEvent__Attribute*)self, start);
}

int32_t q_inputmethodevent__attribute_length(void* self) {
    return QInputMethodEvent__Attribute_Length((QInputMethodEvent__Attribute*)self);
}

void q_inputmethodevent__attribute_set_length(void* self, int length) {
    QInputMethodEvent__Attribute_SetLength((QInputMethodEvent__Attribute*)self, length);
}

QVariant* q_inputmethodevent__attribute_value(void* self) {
    return QInputMethodEvent__Attribute_Value((QInputMethodEvent__Attribute*)self);
}

void q_inputmethodevent__attribute_set_value(void* self, void* value) {
    QInputMethodEvent__Attribute_SetValue((QInputMethodEvent__Attribute*)self, (QVariant*)value);
}

void q_inputmethodevent__attribute_operator_assign(void* self, void* param1) {
    QInputMethodEvent__Attribute_OperatorAssign((QInputMethodEvent__Attribute*)self, (QInputMethodEvent__Attribute*)param1);
}

void q_inputmethodevent__attribute_delete(void* self) {
    QInputMethodEvent__Attribute_Delete((QInputMethodEvent__Attribute*)(self));
}
