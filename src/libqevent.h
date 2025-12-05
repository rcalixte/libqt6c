#pragma once
#ifndef SRC_QT6C_LIBQEVENT_H
#define SRC_QT6C_LIBQEVENT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html)

/// q_inputevent_new constructs a new QInputEvent object.
///
/// @param type enum QEvent__Type
/// @param m_dev QInputDevice*
///
QInputEvent* q_inputevent_new(int32_t type, void* m_dev);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html)

/// q_inputevent_new2 constructs a new QInputEvent object.
///
/// @param type enum QEvent__Type
/// @param m_dev QInputDevice*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
QInputEvent* q_inputevent_new2(int32_t type, void* m_dev, int64_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#clone)
///
/// @param self QInputEvent*
///
QInputEvent* q_inputevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QInputEvent*
/// @param callback QInputEvent* func()
///
void q_inputevent_on_clone(void* self, QInputEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#clone)
///
/// Base class method implementation
///
/// @param self QInputEvent*
///
QInputEvent* q_inputevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// @param self QInputEvent*
///
const QInputDevice* q_inputevent_device(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// @param self QInputEvent*
///
/// @return enum QInputDevice__DeviceType
///
int32_t q_inputevent_device_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
///
/// @param self QInputEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int64_t q_inputevent_modifiers(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// @param self QInputEvent*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
void q_inputevent_set_modifiers(void* self, int64_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// @param self QInputEvent*
///
uint64_t q_inputevent_timestamp(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
///
/// @param self QInputEvent*
/// @param timestamp uint64_t
///
void q_inputevent_set_timestamp(void* self, uint64_t timestamp);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
///
/// Allows for overriding the related default method
///
/// @param self QInputEvent*
/// @param callback void func(QInputEvent* self, uint64_t timestamp)
///
void q_inputevent_on_set_timestamp(void* self, void (*callback)(void*, uint64_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
///
/// Base class method implementation
///
/// @param self QInputEvent*
/// @param timestamp uint64_t
///
void q_inputevent_qbase_set_timestamp(void* self, uint64_t timestamp);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QInputEvent*
///
/// @return enum QEvent__Type
///
int32_t q_inputevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QInputEvent*
///
bool q_inputevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QInputEvent*
///
bool q_inputevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QInputEvent*
///
void q_inputevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QInputEvent*
///
void q_inputevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QInputEvent*
///
bool q_inputevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QInputEvent*
///
bool q_inputevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QInputEvent*
///
bool q_inputevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_inputevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_inputevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputEvent*
/// @param accepted bool
///
void q_inputevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputEvent*
/// @param accepted bool
///
void q_inputevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputEvent*
/// @param callback void func(QInputEvent* self, bool accepted)
///
void q_inputevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#dtor.QInputEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QInputEvent*
///
void q_inputevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html)

/// q_pointerevent_new constructs a new QPointerEvent object.
///
/// @param type enum QEvent__Type
/// @param dev QPointingDevice*
///
QPointerEvent* q_pointerevent_new(int32_t type, void* dev);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html)

/// q_pointerevent_new2 constructs a new QPointerEvent object.
///
/// @param type enum QEvent__Type
/// @param dev QPointingDevice*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
QPointerEvent* q_pointerevent_new2(int32_t type, void* dev, int64_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html)

/// q_pointerevent_new3 constructs a new QPointerEvent object.
///
/// @param type enum QEvent__Type
/// @param dev QPointingDevice*
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param points libqt_list /* of QEventPoint* */
///
QPointerEvent* q_pointerevent_new3(int32_t type, void* dev, int64_t modifiers, libqt_list points);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clone)
///
/// @param self QPointerEvent*
///
QPointerEvent* q_pointerevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QPointerEvent*
/// @param callback QPointerEvent* func()
///
void q_pointerevent_on_clone(void* self, QPointerEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clone)
///
/// Base class method implementation
///
/// @param self QPointerEvent*
///
QPointerEvent* q_pointerevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
///
/// @param self QPointerEvent*
///
const QPointingDevice* q_pointerevent_pointing_device(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
///
/// @param self QPointerEvent*
///
/// @return enum QPointingDevice__PointerType
///
int32_t q_pointerevent_pointer_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// @param self QPointerEvent*
/// @param timestamp uint64_t
///
void q_pointerevent_set_timestamp(void* self, uint64_t timestamp);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// Allows for overriding the related default method
///
/// @param self QPointerEvent*
/// @param callback void func(QPointerEvent* self, uint64_t timestamp)
///
void q_pointerevent_on_set_timestamp(void* self, void (*callback)(void*, uint64_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// Base class method implementation
///
/// @param self QPointerEvent*
/// @param timestamp uint64_t
///
void q_pointerevent_qbase_set_timestamp(void* self, uint64_t timestamp);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
///
/// @param self QPointerEvent*
///
int64_t q_pointerevent_point_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
///
/// @param self QPointerEvent*
/// @param i int64_t
///
QEventPoint* q_pointerevent_point(void* self, int64_t i);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
///
/// @param self QPointerEvent*
///
libqt_list /* of QEventPoint* */ q_pointerevent_points(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
///
/// @param self QPointerEvent*
/// @param id int
///
QEventPoint* q_pointerevent_point_by_id(void* self, int id);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
///
/// @param self QPointerEvent*
///
bool q_pointerevent_all_points_grabbed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isBeginEvent)
///
/// @param self QPointerEvent*
///
bool q_pointerevent_is_begin_event(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isBeginEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPointerEvent*
/// @param callback bool func()
///
void q_pointerevent_on_is_begin_event(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isBeginEvent)
///
/// Base class method implementation
///
/// @param self QPointerEvent*
///
bool q_pointerevent_qbase_is_begin_event(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isUpdateEvent)
///
/// @param self QPointerEvent*
///
bool q_pointerevent_is_update_event(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isUpdateEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPointerEvent*
/// @param callback bool func()
///
void q_pointerevent_on_is_update_event(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isUpdateEvent)
///
/// Base class method implementation
///
/// @param self QPointerEvent*
///
bool q_pointerevent_qbase_is_update_event(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isEndEvent)
///
/// @param self QPointerEvent*
///
bool q_pointerevent_is_end_event(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isEndEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPointerEvent*
/// @param callback bool func()
///
void q_pointerevent_on_is_end_event(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isEndEvent)
///
/// Base class method implementation
///
/// @param self QPointerEvent*
///
bool q_pointerevent_qbase_is_end_event(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
///
/// @param self QPointerEvent*
///
bool q_pointerevent_all_points_accepted(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// @param self QPointerEvent*
/// @param accepted bool
///
void q_pointerevent_set_accepted(void* self, bool accepted);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// Allows for overriding the related default method
///
/// @param self QPointerEvent*
/// @param callback void func(QPointerEvent* self, bool accepted)
///
void q_pointerevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// Base class method implementation
///
/// @param self QPointerEvent*
/// @param accepted bool
///
void q_pointerevent_qbase_set_accepted(void* self, bool accepted);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
///
/// @param self QPointerEvent*
/// @param point QEventPoint*
///
QObject* q_pointerevent_exclusive_grabber(void* self, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
///
/// @param self QPointerEvent*
/// @param point QEventPoint*
/// @param exclusiveGrabber QObject*
///
void q_pointerevent_set_exclusive_grabber(void* self, void* point, void* exclusiveGrabber);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
///
/// @param self QPointerEvent*
/// @param point QEventPoint*
///
void q_pointerevent_clear_passive_grabbers(void* self, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
///
/// @param self QPointerEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_pointerevent_add_passive_grabber(void* self, void* point, void* grabber);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
///
/// @param self QPointerEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_pointerevent_remove_passive_grabber(void* self, void* point, void* grabber);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// @param self QPointerEvent*
///
const QInputDevice* q_pointerevent_device(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// @param self QPointerEvent*
///
/// @return enum QInputDevice__DeviceType
///
int32_t q_pointerevent_device_type(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
///
/// @param self QPointerEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int64_t q_pointerevent_modifiers(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// @param self QPointerEvent*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
void q_pointerevent_set_modifiers(void* self, int64_t modifiers);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// @param self QPointerEvent*
///
uint64_t q_pointerevent_timestamp(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QPointerEvent*
///
/// @return enum QEvent__Type
///
int32_t q_pointerevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QPointerEvent*
///
bool q_pointerevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QPointerEvent*
///
bool q_pointerevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QPointerEvent*
///
void q_pointerevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QPointerEvent*
///
void q_pointerevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QPointerEvent*
///
bool q_pointerevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QPointerEvent*
///
bool q_pointerevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QPointerEvent*
///
bool q_pointerevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_pointerevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_pointerevent_register_event_type1(int hint);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#dtor.QPointerEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QPointerEvent*
///
void q_pointerevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#clone)
///
/// @param self QSinglePointEvent*
///
QSinglePointEvent* q_singlepointevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
///
/// @param self QSinglePointEvent*
///
/// @return enum Qt__MouseButton
///
int64_t q_singlepointevent_button(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
///
/// @param self QSinglePointEvent*
///
/// @return flag of enum Qt__MouseButton
///
int64_t q_singlepointevent_buttons(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
///
/// @param self QSinglePointEvent*
///
QPointF* q_singlepointevent_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
///
/// @param self QSinglePointEvent*
///
QPointF* q_singlepointevent_scene_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
///
/// @param self QSinglePointEvent*
///
QPointF* q_singlepointevent_global_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
///
/// @param self QSinglePointEvent*
///
bool q_singlepointevent_is_begin_event(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
///
/// @param self QSinglePointEvent*
///
bool q_singlepointevent_is_update_event(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// @param self QSinglePointEvent*
///
bool q_singlepointevent_is_end_event(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
///
/// @param self QSinglePointEvent*
///
QObject* q_singlepointevent_exclusive_point_grabber(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
///
/// @param self QSinglePointEvent*
/// @param exclusiveGrabber QObject*
///
void q_singlepointevent_set_exclusive_point_grabber(void* self, void* exclusiveGrabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
///
/// @param self QSinglePointEvent*
///
const QPointingDevice* q_singlepointevent_pointing_device(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
///
/// @param self QSinglePointEvent*
///
/// @return enum QPointingDevice__PointerType
///
int32_t q_singlepointevent_pointer_type(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// @param self QSinglePointEvent*
/// @param timestamp uint64_t
///
void q_singlepointevent_set_timestamp(void* self, uint64_t timestamp);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
///
/// @param self QSinglePointEvent*
///
int64_t q_singlepointevent_point_count(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
///
/// @param self QSinglePointEvent*
/// @param i int64_t
///
QEventPoint* q_singlepointevent_point(void* self, int64_t i);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
///
/// @param self QSinglePointEvent*
///
libqt_list /* of QEventPoint* */ q_singlepointevent_points(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
///
/// @param self QSinglePointEvent*
/// @param id int
///
QEventPoint* q_singlepointevent_point_by_id(void* self, int id);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
///
/// @param self QSinglePointEvent*
///
bool q_singlepointevent_all_points_grabbed(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
///
/// @param self QSinglePointEvent*
///
bool q_singlepointevent_all_points_accepted(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// @param self QSinglePointEvent*
/// @param accepted bool
///
void q_singlepointevent_set_accepted(void* self, bool accepted);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
///
/// @param self QSinglePointEvent*
/// @param point QEventPoint*
///
QObject* q_singlepointevent_exclusive_grabber(void* self, void* point);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
///
/// @param self QSinglePointEvent*
/// @param point QEventPoint*
/// @param exclusiveGrabber QObject*
///
void q_singlepointevent_set_exclusive_grabber(void* self, void* point, void* exclusiveGrabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
///
/// @param self QSinglePointEvent*
/// @param point QEventPoint*
///
void q_singlepointevent_clear_passive_grabbers(void* self, void* point);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
///
/// @param self QSinglePointEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_singlepointevent_add_passive_grabber(void* self, void* point, void* grabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
///
/// @param self QSinglePointEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_singlepointevent_remove_passive_grabber(void* self, void* point, void* grabber);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// @param self QSinglePointEvent*
///
const QInputDevice* q_singlepointevent_device(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// @param self QSinglePointEvent*
///
/// @return enum QInputDevice__DeviceType
///
int32_t q_singlepointevent_device_type(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
///
/// @param self QSinglePointEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int64_t q_singlepointevent_modifiers(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// @param self QSinglePointEvent*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
void q_singlepointevent_set_modifiers(void* self, int64_t modifiers);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// @param self QSinglePointEvent*
///
uint64_t q_singlepointevent_timestamp(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QSinglePointEvent*
///
/// @return enum QEvent__Type
///
int32_t q_singlepointevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QSinglePointEvent*
///
bool q_singlepointevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QSinglePointEvent*
///
bool q_singlepointevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QSinglePointEvent*
///
void q_singlepointevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QSinglePointEvent*
///
void q_singlepointevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QSinglePointEvent*
///
bool q_singlepointevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QSinglePointEvent*
///
bool q_singlepointevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QSinglePointEvent*
///
bool q_singlepointevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_singlepointevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_singlepointevent_register_event_type1(int hint);

/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#dtor.QSinglePointEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QSinglePointEvent*
///
void q_singlepointevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html)

/// q_enterevent_new constructs a new QEnterEvent object.
///
/// @param localPos QPointF*
/// @param scenePos QPointF*
/// @param globalPos QPointF*
///
QEnterEvent* q_enterevent_new(void* localPos, void* scenePos, void* globalPos);

/// [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html)

/// q_enterevent_new2 constructs a new QEnterEvent object.
///
/// @param localPos QPointF*
/// @param scenePos QPointF*
/// @param globalPos QPointF*
/// @param device QPointingDevice*
///
QEnterEvent* q_enterevent_new2(void* localPos, void* scenePos, void* globalPos, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#clone)
///
/// @param self QEnterEvent*
///
QEnterEvent* q_enterevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QEnterEvent*
/// @param callback QEnterEvent* func()
///
void q_enterevent_on_clone(void* self, QEnterEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#clone)
///
/// Base class method implementation
///
/// @param self QEnterEvent*
///
QEnterEvent* q_enterevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#pos)
///
/// @param self QEnterEvent*
///
QPoint* q_enterevent_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#globalPos)
///
/// @param self QEnterEvent*
///
QPoint* q_enterevent_global_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#x)
///
/// @param self QEnterEvent*
///
int32_t q_enterevent_x(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#y)
///
/// @param self QEnterEvent*
///
int32_t q_enterevent_y(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#globalX)
///
/// @param self QEnterEvent*
///
int32_t q_enterevent_global_x(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#globalY)
///
/// @param self QEnterEvent*
///
int32_t q_enterevent_global_y(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#localPos)
///
/// @param self QEnterEvent*
///
QPointF* q_enterevent_local_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#windowPos)
///
/// @param self QEnterEvent*
///
QPointF* q_enterevent_window_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#screenPos)
///
/// @param self QEnterEvent*
///
QPointF* q_enterevent_screen_pos(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
///
/// @param self QEnterEvent*
///
/// @return enum Qt__MouseButton
///
int64_t q_enterevent_button(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
///
/// @param self QEnterEvent*
///
/// @return flag of enum Qt__MouseButton
///
int64_t q_enterevent_buttons(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
///
/// @param self QEnterEvent*
///
QPointF* q_enterevent_position(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
///
/// @param self QEnterEvent*
///
QPointF* q_enterevent_scene_position(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
///
/// @param self QEnterEvent*
///
QPointF* q_enterevent_global_position(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
///
/// @param self QEnterEvent*
///
QObject* q_enterevent_exclusive_point_grabber(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
///
/// @param self QEnterEvent*
/// @param exclusiveGrabber QObject*
///
void q_enterevent_set_exclusive_point_grabber(void* self, void* exclusiveGrabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
///
/// @param self QEnterEvent*
///
const QPointingDevice* q_enterevent_pointing_device(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
///
/// @param self QEnterEvent*
///
/// @return enum QPointingDevice__PointerType
///
int32_t q_enterevent_pointer_type(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
///
/// @param self QEnterEvent*
///
int64_t q_enterevent_point_count(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
///
/// @param self QEnterEvent*
/// @param i int64_t
///
QEventPoint* q_enterevent_point(void* self, int64_t i);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
///
/// @param self QEnterEvent*
///
libqt_list /* of QEventPoint* */ q_enterevent_points(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
///
/// @param self QEnterEvent*
/// @param id int
///
QEventPoint* q_enterevent_point_by_id(void* self, int id);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
///
/// @param self QEnterEvent*
///
bool q_enterevent_all_points_grabbed(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
///
/// @param self QEnterEvent*
///
bool q_enterevent_all_points_accepted(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
///
/// @param self QEnterEvent*
/// @param point QEventPoint*
///
QObject* q_enterevent_exclusive_grabber(void* self, void* point);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
///
/// @param self QEnterEvent*
/// @param point QEventPoint*
/// @param exclusiveGrabber QObject*
///
void q_enterevent_set_exclusive_grabber(void* self, void* point, void* exclusiveGrabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
///
/// @param self QEnterEvent*
/// @param point QEventPoint*
///
void q_enterevent_clear_passive_grabbers(void* self, void* point);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
///
/// @param self QEnterEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_enterevent_add_passive_grabber(void* self, void* point, void* grabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
///
/// @param self QEnterEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_enterevent_remove_passive_grabber(void* self, void* point, void* grabber);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// @param self QEnterEvent*
///
const QInputDevice* q_enterevent_device(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// @param self QEnterEvent*
///
/// @return enum QInputDevice__DeviceType
///
int32_t q_enterevent_device_type(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
///
/// @param self QEnterEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int64_t q_enterevent_modifiers(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// @param self QEnterEvent*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
void q_enterevent_set_modifiers(void* self, int64_t modifiers);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// @param self QEnterEvent*
///
uint64_t q_enterevent_timestamp(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QEnterEvent*
///
/// @return enum QEvent__Type
///
int32_t q_enterevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QEnterEvent*
///
bool q_enterevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QEnterEvent*
///
bool q_enterevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QEnterEvent*
///
void q_enterevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QEnterEvent*
///
void q_enterevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QEnterEvent*
///
bool q_enterevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QEnterEvent*
///
bool q_enterevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QEnterEvent*
///
bool q_enterevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_enterevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_enterevent_register_event_type1(int hint);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QEnterEvent*
///
bool q_enterevent_is_begin_event(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QEnterEvent*
///
bool q_enterevent_qbase_is_begin_event(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QEnterEvent*
/// @param callback bool func()
///
void q_enterevent_on_is_begin_event(void* self, bool (*callback)());

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QEnterEvent*
///
bool q_enterevent_is_update_event(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QEnterEvent*
///
bool q_enterevent_qbase_is_update_event(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QEnterEvent*
/// @param callback bool func()
///
void q_enterevent_on_is_update_event(void* self, bool (*callback)());

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QEnterEvent*
///
bool q_enterevent_is_end_event(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QEnterEvent*
///
bool q_enterevent_qbase_is_end_event(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QEnterEvent*
/// @param callback bool func()
///
void q_enterevent_on_is_end_event(void* self, bool (*callback)());

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QEnterEvent*
/// @param timestamp uint64_t
///
void q_enterevent_set_timestamp(void* self, uint64_t timestamp);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QEnterEvent*
/// @param timestamp uint64_t
///
void q_enterevent_qbase_set_timestamp(void* self, uint64_t timestamp);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QEnterEvent*
/// @param callback void func(QEnterEvent* self, uint64_t timestamp)
///
void q_enterevent_on_set_timestamp(void* self, void (*callback)(void*, uint64_t));

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QEnterEvent*
/// @param accepted bool
///
void q_enterevent_set_accepted(void* self, bool accepted);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QEnterEvent*
/// @param accepted bool
///
void q_enterevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QEnterEvent*
/// @param callback void func(QEnterEvent* self, bool accepted)
///
void q_enterevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#dtor.QEnterEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QEnterEvent*
///
void q_enterevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html)

/// q_mouseevent_new constructs a new QMouseEvent object.
///
/// @param type enum QEvent__Type
/// @param localPos QPointF*
/// @param button enum Qt__MouseButton
/// @param buttons flag of enum Qt__MouseButton
/// @param modifiers flag of enum Qt__KeyboardModifier
///
QMouseEvent* q_mouseevent_new(int32_t type, void* localPos, int64_t button, int64_t buttons, int64_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html)

/// q_mouseevent_new2 constructs a new QMouseEvent object.
///
/// @param type enum QEvent__Type
/// @param localPos QPointF*
/// @param globalPos QPointF*
/// @param button enum Qt__MouseButton
/// @param buttons flag of enum Qt__MouseButton
/// @param modifiers flag of enum Qt__KeyboardModifier
///
QMouseEvent* q_mouseevent_new2(int32_t type, void* localPos, void* globalPos, int64_t button, int64_t buttons, int64_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html)

/// q_mouseevent_new3 constructs a new QMouseEvent object.
///
/// @param type enum QEvent__Type
/// @param localPos QPointF*
/// @param scenePos QPointF*
/// @param globalPos QPointF*
/// @param button enum Qt__MouseButton
/// @param buttons flag of enum Qt__MouseButton
/// @param modifiers flag of enum Qt__KeyboardModifier
///
QMouseEvent* q_mouseevent_new3(int32_t type, void* localPos, void* scenePos, void* globalPos, int64_t button, int64_t buttons, int64_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html)

/// q_mouseevent_new4 constructs a new QMouseEvent object.
///
/// @param type enum QEvent__Type
/// @param localPos QPointF*
/// @param scenePos QPointF*
/// @param globalPos QPointF*
/// @param button enum Qt__MouseButton
/// @param buttons flag of enum Qt__MouseButton
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param source enum Qt__MouseEventSource
///
QMouseEvent* q_mouseevent_new4(int32_t type, void* localPos, void* scenePos, void* globalPos, int64_t button, int64_t buttons, int64_t modifiers, int32_t source);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html)

/// q_mouseevent_new5 constructs a new QMouseEvent object.
///
/// @param type enum QEvent__Type
/// @param localPos QPointF*
/// @param button enum Qt__MouseButton
/// @param buttons flag of enum Qt__MouseButton
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param device QPointingDevice*
///
QMouseEvent* q_mouseevent_new5(int32_t type, void* localPos, int64_t button, int64_t buttons, int64_t modifiers, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html)

/// q_mouseevent_new6 constructs a new QMouseEvent object.
///
/// @param type enum QEvent__Type
/// @param localPos QPointF*
/// @param globalPos QPointF*
/// @param button enum Qt__MouseButton
/// @param buttons flag of enum Qt__MouseButton
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param device QPointingDevice*
///
QMouseEvent* q_mouseevent_new6(int32_t type, void* localPos, void* globalPos, int64_t button, int64_t buttons, int64_t modifiers, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html)

/// q_mouseevent_new7 constructs a new QMouseEvent object.
///
/// @param type enum QEvent__Type
/// @param localPos QPointF*
/// @param scenePos QPointF*
/// @param globalPos QPointF*
/// @param button enum Qt__MouseButton
/// @param buttons flag of enum Qt__MouseButton
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param device QPointingDevice*
///
QMouseEvent* q_mouseevent_new7(int32_t type, void* localPos, void* scenePos, void* globalPos, int64_t button, int64_t buttons, int64_t modifiers, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html)

/// q_mouseevent_new8 constructs a new QMouseEvent object.
///
/// @param type enum QEvent__Type
/// @param localPos QPointF*
/// @param scenePos QPointF*
/// @param globalPos QPointF*
/// @param button enum Qt__MouseButton
/// @param buttons flag of enum Qt__MouseButton
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param source enum Qt__MouseEventSource
/// @param device QPointingDevice*
///
QMouseEvent* q_mouseevent_new8(int32_t type, void* localPos, void* scenePos, void* globalPos, int64_t button, int64_t buttons, int64_t modifiers, int32_t source, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#clone)
///
/// @param self QMouseEvent*
///
QMouseEvent* q_mouseevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QMouseEvent*
/// @param callback QMouseEvent* func()
///
void q_mouseevent_on_clone(void* self, QMouseEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#clone)
///
/// Base class method implementation
///
/// @param self QMouseEvent*
///
QMouseEvent* q_mouseevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#pos)
///
/// @param self QMouseEvent*
///
QPoint* q_mouseevent_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#globalPos)
///
/// @param self QMouseEvent*
///
QPoint* q_mouseevent_global_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#x)
///
/// @param self QMouseEvent*
///
int32_t q_mouseevent_x(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#y)
///
/// @param self QMouseEvent*
///
int32_t q_mouseevent_y(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#globalX)
///
/// @param self QMouseEvent*
///
int32_t q_mouseevent_global_x(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#globalY)
///
/// @param self QMouseEvent*
///
int32_t q_mouseevent_global_y(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#localPos)
///
/// @param self QMouseEvent*
///
QPointF* q_mouseevent_local_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#windowPos)
///
/// @param self QMouseEvent*
///
QPointF* q_mouseevent_window_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#screenPos)
///
/// @param self QMouseEvent*
///
QPointF* q_mouseevent_screen_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#source)
///
/// @param self QMouseEvent*
///
/// @return enum Qt__MouseEventSource
///
int32_t q_mouseevent_source(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#flags)
///
/// @param self QMouseEvent*
///
/// @return flag of enum Qt__MouseEventFlag
///
int32_t q_mouseevent_flags(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
///
/// @param self QMouseEvent*
///
/// @return enum Qt__MouseButton
///
int64_t q_mouseevent_button(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
///
/// @param self QMouseEvent*
///
/// @return flag of enum Qt__MouseButton
///
int64_t q_mouseevent_buttons(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
///
/// @param self QMouseEvent*
///
QPointF* q_mouseevent_position(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
///
/// @param self QMouseEvent*
///
QPointF* q_mouseevent_scene_position(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
///
/// @param self QMouseEvent*
///
QPointF* q_mouseevent_global_position(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
///
/// @param self QMouseEvent*
///
QObject* q_mouseevent_exclusive_point_grabber(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
///
/// @param self QMouseEvent*
/// @param exclusiveGrabber QObject*
///
void q_mouseevent_set_exclusive_point_grabber(void* self, void* exclusiveGrabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
///
/// @param self QMouseEvent*
///
const QPointingDevice* q_mouseevent_pointing_device(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
///
/// @param self QMouseEvent*
///
/// @return enum QPointingDevice__PointerType
///
int32_t q_mouseevent_pointer_type(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
///
/// @param self QMouseEvent*
///
int64_t q_mouseevent_point_count(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
///
/// @param self QMouseEvent*
/// @param i int64_t
///
QEventPoint* q_mouseevent_point(void* self, int64_t i);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
///
/// @param self QMouseEvent*
///
libqt_list /* of QEventPoint* */ q_mouseevent_points(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
///
/// @param self QMouseEvent*
/// @param id int
///
QEventPoint* q_mouseevent_point_by_id(void* self, int id);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
///
/// @param self QMouseEvent*
///
bool q_mouseevent_all_points_grabbed(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
///
/// @param self QMouseEvent*
///
bool q_mouseevent_all_points_accepted(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
///
/// @param self QMouseEvent*
/// @param point QEventPoint*
///
QObject* q_mouseevent_exclusive_grabber(void* self, void* point);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
///
/// @param self QMouseEvent*
/// @param point QEventPoint*
/// @param exclusiveGrabber QObject*
///
void q_mouseevent_set_exclusive_grabber(void* self, void* point, void* exclusiveGrabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
///
/// @param self QMouseEvent*
/// @param point QEventPoint*
///
void q_mouseevent_clear_passive_grabbers(void* self, void* point);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
///
/// @param self QMouseEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_mouseevent_add_passive_grabber(void* self, void* point, void* grabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
///
/// @param self QMouseEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_mouseevent_remove_passive_grabber(void* self, void* point, void* grabber);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// @param self QMouseEvent*
///
const QInputDevice* q_mouseevent_device(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// @param self QMouseEvent*
///
/// @return enum QInputDevice__DeviceType
///
int32_t q_mouseevent_device_type(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
///
/// @param self QMouseEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int64_t q_mouseevent_modifiers(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// @param self QMouseEvent*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
void q_mouseevent_set_modifiers(void* self, int64_t modifiers);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// @param self QMouseEvent*
///
uint64_t q_mouseevent_timestamp(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QMouseEvent*
///
/// @return enum QEvent__Type
///
int32_t q_mouseevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QMouseEvent*
///
bool q_mouseevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QMouseEvent*
///
bool q_mouseevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QMouseEvent*
///
void q_mouseevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QMouseEvent*
///
void q_mouseevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QMouseEvent*
///
bool q_mouseevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QMouseEvent*
///
bool q_mouseevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QMouseEvent*
///
bool q_mouseevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_mouseevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_mouseevent_register_event_type1(int hint);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMouseEvent*
///
bool q_mouseevent_is_begin_event(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMouseEvent*
///
bool q_mouseevent_qbase_is_begin_event(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMouseEvent*
/// @param callback bool func()
///
void q_mouseevent_on_is_begin_event(void* self, bool (*callback)());

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMouseEvent*
///
bool q_mouseevent_is_update_event(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMouseEvent*
///
bool q_mouseevent_qbase_is_update_event(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMouseEvent*
/// @param callback bool func()
///
void q_mouseevent_on_is_update_event(void* self, bool (*callback)());

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMouseEvent*
///
bool q_mouseevent_is_end_event(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMouseEvent*
///
bool q_mouseevent_qbase_is_end_event(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMouseEvent*
/// @param callback bool func()
///
void q_mouseevent_on_is_end_event(void* self, bool (*callback)());

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMouseEvent*
/// @param timestamp uint64_t
///
void q_mouseevent_set_timestamp(void* self, uint64_t timestamp);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMouseEvent*
/// @param timestamp uint64_t
///
void q_mouseevent_qbase_set_timestamp(void* self, uint64_t timestamp);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMouseEvent*
/// @param callback void func(QMouseEvent* self, uint64_t timestamp)
///
void q_mouseevent_on_set_timestamp(void* self, void (*callback)(void*, uint64_t));

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMouseEvent*
/// @param accepted bool
///
void q_mouseevent_set_accepted(void* self, bool accepted);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMouseEvent*
/// @param accepted bool
///
void q_mouseevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMouseEvent*
/// @param callback void func(QMouseEvent* self, bool accepted)
///
void q_mouseevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#dtor.QMouseEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QMouseEvent*
///
void q_mouseevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html)

/// q_hoverevent_new constructs a new QHoverEvent object.
///
/// @param type enum QEvent__Type
/// @param scenePos QPointF*
/// @param globalPos QPointF*
/// @param oldPos QPointF*
///
QHoverEvent* q_hoverevent_new(int32_t type, void* scenePos, void* globalPos, void* oldPos);

/// [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html)

/// q_hoverevent_new2 constructs a new QHoverEvent object.
///
/// @param type enum QEvent__Type
/// @param pos QPointF*
/// @param oldPos QPointF*
///
QHoverEvent* q_hoverevent_new2(int32_t type, void* pos, void* oldPos);

/// [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html)

/// q_hoverevent_new3 constructs a new QHoverEvent object.
///
/// @param type enum QEvent__Type
/// @param scenePos QPointF*
/// @param globalPos QPointF*
/// @param oldPos QPointF*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
QHoverEvent* q_hoverevent_new3(int32_t type, void* scenePos, void* globalPos, void* oldPos, int64_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html)

/// q_hoverevent_new4 constructs a new QHoverEvent object.
///
/// @param type enum QEvent__Type
/// @param scenePos QPointF*
/// @param globalPos QPointF*
/// @param oldPos QPointF*
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param device QPointingDevice*
///
QHoverEvent* q_hoverevent_new4(int32_t type, void* scenePos, void* globalPos, void* oldPos, int64_t modifiers, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html)

/// q_hoverevent_new5 constructs a new QHoverEvent object.
///
/// @param type enum QEvent__Type
/// @param pos QPointF*
/// @param oldPos QPointF*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
QHoverEvent* q_hoverevent_new5(int32_t type, void* pos, void* oldPos, int64_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html)

/// q_hoverevent_new6 constructs a new QHoverEvent object.
///
/// @param type enum QEvent__Type
/// @param pos QPointF*
/// @param oldPos QPointF*
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param device QPointingDevice*
///
QHoverEvent* q_hoverevent_new6(int32_t type, void* pos, void* oldPos, int64_t modifiers, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#clone)
///
/// @param self QHoverEvent*
///
QHoverEvent* q_hoverevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QHoverEvent*
/// @param callback QHoverEvent* func()
///
void q_hoverevent_on_clone(void* self, QHoverEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#clone)
///
/// Base class method implementation
///
/// @param self QHoverEvent*
///
QHoverEvent* q_hoverevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#pos)
///
/// @param self QHoverEvent*
///
QPoint* q_hoverevent_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#posF)
///
/// @param self QHoverEvent*
///
QPointF* q_hoverevent_pos_f(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#isUpdateEvent)
///
/// @param self QHoverEvent*
///
bool q_hoverevent_is_update_event(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#isUpdateEvent)
///
/// Allows for overriding the related default method
///
/// @param self QHoverEvent*
/// @param callback bool func()
///
void q_hoverevent_on_is_update_event(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#isUpdateEvent)
///
/// Base class method implementation
///
/// @param self QHoverEvent*
///
bool q_hoverevent_qbase_is_update_event(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#oldPos)
///
/// @param self QHoverEvent*
///
QPoint* q_hoverevent_old_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#oldPosF)
///
/// @param self QHoverEvent*
///
QPointF* q_hoverevent_old_pos_f(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
///
/// @param self QHoverEvent*
///
/// @return enum Qt__MouseButton
///
int64_t q_hoverevent_button(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
///
/// @param self QHoverEvent*
///
/// @return flag of enum Qt__MouseButton
///
int64_t q_hoverevent_buttons(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
///
/// @param self QHoverEvent*
///
QPointF* q_hoverevent_position(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
///
/// @param self QHoverEvent*
///
QPointF* q_hoverevent_scene_position(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
///
/// @param self QHoverEvent*
///
QPointF* q_hoverevent_global_position(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
///
/// @param self QHoverEvent*
///
QObject* q_hoverevent_exclusive_point_grabber(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
///
/// @param self QHoverEvent*
/// @param exclusiveGrabber QObject*
///
void q_hoverevent_set_exclusive_point_grabber(void* self, void* exclusiveGrabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
///
/// @param self QHoverEvent*
///
const QPointingDevice* q_hoverevent_pointing_device(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
///
/// @param self QHoverEvent*
///
/// @return enum QPointingDevice__PointerType
///
int32_t q_hoverevent_pointer_type(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
///
/// @param self QHoverEvent*
///
int64_t q_hoverevent_point_count(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
///
/// @param self QHoverEvent*
/// @param i int64_t
///
QEventPoint* q_hoverevent_point(void* self, int64_t i);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
///
/// @param self QHoverEvent*
///
libqt_list /* of QEventPoint* */ q_hoverevent_points(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
///
/// @param self QHoverEvent*
/// @param id int
///
QEventPoint* q_hoverevent_point_by_id(void* self, int id);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
///
/// @param self QHoverEvent*
///
bool q_hoverevent_all_points_grabbed(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
///
/// @param self QHoverEvent*
///
bool q_hoverevent_all_points_accepted(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
///
/// @param self QHoverEvent*
/// @param point QEventPoint*
///
QObject* q_hoverevent_exclusive_grabber(void* self, void* point);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
///
/// @param self QHoverEvent*
/// @param point QEventPoint*
/// @param exclusiveGrabber QObject*
///
void q_hoverevent_set_exclusive_grabber(void* self, void* point, void* exclusiveGrabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
///
/// @param self QHoverEvent*
/// @param point QEventPoint*
///
void q_hoverevent_clear_passive_grabbers(void* self, void* point);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
///
/// @param self QHoverEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_hoverevent_add_passive_grabber(void* self, void* point, void* grabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
///
/// @param self QHoverEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_hoverevent_remove_passive_grabber(void* self, void* point, void* grabber);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// @param self QHoverEvent*
///
const QInputDevice* q_hoverevent_device(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// @param self QHoverEvent*
///
/// @return enum QInputDevice__DeviceType
///
int32_t q_hoverevent_device_type(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
///
/// @param self QHoverEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int64_t q_hoverevent_modifiers(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// @param self QHoverEvent*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
void q_hoverevent_set_modifiers(void* self, int64_t modifiers);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// @param self QHoverEvent*
///
uint64_t q_hoverevent_timestamp(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QHoverEvent*
///
/// @return enum QEvent__Type
///
int32_t q_hoverevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QHoverEvent*
///
bool q_hoverevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QHoverEvent*
///
bool q_hoverevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QHoverEvent*
///
void q_hoverevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QHoverEvent*
///
void q_hoverevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QHoverEvent*
///
bool q_hoverevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QHoverEvent*
///
bool q_hoverevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QHoverEvent*
///
bool q_hoverevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_hoverevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_hoverevent_register_event_type1(int hint);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHoverEvent*
///
bool q_hoverevent_is_begin_event(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHoverEvent*
///
bool q_hoverevent_qbase_is_begin_event(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHoverEvent*
/// @param callback bool func()
///
void q_hoverevent_on_is_begin_event(void* self, bool (*callback)());

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHoverEvent*
///
bool q_hoverevent_is_end_event(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHoverEvent*
///
bool q_hoverevent_qbase_is_end_event(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHoverEvent*
/// @param callback bool func()
///
void q_hoverevent_on_is_end_event(void* self, bool (*callback)());

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHoverEvent*
/// @param timestamp uint64_t
///
void q_hoverevent_set_timestamp(void* self, uint64_t timestamp);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHoverEvent*
/// @param timestamp uint64_t
///
void q_hoverevent_qbase_set_timestamp(void* self, uint64_t timestamp);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHoverEvent*
/// @param callback void func(QHoverEvent* self, uint64_t timestamp)
///
void q_hoverevent_on_set_timestamp(void* self, void (*callback)(void*, uint64_t));

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHoverEvent*
/// @param accepted bool
///
void q_hoverevent_set_accepted(void* self, bool accepted);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHoverEvent*
/// @param accepted bool
///
void q_hoverevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHoverEvent*
/// @param callback void func(QHoverEvent* self, bool accepted)
///
void q_hoverevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#dtor.QHoverEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QHoverEvent*
///
void q_hoverevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html)

/// q_wheelevent_new constructs a new QWheelEvent object.
///
/// @param pos QPointF*
/// @param globalPos QPointF*
/// @param pixelDelta QPoint*
/// @param angleDelta QPoint*
/// @param buttons flag of enum Qt__MouseButton
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param phase enum Qt__ScrollPhase
/// @param inverted bool
///
QWheelEvent* q_wheelevent_new(void* pos, void* globalPos, void* pixelDelta, void* angleDelta, int64_t buttons, int64_t modifiers, int32_t phase, bool inverted);

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html)

/// q_wheelevent_new2 constructs a new QWheelEvent object.
///
/// @param pos QPointF*
/// @param globalPos QPointF*
/// @param pixelDelta QPoint*
/// @param angleDelta QPoint*
/// @param buttons flag of enum Qt__MouseButton
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param phase enum Qt__ScrollPhase
/// @param inverted bool
/// @param source enum Qt__MouseEventSource
///
QWheelEvent* q_wheelevent_new2(void* pos, void* globalPos, void* pixelDelta, void* angleDelta, int64_t buttons, int64_t modifiers, int32_t phase, bool inverted, int32_t source);

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html)

/// q_wheelevent_new3 constructs a new QWheelEvent object.
///
/// @param pos QPointF*
/// @param globalPos QPointF*
/// @param pixelDelta QPoint*
/// @param angleDelta QPoint*
/// @param buttons flag of enum Qt__MouseButton
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param phase enum Qt__ScrollPhase
/// @param inverted bool
/// @param source enum Qt__MouseEventSource
/// @param device QPointingDevice*
///
QWheelEvent* q_wheelevent_new3(void* pos, void* globalPos, void* pixelDelta, void* angleDelta, int64_t buttons, int64_t modifiers, int32_t phase, bool inverted, int32_t source, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#clone)
///
/// @param self QWheelEvent*
///
QWheelEvent* q_wheelevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QWheelEvent*
/// @param callback QWheelEvent* func()
///
void q_wheelevent_on_clone(void* self, QWheelEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#clone)
///
/// Base class method implementation
///
/// @param self QWheelEvent*
///
QWheelEvent* q_wheelevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#pixelDelta)
///
/// @param self QWheelEvent*
///
QPoint* q_wheelevent_pixel_delta(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#angleDelta)
///
/// @param self QWheelEvent*
///
QPoint* q_wheelevent_angle_delta(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#phase)
///
/// @param self QWheelEvent*
///
/// @return enum Qt__ScrollPhase
///
int32_t q_wheelevent_phase(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#inverted)
///
/// @param self QWheelEvent*
///
bool q_wheelevent_inverted(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isInverted)
///
/// @param self QWheelEvent*
///
bool q_wheelevent_is_inverted(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#hasPixelDelta)
///
/// @param self QWheelEvent*
///
bool q_wheelevent_has_pixel_delta(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isBeginEvent)
///
/// @param self QWheelEvent*
///
bool q_wheelevent_is_begin_event(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isBeginEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWheelEvent*
/// @param callback bool func()
///
void q_wheelevent_on_is_begin_event(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isBeginEvent)
///
/// Base class method implementation
///
/// @param self QWheelEvent*
///
bool q_wheelevent_qbase_is_begin_event(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isUpdateEvent)
///
/// @param self QWheelEvent*
///
bool q_wheelevent_is_update_event(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isUpdateEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWheelEvent*
/// @param callback bool func()
///
void q_wheelevent_on_is_update_event(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isUpdateEvent)
///
/// Base class method implementation
///
/// @param self QWheelEvent*
///
bool q_wheelevent_qbase_is_update_event(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isEndEvent)
///
/// @param self QWheelEvent*
///
bool q_wheelevent_is_end_event(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isEndEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWheelEvent*
/// @param callback bool func()
///
void q_wheelevent_on_is_end_event(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isEndEvent)
///
/// Base class method implementation
///
/// @param self QWheelEvent*
///
bool q_wheelevent_qbase_is_end_event(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#source)
///
/// @param self QWheelEvent*
///
/// @return enum Qt__MouseEventSource
///
int32_t q_wheelevent_source(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
///
/// @param self QWheelEvent*
///
/// @return enum Qt__MouseButton
///
int64_t q_wheelevent_button(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
///
/// @param self QWheelEvent*
///
/// @return flag of enum Qt__MouseButton
///
int64_t q_wheelevent_buttons(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
///
/// @param self QWheelEvent*
///
QPointF* q_wheelevent_position(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
///
/// @param self QWheelEvent*
///
QPointF* q_wheelevent_scene_position(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
///
/// @param self QWheelEvent*
///
QPointF* q_wheelevent_global_position(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
///
/// @param self QWheelEvent*
///
QObject* q_wheelevent_exclusive_point_grabber(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
///
/// @param self QWheelEvent*
/// @param exclusiveGrabber QObject*
///
void q_wheelevent_set_exclusive_point_grabber(void* self, void* exclusiveGrabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
///
/// @param self QWheelEvent*
///
const QPointingDevice* q_wheelevent_pointing_device(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
///
/// @param self QWheelEvent*
///
/// @return enum QPointingDevice__PointerType
///
int32_t q_wheelevent_pointer_type(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
///
/// @param self QWheelEvent*
///
int64_t q_wheelevent_point_count(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
///
/// @param self QWheelEvent*
/// @param i int64_t
///
QEventPoint* q_wheelevent_point(void* self, int64_t i);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
///
/// @param self QWheelEvent*
///
libqt_list /* of QEventPoint* */ q_wheelevent_points(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
///
/// @param self QWheelEvent*
/// @param id int
///
QEventPoint* q_wheelevent_point_by_id(void* self, int id);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
///
/// @param self QWheelEvent*
///
bool q_wheelevent_all_points_grabbed(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
///
/// @param self QWheelEvent*
///
bool q_wheelevent_all_points_accepted(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
///
/// @param self QWheelEvent*
/// @param point QEventPoint*
///
QObject* q_wheelevent_exclusive_grabber(void* self, void* point);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
///
/// @param self QWheelEvent*
/// @param point QEventPoint*
/// @param exclusiveGrabber QObject*
///
void q_wheelevent_set_exclusive_grabber(void* self, void* point, void* exclusiveGrabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
///
/// @param self QWheelEvent*
/// @param point QEventPoint*
///
void q_wheelevent_clear_passive_grabbers(void* self, void* point);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
///
/// @param self QWheelEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_wheelevent_add_passive_grabber(void* self, void* point, void* grabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
///
/// @param self QWheelEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_wheelevent_remove_passive_grabber(void* self, void* point, void* grabber);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// @param self QWheelEvent*
///
const QInputDevice* q_wheelevent_device(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// @param self QWheelEvent*
///
/// @return enum QInputDevice__DeviceType
///
int32_t q_wheelevent_device_type(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
///
/// @param self QWheelEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int64_t q_wheelevent_modifiers(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// @param self QWheelEvent*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
void q_wheelevent_set_modifiers(void* self, int64_t modifiers);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// @param self QWheelEvent*
///
uint64_t q_wheelevent_timestamp(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QWheelEvent*
///
/// @return enum QEvent__Type
///
int32_t q_wheelevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QWheelEvent*
///
bool q_wheelevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QWheelEvent*
///
bool q_wheelevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QWheelEvent*
///
void q_wheelevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QWheelEvent*
///
void q_wheelevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QWheelEvent*
///
bool q_wheelevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QWheelEvent*
///
bool q_wheelevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QWheelEvent*
///
bool q_wheelevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_wheelevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_wheelevent_register_event_type1(int hint);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWheelEvent*
/// @param timestamp uint64_t
///
void q_wheelevent_set_timestamp(void* self, uint64_t timestamp);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWheelEvent*
/// @param timestamp uint64_t
///
void q_wheelevent_qbase_set_timestamp(void* self, uint64_t timestamp);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWheelEvent*
/// @param callback void func(QWheelEvent* self, uint64_t timestamp)
///
void q_wheelevent_on_set_timestamp(void* self, void (*callback)(void*, uint64_t));

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWheelEvent*
/// @param accepted bool
///
void q_wheelevent_set_accepted(void* self, bool accepted);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWheelEvent*
/// @param accepted bool
///
void q_wheelevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWheelEvent*
/// @param callback void func(QWheelEvent* self, bool accepted)
///
void q_wheelevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#dtor.QWheelEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QWheelEvent*
///
void q_wheelevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html)

/// q_tabletevent_new constructs a new QTabletEvent object.
///
/// @param t enum QEvent__Type
/// @param device QPointingDevice*
/// @param pos QPointF*
/// @param globalPos QPointF*
/// @param pressure double
/// @param xTilt float
/// @param yTilt float
/// @param tangentialPressure float
/// @param rotation double
/// @param z float
/// @param keyState flag of enum Qt__KeyboardModifier
/// @param button enum Qt__MouseButton
/// @param buttons flag of enum Qt__MouseButton
///
QTabletEvent* q_tabletevent_new(int32_t t, void* device, void* pos, void* globalPos, double pressure, float xTilt, float yTilt, float tangentialPressure, double rotation, float z, int64_t keyState, int64_t button, int64_t buttons);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#clone)
///
/// @param self QTabletEvent*
///
QTabletEvent* q_tabletevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QTabletEvent*
/// @param callback QTabletEvent* func()
///
void q_tabletevent_on_clone(void* self, QTabletEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#clone)
///
/// Base class method implementation
///
/// @param self QTabletEvent*
///
QTabletEvent* q_tabletevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#pos)
///
/// @param self QTabletEvent*
///
QPoint* q_tabletevent_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#globalPos)
///
/// @param self QTabletEvent*
///
QPoint* q_tabletevent_global_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#posF)
///
/// @param self QTabletEvent*
///
const QPointF* q_tabletevent_pos_f(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#globalPosF)
///
/// @param self QTabletEvent*
///
const QPointF* q_tabletevent_global_pos_f(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#x)
///
/// @param self QTabletEvent*
///
int32_t q_tabletevent_x(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#y)
///
/// @param self QTabletEvent*
///
int32_t q_tabletevent_y(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#globalX)
///
/// @param self QTabletEvent*
///
int32_t q_tabletevent_global_x(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#globalY)
///
/// @param self QTabletEvent*
///
int32_t q_tabletevent_global_y(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#hiResGlobalX)
///
/// @param self QTabletEvent*
///
double q_tabletevent_hi_res_global_x(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#hiResGlobalY)
///
/// @param self QTabletEvent*
///
double q_tabletevent_hi_res_global_y(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#uniqueId)
///
/// @param self QTabletEvent*
///
long long q_tabletevent_unique_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#pressure)
///
/// @param self QTabletEvent*
///
double q_tabletevent_pressure(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#rotation)
///
/// @param self QTabletEvent*
///
double q_tabletevent_rotation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#z)
///
/// @param self QTabletEvent*
///
double q_tabletevent_z(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#tangentialPressure)
///
/// @param self QTabletEvent*
///
double q_tabletevent_tangential_pressure(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#xTilt)
///
/// @param self QTabletEvent*
///
double q_tabletevent_x_tilt(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#yTilt)
///
/// @param self QTabletEvent*
///
double q_tabletevent_y_tilt(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
///
/// @param self QTabletEvent*
///
/// @return enum Qt__MouseButton
///
int64_t q_tabletevent_button(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
///
/// @param self QTabletEvent*
///
/// @return flag of enum Qt__MouseButton
///
int64_t q_tabletevent_buttons(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
///
/// @param self QTabletEvent*
///
QPointF* q_tabletevent_position(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
///
/// @param self QTabletEvent*
///
QPointF* q_tabletevent_scene_position(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
///
/// @param self QTabletEvent*
///
QPointF* q_tabletevent_global_position(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
///
/// @param self QTabletEvent*
///
QObject* q_tabletevent_exclusive_point_grabber(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
///
/// @param self QTabletEvent*
/// @param exclusiveGrabber QObject*
///
void q_tabletevent_set_exclusive_point_grabber(void* self, void* exclusiveGrabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
///
/// @param self QTabletEvent*
///
const QPointingDevice* q_tabletevent_pointing_device(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
///
/// @param self QTabletEvent*
///
/// @return enum QPointingDevice__PointerType
///
int32_t q_tabletevent_pointer_type(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
///
/// @param self QTabletEvent*
///
int64_t q_tabletevent_point_count(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
///
/// @param self QTabletEvent*
/// @param i int64_t
///
QEventPoint* q_tabletevent_point(void* self, int64_t i);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
///
/// @param self QTabletEvent*
///
libqt_list /* of QEventPoint* */ q_tabletevent_points(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
///
/// @param self QTabletEvent*
/// @param id int
///
QEventPoint* q_tabletevent_point_by_id(void* self, int id);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
///
/// @param self QTabletEvent*
///
bool q_tabletevent_all_points_grabbed(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
///
/// @param self QTabletEvent*
///
bool q_tabletevent_all_points_accepted(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
///
/// @param self QTabletEvent*
/// @param point QEventPoint*
///
QObject* q_tabletevent_exclusive_grabber(void* self, void* point);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
///
/// @param self QTabletEvent*
/// @param point QEventPoint*
/// @param exclusiveGrabber QObject*
///
void q_tabletevent_set_exclusive_grabber(void* self, void* point, void* exclusiveGrabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
///
/// @param self QTabletEvent*
/// @param point QEventPoint*
///
void q_tabletevent_clear_passive_grabbers(void* self, void* point);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
///
/// @param self QTabletEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_tabletevent_add_passive_grabber(void* self, void* point, void* grabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
///
/// @param self QTabletEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_tabletevent_remove_passive_grabber(void* self, void* point, void* grabber);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// @param self QTabletEvent*
///
const QInputDevice* q_tabletevent_device(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// @param self QTabletEvent*
///
/// @return enum QInputDevice__DeviceType
///
int32_t q_tabletevent_device_type(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
///
/// @param self QTabletEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int64_t q_tabletevent_modifiers(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// @param self QTabletEvent*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
void q_tabletevent_set_modifiers(void* self, int64_t modifiers);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// @param self QTabletEvent*
///
uint64_t q_tabletevent_timestamp(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QTabletEvent*
///
/// @return enum QEvent__Type
///
int32_t q_tabletevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QTabletEvent*
///
bool q_tabletevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QTabletEvent*
///
bool q_tabletevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QTabletEvent*
///
void q_tabletevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QTabletEvent*
///
void q_tabletevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QTabletEvent*
///
bool q_tabletevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QTabletEvent*
///
bool q_tabletevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QTabletEvent*
///
bool q_tabletevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_tabletevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_tabletevent_register_event_type1(int hint);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabletEvent*
///
bool q_tabletevent_is_begin_event(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabletEvent*
///
bool q_tabletevent_qbase_is_begin_event(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabletEvent*
/// @param callback bool func()
///
void q_tabletevent_on_is_begin_event(void* self, bool (*callback)());

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabletEvent*
///
bool q_tabletevent_is_update_event(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabletEvent*
///
bool q_tabletevent_qbase_is_update_event(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabletEvent*
/// @param callback bool func()
///
void q_tabletevent_on_is_update_event(void* self, bool (*callback)());

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabletEvent*
///
bool q_tabletevent_is_end_event(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabletEvent*
///
bool q_tabletevent_qbase_is_end_event(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabletEvent*
/// @param callback bool func()
///
void q_tabletevent_on_is_end_event(void* self, bool (*callback)());

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabletEvent*
/// @param timestamp uint64_t
///
void q_tabletevent_set_timestamp(void* self, uint64_t timestamp);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabletEvent*
/// @param timestamp uint64_t
///
void q_tabletevent_qbase_set_timestamp(void* self, uint64_t timestamp);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabletEvent*
/// @param callback void func(QTabletEvent* self, uint64_t timestamp)
///
void q_tabletevent_on_set_timestamp(void* self, void (*callback)(void*, uint64_t));

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabletEvent*
/// @param accepted bool
///
void q_tabletevent_set_accepted(void* self, bool accepted);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabletEvent*
/// @param accepted bool
///
void q_tabletevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabletEvent*
/// @param callback void func(QTabletEvent* self, bool accepted)
///
void q_tabletevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#dtor.QTabletEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QTabletEvent*
///
void q_tabletevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html)

/// q_nativegestureevent_new constructs a new QNativeGestureEvent object.
///
/// @param type enum Qt__NativeGestureType
/// @param dev QPointingDevice*
/// @param localPos QPointF*
/// @param scenePos QPointF*
/// @param globalPos QPointF*
/// @param value double
/// @param sequenceId uint64_t
/// @param intArgument uint64_t
///
QNativeGestureEvent* q_nativegestureevent_new(int32_t type, void* dev, void* localPos, void* scenePos, void* globalPos, double value, uint64_t sequenceId, uint64_t intArgument);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html)

/// q_nativegestureevent_new2 constructs a new QNativeGestureEvent object.
///
/// @param type enum Qt__NativeGestureType
/// @param dev QPointingDevice*
/// @param fingerCount int
/// @param localPos QPointF*
/// @param scenePos QPointF*
/// @param globalPos QPointF*
/// @param value double
/// @param delta QPointF*
///
QNativeGestureEvent* q_nativegestureevent_new2(int32_t type, void* dev, int fingerCount, void* localPos, void* scenePos, void* globalPos, double value, void* delta);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html)

/// q_nativegestureevent_new3 constructs a new QNativeGestureEvent object.
///
/// @param type enum Qt__NativeGestureType
/// @param dev QPointingDevice*
/// @param fingerCount int
/// @param localPos QPointF*
/// @param scenePos QPointF*
/// @param globalPos QPointF*
/// @param value double
/// @param delta QPointF*
/// @param sequenceId uint64_t
///
QNativeGestureEvent* q_nativegestureevent_new3(int32_t type, void* dev, int fingerCount, void* localPos, void* scenePos, void* globalPos, double value, void* delta, uint64_t sequenceId);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#clone)
///
/// @param self QNativeGestureEvent*
///
QNativeGestureEvent* q_nativegestureevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QNativeGestureEvent*
/// @param callback QNativeGestureEvent* func()
///
void q_nativegestureevent_on_clone(void* self, QNativeGestureEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#clone)
///
/// Base class method implementation
///
/// @param self QNativeGestureEvent*
///
QNativeGestureEvent* q_nativegestureevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#gestureType)
///
/// @param self QNativeGestureEvent*
///
/// @return enum Qt__NativeGestureType
///
int32_t q_nativegestureevent_gesture_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#fingerCount)
///
/// @param self QNativeGestureEvent*
///
int32_t q_nativegestureevent_finger_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#value)
///
/// @param self QNativeGestureEvent*
///
double q_nativegestureevent_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#delta)
///
/// @param self QNativeGestureEvent*
///
QPointF* q_nativegestureevent_delta(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#pos)
///
/// @param self QNativeGestureEvent*
///
const QPoint* q_nativegestureevent_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#globalPos)
///
/// @param self QNativeGestureEvent*
///
const QPoint* q_nativegestureevent_global_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#localPos)
///
/// @param self QNativeGestureEvent*
///
QPointF* q_nativegestureevent_local_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#windowPos)
///
/// @param self QNativeGestureEvent*
///
QPointF* q_nativegestureevent_window_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#screenPos)
///
/// @param self QNativeGestureEvent*
///
QPointF* q_nativegestureevent_screen_pos(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
///
/// @param self QNativeGestureEvent*
///
/// @return enum Qt__MouseButton
///
int64_t q_nativegestureevent_button(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
///
/// @param self QNativeGestureEvent*
///
/// @return flag of enum Qt__MouseButton
///
int64_t q_nativegestureevent_buttons(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
///
/// @param self QNativeGestureEvent*
///
QPointF* q_nativegestureevent_position(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
///
/// @param self QNativeGestureEvent*
///
QPointF* q_nativegestureevent_scene_position(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
///
/// @param self QNativeGestureEvent*
///
QPointF* q_nativegestureevent_global_position(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
///
/// @param self QNativeGestureEvent*
///
QObject* q_nativegestureevent_exclusive_point_grabber(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#setExclusivePointGrabber)
///
/// @param self QNativeGestureEvent*
/// @param exclusiveGrabber QObject*
///
void q_nativegestureevent_set_exclusive_point_grabber(void* self, void* exclusiveGrabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
///
/// @param self QNativeGestureEvent*
///
const QPointingDevice* q_nativegestureevent_pointing_device(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
///
/// @param self QNativeGestureEvent*
///
/// @return enum QPointingDevice__PointerType
///
int32_t q_nativegestureevent_pointer_type(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
///
/// @param self QNativeGestureEvent*
///
int64_t q_nativegestureevent_point_count(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
///
/// @param self QNativeGestureEvent*
/// @param i int64_t
///
QEventPoint* q_nativegestureevent_point(void* self, int64_t i);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
///
/// @param self QNativeGestureEvent*
///
libqt_list /* of QEventPoint* */ q_nativegestureevent_points(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
///
/// @param self QNativeGestureEvent*
/// @param id int
///
QEventPoint* q_nativegestureevent_point_by_id(void* self, int id);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
///
/// @param self QNativeGestureEvent*
///
bool q_nativegestureevent_all_points_grabbed(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
///
/// @param self QNativeGestureEvent*
///
bool q_nativegestureevent_all_points_accepted(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
///
/// @param self QNativeGestureEvent*
/// @param point QEventPoint*
///
QObject* q_nativegestureevent_exclusive_grabber(void* self, void* point);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
///
/// @param self QNativeGestureEvent*
/// @param point QEventPoint*
/// @param exclusiveGrabber QObject*
///
void q_nativegestureevent_set_exclusive_grabber(void* self, void* point, void* exclusiveGrabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
///
/// @param self QNativeGestureEvent*
/// @param point QEventPoint*
///
void q_nativegestureevent_clear_passive_grabbers(void* self, void* point);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
///
/// @param self QNativeGestureEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_nativegestureevent_add_passive_grabber(void* self, void* point, void* grabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
///
/// @param self QNativeGestureEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_nativegestureevent_remove_passive_grabber(void* self, void* point, void* grabber);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// @param self QNativeGestureEvent*
///
const QInputDevice* q_nativegestureevent_device(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// @param self QNativeGestureEvent*
///
/// @return enum QInputDevice__DeviceType
///
int32_t q_nativegestureevent_device_type(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
///
/// @param self QNativeGestureEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int64_t q_nativegestureevent_modifiers(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// @param self QNativeGestureEvent*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
void q_nativegestureevent_set_modifiers(void* self, int64_t modifiers);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// @param self QNativeGestureEvent*
///
uint64_t q_nativegestureevent_timestamp(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QNativeGestureEvent*
///
/// @return enum QEvent__Type
///
int32_t q_nativegestureevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QNativeGestureEvent*
///
bool q_nativegestureevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QNativeGestureEvent*
///
bool q_nativegestureevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QNativeGestureEvent*
///
void q_nativegestureevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QNativeGestureEvent*
///
void q_nativegestureevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QNativeGestureEvent*
///
bool q_nativegestureevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QNativeGestureEvent*
///
bool q_nativegestureevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QNativeGestureEvent*
///
bool q_nativegestureevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_nativegestureevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_nativegestureevent_register_event_type1(int hint);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNativeGestureEvent*
///
bool q_nativegestureevent_is_begin_event(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNativeGestureEvent*
///
bool q_nativegestureevent_qbase_is_begin_event(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNativeGestureEvent*
/// @param callback bool func()
///
void q_nativegestureevent_on_is_begin_event(void* self, bool (*callback)());

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNativeGestureEvent*
///
bool q_nativegestureevent_is_update_event(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNativeGestureEvent*
///
bool q_nativegestureevent_qbase_is_update_event(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNativeGestureEvent*
/// @param callback bool func()
///
void q_nativegestureevent_on_is_update_event(void* self, bool (*callback)());

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNativeGestureEvent*
///
bool q_nativegestureevent_is_end_event(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNativeGestureEvent*
///
bool q_nativegestureevent_qbase_is_end_event(void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNativeGestureEvent*
/// @param callback bool func()
///
void q_nativegestureevent_on_is_end_event(void* self, bool (*callback)());

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNativeGestureEvent*
/// @param timestamp uint64_t
///
void q_nativegestureevent_set_timestamp(void* self, uint64_t timestamp);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNativeGestureEvent*
/// @param timestamp uint64_t
///
void q_nativegestureevent_qbase_set_timestamp(void* self, uint64_t timestamp);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNativeGestureEvent*
/// @param callback void func(QNativeGestureEvent* self, uint64_t timestamp)
///
void q_nativegestureevent_on_set_timestamp(void* self, void (*callback)(void*, uint64_t));

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNativeGestureEvent*
/// @param accepted bool
///
void q_nativegestureevent_set_accepted(void* self, bool accepted);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNativeGestureEvent*
/// @param accepted bool
///
void q_nativegestureevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNativeGestureEvent*
/// @param callback void func(QNativeGestureEvent* self, bool accepted)
///
void q_nativegestureevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#dtor.QNativeGestureEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QNativeGestureEvent*
///
void q_nativegestureevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html)

/// q_keyevent_new constructs a new QKeyEvent object.
///
/// @param type enum QEvent__Type
/// @param key int
/// @param modifiers flag of enum Qt__KeyboardModifier
///
QKeyEvent* q_keyevent_new(int32_t type, int key, int64_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html)

/// q_keyevent_new2 constructs a new QKeyEvent object.
///
/// @param type enum QEvent__Type
/// @param key int
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param nativeScanCode uint32_t
/// @param nativeVirtualKey uint32_t
/// @param nativeModifiers uint32_t
///
QKeyEvent* q_keyevent_new2(int32_t type, int key, int64_t modifiers, uint32_t nativeScanCode, uint32_t nativeVirtualKey, uint32_t nativeModifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html)

/// q_keyevent_new3 constructs a new QKeyEvent object.
///
/// @param type enum QEvent__Type
/// @param key int
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param text const char*
///
QKeyEvent* q_keyevent_new3(int32_t type, int key, int64_t modifiers, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html)

/// q_keyevent_new4 constructs a new QKeyEvent object.
///
/// @param type enum QEvent__Type
/// @param key int
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param text const char*
/// @param autorep bool
///
QKeyEvent* q_keyevent_new4(int32_t type, int key, int64_t modifiers, const char* text, bool autorep);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html)

/// q_keyevent_new5 constructs a new QKeyEvent object.
///
/// @param type enum QEvent__Type
/// @param key int
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param text const char*
/// @param autorep bool
/// @param count unsigned short
///
QKeyEvent* q_keyevent_new5(int32_t type, int key, int64_t modifiers, const char* text, bool autorep, unsigned short count);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html)

/// q_keyevent_new6 constructs a new QKeyEvent object.
///
/// @param type enum QEvent__Type
/// @param key int
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param nativeScanCode uint32_t
/// @param nativeVirtualKey uint32_t
/// @param nativeModifiers uint32_t
/// @param text const char*
///
QKeyEvent* q_keyevent_new6(int32_t type, int key, int64_t modifiers, uint32_t nativeScanCode, uint32_t nativeVirtualKey, uint32_t nativeModifiers, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html)

/// q_keyevent_new7 constructs a new QKeyEvent object.
///
/// @param type enum QEvent__Type
/// @param key int
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param nativeScanCode uint32_t
/// @param nativeVirtualKey uint32_t
/// @param nativeModifiers uint32_t
/// @param text const char*
/// @param autorep bool
///
QKeyEvent* q_keyevent_new7(int32_t type, int key, int64_t modifiers, uint32_t nativeScanCode, uint32_t nativeVirtualKey, uint32_t nativeModifiers, const char* text, bool autorep);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html)

/// q_keyevent_new8 constructs a new QKeyEvent object.
///
/// @param type enum QEvent__Type
/// @param key int
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param nativeScanCode uint32_t
/// @param nativeVirtualKey uint32_t
/// @param nativeModifiers uint32_t
/// @param text const char*
/// @param autorep bool
/// @param count unsigned short
///
QKeyEvent* q_keyevent_new8(int32_t type, int key, int64_t modifiers, uint32_t nativeScanCode, uint32_t nativeVirtualKey, uint32_t nativeModifiers, const char* text, bool autorep, unsigned short count);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html)

/// q_keyevent_new9 constructs a new QKeyEvent object.
///
/// @param type enum QEvent__Type
/// @param key int
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param nativeScanCode uint32_t
/// @param nativeVirtualKey uint32_t
/// @param nativeModifiers uint32_t
/// @param text const char*
/// @param autorep bool
/// @param count unsigned short
/// @param device QInputDevice*
///
QKeyEvent* q_keyevent_new9(int32_t type, int key, int64_t modifiers, uint32_t nativeScanCode, uint32_t nativeVirtualKey, uint32_t nativeModifiers, const char* text, bool autorep, unsigned short count, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#clone)
///
/// @param self QKeyEvent*
///
QKeyEvent* q_keyevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QKeyEvent*
/// @param callback QKeyEvent* func()
///
void q_keyevent_on_clone(void* self, QKeyEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#clone)
///
/// Base class method implementation
///
/// @param self QKeyEvent*
///
QKeyEvent* q_keyevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#key)
///
/// @param self QKeyEvent*
///
int32_t q_keyevent_key(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#matches)
///
/// @param self QKeyEvent*
/// @param key enum QKeySequence__StandardKey
///
bool q_keyevent_matches(void* self, int32_t key);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#modifiers)
///
/// @param self QKeyEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int64_t q_keyevent_modifiers(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#keyCombination)
///
/// @param self QKeyEvent*
///
QKeyCombination* q_keyevent_key_combination(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QKeyEvent*
///
const char* q_keyevent_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#isAutoRepeat)
///
/// @param self QKeyEvent*
///
bool q_keyevent_is_auto_repeat(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#count)
///
/// @param self QKeyEvent*
///
int32_t q_keyevent_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#nativeScanCode)
///
/// @param self QKeyEvent*
///
uint32_t q_keyevent_native_scan_code(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#nativeVirtualKey)
///
/// @param self QKeyEvent*
///
uint32_t q_keyevent_native_virtual_key(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#nativeModifiers)
///
/// @param self QKeyEvent*
///
uint32_t q_keyevent_native_modifiers(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// @param self QKeyEvent*
///
const QInputDevice* q_keyevent_device(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// @param self QKeyEvent*
///
/// @return enum QInputDevice__DeviceType
///
int32_t q_keyevent_device_type(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// @param self QKeyEvent*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
void q_keyevent_set_modifiers(void* self, int64_t modifiers);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// @param self QKeyEvent*
///
uint64_t q_keyevent_timestamp(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QKeyEvent*
///
/// @return enum QEvent__Type
///
int32_t q_keyevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QKeyEvent*
///
bool q_keyevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QKeyEvent*
///
bool q_keyevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QKeyEvent*
///
void q_keyevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QKeyEvent*
///
void q_keyevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QKeyEvent*
///
bool q_keyevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QKeyEvent*
///
bool q_keyevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QKeyEvent*
///
bool q_keyevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_keyevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_keyevent_register_event_type1(int hint);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeyEvent*
/// @param timestamp uint64_t
///
void q_keyevent_set_timestamp(void* self, uint64_t timestamp);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeyEvent*
/// @param timestamp uint64_t
///
void q_keyevent_qbase_set_timestamp(void* self, uint64_t timestamp);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeyEvent*
/// @param callback void func(QKeyEvent* self, uint64_t timestamp)
///
void q_keyevent_on_set_timestamp(void* self, void (*callback)(void*, uint64_t));

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeyEvent*
/// @param accepted bool
///
void q_keyevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeyEvent*
/// @param accepted bool
///
void q_keyevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeyEvent*
/// @param callback void func(QKeyEvent* self, bool accepted)
///
void q_keyevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#dtor.QKeyEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QKeyEvent*
///
void q_keyevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html)

/// q_focusevent_new constructs a new QFocusEvent object.
///
/// @param type enum QEvent__Type
///
QFocusEvent* q_focusevent_new(int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html)

/// q_focusevent_new2 constructs a new QFocusEvent object.
///
/// @param type enum QEvent__Type
/// @param reason enum Qt__FocusReason
///
QFocusEvent* q_focusevent_new2(int32_t type, int32_t reason);

/// [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html#clone)
///
/// @param self QFocusEvent*
///
QFocusEvent* q_focusevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QFocusEvent*
/// @param callback QFocusEvent* func()
///
void q_focusevent_on_clone(void* self, QFocusEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html#clone)
///
/// Base class method implementation
///
/// @param self QFocusEvent*
///
QFocusEvent* q_focusevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html#gotFocus)
///
/// @param self QFocusEvent*
///
bool q_focusevent_got_focus(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html#lostFocus)
///
/// @param self QFocusEvent*
///
bool q_focusevent_lost_focus(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html#reason)
///
/// @param self QFocusEvent*
///
/// @return enum Qt__FocusReason
///
int32_t q_focusevent_reason(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QFocusEvent*
///
/// @return enum QEvent__Type
///
int32_t q_focusevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QFocusEvent*
///
bool q_focusevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QFocusEvent*
///
bool q_focusevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QFocusEvent*
///
void q_focusevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QFocusEvent*
///
void q_focusevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QFocusEvent*
///
bool q_focusevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QFocusEvent*
///
bool q_focusevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QFocusEvent*
///
bool q_focusevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_focusevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_focusevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFocusEvent*
/// @param accepted bool
///
void q_focusevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFocusEvent*
/// @param accepted bool
///
void q_focusevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFocusEvent*
/// @param callback void func(QFocusEvent* self, bool accepted)
///
void q_focusevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html#dtor.QFocusEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QFocusEvent*
///
void q_focusevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html)

/// q_paintevent_new constructs a new QPaintEvent object.
///
/// @param paintRegion QRegion*
///
QPaintEvent* q_paintevent_new(void* paintRegion);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html)

/// q_paintevent_new2 constructs a new QPaintEvent object.
///
/// @param paintRect QRect*
///
QPaintEvent* q_paintevent_new2(void* paintRect);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html#clone)
///
/// @param self QPaintEvent*
///
QPaintEvent* q_paintevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QPaintEvent*
/// @param callback QPaintEvent* func()
///
void q_paintevent_on_clone(void* self, QPaintEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html#clone)
///
/// Base class method implementation
///
/// @param self QPaintEvent*
///
QPaintEvent* q_paintevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html#rect)
///
/// @param self QPaintEvent*
///
const QRect* q_paintevent_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html#region)
///
/// @param self QPaintEvent*
///
const QRegion* q_paintevent_region(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QPaintEvent*
///
/// @return enum QEvent__Type
///
int32_t q_paintevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QPaintEvent*
///
bool q_paintevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QPaintEvent*
///
bool q_paintevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QPaintEvent*
///
void q_paintevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QPaintEvent*
///
void q_paintevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QPaintEvent*
///
bool q_paintevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QPaintEvent*
///
bool q_paintevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QPaintEvent*
///
bool q_paintevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_paintevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_paintevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPaintEvent*
/// @param accepted bool
///
void q_paintevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPaintEvent*
/// @param accepted bool
///
void q_paintevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPaintEvent*
/// @param callback void func(QPaintEvent* self, bool accepted)
///
void q_paintevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html#dtor.QPaintEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QPaintEvent*
///
void q_paintevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmoveevent.html)

/// q_moveevent_new constructs a new QMoveEvent object.
///
/// @param pos QPoint*
/// @param oldPos QPoint*
///
QMoveEvent* q_moveevent_new(void* pos, void* oldPos);

/// [Upstream resources](https://doc.qt.io/qt-6/qmoveevent.html#clone)
///
/// @param self QMoveEvent*
///
QMoveEvent* q_moveevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmoveevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QMoveEvent*
/// @param callback QMoveEvent* func()
///
void q_moveevent_on_clone(void* self, QMoveEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qmoveevent.html#clone)
///
/// Base class method implementation
///
/// @param self QMoveEvent*
///
QMoveEvent* q_moveevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmoveevent.html#pos)
///
/// @param self QMoveEvent*
///
const QPoint* q_moveevent_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmoveevent.html#oldPos)
///
/// @param self QMoveEvent*
///
const QPoint* q_moveevent_old_pos(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QMoveEvent*
///
/// @return enum QEvent__Type
///
int32_t q_moveevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QMoveEvent*
///
bool q_moveevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QMoveEvent*
///
bool q_moveevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QMoveEvent*
///
void q_moveevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QMoveEvent*
///
void q_moveevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QMoveEvent*
///
bool q_moveevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QMoveEvent*
///
bool q_moveevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QMoveEvent*
///
bool q_moveevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_moveevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_moveevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMoveEvent*
/// @param accepted bool
///
void q_moveevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMoveEvent*
/// @param accepted bool
///
void q_moveevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMoveEvent*
/// @param callback void func(QMoveEvent* self, bool accepted)
///
void q_moveevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qmoveevent.html#dtor.QMoveEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QMoveEvent*
///
void q_moveevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qexposeevent.html)

/// q_exposeevent_new constructs a new QExposeEvent object.
///
/// @param m_region QRegion*
///
QExposeEvent* q_exposeevent_new(void* m_region);

/// [Upstream resources](https://doc.qt.io/qt-6/qexposeevent.html#clone)
///
/// @param self QExposeEvent*
///
QExposeEvent* q_exposeevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qexposeevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QExposeEvent*
/// @param callback QExposeEvent* func()
///
void q_exposeevent_on_clone(void* self, QExposeEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qexposeevent.html#clone)
///
/// Base class method implementation
///
/// @param self QExposeEvent*
///
QExposeEvent* q_exposeevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qexposeevent.html#region)
///
/// @param self QExposeEvent*
///
const QRegion* q_exposeevent_region(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QExposeEvent*
///
/// @return enum QEvent__Type
///
int32_t q_exposeevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QExposeEvent*
///
bool q_exposeevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QExposeEvent*
///
bool q_exposeevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QExposeEvent*
///
void q_exposeevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QExposeEvent*
///
void q_exposeevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QExposeEvent*
///
bool q_exposeevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QExposeEvent*
///
bool q_exposeevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QExposeEvent*
///
bool q_exposeevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_exposeevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_exposeevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QExposeEvent*
/// @param accepted bool
///
void q_exposeevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QExposeEvent*
/// @param accepted bool
///
void q_exposeevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QExposeEvent*
/// @param callback void func(QExposeEvent* self, bool accepted)
///
void q_exposeevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qexposeevent.html#dtor.QExposeEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QExposeEvent*
///
void q_exposeevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplatformsurfaceevent.html)

/// q_platformsurfaceevent_new constructs a new QPlatformSurfaceEvent object.
///
/// @param surfaceEventType enum QPlatformSurfaceEvent__SurfaceEventType
///
QPlatformSurfaceEvent* q_platformsurfaceevent_new(int32_t surfaceEventType);

/// [Upstream resources](https://doc.qt.io/qt-6/qplatformsurfaceevent.html#clone)
///
/// @param self QPlatformSurfaceEvent*
///
QPlatformSurfaceEvent* q_platformsurfaceevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplatformsurfaceevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QPlatformSurfaceEvent*
/// @param callback QPlatformSurfaceEvent* func()
///
void q_platformsurfaceevent_on_clone(void* self, QPlatformSurfaceEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qplatformsurfaceevent.html#clone)
///
/// Base class method implementation
///
/// @param self QPlatformSurfaceEvent*
///
QPlatformSurfaceEvent* q_platformsurfaceevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplatformsurfaceevent.html#surfaceEventType)
///
/// @param self QPlatformSurfaceEvent*
///
/// @return enum QPlatformSurfaceEvent__SurfaceEventType
///
int32_t q_platformsurfaceevent_surface_event_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QPlatformSurfaceEvent*
///
/// @return enum QEvent__Type
///
int32_t q_platformsurfaceevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QPlatformSurfaceEvent*
///
bool q_platformsurfaceevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QPlatformSurfaceEvent*
///
bool q_platformsurfaceevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QPlatformSurfaceEvent*
///
void q_platformsurfaceevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QPlatformSurfaceEvent*
///
void q_platformsurfaceevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QPlatformSurfaceEvent*
///
bool q_platformsurfaceevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QPlatformSurfaceEvent*
///
bool q_platformsurfaceevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QPlatformSurfaceEvent*
///
bool q_platformsurfaceevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_platformsurfaceevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_platformsurfaceevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlatformSurfaceEvent*
/// @param accepted bool
///
void q_platformsurfaceevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlatformSurfaceEvent*
/// @param accepted bool
///
void q_platformsurfaceevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlatformSurfaceEvent*
/// @param callback void func(QPlatformSurfaceEvent* self, bool accepted)
///
void q_platformsurfaceevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qplatformsurfaceevent.html#dtor.QPlatformSurfaceEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QPlatformSurfaceEvent*
///
void q_platformsurfaceevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qresizeevent.html)

/// q_resizeevent_new constructs a new QResizeEvent object.
///
/// @param size QSize*
/// @param oldSize QSize*
///
QResizeEvent* q_resizeevent_new(void* size, void* oldSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qresizeevent.html#clone)
///
/// @param self QResizeEvent*
///
QResizeEvent* q_resizeevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qresizeevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QResizeEvent*
/// @param callback QResizeEvent* func()
///
void q_resizeevent_on_clone(void* self, QResizeEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qresizeevent.html#clone)
///
/// Base class method implementation
///
/// @param self QResizeEvent*
///
QResizeEvent* q_resizeevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qresizeevent.html#size)
///
/// @param self QResizeEvent*
///
const QSize* q_resizeevent_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qresizeevent.html#oldSize)
///
/// @param self QResizeEvent*
///
const QSize* q_resizeevent_old_size(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QResizeEvent*
///
/// @return enum QEvent__Type
///
int32_t q_resizeevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QResizeEvent*
///
bool q_resizeevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QResizeEvent*
///
bool q_resizeevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QResizeEvent*
///
void q_resizeevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QResizeEvent*
///
void q_resizeevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QResizeEvent*
///
bool q_resizeevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QResizeEvent*
///
bool q_resizeevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QResizeEvent*
///
bool q_resizeevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_resizeevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_resizeevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QResizeEvent*
/// @param accepted bool
///
void q_resizeevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QResizeEvent*
/// @param accepted bool
///
void q_resizeevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QResizeEvent*
/// @param callback void func(QResizeEvent* self, bool accepted)
///
void q_resizeevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qresizeevent.html#dtor.QResizeEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QResizeEvent*
///
void q_resizeevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcloseevent.html)

/// q_closeevent_new constructs a new QCloseEvent object.
///
QCloseEvent* q_closeevent_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qcloseevent.html#clone)
///
/// @param self QCloseEvent*
///
QCloseEvent* q_closeevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcloseevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QCloseEvent*
/// @param callback QCloseEvent* func()
///
void q_closeevent_on_clone(void* self, QCloseEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qcloseevent.html#clone)
///
/// Base class method implementation
///
/// @param self QCloseEvent*
///
QCloseEvent* q_closeevent_qbase_clone(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QCloseEvent*
///
/// @return enum QEvent__Type
///
int32_t q_closeevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QCloseEvent*
///
bool q_closeevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QCloseEvent*
///
bool q_closeevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QCloseEvent*
///
void q_closeevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QCloseEvent*
///
void q_closeevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QCloseEvent*
///
bool q_closeevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QCloseEvent*
///
bool q_closeevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QCloseEvent*
///
bool q_closeevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_closeevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_closeevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCloseEvent*
/// @param accepted bool
///
void q_closeevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCloseEvent*
/// @param accepted bool
///
void q_closeevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCloseEvent*
/// @param callback void func(QCloseEvent* self, bool accepted)
///
void q_closeevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qcloseevent.html#dtor.QCloseEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QCloseEvent*
///
void q_closeevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qicondragevent.html)

/// q_icondragevent_new constructs a new QIconDragEvent object.
///
QIconDragEvent* q_icondragevent_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qicondragevent.html#clone)
///
/// @param self QIconDragEvent*
///
QIconDragEvent* q_icondragevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qicondragevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QIconDragEvent*
/// @param callback QIconDragEvent* func()
///
void q_icondragevent_on_clone(void* self, QIconDragEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qicondragevent.html#clone)
///
/// Base class method implementation
///
/// @param self QIconDragEvent*
///
QIconDragEvent* q_icondragevent_qbase_clone(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QIconDragEvent*
///
/// @return enum QEvent__Type
///
int32_t q_icondragevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QIconDragEvent*
///
bool q_icondragevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QIconDragEvent*
///
bool q_icondragevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QIconDragEvent*
///
void q_icondragevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QIconDragEvent*
///
void q_icondragevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QIconDragEvent*
///
bool q_icondragevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QIconDragEvent*
///
bool q_icondragevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QIconDragEvent*
///
bool q_icondragevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_icondragevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_icondragevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIconDragEvent*
/// @param accepted bool
///
void q_icondragevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIconDragEvent*
/// @param accepted bool
///
void q_icondragevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIconDragEvent*
/// @param callback void func(QIconDragEvent* self, bool accepted)
///
void q_icondragevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qicondragevent.html#dtor.QIconDragEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QIconDragEvent*
///
void q_icondragevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qshowevent.html)

/// q_showevent_new constructs a new QShowEvent object.
///
QShowEvent* q_showevent_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qshowevent.html#clone)
///
/// @param self QShowEvent*
///
QShowEvent* q_showevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qshowevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QShowEvent*
/// @param callback QShowEvent* func()
///
void q_showevent_on_clone(void* self, QShowEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qshowevent.html#clone)
///
/// Base class method implementation
///
/// @param self QShowEvent*
///
QShowEvent* q_showevent_qbase_clone(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QShowEvent*
///
/// @return enum QEvent__Type
///
int32_t q_showevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QShowEvent*
///
bool q_showevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QShowEvent*
///
bool q_showevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QShowEvent*
///
void q_showevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QShowEvent*
///
void q_showevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QShowEvent*
///
bool q_showevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QShowEvent*
///
bool q_showevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QShowEvent*
///
bool q_showevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_showevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_showevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QShowEvent*
/// @param accepted bool
///
void q_showevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QShowEvent*
/// @param accepted bool
///
void q_showevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QShowEvent*
/// @param callback void func(QShowEvent* self, bool accepted)
///
void q_showevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qshowevent.html#dtor.QShowEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QShowEvent*
///
void q_showevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhideevent.html)

/// q_hideevent_new constructs a new QHideEvent object.
///
QHideEvent* q_hideevent_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qhideevent.html#clone)
///
/// @param self QHideEvent*
///
QHideEvent* q_hideevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhideevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QHideEvent*
/// @param callback QHideEvent* func()
///
void q_hideevent_on_clone(void* self, QHideEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qhideevent.html#clone)
///
/// Base class method implementation
///
/// @param self QHideEvent*
///
QHideEvent* q_hideevent_qbase_clone(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QHideEvent*
///
/// @return enum QEvent__Type
///
int32_t q_hideevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QHideEvent*
///
bool q_hideevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QHideEvent*
///
bool q_hideevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QHideEvent*
///
void q_hideevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QHideEvent*
///
void q_hideevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QHideEvent*
///
bool q_hideevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QHideEvent*
///
bool q_hideevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QHideEvent*
///
bool q_hideevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_hideevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_hideevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHideEvent*
/// @param accepted bool
///
void q_hideevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHideEvent*
/// @param accepted bool
///
void q_hideevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHideEvent*
/// @param callback void func(QHideEvent* self, bool accepted)
///
void q_hideevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qhideevent.html#dtor.QHideEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QHideEvent*
///
void q_hideevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html)

/// q_contextmenuevent_new constructs a new QContextMenuEvent object.
///
/// @param reason enum QContextMenuEvent__Reason
/// @param pos QPoint*
/// @param globalPos QPoint*
///
QContextMenuEvent* q_contextmenuevent_new(int32_t reason, void* pos, void* globalPos);

/// [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html)

/// q_contextmenuevent_new2 constructs a new QContextMenuEvent object.
///
/// @param reason enum QContextMenuEvent__Reason
/// @param pos QPoint*
///
QContextMenuEvent* q_contextmenuevent_new2(int32_t reason, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html)

/// q_contextmenuevent_new3 constructs a new QContextMenuEvent object.
///
/// @param reason enum QContextMenuEvent__Reason
/// @param pos QPoint*
/// @param globalPos QPoint*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
QContextMenuEvent* q_contextmenuevent_new3(int32_t reason, void* pos, void* globalPos, int64_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#clone)
///
/// @param self QContextMenuEvent*
///
QContextMenuEvent* q_contextmenuevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QContextMenuEvent*
/// @param callback QContextMenuEvent* func()
///
void q_contextmenuevent_on_clone(void* self, QContextMenuEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#clone)
///
/// Base class method implementation
///
/// @param self QContextMenuEvent*
///
QContextMenuEvent* q_contextmenuevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#x)
///
/// @param self QContextMenuEvent*
///
int32_t q_contextmenuevent_x(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#y)
///
/// @param self QContextMenuEvent*
///
int32_t q_contextmenuevent_y(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#globalX)
///
/// @param self QContextMenuEvent*
///
int32_t q_contextmenuevent_global_x(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#globalY)
///
/// @param self QContextMenuEvent*
///
int32_t q_contextmenuevent_global_y(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#pos)
///
/// @param self QContextMenuEvent*
///
const QPoint* q_contextmenuevent_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#globalPos)
///
/// @param self QContextMenuEvent*
///
const QPoint* q_contextmenuevent_global_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#reason)
///
/// @param self QContextMenuEvent*
///
/// @return enum QContextMenuEvent__Reason
///
int32_t q_contextmenuevent_reason(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// @param self QContextMenuEvent*
///
const QInputDevice* q_contextmenuevent_device(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// @param self QContextMenuEvent*
///
/// @return enum QInputDevice__DeviceType
///
int32_t q_contextmenuevent_device_type(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
///
/// @param self QContextMenuEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int64_t q_contextmenuevent_modifiers(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// @param self QContextMenuEvent*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
void q_contextmenuevent_set_modifiers(void* self, int64_t modifiers);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// @param self QContextMenuEvent*
///
uint64_t q_contextmenuevent_timestamp(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QContextMenuEvent*
///
/// @return enum QEvent__Type
///
int32_t q_contextmenuevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QContextMenuEvent*
///
bool q_contextmenuevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QContextMenuEvent*
///
bool q_contextmenuevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QContextMenuEvent*
///
void q_contextmenuevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QContextMenuEvent*
///
void q_contextmenuevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QContextMenuEvent*
///
bool q_contextmenuevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QContextMenuEvent*
///
bool q_contextmenuevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QContextMenuEvent*
///
bool q_contextmenuevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_contextmenuevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_contextmenuevent_register_event_type1(int hint);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QContextMenuEvent*
/// @param timestamp uint64_t
///
void q_contextmenuevent_set_timestamp(void* self, uint64_t timestamp);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QContextMenuEvent*
/// @param timestamp uint64_t
///
void q_contextmenuevent_qbase_set_timestamp(void* self, uint64_t timestamp);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setTimestamp)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QContextMenuEvent*
/// @param callback void func(QContextMenuEvent* self, uint64_t timestamp)
///
void q_contextmenuevent_on_set_timestamp(void* self, void (*callback)(void*, uint64_t));

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QContextMenuEvent*
/// @param accepted bool
///
void q_contextmenuevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QContextMenuEvent*
/// @param accepted bool
///
void q_contextmenuevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QContextMenuEvent*
/// @param callback void func(QContextMenuEvent* self, bool accepted)
///
void q_contextmenuevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#dtor.QContextMenuEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QContextMenuEvent*
///
void q_contextmenuevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html)

/// q_inputmethodevent_new constructs a new QInputMethodEvent object.
///
QInputMethodEvent* q_inputmethodevent_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html)

/// q_inputmethodevent_new2 constructs a new QInputMethodEvent object.
///
/// @param preeditText const char*
/// @param attributes libqt_list /* of QInputMethodEvent__Attribute* */
///
QInputMethodEvent* q_inputmethodevent_new2(const char* preeditText, libqt_list attributes);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#clone)
///
/// @param self QInputMethodEvent*
///
QInputMethodEvent* q_inputmethodevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QInputMethodEvent*
/// @param callback QInputMethodEvent* func()
///
void q_inputmethodevent_on_clone(void* self, QInputMethodEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#clone)
///
/// Base class method implementation
///
/// @param self QInputMethodEvent*
///
QInputMethodEvent* q_inputmethodevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#setCommitString)
///
/// @param self QInputMethodEvent*
/// @param commitString const char*
///
void q_inputmethodevent_set_commit_string(void* self, const char* commitString);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#attributes)
///
/// @param self QInputMethodEvent*
///
libqt_list /* of QInputMethodEvent__Attribute* */ q_inputmethodevent_attributes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#preeditString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QInputMethodEvent*
///
const char* q_inputmethodevent_preedit_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#commitString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QInputMethodEvent*
///
const char* q_inputmethodevent_commit_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#replacementStart)
///
/// @param self QInputMethodEvent*
///
int32_t q_inputmethodevent_replacement_start(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#replacementLength)
///
/// @param self QInputMethodEvent*
///
int32_t q_inputmethodevent_replacement_length(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#setCommitString)
///
/// @param self QInputMethodEvent*
/// @param commitString const char*
/// @param replaceFrom int
///
void q_inputmethodevent_set_commit_string2(void* self, const char* commitString, int replaceFrom);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#setCommitString)
///
/// @param self QInputMethodEvent*
/// @param commitString const char*
/// @param replaceFrom int
/// @param replaceLength int
///
void q_inputmethodevent_set_commit_string3(void* self, const char* commitString, int replaceFrom, int replaceLength);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QInputMethodEvent*
///
/// @return enum QEvent__Type
///
int32_t q_inputmethodevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QInputMethodEvent*
///
bool q_inputmethodevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QInputMethodEvent*
///
bool q_inputmethodevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QInputMethodEvent*
///
void q_inputmethodevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QInputMethodEvent*
///
void q_inputmethodevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QInputMethodEvent*
///
bool q_inputmethodevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QInputMethodEvent*
///
bool q_inputmethodevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QInputMethodEvent*
///
bool q_inputmethodevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_inputmethodevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_inputmethodevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputMethodEvent*
/// @param accepted bool
///
void q_inputmethodevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputMethodEvent*
/// @param accepted bool
///
void q_inputmethodevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputMethodEvent*
/// @param callback void func(QInputMethodEvent* self, bool accepted)
///
void q_inputmethodevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#dtor.QInputMethodEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QInputMethodEvent*
///
void q_inputmethodevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html)

/// q_inputmethodqueryevent_new constructs a new QInputMethodQueryEvent object.
///
/// @param queries flag of enum Qt__InputMethodQuery
///
QInputMethodQueryEvent* q_inputmethodqueryevent_new(int64_t queries);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#clone)
///
/// @param self QInputMethodQueryEvent*
///
QInputMethodQueryEvent* q_inputmethodqueryevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QInputMethodQueryEvent*
/// @param callback QInputMethodQueryEvent* func()
///
void q_inputmethodqueryevent_on_clone(void* self, QInputMethodQueryEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#clone)
///
/// Base class method implementation
///
/// @param self QInputMethodQueryEvent*
///
QInputMethodQueryEvent* q_inputmethodqueryevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#queries)
///
/// @param self QInputMethodQueryEvent*
///
/// @return flag of enum Qt__InputMethodQuery
///
int64_t q_inputmethodqueryevent_queries(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#setValue)
///
/// @param self QInputMethodQueryEvent*
/// @param query enum Qt__InputMethodQuery
/// @param value QVariant*
///
void q_inputmethodqueryevent_set_value(void* self, int64_t query, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#value)
///
/// @param self QInputMethodQueryEvent*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_inputmethodqueryevent_value(void* self, int64_t query);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QInputMethodQueryEvent*
///
/// @return enum QEvent__Type
///
int32_t q_inputmethodqueryevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QInputMethodQueryEvent*
///
bool q_inputmethodqueryevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QInputMethodQueryEvent*
///
bool q_inputmethodqueryevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QInputMethodQueryEvent*
///
void q_inputmethodqueryevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QInputMethodQueryEvent*
///
void q_inputmethodqueryevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QInputMethodQueryEvent*
///
bool q_inputmethodqueryevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QInputMethodQueryEvent*
///
bool q_inputmethodqueryevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QInputMethodQueryEvent*
///
bool q_inputmethodqueryevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_inputmethodqueryevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_inputmethodqueryevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputMethodQueryEvent*
/// @param accepted bool
///
void q_inputmethodqueryevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputMethodQueryEvent*
/// @param accepted bool
///
void q_inputmethodqueryevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputMethodQueryEvent*
/// @param callback void func(QInputMethodQueryEvent* self, bool accepted)
///
void q_inputmethodqueryevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#dtor.QInputMethodQueryEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QInputMethodQueryEvent*
///
void q_inputmethodqueryevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html)

/// q_dropevent_new constructs a new QDropEvent object.
///
/// @param pos QPointF*
/// @param actions flag of enum Qt__DropAction
/// @param data QMimeData*
/// @param buttons flag of enum Qt__MouseButton
/// @param modifiers flag of enum Qt__KeyboardModifier
///
QDropEvent* q_dropevent_new(void* pos, int32_t actions, void* data, int64_t buttons, int64_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html)

/// q_dropevent_new2 constructs a new QDropEvent object.
///
/// @param pos QPointF*
/// @param actions flag of enum Qt__DropAction
/// @param data QMimeData*
/// @param buttons flag of enum Qt__MouseButton
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param type enum QEvent__Type
///
QDropEvent* q_dropevent_new2(void* pos, int32_t actions, void* data, int64_t buttons, int64_t modifiers, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#clone)
///
/// @param self QDropEvent*
///
QDropEvent* q_dropevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QDropEvent*
/// @param callback QDropEvent* func()
///
void q_dropevent_on_clone(void* self, QDropEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#clone)
///
/// Base class method implementation
///
/// @param self QDropEvent*
///
QDropEvent* q_dropevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#pos)
///
/// @param self QDropEvent*
///
QPoint* q_dropevent_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#posF)
///
/// @param self QDropEvent*
///
QPointF* q_dropevent_pos_f(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#mouseButtons)
///
/// @param self QDropEvent*
///
/// @return flag of enum Qt__MouseButton
///
int64_t q_dropevent_mouse_buttons(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#keyboardModifiers)
///
/// @param self QDropEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int64_t q_dropevent_keyboard_modifiers(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#position)
///
/// @param self QDropEvent*
///
QPointF* q_dropevent_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#buttons)
///
/// @param self QDropEvent*
///
/// @return flag of enum Qt__MouseButton
///
int64_t q_dropevent_buttons(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#modifiers)
///
/// @param self QDropEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int64_t q_dropevent_modifiers(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#possibleActions)
///
/// @param self QDropEvent*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_dropevent_possible_actions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#proposedAction)
///
/// @param self QDropEvent*
///
/// @return enum Qt__DropAction
///
int32_t q_dropevent_proposed_action(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#acceptProposedAction)
///
/// @param self QDropEvent*
///
void q_dropevent_accept_proposed_action(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#dropAction)
///
/// @param self QDropEvent*
///
/// @return enum Qt__DropAction
///
int32_t q_dropevent_drop_action(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#setDropAction)
///
/// @param self QDropEvent*
/// @param action enum Qt__DropAction
///
void q_dropevent_set_drop_action(void* self, int32_t action);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#source)
///
/// @param self QDropEvent*
///
QObject* q_dropevent_source(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#mimeData)
///
/// @param self QDropEvent*
///
const QMimeData* q_dropevent_mime_data(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QDropEvent*
///
/// @return enum QEvent__Type
///
int32_t q_dropevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QDropEvent*
///
bool q_dropevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QDropEvent*
///
bool q_dropevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QDropEvent*
///
void q_dropevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QDropEvent*
///
void q_dropevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QDropEvent*
///
bool q_dropevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QDropEvent*
///
bool q_dropevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QDropEvent*
///
bool q_dropevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_dropevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_dropevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDropEvent*
/// @param accepted bool
///
void q_dropevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDropEvent*
/// @param accepted bool
///
void q_dropevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDropEvent*
/// @param callback void func(QDropEvent* self, bool accepted)
///
void q_dropevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#dtor.QDropEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QDropEvent*
///
void q_dropevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html)

/// q_dragmoveevent_new constructs a new QDragMoveEvent object.
///
/// @param pos QPoint*
/// @param actions flag of enum Qt__DropAction
/// @param data QMimeData*
/// @param buttons flag of enum Qt__MouseButton
/// @param modifiers flag of enum Qt__KeyboardModifier
///
QDragMoveEvent* q_dragmoveevent_new(void* pos, int32_t actions, void* data, int64_t buttons, int64_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html)

/// q_dragmoveevent_new2 constructs a new QDragMoveEvent object.
///
/// @param pos QPoint*
/// @param actions flag of enum Qt__DropAction
/// @param data QMimeData*
/// @param buttons flag of enum Qt__MouseButton
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param type enum QEvent__Type
///
QDragMoveEvent* q_dragmoveevent_new2(void* pos, int32_t actions, void* data, int64_t buttons, int64_t modifiers, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#clone)
///
/// @param self QDragMoveEvent*
///
QDragMoveEvent* q_dragmoveevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QDragMoveEvent*
/// @param callback QDragMoveEvent* func()
///
void q_dragmoveevent_on_clone(void* self, QDragMoveEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#clone)
///
/// Base class method implementation
///
/// @param self QDragMoveEvent*
///
QDragMoveEvent* q_dragmoveevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#answerRect)
///
/// @param self QDragMoveEvent*
///
QRect* q_dragmoveevent_answer_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#accept)
///
/// @param self QDragMoveEvent*
///
void q_dragmoveevent_accept(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#ignore)
///
/// @param self QDragMoveEvent*
///
void q_dragmoveevent_ignore(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#accept)
///
/// @param self QDragMoveEvent*
/// @param r QRect*
///
void q_dragmoveevent_accept2(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#ignore)
///
/// @param self QDragMoveEvent*
/// @param r QRect*
///
void q_dragmoveevent_ignore2(void* self, void* r);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#pos)
///
/// @param self QDragMoveEvent*
///
QPoint* q_dragmoveevent_pos(void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#posF)
///
/// @param self QDragMoveEvent*
///
QPointF* q_dragmoveevent_pos_f(void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#mouseButtons)
///
/// @param self QDragMoveEvent*
///
/// @return flag of enum Qt__MouseButton
///
int64_t q_dragmoveevent_mouse_buttons(void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#keyboardModifiers)
///
/// @param self QDragMoveEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int64_t q_dragmoveevent_keyboard_modifiers(void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#position)
///
/// @param self QDragMoveEvent*
///
QPointF* q_dragmoveevent_position(void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#buttons)
///
/// @param self QDragMoveEvent*
///
/// @return flag of enum Qt__MouseButton
///
int64_t q_dragmoveevent_buttons(void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#modifiers)
///
/// @param self QDragMoveEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int64_t q_dragmoveevent_modifiers(void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#possibleActions)
///
/// @param self QDragMoveEvent*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_dragmoveevent_possible_actions(void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#proposedAction)
///
/// @param self QDragMoveEvent*
///
/// @return enum Qt__DropAction
///
int32_t q_dragmoveevent_proposed_action(void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#acceptProposedAction)
///
/// @param self QDragMoveEvent*
///
void q_dragmoveevent_accept_proposed_action(void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#dropAction)
///
/// @param self QDragMoveEvent*
///
/// @return enum Qt__DropAction
///
int32_t q_dragmoveevent_drop_action(void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#setDropAction)
///
/// @param self QDragMoveEvent*
/// @param action enum Qt__DropAction
///
void q_dragmoveevent_set_drop_action(void* self, int32_t action);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#source)
///
/// @param self QDragMoveEvent*
///
QObject* q_dragmoveevent_source(void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#mimeData)
///
/// @param self QDragMoveEvent*
///
const QMimeData* q_dragmoveevent_mime_data(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QDragMoveEvent*
///
/// @return enum QEvent__Type
///
int32_t q_dragmoveevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QDragMoveEvent*
///
bool q_dragmoveevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QDragMoveEvent*
///
bool q_dragmoveevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QDragMoveEvent*
///
bool q_dragmoveevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QDragMoveEvent*
///
bool q_dragmoveevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QDragMoveEvent*
///
bool q_dragmoveevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_dragmoveevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_dragmoveevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDragMoveEvent*
/// @param accepted bool
///
void q_dragmoveevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDragMoveEvent*
/// @param accepted bool
///
void q_dragmoveevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDragMoveEvent*
/// @param callback void func(QDragMoveEvent* self, bool accepted)
///
void q_dragmoveevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#dtor.QDragMoveEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QDragMoveEvent*
///
void q_dragmoveevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdragenterevent.html)

/// q_dragenterevent_new constructs a new QDragEnterEvent object.
///
/// @param pos QPoint*
/// @param actions flag of enum Qt__DropAction
/// @param data QMimeData*
/// @param buttons flag of enum Qt__MouseButton
/// @param modifiers flag of enum Qt__KeyboardModifier
///
QDragEnterEvent* q_dragenterevent_new(void* pos, int32_t actions, void* data, int64_t buttons, int64_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qdragenterevent.html#clone)
///
/// @param self QDragEnterEvent*
///
QDragEnterEvent* q_dragenterevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdragenterevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QDragEnterEvent*
/// @param callback QDragEnterEvent* func()
///
void q_dragenterevent_on_clone(void* self, QDragEnterEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdragenterevent.html#clone)
///
/// Base class method implementation
///
/// @param self QDragEnterEvent*
///
QDragEnterEvent* q_dragenterevent_qbase_clone(void* self);

/// Inherited from QDragMoveEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#answerRect)
///
/// @param self QDragEnterEvent*
///
QRect* q_dragenterevent_answer_rect(void* self);

/// Inherited from QDragMoveEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#accept)
///
/// @param self QDragEnterEvent*
///
void q_dragenterevent_accept(void* self);

/// Inherited from QDragMoveEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#ignore)
///
/// @param self QDragEnterEvent*
///
void q_dragenterevent_ignore(void* self);

/// Inherited from QDragMoveEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#accept)
///
/// @param self QDragEnterEvent*
/// @param r QRect*
///
void q_dragenterevent_accept2(void* self, void* r);

/// Inherited from QDragMoveEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#ignore)
///
/// @param self QDragEnterEvent*
/// @param r QRect*
///
void q_dragenterevent_ignore2(void* self, void* r);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#pos)
///
/// @param self QDragEnterEvent*
///
QPoint* q_dragenterevent_pos(void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#posF)
///
/// @param self QDragEnterEvent*
///
QPointF* q_dragenterevent_pos_f(void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#mouseButtons)
///
/// @param self QDragEnterEvent*
///
/// @return flag of enum Qt__MouseButton
///
int64_t q_dragenterevent_mouse_buttons(void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#keyboardModifiers)
///
/// @param self QDragEnterEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int64_t q_dragenterevent_keyboard_modifiers(void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#position)
///
/// @param self QDragEnterEvent*
///
QPointF* q_dragenterevent_position(void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#buttons)
///
/// @param self QDragEnterEvent*
///
/// @return flag of enum Qt__MouseButton
///
int64_t q_dragenterevent_buttons(void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#modifiers)
///
/// @param self QDragEnterEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int64_t q_dragenterevent_modifiers(void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#possibleActions)
///
/// @param self QDragEnterEvent*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_dragenterevent_possible_actions(void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#proposedAction)
///
/// @param self QDragEnterEvent*
///
/// @return enum Qt__DropAction
///
int32_t q_dragenterevent_proposed_action(void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#acceptProposedAction)
///
/// @param self QDragEnterEvent*
///
void q_dragenterevent_accept_proposed_action(void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#dropAction)
///
/// @param self QDragEnterEvent*
///
/// @return enum Qt__DropAction
///
int32_t q_dragenterevent_drop_action(void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#setDropAction)
///
/// @param self QDragEnterEvent*
/// @param action enum Qt__DropAction
///
void q_dragenterevent_set_drop_action(void* self, int32_t action);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#source)
///
/// @param self QDragEnterEvent*
///
QObject* q_dragenterevent_source(void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#mimeData)
///
/// @param self QDragEnterEvent*
///
const QMimeData* q_dragenterevent_mime_data(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QDragEnterEvent*
///
/// @return enum QEvent__Type
///
int32_t q_dragenterevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QDragEnterEvent*
///
bool q_dragenterevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QDragEnterEvent*
///
bool q_dragenterevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QDragEnterEvent*
///
bool q_dragenterevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QDragEnterEvent*
///
bool q_dragenterevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QDragEnterEvent*
///
bool q_dragenterevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_dragenterevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_dragenterevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDragEnterEvent*
/// @param accepted bool
///
void q_dragenterevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDragEnterEvent*
/// @param accepted bool
///
void q_dragenterevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDragEnterEvent*
/// @param callback void func(QDragEnterEvent* self, bool accepted)
///
void q_dragenterevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qdragenterevent.html#dtor.QDragEnterEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QDragEnterEvent*
///
void q_dragenterevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdragleaveevent.html)

/// q_dragleaveevent_new constructs a new QDragLeaveEvent object.
///
QDragLeaveEvent* q_dragleaveevent_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdragleaveevent.html#clone)
///
/// @param self QDragLeaveEvent*
///
QDragLeaveEvent* q_dragleaveevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdragleaveevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QDragLeaveEvent*
/// @param callback QDragLeaveEvent* func()
///
void q_dragleaveevent_on_clone(void* self, QDragLeaveEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdragleaveevent.html#clone)
///
/// Base class method implementation
///
/// @param self QDragLeaveEvent*
///
QDragLeaveEvent* q_dragleaveevent_qbase_clone(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QDragLeaveEvent*
///
/// @return enum QEvent__Type
///
int32_t q_dragleaveevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QDragLeaveEvent*
///
bool q_dragleaveevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QDragLeaveEvent*
///
bool q_dragleaveevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QDragLeaveEvent*
///
void q_dragleaveevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QDragLeaveEvent*
///
void q_dragleaveevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QDragLeaveEvent*
///
bool q_dragleaveevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QDragLeaveEvent*
///
bool q_dragleaveevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QDragLeaveEvent*
///
bool q_dragleaveevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_dragleaveevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_dragleaveevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDragLeaveEvent*
/// @param accepted bool
///
void q_dragleaveevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDragLeaveEvent*
/// @param accepted bool
///
void q_dragleaveevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDragLeaveEvent*
/// @param callback void func(QDragLeaveEvent* self, bool accepted)
///
void q_dragleaveevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qdragleaveevent.html#dtor.QDragLeaveEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QDragLeaveEvent*
///
void q_dragleaveevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html)

/// q_helpevent_new constructs a new QHelpEvent object.
///
/// @param type enum QEvent__Type
/// @param pos QPoint*
/// @param globalPos QPoint*
///
QHelpEvent* q_helpevent_new(int32_t type, void* pos, void* globalPos);

/// [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#clone)
///
/// @param self QHelpEvent*
///
QHelpEvent* q_helpevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QHelpEvent*
/// @param callback QHelpEvent* func()
///
void q_helpevent_on_clone(void* self, QHelpEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#clone)
///
/// Base class method implementation
///
/// @param self QHelpEvent*
///
QHelpEvent* q_helpevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#x)
///
/// @param self QHelpEvent*
///
int32_t q_helpevent_x(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#y)
///
/// @param self QHelpEvent*
///
int32_t q_helpevent_y(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#globalX)
///
/// @param self QHelpEvent*
///
int32_t q_helpevent_global_x(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#globalY)
///
/// @param self QHelpEvent*
///
int32_t q_helpevent_global_y(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#pos)
///
/// @param self QHelpEvent*
///
const QPoint* q_helpevent_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#globalPos)
///
/// @param self QHelpEvent*
///
const QPoint* q_helpevent_global_pos(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QHelpEvent*
///
/// @return enum QEvent__Type
///
int32_t q_helpevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QHelpEvent*
///
bool q_helpevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QHelpEvent*
///
bool q_helpevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QHelpEvent*
///
void q_helpevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QHelpEvent*
///
void q_helpevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QHelpEvent*
///
bool q_helpevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QHelpEvent*
///
bool q_helpevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QHelpEvent*
///
bool q_helpevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_helpevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_helpevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHelpEvent*
/// @param accepted bool
///
void q_helpevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHelpEvent*
/// @param accepted bool
///
void q_helpevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHelpEvent*
/// @param callback void func(QHelpEvent* self, bool accepted)
///
void q_helpevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#dtor.QHelpEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QHelpEvent*
///
void q_helpevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatustipevent.html)

/// q_statustipevent_new constructs a new QStatusTipEvent object.
///
/// @param tip const char*
///
QStatusTipEvent* q_statustipevent_new(const char* tip);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatustipevent.html#clone)
///
/// @param self QStatusTipEvent*
///
QStatusTipEvent* q_statustipevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatustipevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QStatusTipEvent*
/// @param callback QStatusTipEvent* func()
///
void q_statustipevent_on_clone(void* self, QStatusTipEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qstatustipevent.html#clone)
///
/// Base class method implementation
///
/// @param self QStatusTipEvent*
///
QStatusTipEvent* q_statustipevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatustipevent.html#tip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStatusTipEvent*
///
const char* q_statustipevent_tip(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QStatusTipEvent*
///
/// @return enum QEvent__Type
///
int32_t q_statustipevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QStatusTipEvent*
///
bool q_statustipevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QStatusTipEvent*
///
bool q_statustipevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QStatusTipEvent*
///
void q_statustipevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QStatusTipEvent*
///
void q_statustipevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QStatusTipEvent*
///
bool q_statustipevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QStatusTipEvent*
///
bool q_statustipevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QStatusTipEvent*
///
bool q_statustipevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_statustipevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_statustipevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStatusTipEvent*
/// @param accepted bool
///
void q_statustipevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStatusTipEvent*
/// @param accepted bool
///
void q_statustipevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStatusTipEvent*
/// @param callback void func(QStatusTipEvent* self, bool accepted)
///
void q_statustipevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qstatustipevent.html#dtor.QStatusTipEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QStatusTipEvent*
///
void q_statustipevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwhatsthisclickedevent.html)

/// q_whatsthisclickedevent_new constructs a new QWhatsThisClickedEvent object.
///
/// @param href const char*
///
QWhatsThisClickedEvent* q_whatsthisclickedevent_new(const char* href);

/// [Upstream resources](https://doc.qt.io/qt-6/qwhatsthisclickedevent.html#clone)
///
/// @param self QWhatsThisClickedEvent*
///
QWhatsThisClickedEvent* q_whatsthisclickedevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwhatsthisclickedevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QWhatsThisClickedEvent*
/// @param callback QWhatsThisClickedEvent* func()
///
void q_whatsthisclickedevent_on_clone(void* self, QWhatsThisClickedEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qwhatsthisclickedevent.html#clone)
///
/// Base class method implementation
///
/// @param self QWhatsThisClickedEvent*
///
QWhatsThisClickedEvent* q_whatsthisclickedevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwhatsthisclickedevent.html#href)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWhatsThisClickedEvent*
///
const char* q_whatsthisclickedevent_href(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QWhatsThisClickedEvent*
///
/// @return enum QEvent__Type
///
int32_t q_whatsthisclickedevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QWhatsThisClickedEvent*
///
bool q_whatsthisclickedevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QWhatsThisClickedEvent*
///
bool q_whatsthisclickedevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QWhatsThisClickedEvent*
///
void q_whatsthisclickedevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QWhatsThisClickedEvent*
///
void q_whatsthisclickedevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QWhatsThisClickedEvent*
///
bool q_whatsthisclickedevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QWhatsThisClickedEvent*
///
bool q_whatsthisclickedevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QWhatsThisClickedEvent*
///
bool q_whatsthisclickedevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_whatsthisclickedevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_whatsthisclickedevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWhatsThisClickedEvent*
/// @param accepted bool
///
void q_whatsthisclickedevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWhatsThisClickedEvent*
/// @param accepted bool
///
void q_whatsthisclickedevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWhatsThisClickedEvent*
/// @param callback void func(QWhatsThisClickedEvent* self, bool accepted)
///
void q_whatsthisclickedevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qwhatsthisclickedevent.html#dtor.QWhatsThisClickedEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QWhatsThisClickedEvent*
///
void q_whatsthisclickedevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qactionevent.html)

/// q_actionevent_new constructs a new QActionEvent object.
///
/// @param type int
/// @param action QAction*
///
QActionEvent* q_actionevent_new(int type, void* action);

/// [Upstream resources](https://doc.qt.io/qt-6/qactionevent.html)

/// q_actionevent_new2 constructs a new QActionEvent object.
///
/// @param type int
/// @param action QAction*
/// @param before QAction*
///
QActionEvent* q_actionevent_new2(int type, void* action, void* before);

/// [Upstream resources](https://doc.qt.io/qt-6/qactionevent.html#clone)
///
/// @param self QActionEvent*
///
QActionEvent* q_actionevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qactionevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QActionEvent*
/// @param callback QActionEvent* func()
///
void q_actionevent_on_clone(void* self, QActionEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qactionevent.html#clone)
///
/// Base class method implementation
///
/// @param self QActionEvent*
///
QActionEvent* q_actionevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qactionevent.html#action)
///
/// @param self QActionEvent*
///
QAction* q_actionevent_action(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qactionevent.html#before)
///
/// @param self QActionEvent*
///
QAction* q_actionevent_before(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QActionEvent*
///
/// @return enum QEvent__Type
///
int32_t q_actionevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QActionEvent*
///
bool q_actionevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QActionEvent*
///
bool q_actionevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QActionEvent*
///
void q_actionevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QActionEvent*
///
void q_actionevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QActionEvent*
///
bool q_actionevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QActionEvent*
///
bool q_actionevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QActionEvent*
///
bool q_actionevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_actionevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_actionevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QActionEvent*
/// @param accepted bool
///
void q_actionevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QActionEvent*
/// @param accepted bool
///
void q_actionevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QActionEvent*
/// @param callback void func(QActionEvent* self, bool accepted)
///
void q_actionevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qactionevent.html#dtor.QActionEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QActionEvent*
///
void q_actionevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html)

/// q_fileopenevent_new constructs a new QFileOpenEvent object.
///
/// @param file const char*
///
QFileOpenEvent* q_fileopenevent_new(const char* file);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html)

/// q_fileopenevent_new2 constructs a new QFileOpenEvent object.
///
/// @param url QUrl*
///
QFileOpenEvent* q_fileopenevent_new2(void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html#clone)
///
/// @param self QFileOpenEvent*
///
QFileOpenEvent* q_fileopenevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QFileOpenEvent*
/// @param callback QFileOpenEvent* func()
///
void q_fileopenevent_on_clone(void* self, QFileOpenEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html#clone)
///
/// Base class method implementation
///
/// @param self QFileOpenEvent*
///
QFileOpenEvent* q_fileopenevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html#file)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFileOpenEvent*
///
const char* q_fileopenevent_file(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html#url)
///
/// @param self QFileOpenEvent*
///
QUrl* q_fileopenevent_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html#openFile)
///
/// @param self QFileOpenEvent*
/// @param file QFile*
/// @param flags flag of enum QIODeviceBase__OpenModeFlag
///
bool q_fileopenevent_open_file(void* self, void* file, int32_t flags);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QFileOpenEvent*
///
/// @return enum QEvent__Type
///
int32_t q_fileopenevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QFileOpenEvent*
///
bool q_fileopenevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QFileOpenEvent*
///
bool q_fileopenevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QFileOpenEvent*
///
void q_fileopenevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QFileOpenEvent*
///
void q_fileopenevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QFileOpenEvent*
///
bool q_fileopenevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QFileOpenEvent*
///
bool q_fileopenevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QFileOpenEvent*
///
bool q_fileopenevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_fileopenevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_fileopenevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileOpenEvent*
/// @param accepted bool
///
void q_fileopenevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileOpenEvent*
/// @param accepted bool
///
void q_fileopenevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileOpenEvent*
/// @param callback void func(QFileOpenEvent* self, bool accepted)
///
void q_fileopenevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html#dtor.QFileOpenEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QFileOpenEvent*
///
void q_fileopenevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbarchangeevent.html)

/// q_toolbarchangeevent_new constructs a new QToolBarChangeEvent object.
///
/// @param t bool
///
QToolBarChangeEvent* q_toolbarchangeevent_new(bool t);

/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbarchangeevent.html#clone)
///
/// @param self QToolBarChangeEvent*
///
QToolBarChangeEvent* q_toolbarchangeevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbarchangeevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QToolBarChangeEvent*
/// @param callback QToolBarChangeEvent* func()
///
void q_toolbarchangeevent_on_clone(void* self, QToolBarChangeEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbarchangeevent.html#clone)
///
/// Base class method implementation
///
/// @param self QToolBarChangeEvent*
///
QToolBarChangeEvent* q_toolbarchangeevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbarchangeevent.html#toggle)
///
/// @param self QToolBarChangeEvent*
///
bool q_toolbarchangeevent_toggle(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QToolBarChangeEvent*
///
/// @return enum QEvent__Type
///
int32_t q_toolbarchangeevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QToolBarChangeEvent*
///
bool q_toolbarchangeevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QToolBarChangeEvent*
///
bool q_toolbarchangeevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QToolBarChangeEvent*
///
void q_toolbarchangeevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QToolBarChangeEvent*
///
void q_toolbarchangeevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QToolBarChangeEvent*
///
bool q_toolbarchangeevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QToolBarChangeEvent*
///
bool q_toolbarchangeevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QToolBarChangeEvent*
///
bool q_toolbarchangeevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_toolbarchangeevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_toolbarchangeevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QToolBarChangeEvent*
/// @param accepted bool
///
void q_toolbarchangeevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QToolBarChangeEvent*
/// @param accepted bool
///
void q_toolbarchangeevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QToolBarChangeEvent*
/// @param callback void func(QToolBarChangeEvent* self, bool accepted)
///
void q_toolbarchangeevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbarchangeevent.html#dtor.QToolBarChangeEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QToolBarChangeEvent*
///
void q_toolbarchangeevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html)

/// q_shortcutevent_new constructs a new QShortcutEvent object.
///
/// @param key QKeySequence*
/// @param id int
///
QShortcutEvent* q_shortcutevent_new(void* key, int id);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html)

/// q_shortcutevent_new2 constructs a new QShortcutEvent object.
///
/// @param key QKeySequence*
///
QShortcutEvent* q_shortcutevent_new2(void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html)

/// q_shortcutevent_new3 constructs a new QShortcutEvent object.
///
/// @param key QKeySequence*
/// @param id int
/// @param ambiguous bool
///
QShortcutEvent* q_shortcutevent_new3(void* key, int id, bool ambiguous);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html)

/// q_shortcutevent_new4 constructs a new QShortcutEvent object.
///
/// @param key QKeySequence*
/// @param shortcut QShortcut*
///
QShortcutEvent* q_shortcutevent_new4(void* key, void* shortcut);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html)

/// q_shortcutevent_new5 constructs a new QShortcutEvent object.
///
/// @param key QKeySequence*
/// @param shortcut QShortcut*
/// @param ambiguous bool
///
QShortcutEvent* q_shortcutevent_new5(void* key, void* shortcut, bool ambiguous);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html#clone)
///
/// @param self QShortcutEvent*
///
QShortcutEvent* q_shortcutevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QShortcutEvent*
/// @param callback QShortcutEvent* func()
///
void q_shortcutevent_on_clone(void* self, QShortcutEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html#clone)
///
/// Base class method implementation
///
/// @param self QShortcutEvent*
///
QShortcutEvent* q_shortcutevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html#key)
///
/// @param self QShortcutEvent*
///
const QKeySequence* q_shortcutevent_key(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html#shortcutId)
///
/// @param self QShortcutEvent*
///
int32_t q_shortcutevent_shortcut_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html#isAmbiguous)
///
/// @param self QShortcutEvent*
///
bool q_shortcutevent_is_ambiguous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QShortcutEvent*
///
/// @return enum QEvent__Type
///
int32_t q_shortcutevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QShortcutEvent*
///
bool q_shortcutevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QShortcutEvent*
///
bool q_shortcutevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QShortcutEvent*
///
void q_shortcutevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QShortcutEvent*
///
void q_shortcutevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QShortcutEvent*
///
bool q_shortcutevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QShortcutEvent*
///
bool q_shortcutevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QShortcutEvent*
///
bool q_shortcutevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_shortcutevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_shortcutevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QShortcutEvent*
/// @param accepted bool
///
void q_shortcutevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QShortcutEvent*
/// @param accepted bool
///
void q_shortcutevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QShortcutEvent*
/// @param callback void func(QShortcutEvent* self, bool accepted)
///
void q_shortcutevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html#dtor.QShortcutEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QShortcutEvent*
///
void q_shortcutevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowstatechangeevent.html)

/// q_windowstatechangeevent_new constructs a new QWindowStateChangeEvent object.
///
/// @param oldState flag of enum Qt__WindowState
///
QWindowStateChangeEvent* q_windowstatechangeevent_new(int32_t oldState);

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowstatechangeevent.html)

/// q_windowstatechangeevent_new2 constructs a new QWindowStateChangeEvent object.
///
/// @param oldState flag of enum Qt__WindowState
/// @param isOverride bool
///
QWindowStateChangeEvent* q_windowstatechangeevent_new2(int32_t oldState, bool isOverride);

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#clone)
///
/// @param self QWindowStateChangeEvent*
///
QWindowStateChangeEvent* q_windowstatechangeevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QWindowStateChangeEvent*
/// @param callback QWindowStateChangeEvent* func()
///
void q_windowstatechangeevent_on_clone(void* self, QWindowStateChangeEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#clone)
///
/// Base class method implementation
///
/// @param self QWindowStateChangeEvent*
///
QWindowStateChangeEvent* q_windowstatechangeevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#oldState)
///
/// @param self QWindowStateChangeEvent*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_windowstatechangeevent_old_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#isOverride)
///
/// @param self QWindowStateChangeEvent*
///
bool q_windowstatechangeevent_is_override(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QWindowStateChangeEvent*
///
/// @return enum QEvent__Type
///
int32_t q_windowstatechangeevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QWindowStateChangeEvent*
///
bool q_windowstatechangeevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QWindowStateChangeEvent*
///
bool q_windowstatechangeevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QWindowStateChangeEvent*
///
void q_windowstatechangeevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QWindowStateChangeEvent*
///
void q_windowstatechangeevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QWindowStateChangeEvent*
///
bool q_windowstatechangeevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QWindowStateChangeEvent*
///
bool q_windowstatechangeevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QWindowStateChangeEvent*
///
bool q_windowstatechangeevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_windowstatechangeevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_windowstatechangeevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWindowStateChangeEvent*
/// @param accepted bool
///
void q_windowstatechangeevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWindowStateChangeEvent*
/// @param accepted bool
///
void q_windowstatechangeevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWindowStateChangeEvent*
/// @param callback void func(QWindowStateChangeEvent* self, bool accepted)
///
void q_windowstatechangeevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#dtor.QWindowStateChangeEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QWindowStateChangeEvent*
///
void q_windowstatechangeevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html)

/// q_touchevent_new constructs a new QTouchEvent object.
///
/// @param eventType enum QEvent__Type
///
QTouchEvent* q_touchevent_new(int32_t eventType);

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html)

/// q_touchevent_new2 constructs a new QTouchEvent object.
///
/// @param eventType enum QEvent__Type
/// @param device QPointingDevice*
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param touchPointStates flag of enum QEventPoint__State
///
QTouchEvent* q_touchevent_new2(int32_t eventType, void* device, int64_t modifiers, uint8_t touchPointStates);

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html)

/// q_touchevent_new3 constructs a new QTouchEvent object.
///
/// @param eventType enum QEvent__Type
/// @param device QPointingDevice*
///
QTouchEvent* q_touchevent_new3(int32_t eventType, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html)

/// q_touchevent_new4 constructs a new QTouchEvent object.
///
/// @param eventType enum QEvent__Type
/// @param device QPointingDevice*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
QTouchEvent* q_touchevent_new4(int32_t eventType, void* device, int64_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html)

/// q_touchevent_new5 constructs a new QTouchEvent object.
///
/// @param eventType enum QEvent__Type
/// @param device QPointingDevice*
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param touchPoints libqt_list /* of QEventPoint* */
///
QTouchEvent* q_touchevent_new5(int32_t eventType, void* device, int64_t modifiers, libqt_list touchPoints);

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html)

/// q_touchevent_new6 constructs a new QTouchEvent object.
///
/// @param eventType enum QEvent__Type
/// @param device QPointingDevice*
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param touchPointStates flag of enum QEventPoint__State
/// @param touchPoints libqt_list /* of QEventPoint* */
///
QTouchEvent* q_touchevent_new6(int32_t eventType, void* device, int64_t modifiers, uint8_t touchPointStates, libqt_list touchPoints);

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#clone)
///
/// @param self QTouchEvent*
///
QTouchEvent* q_touchevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QTouchEvent*
/// @param callback QTouchEvent* func()
///
void q_touchevent_on_clone(void* self, QTouchEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#clone)
///
/// Base class method implementation
///
/// @param self QTouchEvent*
///
QTouchEvent* q_touchevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#target)
///
/// @param self QTouchEvent*
///
QObject* q_touchevent_target(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#touchPointStates)
///
/// @param self QTouchEvent*
///
/// @return flag of enum QEventPoint__State
///
uint8_t q_touchevent_touch_point_states(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#touchPoints)
///
/// @param self QTouchEvent*
///
libqt_list /* of QEventPoint* */ q_touchevent_touch_points(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isBeginEvent)
///
/// @param self QTouchEvent*
///
bool q_touchevent_is_begin_event(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isBeginEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTouchEvent*
/// @param callback bool func()
///
void q_touchevent_on_is_begin_event(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isBeginEvent)
///
/// Base class method implementation
///
/// @param self QTouchEvent*
///
bool q_touchevent_qbase_is_begin_event(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isUpdateEvent)
///
/// @param self QTouchEvent*
///
bool q_touchevent_is_update_event(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isUpdateEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTouchEvent*
/// @param callback bool func()
///
void q_touchevent_on_is_update_event(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isUpdateEvent)
///
/// Base class method implementation
///
/// @param self QTouchEvent*
///
bool q_touchevent_qbase_is_update_event(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isEndEvent)
///
/// @param self QTouchEvent*
///
bool q_touchevent_is_end_event(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isEndEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTouchEvent*
/// @param callback bool func()
///
void q_touchevent_on_is_end_event(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isEndEvent)
///
/// Base class method implementation
///
/// @param self QTouchEvent*
///
bool q_touchevent_qbase_is_end_event(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
///
/// @param self QTouchEvent*
///
const QPointingDevice* q_touchevent_pointing_device(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
///
/// @param self QTouchEvent*
///
/// @return enum QPointingDevice__PointerType
///
int32_t q_touchevent_pointer_type(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
///
/// @param self QTouchEvent*
///
int64_t q_touchevent_point_count(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
///
/// @param self QTouchEvent*
/// @param i int64_t
///
QEventPoint* q_touchevent_point(void* self, int64_t i);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
///
/// @param self QTouchEvent*
///
libqt_list /* of QEventPoint* */ q_touchevent_points(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
///
/// @param self QTouchEvent*
/// @param id int
///
QEventPoint* q_touchevent_point_by_id(void* self, int id);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
///
/// @param self QTouchEvent*
///
bool q_touchevent_all_points_grabbed(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
///
/// @param self QTouchEvent*
///
bool q_touchevent_all_points_accepted(void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
///
/// @param self QTouchEvent*
/// @param point QEventPoint*
///
QObject* q_touchevent_exclusive_grabber(void* self, void* point);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
///
/// @param self QTouchEvent*
/// @param point QEventPoint*
/// @param exclusiveGrabber QObject*
///
void q_touchevent_set_exclusive_grabber(void* self, void* point, void* exclusiveGrabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
///
/// @param self QTouchEvent*
/// @param point QEventPoint*
///
void q_touchevent_clear_passive_grabbers(void* self, void* point);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
///
/// @param self QTouchEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_touchevent_add_passive_grabber(void* self, void* point, void* grabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
///
/// @param self QTouchEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_touchevent_remove_passive_grabber(void* self, void* point, void* grabber);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// @param self QTouchEvent*
///
const QInputDevice* q_touchevent_device(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// @param self QTouchEvent*
///
/// @return enum QInputDevice__DeviceType
///
int32_t q_touchevent_device_type(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
///
/// @param self QTouchEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int64_t q_touchevent_modifiers(void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// @param self QTouchEvent*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
void q_touchevent_set_modifiers(void* self, int64_t modifiers);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// @param self QTouchEvent*
///
uint64_t q_touchevent_timestamp(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QTouchEvent*
///
/// @return enum QEvent__Type
///
int32_t q_touchevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QTouchEvent*
///
bool q_touchevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QTouchEvent*
///
bool q_touchevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QTouchEvent*
///
void q_touchevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QTouchEvent*
///
void q_touchevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QTouchEvent*
///
bool q_touchevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QTouchEvent*
///
bool q_touchevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QTouchEvent*
///
bool q_touchevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_touchevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_touchevent_register_event_type1(int hint);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTouchEvent*
/// @param timestamp uint64_t
///
void q_touchevent_set_timestamp(void* self, uint64_t timestamp);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTouchEvent*
/// @param timestamp uint64_t
///
void q_touchevent_qbase_set_timestamp(void* self, uint64_t timestamp);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setTimestamp)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTouchEvent*
/// @param callback void func(QTouchEvent* self, uint64_t timestamp)
///
void q_touchevent_on_set_timestamp(void* self, void (*callback)(void*, uint64_t));

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTouchEvent*
/// @param accepted bool
///
void q_touchevent_set_accepted(void* self, bool accepted);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTouchEvent*
/// @param accepted bool
///
void q_touchevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTouchEvent*
/// @param callback void func(QTouchEvent* self, bool accepted)
///
void q_touchevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#dtor.QTouchEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QTouchEvent*
///
void q_touchevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html)

/// q_scrollprepareevent_new constructs a new QScrollPrepareEvent object.
///
/// @param startPos QPointF*
///
QScrollPrepareEvent* q_scrollprepareevent_new(void* startPos);

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#clone)
///
/// @param self QScrollPrepareEvent*
///
QScrollPrepareEvent* q_scrollprepareevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QScrollPrepareEvent*
/// @param callback QScrollPrepareEvent* func()
///
void q_scrollprepareevent_on_clone(void* self, QScrollPrepareEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#clone)
///
/// Base class method implementation
///
/// @param self QScrollPrepareEvent*
///
QScrollPrepareEvent* q_scrollprepareevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#startPos)
///
/// @param self QScrollPrepareEvent*
///
QPointF* q_scrollprepareevent_start_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#viewportSize)
///
/// @param self QScrollPrepareEvent*
///
QSizeF* q_scrollprepareevent_viewport_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#contentPosRange)
///
/// @param self QScrollPrepareEvent*
///
QRectF* q_scrollprepareevent_content_pos_range(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#contentPos)
///
/// @param self QScrollPrepareEvent*
///
QPointF* q_scrollprepareevent_content_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#setViewportSize)
///
/// @param self QScrollPrepareEvent*
/// @param size QSizeF*
///
void q_scrollprepareevent_set_viewport_size(void* self, void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#setContentPosRange)
///
/// @param self QScrollPrepareEvent*
/// @param rect QRectF*
///
void q_scrollprepareevent_set_content_pos_range(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#setContentPos)
///
/// @param self QScrollPrepareEvent*
/// @param pos QPointF*
///
void q_scrollprepareevent_set_content_pos(void* self, void* pos);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QScrollPrepareEvent*
///
/// @return enum QEvent__Type
///
int32_t q_scrollprepareevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QScrollPrepareEvent*
///
bool q_scrollprepareevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QScrollPrepareEvent*
///
bool q_scrollprepareevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QScrollPrepareEvent*
///
void q_scrollprepareevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QScrollPrepareEvent*
///
void q_scrollprepareevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QScrollPrepareEvent*
///
bool q_scrollprepareevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QScrollPrepareEvent*
///
bool q_scrollprepareevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QScrollPrepareEvent*
///
bool q_scrollprepareevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_scrollprepareevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_scrollprepareevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScrollPrepareEvent*
/// @param accepted bool
///
void q_scrollprepareevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScrollPrepareEvent*
/// @param accepted bool
///
void q_scrollprepareevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScrollPrepareEvent*
/// @param callback void func(QScrollPrepareEvent* self, bool accepted)
///
void q_scrollprepareevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#dtor.QScrollPrepareEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QScrollPrepareEvent*
///
void q_scrollprepareevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html)

/// q_scrollevent_new constructs a new QScrollEvent object.
///
/// @param contentPos QPointF*
/// @param overshoot QPointF*
/// @param scrollState enum QScrollEvent__ScrollState
///
QScrollEvent* q_scrollevent_new(void* contentPos, void* overshoot, int32_t scrollState);

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html#clone)
///
/// @param self QScrollEvent*
///
QScrollEvent* q_scrollevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QScrollEvent*
/// @param callback QScrollEvent* func()
///
void q_scrollevent_on_clone(void* self, QScrollEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html#clone)
///
/// Base class method implementation
///
/// @param self QScrollEvent*
///
QScrollEvent* q_scrollevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html#contentPos)
///
/// @param self QScrollEvent*
///
QPointF* q_scrollevent_content_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html#overshootDistance)
///
/// @param self QScrollEvent*
///
QPointF* q_scrollevent_overshoot_distance(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html#scrollState)
///
/// @param self QScrollEvent*
///
/// @return enum QScrollEvent__ScrollState
///
int32_t q_scrollevent_scroll_state(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QScrollEvent*
///
/// @return enum QEvent__Type
///
int32_t q_scrollevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QScrollEvent*
///
bool q_scrollevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QScrollEvent*
///
bool q_scrollevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QScrollEvent*
///
void q_scrollevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QScrollEvent*
///
void q_scrollevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QScrollEvent*
///
bool q_scrollevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QScrollEvent*
///
bool q_scrollevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QScrollEvent*
///
bool q_scrollevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_scrollevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_scrollevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScrollEvent*
/// @param accepted bool
///
void q_scrollevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScrollEvent*
/// @param accepted bool
///
void q_scrollevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScrollEvent*
/// @param callback void func(QScrollEvent* self, bool accepted)
///
void q_scrollevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html#dtor.QScrollEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QScrollEvent*
///
void q_scrollevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html)

/// q_screenorientationchangeevent_new constructs a new QScreenOrientationChangeEvent object.
///
/// @param screen QScreen*
/// @param orientation enum Qt__ScreenOrientation
///
QScreenOrientationChangeEvent* q_screenorientationchangeevent_new(void* screen, int32_t orientation);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#clone)
///
/// @param self QScreenOrientationChangeEvent*
///
QScreenOrientationChangeEvent* q_screenorientationchangeevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QScreenOrientationChangeEvent*
/// @param callback QScreenOrientationChangeEvent* func()
///
void q_screenorientationchangeevent_on_clone(void* self, QScreenOrientationChangeEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#clone)
///
/// Base class method implementation
///
/// @param self QScreenOrientationChangeEvent*
///
QScreenOrientationChangeEvent* q_screenorientationchangeevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#screen)
///
/// @param self QScreenOrientationChangeEvent*
///
QScreen* q_screenorientationchangeevent_screen(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#orientation)
///
/// @param self QScreenOrientationChangeEvent*
///
/// @return enum Qt__ScreenOrientation
///
int32_t q_screenorientationchangeevent_orientation(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QScreenOrientationChangeEvent*
///
/// @return enum QEvent__Type
///
int32_t q_screenorientationchangeevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QScreenOrientationChangeEvent*
///
bool q_screenorientationchangeevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QScreenOrientationChangeEvent*
///
bool q_screenorientationchangeevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QScreenOrientationChangeEvent*
///
void q_screenorientationchangeevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QScreenOrientationChangeEvent*
///
void q_screenorientationchangeevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QScreenOrientationChangeEvent*
///
bool q_screenorientationchangeevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QScreenOrientationChangeEvent*
///
bool q_screenorientationchangeevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QScreenOrientationChangeEvent*
///
bool q_screenorientationchangeevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_screenorientationchangeevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_screenorientationchangeevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QScreenOrientationChangeEvent*
/// @param accepted bool
///
void q_screenorientationchangeevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QScreenOrientationChangeEvent*
/// @param accepted bool
///
void q_screenorientationchangeevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QScreenOrientationChangeEvent*
/// @param callback void func(QScreenOrientationChangeEvent* self, bool accepted)
///
void q_screenorientationchangeevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#dtor.QScreenOrientationChangeEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QScreenOrientationChangeEvent*
///
void q_screenorientationchangeevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplicationstatechangeevent.html)

/// q_applicationstatechangeevent_new constructs a new QApplicationStateChangeEvent object.
///
/// @param state enum Qt__ApplicationState
///
QApplicationStateChangeEvent* q_applicationstatechangeevent_new(int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplicationstatechangeevent.html#clone)
///
/// @param self QApplicationStateChangeEvent*
///
QApplicationStateChangeEvent* q_applicationstatechangeevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplicationstatechangeevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QApplicationStateChangeEvent*
/// @param callback QApplicationStateChangeEvent* func()
///
void q_applicationstatechangeevent_on_clone(void* self, QApplicationStateChangeEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qapplicationstatechangeevent.html#clone)
///
/// Base class method implementation
///
/// @param self QApplicationStateChangeEvent*
///
QApplicationStateChangeEvent* q_applicationstatechangeevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplicationstatechangeevent.html#applicationState)
///
/// @param self QApplicationStateChangeEvent*
///
/// @return enum Qt__ApplicationState
///
int32_t q_applicationstatechangeevent_application_state(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QApplicationStateChangeEvent*
///
/// @return enum QEvent__Type
///
int32_t q_applicationstatechangeevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QApplicationStateChangeEvent*
///
bool q_applicationstatechangeevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QApplicationStateChangeEvent*
///
bool q_applicationstatechangeevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QApplicationStateChangeEvent*
///
void q_applicationstatechangeevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QApplicationStateChangeEvent*
///
void q_applicationstatechangeevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QApplicationStateChangeEvent*
///
bool q_applicationstatechangeevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QApplicationStateChangeEvent*
///
bool q_applicationstatechangeevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QApplicationStateChangeEvent*
///
bool q_applicationstatechangeevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_applicationstatechangeevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_applicationstatechangeevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QApplicationStateChangeEvent*
/// @param accepted bool
///
void q_applicationstatechangeevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QApplicationStateChangeEvent*
/// @param accepted bool
///
void q_applicationstatechangeevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QApplicationStateChangeEvent*
/// @param callback void func(QApplicationStateChangeEvent* self, bool accepted)
///
void q_applicationstatechangeevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qapplicationstatechangeevent.html#dtor.QApplicationStateChangeEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QApplicationStateChangeEvent*
///
void q_applicationstatechangeevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchildwindowevent.html)

/// q_childwindowevent_new constructs a new QChildWindowEvent object.
///
/// @param type enum QEvent__Type
/// @param childWindow QWindow*
///
QChildWindowEvent* q_childwindowevent_new(int32_t type, void* childWindow);

/// [Upstream resources](https://doc.qt.io/qt-6/qchildwindowevent.html#clone)
///
/// @param self QChildWindowEvent*
///
QChildWindowEvent* q_childwindowevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchildwindowevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QChildWindowEvent*
/// @param callback QChildWindowEvent* func()
///
void q_childwindowevent_on_clone(void* self, QChildWindowEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qchildwindowevent.html#clone)
///
/// Base class method implementation
///
/// @param self QChildWindowEvent*
///
QChildWindowEvent* q_childwindowevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchildwindowevent.html#child)
///
/// @param self QChildWindowEvent*
///
QWindow* q_childwindowevent_child(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QChildWindowEvent*
///
/// @return enum QEvent__Type
///
int32_t q_childwindowevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QChildWindowEvent*
///
bool q_childwindowevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QChildWindowEvent*
///
bool q_childwindowevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QChildWindowEvent*
///
void q_childwindowevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QChildWindowEvent*
///
void q_childwindowevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QChildWindowEvent*
///
bool q_childwindowevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QChildWindowEvent*
///
bool q_childwindowevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QChildWindowEvent*
///
bool q_childwindowevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_childwindowevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_childwindowevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChildWindowEvent*
/// @param accepted bool
///
void q_childwindowevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChildWindowEvent*
/// @param accepted bool
///
void q_childwindowevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChildWindowEvent*
/// @param callback void func(QChildWindowEvent* self, bool accepted)
///
void q_childwindowevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qchildwindowevent.html#dtor.QChildWindowEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QChildWindowEvent*
///
void q_childwindowevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html)

/// q_inputmethodevent__attribute_new constructs a new QInputMethodEvent::Attribute object.
///
/// @param typ enum QInputMethodEvent__AttributeType
/// @param s int
/// @param l int
/// @param val QVariant*
///
QInputMethodEvent__Attribute* q_inputmethodevent__attribute_new(int32_t typ, int s, int l, void* val);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html)

/// q_inputmethodevent__attribute_new2 constructs a new QInputMethodEvent::Attribute object.
///
/// @param typ enum QInputMethodEvent__AttributeType
/// @param s int
/// @param l int
///
QInputMethodEvent__Attribute* q_inputmethodevent__attribute_new2(int32_t typ, int s, int l);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#type-var)
///
/// @param self QInputMethodEvent__Attribute*
///
/// @return enum QInputMethodEvent__AttributeType
///
int32_t q_inputmethodevent__attribute_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#type-var)
///
/// @param self QInputMethodEvent__Attribute*
/// @param type enum QInputMethodEvent__AttributeType
///
void q_inputmethodevent__attribute_set_type(void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#start-var)
///
/// @param self QInputMethodEvent__Attribute*
///
int32_t q_inputmethodevent__attribute_start(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#start-var)
///
/// @param self QInputMethodEvent__Attribute*
/// @param start int
///
void q_inputmethodevent__attribute_set_start(void* self, int start);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#length-var)
///
/// @param self QInputMethodEvent__Attribute*
///
int32_t q_inputmethodevent__attribute_length(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#length-var)
///
/// @param self QInputMethodEvent__Attribute*
/// @param length int
///
void q_inputmethodevent__attribute_set_length(void* self, int length);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#value-var)
///
/// @param self QInputMethodEvent__Attribute*
///
QVariant* q_inputmethodevent__attribute_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#value-var)
///
/// @param self QInputMethodEvent__Attribute*
/// @param value QVariant*
///
void q_inputmethodevent__attribute_set_value(void* self, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#operator-eq)
///
/// @param self QInputMethodEvent__Attribute*
/// @param param1 QInputMethodEvent__Attribute*
///
void q_inputmethodevent__attribute_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self QInputMethodEvent__Attribute*
///
void q_inputmethodevent__attribute_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#public-types)

typedef enum {
    QWHEELEVENT__DEFAULTDELTASPERSTEP = 120
} QWheelEvent__;

/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#public-types)

typedef enum {
    QPLATFORMSURFACEEVENT_SURFACEEVENTTYPE_SURFACECREATED = 0,
    QPLATFORMSURFACEEVENT_SURFACEEVENTTYPE_SURFACEABOUTTOBEDESTROYED = 1
} QPlatformSurfaceEvent__SurfaceEventType;

/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#public-types)

typedef enum {
    QCONTEXTMENUEVENT_REASON_MOUSE = 0,
    QCONTEXTMENUEVENT_REASON_KEYBOARD = 1,
    QCONTEXTMENUEVENT_REASON_OTHER = 2
} QContextMenuEvent__Reason;

/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#public-types)

typedef enum {
    QINPUTMETHODEVENT_ATTRIBUTETYPE_TEXTFORMAT = 0,
    QINPUTMETHODEVENT_ATTRIBUTETYPE_CURSOR = 1,
    QINPUTMETHODEVENT_ATTRIBUTETYPE_LANGUAGE = 2,
    QINPUTMETHODEVENT_ATTRIBUTETYPE_RUBY = 3,
    QINPUTMETHODEVENT_ATTRIBUTETYPE_SELECTION = 4
} QInputMethodEvent__AttributeType;

/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#public-types)

typedef enum {
    QSCROLLEVENT_SCROLLSTATE_SCROLLSTARTED = 0,
    QSCROLLEVENT_SCROLLSTATE_SCROLLUPDATED = 1,
    QSCROLLEVENT_SCROLLSTATE_SCROLLFINISHED = 2
} QScrollEvent__ScrollState;

#endif
