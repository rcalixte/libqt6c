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

/// https://doc.qt.io/qt-6/qinputevent.html

/// q_inputevent_new constructs a new QInputEvent object.
///
/// ``` enum QEvent__Type typeVal, QInputDevice* m_dev ```
QInputEvent* q_inputevent_new(int64_t typeVal, void* m_dev) {
    return QInputEvent_new(typeVal, (QInputDevice*)m_dev);
}

/// q_inputevent_new2 constructs a new QInputEvent object.
///
/// ``` enum QEvent__Type typeVal, QInputDevice* m_dev, int modifiers ```
QInputEvent* q_inputevent_new2(int64_t typeVal, void* m_dev, int64_t modifiers) {
    return QInputEvent_new2(typeVal, (QInputDevice*)m_dev, modifiers);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#clone)
///
/// ``` QInputEvent* self ```
QInputEvent* q_inputevent_clone(void* self) {
    return QInputEvent_Clone((QInputEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QInputEvent* self, QInputEvent* (*slot)() ```
void q_inputevent_on_clone(void* self, QInputEvent* (*slot)()) {
    QInputEvent_OnClone((QInputEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QInputEvent* self ```
QInputEvent* q_inputevent_qbase_clone(void* self) {
    return QInputEvent_QBaseClone((QInputEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// ``` QInputEvent* self ```
QInputDevice* q_inputevent_device(void* self) {
    return QInputEvent_Device((QInputEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// ``` QInputEvent* self ```
int64_t q_inputevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
///
/// ``` QInputEvent* self ```
int64_t q_inputevent_modifiers(void* self) {
    return QInputEvent_Modifiers((QInputEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// ``` QInputEvent* self, int modifiers ```
void q_inputevent_set_modifiers(void* self, int64_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// ``` QInputEvent* self ```
uint64_t q_inputevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
///
/// ``` QInputEvent* self, uint64_t timestamp ```
void q_inputevent_set_timestamp(void* self, uint64_t timestamp) {
    QInputEvent_SetTimestamp((QInputEvent*)self, timestamp);
}

/// Allows for overriding the related default method
///
/// ``` QInputEvent* self, void (*slot)(QInputEvent*, uint64_t) ```
void q_inputevent_on_set_timestamp(void* self, void (*slot)(void*, uint64_t)) {
    QInputEvent_OnSetTimestamp((QInputEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QInputEvent* self, uint64_t timestamp ```
void q_inputevent_qbase_set_timestamp(void* self, uint64_t timestamp) {
    QInputEvent_QBaseSetTimestamp((QInputEvent*)self, timestamp);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QInputEvent* self ```
int64_t q_inputevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QInputEvent* self ```
bool q_inputevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QInputEvent* self ```
bool q_inputevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QInputEvent* self ```
void q_inputevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QInputEvent* self ```
void q_inputevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QInputEvent* self ```
bool q_inputevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QInputEvent* self ```
bool q_inputevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QInputEvent* self ```
bool q_inputevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_inputevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_inputevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputEvent* self, bool accepted ```
void q_inputevent_set_accepted(void* self, bool accepted) {
    QInputEvent_SetAccepted((QInputEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputEvent* self, bool accepted ```
void q_inputevent_qbase_set_accepted(void* self, bool accepted) {
    QInputEvent_QBaseSetAccepted((QInputEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputEvent* self, void (*slot)(QInputEvent*, bool) ```
void q_inputevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QInputEvent_OnSetAccepted((QInputEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QInputEvent* self ```
void q_inputevent_delete(void* self) {
    QInputEvent_Delete((QInputEvent*)(self));
}

/// https://doc.qt.io/qt-6/qpointerevent.html

/// q_pointerevent_new constructs a new QPointerEvent object.
///
/// ``` enum QEvent__Type typeVal, QPointingDevice* dev ```
QPointerEvent* q_pointerevent_new(int64_t typeVal, void* dev) {
    return QPointerEvent_new(typeVal, (QPointingDevice*)dev);
}

/// q_pointerevent_new2 constructs a new QPointerEvent object.
///
/// ``` enum QEvent__Type typeVal, QPointingDevice* dev, int modifiers ```
QPointerEvent* q_pointerevent_new2(int64_t typeVal, void* dev, int64_t modifiers) {
    return QPointerEvent_new2(typeVal, (QPointingDevice*)dev, modifiers);
}

/// q_pointerevent_new3 constructs a new QPointerEvent object.
///
/// ``` enum QEvent__Type typeVal, QPointingDevice* dev, int modifiers, QEventPoint* points[] ```
QPointerEvent* q_pointerevent_new3(int64_t typeVal, void* dev, int64_t modifiers, void* points[]) {
    QEventPoint** points_arr = (QEventPoint**)points;
    size_t points_len = 0;
    while (points_arr[points_len] != NULL) {
        points_len++;
    }
    libqt_list points_list = {
        .len = points_len,
        .data = {(QEventPoint*)points},
    };

    return QPointerEvent_new3(typeVal, (QPointingDevice*)dev, modifiers, points_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#clone)
///
/// ``` QPointerEvent* self ```
QPointerEvent* q_pointerevent_clone(void* self) {
    return QPointerEvent_Clone((QPointerEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QPointerEvent* self, QPointerEvent* (*slot)() ```
void q_pointerevent_on_clone(void* self, QPointerEvent* (*slot)()) {
    QPointerEvent_OnClone((QPointerEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPointerEvent* self ```
QPointerEvent* q_pointerevent_qbase_clone(void* self) {
    return QPointerEvent_QBaseClone((QPointerEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
///
/// ``` QPointerEvent* self ```
QPointingDevice* q_pointerevent_pointing_device(void* self) {
    return QPointerEvent_PointingDevice((QPointerEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
///
/// ``` QPointerEvent* self ```
int64_t q_pointerevent_pointer_type(void* self) {
    return QPointerEvent_PointerType((QPointerEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// ``` QPointerEvent* self, uint64_t timestamp ```
void q_pointerevent_set_timestamp(void* self, uint64_t timestamp) {
    QPointerEvent_SetTimestamp((QPointerEvent*)self, timestamp);
}

/// Allows for overriding the related default method
///
/// ``` QPointerEvent* self, void (*slot)(QPointerEvent*, uint64_t) ```
void q_pointerevent_on_set_timestamp(void* self, void (*slot)(void*, uint64_t)) {
    QPointerEvent_OnSetTimestamp((QPointerEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPointerEvent* self, uint64_t timestamp ```
void q_pointerevent_qbase_set_timestamp(void* self, uint64_t timestamp) {
    QPointerEvent_QBaseSetTimestamp((QPointerEvent*)self, timestamp);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
///
/// ``` QPointerEvent* self ```
int64_t q_pointerevent_point_count(void* self) {
    return QPointerEvent_PointCount((QPointerEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#point)
///
/// ``` QPointerEvent* self, int64_t i ```
QEventPoint* q_pointerevent_point(void* self, int64_t i) {
    return QPointerEvent_Point((QPointerEvent*)self, i);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#points)
///
/// ``` QPointerEvent* self ```
libqt_list /* of QEventPoint* */ q_pointerevent_points(void* self) {
    libqt_list _arr = QPointerEvent_Points((QPointerEvent*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
///
/// ``` QPointerEvent* self, int id ```
QEventPoint* q_pointerevent_point_by_id(void* self, int id) {
    return QPointerEvent_PointById((QPointerEvent*)self, id);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
///
/// ``` QPointerEvent* self ```
bool q_pointerevent_all_points_grabbed(void* self) {
    return QPointerEvent_AllPointsGrabbed((QPointerEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#isBeginEvent)
///
/// ``` QPointerEvent* self ```
bool q_pointerevent_is_begin_event(void* self) {
    return QPointerEvent_IsBeginEvent((QPointerEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QPointerEvent* self, bool (*slot)() ```
void q_pointerevent_on_is_begin_event(void* self, bool (*slot)()) {
    QPointerEvent_OnIsBeginEvent((QPointerEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPointerEvent* self ```
bool q_pointerevent_qbase_is_begin_event(void* self) {
    return QPointerEvent_QBaseIsBeginEvent((QPointerEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#isUpdateEvent)
///
/// ``` QPointerEvent* self ```
bool q_pointerevent_is_update_event(void* self) {
    return QPointerEvent_IsUpdateEvent((QPointerEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QPointerEvent* self, bool (*slot)() ```
void q_pointerevent_on_is_update_event(void* self, bool (*slot)()) {
    QPointerEvent_OnIsUpdateEvent((QPointerEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPointerEvent* self ```
bool q_pointerevent_qbase_is_update_event(void* self) {
    return QPointerEvent_QBaseIsUpdateEvent((QPointerEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#isEndEvent)
///
/// ``` QPointerEvent* self ```
bool q_pointerevent_is_end_event(void* self) {
    return QPointerEvent_IsEndEvent((QPointerEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QPointerEvent* self, bool (*slot)() ```
void q_pointerevent_on_is_end_event(void* self, bool (*slot)()) {
    QPointerEvent_OnIsEndEvent((QPointerEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPointerEvent* self ```
bool q_pointerevent_qbase_is_end_event(void* self) {
    return QPointerEvent_QBaseIsEndEvent((QPointerEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
///
/// ``` QPointerEvent* self ```
bool q_pointerevent_all_points_accepted(void* self) {
    return QPointerEvent_AllPointsAccepted((QPointerEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// ``` QPointerEvent* self, bool accepted ```
void q_pointerevent_set_accepted(void* self, bool accepted) {
    QPointerEvent_SetAccepted((QPointerEvent*)self, accepted);
}

/// Allows for overriding the related default method
///
/// ``` QPointerEvent* self, void (*slot)(QPointerEvent*, bool) ```
void q_pointerevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QPointerEvent_OnSetAccepted((QPointerEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPointerEvent* self, bool accepted ```
void q_pointerevent_qbase_set_accepted(void* self, bool accepted) {
    QPointerEvent_QBaseSetAccepted((QPointerEvent*)self, accepted);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
///
/// ``` QPointerEvent* self, QEventPoint* point ```
QObject* q_pointerevent_exclusive_grabber(void* self, void* point) {
    return QPointerEvent_ExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
///
/// ``` QPointerEvent* self, QEventPoint* point, QObject* exclusiveGrabber ```
void q_pointerevent_set_exclusive_grabber(void* self, void* point, void* exclusiveGrabber) {
    QPointerEvent_SetExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)exclusiveGrabber);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
///
/// ``` QPointerEvent* self, QEventPoint* point ```
void q_pointerevent_clear_passive_grabbers(void* self, void* point) {
    QPointerEvent_ClearPassiveGrabbers((QPointerEvent*)self, (QEventPoint*)point);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
///
/// ``` QPointerEvent* self, QEventPoint* point, QObject* grabber ```
bool q_pointerevent_add_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_AddPassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
///
/// ``` QPointerEvent* self, QEventPoint* point, QObject* grabber ```
bool q_pointerevent_remove_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_RemovePassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// ``` QPointerEvent* self ```
QInputDevice* q_pointerevent_device(void* self) {
    return QInputEvent_Device((QInputEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// ``` QPointerEvent* self ```
int64_t q_pointerevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
///
/// ``` QPointerEvent* self ```
int64_t q_pointerevent_modifiers(void* self) {
    return QInputEvent_Modifiers((QInputEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// ``` QPointerEvent* self, int modifiers ```
void q_pointerevent_set_modifiers(void* self, int64_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// ``` QPointerEvent* self ```
uint64_t q_pointerevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QPointerEvent* self ```
int64_t q_pointerevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QPointerEvent* self ```
bool q_pointerevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QPointerEvent* self ```
bool q_pointerevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QPointerEvent* self ```
void q_pointerevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QPointerEvent* self ```
void q_pointerevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QPointerEvent* self ```
bool q_pointerevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QPointerEvent* self ```
bool q_pointerevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QPointerEvent* self ```
bool q_pointerevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_pointerevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_pointerevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Delete this object from C++ memory.
///
/// ``` QPointerEvent* self ```
void q_pointerevent_delete(void* self) {
    QPointerEvent_Delete((QPointerEvent*)(self));
}

/// https://doc.qt.io/qt-6/qsinglepointevent.html

/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
///
/// ``` QSinglePointEvent* self ```
int64_t q_singlepointevent_button(void* self) {
    return QSinglePointEvent_Button((QSinglePointEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
///
/// ``` QSinglePointEvent* self ```
int64_t q_singlepointevent_buttons(void* self) {
    return QSinglePointEvent_Buttons((QSinglePointEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
///
/// ``` QSinglePointEvent* self ```
QPointF* q_singlepointevent_position(void* self) {
    return QSinglePointEvent_Position((QSinglePointEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
///
/// ``` QSinglePointEvent* self ```
QPointF* q_singlepointevent_scene_position(void* self) {
    return QSinglePointEvent_ScenePosition((QSinglePointEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
///
/// ``` QSinglePointEvent* self ```
QPointF* q_singlepointevent_global_position(void* self) {
    return QSinglePointEvent_GlobalPosition((QSinglePointEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
///
/// ``` QSinglePointEvent* self ```
bool q_singlepointevent_is_begin_event(void* self) {
    return QSinglePointEvent_IsBeginEvent((QSinglePointEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
///
/// ``` QSinglePointEvent* self ```
bool q_singlepointevent_is_update_event(void* self) {
    return QSinglePointEvent_IsUpdateEvent((QSinglePointEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// ``` QSinglePointEvent* self ```
bool q_singlepointevent_is_end_event(void* self) {
    return QSinglePointEvent_IsEndEvent((QSinglePointEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
///
/// ``` QSinglePointEvent* self ```
QObject* q_singlepointevent_exclusive_point_grabber(void* self) {
    return QSinglePointEvent_ExclusivePointGrabber((QSinglePointEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
///
/// ``` QSinglePointEvent* self, QObject* exclusiveGrabber ```
void q_singlepointevent_set_exclusive_point_grabber(void* self, void* exclusiveGrabber) {
    QSinglePointEvent_SetExclusivePointGrabber((QSinglePointEvent*)self, (QObject*)exclusiveGrabber);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
///
/// ``` QSinglePointEvent* self ```
QPointingDevice* q_singlepointevent_pointing_device(void* self) {
    return QPointerEvent_PointingDevice((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
///
/// ``` QSinglePointEvent* self ```
int64_t q_singlepointevent_pointer_type(void* self) {
    return QPointerEvent_PointerType((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// ``` QSinglePointEvent* self, uint64_t timestamp ```
void q_singlepointevent_set_timestamp(void* self, uint64_t timestamp) {
    QPointerEvent_SetTimestamp((QPointerEvent*)self, timestamp);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
///
/// ``` QSinglePointEvent* self ```
int64_t q_singlepointevent_point_count(void* self) {
    return QPointerEvent_PointCount((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#point)
///
/// ``` QSinglePointEvent* self, int64_t i ```
QEventPoint* q_singlepointevent_point(void* self, int64_t i) {
    return QPointerEvent_Point((QPointerEvent*)self, i);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#points)
///
/// ``` QSinglePointEvent* self ```
libqt_list /* of QEventPoint* */ q_singlepointevent_points(void* self) {
    libqt_list _arr = QPointerEvent_Points((QPointerEvent*)self);
    return _arr;
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
///
/// ``` QSinglePointEvent* self, int id ```
QEventPoint* q_singlepointevent_point_by_id(void* self, int id) {
    return QPointerEvent_PointById((QPointerEvent*)self, id);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
///
/// ``` QSinglePointEvent* self ```
bool q_singlepointevent_all_points_grabbed(void* self) {
    return QPointerEvent_AllPointsGrabbed((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
///
/// ``` QSinglePointEvent* self ```
bool q_singlepointevent_all_points_accepted(void* self) {
    return QPointerEvent_AllPointsAccepted((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// ``` QSinglePointEvent* self, bool accepted ```
void q_singlepointevent_set_accepted(void* self, bool accepted) {
    QPointerEvent_SetAccepted((QPointerEvent*)self, accepted);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
///
/// ``` QSinglePointEvent* self, QEventPoint* point ```
QObject* q_singlepointevent_exclusive_grabber(void* self, void* point) {
    return QPointerEvent_ExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
///
/// ``` QSinglePointEvent* self, QEventPoint* point, QObject* exclusiveGrabber ```
void q_singlepointevent_set_exclusive_grabber(void* self, void* point, void* exclusiveGrabber) {
    QPointerEvent_SetExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)exclusiveGrabber);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
///
/// ``` QSinglePointEvent* self, QEventPoint* point ```
void q_singlepointevent_clear_passive_grabbers(void* self, void* point) {
    QPointerEvent_ClearPassiveGrabbers((QPointerEvent*)self, (QEventPoint*)point);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
///
/// ``` QSinglePointEvent* self, QEventPoint* point, QObject* grabber ```
bool q_singlepointevent_add_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_AddPassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
///
/// ``` QSinglePointEvent* self, QEventPoint* point, QObject* grabber ```
bool q_singlepointevent_remove_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_RemovePassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// ``` QSinglePointEvent* self ```
QInputDevice* q_singlepointevent_device(void* self) {
    return QInputEvent_Device((QInputEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// ``` QSinglePointEvent* self ```
int64_t q_singlepointevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
///
/// ``` QSinglePointEvent* self ```
int64_t q_singlepointevent_modifiers(void* self) {
    return QInputEvent_Modifiers((QInputEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// ``` QSinglePointEvent* self, int modifiers ```
void q_singlepointevent_set_modifiers(void* self, int64_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// ``` QSinglePointEvent* self ```
uint64_t q_singlepointevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QSinglePointEvent* self ```
int64_t q_singlepointevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QSinglePointEvent* self ```
bool q_singlepointevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QSinglePointEvent* self ```
bool q_singlepointevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QSinglePointEvent* self ```
void q_singlepointevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QSinglePointEvent* self ```
void q_singlepointevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QSinglePointEvent* self ```
bool q_singlepointevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QSinglePointEvent* self ```
bool q_singlepointevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QSinglePointEvent* self ```
bool q_singlepointevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_singlepointevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_singlepointevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Delete this object from C++ memory.
///
/// ``` QSinglePointEvent* self ```
void q_singlepointevent_delete(void* self) {
    QSinglePointEvent_Delete((QSinglePointEvent*)(self));
}

/// https://doc.qt.io/qt-6/qenterevent.html

/// q_enterevent_new constructs a new QEnterEvent object.
///
/// ``` QPointF* localPos, QPointF* scenePos, QPointF* globalPos ```
QEnterEvent* q_enterevent_new(void* localPos, void* scenePos, void* globalPos) {
    return QEnterEvent_new((QPointF*)localPos, (QPointF*)scenePos, (QPointF*)globalPos);
}

/// q_enterevent_new2 constructs a new QEnterEvent object.
///
/// ``` QPointF* localPos, QPointF* scenePos, QPointF* globalPos, QPointingDevice* device ```
QEnterEvent* q_enterevent_new2(void* localPos, void* scenePos, void* globalPos, void* device) {
    return QEnterEvent_new2((QPointF*)localPos, (QPointF*)scenePos, (QPointF*)globalPos, (QPointingDevice*)device);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qenterevent.html#clone)
///
/// ``` QEnterEvent* self ```
QEnterEvent* q_enterevent_clone(void* self) {
    return QEnterEvent_Clone((QEnterEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QEnterEvent* self, QEnterEvent* (*slot)() ```
void q_enterevent_on_clone(void* self, QEnterEvent* (*slot)()) {
    QEnterEvent_OnClone((QEnterEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QEnterEvent* self ```
QEnterEvent* q_enterevent_qbase_clone(void* self) {
    return QEnterEvent_QBaseClone((QEnterEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qenterevent.html#pos)
///
/// ``` QEnterEvent* self ```
QPoint* q_enterevent_pos(void* self) {
    return QEnterEvent_Pos((QEnterEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qenterevent.html#globalPos)
///
/// ``` QEnterEvent* self ```
QPoint* q_enterevent_global_pos(void* self) {
    return QEnterEvent_GlobalPos((QEnterEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qenterevent.html#x)
///
/// ``` QEnterEvent* self ```
int32_t q_enterevent_x(void* self) {
    return QEnterEvent_X((QEnterEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qenterevent.html#y)
///
/// ``` QEnterEvent* self ```
int32_t q_enterevent_y(void* self) {
    return QEnterEvent_Y((QEnterEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qenterevent.html#globalX)
///
/// ``` QEnterEvent* self ```
int32_t q_enterevent_global_x(void* self) {
    return QEnterEvent_GlobalX((QEnterEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qenterevent.html#globalY)
///
/// ``` QEnterEvent* self ```
int32_t q_enterevent_global_y(void* self) {
    return QEnterEvent_GlobalY((QEnterEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qenterevent.html#localPos)
///
/// ``` QEnterEvent* self ```
QPointF* q_enterevent_local_pos(void* self) {
    return QEnterEvent_LocalPos((QEnterEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qenterevent.html#windowPos)
///
/// ``` QEnterEvent* self ```
QPointF* q_enterevent_window_pos(void* self) {
    return QEnterEvent_WindowPos((QEnterEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qenterevent.html#screenPos)
///
/// ``` QEnterEvent* self ```
QPointF* q_enterevent_screen_pos(void* self) {
    return QEnterEvent_ScreenPos((QEnterEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
///
/// ``` QEnterEvent* self ```
int64_t q_enterevent_button(void* self) {
    return QSinglePointEvent_Button((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
///
/// ``` QEnterEvent* self ```
int64_t q_enterevent_buttons(void* self) {
    return QSinglePointEvent_Buttons((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
///
/// ``` QEnterEvent* self ```
QPointF* q_enterevent_position(void* self) {
    return QSinglePointEvent_Position((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
///
/// ``` QEnterEvent* self ```
QPointF* q_enterevent_scene_position(void* self) {
    return QSinglePointEvent_ScenePosition((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
///
/// ``` QEnterEvent* self ```
QPointF* q_enterevent_global_position(void* self) {
    return QSinglePointEvent_GlobalPosition((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
///
/// ``` QEnterEvent* self ```
QObject* q_enterevent_exclusive_point_grabber(void* self) {
    return QSinglePointEvent_ExclusivePointGrabber((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
///
/// ``` QEnterEvent* self, QObject* exclusiveGrabber ```
void q_enterevent_set_exclusive_point_grabber(void* self, void* exclusiveGrabber) {
    QSinglePointEvent_SetExclusivePointGrabber((QSinglePointEvent*)self, (QObject*)exclusiveGrabber);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
///
/// ``` QEnterEvent* self ```
QPointingDevice* q_enterevent_pointing_device(void* self) {
    return QPointerEvent_PointingDevice((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
///
/// ``` QEnterEvent* self ```
int64_t q_enterevent_pointer_type(void* self) {
    return QPointerEvent_PointerType((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
///
/// ``` QEnterEvent* self ```
int64_t q_enterevent_point_count(void* self) {
    return QPointerEvent_PointCount((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#point)
///
/// ``` QEnterEvent* self, int64_t i ```
QEventPoint* q_enterevent_point(void* self, int64_t i) {
    return QPointerEvent_Point((QPointerEvent*)self, i);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#points)
///
/// ``` QEnterEvent* self ```
libqt_list /* of QEventPoint* */ q_enterevent_points(void* self) {
    libqt_list _arr = QPointerEvent_Points((QPointerEvent*)self);
    return _arr;
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
///
/// ``` QEnterEvent* self, int id ```
QEventPoint* q_enterevent_point_by_id(void* self, int id) {
    return QPointerEvent_PointById((QPointerEvent*)self, id);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
///
/// ``` QEnterEvent* self ```
bool q_enterevent_all_points_grabbed(void* self) {
    return QPointerEvent_AllPointsGrabbed((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
///
/// ``` QEnterEvent* self ```
bool q_enterevent_all_points_accepted(void* self) {
    return QPointerEvent_AllPointsAccepted((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
///
/// ``` QEnterEvent* self, QEventPoint* point ```
QObject* q_enterevent_exclusive_grabber(void* self, void* point) {
    return QPointerEvent_ExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
///
/// ``` QEnterEvent* self, QEventPoint* point, QObject* exclusiveGrabber ```
void q_enterevent_set_exclusive_grabber(void* self, void* point, void* exclusiveGrabber) {
    QPointerEvent_SetExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)exclusiveGrabber);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
///
/// ``` QEnterEvent* self, QEventPoint* point ```
void q_enterevent_clear_passive_grabbers(void* self, void* point) {
    QPointerEvent_ClearPassiveGrabbers((QPointerEvent*)self, (QEventPoint*)point);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
///
/// ``` QEnterEvent* self, QEventPoint* point, QObject* grabber ```
bool q_enterevent_add_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_AddPassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
///
/// ``` QEnterEvent* self, QEventPoint* point, QObject* grabber ```
bool q_enterevent_remove_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_RemovePassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// ``` QEnterEvent* self ```
QInputDevice* q_enterevent_device(void* self) {
    return QInputEvent_Device((QInputEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// ``` QEnterEvent* self ```
int64_t q_enterevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
///
/// ``` QEnterEvent* self ```
int64_t q_enterevent_modifiers(void* self) {
    return QInputEvent_Modifiers((QInputEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// ``` QEnterEvent* self, int modifiers ```
void q_enterevent_set_modifiers(void* self, int64_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// ``` QEnterEvent* self ```
uint64_t q_enterevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QEnterEvent* self ```
int64_t q_enterevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QEnterEvent* self ```
bool q_enterevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QEnterEvent* self ```
bool q_enterevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QEnterEvent* self ```
void q_enterevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QEnterEvent* self ```
void q_enterevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QEnterEvent* self ```
bool q_enterevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QEnterEvent* self ```
bool q_enterevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QEnterEvent* self ```
bool q_enterevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_enterevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_enterevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QEnterEvent* self ```
bool q_enterevent_is_begin_event(void* self) {
    return QEnterEvent_IsBeginEvent((QEnterEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QEnterEvent* self ```
bool q_enterevent_qbase_is_begin_event(void* self) {
    return QEnterEvent_QBaseIsBeginEvent((QEnterEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QEnterEvent* self, bool (*slot)() ```
void q_enterevent_on_is_begin_event(void* self, bool (*slot)()) {
    QEnterEvent_OnIsBeginEvent((QEnterEvent*)self, (intptr_t)slot);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QEnterEvent* self ```
bool q_enterevent_is_update_event(void* self) {
    return QEnterEvent_IsUpdateEvent((QEnterEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QEnterEvent* self ```
bool q_enterevent_qbase_is_update_event(void* self) {
    return QEnterEvent_QBaseIsUpdateEvent((QEnterEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QEnterEvent* self, bool (*slot)() ```
void q_enterevent_on_is_update_event(void* self, bool (*slot)()) {
    QEnterEvent_OnIsUpdateEvent((QEnterEvent*)self, (intptr_t)slot);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QEnterEvent* self ```
bool q_enterevent_is_end_event(void* self) {
    return QEnterEvent_IsEndEvent((QEnterEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QEnterEvent* self ```
bool q_enterevent_qbase_is_end_event(void* self) {
    return QEnterEvent_QBaseIsEndEvent((QEnterEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QEnterEvent* self, bool (*slot)() ```
void q_enterevent_on_is_end_event(void* self, bool (*slot)()) {
    QEnterEvent_OnIsEndEvent((QEnterEvent*)self, (intptr_t)slot);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QEnterEvent* self, uint64_t timestamp ```
void q_enterevent_set_timestamp(void* self, uint64_t timestamp) {
    QEnterEvent_SetTimestamp((QEnterEvent*)self, timestamp);
}

/// Inherited from QPointerEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QEnterEvent* self, uint64_t timestamp ```
void q_enterevent_qbase_set_timestamp(void* self, uint64_t timestamp) {
    QEnterEvent_QBaseSetTimestamp((QEnterEvent*)self, timestamp);
}

/// Inherited from QPointerEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QEnterEvent* self, void (*slot)(QEnterEvent*, uint64_t) ```
void q_enterevent_on_set_timestamp(void* self, void (*slot)(void*, uint64_t)) {
    QEnterEvent_OnSetTimestamp((QEnterEvent*)self, (intptr_t)slot);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QEnterEvent* self, bool accepted ```
void q_enterevent_set_accepted(void* self, bool accepted) {
    QEnterEvent_SetAccepted((QEnterEvent*)self, accepted);
}

/// Inherited from QPointerEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QEnterEvent* self, bool accepted ```
void q_enterevent_qbase_set_accepted(void* self, bool accepted) {
    QEnterEvent_QBaseSetAccepted((QEnterEvent*)self, accepted);
}

/// Inherited from QPointerEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QEnterEvent* self, void (*slot)(QEnterEvent*, bool) ```
void q_enterevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QEnterEvent_OnSetAccepted((QEnterEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QEnterEvent* self ```
void q_enterevent_delete(void* self) {
    QEnterEvent_Delete((QEnterEvent*)(self));
}

/// https://doc.qt.io/qt-6/qmouseevent.html

/// q_mouseevent_new constructs a new QMouseEvent object.
///
/// ``` enum QEvent__Type typeVal, QPointF* localPos, enum Qt__MouseButton button, int buttons, int modifiers ```
QMouseEvent* q_mouseevent_new(int64_t typeVal, void* localPos, int64_t button, int64_t buttons, int64_t modifiers) {
    return QMouseEvent_new(typeVal, (QPointF*)localPos, button, buttons, modifiers);
}

/// q_mouseevent_new2 constructs a new QMouseEvent object.
///
/// ``` enum QEvent__Type typeVal, QPointF* localPos, QPointF* globalPos, enum Qt__MouseButton button, int buttons, int modifiers ```
QMouseEvent* q_mouseevent_new2(int64_t typeVal, void* localPos, void* globalPos, int64_t button, int64_t buttons, int64_t modifiers) {
    return QMouseEvent_new2(typeVal, (QPointF*)localPos, (QPointF*)globalPos, button, buttons, modifiers);
}

/// q_mouseevent_new3 constructs a new QMouseEvent object.
///
/// ``` enum QEvent__Type typeVal, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, enum Qt__MouseButton button, int buttons, int modifiers ```
QMouseEvent* q_mouseevent_new3(int64_t typeVal, void* localPos, void* scenePos, void* globalPos, int64_t button, int64_t buttons, int64_t modifiers) {
    return QMouseEvent_new3(typeVal, (QPointF*)localPos, (QPointF*)scenePos, (QPointF*)globalPos, button, buttons, modifiers);
}

/// q_mouseevent_new4 constructs a new QMouseEvent object.
///
/// ``` enum QEvent__Type typeVal, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, enum Qt__MouseButton button, int buttons, int modifiers, enum Qt__MouseEventSource source ```
QMouseEvent* q_mouseevent_new4(int64_t typeVal, void* localPos, void* scenePos, void* globalPos, int64_t button, int64_t buttons, int64_t modifiers, int64_t source) {
    return QMouseEvent_new4(typeVal, (QPointF*)localPos, (QPointF*)scenePos, (QPointF*)globalPos, button, buttons, modifiers, source);
}

/// q_mouseevent_new5 constructs a new QMouseEvent object.
///
/// ``` enum QEvent__Type typeVal, QPointF* localPos, enum Qt__MouseButton button, int buttons, int modifiers, QPointingDevice* device ```
QMouseEvent* q_mouseevent_new5(int64_t typeVal, void* localPos, int64_t button, int64_t buttons, int64_t modifiers, void* device) {
    return QMouseEvent_new5(typeVal, (QPointF*)localPos, button, buttons, modifiers, (QPointingDevice*)device);
}

/// q_mouseevent_new6 constructs a new QMouseEvent object.
///
/// ``` enum QEvent__Type typeVal, QPointF* localPos, QPointF* globalPos, enum Qt__MouseButton button, int buttons, int modifiers, QPointingDevice* device ```
QMouseEvent* q_mouseevent_new6(int64_t typeVal, void* localPos, void* globalPos, int64_t button, int64_t buttons, int64_t modifiers, void* device) {
    return QMouseEvent_new6(typeVal, (QPointF*)localPos, (QPointF*)globalPos, button, buttons, modifiers, (QPointingDevice*)device);
}

/// q_mouseevent_new7 constructs a new QMouseEvent object.
///
/// ``` enum QEvent__Type typeVal, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, enum Qt__MouseButton button, int buttons, int modifiers, QPointingDevice* device ```
QMouseEvent* q_mouseevent_new7(int64_t typeVal, void* localPos, void* scenePos, void* globalPos, int64_t button, int64_t buttons, int64_t modifiers, void* device) {
    return QMouseEvent_new7(typeVal, (QPointF*)localPos, (QPointF*)scenePos, (QPointF*)globalPos, button, buttons, modifiers, (QPointingDevice*)device);
}

/// q_mouseevent_new8 constructs a new QMouseEvent object.
///
/// ``` enum QEvent__Type typeVal, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, enum Qt__MouseButton button, int buttons, int modifiers, enum Qt__MouseEventSource source, QPointingDevice* device ```
QMouseEvent* q_mouseevent_new8(int64_t typeVal, void* localPos, void* scenePos, void* globalPos, int64_t button, int64_t buttons, int64_t modifiers, int64_t source, void* device) {
    return QMouseEvent_new8(typeVal, (QPointF*)localPos, (QPointF*)scenePos, (QPointF*)globalPos, button, buttons, modifiers, source, (QPointingDevice*)device);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmouseevent.html#clone)
///
/// ``` QMouseEvent* self ```
QMouseEvent* q_mouseevent_clone(void* self) {
    return QMouseEvent_Clone((QMouseEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QMouseEvent* self, QMouseEvent* (*slot)() ```
void q_mouseevent_on_clone(void* self, QMouseEvent* (*slot)()) {
    QMouseEvent_OnClone((QMouseEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMouseEvent* self ```
QMouseEvent* q_mouseevent_qbase_clone(void* self) {
    return QMouseEvent_QBaseClone((QMouseEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmouseevent.html#pos)
///
/// ``` QMouseEvent* self ```
QPoint* q_mouseevent_pos(void* self) {
    return QMouseEvent_Pos((QMouseEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmouseevent.html#globalPos)
///
/// ``` QMouseEvent* self ```
QPoint* q_mouseevent_global_pos(void* self) {
    return QMouseEvent_GlobalPos((QMouseEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmouseevent.html#x)
///
/// ``` QMouseEvent* self ```
int32_t q_mouseevent_x(void* self) {
    return QMouseEvent_X((QMouseEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmouseevent.html#y)
///
/// ``` QMouseEvent* self ```
int32_t q_mouseevent_y(void* self) {
    return QMouseEvent_Y((QMouseEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmouseevent.html#globalX)
///
/// ``` QMouseEvent* self ```
int32_t q_mouseevent_global_x(void* self) {
    return QMouseEvent_GlobalX((QMouseEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmouseevent.html#globalY)
///
/// ``` QMouseEvent* self ```
int32_t q_mouseevent_global_y(void* self) {
    return QMouseEvent_GlobalY((QMouseEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmouseevent.html#localPos)
///
/// ``` QMouseEvent* self ```
QPointF* q_mouseevent_local_pos(void* self) {
    return QMouseEvent_LocalPos((QMouseEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmouseevent.html#windowPos)
///
/// ``` QMouseEvent* self ```
QPointF* q_mouseevent_window_pos(void* self) {
    return QMouseEvent_WindowPos((QMouseEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmouseevent.html#screenPos)
///
/// ``` QMouseEvent* self ```
QPointF* q_mouseevent_screen_pos(void* self) {
    return QMouseEvent_ScreenPos((QMouseEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmouseevent.html#source)
///
/// ``` QMouseEvent* self ```
int64_t q_mouseevent_source(void* self) {
    return QMouseEvent_Source((QMouseEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmouseevent.html#flags)
///
/// ``` QMouseEvent* self ```
int64_t q_mouseevent_flags(void* self) {
    return QMouseEvent_Flags((QMouseEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
///
/// ``` QMouseEvent* self ```
int64_t q_mouseevent_button(void* self) {
    return QSinglePointEvent_Button((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
///
/// ``` QMouseEvent* self ```
int64_t q_mouseevent_buttons(void* self) {
    return QSinglePointEvent_Buttons((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
///
/// ``` QMouseEvent* self ```
QPointF* q_mouseevent_position(void* self) {
    return QSinglePointEvent_Position((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
///
/// ``` QMouseEvent* self ```
QPointF* q_mouseevent_scene_position(void* self) {
    return QSinglePointEvent_ScenePosition((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
///
/// ``` QMouseEvent* self ```
QPointF* q_mouseevent_global_position(void* self) {
    return QSinglePointEvent_GlobalPosition((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
///
/// ``` QMouseEvent* self ```
QObject* q_mouseevent_exclusive_point_grabber(void* self) {
    return QSinglePointEvent_ExclusivePointGrabber((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
///
/// ``` QMouseEvent* self, QObject* exclusiveGrabber ```
void q_mouseevent_set_exclusive_point_grabber(void* self, void* exclusiveGrabber) {
    QSinglePointEvent_SetExclusivePointGrabber((QSinglePointEvent*)self, (QObject*)exclusiveGrabber);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
///
/// ``` QMouseEvent* self ```
QPointingDevice* q_mouseevent_pointing_device(void* self) {
    return QPointerEvent_PointingDevice((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
///
/// ``` QMouseEvent* self ```
int64_t q_mouseevent_pointer_type(void* self) {
    return QPointerEvent_PointerType((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
///
/// ``` QMouseEvent* self ```
int64_t q_mouseevent_point_count(void* self) {
    return QPointerEvent_PointCount((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#point)
///
/// ``` QMouseEvent* self, int64_t i ```
QEventPoint* q_mouseevent_point(void* self, int64_t i) {
    return QPointerEvent_Point((QPointerEvent*)self, i);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#points)
///
/// ``` QMouseEvent* self ```
libqt_list /* of QEventPoint* */ q_mouseevent_points(void* self) {
    libqt_list _arr = QPointerEvent_Points((QPointerEvent*)self);
    return _arr;
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
///
/// ``` QMouseEvent* self, int id ```
QEventPoint* q_mouseevent_point_by_id(void* self, int id) {
    return QPointerEvent_PointById((QPointerEvent*)self, id);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
///
/// ``` QMouseEvent* self ```
bool q_mouseevent_all_points_grabbed(void* self) {
    return QPointerEvent_AllPointsGrabbed((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
///
/// ``` QMouseEvent* self ```
bool q_mouseevent_all_points_accepted(void* self) {
    return QPointerEvent_AllPointsAccepted((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
///
/// ``` QMouseEvent* self, QEventPoint* point ```
QObject* q_mouseevent_exclusive_grabber(void* self, void* point) {
    return QPointerEvent_ExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
///
/// ``` QMouseEvent* self, QEventPoint* point, QObject* exclusiveGrabber ```
void q_mouseevent_set_exclusive_grabber(void* self, void* point, void* exclusiveGrabber) {
    QPointerEvent_SetExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)exclusiveGrabber);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
///
/// ``` QMouseEvent* self, QEventPoint* point ```
void q_mouseevent_clear_passive_grabbers(void* self, void* point) {
    QPointerEvent_ClearPassiveGrabbers((QPointerEvent*)self, (QEventPoint*)point);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
///
/// ``` QMouseEvent* self, QEventPoint* point, QObject* grabber ```
bool q_mouseevent_add_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_AddPassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
///
/// ``` QMouseEvent* self, QEventPoint* point, QObject* grabber ```
bool q_mouseevent_remove_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_RemovePassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// ``` QMouseEvent* self ```
QInputDevice* q_mouseevent_device(void* self) {
    return QInputEvent_Device((QInputEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// ``` QMouseEvent* self ```
int64_t q_mouseevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
///
/// ``` QMouseEvent* self ```
int64_t q_mouseevent_modifiers(void* self) {
    return QInputEvent_Modifiers((QInputEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// ``` QMouseEvent* self, int modifiers ```
void q_mouseevent_set_modifiers(void* self, int64_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// ``` QMouseEvent* self ```
uint64_t q_mouseevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QMouseEvent* self ```
int64_t q_mouseevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QMouseEvent* self ```
bool q_mouseevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QMouseEvent* self ```
bool q_mouseevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QMouseEvent* self ```
void q_mouseevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QMouseEvent* self ```
void q_mouseevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QMouseEvent* self ```
bool q_mouseevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QMouseEvent* self ```
bool q_mouseevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QMouseEvent* self ```
bool q_mouseevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_mouseevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_mouseevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMouseEvent* self ```
bool q_mouseevent_is_begin_event(void* self) {
    return QMouseEvent_IsBeginEvent((QMouseEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMouseEvent* self ```
bool q_mouseevent_qbase_is_begin_event(void* self) {
    return QMouseEvent_QBaseIsBeginEvent((QMouseEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMouseEvent* self, bool (*slot)() ```
void q_mouseevent_on_is_begin_event(void* self, bool (*slot)()) {
    QMouseEvent_OnIsBeginEvent((QMouseEvent*)self, (intptr_t)slot);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMouseEvent* self ```
bool q_mouseevent_is_update_event(void* self) {
    return QMouseEvent_IsUpdateEvent((QMouseEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMouseEvent* self ```
bool q_mouseevent_qbase_is_update_event(void* self) {
    return QMouseEvent_QBaseIsUpdateEvent((QMouseEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMouseEvent* self, bool (*slot)() ```
void q_mouseevent_on_is_update_event(void* self, bool (*slot)()) {
    QMouseEvent_OnIsUpdateEvent((QMouseEvent*)self, (intptr_t)slot);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMouseEvent* self ```
bool q_mouseevent_is_end_event(void* self) {
    return QMouseEvent_IsEndEvent((QMouseEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMouseEvent* self ```
bool q_mouseevent_qbase_is_end_event(void* self) {
    return QMouseEvent_QBaseIsEndEvent((QMouseEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMouseEvent* self, bool (*slot)() ```
void q_mouseevent_on_is_end_event(void* self, bool (*slot)()) {
    QMouseEvent_OnIsEndEvent((QMouseEvent*)self, (intptr_t)slot);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMouseEvent* self, uint64_t timestamp ```
void q_mouseevent_set_timestamp(void* self, uint64_t timestamp) {
    QMouseEvent_SetTimestamp((QMouseEvent*)self, timestamp);
}

/// Inherited from QPointerEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMouseEvent* self, uint64_t timestamp ```
void q_mouseevent_qbase_set_timestamp(void* self, uint64_t timestamp) {
    QMouseEvent_QBaseSetTimestamp((QMouseEvent*)self, timestamp);
}

/// Inherited from QPointerEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMouseEvent* self, void (*slot)(QMouseEvent*, uint64_t) ```
void q_mouseevent_on_set_timestamp(void* self, void (*slot)(void*, uint64_t)) {
    QMouseEvent_OnSetTimestamp((QMouseEvent*)self, (intptr_t)slot);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMouseEvent* self, bool accepted ```
void q_mouseevent_set_accepted(void* self, bool accepted) {
    QMouseEvent_SetAccepted((QMouseEvent*)self, accepted);
}

/// Inherited from QPointerEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMouseEvent* self, bool accepted ```
void q_mouseevent_qbase_set_accepted(void* self, bool accepted) {
    QMouseEvent_QBaseSetAccepted((QMouseEvent*)self, accepted);
}

/// Inherited from QPointerEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMouseEvent* self, void (*slot)(QMouseEvent*, bool) ```
void q_mouseevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QMouseEvent_OnSetAccepted((QMouseEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QMouseEvent* self ```
void q_mouseevent_delete(void* self) {
    QMouseEvent_Delete((QMouseEvent*)(self));
}

/// https://doc.qt.io/qt-6/qhoverevent.html

/// q_hoverevent_new constructs a new QHoverEvent object.
///
/// ``` enum QEvent__Type typeVal, QPointF* scenePos, QPointF* globalPos, QPointF* oldPos ```
QHoverEvent* q_hoverevent_new(int64_t typeVal, void* scenePos, void* globalPos, void* oldPos) {
    return QHoverEvent_new(typeVal, (QPointF*)scenePos, (QPointF*)globalPos, (QPointF*)oldPos);
}

/// q_hoverevent_new2 constructs a new QHoverEvent object.
///
/// ``` enum QEvent__Type typeVal, QPointF* pos, QPointF* oldPos ```
QHoverEvent* q_hoverevent_new2(int64_t typeVal, void* pos, void* oldPos) {
    return QHoverEvent_new2(typeVal, (QPointF*)pos, (QPointF*)oldPos);
}

/// q_hoverevent_new3 constructs a new QHoverEvent object.
///
/// ``` enum QEvent__Type typeVal, QPointF* scenePos, QPointF* globalPos, QPointF* oldPos, int modifiers ```
QHoverEvent* q_hoverevent_new3(int64_t typeVal, void* scenePos, void* globalPos, void* oldPos, int64_t modifiers) {
    return QHoverEvent_new3(typeVal, (QPointF*)scenePos, (QPointF*)globalPos, (QPointF*)oldPos, modifiers);
}

/// q_hoverevent_new4 constructs a new QHoverEvent object.
///
/// ``` enum QEvent__Type typeVal, QPointF* scenePos, QPointF* globalPos, QPointF* oldPos, int modifiers, QPointingDevice* device ```
QHoverEvent* q_hoverevent_new4(int64_t typeVal, void* scenePos, void* globalPos, void* oldPos, int64_t modifiers, void* device) {
    return QHoverEvent_new4(typeVal, (QPointF*)scenePos, (QPointF*)globalPos, (QPointF*)oldPos, modifiers, (QPointingDevice*)device);
}

/// q_hoverevent_new5 constructs a new QHoverEvent object.
///
/// ``` enum QEvent__Type typeVal, QPointF* pos, QPointF* oldPos, int modifiers ```
QHoverEvent* q_hoverevent_new5(int64_t typeVal, void* pos, void* oldPos, int64_t modifiers) {
    return QHoverEvent_new5(typeVal, (QPointF*)pos, (QPointF*)oldPos, modifiers);
}

/// q_hoverevent_new6 constructs a new QHoverEvent object.
///
/// ``` enum QEvent__Type typeVal, QPointF* pos, QPointF* oldPos, int modifiers, QPointingDevice* device ```
QHoverEvent* q_hoverevent_new6(int64_t typeVal, void* pos, void* oldPos, int64_t modifiers, void* device) {
    return QHoverEvent_new6(typeVal, (QPointF*)pos, (QPointF*)oldPos, modifiers, (QPointingDevice*)device);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhoverevent.html#clone)
///
/// ``` QHoverEvent* self ```
QHoverEvent* q_hoverevent_clone(void* self) {
    return QHoverEvent_Clone((QHoverEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QHoverEvent* self, QHoverEvent* (*slot)() ```
void q_hoverevent_on_clone(void* self, QHoverEvent* (*slot)()) {
    QHoverEvent_OnClone((QHoverEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHoverEvent* self ```
QHoverEvent* q_hoverevent_qbase_clone(void* self) {
    return QHoverEvent_QBaseClone((QHoverEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhoverevent.html#pos)
///
/// ``` QHoverEvent* self ```
QPoint* q_hoverevent_pos(void* self) {
    return QHoverEvent_Pos((QHoverEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhoverevent.html#posF)
///
/// ``` QHoverEvent* self ```
QPointF* q_hoverevent_pos_f(void* self) {
    return QHoverEvent_PosF((QHoverEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhoverevent.html#isUpdateEvent)
///
/// ``` QHoverEvent* self ```
bool q_hoverevent_is_update_event(void* self) {
    return QHoverEvent_IsUpdateEvent((QHoverEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QHoverEvent* self, bool (*slot)() ```
void q_hoverevent_on_is_update_event(void* self, bool (*slot)()) {
    QHoverEvent_OnIsUpdateEvent((QHoverEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHoverEvent* self ```
bool q_hoverevent_qbase_is_update_event(void* self) {
    return QHoverEvent_QBaseIsUpdateEvent((QHoverEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhoverevent.html#oldPos)
///
/// ``` QHoverEvent* self ```
QPoint* q_hoverevent_old_pos(void* self) {
    return QHoverEvent_OldPos((QHoverEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhoverevent.html#oldPosF)
///
/// ``` QHoverEvent* self ```
QPointF* q_hoverevent_old_pos_f(void* self) {
    return QHoverEvent_OldPosF((QHoverEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
///
/// ``` QHoverEvent* self ```
int64_t q_hoverevent_button(void* self) {
    return QSinglePointEvent_Button((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
///
/// ``` QHoverEvent* self ```
int64_t q_hoverevent_buttons(void* self) {
    return QSinglePointEvent_Buttons((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
///
/// ``` QHoverEvent* self ```
QPointF* q_hoverevent_position(void* self) {
    return QSinglePointEvent_Position((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
///
/// ``` QHoverEvent* self ```
QPointF* q_hoverevent_scene_position(void* self) {
    return QSinglePointEvent_ScenePosition((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
///
/// ``` QHoverEvent* self ```
QPointF* q_hoverevent_global_position(void* self) {
    return QSinglePointEvent_GlobalPosition((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
///
/// ``` QHoverEvent* self ```
QObject* q_hoverevent_exclusive_point_grabber(void* self) {
    return QSinglePointEvent_ExclusivePointGrabber((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
///
/// ``` QHoverEvent* self, QObject* exclusiveGrabber ```
void q_hoverevent_set_exclusive_point_grabber(void* self, void* exclusiveGrabber) {
    QSinglePointEvent_SetExclusivePointGrabber((QSinglePointEvent*)self, (QObject*)exclusiveGrabber);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
///
/// ``` QHoverEvent* self ```
QPointingDevice* q_hoverevent_pointing_device(void* self) {
    return QPointerEvent_PointingDevice((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
///
/// ``` QHoverEvent* self ```
int64_t q_hoverevent_pointer_type(void* self) {
    return QPointerEvent_PointerType((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
///
/// ``` QHoverEvent* self ```
int64_t q_hoverevent_point_count(void* self) {
    return QPointerEvent_PointCount((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#point)
///
/// ``` QHoverEvent* self, int64_t i ```
QEventPoint* q_hoverevent_point(void* self, int64_t i) {
    return QPointerEvent_Point((QPointerEvent*)self, i);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#points)
///
/// ``` QHoverEvent* self ```
libqt_list /* of QEventPoint* */ q_hoverevent_points(void* self) {
    libqt_list _arr = QPointerEvent_Points((QPointerEvent*)self);
    return _arr;
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
///
/// ``` QHoverEvent* self, int id ```
QEventPoint* q_hoverevent_point_by_id(void* self, int id) {
    return QPointerEvent_PointById((QPointerEvent*)self, id);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
///
/// ``` QHoverEvent* self ```
bool q_hoverevent_all_points_grabbed(void* self) {
    return QPointerEvent_AllPointsGrabbed((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
///
/// ``` QHoverEvent* self ```
bool q_hoverevent_all_points_accepted(void* self) {
    return QPointerEvent_AllPointsAccepted((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
///
/// ``` QHoverEvent* self, QEventPoint* point ```
QObject* q_hoverevent_exclusive_grabber(void* self, void* point) {
    return QPointerEvent_ExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
///
/// ``` QHoverEvent* self, QEventPoint* point, QObject* exclusiveGrabber ```
void q_hoverevent_set_exclusive_grabber(void* self, void* point, void* exclusiveGrabber) {
    QPointerEvent_SetExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)exclusiveGrabber);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
///
/// ``` QHoverEvent* self, QEventPoint* point ```
void q_hoverevent_clear_passive_grabbers(void* self, void* point) {
    QPointerEvent_ClearPassiveGrabbers((QPointerEvent*)self, (QEventPoint*)point);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
///
/// ``` QHoverEvent* self, QEventPoint* point, QObject* grabber ```
bool q_hoverevent_add_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_AddPassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
///
/// ``` QHoverEvent* self, QEventPoint* point, QObject* grabber ```
bool q_hoverevent_remove_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_RemovePassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// ``` QHoverEvent* self ```
QInputDevice* q_hoverevent_device(void* self) {
    return QInputEvent_Device((QInputEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// ``` QHoverEvent* self ```
int64_t q_hoverevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
///
/// ``` QHoverEvent* self ```
int64_t q_hoverevent_modifiers(void* self) {
    return QInputEvent_Modifiers((QInputEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// ``` QHoverEvent* self, int modifiers ```
void q_hoverevent_set_modifiers(void* self, int64_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// ``` QHoverEvent* self ```
uint64_t q_hoverevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QHoverEvent* self ```
int64_t q_hoverevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QHoverEvent* self ```
bool q_hoverevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QHoverEvent* self ```
bool q_hoverevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QHoverEvent* self ```
void q_hoverevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QHoverEvent* self ```
void q_hoverevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QHoverEvent* self ```
bool q_hoverevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QHoverEvent* self ```
bool q_hoverevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QHoverEvent* self ```
bool q_hoverevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_hoverevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_hoverevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHoverEvent* self ```
bool q_hoverevent_is_begin_event(void* self) {
    return QHoverEvent_IsBeginEvent((QHoverEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHoverEvent* self ```
bool q_hoverevent_qbase_is_begin_event(void* self) {
    return QHoverEvent_QBaseIsBeginEvent((QHoverEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHoverEvent* self, bool (*slot)() ```
void q_hoverevent_on_is_begin_event(void* self, bool (*slot)()) {
    QHoverEvent_OnIsBeginEvent((QHoverEvent*)self, (intptr_t)slot);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHoverEvent* self ```
bool q_hoverevent_is_end_event(void* self) {
    return QHoverEvent_IsEndEvent((QHoverEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHoverEvent* self ```
bool q_hoverevent_qbase_is_end_event(void* self) {
    return QHoverEvent_QBaseIsEndEvent((QHoverEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHoverEvent* self, bool (*slot)() ```
void q_hoverevent_on_is_end_event(void* self, bool (*slot)()) {
    QHoverEvent_OnIsEndEvent((QHoverEvent*)self, (intptr_t)slot);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHoverEvent* self, uint64_t timestamp ```
void q_hoverevent_set_timestamp(void* self, uint64_t timestamp) {
    QHoverEvent_SetTimestamp((QHoverEvent*)self, timestamp);
}

/// Inherited from QPointerEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHoverEvent* self, uint64_t timestamp ```
void q_hoverevent_qbase_set_timestamp(void* self, uint64_t timestamp) {
    QHoverEvent_QBaseSetTimestamp((QHoverEvent*)self, timestamp);
}

/// Inherited from QPointerEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHoverEvent* self, void (*slot)(QHoverEvent*, uint64_t) ```
void q_hoverevent_on_set_timestamp(void* self, void (*slot)(void*, uint64_t)) {
    QHoverEvent_OnSetTimestamp((QHoverEvent*)self, (intptr_t)slot);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHoverEvent* self, bool accepted ```
void q_hoverevent_set_accepted(void* self, bool accepted) {
    QHoverEvent_SetAccepted((QHoverEvent*)self, accepted);
}

/// Inherited from QPointerEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHoverEvent* self, bool accepted ```
void q_hoverevent_qbase_set_accepted(void* self, bool accepted) {
    QHoverEvent_QBaseSetAccepted((QHoverEvent*)self, accepted);
}

/// Inherited from QPointerEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHoverEvent* self, void (*slot)(QHoverEvent*, bool) ```
void q_hoverevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QHoverEvent_OnSetAccepted((QHoverEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QHoverEvent* self ```
void q_hoverevent_delete(void* self) {
    QHoverEvent_Delete((QHoverEvent*)(self));
}

/// https://doc.qt.io/qt-6/qwheelevent.html

/// q_wheelevent_new constructs a new QWheelEvent object.
///
/// ``` QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, enum Qt__ScrollPhase phase, bool inverted ```
QWheelEvent* q_wheelevent_new(void* pos, void* globalPos, void* pixelDelta, void* angleDelta, int64_t buttons, int64_t modifiers, int64_t phase, bool inverted) {
    return QWheelEvent_new((QPointF*)pos, (QPointF*)globalPos, (QPoint*)pixelDelta, (QPoint*)angleDelta, buttons, modifiers, phase, inverted);
}

/// q_wheelevent_new2 constructs a new QWheelEvent object.
///
/// ``` QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, enum Qt__ScrollPhase phase, bool inverted, enum Qt__MouseEventSource source ```
QWheelEvent* q_wheelevent_new2(void* pos, void* globalPos, void* pixelDelta, void* angleDelta, int64_t buttons, int64_t modifiers, int64_t phase, bool inverted, int64_t source) {
    return QWheelEvent_new2((QPointF*)pos, (QPointF*)globalPos, (QPoint*)pixelDelta, (QPoint*)angleDelta, buttons, modifiers, phase, inverted, source);
}

/// q_wheelevent_new3 constructs a new QWheelEvent object.
///
/// ``` QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, enum Qt__ScrollPhase phase, bool inverted, enum Qt__MouseEventSource source, QPointingDevice* device ```
QWheelEvent* q_wheelevent_new3(void* pos, void* globalPos, void* pixelDelta, void* angleDelta, int64_t buttons, int64_t modifiers, int64_t phase, bool inverted, int64_t source, void* device) {
    return QWheelEvent_new3((QPointF*)pos, (QPointF*)globalPos, (QPoint*)pixelDelta, (QPoint*)angleDelta, buttons, modifiers, phase, inverted, source, (QPointingDevice*)device);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwheelevent.html#clone)
///
/// ``` QWheelEvent* self ```
QWheelEvent* q_wheelevent_clone(void* self) {
    return QWheelEvent_Clone((QWheelEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWheelEvent* self, QWheelEvent* (*slot)() ```
void q_wheelevent_on_clone(void* self, QWheelEvent* (*slot)()) {
    QWheelEvent_OnClone((QWheelEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWheelEvent* self ```
QWheelEvent* q_wheelevent_qbase_clone(void* self) {
    return QWheelEvent_QBaseClone((QWheelEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwheelevent.html#pixelDelta)
///
/// ``` QWheelEvent* self ```
QPoint* q_wheelevent_pixel_delta(void* self) {
    return QWheelEvent_PixelDelta((QWheelEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwheelevent.html#angleDelta)
///
/// ``` QWheelEvent* self ```
QPoint* q_wheelevent_angle_delta(void* self) {
    return QWheelEvent_AngleDelta((QWheelEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwheelevent.html#phase)
///
/// ``` QWheelEvent* self ```
int64_t q_wheelevent_phase(void* self) {
    return QWheelEvent_Phase((QWheelEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwheelevent.html#inverted)
///
/// ``` QWheelEvent* self ```
bool q_wheelevent_inverted(void* self) {
    return QWheelEvent_Inverted((QWheelEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwheelevent.html#isInverted)
///
/// ``` QWheelEvent* self ```
bool q_wheelevent_is_inverted(void* self) {
    return QWheelEvent_IsInverted((QWheelEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwheelevent.html#hasPixelDelta)
///
/// ``` QWheelEvent* self ```
bool q_wheelevent_has_pixel_delta(void* self) {
    return QWheelEvent_HasPixelDelta((QWheelEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwheelevent.html#isBeginEvent)
///
/// ``` QWheelEvent* self ```
bool q_wheelevent_is_begin_event(void* self) {
    return QWheelEvent_IsBeginEvent((QWheelEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWheelEvent* self, bool (*slot)() ```
void q_wheelevent_on_is_begin_event(void* self, bool (*slot)()) {
    QWheelEvent_OnIsBeginEvent((QWheelEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWheelEvent* self ```
bool q_wheelevent_qbase_is_begin_event(void* self) {
    return QWheelEvent_QBaseIsBeginEvent((QWheelEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwheelevent.html#isUpdateEvent)
///
/// ``` QWheelEvent* self ```
bool q_wheelevent_is_update_event(void* self) {
    return QWheelEvent_IsUpdateEvent((QWheelEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWheelEvent* self, bool (*slot)() ```
void q_wheelevent_on_is_update_event(void* self, bool (*slot)()) {
    QWheelEvent_OnIsUpdateEvent((QWheelEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWheelEvent* self ```
bool q_wheelevent_qbase_is_update_event(void* self) {
    return QWheelEvent_QBaseIsUpdateEvent((QWheelEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwheelevent.html#isEndEvent)
///
/// ``` QWheelEvent* self ```
bool q_wheelevent_is_end_event(void* self) {
    return QWheelEvent_IsEndEvent((QWheelEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWheelEvent* self, bool (*slot)() ```
void q_wheelevent_on_is_end_event(void* self, bool (*slot)()) {
    QWheelEvent_OnIsEndEvent((QWheelEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWheelEvent* self ```
bool q_wheelevent_qbase_is_end_event(void* self) {
    return QWheelEvent_QBaseIsEndEvent((QWheelEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwheelevent.html#source)
///
/// ``` QWheelEvent* self ```
int64_t q_wheelevent_source(void* self) {
    return QWheelEvent_Source((QWheelEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
///
/// ``` QWheelEvent* self ```
int64_t q_wheelevent_button(void* self) {
    return QSinglePointEvent_Button((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
///
/// ``` QWheelEvent* self ```
int64_t q_wheelevent_buttons(void* self) {
    return QSinglePointEvent_Buttons((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
///
/// ``` QWheelEvent* self ```
QPointF* q_wheelevent_position(void* self) {
    return QSinglePointEvent_Position((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
///
/// ``` QWheelEvent* self ```
QPointF* q_wheelevent_scene_position(void* self) {
    return QSinglePointEvent_ScenePosition((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
///
/// ``` QWheelEvent* self ```
QPointF* q_wheelevent_global_position(void* self) {
    return QSinglePointEvent_GlobalPosition((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
///
/// ``` QWheelEvent* self ```
QObject* q_wheelevent_exclusive_point_grabber(void* self) {
    return QSinglePointEvent_ExclusivePointGrabber((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
///
/// ``` QWheelEvent* self, QObject* exclusiveGrabber ```
void q_wheelevent_set_exclusive_point_grabber(void* self, void* exclusiveGrabber) {
    QSinglePointEvent_SetExclusivePointGrabber((QSinglePointEvent*)self, (QObject*)exclusiveGrabber);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
///
/// ``` QWheelEvent* self ```
QPointingDevice* q_wheelevent_pointing_device(void* self) {
    return QPointerEvent_PointingDevice((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
///
/// ``` QWheelEvent* self ```
int64_t q_wheelevent_pointer_type(void* self) {
    return QPointerEvent_PointerType((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
///
/// ``` QWheelEvent* self ```
int64_t q_wheelevent_point_count(void* self) {
    return QPointerEvent_PointCount((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#point)
///
/// ``` QWheelEvent* self, int64_t i ```
QEventPoint* q_wheelevent_point(void* self, int64_t i) {
    return QPointerEvent_Point((QPointerEvent*)self, i);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#points)
///
/// ``` QWheelEvent* self ```
libqt_list /* of QEventPoint* */ q_wheelevent_points(void* self) {
    libqt_list _arr = QPointerEvent_Points((QPointerEvent*)self);
    return _arr;
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
///
/// ``` QWheelEvent* self, int id ```
QEventPoint* q_wheelevent_point_by_id(void* self, int id) {
    return QPointerEvent_PointById((QPointerEvent*)self, id);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
///
/// ``` QWheelEvent* self ```
bool q_wheelevent_all_points_grabbed(void* self) {
    return QPointerEvent_AllPointsGrabbed((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
///
/// ``` QWheelEvent* self ```
bool q_wheelevent_all_points_accepted(void* self) {
    return QPointerEvent_AllPointsAccepted((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
///
/// ``` QWheelEvent* self, QEventPoint* point ```
QObject* q_wheelevent_exclusive_grabber(void* self, void* point) {
    return QPointerEvent_ExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
///
/// ``` QWheelEvent* self, QEventPoint* point, QObject* exclusiveGrabber ```
void q_wheelevent_set_exclusive_grabber(void* self, void* point, void* exclusiveGrabber) {
    QPointerEvent_SetExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)exclusiveGrabber);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
///
/// ``` QWheelEvent* self, QEventPoint* point ```
void q_wheelevent_clear_passive_grabbers(void* self, void* point) {
    QPointerEvent_ClearPassiveGrabbers((QPointerEvent*)self, (QEventPoint*)point);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
///
/// ``` QWheelEvent* self, QEventPoint* point, QObject* grabber ```
bool q_wheelevent_add_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_AddPassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
///
/// ``` QWheelEvent* self, QEventPoint* point, QObject* grabber ```
bool q_wheelevent_remove_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_RemovePassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// ``` QWheelEvent* self ```
QInputDevice* q_wheelevent_device(void* self) {
    return QInputEvent_Device((QInputEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// ``` QWheelEvent* self ```
int64_t q_wheelevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
///
/// ``` QWheelEvent* self ```
int64_t q_wheelevent_modifiers(void* self) {
    return QInputEvent_Modifiers((QInputEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// ``` QWheelEvent* self, int modifiers ```
void q_wheelevent_set_modifiers(void* self, int64_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// ``` QWheelEvent* self ```
uint64_t q_wheelevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QWheelEvent* self ```
int64_t q_wheelevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QWheelEvent* self ```
bool q_wheelevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QWheelEvent* self ```
bool q_wheelevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QWheelEvent* self ```
void q_wheelevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QWheelEvent* self ```
void q_wheelevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QWheelEvent* self ```
bool q_wheelevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QWheelEvent* self ```
bool q_wheelevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QWheelEvent* self ```
bool q_wheelevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_wheelevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_wheelevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWheelEvent* self, uint64_t timestamp ```
void q_wheelevent_set_timestamp(void* self, uint64_t timestamp) {
    QWheelEvent_SetTimestamp((QWheelEvent*)self, timestamp);
}

/// Inherited from QPointerEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWheelEvent* self, uint64_t timestamp ```
void q_wheelevent_qbase_set_timestamp(void* self, uint64_t timestamp) {
    QWheelEvent_QBaseSetTimestamp((QWheelEvent*)self, timestamp);
}

/// Inherited from QPointerEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWheelEvent* self, void (*slot)(QWheelEvent*, uint64_t) ```
void q_wheelevent_on_set_timestamp(void* self, void (*slot)(void*, uint64_t)) {
    QWheelEvent_OnSetTimestamp((QWheelEvent*)self, (intptr_t)slot);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWheelEvent* self, bool accepted ```
void q_wheelevent_set_accepted(void* self, bool accepted) {
    QWheelEvent_SetAccepted((QWheelEvent*)self, accepted);
}

/// Inherited from QPointerEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWheelEvent* self, bool accepted ```
void q_wheelevent_qbase_set_accepted(void* self, bool accepted) {
    QWheelEvent_QBaseSetAccepted((QWheelEvent*)self, accepted);
}

/// Inherited from QPointerEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWheelEvent* self, void (*slot)(QWheelEvent*, bool) ```
void q_wheelevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QWheelEvent_OnSetAccepted((QWheelEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QWheelEvent* self ```
void q_wheelevent_delete(void* self) {
    QWheelEvent_Delete((QWheelEvent*)(self));
}

/// https://doc.qt.io/qt-6/qtabletevent.html

/// q_tabletevent_new constructs a new QTabletEvent object.
///
/// ``` enum QEvent__Type t, QPointingDevice* device, QPointF* pos, QPointF* globalPos, double pressure, float xTilt, float yTilt, float tangentialPressure, double rotation, float z, int keyState, enum Qt__MouseButton button, int buttons ```
QTabletEvent* q_tabletevent_new(int64_t t, void* device, void* pos, void* globalPos, double pressure, float xTilt, float yTilt, float tangentialPressure, double rotation, float z, int64_t keyState, int64_t button, int64_t buttons) {
    return QTabletEvent_new(t, (QPointingDevice*)device, (QPointF*)pos, (QPointF*)globalPos, pressure, xTilt, yTilt, tangentialPressure, rotation, z, keyState, button, buttons);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#clone)
///
/// ``` QTabletEvent* self ```
QTabletEvent* q_tabletevent_clone(void* self) {
    return QTabletEvent_Clone((QTabletEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTabletEvent* self, QTabletEvent* (*slot)() ```
void q_tabletevent_on_clone(void* self, QTabletEvent* (*slot)()) {
    QTabletEvent_OnClone((QTabletEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTabletEvent* self ```
QTabletEvent* q_tabletevent_qbase_clone(void* self) {
    return QTabletEvent_QBaseClone((QTabletEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#pos)
///
/// ``` QTabletEvent* self ```
QPoint* q_tabletevent_pos(void* self) {
    return QTabletEvent_Pos((QTabletEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#globalPos)
///
/// ``` QTabletEvent* self ```
QPoint* q_tabletevent_global_pos(void* self) {
    return QTabletEvent_GlobalPos((QTabletEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#posF)
///
/// ``` QTabletEvent* self ```
QPointF* q_tabletevent_pos_f(void* self) {
    return QTabletEvent_PosF((QTabletEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#globalPosF)
///
/// ``` QTabletEvent* self ```
QPointF* q_tabletevent_global_pos_f(void* self) {
    return QTabletEvent_GlobalPosF((QTabletEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#x)
///
/// ``` QTabletEvent* self ```
int32_t q_tabletevent_x(void* self) {
    return QTabletEvent_X((QTabletEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#y)
///
/// ``` QTabletEvent* self ```
int32_t q_tabletevent_y(void* self) {
    return QTabletEvent_Y((QTabletEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#globalX)
///
/// ``` QTabletEvent* self ```
int32_t q_tabletevent_global_x(void* self) {
    return QTabletEvent_GlobalX((QTabletEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#globalY)
///
/// ``` QTabletEvent* self ```
int32_t q_tabletevent_global_y(void* self) {
    return QTabletEvent_GlobalY((QTabletEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#hiResGlobalX)
///
/// ``` QTabletEvent* self ```
double q_tabletevent_hi_res_global_x(void* self) {
    return QTabletEvent_HiResGlobalX((QTabletEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#hiResGlobalY)
///
/// ``` QTabletEvent* self ```
double q_tabletevent_hi_res_global_y(void* self) {
    return QTabletEvent_HiResGlobalY((QTabletEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#uniqueId)
///
/// ``` QTabletEvent* self ```
long long q_tabletevent_unique_id(void* self) {
    return QTabletEvent_UniqueId((QTabletEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#pressure)
///
/// ``` QTabletEvent* self ```
double q_tabletevent_pressure(void* self) {
    return QTabletEvent_Pressure((QTabletEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#rotation)
///
/// ``` QTabletEvent* self ```
double q_tabletevent_rotation(void* self) {
    return QTabletEvent_Rotation((QTabletEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#z)
///
/// ``` QTabletEvent* self ```
double q_tabletevent_z(void* self) {
    return QTabletEvent_Z((QTabletEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#tangentialPressure)
///
/// ``` QTabletEvent* self ```
double q_tabletevent_tangential_pressure(void* self) {
    return QTabletEvent_TangentialPressure((QTabletEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#xTilt)
///
/// ``` QTabletEvent* self ```
double q_tabletevent_x_tilt(void* self) {
    return QTabletEvent_XTilt((QTabletEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabletevent.html#yTilt)
///
/// ``` QTabletEvent* self ```
double q_tabletevent_y_tilt(void* self) {
    return QTabletEvent_YTilt((QTabletEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
///
/// ``` QTabletEvent* self ```
int64_t q_tabletevent_button(void* self) {
    return QSinglePointEvent_Button((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
///
/// ``` QTabletEvent* self ```
int64_t q_tabletevent_buttons(void* self) {
    return QSinglePointEvent_Buttons((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
///
/// ``` QTabletEvent* self ```
QPointF* q_tabletevent_position(void* self) {
    return QSinglePointEvent_Position((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
///
/// ``` QTabletEvent* self ```
QPointF* q_tabletevent_scene_position(void* self) {
    return QSinglePointEvent_ScenePosition((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
///
/// ``` QTabletEvent* self ```
QPointF* q_tabletevent_global_position(void* self) {
    return QSinglePointEvent_GlobalPosition((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
///
/// ``` QTabletEvent* self ```
QObject* q_tabletevent_exclusive_point_grabber(void* self) {
    return QSinglePointEvent_ExclusivePointGrabber((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
///
/// ``` QTabletEvent* self, QObject* exclusiveGrabber ```
void q_tabletevent_set_exclusive_point_grabber(void* self, void* exclusiveGrabber) {
    QSinglePointEvent_SetExclusivePointGrabber((QSinglePointEvent*)self, (QObject*)exclusiveGrabber);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
///
/// ``` QTabletEvent* self ```
QPointingDevice* q_tabletevent_pointing_device(void* self) {
    return QPointerEvent_PointingDevice((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
///
/// ``` QTabletEvent* self ```
int64_t q_tabletevent_pointer_type(void* self) {
    return QPointerEvent_PointerType((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
///
/// ``` QTabletEvent* self ```
int64_t q_tabletevent_point_count(void* self) {
    return QPointerEvent_PointCount((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#point)
///
/// ``` QTabletEvent* self, int64_t i ```
QEventPoint* q_tabletevent_point(void* self, int64_t i) {
    return QPointerEvent_Point((QPointerEvent*)self, i);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#points)
///
/// ``` QTabletEvent* self ```
libqt_list /* of QEventPoint* */ q_tabletevent_points(void* self) {
    libqt_list _arr = QPointerEvent_Points((QPointerEvent*)self);
    return _arr;
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
///
/// ``` QTabletEvent* self, int id ```
QEventPoint* q_tabletevent_point_by_id(void* self, int id) {
    return QPointerEvent_PointById((QPointerEvent*)self, id);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
///
/// ``` QTabletEvent* self ```
bool q_tabletevent_all_points_grabbed(void* self) {
    return QPointerEvent_AllPointsGrabbed((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
///
/// ``` QTabletEvent* self ```
bool q_tabletevent_all_points_accepted(void* self) {
    return QPointerEvent_AllPointsAccepted((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
///
/// ``` QTabletEvent* self, QEventPoint* point ```
QObject* q_tabletevent_exclusive_grabber(void* self, void* point) {
    return QPointerEvent_ExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
///
/// ``` QTabletEvent* self, QEventPoint* point, QObject* exclusiveGrabber ```
void q_tabletevent_set_exclusive_grabber(void* self, void* point, void* exclusiveGrabber) {
    QPointerEvent_SetExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)exclusiveGrabber);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
///
/// ``` QTabletEvent* self, QEventPoint* point ```
void q_tabletevent_clear_passive_grabbers(void* self, void* point) {
    QPointerEvent_ClearPassiveGrabbers((QPointerEvent*)self, (QEventPoint*)point);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
///
/// ``` QTabletEvent* self, QEventPoint* point, QObject* grabber ```
bool q_tabletevent_add_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_AddPassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
///
/// ``` QTabletEvent* self, QEventPoint* point, QObject* grabber ```
bool q_tabletevent_remove_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_RemovePassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// ``` QTabletEvent* self ```
QInputDevice* q_tabletevent_device(void* self) {
    return QInputEvent_Device((QInputEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// ``` QTabletEvent* self ```
int64_t q_tabletevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
///
/// ``` QTabletEvent* self ```
int64_t q_tabletevent_modifiers(void* self) {
    return QInputEvent_Modifiers((QInputEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// ``` QTabletEvent* self, int modifiers ```
void q_tabletevent_set_modifiers(void* self, int64_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// ``` QTabletEvent* self ```
uint64_t q_tabletevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QTabletEvent* self ```
int64_t q_tabletevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QTabletEvent* self ```
bool q_tabletevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QTabletEvent* self ```
bool q_tabletevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QTabletEvent* self ```
void q_tabletevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QTabletEvent* self ```
void q_tabletevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QTabletEvent* self ```
bool q_tabletevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QTabletEvent* self ```
bool q_tabletevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QTabletEvent* self ```
bool q_tabletevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_tabletevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_tabletevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabletEvent* self ```
bool q_tabletevent_is_begin_event(void* self) {
    return QTabletEvent_IsBeginEvent((QTabletEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabletEvent* self ```
bool q_tabletevent_qbase_is_begin_event(void* self) {
    return QTabletEvent_QBaseIsBeginEvent((QTabletEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabletEvent* self, bool (*slot)() ```
void q_tabletevent_on_is_begin_event(void* self, bool (*slot)()) {
    QTabletEvent_OnIsBeginEvent((QTabletEvent*)self, (intptr_t)slot);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabletEvent* self ```
bool q_tabletevent_is_update_event(void* self) {
    return QTabletEvent_IsUpdateEvent((QTabletEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabletEvent* self ```
bool q_tabletevent_qbase_is_update_event(void* self) {
    return QTabletEvent_QBaseIsUpdateEvent((QTabletEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabletEvent* self, bool (*slot)() ```
void q_tabletevent_on_is_update_event(void* self, bool (*slot)()) {
    QTabletEvent_OnIsUpdateEvent((QTabletEvent*)self, (intptr_t)slot);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabletEvent* self ```
bool q_tabletevent_is_end_event(void* self) {
    return QTabletEvent_IsEndEvent((QTabletEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabletEvent* self ```
bool q_tabletevent_qbase_is_end_event(void* self) {
    return QTabletEvent_QBaseIsEndEvent((QTabletEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabletEvent* self, bool (*slot)() ```
void q_tabletevent_on_is_end_event(void* self, bool (*slot)()) {
    QTabletEvent_OnIsEndEvent((QTabletEvent*)self, (intptr_t)slot);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabletEvent* self, uint64_t timestamp ```
void q_tabletevent_set_timestamp(void* self, uint64_t timestamp) {
    QTabletEvent_SetTimestamp((QTabletEvent*)self, timestamp);
}

/// Inherited from QPointerEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabletEvent* self, uint64_t timestamp ```
void q_tabletevent_qbase_set_timestamp(void* self, uint64_t timestamp) {
    QTabletEvent_QBaseSetTimestamp((QTabletEvent*)self, timestamp);
}

/// Inherited from QPointerEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabletEvent* self, void (*slot)(QTabletEvent*, uint64_t) ```
void q_tabletevent_on_set_timestamp(void* self, void (*slot)(void*, uint64_t)) {
    QTabletEvent_OnSetTimestamp((QTabletEvent*)self, (intptr_t)slot);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabletEvent* self, bool accepted ```
void q_tabletevent_set_accepted(void* self, bool accepted) {
    QTabletEvent_SetAccepted((QTabletEvent*)self, accepted);
}

/// Inherited from QPointerEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabletEvent* self, bool accepted ```
void q_tabletevent_qbase_set_accepted(void* self, bool accepted) {
    QTabletEvent_QBaseSetAccepted((QTabletEvent*)self, accepted);
}

/// Inherited from QPointerEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabletEvent* self, void (*slot)(QTabletEvent*, bool) ```
void q_tabletevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QTabletEvent_OnSetAccepted((QTabletEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QTabletEvent* self ```
void q_tabletevent_delete(void* self) {
    QTabletEvent_Delete((QTabletEvent*)(self));
}

/// https://doc.qt.io/qt-6/qnativegestureevent.html

/// q_nativegestureevent_new constructs a new QNativeGestureEvent object.
///
/// ``` enum Qt__NativeGestureType typeVal, QPointingDevice* dev, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, double value, uint64_t sequenceId, uint64_t intArgument ```
QNativeGestureEvent* q_nativegestureevent_new(int64_t typeVal, void* dev, void* localPos, void* scenePos, void* globalPos, double value, uint64_t sequenceId, uint64_t intArgument) {
    return QNativeGestureEvent_new(typeVal, (QPointingDevice*)dev, (QPointF*)localPos, (QPointF*)scenePos, (QPointF*)globalPos, value, sequenceId, intArgument);
}

/// q_nativegestureevent_new2 constructs a new QNativeGestureEvent object.
///
/// ``` enum Qt__NativeGestureType typeVal, QPointingDevice* dev, int fingerCount, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, double value, QPointF* delta ```
QNativeGestureEvent* q_nativegestureevent_new2(int64_t typeVal, void* dev, int fingerCount, void* localPos, void* scenePos, void* globalPos, double value, void* delta) {
    return QNativeGestureEvent_new2(typeVal, (QPointingDevice*)dev, fingerCount, (QPointF*)localPos, (QPointF*)scenePos, (QPointF*)globalPos, value, (QPointF*)delta);
}

/// q_nativegestureevent_new3 constructs a new QNativeGestureEvent object.
///
/// ``` enum Qt__NativeGestureType typeVal, QPointingDevice* dev, int fingerCount, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, double value, QPointF* delta, uint64_t sequenceId ```
QNativeGestureEvent* q_nativegestureevent_new3(int64_t typeVal, void* dev, int fingerCount, void* localPos, void* scenePos, void* globalPos, double value, void* delta, uint64_t sequenceId) {
    return QNativeGestureEvent_new3(typeVal, (QPointingDevice*)dev, fingerCount, (QPointF*)localPos, (QPointF*)scenePos, (QPointF*)globalPos, value, (QPointF*)delta, sequenceId);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnativegestureevent.html#clone)
///
/// ``` QNativeGestureEvent* self ```
QNativeGestureEvent* q_nativegestureevent_clone(void* self) {
    return QNativeGestureEvent_Clone((QNativeGestureEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QNativeGestureEvent* self, QNativeGestureEvent* (*slot)() ```
void q_nativegestureevent_on_clone(void* self, QNativeGestureEvent* (*slot)()) {
    QNativeGestureEvent_OnClone((QNativeGestureEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QNativeGestureEvent* self ```
QNativeGestureEvent* q_nativegestureevent_qbase_clone(void* self) {
    return QNativeGestureEvent_QBaseClone((QNativeGestureEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnativegestureevent.html#gestureType)
///
/// ``` QNativeGestureEvent* self ```
int64_t q_nativegestureevent_gesture_type(void* self) {
    return QNativeGestureEvent_GestureType((QNativeGestureEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnativegestureevent.html#fingerCount)
///
/// ``` QNativeGestureEvent* self ```
int32_t q_nativegestureevent_finger_count(void* self) {
    return QNativeGestureEvent_FingerCount((QNativeGestureEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnativegestureevent.html#value)
///
/// ``` QNativeGestureEvent* self ```
double q_nativegestureevent_value(void* self) {
    return QNativeGestureEvent_Value((QNativeGestureEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnativegestureevent.html#delta)
///
/// ``` QNativeGestureEvent* self ```
QPointF* q_nativegestureevent_delta(void* self) {
    return QNativeGestureEvent_Delta((QNativeGestureEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnativegestureevent.html#pos)
///
/// ``` QNativeGestureEvent* self ```
QPoint* q_nativegestureevent_pos(void* self) {
    return QNativeGestureEvent_Pos((QNativeGestureEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnativegestureevent.html#globalPos)
///
/// ``` QNativeGestureEvent* self ```
QPoint* q_nativegestureevent_global_pos(void* self) {
    return QNativeGestureEvent_GlobalPos((QNativeGestureEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnativegestureevent.html#localPos)
///
/// ``` QNativeGestureEvent* self ```
QPointF* q_nativegestureevent_local_pos(void* self) {
    return QNativeGestureEvent_LocalPos((QNativeGestureEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnativegestureevent.html#windowPos)
///
/// ``` QNativeGestureEvent* self ```
QPointF* q_nativegestureevent_window_pos(void* self) {
    return QNativeGestureEvent_WindowPos((QNativeGestureEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnativegestureevent.html#screenPos)
///
/// ``` QNativeGestureEvent* self ```
QPointF* q_nativegestureevent_screen_pos(void* self) {
    return QNativeGestureEvent_ScreenPos((QNativeGestureEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
///
/// ``` QNativeGestureEvent* self ```
int64_t q_nativegestureevent_button(void* self) {
    return QSinglePointEvent_Button((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
///
/// ``` QNativeGestureEvent* self ```
int64_t q_nativegestureevent_buttons(void* self) {
    return QSinglePointEvent_Buttons((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
///
/// ``` QNativeGestureEvent* self ```
QPointF* q_nativegestureevent_position(void* self) {
    return QSinglePointEvent_Position((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
///
/// ``` QNativeGestureEvent* self ```
QPointF* q_nativegestureevent_scene_position(void* self) {
    return QSinglePointEvent_ScenePosition((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
///
/// ``` QNativeGestureEvent* self ```
QPointF* q_nativegestureevent_global_position(void* self) {
    return QSinglePointEvent_GlobalPosition((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
///
/// ``` QNativeGestureEvent* self ```
QObject* q_nativegestureevent_exclusive_point_grabber(void* self) {
    return QSinglePointEvent_ExclusivePointGrabber((QSinglePointEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
///
/// ``` QNativeGestureEvent* self, QObject* exclusiveGrabber ```
void q_nativegestureevent_set_exclusive_point_grabber(void* self, void* exclusiveGrabber) {
    QSinglePointEvent_SetExclusivePointGrabber((QSinglePointEvent*)self, (QObject*)exclusiveGrabber);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
///
/// ``` QNativeGestureEvent* self ```
QPointingDevice* q_nativegestureevent_pointing_device(void* self) {
    return QPointerEvent_PointingDevice((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
///
/// ``` QNativeGestureEvent* self ```
int64_t q_nativegestureevent_pointer_type(void* self) {
    return QPointerEvent_PointerType((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
///
/// ``` QNativeGestureEvent* self ```
int64_t q_nativegestureevent_point_count(void* self) {
    return QPointerEvent_PointCount((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#point)
///
/// ``` QNativeGestureEvent* self, int64_t i ```
QEventPoint* q_nativegestureevent_point(void* self, int64_t i) {
    return QPointerEvent_Point((QPointerEvent*)self, i);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#points)
///
/// ``` QNativeGestureEvent* self ```
libqt_list /* of QEventPoint* */ q_nativegestureevent_points(void* self) {
    libqt_list _arr = QPointerEvent_Points((QPointerEvent*)self);
    return _arr;
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
///
/// ``` QNativeGestureEvent* self, int id ```
QEventPoint* q_nativegestureevent_point_by_id(void* self, int id) {
    return QPointerEvent_PointById((QPointerEvent*)self, id);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
///
/// ``` QNativeGestureEvent* self ```
bool q_nativegestureevent_all_points_grabbed(void* self) {
    return QPointerEvent_AllPointsGrabbed((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
///
/// ``` QNativeGestureEvent* self ```
bool q_nativegestureevent_all_points_accepted(void* self) {
    return QPointerEvent_AllPointsAccepted((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
///
/// ``` QNativeGestureEvent* self, QEventPoint* point ```
QObject* q_nativegestureevent_exclusive_grabber(void* self, void* point) {
    return QPointerEvent_ExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
///
/// ``` QNativeGestureEvent* self, QEventPoint* point, QObject* exclusiveGrabber ```
void q_nativegestureevent_set_exclusive_grabber(void* self, void* point, void* exclusiveGrabber) {
    QPointerEvent_SetExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)exclusiveGrabber);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
///
/// ``` QNativeGestureEvent* self, QEventPoint* point ```
void q_nativegestureevent_clear_passive_grabbers(void* self, void* point) {
    QPointerEvent_ClearPassiveGrabbers((QPointerEvent*)self, (QEventPoint*)point);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
///
/// ``` QNativeGestureEvent* self, QEventPoint* point, QObject* grabber ```
bool q_nativegestureevent_add_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_AddPassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
///
/// ``` QNativeGestureEvent* self, QEventPoint* point, QObject* grabber ```
bool q_nativegestureevent_remove_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_RemovePassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// ``` QNativeGestureEvent* self ```
QInputDevice* q_nativegestureevent_device(void* self) {
    return QInputEvent_Device((QInputEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// ``` QNativeGestureEvent* self ```
int64_t q_nativegestureevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
///
/// ``` QNativeGestureEvent* self ```
int64_t q_nativegestureevent_modifiers(void* self) {
    return QInputEvent_Modifiers((QInputEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// ``` QNativeGestureEvent* self, int modifiers ```
void q_nativegestureevent_set_modifiers(void* self, int64_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// ``` QNativeGestureEvent* self ```
uint64_t q_nativegestureevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QNativeGestureEvent* self ```
int64_t q_nativegestureevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QNativeGestureEvent* self ```
bool q_nativegestureevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QNativeGestureEvent* self ```
bool q_nativegestureevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QNativeGestureEvent* self ```
void q_nativegestureevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QNativeGestureEvent* self ```
void q_nativegestureevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QNativeGestureEvent* self ```
bool q_nativegestureevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QNativeGestureEvent* self ```
bool q_nativegestureevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QNativeGestureEvent* self ```
bool q_nativegestureevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_nativegestureevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_nativegestureevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNativeGestureEvent* self ```
bool q_nativegestureevent_is_begin_event(void* self) {
    return QNativeGestureEvent_IsBeginEvent((QNativeGestureEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNativeGestureEvent* self ```
bool q_nativegestureevent_qbase_is_begin_event(void* self) {
    return QNativeGestureEvent_QBaseIsBeginEvent((QNativeGestureEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNativeGestureEvent* self, bool (*slot)() ```
void q_nativegestureevent_on_is_begin_event(void* self, bool (*slot)()) {
    QNativeGestureEvent_OnIsBeginEvent((QNativeGestureEvent*)self, (intptr_t)slot);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNativeGestureEvent* self ```
bool q_nativegestureevent_is_update_event(void* self) {
    return QNativeGestureEvent_IsUpdateEvent((QNativeGestureEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNativeGestureEvent* self ```
bool q_nativegestureevent_qbase_is_update_event(void* self) {
    return QNativeGestureEvent_QBaseIsUpdateEvent((QNativeGestureEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNativeGestureEvent* self, bool (*slot)() ```
void q_nativegestureevent_on_is_update_event(void* self, bool (*slot)()) {
    QNativeGestureEvent_OnIsUpdateEvent((QNativeGestureEvent*)self, (intptr_t)slot);
}

/// Inherited from QSinglePointEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNativeGestureEvent* self ```
bool q_nativegestureevent_is_end_event(void* self) {
    return QNativeGestureEvent_IsEndEvent((QNativeGestureEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNativeGestureEvent* self ```
bool q_nativegestureevent_qbase_is_end_event(void* self) {
    return QNativeGestureEvent_QBaseIsEndEvent((QNativeGestureEvent*)self);
}

/// Inherited from QSinglePointEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNativeGestureEvent* self, bool (*slot)() ```
void q_nativegestureevent_on_is_end_event(void* self, bool (*slot)()) {
    QNativeGestureEvent_OnIsEndEvent((QNativeGestureEvent*)self, (intptr_t)slot);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNativeGestureEvent* self, uint64_t timestamp ```
void q_nativegestureevent_set_timestamp(void* self, uint64_t timestamp) {
    QNativeGestureEvent_SetTimestamp((QNativeGestureEvent*)self, timestamp);
}

/// Inherited from QPointerEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNativeGestureEvent* self, uint64_t timestamp ```
void q_nativegestureevent_qbase_set_timestamp(void* self, uint64_t timestamp) {
    QNativeGestureEvent_QBaseSetTimestamp((QNativeGestureEvent*)self, timestamp);
}

/// Inherited from QPointerEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNativeGestureEvent* self, void (*slot)(QNativeGestureEvent*, uint64_t) ```
void q_nativegestureevent_on_set_timestamp(void* self, void (*slot)(void*, uint64_t)) {
    QNativeGestureEvent_OnSetTimestamp((QNativeGestureEvent*)self, (intptr_t)slot);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNativeGestureEvent* self, bool accepted ```
void q_nativegestureevent_set_accepted(void* self, bool accepted) {
    QNativeGestureEvent_SetAccepted((QNativeGestureEvent*)self, accepted);
}

/// Inherited from QPointerEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNativeGestureEvent* self, bool accepted ```
void q_nativegestureevent_qbase_set_accepted(void* self, bool accepted) {
    QNativeGestureEvent_QBaseSetAccepted((QNativeGestureEvent*)self, accepted);
}

/// Inherited from QPointerEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNativeGestureEvent* self, void (*slot)(QNativeGestureEvent*, bool) ```
void q_nativegestureevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QNativeGestureEvent_OnSetAccepted((QNativeGestureEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QNativeGestureEvent* self ```
void q_nativegestureevent_delete(void* self) {
    QNativeGestureEvent_Delete((QNativeGestureEvent*)(self));
}

/// https://doc.qt.io/qt-6/qkeyevent.html

/// q_keyevent_new constructs a new QKeyEvent object.
///
/// ``` enum QEvent__Type typeVal, int key, int modifiers ```
QKeyEvent* q_keyevent_new(int64_t typeVal, int key, int64_t modifiers) {
    return QKeyEvent_new(typeVal, key, modifiers);
}

/// q_keyevent_new2 constructs a new QKeyEvent object.
///
/// ``` enum QEvent__Type typeVal, int key, int modifiers, uint32_t nativeScanCode, uint32_t nativeVirtualKey, uint32_t nativeModifiers ```
QKeyEvent* q_keyevent_new2(int64_t typeVal, int key, int64_t modifiers, uint32_t nativeScanCode, uint32_t nativeVirtualKey, uint32_t nativeModifiers) {
    return QKeyEvent_new2(typeVal, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers);
}

/// q_keyevent_new3 constructs a new QKeyEvent object.
///
/// ``` enum QEvent__Type typeVal, int key, int modifiers, const char* text ```
QKeyEvent* q_keyevent_new3(int64_t typeVal, int key, int64_t modifiers, const char* text) {
    return QKeyEvent_new3(typeVal, key, modifiers, qstring(text));
}

/// q_keyevent_new4 constructs a new QKeyEvent object.
///
/// ``` enum QEvent__Type typeVal, int key, int modifiers, const char* text, bool autorep ```
QKeyEvent* q_keyevent_new4(int64_t typeVal, int key, int64_t modifiers, const char* text, bool autorep) {
    return QKeyEvent_new4(typeVal, key, modifiers, qstring(text), autorep);
}

/// q_keyevent_new5 constructs a new QKeyEvent object.
///
/// ``` enum QEvent__Type typeVal, int key, int modifiers, const char* text, bool autorep, unsigned short count ```
QKeyEvent* q_keyevent_new5(int64_t typeVal, int key, int64_t modifiers, const char* text, bool autorep, unsigned short count) {
    return QKeyEvent_new5(typeVal, key, modifiers, qstring(text), autorep, count);
}

/// q_keyevent_new6 constructs a new QKeyEvent object.
///
/// ``` enum QEvent__Type typeVal, int key, int modifiers, uint32_t nativeScanCode, uint32_t nativeVirtualKey, uint32_t nativeModifiers, const char* text ```
QKeyEvent* q_keyevent_new6(int64_t typeVal, int key, int64_t modifiers, uint32_t nativeScanCode, uint32_t nativeVirtualKey, uint32_t nativeModifiers, const char* text) {
    return QKeyEvent_new6(typeVal, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, qstring(text));
}

/// q_keyevent_new7 constructs a new QKeyEvent object.
///
/// ``` enum QEvent__Type typeVal, int key, int modifiers, uint32_t nativeScanCode, uint32_t nativeVirtualKey, uint32_t nativeModifiers, const char* text, bool autorep ```
QKeyEvent* q_keyevent_new7(int64_t typeVal, int key, int64_t modifiers, uint32_t nativeScanCode, uint32_t nativeVirtualKey, uint32_t nativeModifiers, const char* text, bool autorep) {
    return QKeyEvent_new7(typeVal, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, qstring(text), autorep);
}

/// q_keyevent_new8 constructs a new QKeyEvent object.
///
/// ``` enum QEvent__Type typeVal, int key, int modifiers, uint32_t nativeScanCode, uint32_t nativeVirtualKey, uint32_t nativeModifiers, const char* text, bool autorep, unsigned short count ```
QKeyEvent* q_keyevent_new8(int64_t typeVal, int key, int64_t modifiers, uint32_t nativeScanCode, uint32_t nativeVirtualKey, uint32_t nativeModifiers, const char* text, bool autorep, unsigned short count) {
    return QKeyEvent_new8(typeVal, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, qstring(text), autorep, count);
}

/// q_keyevent_new9 constructs a new QKeyEvent object.
///
/// ``` enum QEvent__Type typeVal, int key, int modifiers, uint32_t nativeScanCode, uint32_t nativeVirtualKey, uint32_t nativeModifiers, const char* text, bool autorep, unsigned short count, QInputDevice* device ```
QKeyEvent* q_keyevent_new9(int64_t typeVal, int key, int64_t modifiers, uint32_t nativeScanCode, uint32_t nativeVirtualKey, uint32_t nativeModifiers, const char* text, bool autorep, unsigned short count, void* device) {
    return QKeyEvent_new9(typeVal, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, qstring(text), autorep, count, (QInputDevice*)device);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeyevent.html#clone)
///
/// ``` QKeyEvent* self ```
QKeyEvent* q_keyevent_clone(void* self) {
    return QKeyEvent_Clone((QKeyEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QKeyEvent* self, QKeyEvent* (*slot)() ```
void q_keyevent_on_clone(void* self, QKeyEvent* (*slot)()) {
    QKeyEvent_OnClone((QKeyEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QKeyEvent* self ```
QKeyEvent* q_keyevent_qbase_clone(void* self) {
    return QKeyEvent_QBaseClone((QKeyEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeyevent.html#key)
///
/// ``` QKeyEvent* self ```
int32_t q_keyevent_key(void* self) {
    return QKeyEvent_Key((QKeyEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeyevent.html#matches)
///
/// ``` QKeyEvent* self, enum QKeySequence__StandardKey key ```
bool q_keyevent_matches(void* self, int64_t key) {
    return QKeyEvent_Matches((QKeyEvent*)self, key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeyevent.html#modifiers)
///
/// ``` QKeyEvent* self ```
int64_t q_keyevent_modifiers(void* self) {
    return QKeyEvent_Modifiers((QKeyEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeyevent.html#keyCombination)
///
/// ``` QKeyEvent* self ```
QKeyCombination* q_keyevent_key_combination(void* self) {
    return QKeyEvent_KeyCombination((QKeyEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeyevent.html#text)
///
/// ``` QKeyEvent* self ```
const char* q_keyevent_text(void* self) {
    libqt_string _str = QKeyEvent_Text((QKeyEvent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeyevent.html#isAutoRepeat)
///
/// ``` QKeyEvent* self ```
bool q_keyevent_is_auto_repeat(void* self) {
    return QKeyEvent_IsAutoRepeat((QKeyEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeyevent.html#count)
///
/// ``` QKeyEvent* self ```
int32_t q_keyevent_count(void* self) {
    return QKeyEvent_Count((QKeyEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeyevent.html#nativeScanCode)
///
/// ``` QKeyEvent* self ```
uint32_t q_keyevent_native_scan_code(void* self) {
    return QKeyEvent_NativeScanCode((QKeyEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeyevent.html#nativeVirtualKey)
///
/// ``` QKeyEvent* self ```
uint32_t q_keyevent_native_virtual_key(void* self) {
    return QKeyEvent_NativeVirtualKey((QKeyEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeyevent.html#nativeModifiers)
///
/// ``` QKeyEvent* self ```
uint32_t q_keyevent_native_modifiers(void* self) {
    return QKeyEvent_NativeModifiers((QKeyEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// ``` QKeyEvent* self ```
QInputDevice* q_keyevent_device(void* self) {
    return QInputEvent_Device((QInputEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// ``` QKeyEvent* self ```
int64_t q_keyevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// ``` QKeyEvent* self, int modifiers ```
void q_keyevent_set_modifiers(void* self, int64_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// ``` QKeyEvent* self ```
uint64_t q_keyevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QKeyEvent* self ```
int64_t q_keyevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QKeyEvent* self ```
bool q_keyevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QKeyEvent* self ```
bool q_keyevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QKeyEvent* self ```
void q_keyevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QKeyEvent* self ```
void q_keyevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QKeyEvent* self ```
bool q_keyevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QKeyEvent* self ```
bool q_keyevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QKeyEvent* self ```
bool q_keyevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_keyevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_keyevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeyEvent* self, uint64_t timestamp ```
void q_keyevent_set_timestamp(void* self, uint64_t timestamp) {
    QKeyEvent_SetTimestamp((QKeyEvent*)self, timestamp);
}

/// Inherited from QInputEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeyEvent* self, uint64_t timestamp ```
void q_keyevent_qbase_set_timestamp(void* self, uint64_t timestamp) {
    QKeyEvent_QBaseSetTimestamp((QKeyEvent*)self, timestamp);
}

/// Inherited from QInputEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeyEvent* self, void (*slot)(QKeyEvent*, uint64_t) ```
void q_keyevent_on_set_timestamp(void* self, void (*slot)(void*, uint64_t)) {
    QKeyEvent_OnSetTimestamp((QKeyEvent*)self, (intptr_t)slot);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeyEvent* self, bool accepted ```
void q_keyevent_set_accepted(void* self, bool accepted) {
    QKeyEvent_SetAccepted((QKeyEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeyEvent* self, bool accepted ```
void q_keyevent_qbase_set_accepted(void* self, bool accepted) {
    QKeyEvent_QBaseSetAccepted((QKeyEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeyEvent* self, void (*slot)(QKeyEvent*, bool) ```
void q_keyevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QKeyEvent_OnSetAccepted((QKeyEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QKeyEvent* self ```
void q_keyevent_delete(void* self) {
    QKeyEvent_Delete((QKeyEvent*)(self));
}

/// https://doc.qt.io/qt-6/qfocusevent.html

/// q_focusevent_new constructs a new QFocusEvent object.
///
/// ``` enum QEvent__Type typeVal ```
QFocusEvent* q_focusevent_new(int64_t typeVal) {
    return QFocusEvent_new(typeVal);
}

/// q_focusevent_new2 constructs a new QFocusEvent object.
///
/// ``` enum QEvent__Type typeVal, enum Qt__FocusReason reason ```
QFocusEvent* q_focusevent_new2(int64_t typeVal, int64_t reason) {
    return QFocusEvent_new2(typeVal, reason);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfocusevent.html#clone)
///
/// ``` QFocusEvent* self ```
QFocusEvent* q_focusevent_clone(void* self) {
    return QFocusEvent_Clone((QFocusEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QFocusEvent* self, QFocusEvent* (*slot)() ```
void q_focusevent_on_clone(void* self, QFocusEvent* (*slot)()) {
    QFocusEvent_OnClone((QFocusEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFocusEvent* self ```
QFocusEvent* q_focusevent_qbase_clone(void* self) {
    return QFocusEvent_QBaseClone((QFocusEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfocusevent.html#gotFocus)
///
/// ``` QFocusEvent* self ```
bool q_focusevent_got_focus(void* self) {
    return QFocusEvent_GotFocus((QFocusEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfocusevent.html#lostFocus)
///
/// ``` QFocusEvent* self ```
bool q_focusevent_lost_focus(void* self) {
    return QFocusEvent_LostFocus((QFocusEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfocusevent.html#reason)
///
/// ``` QFocusEvent* self ```
int64_t q_focusevent_reason(void* self) {
    return QFocusEvent_Reason((QFocusEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QFocusEvent* self ```
int64_t q_focusevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QFocusEvent* self ```
bool q_focusevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QFocusEvent* self ```
bool q_focusevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QFocusEvent* self ```
void q_focusevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QFocusEvent* self ```
void q_focusevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QFocusEvent* self ```
bool q_focusevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QFocusEvent* self ```
bool q_focusevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QFocusEvent* self ```
bool q_focusevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_focusevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_focusevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusEvent* self, bool accepted ```
void q_focusevent_set_accepted(void* self, bool accepted) {
    QFocusEvent_SetAccepted((QFocusEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusEvent* self, bool accepted ```
void q_focusevent_qbase_set_accepted(void* self, bool accepted) {
    QFocusEvent_QBaseSetAccepted((QFocusEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusEvent* self, void (*slot)(QFocusEvent*, bool) ```
void q_focusevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QFocusEvent_OnSetAccepted((QFocusEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QFocusEvent* self ```
void q_focusevent_delete(void* self) {
    QFocusEvent_Delete((QFocusEvent*)(self));
}

/// https://doc.qt.io/qt-6/qpaintevent.html

/// q_paintevent_new constructs a new QPaintEvent object.
///
/// ``` QRegion* paintRegion ```
QPaintEvent* q_paintevent_new(void* paintRegion) {
    return QPaintEvent_new((QRegion*)paintRegion);
}

/// q_paintevent_new2 constructs a new QPaintEvent object.
///
/// ``` QRect* paintRect ```
QPaintEvent* q_paintevent_new2(void* paintRect) {
    return QPaintEvent_new2((QRect*)paintRect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintevent.html#clone)
///
/// ``` QPaintEvent* self ```
QPaintEvent* q_paintevent_clone(void* self) {
    return QPaintEvent_Clone((QPaintEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QPaintEvent* self, QPaintEvent* (*slot)() ```
void q_paintevent_on_clone(void* self, QPaintEvent* (*slot)()) {
    QPaintEvent_OnClone((QPaintEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPaintEvent* self ```
QPaintEvent* q_paintevent_qbase_clone(void* self) {
    return QPaintEvent_QBaseClone((QPaintEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintevent.html#rect)
///
/// ``` QPaintEvent* self ```
QRect* q_paintevent_rect(void* self) {
    return QPaintEvent_Rect((QPaintEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintevent.html#region)
///
/// ``` QPaintEvent* self ```
QRegion* q_paintevent_region(void* self) {
    return QPaintEvent_Region((QPaintEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QPaintEvent* self ```
int64_t q_paintevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QPaintEvent* self ```
bool q_paintevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QPaintEvent* self ```
bool q_paintevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QPaintEvent* self ```
void q_paintevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QPaintEvent* self ```
void q_paintevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QPaintEvent* self ```
bool q_paintevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QPaintEvent* self ```
bool q_paintevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QPaintEvent* self ```
bool q_paintevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_paintevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_paintevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPaintEvent* self, bool accepted ```
void q_paintevent_set_accepted(void* self, bool accepted) {
    QPaintEvent_SetAccepted((QPaintEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPaintEvent* self, bool accepted ```
void q_paintevent_qbase_set_accepted(void* self, bool accepted) {
    QPaintEvent_QBaseSetAccepted((QPaintEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPaintEvent* self, void (*slot)(QPaintEvent*, bool) ```
void q_paintevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QPaintEvent_OnSetAccepted((QPaintEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QPaintEvent* self ```
void q_paintevent_delete(void* self) {
    QPaintEvent_Delete((QPaintEvent*)(self));
}

/// https://doc.qt.io/qt-6/qmoveevent.html

/// q_moveevent_new constructs a new QMoveEvent object.
///
/// ``` QPoint* pos, QPoint* oldPos ```
QMoveEvent* q_moveevent_new(void* pos, void* oldPos) {
    return QMoveEvent_new((QPoint*)pos, (QPoint*)oldPos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmoveevent.html#clone)
///
/// ``` QMoveEvent* self ```
QMoveEvent* q_moveevent_clone(void* self) {
    return QMoveEvent_Clone((QMoveEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QMoveEvent* self, QMoveEvent* (*slot)() ```
void q_moveevent_on_clone(void* self, QMoveEvent* (*slot)()) {
    QMoveEvent_OnClone((QMoveEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMoveEvent* self ```
QMoveEvent* q_moveevent_qbase_clone(void* self) {
    return QMoveEvent_QBaseClone((QMoveEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmoveevent.html#pos)
///
/// ``` QMoveEvent* self ```
QPoint* q_moveevent_pos(void* self) {
    return QMoveEvent_Pos((QMoveEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmoveevent.html#oldPos)
///
/// ``` QMoveEvent* self ```
QPoint* q_moveevent_old_pos(void* self) {
    return QMoveEvent_OldPos((QMoveEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QMoveEvent* self ```
int64_t q_moveevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QMoveEvent* self ```
bool q_moveevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QMoveEvent* self ```
bool q_moveevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QMoveEvent* self ```
void q_moveevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QMoveEvent* self ```
void q_moveevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QMoveEvent* self ```
bool q_moveevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QMoveEvent* self ```
bool q_moveevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QMoveEvent* self ```
bool q_moveevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_moveevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_moveevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMoveEvent* self, bool accepted ```
void q_moveevent_set_accepted(void* self, bool accepted) {
    QMoveEvent_SetAccepted((QMoveEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMoveEvent* self, bool accepted ```
void q_moveevent_qbase_set_accepted(void* self, bool accepted) {
    QMoveEvent_QBaseSetAccepted((QMoveEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMoveEvent* self, void (*slot)(QMoveEvent*, bool) ```
void q_moveevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QMoveEvent_OnSetAccepted((QMoveEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QMoveEvent* self ```
void q_moveevent_delete(void* self) {
    QMoveEvent_Delete((QMoveEvent*)(self));
}

/// https://doc.qt.io/qt-6/qexposeevent.html

/// q_exposeevent_new constructs a new QExposeEvent object.
///
/// ``` QRegion* m_region ```
QExposeEvent* q_exposeevent_new(void* m_region) {
    return QExposeEvent_new((QRegion*)m_region);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qexposeevent.html#clone)
///
/// ``` QExposeEvent* self ```
QExposeEvent* q_exposeevent_clone(void* self) {
    return QExposeEvent_Clone((QExposeEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QExposeEvent* self, QExposeEvent* (*slot)() ```
void q_exposeevent_on_clone(void* self, QExposeEvent* (*slot)()) {
    QExposeEvent_OnClone((QExposeEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QExposeEvent* self ```
QExposeEvent* q_exposeevent_qbase_clone(void* self) {
    return QExposeEvent_QBaseClone((QExposeEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qexposeevent.html#region)
///
/// ``` QExposeEvent* self ```
QRegion* q_exposeevent_region(void* self) {
    return QExposeEvent_Region((QExposeEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QExposeEvent* self ```
int64_t q_exposeevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QExposeEvent* self ```
bool q_exposeevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QExposeEvent* self ```
bool q_exposeevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QExposeEvent* self ```
void q_exposeevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QExposeEvent* self ```
void q_exposeevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QExposeEvent* self ```
bool q_exposeevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QExposeEvent* self ```
bool q_exposeevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QExposeEvent* self ```
bool q_exposeevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_exposeevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_exposeevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QExposeEvent* self, bool accepted ```
void q_exposeevent_set_accepted(void* self, bool accepted) {
    QExposeEvent_SetAccepted((QExposeEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QExposeEvent* self, bool accepted ```
void q_exposeevent_qbase_set_accepted(void* self, bool accepted) {
    QExposeEvent_QBaseSetAccepted((QExposeEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QExposeEvent* self, void (*slot)(QExposeEvent*, bool) ```
void q_exposeevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QExposeEvent_OnSetAccepted((QExposeEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QExposeEvent* self ```
void q_exposeevent_delete(void* self) {
    QExposeEvent_Delete((QExposeEvent*)(self));
}

/// https://doc.qt.io/qt-6/qplatformsurfaceevent.html

/// q_platformsurfaceevent_new constructs a new QPlatformSurfaceEvent object.
///
/// ``` enum QPlatformSurfaceEvent__SurfaceEventType surfaceEventType ```
QPlatformSurfaceEvent* q_platformsurfaceevent_new(int64_t surfaceEventType) {
    return QPlatformSurfaceEvent_new(surfaceEventType);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplatformsurfaceevent.html#clone)
///
/// ``` QPlatformSurfaceEvent* self ```
QPlatformSurfaceEvent* q_platformsurfaceevent_clone(void* self) {
    return QPlatformSurfaceEvent_Clone((QPlatformSurfaceEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QPlatformSurfaceEvent* self, QPlatformSurfaceEvent* (*slot)() ```
void q_platformsurfaceevent_on_clone(void* self, QPlatformSurfaceEvent* (*slot)()) {
    QPlatformSurfaceEvent_OnClone((QPlatformSurfaceEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlatformSurfaceEvent* self ```
QPlatformSurfaceEvent* q_platformsurfaceevent_qbase_clone(void* self) {
    return QPlatformSurfaceEvent_QBaseClone((QPlatformSurfaceEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplatformsurfaceevent.html#surfaceEventType)
///
/// ``` QPlatformSurfaceEvent* self ```
int64_t q_platformsurfaceevent_surface_event_type(void* self) {
    return QPlatformSurfaceEvent_SurfaceEventType((QPlatformSurfaceEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QPlatformSurfaceEvent* self ```
int64_t q_platformsurfaceevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QPlatformSurfaceEvent* self ```
bool q_platformsurfaceevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QPlatformSurfaceEvent* self ```
bool q_platformsurfaceevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QPlatformSurfaceEvent* self ```
void q_platformsurfaceevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QPlatformSurfaceEvent* self ```
void q_platformsurfaceevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QPlatformSurfaceEvent* self ```
bool q_platformsurfaceevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QPlatformSurfaceEvent* self ```
bool q_platformsurfaceevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QPlatformSurfaceEvent* self ```
bool q_platformsurfaceevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_platformsurfaceevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_platformsurfaceevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlatformSurfaceEvent* self, bool accepted ```
void q_platformsurfaceevent_set_accepted(void* self, bool accepted) {
    QPlatformSurfaceEvent_SetAccepted((QPlatformSurfaceEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlatformSurfaceEvent* self, bool accepted ```
void q_platformsurfaceevent_qbase_set_accepted(void* self, bool accepted) {
    QPlatformSurfaceEvent_QBaseSetAccepted((QPlatformSurfaceEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlatformSurfaceEvent* self, void (*slot)(QPlatformSurfaceEvent*, bool) ```
void q_platformsurfaceevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QPlatformSurfaceEvent_OnSetAccepted((QPlatformSurfaceEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QPlatformSurfaceEvent* self ```
void q_platformsurfaceevent_delete(void* self) {
    QPlatformSurfaceEvent_Delete((QPlatformSurfaceEvent*)(self));
}

/// https://doc.qt.io/qt-6/qresizeevent.html

/// q_resizeevent_new constructs a new QResizeEvent object.
///
/// ``` QSize* size, QSize* oldSize ```
QResizeEvent* q_resizeevent_new(void* size, void* oldSize) {
    return QResizeEvent_new((QSize*)size, (QSize*)oldSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qresizeevent.html#clone)
///
/// ``` QResizeEvent* self ```
QResizeEvent* q_resizeevent_clone(void* self) {
    return QResizeEvent_Clone((QResizeEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QResizeEvent* self, QResizeEvent* (*slot)() ```
void q_resizeevent_on_clone(void* self, QResizeEvent* (*slot)()) {
    QResizeEvent_OnClone((QResizeEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QResizeEvent* self ```
QResizeEvent* q_resizeevent_qbase_clone(void* self) {
    return QResizeEvent_QBaseClone((QResizeEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qresizeevent.html#size)
///
/// ``` QResizeEvent* self ```
QSize* q_resizeevent_size(void* self) {
    return QResizeEvent_Size((QResizeEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qresizeevent.html#oldSize)
///
/// ``` QResizeEvent* self ```
QSize* q_resizeevent_old_size(void* self) {
    return QResizeEvent_OldSize((QResizeEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QResizeEvent* self ```
int64_t q_resizeevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QResizeEvent* self ```
bool q_resizeevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QResizeEvent* self ```
bool q_resizeevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QResizeEvent* self ```
void q_resizeevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QResizeEvent* self ```
void q_resizeevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QResizeEvent* self ```
bool q_resizeevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QResizeEvent* self ```
bool q_resizeevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QResizeEvent* self ```
bool q_resizeevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_resizeevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_resizeevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QResizeEvent* self, bool accepted ```
void q_resizeevent_set_accepted(void* self, bool accepted) {
    QResizeEvent_SetAccepted((QResizeEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QResizeEvent* self, bool accepted ```
void q_resizeevent_qbase_set_accepted(void* self, bool accepted) {
    QResizeEvent_QBaseSetAccepted((QResizeEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QResizeEvent* self, void (*slot)(QResizeEvent*, bool) ```
void q_resizeevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QResizeEvent_OnSetAccepted((QResizeEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QResizeEvent* self ```
void q_resizeevent_delete(void* self) {
    QResizeEvent_Delete((QResizeEvent*)(self));
}

/// https://doc.qt.io/qt-6/qcloseevent.html

/// q_closeevent_new constructs a new QCloseEvent object.
///
///
QCloseEvent* q_closeevent_new() {
    return QCloseEvent_new();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcloseevent.html#clone)
///
/// ``` QCloseEvent* self ```
QCloseEvent* q_closeevent_clone(void* self) {
    return QCloseEvent_Clone((QCloseEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QCloseEvent* self, QCloseEvent* (*slot)() ```
void q_closeevent_on_clone(void* self, QCloseEvent* (*slot)()) {
    QCloseEvent_OnClone((QCloseEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCloseEvent* self ```
QCloseEvent* q_closeevent_qbase_clone(void* self) {
    return QCloseEvent_QBaseClone((QCloseEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QCloseEvent* self ```
int64_t q_closeevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QCloseEvent* self ```
bool q_closeevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QCloseEvent* self ```
bool q_closeevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QCloseEvent* self ```
void q_closeevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QCloseEvent* self ```
void q_closeevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QCloseEvent* self ```
bool q_closeevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QCloseEvent* self ```
bool q_closeevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QCloseEvent* self ```
bool q_closeevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_closeevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_closeevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCloseEvent* self, bool accepted ```
void q_closeevent_set_accepted(void* self, bool accepted) {
    QCloseEvent_SetAccepted((QCloseEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCloseEvent* self, bool accepted ```
void q_closeevent_qbase_set_accepted(void* self, bool accepted) {
    QCloseEvent_QBaseSetAccepted((QCloseEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCloseEvent* self, void (*slot)(QCloseEvent*, bool) ```
void q_closeevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QCloseEvent_OnSetAccepted((QCloseEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QCloseEvent* self ```
void q_closeevent_delete(void* self) {
    QCloseEvent_Delete((QCloseEvent*)(self));
}

/// https://doc.qt.io/qt-6/qicondragevent.html

/// q_icondragevent_new constructs a new QIconDragEvent object.
///
///
QIconDragEvent* q_icondragevent_new() {
    return QIconDragEvent_new();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qicondragevent.html#clone)
///
/// ``` QIconDragEvent* self ```
QIconDragEvent* q_icondragevent_clone(void* self) {
    return QIconDragEvent_Clone((QIconDragEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QIconDragEvent* self, QIconDragEvent* (*slot)() ```
void q_icondragevent_on_clone(void* self, QIconDragEvent* (*slot)()) {
    QIconDragEvent_OnClone((QIconDragEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIconDragEvent* self ```
QIconDragEvent* q_icondragevent_qbase_clone(void* self) {
    return QIconDragEvent_QBaseClone((QIconDragEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QIconDragEvent* self ```
int64_t q_icondragevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QIconDragEvent* self ```
bool q_icondragevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QIconDragEvent* self ```
bool q_icondragevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QIconDragEvent* self ```
void q_icondragevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QIconDragEvent* self ```
void q_icondragevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QIconDragEvent* self ```
bool q_icondragevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QIconDragEvent* self ```
bool q_icondragevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QIconDragEvent* self ```
bool q_icondragevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_icondragevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_icondragevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIconDragEvent* self, bool accepted ```
void q_icondragevent_set_accepted(void* self, bool accepted) {
    QIconDragEvent_SetAccepted((QIconDragEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIconDragEvent* self, bool accepted ```
void q_icondragevent_qbase_set_accepted(void* self, bool accepted) {
    QIconDragEvent_QBaseSetAccepted((QIconDragEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIconDragEvent* self, void (*slot)(QIconDragEvent*, bool) ```
void q_icondragevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QIconDragEvent_OnSetAccepted((QIconDragEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QIconDragEvent* self ```
void q_icondragevent_delete(void* self) {
    QIconDragEvent_Delete((QIconDragEvent*)(self));
}

/// https://doc.qt.io/qt-6/qshowevent.html

/// q_showevent_new constructs a new QShowEvent object.
///
///
QShowEvent* q_showevent_new() {
    return QShowEvent_new();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qshowevent.html#clone)
///
/// ``` QShowEvent* self ```
QShowEvent* q_showevent_clone(void* self) {
    return QShowEvent_Clone((QShowEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QShowEvent* self, QShowEvent* (*slot)() ```
void q_showevent_on_clone(void* self, QShowEvent* (*slot)()) {
    QShowEvent_OnClone((QShowEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QShowEvent* self ```
QShowEvent* q_showevent_qbase_clone(void* self) {
    return QShowEvent_QBaseClone((QShowEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QShowEvent* self ```
int64_t q_showevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QShowEvent* self ```
bool q_showevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QShowEvent* self ```
bool q_showevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QShowEvent* self ```
void q_showevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QShowEvent* self ```
void q_showevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QShowEvent* self ```
bool q_showevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QShowEvent* self ```
bool q_showevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QShowEvent* self ```
bool q_showevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_showevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_showevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QShowEvent* self, bool accepted ```
void q_showevent_set_accepted(void* self, bool accepted) {
    QShowEvent_SetAccepted((QShowEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QShowEvent* self, bool accepted ```
void q_showevent_qbase_set_accepted(void* self, bool accepted) {
    QShowEvent_QBaseSetAccepted((QShowEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QShowEvent* self, void (*slot)(QShowEvent*, bool) ```
void q_showevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QShowEvent_OnSetAccepted((QShowEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QShowEvent* self ```
void q_showevent_delete(void* self) {
    QShowEvent_Delete((QShowEvent*)(self));
}

/// https://doc.qt.io/qt-6/qhideevent.html

/// q_hideevent_new constructs a new QHideEvent object.
///
///
QHideEvent* q_hideevent_new() {
    return QHideEvent_new();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhideevent.html#clone)
///
/// ``` QHideEvent* self ```
QHideEvent* q_hideevent_clone(void* self) {
    return QHideEvent_Clone((QHideEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QHideEvent* self, QHideEvent* (*slot)() ```
void q_hideevent_on_clone(void* self, QHideEvent* (*slot)()) {
    QHideEvent_OnClone((QHideEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHideEvent* self ```
QHideEvent* q_hideevent_qbase_clone(void* self) {
    return QHideEvent_QBaseClone((QHideEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QHideEvent* self ```
int64_t q_hideevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QHideEvent* self ```
bool q_hideevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QHideEvent* self ```
bool q_hideevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QHideEvent* self ```
void q_hideevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QHideEvent* self ```
void q_hideevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QHideEvent* self ```
bool q_hideevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QHideEvent* self ```
bool q_hideevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QHideEvent* self ```
bool q_hideevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_hideevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_hideevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHideEvent* self, bool accepted ```
void q_hideevent_set_accepted(void* self, bool accepted) {
    QHideEvent_SetAccepted((QHideEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHideEvent* self, bool accepted ```
void q_hideevent_qbase_set_accepted(void* self, bool accepted) {
    QHideEvent_QBaseSetAccepted((QHideEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHideEvent* self, void (*slot)(QHideEvent*, bool) ```
void q_hideevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QHideEvent_OnSetAccepted((QHideEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QHideEvent* self ```
void q_hideevent_delete(void* self) {
    QHideEvent_Delete((QHideEvent*)(self));
}

/// https://doc.qt.io/qt-6/qcontextmenuevent.html

/// q_contextmenuevent_new constructs a new QContextMenuEvent object.
///
/// ``` enum QContextMenuEvent__Reason reason, QPoint* pos, QPoint* globalPos ```
QContextMenuEvent* q_contextmenuevent_new(int64_t reason, void* pos, void* globalPos) {
    return QContextMenuEvent_new(reason, (QPoint*)pos, (QPoint*)globalPos);
}

/// q_contextmenuevent_new2 constructs a new QContextMenuEvent object.
///
/// ``` enum QContextMenuEvent__Reason reason, QPoint* pos ```
QContextMenuEvent* q_contextmenuevent_new2(int64_t reason, void* pos) {
    return QContextMenuEvent_new2(reason, (QPoint*)pos);
}

/// q_contextmenuevent_new3 constructs a new QContextMenuEvent object.
///
/// ``` enum QContextMenuEvent__Reason reason, QPoint* pos, QPoint* globalPos, int modifiers ```
QContextMenuEvent* q_contextmenuevent_new3(int64_t reason, void* pos, void* globalPos, int64_t modifiers) {
    return QContextMenuEvent_new3(reason, (QPoint*)pos, (QPoint*)globalPos, modifiers);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcontextmenuevent.html#clone)
///
/// ``` QContextMenuEvent* self ```
QContextMenuEvent* q_contextmenuevent_clone(void* self) {
    return QContextMenuEvent_Clone((QContextMenuEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QContextMenuEvent* self, QContextMenuEvent* (*slot)() ```
void q_contextmenuevent_on_clone(void* self, QContextMenuEvent* (*slot)()) {
    QContextMenuEvent_OnClone((QContextMenuEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QContextMenuEvent* self ```
QContextMenuEvent* q_contextmenuevent_qbase_clone(void* self) {
    return QContextMenuEvent_QBaseClone((QContextMenuEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcontextmenuevent.html#x)
///
/// ``` QContextMenuEvent* self ```
int32_t q_contextmenuevent_x(void* self) {
    return QContextMenuEvent_X((QContextMenuEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcontextmenuevent.html#y)
///
/// ``` QContextMenuEvent* self ```
int32_t q_contextmenuevent_y(void* self) {
    return QContextMenuEvent_Y((QContextMenuEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcontextmenuevent.html#globalX)
///
/// ``` QContextMenuEvent* self ```
int32_t q_contextmenuevent_global_x(void* self) {
    return QContextMenuEvent_GlobalX((QContextMenuEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcontextmenuevent.html#globalY)
///
/// ``` QContextMenuEvent* self ```
int32_t q_contextmenuevent_global_y(void* self) {
    return QContextMenuEvent_GlobalY((QContextMenuEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcontextmenuevent.html#pos)
///
/// ``` QContextMenuEvent* self ```
QPoint* q_contextmenuevent_pos(void* self) {
    return QContextMenuEvent_Pos((QContextMenuEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcontextmenuevent.html#globalPos)
///
/// ``` QContextMenuEvent* self ```
QPoint* q_contextmenuevent_global_pos(void* self) {
    return QContextMenuEvent_GlobalPos((QContextMenuEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcontextmenuevent.html#reason)
///
/// ``` QContextMenuEvent* self ```
int64_t q_contextmenuevent_reason(void* self) {
    return QContextMenuEvent_Reason((QContextMenuEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// ``` QContextMenuEvent* self ```
QInputDevice* q_contextmenuevent_device(void* self) {
    return QInputEvent_Device((QInputEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// ``` QContextMenuEvent* self ```
int64_t q_contextmenuevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
///
/// ``` QContextMenuEvent* self ```
int64_t q_contextmenuevent_modifiers(void* self) {
    return QInputEvent_Modifiers((QInputEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// ``` QContextMenuEvent* self, int modifiers ```
void q_contextmenuevent_set_modifiers(void* self, int64_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// ``` QContextMenuEvent* self ```
uint64_t q_contextmenuevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QContextMenuEvent* self ```
int64_t q_contextmenuevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QContextMenuEvent* self ```
bool q_contextmenuevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QContextMenuEvent* self ```
bool q_contextmenuevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QContextMenuEvent* self ```
void q_contextmenuevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QContextMenuEvent* self ```
void q_contextmenuevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QContextMenuEvent* self ```
bool q_contextmenuevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QContextMenuEvent* self ```
bool q_contextmenuevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QContextMenuEvent* self ```
bool q_contextmenuevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_contextmenuevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_contextmenuevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QContextMenuEvent* self, uint64_t timestamp ```
void q_contextmenuevent_set_timestamp(void* self, uint64_t timestamp) {
    QContextMenuEvent_SetTimestamp((QContextMenuEvent*)self, timestamp);
}

/// Inherited from QInputEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QContextMenuEvent* self, uint64_t timestamp ```
void q_contextmenuevent_qbase_set_timestamp(void* self, uint64_t timestamp) {
    QContextMenuEvent_QBaseSetTimestamp((QContextMenuEvent*)self, timestamp);
}

/// Inherited from QInputEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QContextMenuEvent* self, void (*slot)(QContextMenuEvent*, uint64_t) ```
void q_contextmenuevent_on_set_timestamp(void* self, void (*slot)(void*, uint64_t)) {
    QContextMenuEvent_OnSetTimestamp((QContextMenuEvent*)self, (intptr_t)slot);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QContextMenuEvent* self, bool accepted ```
void q_contextmenuevent_set_accepted(void* self, bool accepted) {
    QContextMenuEvent_SetAccepted((QContextMenuEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QContextMenuEvent* self, bool accepted ```
void q_contextmenuevent_qbase_set_accepted(void* self, bool accepted) {
    QContextMenuEvent_QBaseSetAccepted((QContextMenuEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QContextMenuEvent* self, void (*slot)(QContextMenuEvent*, bool) ```
void q_contextmenuevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QContextMenuEvent_OnSetAccepted((QContextMenuEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QContextMenuEvent* self ```
void q_contextmenuevent_delete(void* self) {
    QContextMenuEvent_Delete((QContextMenuEvent*)(self));
}

/// https://doc.qt.io/qt-6/qinputmethodevent.html

/// q_inputmethodevent_new constructs a new QInputMethodEvent object.
///
///
QInputMethodEvent* q_inputmethodevent_new() {
    return QInputMethodEvent_new();
}

/// q_inputmethodevent_new2 constructs a new QInputMethodEvent object.
///
/// ``` const char* preeditText, QInputMethodEvent__Attribute* attributes[] ```
QInputMethodEvent* q_inputmethodevent_new2(const char* preeditText, void* attributes[]) {
    QInputMethodEvent__Attribute** attributes_arr = (QInputMethodEvent__Attribute**)attributes;
    size_t attributes_len = 0;
    while (attributes_arr[attributes_len] != NULL) {
        attributes_len++;
    }
    libqt_list attributes_list = {
        .len = attributes_len,
        .data = {(QInputMethodEvent__Attribute*)attributes},
    };

    return QInputMethodEvent_new2(qstring(preeditText), attributes_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodevent.html#clone)
///
/// ``` QInputMethodEvent* self ```
QInputMethodEvent* q_inputmethodevent_clone(void* self) {
    return QInputMethodEvent_Clone((QInputMethodEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QInputMethodEvent* self, QInputMethodEvent* (*slot)() ```
void q_inputmethodevent_on_clone(void* self, QInputMethodEvent* (*slot)()) {
    QInputMethodEvent_OnClone((QInputMethodEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QInputMethodEvent* self ```
QInputMethodEvent* q_inputmethodevent_qbase_clone(void* self) {
    return QInputMethodEvent_QBaseClone((QInputMethodEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodevent.html#setCommitString)
///
/// ``` QInputMethodEvent* self, const char* commitString ```
void q_inputmethodevent_set_commit_string(void* self, const char* commitString) {
    QInputMethodEvent_SetCommitString((QInputMethodEvent*)self, qstring(commitString));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodevent.html#attributes)
///
/// ``` QInputMethodEvent* self ```
libqt_list /* of QInputMethodEvent__Attribute* */ q_inputmethodevent_attributes(void* self) {
    libqt_list _arr = QInputMethodEvent_Attributes((QInputMethodEvent*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodevent.html#preeditString)
///
/// ``` QInputMethodEvent* self ```
const char* q_inputmethodevent_preedit_string(void* self) {
    libqt_string _str = QInputMethodEvent_PreeditString((QInputMethodEvent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodevent.html#commitString)
///
/// ``` QInputMethodEvent* self ```
const char* q_inputmethodevent_commit_string(void* self) {
    libqt_string _str = QInputMethodEvent_CommitString((QInputMethodEvent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodevent.html#replacementStart)
///
/// ``` QInputMethodEvent* self ```
int32_t q_inputmethodevent_replacement_start(void* self) {
    return QInputMethodEvent_ReplacementStart((QInputMethodEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodevent.html#replacementLength)
///
/// ``` QInputMethodEvent* self ```
int32_t q_inputmethodevent_replacement_length(void* self) {
    return QInputMethodEvent_ReplacementLength((QInputMethodEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodevent.html#setCommitString)
///
/// ``` QInputMethodEvent* self, const char* commitString, int replaceFrom ```
void q_inputmethodevent_set_commit_string2(void* self, const char* commitString, int replaceFrom) {
    QInputMethodEvent_SetCommitString2((QInputMethodEvent*)self, qstring(commitString), replaceFrom);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodevent.html#setCommitString)
///
/// ``` QInputMethodEvent* self, const char* commitString, int replaceFrom, int replaceLength ```
void q_inputmethodevent_set_commit_string3(void* self, const char* commitString, int replaceFrom, int replaceLength) {
    QInputMethodEvent_SetCommitString3((QInputMethodEvent*)self, qstring(commitString), replaceFrom, replaceLength);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QInputMethodEvent* self ```
int64_t q_inputmethodevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QInputMethodEvent* self ```
bool q_inputmethodevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QInputMethodEvent* self ```
bool q_inputmethodevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QInputMethodEvent* self ```
void q_inputmethodevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QInputMethodEvent* self ```
void q_inputmethodevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QInputMethodEvent* self ```
bool q_inputmethodevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QInputMethodEvent* self ```
bool q_inputmethodevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QInputMethodEvent* self ```
bool q_inputmethodevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_inputmethodevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_inputmethodevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputMethodEvent* self, bool accepted ```
void q_inputmethodevent_set_accepted(void* self, bool accepted) {
    QInputMethodEvent_SetAccepted((QInputMethodEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputMethodEvent* self, bool accepted ```
void q_inputmethodevent_qbase_set_accepted(void* self, bool accepted) {
    QInputMethodEvent_QBaseSetAccepted((QInputMethodEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputMethodEvent* self, void (*slot)(QInputMethodEvent*, bool) ```
void q_inputmethodevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QInputMethodEvent_OnSetAccepted((QInputMethodEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QInputMethodEvent* self ```
void q_inputmethodevent_delete(void* self) {
    QInputMethodEvent_Delete((QInputMethodEvent*)(self));
}

/// https://doc.qt.io/qt-6/qinputmethodqueryevent.html

/// q_inputmethodqueryevent_new constructs a new QInputMethodQueryEvent object.
///
/// ``` int queries ```
QInputMethodQueryEvent* q_inputmethodqueryevent_new(int64_t queries) {
    return QInputMethodQueryEvent_new(queries);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#clone)
///
/// ``` QInputMethodQueryEvent* self ```
QInputMethodQueryEvent* q_inputmethodqueryevent_clone(void* self) {
    return QInputMethodQueryEvent_Clone((QInputMethodQueryEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QInputMethodQueryEvent* self, QInputMethodQueryEvent* (*slot)() ```
void q_inputmethodqueryevent_on_clone(void* self, QInputMethodQueryEvent* (*slot)()) {
    QInputMethodQueryEvent_OnClone((QInputMethodQueryEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QInputMethodQueryEvent* self ```
QInputMethodQueryEvent* q_inputmethodqueryevent_qbase_clone(void* self) {
    return QInputMethodQueryEvent_QBaseClone((QInputMethodQueryEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#queries)
///
/// ``` QInputMethodQueryEvent* self ```
int64_t q_inputmethodqueryevent_queries(void* self) {
    return QInputMethodQueryEvent_Queries((QInputMethodQueryEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#setValue)
///
/// ``` QInputMethodQueryEvent* self, enum Qt__InputMethodQuery query, QVariant* value ```
void q_inputmethodqueryevent_set_value(void* self, int64_t query, void* value) {
    QInputMethodQueryEvent_SetValue((QInputMethodQueryEvent*)self, query, (QVariant*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#value)
///
/// ``` QInputMethodQueryEvent* self, enum Qt__InputMethodQuery query ```
QVariant* q_inputmethodqueryevent_value(void* self, int64_t query) {
    return QInputMethodQueryEvent_Value((QInputMethodQueryEvent*)self, query);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QInputMethodQueryEvent* self ```
int64_t q_inputmethodqueryevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QInputMethodQueryEvent* self ```
bool q_inputmethodqueryevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QInputMethodQueryEvent* self ```
bool q_inputmethodqueryevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QInputMethodQueryEvent* self ```
void q_inputmethodqueryevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QInputMethodQueryEvent* self ```
void q_inputmethodqueryevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QInputMethodQueryEvent* self ```
bool q_inputmethodqueryevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QInputMethodQueryEvent* self ```
bool q_inputmethodqueryevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QInputMethodQueryEvent* self ```
bool q_inputmethodqueryevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_inputmethodqueryevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_inputmethodqueryevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputMethodQueryEvent* self, bool accepted ```
void q_inputmethodqueryevent_set_accepted(void* self, bool accepted) {
    QInputMethodQueryEvent_SetAccepted((QInputMethodQueryEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputMethodQueryEvent* self, bool accepted ```
void q_inputmethodqueryevent_qbase_set_accepted(void* self, bool accepted) {
    QInputMethodQueryEvent_QBaseSetAccepted((QInputMethodQueryEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputMethodQueryEvent* self, void (*slot)(QInputMethodQueryEvent*, bool) ```
void q_inputmethodqueryevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QInputMethodQueryEvent_OnSetAccepted((QInputMethodQueryEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QInputMethodQueryEvent* self ```
void q_inputmethodqueryevent_delete(void* self) {
    QInputMethodQueryEvent_Delete((QInputMethodQueryEvent*)(self));
}

/// https://doc.qt.io/qt-6/qdropevent.html

/// q_dropevent_new constructs a new QDropEvent object.
///
/// ``` QPointF* pos, int actions, QMimeData* data, int buttons, int modifiers ```
QDropEvent* q_dropevent_new(void* pos, int64_t actions, void* data, int64_t buttons, int64_t modifiers) {
    return QDropEvent_new((QPointF*)pos, actions, (QMimeData*)data, buttons, modifiers);
}

/// q_dropevent_new2 constructs a new QDropEvent object.
///
/// ``` QPointF* pos, int actions, QMimeData* data, int buttons, int modifiers, enum QEvent__Type typeVal ```
QDropEvent* q_dropevent_new2(void* pos, int64_t actions, void* data, int64_t buttons, int64_t modifiers, int64_t typeVal) {
    return QDropEvent_new2((QPointF*)pos, actions, (QMimeData*)data, buttons, modifiers, typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#clone)
///
/// ``` QDropEvent* self ```
QDropEvent* q_dropevent_clone(void* self) {
    return QDropEvent_Clone((QDropEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QDropEvent* self, QDropEvent* (*slot)() ```
void q_dropevent_on_clone(void* self, QDropEvent* (*slot)()) {
    QDropEvent_OnClone((QDropEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDropEvent* self ```
QDropEvent* q_dropevent_qbase_clone(void* self) {
    return QDropEvent_QBaseClone((QDropEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#pos)
///
/// ``` QDropEvent* self ```
QPoint* q_dropevent_pos(void* self) {
    return QDropEvent_Pos((QDropEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#posF)
///
/// ``` QDropEvent* self ```
QPointF* q_dropevent_pos_f(void* self) {
    return QDropEvent_PosF((QDropEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#mouseButtons)
///
/// ``` QDropEvent* self ```
int64_t q_dropevent_mouse_buttons(void* self) {
    return QDropEvent_MouseButtons((QDropEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#keyboardModifiers)
///
/// ``` QDropEvent* self ```
int64_t q_dropevent_keyboard_modifiers(void* self) {
    return QDropEvent_KeyboardModifiers((QDropEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#position)
///
/// ``` QDropEvent* self ```
QPointF* q_dropevent_position(void* self) {
    return QDropEvent_Position((QDropEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#buttons)
///
/// ``` QDropEvent* self ```
int64_t q_dropevent_buttons(void* self) {
    return QDropEvent_Buttons((QDropEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#modifiers)
///
/// ``` QDropEvent* self ```
int64_t q_dropevent_modifiers(void* self) {
    return QDropEvent_Modifiers((QDropEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#possibleActions)
///
/// ``` QDropEvent* self ```
int64_t q_dropevent_possible_actions(void* self) {
    return QDropEvent_PossibleActions((QDropEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#proposedAction)
///
/// ``` QDropEvent* self ```
int64_t q_dropevent_proposed_action(void* self) {
    return QDropEvent_ProposedAction((QDropEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#acceptProposedAction)
///
/// ``` QDropEvent* self ```
void q_dropevent_accept_proposed_action(void* self) {
    QDropEvent_AcceptProposedAction((QDropEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#dropAction)
///
/// ``` QDropEvent* self ```
int64_t q_dropevent_drop_action(void* self) {
    return QDropEvent_DropAction((QDropEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#setDropAction)
///
/// ``` QDropEvent* self, enum Qt__DropAction action ```
void q_dropevent_set_drop_action(void* self, int64_t action) {
    QDropEvent_SetDropAction((QDropEvent*)self, action);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#source)
///
/// ``` QDropEvent* self ```
QObject* q_dropevent_source(void* self) {
    return QDropEvent_Source((QDropEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#mimeData)
///
/// ``` QDropEvent* self ```
QMimeData* q_dropevent_mime_data(void* self) {
    return QDropEvent_MimeData((QDropEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QDropEvent* self ```
int64_t q_dropevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QDropEvent* self ```
bool q_dropevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QDropEvent* self ```
bool q_dropevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QDropEvent* self ```
void q_dropevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QDropEvent* self ```
void q_dropevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QDropEvent* self ```
bool q_dropevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QDropEvent* self ```
bool q_dropevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QDropEvent* self ```
bool q_dropevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_dropevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_dropevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDropEvent* self, bool accepted ```
void q_dropevent_set_accepted(void* self, bool accepted) {
    QDropEvent_SetAccepted((QDropEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDropEvent* self, bool accepted ```
void q_dropevent_qbase_set_accepted(void* self, bool accepted) {
    QDropEvent_QBaseSetAccepted((QDropEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDropEvent* self, void (*slot)(QDropEvent*, bool) ```
void q_dropevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QDropEvent_OnSetAccepted((QDropEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QDropEvent* self ```
void q_dropevent_delete(void* self) {
    QDropEvent_Delete((QDropEvent*)(self));
}

/// https://doc.qt.io/qt-6/qdragmoveevent.html

/// q_dragmoveevent_new constructs a new QDragMoveEvent object.
///
/// ``` QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers ```
QDragMoveEvent* q_dragmoveevent_new(void* pos, int64_t actions, void* data, int64_t buttons, int64_t modifiers) {
    return QDragMoveEvent_new((QPoint*)pos, actions, (QMimeData*)data, buttons, modifiers);
}

/// q_dragmoveevent_new2 constructs a new QDragMoveEvent object.
///
/// ``` QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers, enum QEvent__Type typeVal ```
QDragMoveEvent* q_dragmoveevent_new2(void* pos, int64_t actions, void* data, int64_t buttons, int64_t modifiers, int64_t typeVal) {
    return QDragMoveEvent_new2((QPoint*)pos, actions, (QMimeData*)data, buttons, modifiers, typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdragmoveevent.html#clone)
///
/// ``` QDragMoveEvent* self ```
QDragMoveEvent* q_dragmoveevent_clone(void* self) {
    return QDragMoveEvent_Clone((QDragMoveEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QDragMoveEvent* self, QDragMoveEvent* (*slot)() ```
void q_dragmoveevent_on_clone(void* self, QDragMoveEvent* (*slot)()) {
    QDragMoveEvent_OnClone((QDragMoveEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDragMoveEvent* self ```
QDragMoveEvent* q_dragmoveevent_qbase_clone(void* self) {
    return QDragMoveEvent_QBaseClone((QDragMoveEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdragmoveevent.html#answerRect)
///
/// ``` QDragMoveEvent* self ```
QRect* q_dragmoveevent_answer_rect(void* self) {
    return QDragMoveEvent_AnswerRect((QDragMoveEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdragmoveevent.html#accept)
///
/// ``` QDragMoveEvent* self ```
void q_dragmoveevent_accept(void* self) {
    QDragMoveEvent_Accept((QDragMoveEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdragmoveevent.html#ignore)
///
/// ``` QDragMoveEvent* self ```
void q_dragmoveevent_ignore(void* self) {
    QDragMoveEvent_Ignore((QDragMoveEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdragmoveevent.html#accept)
///
/// ``` QDragMoveEvent* self, QRect* r ```
void q_dragmoveevent_accept_with_q_rect(void* self, void* r) {
    QDragMoveEvent_AcceptWithQRect((QDragMoveEvent*)self, (QRect*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdragmoveevent.html#ignore)
///
/// ``` QDragMoveEvent* self, QRect* r ```
void q_dragmoveevent_ignore_with_q_rect(void* self, void* r) {
    QDragMoveEvent_IgnoreWithQRect((QDragMoveEvent*)self, (QRect*)r);
}

/// Inherited from QDropEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#pos)
///
/// ``` QDragMoveEvent* self ```
QPoint* q_dragmoveevent_pos(void* self) {
    return QDropEvent_Pos((QDropEvent*)self);
}

/// Inherited from QDropEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#posF)
///
/// ``` QDragMoveEvent* self ```
QPointF* q_dragmoveevent_pos_f(void* self) {
    return QDropEvent_PosF((QDropEvent*)self);
}

/// Inherited from QDropEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#mouseButtons)
///
/// ``` QDragMoveEvent* self ```
int64_t q_dragmoveevent_mouse_buttons(void* self) {
    return QDropEvent_MouseButtons((QDropEvent*)self);
}

/// Inherited from QDropEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#keyboardModifiers)
///
/// ``` QDragMoveEvent* self ```
int64_t q_dragmoveevent_keyboard_modifiers(void* self) {
    return QDropEvent_KeyboardModifiers((QDropEvent*)self);
}

/// Inherited from QDropEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#position)
///
/// ``` QDragMoveEvent* self ```
QPointF* q_dragmoveevent_position(void* self) {
    return QDropEvent_Position((QDropEvent*)self);
}

/// Inherited from QDropEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#buttons)
///
/// ``` QDragMoveEvent* self ```
int64_t q_dragmoveevent_buttons(void* self) {
    return QDropEvent_Buttons((QDropEvent*)self);
}

/// Inherited from QDropEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#modifiers)
///
/// ``` QDragMoveEvent* self ```
int64_t q_dragmoveevent_modifiers(void* self) {
    return QDropEvent_Modifiers((QDropEvent*)self);
}

/// Inherited from QDropEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#possibleActions)
///
/// ``` QDragMoveEvent* self ```
int64_t q_dragmoveevent_possible_actions(void* self) {
    return QDropEvent_PossibleActions((QDropEvent*)self);
}

/// Inherited from QDropEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#proposedAction)
///
/// ``` QDragMoveEvent* self ```
int64_t q_dragmoveevent_proposed_action(void* self) {
    return QDropEvent_ProposedAction((QDropEvent*)self);
}

/// Inherited from QDropEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#acceptProposedAction)
///
/// ``` QDragMoveEvent* self ```
void q_dragmoveevent_accept_proposed_action(void* self) {
    QDropEvent_AcceptProposedAction((QDropEvent*)self);
}

/// Inherited from QDropEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#dropAction)
///
/// ``` QDragMoveEvent* self ```
int64_t q_dragmoveevent_drop_action(void* self) {
    return QDropEvent_DropAction((QDropEvent*)self);
}

/// Inherited from QDropEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#setDropAction)
///
/// ``` QDragMoveEvent* self, enum Qt__DropAction action ```
void q_dragmoveevent_set_drop_action(void* self, int64_t action) {
    QDropEvent_SetDropAction((QDropEvent*)self, action);
}

/// Inherited from QDropEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#source)
///
/// ``` QDragMoveEvent* self ```
QObject* q_dragmoveevent_source(void* self) {
    return QDropEvent_Source((QDropEvent*)self);
}

/// Inherited from QDropEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#mimeData)
///
/// ``` QDragMoveEvent* self ```
QMimeData* q_dragmoveevent_mime_data(void* self) {
    return QDropEvent_MimeData((QDropEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QDragMoveEvent* self ```
int64_t q_dragmoveevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QDragMoveEvent* self ```
bool q_dragmoveevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QDragMoveEvent* self ```
bool q_dragmoveevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QDragMoveEvent* self ```
bool q_dragmoveevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QDragMoveEvent* self ```
bool q_dragmoveevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QDragMoveEvent* self ```
bool q_dragmoveevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_dragmoveevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_dragmoveevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDragMoveEvent* self, bool accepted ```
void q_dragmoveevent_set_accepted(void* self, bool accepted) {
    QDragMoveEvent_SetAccepted((QDragMoveEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDragMoveEvent* self, bool accepted ```
void q_dragmoveevent_qbase_set_accepted(void* self, bool accepted) {
    QDragMoveEvent_QBaseSetAccepted((QDragMoveEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDragMoveEvent* self, void (*slot)(QDragMoveEvent*, bool) ```
void q_dragmoveevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QDragMoveEvent_OnSetAccepted((QDragMoveEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QDragMoveEvent* self ```
void q_dragmoveevent_delete(void* self) {
    QDragMoveEvent_Delete((QDragMoveEvent*)(self));
}

/// https://doc.qt.io/qt-6/qdragenterevent.html

/// q_dragenterevent_new constructs a new QDragEnterEvent object.
///
/// ``` QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers ```
QDragEnterEvent* q_dragenterevent_new(void* pos, int64_t actions, void* data, int64_t buttons, int64_t modifiers) {
    return QDragEnterEvent_new((QPoint*)pos, actions, (QMimeData*)data, buttons, modifiers);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdragenterevent.html#clone)
///
/// ``` QDragEnterEvent* self ```
QDragEnterEvent* q_dragenterevent_clone(void* self) {
    return QDragEnterEvent_Clone((QDragEnterEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QDragEnterEvent* self, QDragEnterEvent* (*slot)() ```
void q_dragenterevent_on_clone(void* self, QDragEnterEvent* (*slot)()) {
    QDragEnterEvent_OnClone((QDragEnterEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDragEnterEvent* self ```
QDragEnterEvent* q_dragenterevent_qbase_clone(void* self) {
    return QDragEnterEvent_QBaseClone((QDragEnterEvent*)self);
}

/// Inherited from QDragMoveEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdragmoveevent.html#answerRect)
///
/// ``` QDragEnterEvent* self ```
QRect* q_dragenterevent_answer_rect(void* self) {
    return QDragMoveEvent_AnswerRect((QDragMoveEvent*)self);
}

/// Inherited from QDragMoveEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdragmoveevent.html#accept)
///
/// ``` QDragEnterEvent* self ```
void q_dragenterevent_accept(void* self) {
    QDragMoveEvent_Accept((QDragMoveEvent*)self);
}

/// Inherited from QDragMoveEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdragmoveevent.html#ignore)
///
/// ``` QDragEnterEvent* self ```
void q_dragenterevent_ignore(void* self) {
    QDragMoveEvent_Ignore((QDragMoveEvent*)self);
}

/// Inherited from QDragMoveEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdragmoveevent.html#accept)
///
/// ``` QDragEnterEvent* self, QRect* r ```
void q_dragenterevent_accept_with_q_rect(void* self, void* r) {
    QDragMoveEvent_AcceptWithQRect((QDragMoveEvent*)self, (QRect*)r);
}

/// Inherited from QDragMoveEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdragmoveevent.html#ignore)
///
/// ``` QDragEnterEvent* self, QRect* r ```
void q_dragenterevent_ignore_with_q_rect(void* self, void* r) {
    QDragMoveEvent_IgnoreWithQRect((QDragMoveEvent*)self, (QRect*)r);
}

/// Inherited from QDropEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#pos)
///
/// ``` QDragEnterEvent* self ```
QPoint* q_dragenterevent_pos(void* self) {
    return QDropEvent_Pos((QDropEvent*)self);
}

/// Inherited from QDropEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#posF)
///
/// ``` QDragEnterEvent* self ```
QPointF* q_dragenterevent_pos_f(void* self) {
    return QDropEvent_PosF((QDropEvent*)self);
}

/// Inherited from QDropEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#mouseButtons)
///
/// ``` QDragEnterEvent* self ```
int64_t q_dragenterevent_mouse_buttons(void* self) {
    return QDropEvent_MouseButtons((QDropEvent*)self);
}

/// Inherited from QDropEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#keyboardModifiers)
///
/// ``` QDragEnterEvent* self ```
int64_t q_dragenterevent_keyboard_modifiers(void* self) {
    return QDropEvent_KeyboardModifiers((QDropEvent*)self);
}

/// Inherited from QDropEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#position)
///
/// ``` QDragEnterEvent* self ```
QPointF* q_dragenterevent_position(void* self) {
    return QDropEvent_Position((QDropEvent*)self);
}

/// Inherited from QDropEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#buttons)
///
/// ``` QDragEnterEvent* self ```
int64_t q_dragenterevent_buttons(void* self) {
    return QDropEvent_Buttons((QDropEvent*)self);
}

/// Inherited from QDropEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#modifiers)
///
/// ``` QDragEnterEvent* self ```
int64_t q_dragenterevent_modifiers(void* self) {
    return QDropEvent_Modifiers((QDropEvent*)self);
}

/// Inherited from QDropEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#possibleActions)
///
/// ``` QDragEnterEvent* self ```
int64_t q_dragenterevent_possible_actions(void* self) {
    return QDropEvent_PossibleActions((QDropEvent*)self);
}

/// Inherited from QDropEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#proposedAction)
///
/// ``` QDragEnterEvent* self ```
int64_t q_dragenterevent_proposed_action(void* self) {
    return QDropEvent_ProposedAction((QDropEvent*)self);
}

/// Inherited from QDropEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#acceptProposedAction)
///
/// ``` QDragEnterEvent* self ```
void q_dragenterevent_accept_proposed_action(void* self) {
    QDropEvent_AcceptProposedAction((QDropEvent*)self);
}

/// Inherited from QDropEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#dropAction)
///
/// ``` QDragEnterEvent* self ```
int64_t q_dragenterevent_drop_action(void* self) {
    return QDropEvent_DropAction((QDropEvent*)self);
}

/// Inherited from QDropEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#setDropAction)
///
/// ``` QDragEnterEvent* self, enum Qt__DropAction action ```
void q_dragenterevent_set_drop_action(void* self, int64_t action) {
    QDropEvent_SetDropAction((QDropEvent*)self, action);
}

/// Inherited from QDropEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#source)
///
/// ``` QDragEnterEvent* self ```
QObject* q_dragenterevent_source(void* self) {
    return QDropEvent_Source((QDropEvent*)self);
}

/// Inherited from QDropEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdropevent.html#mimeData)
///
/// ``` QDragEnterEvent* self ```
QMimeData* q_dragenterevent_mime_data(void* self) {
    return QDropEvent_MimeData((QDropEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QDragEnterEvent* self ```
int64_t q_dragenterevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QDragEnterEvent* self ```
bool q_dragenterevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QDragEnterEvent* self ```
bool q_dragenterevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QDragEnterEvent* self ```
bool q_dragenterevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QDragEnterEvent* self ```
bool q_dragenterevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QDragEnterEvent* self ```
bool q_dragenterevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_dragenterevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_dragenterevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDragEnterEvent* self, bool accepted ```
void q_dragenterevent_set_accepted(void* self, bool accepted) {
    QDragEnterEvent_SetAccepted((QDragEnterEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDragEnterEvent* self, bool accepted ```
void q_dragenterevent_qbase_set_accepted(void* self, bool accepted) {
    QDragEnterEvent_QBaseSetAccepted((QDragEnterEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDragEnterEvent* self, void (*slot)(QDragEnterEvent*, bool) ```
void q_dragenterevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QDragEnterEvent_OnSetAccepted((QDragEnterEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QDragEnterEvent* self ```
void q_dragenterevent_delete(void* self) {
    QDragEnterEvent_Delete((QDragEnterEvent*)(self));
}

/// https://doc.qt.io/qt-6/qdragleaveevent.html

/// q_dragleaveevent_new constructs a new QDragLeaveEvent object.
///
///
QDragLeaveEvent* q_dragleaveevent_new() {
    return QDragLeaveEvent_new();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdragleaveevent.html#clone)
///
/// ``` QDragLeaveEvent* self ```
QDragLeaveEvent* q_dragleaveevent_clone(void* self) {
    return QDragLeaveEvent_Clone((QDragLeaveEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QDragLeaveEvent* self, QDragLeaveEvent* (*slot)() ```
void q_dragleaveevent_on_clone(void* self, QDragLeaveEvent* (*slot)()) {
    QDragLeaveEvent_OnClone((QDragLeaveEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDragLeaveEvent* self ```
QDragLeaveEvent* q_dragleaveevent_qbase_clone(void* self) {
    return QDragLeaveEvent_QBaseClone((QDragLeaveEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QDragLeaveEvent* self ```
int64_t q_dragleaveevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QDragLeaveEvent* self ```
bool q_dragleaveevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QDragLeaveEvent* self ```
bool q_dragleaveevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QDragLeaveEvent* self ```
void q_dragleaveevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QDragLeaveEvent* self ```
void q_dragleaveevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QDragLeaveEvent* self ```
bool q_dragleaveevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QDragLeaveEvent* self ```
bool q_dragleaveevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QDragLeaveEvent* self ```
bool q_dragleaveevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_dragleaveevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_dragleaveevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDragLeaveEvent* self, bool accepted ```
void q_dragleaveevent_set_accepted(void* self, bool accepted) {
    QDragLeaveEvent_SetAccepted((QDragLeaveEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDragLeaveEvent* self, bool accepted ```
void q_dragleaveevent_qbase_set_accepted(void* self, bool accepted) {
    QDragLeaveEvent_QBaseSetAccepted((QDragLeaveEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDragLeaveEvent* self, void (*slot)(QDragLeaveEvent*, bool) ```
void q_dragleaveevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QDragLeaveEvent_OnSetAccepted((QDragLeaveEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QDragLeaveEvent* self ```
void q_dragleaveevent_delete(void* self) {
    QDragLeaveEvent_Delete((QDragLeaveEvent*)(self));
}

/// https://doc.qt.io/qt-6/qhelpevent.html

/// q_helpevent_new constructs a new QHelpEvent object.
///
/// ``` enum QEvent__Type typeVal, QPoint* pos, QPoint* globalPos ```
QHelpEvent* q_helpevent_new(int64_t typeVal, void* pos, void* globalPos) {
    return QHelpEvent_new(typeVal, (QPoint*)pos, (QPoint*)globalPos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhelpevent.html#clone)
///
/// ``` QHelpEvent* self ```
QHelpEvent* q_helpevent_clone(void* self) {
    return QHelpEvent_Clone((QHelpEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QHelpEvent* self, QHelpEvent* (*slot)() ```
void q_helpevent_on_clone(void* self, QHelpEvent* (*slot)()) {
    QHelpEvent_OnClone((QHelpEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHelpEvent* self ```
QHelpEvent* q_helpevent_qbase_clone(void* self) {
    return QHelpEvent_QBaseClone((QHelpEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhelpevent.html#x)
///
/// ``` QHelpEvent* self ```
int32_t q_helpevent_x(void* self) {
    return QHelpEvent_X((QHelpEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhelpevent.html#y)
///
/// ``` QHelpEvent* self ```
int32_t q_helpevent_y(void* self) {
    return QHelpEvent_Y((QHelpEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhelpevent.html#globalX)
///
/// ``` QHelpEvent* self ```
int32_t q_helpevent_global_x(void* self) {
    return QHelpEvent_GlobalX((QHelpEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhelpevent.html#globalY)
///
/// ``` QHelpEvent* self ```
int32_t q_helpevent_global_y(void* self) {
    return QHelpEvent_GlobalY((QHelpEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhelpevent.html#pos)
///
/// ``` QHelpEvent* self ```
QPoint* q_helpevent_pos(void* self) {
    return QHelpEvent_Pos((QHelpEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhelpevent.html#globalPos)
///
/// ``` QHelpEvent* self ```
QPoint* q_helpevent_global_pos(void* self) {
    return QHelpEvent_GlobalPos((QHelpEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QHelpEvent* self ```
int64_t q_helpevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QHelpEvent* self ```
bool q_helpevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QHelpEvent* self ```
bool q_helpevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QHelpEvent* self ```
void q_helpevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QHelpEvent* self ```
void q_helpevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QHelpEvent* self ```
bool q_helpevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QHelpEvent* self ```
bool q_helpevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QHelpEvent* self ```
bool q_helpevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_helpevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_helpevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHelpEvent* self, bool accepted ```
void q_helpevent_set_accepted(void* self, bool accepted) {
    QHelpEvent_SetAccepted((QHelpEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHelpEvent* self, bool accepted ```
void q_helpevent_qbase_set_accepted(void* self, bool accepted) {
    QHelpEvent_QBaseSetAccepted((QHelpEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHelpEvent* self, void (*slot)(QHelpEvent*, bool) ```
void q_helpevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QHelpEvent_OnSetAccepted((QHelpEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QHelpEvent* self ```
void q_helpevent_delete(void* self) {
    QHelpEvent_Delete((QHelpEvent*)(self));
}

/// https://doc.qt.io/qt-6/qstatustipevent.html

/// q_statustipevent_new constructs a new QStatusTipEvent object.
///
/// ``` const char* tip ```
QStatusTipEvent* q_statustipevent_new(const char* tip) {
    return QStatusTipEvent_new(qstring(tip));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstatustipevent.html#clone)
///
/// ``` QStatusTipEvent* self ```
QStatusTipEvent* q_statustipevent_clone(void* self) {
    return QStatusTipEvent_Clone((QStatusTipEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QStatusTipEvent* self, QStatusTipEvent* (*slot)() ```
void q_statustipevent_on_clone(void* self, QStatusTipEvent* (*slot)()) {
    QStatusTipEvent_OnClone((QStatusTipEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStatusTipEvent* self ```
QStatusTipEvent* q_statustipevent_qbase_clone(void* self) {
    return QStatusTipEvent_QBaseClone((QStatusTipEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstatustipevent.html#tip)
///
/// ``` QStatusTipEvent* self ```
const char* q_statustipevent_tip(void* self) {
    libqt_string _str = QStatusTipEvent_Tip((QStatusTipEvent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QStatusTipEvent* self ```
int64_t q_statustipevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QStatusTipEvent* self ```
bool q_statustipevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QStatusTipEvent* self ```
bool q_statustipevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QStatusTipEvent* self ```
void q_statustipevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QStatusTipEvent* self ```
void q_statustipevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QStatusTipEvent* self ```
bool q_statustipevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QStatusTipEvent* self ```
bool q_statustipevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QStatusTipEvent* self ```
bool q_statustipevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_statustipevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_statustipevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusTipEvent* self, bool accepted ```
void q_statustipevent_set_accepted(void* self, bool accepted) {
    QStatusTipEvent_SetAccepted((QStatusTipEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusTipEvent* self, bool accepted ```
void q_statustipevent_qbase_set_accepted(void* self, bool accepted) {
    QStatusTipEvent_QBaseSetAccepted((QStatusTipEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusTipEvent* self, void (*slot)(QStatusTipEvent*, bool) ```
void q_statustipevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QStatusTipEvent_OnSetAccepted((QStatusTipEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QStatusTipEvent* self ```
void q_statustipevent_delete(void* self) {
    QStatusTipEvent_Delete((QStatusTipEvent*)(self));
}

/// https://doc.qt.io/qt-6/qwhatsthisclickedevent.html

/// q_whatsthisclickedevent_new constructs a new QWhatsThisClickedEvent object.
///
/// ``` const char* href ```
QWhatsThisClickedEvent* q_whatsthisclickedevent_new(const char* href) {
    return QWhatsThisClickedEvent_new(qstring(href));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthisclickedevent.html#clone)
///
/// ``` QWhatsThisClickedEvent* self ```
QWhatsThisClickedEvent* q_whatsthisclickedevent_clone(void* self) {
    return QWhatsThisClickedEvent_Clone((QWhatsThisClickedEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWhatsThisClickedEvent* self, QWhatsThisClickedEvent* (*slot)() ```
void q_whatsthisclickedevent_on_clone(void* self, QWhatsThisClickedEvent* (*slot)()) {
    QWhatsThisClickedEvent_OnClone((QWhatsThisClickedEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWhatsThisClickedEvent* self ```
QWhatsThisClickedEvent* q_whatsthisclickedevent_qbase_clone(void* self) {
    return QWhatsThisClickedEvent_QBaseClone((QWhatsThisClickedEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthisclickedevent.html#href)
///
/// ``` QWhatsThisClickedEvent* self ```
const char* q_whatsthisclickedevent_href(void* self) {
    libqt_string _str = QWhatsThisClickedEvent_Href((QWhatsThisClickedEvent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QWhatsThisClickedEvent* self ```
int64_t q_whatsthisclickedevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QWhatsThisClickedEvent* self ```
bool q_whatsthisclickedevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QWhatsThisClickedEvent* self ```
bool q_whatsthisclickedevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QWhatsThisClickedEvent* self ```
void q_whatsthisclickedevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QWhatsThisClickedEvent* self ```
void q_whatsthisclickedevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QWhatsThisClickedEvent* self ```
bool q_whatsthisclickedevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QWhatsThisClickedEvent* self ```
bool q_whatsthisclickedevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QWhatsThisClickedEvent* self ```
bool q_whatsthisclickedevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_whatsthisclickedevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_whatsthisclickedevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWhatsThisClickedEvent* self, bool accepted ```
void q_whatsthisclickedevent_set_accepted(void* self, bool accepted) {
    QWhatsThisClickedEvent_SetAccepted((QWhatsThisClickedEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWhatsThisClickedEvent* self, bool accepted ```
void q_whatsthisclickedevent_qbase_set_accepted(void* self, bool accepted) {
    QWhatsThisClickedEvent_QBaseSetAccepted((QWhatsThisClickedEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWhatsThisClickedEvent* self, void (*slot)(QWhatsThisClickedEvent*, bool) ```
void q_whatsthisclickedevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QWhatsThisClickedEvent_OnSetAccepted((QWhatsThisClickedEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QWhatsThisClickedEvent* self ```
void q_whatsthisclickedevent_delete(void* self) {
    QWhatsThisClickedEvent_Delete((QWhatsThisClickedEvent*)(self));
}

/// https://doc.qt.io/qt-6/qactionevent.html

/// q_actionevent_new constructs a new QActionEvent object.
///
/// ``` int typeVal, QAction* action ```
QActionEvent* q_actionevent_new(int typeVal, void* action) {
    return QActionEvent_new(typeVal, (QAction*)action);
}

/// q_actionevent_new2 constructs a new QActionEvent object.
///
/// ``` int typeVal, QAction* action, QAction* before ```
QActionEvent* q_actionevent_new2(int typeVal, void* action, void* before) {
    return QActionEvent_new2(typeVal, (QAction*)action, (QAction*)before);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qactionevent.html#clone)
///
/// ``` QActionEvent* self ```
QActionEvent* q_actionevent_clone(void* self) {
    return QActionEvent_Clone((QActionEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QActionEvent* self, QActionEvent* (*slot)() ```
void q_actionevent_on_clone(void* self, QActionEvent* (*slot)()) {
    QActionEvent_OnClone((QActionEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QActionEvent* self ```
QActionEvent* q_actionevent_qbase_clone(void* self) {
    return QActionEvent_QBaseClone((QActionEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qactionevent.html#action)
///
/// ``` QActionEvent* self ```
QAction* q_actionevent_action(void* self) {
    return QActionEvent_Action((QActionEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qactionevent.html#before)
///
/// ``` QActionEvent* self ```
QAction* q_actionevent_before(void* self) {
    return QActionEvent_Before((QActionEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QActionEvent* self ```
int64_t q_actionevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QActionEvent* self ```
bool q_actionevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QActionEvent* self ```
bool q_actionevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QActionEvent* self ```
void q_actionevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QActionEvent* self ```
void q_actionevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QActionEvent* self ```
bool q_actionevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QActionEvent* self ```
bool q_actionevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QActionEvent* self ```
bool q_actionevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_actionevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_actionevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QActionEvent* self, bool accepted ```
void q_actionevent_set_accepted(void* self, bool accepted) {
    QActionEvent_SetAccepted((QActionEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QActionEvent* self, bool accepted ```
void q_actionevent_qbase_set_accepted(void* self, bool accepted) {
    QActionEvent_QBaseSetAccepted((QActionEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QActionEvent* self, void (*slot)(QActionEvent*, bool) ```
void q_actionevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QActionEvent_OnSetAccepted((QActionEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QActionEvent* self ```
void q_actionevent_delete(void* self) {
    QActionEvent_Delete((QActionEvent*)(self));
}

/// https://doc.qt.io/qt-6/qfileopenevent.html

/// q_fileopenevent_new constructs a new QFileOpenEvent object.
///
/// ``` const char* file ```
QFileOpenEvent* q_fileopenevent_new(const char* file) {
    return QFileOpenEvent_new(qstring(file));
}

/// q_fileopenevent_new2 constructs a new QFileOpenEvent object.
///
/// ``` QUrl* url ```
QFileOpenEvent* q_fileopenevent_new2(void* url) {
    return QFileOpenEvent_new2((QUrl*)url);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileopenevent.html#clone)
///
/// ``` QFileOpenEvent* self ```
QFileOpenEvent* q_fileopenevent_clone(void* self) {
    return QFileOpenEvent_Clone((QFileOpenEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QFileOpenEvent* self, QFileOpenEvent* (*slot)() ```
void q_fileopenevent_on_clone(void* self, QFileOpenEvent* (*slot)()) {
    QFileOpenEvent_OnClone((QFileOpenEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFileOpenEvent* self ```
QFileOpenEvent* q_fileopenevent_qbase_clone(void* self) {
    return QFileOpenEvent_QBaseClone((QFileOpenEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileopenevent.html#file)
///
/// ``` QFileOpenEvent* self ```
const char* q_fileopenevent_file(void* self) {
    libqt_string _str = QFileOpenEvent_File((QFileOpenEvent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileopenevent.html#url)
///
/// ``` QFileOpenEvent* self ```
QUrl* q_fileopenevent_url(void* self) {
    return QFileOpenEvent_Url((QFileOpenEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileopenevent.html#openFile)
///
/// ``` QFileOpenEvent* self, QFile* file, int flags ```
bool q_fileopenevent_open_file(void* self, void* file, int64_t flags) {
    return QFileOpenEvent_OpenFile((QFileOpenEvent*)self, (QFile*)file, flags);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QFileOpenEvent* self ```
int64_t q_fileopenevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QFileOpenEvent* self ```
bool q_fileopenevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QFileOpenEvent* self ```
bool q_fileopenevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QFileOpenEvent* self ```
void q_fileopenevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QFileOpenEvent* self ```
void q_fileopenevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QFileOpenEvent* self ```
bool q_fileopenevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QFileOpenEvent* self ```
bool q_fileopenevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QFileOpenEvent* self ```
bool q_fileopenevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_fileopenevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_fileopenevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileOpenEvent* self, bool accepted ```
void q_fileopenevent_set_accepted(void* self, bool accepted) {
    QFileOpenEvent_SetAccepted((QFileOpenEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileOpenEvent* self, bool accepted ```
void q_fileopenevent_qbase_set_accepted(void* self, bool accepted) {
    QFileOpenEvent_QBaseSetAccepted((QFileOpenEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileOpenEvent* self, void (*slot)(QFileOpenEvent*, bool) ```
void q_fileopenevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QFileOpenEvent_OnSetAccepted((QFileOpenEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QFileOpenEvent* self ```
void q_fileopenevent_delete(void* self) {
    QFileOpenEvent_Delete((QFileOpenEvent*)(self));
}

/// https://doc.qt.io/qt-6/qtoolbarchangeevent.html

/// q_toolbarchangeevent_new constructs a new QToolBarChangeEvent object.
///
/// ``` bool t ```
QToolBarChangeEvent* q_toolbarchangeevent_new(bool t) {
    return QToolBarChangeEvent_new(t);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbarchangeevent.html#clone)
///
/// ``` QToolBarChangeEvent* self ```
QToolBarChangeEvent* q_toolbarchangeevent_clone(void* self) {
    return QToolBarChangeEvent_Clone((QToolBarChangeEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QToolBarChangeEvent* self, QToolBarChangeEvent* (*slot)() ```
void q_toolbarchangeevent_on_clone(void* self, QToolBarChangeEvent* (*slot)()) {
    QToolBarChangeEvent_OnClone((QToolBarChangeEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QToolBarChangeEvent* self ```
QToolBarChangeEvent* q_toolbarchangeevent_qbase_clone(void* self) {
    return QToolBarChangeEvent_QBaseClone((QToolBarChangeEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtoolbarchangeevent.html#toggle)
///
/// ``` QToolBarChangeEvent* self ```
bool q_toolbarchangeevent_toggle(void* self) {
    return QToolBarChangeEvent_Toggle((QToolBarChangeEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QToolBarChangeEvent* self ```
int64_t q_toolbarchangeevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QToolBarChangeEvent* self ```
bool q_toolbarchangeevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QToolBarChangeEvent* self ```
bool q_toolbarchangeevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QToolBarChangeEvent* self ```
void q_toolbarchangeevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QToolBarChangeEvent* self ```
void q_toolbarchangeevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QToolBarChangeEvent* self ```
bool q_toolbarchangeevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QToolBarChangeEvent* self ```
bool q_toolbarchangeevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QToolBarChangeEvent* self ```
bool q_toolbarchangeevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_toolbarchangeevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_toolbarchangeevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QToolBarChangeEvent* self, bool accepted ```
void q_toolbarchangeevent_set_accepted(void* self, bool accepted) {
    QToolBarChangeEvent_SetAccepted((QToolBarChangeEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QToolBarChangeEvent* self, bool accepted ```
void q_toolbarchangeevent_qbase_set_accepted(void* self, bool accepted) {
    QToolBarChangeEvent_QBaseSetAccepted((QToolBarChangeEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QToolBarChangeEvent* self, void (*slot)(QToolBarChangeEvent*, bool) ```
void q_toolbarchangeevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QToolBarChangeEvent_OnSetAccepted((QToolBarChangeEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QToolBarChangeEvent* self ```
void q_toolbarchangeevent_delete(void* self) {
    QToolBarChangeEvent_Delete((QToolBarChangeEvent*)(self));
}

/// https://doc.qt.io/qt-6/qshortcutevent.html

/// q_shortcutevent_new constructs a new QShortcutEvent object.
///
/// ``` QKeySequence* key, int id ```
QShortcutEvent* q_shortcutevent_new(void* key, int id) {
    return QShortcutEvent_new((QKeySequence*)key, id);
}

/// q_shortcutevent_new2 constructs a new QShortcutEvent object.
///
/// ``` QKeySequence* key, int id, bool ambiguous ```
QShortcutEvent* q_shortcutevent_new2(void* key, int id, bool ambiguous) {
    return QShortcutEvent_new2((QKeySequence*)key, id, ambiguous);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qshortcutevent.html#clone)
///
/// ``` QShortcutEvent* self ```
QShortcutEvent* q_shortcutevent_clone(void* self) {
    return QShortcutEvent_Clone((QShortcutEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QShortcutEvent* self, QShortcutEvent* (*slot)() ```
void q_shortcutevent_on_clone(void* self, QShortcutEvent* (*slot)()) {
    QShortcutEvent_OnClone((QShortcutEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QShortcutEvent* self ```
QShortcutEvent* q_shortcutevent_qbase_clone(void* self) {
    return QShortcutEvent_QBaseClone((QShortcutEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qshortcutevent.html#key)
///
/// ``` QShortcutEvent* self ```
QKeySequence* q_shortcutevent_key(void* self) {
    return QShortcutEvent_Key((QShortcutEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qshortcutevent.html#shortcutId)
///
/// ``` QShortcutEvent* self ```
int32_t q_shortcutevent_shortcut_id(void* self) {
    return QShortcutEvent_ShortcutId((QShortcutEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qshortcutevent.html#isAmbiguous)
///
/// ``` QShortcutEvent* self ```
bool q_shortcutevent_is_ambiguous(void* self) {
    return QShortcutEvent_IsAmbiguous((QShortcutEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QShortcutEvent* self ```
int64_t q_shortcutevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QShortcutEvent* self ```
bool q_shortcutevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QShortcutEvent* self ```
bool q_shortcutevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QShortcutEvent* self ```
void q_shortcutevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QShortcutEvent* self ```
void q_shortcutevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QShortcutEvent* self ```
bool q_shortcutevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QShortcutEvent* self ```
bool q_shortcutevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QShortcutEvent* self ```
bool q_shortcutevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_shortcutevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_shortcutevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QShortcutEvent* self, bool accepted ```
void q_shortcutevent_set_accepted(void* self, bool accepted) {
    QShortcutEvent_SetAccepted((QShortcutEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QShortcutEvent* self, bool accepted ```
void q_shortcutevent_qbase_set_accepted(void* self, bool accepted) {
    QShortcutEvent_QBaseSetAccepted((QShortcutEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QShortcutEvent* self, void (*slot)(QShortcutEvent*, bool) ```
void q_shortcutevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QShortcutEvent_OnSetAccepted((QShortcutEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QShortcutEvent* self ```
void q_shortcutevent_delete(void* self) {
    QShortcutEvent_Delete((QShortcutEvent*)(self));
}

/// https://doc.qt.io/qt-6/qwindowstatechangeevent.html

/// q_windowstatechangeevent_new constructs a new QWindowStateChangeEvent object.
///
/// ``` int oldState ```
QWindowStateChangeEvent* q_windowstatechangeevent_new(int64_t oldState) {
    return QWindowStateChangeEvent_new(oldState);
}

/// q_windowstatechangeevent_new2 constructs a new QWindowStateChangeEvent object.
///
/// ``` int oldState, bool isOverride ```
QWindowStateChangeEvent* q_windowstatechangeevent_new2(int64_t oldState, bool isOverride) {
    return QWindowStateChangeEvent_new2(oldState, isOverride);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#clone)
///
/// ``` QWindowStateChangeEvent* self ```
QWindowStateChangeEvent* q_windowstatechangeevent_clone(void* self) {
    return QWindowStateChangeEvent_Clone((QWindowStateChangeEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWindowStateChangeEvent* self, QWindowStateChangeEvent* (*slot)() ```
void q_windowstatechangeevent_on_clone(void* self, QWindowStateChangeEvent* (*slot)()) {
    QWindowStateChangeEvent_OnClone((QWindowStateChangeEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWindowStateChangeEvent* self ```
QWindowStateChangeEvent* q_windowstatechangeevent_qbase_clone(void* self) {
    return QWindowStateChangeEvent_QBaseClone((QWindowStateChangeEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#oldState)
///
/// ``` QWindowStateChangeEvent* self ```
int64_t q_windowstatechangeevent_old_state(void* self) {
    return QWindowStateChangeEvent_OldState((QWindowStateChangeEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#isOverride)
///
/// ``` QWindowStateChangeEvent* self ```
bool q_windowstatechangeevent_is_override(void* self) {
    return QWindowStateChangeEvent_IsOverride((QWindowStateChangeEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QWindowStateChangeEvent* self ```
int64_t q_windowstatechangeevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QWindowStateChangeEvent* self ```
bool q_windowstatechangeevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QWindowStateChangeEvent* self ```
bool q_windowstatechangeevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QWindowStateChangeEvent* self ```
void q_windowstatechangeevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QWindowStateChangeEvent* self ```
void q_windowstatechangeevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QWindowStateChangeEvent* self ```
bool q_windowstatechangeevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QWindowStateChangeEvent* self ```
bool q_windowstatechangeevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QWindowStateChangeEvent* self ```
bool q_windowstatechangeevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_windowstatechangeevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_windowstatechangeevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWindowStateChangeEvent* self, bool accepted ```
void q_windowstatechangeevent_set_accepted(void* self, bool accepted) {
    QWindowStateChangeEvent_SetAccepted((QWindowStateChangeEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWindowStateChangeEvent* self, bool accepted ```
void q_windowstatechangeevent_qbase_set_accepted(void* self, bool accepted) {
    QWindowStateChangeEvent_QBaseSetAccepted((QWindowStateChangeEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWindowStateChangeEvent* self, void (*slot)(QWindowStateChangeEvent*, bool) ```
void q_windowstatechangeevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QWindowStateChangeEvent_OnSetAccepted((QWindowStateChangeEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QWindowStateChangeEvent* self ```
void q_windowstatechangeevent_delete(void* self) {
    QWindowStateChangeEvent_Delete((QWindowStateChangeEvent*)(self));
}

/// https://doc.qt.io/qt-6/qtouchevent.html

/// q_touchevent_new constructs a new QTouchEvent object.
///
/// ``` enum QEvent__Type eventType ```
QTouchEvent* q_touchevent_new(int64_t eventType) {
    return QTouchEvent_new(eventType);
}

/// q_touchevent_new2 constructs a new QTouchEvent object.
///
/// ``` enum QEvent__Type eventType, QPointingDevice* device, int modifiers, uint8_t touchPointStates ```
QTouchEvent* q_touchevent_new2(int64_t eventType, void* device, int64_t modifiers, int64_t touchPointStates) {
    return QTouchEvent_new2(eventType, (QPointingDevice*)device, modifiers, touchPointStates);
}

/// q_touchevent_new3 constructs a new QTouchEvent object.
///
/// ``` enum QEvent__Type eventType, QPointingDevice* device ```
QTouchEvent* q_touchevent_new3(int64_t eventType, void* device) {
    return QTouchEvent_new3(eventType, (QPointingDevice*)device);
}

/// q_touchevent_new4 constructs a new QTouchEvent object.
///
/// ``` enum QEvent__Type eventType, QPointingDevice* device, int modifiers ```
QTouchEvent* q_touchevent_new4(int64_t eventType, void* device, int64_t modifiers) {
    return QTouchEvent_new4(eventType, (QPointingDevice*)device, modifiers);
}

/// q_touchevent_new5 constructs a new QTouchEvent object.
///
/// ``` enum QEvent__Type eventType, QPointingDevice* device, int modifiers, QEventPoint* touchPoints[] ```
QTouchEvent* q_touchevent_new5(int64_t eventType, void* device, int64_t modifiers, void* touchPoints[]) {
    QEventPoint** touchPoints_arr = (QEventPoint**)touchPoints;
    size_t touchPoints_len = 0;
    while (touchPoints_arr[touchPoints_len] != NULL) {
        touchPoints_len++;
    }
    libqt_list touchPoints_list = {
        .len = touchPoints_len,
        .data = {(QEventPoint*)touchPoints},
    };

    return QTouchEvent_new5(eventType, (QPointingDevice*)device, modifiers, touchPoints_list);
}

/// q_touchevent_new6 constructs a new QTouchEvent object.
///
/// ``` enum QEvent__Type eventType, QPointingDevice* device, int modifiers, uint8_t touchPointStates, QEventPoint* touchPoints[] ```
QTouchEvent* q_touchevent_new6(int64_t eventType, void* device, int64_t modifiers, int64_t touchPointStates, void* touchPoints[]) {
    QEventPoint** touchPoints_arr = (QEventPoint**)touchPoints;
    size_t touchPoints_len = 0;
    while (touchPoints_arr[touchPoints_len] != NULL) {
        touchPoints_len++;
    }
    libqt_list touchPoints_list = {
        .len = touchPoints_len,
        .data = {(QEventPoint*)touchPoints},
    };

    return QTouchEvent_new6(eventType, (QPointingDevice*)device, modifiers, touchPointStates, touchPoints_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtouchevent.html#clone)
///
/// ``` QTouchEvent* self ```
QTouchEvent* q_touchevent_clone(void* self) {
    return QTouchEvent_Clone((QTouchEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTouchEvent* self, QTouchEvent* (*slot)() ```
void q_touchevent_on_clone(void* self, QTouchEvent* (*slot)()) {
    QTouchEvent_OnClone((QTouchEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTouchEvent* self ```
QTouchEvent* q_touchevent_qbase_clone(void* self) {
    return QTouchEvent_QBaseClone((QTouchEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtouchevent.html#target)
///
/// ``` QTouchEvent* self ```
QObject* q_touchevent_target(void* self) {
    return QTouchEvent_Target((QTouchEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtouchevent.html#touchPointStates)
///
/// ``` QTouchEvent* self ```
int64_t q_touchevent_touch_point_states(void* self) {
    return QTouchEvent_TouchPointStates((QTouchEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtouchevent.html#touchPoints)
///
/// ``` QTouchEvent* self ```
libqt_list /* of QEventPoint* */ q_touchevent_touch_points(void* self) {
    libqt_list _arr = QTouchEvent_TouchPoints((QTouchEvent*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtouchevent.html#isBeginEvent)
///
/// ``` QTouchEvent* self ```
bool q_touchevent_is_begin_event(void* self) {
    return QTouchEvent_IsBeginEvent((QTouchEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTouchEvent* self, bool (*slot)() ```
void q_touchevent_on_is_begin_event(void* self, bool (*slot)()) {
    QTouchEvent_OnIsBeginEvent((QTouchEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTouchEvent* self ```
bool q_touchevent_qbase_is_begin_event(void* self) {
    return QTouchEvent_QBaseIsBeginEvent((QTouchEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtouchevent.html#isUpdateEvent)
///
/// ``` QTouchEvent* self ```
bool q_touchevent_is_update_event(void* self) {
    return QTouchEvent_IsUpdateEvent((QTouchEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTouchEvent* self, bool (*slot)() ```
void q_touchevent_on_is_update_event(void* self, bool (*slot)()) {
    QTouchEvent_OnIsUpdateEvent((QTouchEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTouchEvent* self ```
bool q_touchevent_qbase_is_update_event(void* self) {
    return QTouchEvent_QBaseIsUpdateEvent((QTouchEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtouchevent.html#isEndEvent)
///
/// ``` QTouchEvent* self ```
bool q_touchevent_is_end_event(void* self) {
    return QTouchEvent_IsEndEvent((QTouchEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTouchEvent* self, bool (*slot)() ```
void q_touchevent_on_is_end_event(void* self, bool (*slot)()) {
    QTouchEvent_OnIsEndEvent((QTouchEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTouchEvent* self ```
bool q_touchevent_qbase_is_end_event(void* self) {
    return QTouchEvent_QBaseIsEndEvent((QTouchEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
///
/// ``` QTouchEvent* self ```
QPointingDevice* q_touchevent_pointing_device(void* self) {
    return QPointerEvent_PointingDevice((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
///
/// ``` QTouchEvent* self ```
int64_t q_touchevent_pointer_type(void* self) {
    return QPointerEvent_PointerType((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
///
/// ``` QTouchEvent* self ```
int64_t q_touchevent_point_count(void* self) {
    return QPointerEvent_PointCount((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#point)
///
/// ``` QTouchEvent* self, int64_t i ```
QEventPoint* q_touchevent_point(void* self, int64_t i) {
    return QPointerEvent_Point((QPointerEvent*)self, i);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#points)
///
/// ``` QTouchEvent* self ```
libqt_list /* of QEventPoint* */ q_touchevent_points(void* self) {
    libqt_list _arr = QPointerEvent_Points((QPointerEvent*)self);
    return _arr;
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
///
/// ``` QTouchEvent* self, int id ```
QEventPoint* q_touchevent_point_by_id(void* self, int id) {
    return QPointerEvent_PointById((QPointerEvent*)self, id);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
///
/// ``` QTouchEvent* self ```
bool q_touchevent_all_points_grabbed(void* self) {
    return QPointerEvent_AllPointsGrabbed((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
///
/// ``` QTouchEvent* self ```
bool q_touchevent_all_points_accepted(void* self) {
    return QPointerEvent_AllPointsAccepted((QPointerEvent*)self);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
///
/// ``` QTouchEvent* self, QEventPoint* point ```
QObject* q_touchevent_exclusive_grabber(void* self, void* point) {
    return QPointerEvent_ExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
///
/// ``` QTouchEvent* self, QEventPoint* point, QObject* exclusiveGrabber ```
void q_touchevent_set_exclusive_grabber(void* self, void* point, void* exclusiveGrabber) {
    QPointerEvent_SetExclusiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)exclusiveGrabber);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
///
/// ``` QTouchEvent* self, QEventPoint* point ```
void q_touchevent_clear_passive_grabbers(void* self, void* point) {
    QPointerEvent_ClearPassiveGrabbers((QPointerEvent*)self, (QEventPoint*)point);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
///
/// ``` QTouchEvent* self, QEventPoint* point, QObject* grabber ```
bool q_touchevent_add_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_AddPassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
///
/// ``` QTouchEvent* self, QEventPoint* point, QObject* grabber ```
bool q_touchevent_remove_passive_grabber(void* self, void* point, void* grabber) {
    return QPointerEvent_RemovePassiveGrabber((QPointerEvent*)self, (QEventPoint*)point, (QObject*)grabber);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// ``` QTouchEvent* self ```
QInputDevice* q_touchevent_device(void* self) {
    return QInputEvent_Device((QInputEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// ``` QTouchEvent* self ```
int64_t q_touchevent_device_type(void* self) {
    return QInputEvent_DeviceType((QInputEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
///
/// ``` QTouchEvent* self ```
int64_t q_touchevent_modifiers(void* self) {
    return QInputEvent_Modifiers((QInputEvent*)self);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// ``` QTouchEvent* self, int modifiers ```
void q_touchevent_set_modifiers(void* self, int64_t modifiers) {
    QInputEvent_SetModifiers((QInputEvent*)self, modifiers);
}

/// Inherited from QInputEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// ``` QTouchEvent* self ```
uint64_t q_touchevent_timestamp(void* self) {
    return QInputEvent_Timestamp((QInputEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QTouchEvent* self ```
int64_t q_touchevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QTouchEvent* self ```
bool q_touchevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QTouchEvent* self ```
bool q_touchevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QTouchEvent* self ```
void q_touchevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QTouchEvent* self ```
void q_touchevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QTouchEvent* self ```
bool q_touchevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QTouchEvent* self ```
bool q_touchevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QTouchEvent* self ```
bool q_touchevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_touchevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_touchevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTouchEvent* self, uint64_t timestamp ```
void q_touchevent_set_timestamp(void* self, uint64_t timestamp) {
    QTouchEvent_SetTimestamp((QTouchEvent*)self, timestamp);
}

/// Inherited from QPointerEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTouchEvent* self, uint64_t timestamp ```
void q_touchevent_qbase_set_timestamp(void* self, uint64_t timestamp) {
    QTouchEvent_QBaseSetTimestamp((QTouchEvent*)self, timestamp);
}

/// Inherited from QPointerEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTouchEvent* self, void (*slot)(QTouchEvent*, uint64_t) ```
void q_touchevent_on_set_timestamp(void* self, void (*slot)(void*, uint64_t)) {
    QTouchEvent_OnSetTimestamp((QTouchEvent*)self, (intptr_t)slot);
}

/// Inherited from QPointerEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTouchEvent* self, bool accepted ```
void q_touchevent_set_accepted(void* self, bool accepted) {
    QTouchEvent_SetAccepted((QTouchEvent*)self, accepted);
}

/// Inherited from QPointerEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTouchEvent* self, bool accepted ```
void q_touchevent_qbase_set_accepted(void* self, bool accepted) {
    QTouchEvent_QBaseSetAccepted((QTouchEvent*)self, accepted);
}

/// Inherited from QPointerEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTouchEvent* self, void (*slot)(QTouchEvent*, bool) ```
void q_touchevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QTouchEvent_OnSetAccepted((QTouchEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QTouchEvent* self ```
void q_touchevent_delete(void* self) {
    QTouchEvent_Delete((QTouchEvent*)(self));
}

/// https://doc.qt.io/qt-6/qscrollprepareevent.html

/// q_scrollprepareevent_new constructs a new QScrollPrepareEvent object.
///
/// ``` QPointF* startPos ```
QScrollPrepareEvent* q_scrollprepareevent_new(void* startPos) {
    return QScrollPrepareEvent_new((QPointF*)startPos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollprepareevent.html#clone)
///
/// ``` QScrollPrepareEvent* self ```
QScrollPrepareEvent* q_scrollprepareevent_clone(void* self) {
    return QScrollPrepareEvent_Clone((QScrollPrepareEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QScrollPrepareEvent* self, QScrollPrepareEvent* (*slot)() ```
void q_scrollprepareevent_on_clone(void* self, QScrollPrepareEvent* (*slot)()) {
    QScrollPrepareEvent_OnClone((QScrollPrepareEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QScrollPrepareEvent* self ```
QScrollPrepareEvent* q_scrollprepareevent_qbase_clone(void* self) {
    return QScrollPrepareEvent_QBaseClone((QScrollPrepareEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollprepareevent.html#startPos)
///
/// ``` QScrollPrepareEvent* self ```
QPointF* q_scrollprepareevent_start_pos(void* self) {
    return QScrollPrepareEvent_StartPos((QScrollPrepareEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollprepareevent.html#viewportSize)
///
/// ``` QScrollPrepareEvent* self ```
QSizeF* q_scrollprepareevent_viewport_size(void* self) {
    return QScrollPrepareEvent_ViewportSize((QScrollPrepareEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollprepareevent.html#contentPosRange)
///
/// ``` QScrollPrepareEvent* self ```
QRectF* q_scrollprepareevent_content_pos_range(void* self) {
    return QScrollPrepareEvent_ContentPosRange((QScrollPrepareEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollprepareevent.html#contentPos)
///
/// ``` QScrollPrepareEvent* self ```
QPointF* q_scrollprepareevent_content_pos(void* self) {
    return QScrollPrepareEvent_ContentPos((QScrollPrepareEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollprepareevent.html#setViewportSize)
///
/// ``` QScrollPrepareEvent* self, QSizeF* size ```
void q_scrollprepareevent_set_viewport_size(void* self, void* size) {
    QScrollPrepareEvent_SetViewportSize((QScrollPrepareEvent*)self, (QSizeF*)size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollprepareevent.html#setContentPosRange)
///
/// ``` QScrollPrepareEvent* self, QRectF* rect ```
void q_scrollprepareevent_set_content_pos_range(void* self, void* rect) {
    QScrollPrepareEvent_SetContentPosRange((QScrollPrepareEvent*)self, (QRectF*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollprepareevent.html#setContentPos)
///
/// ``` QScrollPrepareEvent* self, QPointF* pos ```
void q_scrollprepareevent_set_content_pos(void* self, void* pos) {
    QScrollPrepareEvent_SetContentPos((QScrollPrepareEvent*)self, (QPointF*)pos);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QScrollPrepareEvent* self ```
int64_t q_scrollprepareevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QScrollPrepareEvent* self ```
bool q_scrollprepareevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QScrollPrepareEvent* self ```
bool q_scrollprepareevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QScrollPrepareEvent* self ```
void q_scrollprepareevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QScrollPrepareEvent* self ```
void q_scrollprepareevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QScrollPrepareEvent* self ```
bool q_scrollprepareevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QScrollPrepareEvent* self ```
bool q_scrollprepareevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QScrollPrepareEvent* self ```
bool q_scrollprepareevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_scrollprepareevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_scrollprepareevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollPrepareEvent* self, bool accepted ```
void q_scrollprepareevent_set_accepted(void* self, bool accepted) {
    QScrollPrepareEvent_SetAccepted((QScrollPrepareEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollPrepareEvent* self, bool accepted ```
void q_scrollprepareevent_qbase_set_accepted(void* self, bool accepted) {
    QScrollPrepareEvent_QBaseSetAccepted((QScrollPrepareEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollPrepareEvent* self, void (*slot)(QScrollPrepareEvent*, bool) ```
void q_scrollprepareevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QScrollPrepareEvent_OnSetAccepted((QScrollPrepareEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QScrollPrepareEvent* self ```
void q_scrollprepareevent_delete(void* self) {
    QScrollPrepareEvent_Delete((QScrollPrepareEvent*)(self));
}

/// https://doc.qt.io/qt-6/qscrollevent.html

/// q_scrollevent_new constructs a new QScrollEvent object.
///
/// ``` QPointF* contentPos, QPointF* overshoot, enum QScrollEvent__ScrollState scrollState ```
QScrollEvent* q_scrollevent_new(void* contentPos, void* overshoot, int64_t scrollState) {
    return QScrollEvent_new((QPointF*)contentPos, (QPointF*)overshoot, scrollState);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollevent.html#clone)
///
/// ``` QScrollEvent* self ```
QScrollEvent* q_scrollevent_clone(void* self) {
    return QScrollEvent_Clone((QScrollEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QScrollEvent* self, QScrollEvent* (*slot)() ```
void q_scrollevent_on_clone(void* self, QScrollEvent* (*slot)()) {
    QScrollEvent_OnClone((QScrollEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QScrollEvent* self ```
QScrollEvent* q_scrollevent_qbase_clone(void* self) {
    return QScrollEvent_QBaseClone((QScrollEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollevent.html#contentPos)
///
/// ``` QScrollEvent* self ```
QPointF* q_scrollevent_content_pos(void* self) {
    return QScrollEvent_ContentPos((QScrollEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollevent.html#overshootDistance)
///
/// ``` QScrollEvent* self ```
QPointF* q_scrollevent_overshoot_distance(void* self) {
    return QScrollEvent_OvershootDistance((QScrollEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollevent.html#scrollState)
///
/// ``` QScrollEvent* self ```
int64_t q_scrollevent_scroll_state(void* self) {
    return QScrollEvent_ScrollState((QScrollEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QScrollEvent* self ```
int64_t q_scrollevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QScrollEvent* self ```
bool q_scrollevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QScrollEvent* self ```
bool q_scrollevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QScrollEvent* self ```
void q_scrollevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QScrollEvent* self ```
void q_scrollevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QScrollEvent* self ```
bool q_scrollevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QScrollEvent* self ```
bool q_scrollevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QScrollEvent* self ```
bool q_scrollevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_scrollevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_scrollevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollEvent* self, bool accepted ```
void q_scrollevent_set_accepted(void* self, bool accepted) {
    QScrollEvent_SetAccepted((QScrollEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollEvent* self, bool accepted ```
void q_scrollevent_qbase_set_accepted(void* self, bool accepted) {
    QScrollEvent_QBaseSetAccepted((QScrollEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollEvent* self, void (*slot)(QScrollEvent*, bool) ```
void q_scrollevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QScrollEvent_OnSetAccepted((QScrollEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QScrollEvent* self ```
void q_scrollevent_delete(void* self) {
    QScrollEvent_Delete((QScrollEvent*)(self));
}

/// https://doc.qt.io/qt-6/qscreenorientationchangeevent.html

/// q_screenorientationchangeevent_new constructs a new QScreenOrientationChangeEvent object.
///
/// ``` QScreen* screen, enum Qt__ScreenOrientation orientation ```
QScreenOrientationChangeEvent* q_screenorientationchangeevent_new(void* screen, int64_t orientation) {
    return QScreenOrientationChangeEvent_new((QScreen*)screen, orientation);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#clone)
///
/// ``` QScreenOrientationChangeEvent* self ```
QScreenOrientationChangeEvent* q_screenorientationchangeevent_clone(void* self) {
    return QScreenOrientationChangeEvent_Clone((QScreenOrientationChangeEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QScreenOrientationChangeEvent* self, QScreenOrientationChangeEvent* (*slot)() ```
void q_screenorientationchangeevent_on_clone(void* self, QScreenOrientationChangeEvent* (*slot)()) {
    QScreenOrientationChangeEvent_OnClone((QScreenOrientationChangeEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QScreenOrientationChangeEvent* self ```
QScreenOrientationChangeEvent* q_screenorientationchangeevent_qbase_clone(void* self) {
    return QScreenOrientationChangeEvent_QBaseClone((QScreenOrientationChangeEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#screen)
///
/// ``` QScreenOrientationChangeEvent* self ```
QScreen* q_screenorientationchangeevent_screen(void* self) {
    return QScreenOrientationChangeEvent_Screen((QScreenOrientationChangeEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#orientation)
///
/// ``` QScreenOrientationChangeEvent* self ```
int64_t q_screenorientationchangeevent_orientation(void* self) {
    return QScreenOrientationChangeEvent_Orientation((QScreenOrientationChangeEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QScreenOrientationChangeEvent* self ```
int64_t q_screenorientationchangeevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QScreenOrientationChangeEvent* self ```
bool q_screenorientationchangeevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QScreenOrientationChangeEvent* self ```
bool q_screenorientationchangeevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QScreenOrientationChangeEvent* self ```
void q_screenorientationchangeevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QScreenOrientationChangeEvent* self ```
void q_screenorientationchangeevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QScreenOrientationChangeEvent* self ```
bool q_screenorientationchangeevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QScreenOrientationChangeEvent* self ```
bool q_screenorientationchangeevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QScreenOrientationChangeEvent* self ```
bool q_screenorientationchangeevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_screenorientationchangeevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_screenorientationchangeevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScreenOrientationChangeEvent* self, bool accepted ```
void q_screenorientationchangeevent_set_accepted(void* self, bool accepted) {
    QScreenOrientationChangeEvent_SetAccepted((QScreenOrientationChangeEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScreenOrientationChangeEvent* self, bool accepted ```
void q_screenorientationchangeevent_qbase_set_accepted(void* self, bool accepted) {
    QScreenOrientationChangeEvent_QBaseSetAccepted((QScreenOrientationChangeEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScreenOrientationChangeEvent* self, void (*slot)(QScreenOrientationChangeEvent*, bool) ```
void q_screenorientationchangeevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QScreenOrientationChangeEvent_OnSetAccepted((QScreenOrientationChangeEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QScreenOrientationChangeEvent* self ```
void q_screenorientationchangeevent_delete(void* self) {
    QScreenOrientationChangeEvent_Delete((QScreenOrientationChangeEvent*)(self));
}

/// https://doc.qt.io/qt-6/qapplicationstatechangeevent.html

/// q_applicationstatechangeevent_new constructs a new QApplicationStateChangeEvent object.
///
/// ``` enum Qt__ApplicationState state ```
QApplicationStateChangeEvent* q_applicationstatechangeevent_new(int64_t state) {
    return QApplicationStateChangeEvent_new(state);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplicationstatechangeevent.html#clone)
///
/// ``` QApplicationStateChangeEvent* self ```
QApplicationStateChangeEvent* q_applicationstatechangeevent_clone(void* self) {
    return QApplicationStateChangeEvent_Clone((QApplicationStateChangeEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QApplicationStateChangeEvent* self, QApplicationStateChangeEvent* (*slot)() ```
void q_applicationstatechangeevent_on_clone(void* self, QApplicationStateChangeEvent* (*slot)()) {
    QApplicationStateChangeEvent_OnClone((QApplicationStateChangeEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QApplicationStateChangeEvent* self ```
QApplicationStateChangeEvent* q_applicationstatechangeevent_qbase_clone(void* self) {
    return QApplicationStateChangeEvent_QBaseClone((QApplicationStateChangeEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qapplicationstatechangeevent.html#applicationState)
///
/// ``` QApplicationStateChangeEvent* self ```
int64_t q_applicationstatechangeevent_application_state(void* self) {
    return QApplicationStateChangeEvent_ApplicationState((QApplicationStateChangeEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QApplicationStateChangeEvent* self ```
int64_t q_applicationstatechangeevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QApplicationStateChangeEvent* self ```
bool q_applicationstatechangeevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QApplicationStateChangeEvent* self ```
bool q_applicationstatechangeevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QApplicationStateChangeEvent* self ```
void q_applicationstatechangeevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QApplicationStateChangeEvent* self ```
void q_applicationstatechangeevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QApplicationStateChangeEvent* self ```
bool q_applicationstatechangeevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QApplicationStateChangeEvent* self ```
bool q_applicationstatechangeevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QApplicationStateChangeEvent* self ```
bool q_applicationstatechangeevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_applicationstatechangeevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_applicationstatechangeevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QApplicationStateChangeEvent* self, bool accepted ```
void q_applicationstatechangeevent_set_accepted(void* self, bool accepted) {
    QApplicationStateChangeEvent_SetAccepted((QApplicationStateChangeEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QApplicationStateChangeEvent* self, bool accepted ```
void q_applicationstatechangeevent_qbase_set_accepted(void* self, bool accepted) {
    QApplicationStateChangeEvent_QBaseSetAccepted((QApplicationStateChangeEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QApplicationStateChangeEvent* self, void (*slot)(QApplicationStateChangeEvent*, bool) ```
void q_applicationstatechangeevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QApplicationStateChangeEvent_OnSetAccepted((QApplicationStateChangeEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QApplicationStateChangeEvent* self ```
void q_applicationstatechangeevent_delete(void* self) {
    QApplicationStateChangeEvent_Delete((QApplicationStateChangeEvent*)(self));
}

/// https://doc.qt.io/qt-6/qinputmethodevent-attribute.html

/// q_inputmethodevent__attribute_new constructs a new QInputMethodEvent::Attribute object.
///
/// ``` enum QInputMethodEvent__AttributeType typ, int s, int l, QVariant* val ```
QInputMethodEvent__Attribute* q_inputmethodevent__attribute_new(int64_t typ, int s, int l, void* val) {
    return QInputMethodEvent__Attribute_new(typ, s, l, (QVariant*)val);
}

/// q_inputmethodevent__attribute_new2 constructs a new QInputMethodEvent::Attribute object.
///
/// ``` enum QInputMethodEvent__AttributeType typ, int s, int l ```
QInputMethodEvent__Attribute* q_inputmethodevent__attribute_new2(int64_t typ, int s, int l) {
    return QInputMethodEvent__Attribute_new2(typ, s, l);
}

/// q_inputmethodevent__attribute_new3 constructs a new QInputMethodEvent::Attribute object.
///
/// ``` QInputMethodEvent__Attribute* param1 ```
QInputMethodEvent__Attribute* q_inputmethodevent__attribute_new3(void* param1) {
    return QInputMethodEvent__Attribute_new3((QInputMethodEvent__Attribute*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputmethodevent__attribute.html#operator=)
///
/// ``` QInputMethodEvent__Attribute* self, QInputMethodEvent__Attribute* param1 ```
void q_inputmethodevent__attribute_operator_assign(void* self, void* param1) {
    QInputMethodEvent__Attribute_OperatorAssign((QInputMethodEvent__Attribute*)self, (QInputMethodEvent__Attribute*)param1);
}

/// Delete this object from C++ memory.
///
/// ``` QInputMethodEvent__Attribute* self ```
void q_inputmethodevent__attribute_delete(void* self) {
    QInputMethodEvent__Attribute_Delete((QInputMethodEvent__Attribute*)(self));
}