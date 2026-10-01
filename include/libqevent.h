#pragma once
#ifndef LIBQEVENT_H
#define LIBQEVENT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html)

/// q_inputevent_new constructs a new QInputEvent object.
///
/// @param type enum QEvent__Type
/// @param m_dev QInputDevice*
///
QInputEvent* q_inputevent_new(int32_t type, const void* m_dev);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html)

/// q_inputevent_new2 constructs a new QInputEvent object.
///
/// @param type enum QEvent__Type
/// @param m_dev QInputDevice*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
QInputEvent* q_inputevent_new2(int32_t type, const void* m_dev, int32_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#clone)
///
/// @param self const QInputEvent*
///
QInputEvent* q_inputevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QInputEvent*
/// @param callback QInputEvent* func(const QInputEvent* self)
///
void q_inputevent_on_clone(void* self, QInputEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QInputEvent*
///
QInputEvent* q_inputevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// @param self const QInputEvent*
///
const QInputDevice* q_inputevent_device(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// @param self const QInputEvent*
///
/// @return enum QInputDevice__DeviceType
///
int32_t q_inputevent_device_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
///
/// @param self const QInputEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int32_t q_inputevent_modifiers(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// @param self QInputEvent*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
void q_inputevent_set_modifiers(void* self, int32_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// @param self const QInputEvent*
///
uint64_t q_inputevent_timestamp(const void* self);

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
void q_inputevent_super_set_timestamp(void* self, uint64_t timestamp);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QInputEvent*
///
/// @return enum QEvent__Type
///
int32_t q_inputevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QInputEvent*
///
bool q_inputevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QInputEvent*
///
bool q_inputevent_is_accepted(const void* self);

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
/// @param self const QInputEvent*
///
bool q_inputevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QInputEvent*
///
bool q_inputevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QInputEvent*
///
bool q_inputevent_is_single_point_event(const void* self);

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
void q_inputevent_super_set_accepted(void* self, bool accepted);

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
QPointerEvent* q_pointerevent_new(int32_t type, const void* dev);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html)

/// q_pointerevent_new2 constructs a new QPointerEvent object.
///
/// @param type enum QEvent__Type
/// @param dev QPointingDevice*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
QPointerEvent* q_pointerevent_new2(int32_t type, const void* dev, int32_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html)

/// q_pointerevent_new3 constructs a new QPointerEvent object.
///
/// @param type enum QEvent__Type
/// @param dev QPointingDevice*
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param points libqt_list of QEventPoint*
///
QPointerEvent* q_pointerevent_new3(int32_t type, const void* dev, int32_t modifiers, libqt_list points);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clone)
///
/// @param self const QPointerEvent*
///
QPointerEvent* q_pointerevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QPointerEvent*
/// @param callback QPointerEvent* func(const QPointerEvent* self)
///
void q_pointerevent_on_clone(void* self, QPointerEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QPointerEvent*
///
QPointerEvent* q_pointerevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
///
/// @param self const QPointerEvent*
///
const QPointingDevice* q_pointerevent_pointing_device(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
///
/// @param self const QPointerEvent*
///
/// @return enum QPointingDevice__PointerType
///
int32_t q_pointerevent_pointer_type(const void* self);

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
void q_pointerevent_super_set_timestamp(void* self, uint64_t timestamp);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
///
/// @param self const QPointerEvent*
///
intptr_t q_pointerevent_point_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
///
/// @param self QPointerEvent*
/// @param i intptr_t
///
QEventPoint* q_pointerevent_point(void* self, intptr_t i);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
///
/// @param self const QPointerEvent*
///
/// @return libqt_list of QEventPoint*
///
libqt_list q_pointerevent_points(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointById)
///
/// @param self QPointerEvent*
/// @param id int
///
QEventPoint* q_pointerevent_point_by_id(void* self, int id);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsGrabbed)
///
/// @param self const QPointerEvent*
///
bool q_pointerevent_all_points_grabbed(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isBeginEvent)
///
/// @param self const QPointerEvent*
///
bool q_pointerevent_is_begin_event(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isBeginEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPointerEvent*
/// @param callback bool func(const QPointerEvent* self)
///
void q_pointerevent_on_is_begin_event(void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isBeginEvent)
///
/// Base class method implementation
///
/// @param self const QPointerEvent*
///
bool q_pointerevent_super_is_begin_event(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isUpdateEvent)
///
/// @param self const QPointerEvent*
///
bool q_pointerevent_is_update_event(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isUpdateEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPointerEvent*
/// @param callback bool func(const QPointerEvent* self)
///
void q_pointerevent_on_is_update_event(void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isUpdateEvent)
///
/// Base class method implementation
///
/// @param self const QPointerEvent*
///
bool q_pointerevent_super_is_update_event(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isEndEvent)
///
/// @param self const QPointerEvent*
///
bool q_pointerevent_is_end_event(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isEndEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPointerEvent*
/// @param callback bool func(const QPointerEvent* self)
///
void q_pointerevent_on_is_end_event(void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#isEndEvent)
///
/// Base class method implementation
///
/// @param self const QPointerEvent*
///
bool q_pointerevent_super_is_end_event(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
///
/// @param self const QPointerEvent*
///
bool q_pointerevent_all_points_accepted(const void* self);

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
void q_pointerevent_super_set_accepted(void* self, bool accepted);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
///
/// @param self const QPointerEvent*
/// @param point QEventPoint*
///
QObject* q_pointerevent_exclusive_grabber(const void* self, const void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
///
/// @param self QPointerEvent*
/// @param point QEventPoint*
/// @param exclusiveGrabber QObject*
///
void q_pointerevent_set_exclusive_grabber(void* self, const void* point, void* exclusiveGrabber);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
///
/// @param self QPointerEvent*
/// @param point QEventPoint*
///
void q_pointerevent_clear_passive_grabbers(void* self, const void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
///
/// @param self QPointerEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_pointerevent_add_passive_grabber(void* self, const void* point, void* grabber);

/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
///
/// @param self QPointerEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_pointerevent_remove_passive_grabber(void* self, const void* point, void* grabber);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// @param self const QPointerEvent*
///
const QInputDevice* q_pointerevent_device(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// @param self const QPointerEvent*
///
/// @return enum QInputDevice__DeviceType
///
int32_t q_pointerevent_device_type(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
///
/// @param self const QPointerEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int32_t q_pointerevent_modifiers(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// @param self QPointerEvent*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
void q_pointerevent_set_modifiers(void* self, int32_t modifiers);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// @param self const QPointerEvent*
///
uint64_t q_pointerevent_timestamp(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QPointerEvent*
///
/// @return enum QEvent__Type
///
int32_t q_pointerevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QPointerEvent*
///
bool q_pointerevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QPointerEvent*
///
bool q_pointerevent_is_accepted(const void* self);

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
/// @param self const QPointerEvent*
///
bool q_pointerevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QPointerEvent*
///
bool q_pointerevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QPointerEvent*
///
bool q_pointerevent_is_single_point_event(const void* self);

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
/// @param self const QSinglePointEvent*
///
QSinglePointEvent* q_singlepointevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
///
/// @param self const QSinglePointEvent*
///
/// @return enum Qt__MouseButton
///
int32_t q_singlepointevent_button(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
///
/// @param self const QSinglePointEvent*
///
/// @return flag of enum Qt__MouseButton
///
int32_t q_singlepointevent_buttons(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
///
/// @param self const QSinglePointEvent*
///
QPointF* q_singlepointevent_position(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
///
/// @param self const QSinglePointEvent*
///
QPointF* q_singlepointevent_scene_position(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
///
/// @param self const QSinglePointEvent*
///
QPointF* q_singlepointevent_global_position(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
///
/// @param self const QSinglePointEvent*
///
bool q_singlepointevent_is_begin_event(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
///
/// @param self const QSinglePointEvent*
///
bool q_singlepointevent_is_update_event(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// @param self const QSinglePointEvent*
///
bool q_singlepointevent_is_end_event(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
///
/// @param self const QSinglePointEvent*
///
QObject* q_singlepointevent_exclusive_point_grabber(const void* self);

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
/// @param self const QSinglePointEvent*
///
const QPointingDevice* q_singlepointevent_pointing_device(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
///
/// @param self const QSinglePointEvent*
///
/// @return enum QPointingDevice__PointerType
///
int32_t q_singlepointevent_pointer_type(const void* self);

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
/// @param self const QSinglePointEvent*
///
intptr_t q_singlepointevent_point_count(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
///
/// @param self QSinglePointEvent*
/// @param i intptr_t
///
QEventPoint* q_singlepointevent_point(void* self, intptr_t i);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
///
/// @param self const QSinglePointEvent*
///
/// @return libqt_list of QEventPoint*
///
libqt_list q_singlepointevent_points(const void* self);

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
/// @param self const QSinglePointEvent*
///
bool q_singlepointevent_all_points_grabbed(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
///
/// @param self const QSinglePointEvent*
///
bool q_singlepointevent_all_points_accepted(const void* self);

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
/// @param self const QSinglePointEvent*
/// @param point QEventPoint*
///
QObject* q_singlepointevent_exclusive_grabber(const void* self, const void* point);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
///
/// @param self QSinglePointEvent*
/// @param point QEventPoint*
/// @param exclusiveGrabber QObject*
///
void q_singlepointevent_set_exclusive_grabber(void* self, const void* point, void* exclusiveGrabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
///
/// @param self QSinglePointEvent*
/// @param point QEventPoint*
///
void q_singlepointevent_clear_passive_grabbers(void* self, const void* point);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
///
/// @param self QSinglePointEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_singlepointevent_add_passive_grabber(void* self, const void* point, void* grabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
///
/// @param self QSinglePointEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_singlepointevent_remove_passive_grabber(void* self, const void* point, void* grabber);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// @param self const QSinglePointEvent*
///
const QInputDevice* q_singlepointevent_device(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// @param self const QSinglePointEvent*
///
/// @return enum QInputDevice__DeviceType
///
int32_t q_singlepointevent_device_type(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
///
/// @param self const QSinglePointEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int32_t q_singlepointevent_modifiers(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// @param self QSinglePointEvent*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
void q_singlepointevent_set_modifiers(void* self, int32_t modifiers);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// @param self const QSinglePointEvent*
///
uint64_t q_singlepointevent_timestamp(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QSinglePointEvent*
///
/// @return enum QEvent__Type
///
int32_t q_singlepointevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QSinglePointEvent*
///
bool q_singlepointevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QSinglePointEvent*
///
bool q_singlepointevent_is_accepted(const void* self);

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
/// @param self const QSinglePointEvent*
///
bool q_singlepointevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QSinglePointEvent*
///
bool q_singlepointevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QSinglePointEvent*
///
bool q_singlepointevent_is_single_point_event(const void* self);

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
QEnterEvent* q_enterevent_new(const void* localPos, const void* scenePos, const void* globalPos);

/// [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html)

/// q_enterevent_new2 constructs a new QEnterEvent object.
///
/// @param localPos QPointF*
/// @param scenePos QPointF*
/// @param globalPos QPointF*
/// @param device QPointingDevice*
///
QEnterEvent* q_enterevent_new2(const void* localPos, const void* scenePos, const void* globalPos, const void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#clone)
///
/// @param self const QEnterEvent*
///
QEnterEvent* q_enterevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QEnterEvent*
/// @param callback QEnterEvent* func(const QEnterEvent* self)
///
void q_enterevent_on_clone(void* self, QEnterEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QEnterEvent*
///
QEnterEvent* q_enterevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#pos)
///
/// @param self const QEnterEvent*
///
QPoint* q_enterevent_pos(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#globalPos)
///
/// @param self const QEnterEvent*
///
QPoint* q_enterevent_global_pos(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#x)
///
/// @param self const QEnterEvent*
///
int32_t q_enterevent_x(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#y)
///
/// @param self const QEnterEvent*
///
int32_t q_enterevent_y(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#globalX)
///
/// @param self const QEnterEvent*
///
int32_t q_enterevent_global_x(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#globalY)
///
/// @param self const QEnterEvent*
///
int32_t q_enterevent_global_y(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#localPos)
///
/// @param self const QEnterEvent*
///
QPointF* q_enterevent_local_pos(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#windowPos)
///
/// @param self const QEnterEvent*
///
QPointF* q_enterevent_window_pos(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qenterevent.html#screenPos)
///
/// @param self const QEnterEvent*
///
QPointF* q_enterevent_screen_pos(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
///
/// @param self const QEnterEvent*
///
/// @return enum Qt__MouseButton
///
int32_t q_enterevent_button(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
///
/// @param self const QEnterEvent*
///
/// @return flag of enum Qt__MouseButton
///
int32_t q_enterevent_buttons(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
///
/// @param self const QEnterEvent*
///
QPointF* q_enterevent_position(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
///
/// @param self const QEnterEvent*
///
QPointF* q_enterevent_scene_position(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
///
/// @param self const QEnterEvent*
///
QPointF* q_enterevent_global_position(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
///
/// @param self const QEnterEvent*
///
QObject* q_enterevent_exclusive_point_grabber(const void* self);

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
/// @param self const QEnterEvent*
///
const QPointingDevice* q_enterevent_pointing_device(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
///
/// @param self const QEnterEvent*
///
/// @return enum QPointingDevice__PointerType
///
int32_t q_enterevent_pointer_type(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
///
/// @param self const QEnterEvent*
///
intptr_t q_enterevent_point_count(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
///
/// @param self QEnterEvent*
/// @param i intptr_t
///
QEventPoint* q_enterevent_point(void* self, intptr_t i);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
///
/// @param self const QEnterEvent*
///
/// @return libqt_list of QEventPoint*
///
libqt_list q_enterevent_points(const void* self);

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
/// @param self const QEnterEvent*
///
bool q_enterevent_all_points_grabbed(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
///
/// @param self const QEnterEvent*
///
bool q_enterevent_all_points_accepted(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
///
/// @param self const QEnterEvent*
/// @param point QEventPoint*
///
QObject* q_enterevent_exclusive_grabber(const void* self, const void* point);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
///
/// @param self QEnterEvent*
/// @param point QEventPoint*
/// @param exclusiveGrabber QObject*
///
void q_enterevent_set_exclusive_grabber(void* self, const void* point, void* exclusiveGrabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
///
/// @param self QEnterEvent*
/// @param point QEventPoint*
///
void q_enterevent_clear_passive_grabbers(void* self, const void* point);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
///
/// @param self QEnterEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_enterevent_add_passive_grabber(void* self, const void* point, void* grabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
///
/// @param self QEnterEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_enterevent_remove_passive_grabber(void* self, const void* point, void* grabber);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// @param self const QEnterEvent*
///
const QInputDevice* q_enterevent_device(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// @param self const QEnterEvent*
///
/// @return enum QInputDevice__DeviceType
///
int32_t q_enterevent_device_type(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
///
/// @param self const QEnterEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int32_t q_enterevent_modifiers(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// @param self QEnterEvent*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
void q_enterevent_set_modifiers(void* self, int32_t modifiers);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// @param self const QEnterEvent*
///
uint64_t q_enterevent_timestamp(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QEnterEvent*
///
/// @return enum QEvent__Type
///
int32_t q_enterevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QEnterEvent*
///
bool q_enterevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QEnterEvent*
///
bool q_enterevent_is_accepted(const void* self);

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
/// @param self const QEnterEvent*
///
bool q_enterevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QEnterEvent*
///
bool q_enterevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QEnterEvent*
///
bool q_enterevent_is_single_point_event(const void* self);

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
/// @param self const QEnterEvent*
///
bool q_enterevent_is_begin_event(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QEnterEvent*
///
bool q_enterevent_super_is_begin_event(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QEnterEvent*
/// @param callback bool func(QEnterEvent* self)
///
void q_enterevent_on_is_begin_event(void* self, bool (*callback)(const void*));

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QEnterEvent*
///
bool q_enterevent_is_update_event(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QEnterEvent*
///
bool q_enterevent_super_is_update_event(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QEnterEvent*
/// @param callback bool func(QEnterEvent* self)
///
void q_enterevent_on_is_update_event(void* self, bool (*callback)(const void*));

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QEnterEvent*
///
bool q_enterevent_is_end_event(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QEnterEvent*
///
bool q_enterevent_super_is_end_event(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QEnterEvent*
/// @param callback bool func(QEnterEvent* self)
///
void q_enterevent_on_is_end_event(void* self, bool (*callback)(const void*));

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
void q_enterevent_super_set_timestamp(void* self, uint64_t timestamp);

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
void q_enterevent_super_set_accepted(void* self, bool accepted);

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
QMouseEvent* q_mouseevent_new(int32_t type, const void* localPos, int32_t button, int32_t buttons, int32_t modifiers);

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
QMouseEvent* q_mouseevent_new2(int32_t type, const void* localPos, const void* globalPos, int32_t button, int32_t buttons, int32_t modifiers);

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
QMouseEvent* q_mouseevent_new3(int32_t type, const void* localPos, const void* scenePos, const void* globalPos, int32_t button, int32_t buttons, int32_t modifiers);

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
QMouseEvent* q_mouseevent_new4(int32_t type, const void* localPos, const void* scenePos, const void* globalPos, int32_t button, int32_t buttons, int32_t modifiers, int32_t source);

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
QMouseEvent* q_mouseevent_new5(int32_t type, const void* localPos, int32_t button, int32_t buttons, int32_t modifiers, const void* device);

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
QMouseEvent* q_mouseevent_new6(int32_t type, const void* localPos, const void* globalPos, int32_t button, int32_t buttons, int32_t modifiers, const void* device);

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
QMouseEvent* q_mouseevent_new7(int32_t type, const void* localPos, const void* scenePos, const void* globalPos, int32_t button, int32_t buttons, int32_t modifiers, const void* device);

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
QMouseEvent* q_mouseevent_new8(int32_t type, const void* localPos, const void* scenePos, const void* globalPos, int32_t button, int32_t buttons, int32_t modifiers, int32_t source, const void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#clone)
///
/// @param self const QMouseEvent*
///
QMouseEvent* q_mouseevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QMouseEvent*
/// @param callback QMouseEvent* func(const QMouseEvent* self)
///
void q_mouseevent_on_clone(void* self, QMouseEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QMouseEvent*
///
QMouseEvent* q_mouseevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#pos)
///
/// @param self const QMouseEvent*
///
QPoint* q_mouseevent_pos(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#globalPos)
///
/// @param self const QMouseEvent*
///
QPoint* q_mouseevent_global_pos(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#x)
///
/// @param self const QMouseEvent*
///
int32_t q_mouseevent_x(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#y)
///
/// @param self const QMouseEvent*
///
int32_t q_mouseevent_y(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#globalX)
///
/// @param self const QMouseEvent*
///
int32_t q_mouseevent_global_x(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#globalY)
///
/// @param self const QMouseEvent*
///
int32_t q_mouseevent_global_y(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#localPos)
///
/// @param self const QMouseEvent*
///
QPointF* q_mouseevent_local_pos(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#windowPos)
///
/// @param self const QMouseEvent*
///
QPointF* q_mouseevent_window_pos(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#screenPos)
///
/// @param self const QMouseEvent*
///
QPointF* q_mouseevent_screen_pos(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#source)
///
/// @param self const QMouseEvent*
///
/// @return enum Qt__MouseEventSource
///
int32_t q_mouseevent_source(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseevent.html#flags)
///
/// @param self const QMouseEvent*
///
/// @return flag of enum Qt__MouseEventFlag
///
int32_t q_mouseevent_flags(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
///
/// @param self const QMouseEvent*
///
/// @return enum Qt__MouseButton
///
int32_t q_mouseevent_button(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
///
/// @param self const QMouseEvent*
///
/// @return flag of enum Qt__MouseButton
///
int32_t q_mouseevent_buttons(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
///
/// @param self const QMouseEvent*
///
QPointF* q_mouseevent_position(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
///
/// @param self const QMouseEvent*
///
QPointF* q_mouseevent_scene_position(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
///
/// @param self const QMouseEvent*
///
QPointF* q_mouseevent_global_position(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
///
/// @param self const QMouseEvent*
///
QObject* q_mouseevent_exclusive_point_grabber(const void* self);

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
/// @param self const QMouseEvent*
///
const QPointingDevice* q_mouseevent_pointing_device(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
///
/// @param self const QMouseEvent*
///
/// @return enum QPointingDevice__PointerType
///
int32_t q_mouseevent_pointer_type(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
///
/// @param self const QMouseEvent*
///
intptr_t q_mouseevent_point_count(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
///
/// @param self QMouseEvent*
/// @param i intptr_t
///
QEventPoint* q_mouseevent_point(void* self, intptr_t i);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
///
/// @param self const QMouseEvent*
///
/// @return libqt_list of QEventPoint*
///
libqt_list q_mouseevent_points(const void* self);

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
/// @param self const QMouseEvent*
///
bool q_mouseevent_all_points_grabbed(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
///
/// @param self const QMouseEvent*
///
bool q_mouseevent_all_points_accepted(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
///
/// @param self const QMouseEvent*
/// @param point QEventPoint*
///
QObject* q_mouseevent_exclusive_grabber(const void* self, const void* point);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
///
/// @param self QMouseEvent*
/// @param point QEventPoint*
/// @param exclusiveGrabber QObject*
///
void q_mouseevent_set_exclusive_grabber(void* self, const void* point, void* exclusiveGrabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
///
/// @param self QMouseEvent*
/// @param point QEventPoint*
///
void q_mouseevent_clear_passive_grabbers(void* self, const void* point);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
///
/// @param self QMouseEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_mouseevent_add_passive_grabber(void* self, const void* point, void* grabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
///
/// @param self QMouseEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_mouseevent_remove_passive_grabber(void* self, const void* point, void* grabber);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// @param self const QMouseEvent*
///
const QInputDevice* q_mouseevent_device(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// @param self const QMouseEvent*
///
/// @return enum QInputDevice__DeviceType
///
int32_t q_mouseevent_device_type(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
///
/// @param self const QMouseEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int32_t q_mouseevent_modifiers(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// @param self QMouseEvent*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
void q_mouseevent_set_modifiers(void* self, int32_t modifiers);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// @param self const QMouseEvent*
///
uint64_t q_mouseevent_timestamp(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QMouseEvent*
///
/// @return enum QEvent__Type
///
int32_t q_mouseevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QMouseEvent*
///
bool q_mouseevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QMouseEvent*
///
bool q_mouseevent_is_accepted(const void* self);

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
/// @param self const QMouseEvent*
///
bool q_mouseevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QMouseEvent*
///
bool q_mouseevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QMouseEvent*
///
bool q_mouseevent_is_single_point_event(const void* self);

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
/// @param self const QMouseEvent*
///
bool q_mouseevent_is_begin_event(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QMouseEvent*
///
bool q_mouseevent_super_is_begin_event(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMouseEvent*
/// @param callback bool func(QMouseEvent* self)
///
void q_mouseevent_on_is_begin_event(void* self, bool (*callback)(const void*));

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QMouseEvent*
///
bool q_mouseevent_is_update_event(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QMouseEvent*
///
bool q_mouseevent_super_is_update_event(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMouseEvent*
/// @param callback bool func(QMouseEvent* self)
///
void q_mouseevent_on_is_update_event(void* self, bool (*callback)(const void*));

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QMouseEvent*
///
bool q_mouseevent_is_end_event(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QMouseEvent*
///
bool q_mouseevent_super_is_end_event(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMouseEvent*
/// @param callback bool func(QMouseEvent* self)
///
void q_mouseevent_on_is_end_event(void* self, bool (*callback)(const void*));

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
void q_mouseevent_super_set_timestamp(void* self, uint64_t timestamp);

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
void q_mouseevent_super_set_accepted(void* self, bool accepted);

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
QHoverEvent* q_hoverevent_new(int32_t type, const void* scenePos, const void* globalPos, const void* oldPos);

/// [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html)

/// q_hoverevent_new2 constructs a new QHoverEvent object.
///
/// @param type enum QEvent__Type
/// @param pos QPointF*
/// @param oldPos QPointF*
///
QHoverEvent* q_hoverevent_new2(int32_t type, const void* pos, const void* oldPos);

/// [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html)

/// q_hoverevent_new3 constructs a new QHoverEvent object.
///
/// @param type enum QEvent__Type
/// @param scenePos QPointF*
/// @param globalPos QPointF*
/// @param oldPos QPointF*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
QHoverEvent* q_hoverevent_new3(int32_t type, const void* scenePos, const void* globalPos, const void* oldPos, int32_t modifiers);

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
QHoverEvent* q_hoverevent_new4(int32_t type, const void* scenePos, const void* globalPos, const void* oldPos, int32_t modifiers, const void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html)

/// q_hoverevent_new5 constructs a new QHoverEvent object.
///
/// @param type enum QEvent__Type
/// @param pos QPointF*
/// @param oldPos QPointF*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
QHoverEvent* q_hoverevent_new5(int32_t type, const void* pos, const void* oldPos, int32_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html)

/// q_hoverevent_new6 constructs a new QHoverEvent object.
///
/// @param type enum QEvent__Type
/// @param pos QPointF*
/// @param oldPos QPointF*
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param device QPointingDevice*
///
QHoverEvent* q_hoverevent_new6(int32_t type, const void* pos, const void* oldPos, int32_t modifiers, const void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#clone)
///
/// @param self const QHoverEvent*
///
QHoverEvent* q_hoverevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QHoverEvent*
/// @param callback QHoverEvent* func(const QHoverEvent* self)
///
void q_hoverevent_on_clone(void* self, QHoverEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QHoverEvent*
///
QHoverEvent* q_hoverevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#pos)
///
/// @param self const QHoverEvent*
///
QPoint* q_hoverevent_pos(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#posF)
///
/// @param self const QHoverEvent*
///
QPointF* q_hoverevent_pos_f(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#isUpdateEvent)
///
/// @param self const QHoverEvent*
///
bool q_hoverevent_is_update_event(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#isUpdateEvent)
///
/// Allows for overriding the related default method
///
/// @param self QHoverEvent*
/// @param callback bool func(const QHoverEvent* self)
///
void q_hoverevent_on_is_update_event(void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#isUpdateEvent)
///
/// Base class method implementation
///
/// @param self const QHoverEvent*
///
bool q_hoverevent_super_is_update_event(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#oldPos)
///
/// @param self const QHoverEvent*
///
QPoint* q_hoverevent_old_pos(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhoverevent.html#oldPosF)
///
/// @param self const QHoverEvent*
///
QPointF* q_hoverevent_old_pos_f(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
///
/// @param self const QHoverEvent*
///
/// @return enum Qt__MouseButton
///
int32_t q_hoverevent_button(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
///
/// @param self const QHoverEvent*
///
/// @return flag of enum Qt__MouseButton
///
int32_t q_hoverevent_buttons(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
///
/// @param self const QHoverEvent*
///
QPointF* q_hoverevent_position(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
///
/// @param self const QHoverEvent*
///
QPointF* q_hoverevent_scene_position(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
///
/// @param self const QHoverEvent*
///
QPointF* q_hoverevent_global_position(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
///
/// @param self const QHoverEvent*
///
QObject* q_hoverevent_exclusive_point_grabber(const void* self);

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
/// @param self const QHoverEvent*
///
const QPointingDevice* q_hoverevent_pointing_device(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
///
/// @param self const QHoverEvent*
///
/// @return enum QPointingDevice__PointerType
///
int32_t q_hoverevent_pointer_type(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
///
/// @param self const QHoverEvent*
///
intptr_t q_hoverevent_point_count(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
///
/// @param self QHoverEvent*
/// @param i intptr_t
///
QEventPoint* q_hoverevent_point(void* self, intptr_t i);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
///
/// @param self const QHoverEvent*
///
/// @return libqt_list of QEventPoint*
///
libqt_list q_hoverevent_points(const void* self);

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
/// @param self const QHoverEvent*
///
bool q_hoverevent_all_points_grabbed(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
///
/// @param self const QHoverEvent*
///
bool q_hoverevent_all_points_accepted(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
///
/// @param self const QHoverEvent*
/// @param point QEventPoint*
///
QObject* q_hoverevent_exclusive_grabber(const void* self, const void* point);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
///
/// @param self QHoverEvent*
/// @param point QEventPoint*
/// @param exclusiveGrabber QObject*
///
void q_hoverevent_set_exclusive_grabber(void* self, const void* point, void* exclusiveGrabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
///
/// @param self QHoverEvent*
/// @param point QEventPoint*
///
void q_hoverevent_clear_passive_grabbers(void* self, const void* point);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
///
/// @param self QHoverEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_hoverevent_add_passive_grabber(void* self, const void* point, void* grabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
///
/// @param self QHoverEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_hoverevent_remove_passive_grabber(void* self, const void* point, void* grabber);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// @param self const QHoverEvent*
///
const QInputDevice* q_hoverevent_device(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// @param self const QHoverEvent*
///
/// @return enum QInputDevice__DeviceType
///
int32_t q_hoverevent_device_type(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
///
/// @param self const QHoverEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int32_t q_hoverevent_modifiers(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// @param self QHoverEvent*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
void q_hoverevent_set_modifiers(void* self, int32_t modifiers);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// @param self const QHoverEvent*
///
uint64_t q_hoverevent_timestamp(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QHoverEvent*
///
/// @return enum QEvent__Type
///
int32_t q_hoverevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QHoverEvent*
///
bool q_hoverevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QHoverEvent*
///
bool q_hoverevent_is_accepted(const void* self);

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
/// @param self const QHoverEvent*
///
bool q_hoverevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QHoverEvent*
///
bool q_hoverevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QHoverEvent*
///
bool q_hoverevent_is_single_point_event(const void* self);

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
/// @param self const QHoverEvent*
///
bool q_hoverevent_is_begin_event(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QHoverEvent*
///
bool q_hoverevent_super_is_begin_event(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHoverEvent*
/// @param callback bool func(QHoverEvent* self)
///
void q_hoverevent_on_is_begin_event(void* self, bool (*callback)(const void*));

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QHoverEvent*
///
bool q_hoverevent_is_end_event(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QHoverEvent*
///
bool q_hoverevent_super_is_end_event(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHoverEvent*
/// @param callback bool func(QHoverEvent* self)
///
void q_hoverevent_on_is_end_event(void* self, bool (*callback)(const void*));

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
void q_hoverevent_super_set_timestamp(void* self, uint64_t timestamp);

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
void q_hoverevent_super_set_accepted(void* self, bool accepted);

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
QWheelEvent* q_wheelevent_new(const void* pos, const void* globalPos, void* pixelDelta, void* angleDelta, int32_t buttons, int32_t modifiers, int32_t phase, bool inverted);

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
QWheelEvent* q_wheelevent_new2(const void* pos, const void* globalPos, void* pixelDelta, void* angleDelta, int32_t buttons, int32_t modifiers, int32_t phase, bool inverted, int32_t source);

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
QWheelEvent* q_wheelevent_new3(const void* pos, const void* globalPos, void* pixelDelta, void* angleDelta, int32_t buttons, int32_t modifiers, int32_t phase, bool inverted, int32_t source, const void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#clone)
///
/// @param self const QWheelEvent*
///
QWheelEvent* q_wheelevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QWheelEvent*
/// @param callback QWheelEvent* func(const QWheelEvent* self)
///
void q_wheelevent_on_clone(void* self, QWheelEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QWheelEvent*
///
QWheelEvent* q_wheelevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#pixelDelta)
///
/// @param self const QWheelEvent*
///
QPoint* q_wheelevent_pixel_delta(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#angleDelta)
///
/// @param self const QWheelEvent*
///
QPoint* q_wheelevent_angle_delta(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#phase)
///
/// @param self const QWheelEvent*
///
/// @return enum Qt__ScrollPhase
///
int32_t q_wheelevent_phase(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#inverted)
///
/// @param self const QWheelEvent*
///
bool q_wheelevent_inverted(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isInverted)
///
/// @param self const QWheelEvent*
///
bool q_wheelevent_is_inverted(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#hasPixelDelta)
///
/// @param self const QWheelEvent*
///
bool q_wheelevent_has_pixel_delta(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isBeginEvent)
///
/// @param self const QWheelEvent*
///
bool q_wheelevent_is_begin_event(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isBeginEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWheelEvent*
/// @param callback bool func(const QWheelEvent* self)
///
void q_wheelevent_on_is_begin_event(void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isBeginEvent)
///
/// Base class method implementation
///
/// @param self const QWheelEvent*
///
bool q_wheelevent_super_is_begin_event(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isUpdateEvent)
///
/// @param self const QWheelEvent*
///
bool q_wheelevent_is_update_event(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isUpdateEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWheelEvent*
/// @param callback bool func(const QWheelEvent* self)
///
void q_wheelevent_on_is_update_event(void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isUpdateEvent)
///
/// Base class method implementation
///
/// @param self const QWheelEvent*
///
bool q_wheelevent_super_is_update_event(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isEndEvent)
///
/// @param self const QWheelEvent*
///
bool q_wheelevent_is_end_event(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isEndEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWheelEvent*
/// @param callback bool func(const QWheelEvent* self)
///
void q_wheelevent_on_is_end_event(void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#isEndEvent)
///
/// Base class method implementation
///
/// @param self const QWheelEvent*
///
bool q_wheelevent_super_is_end_event(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwheelevent.html#source)
///
/// @param self const QWheelEvent*
///
/// @return enum Qt__MouseEventSource
///
int32_t q_wheelevent_source(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
///
/// @param self const QWheelEvent*
///
/// @return enum Qt__MouseButton
///
int32_t q_wheelevent_button(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
///
/// @param self const QWheelEvent*
///
/// @return flag of enum Qt__MouseButton
///
int32_t q_wheelevent_buttons(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
///
/// @param self const QWheelEvent*
///
QPointF* q_wheelevent_position(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
///
/// @param self const QWheelEvent*
///
QPointF* q_wheelevent_scene_position(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
///
/// @param self const QWheelEvent*
///
QPointF* q_wheelevent_global_position(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
///
/// @param self const QWheelEvent*
///
QObject* q_wheelevent_exclusive_point_grabber(const void* self);

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
/// @param self const QWheelEvent*
///
const QPointingDevice* q_wheelevent_pointing_device(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
///
/// @param self const QWheelEvent*
///
/// @return enum QPointingDevice__PointerType
///
int32_t q_wheelevent_pointer_type(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
///
/// @param self const QWheelEvent*
///
intptr_t q_wheelevent_point_count(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
///
/// @param self QWheelEvent*
/// @param i intptr_t
///
QEventPoint* q_wheelevent_point(void* self, intptr_t i);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
///
/// @param self const QWheelEvent*
///
/// @return libqt_list of QEventPoint*
///
libqt_list q_wheelevent_points(const void* self);

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
/// @param self const QWheelEvent*
///
bool q_wheelevent_all_points_grabbed(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
///
/// @param self const QWheelEvent*
///
bool q_wheelevent_all_points_accepted(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
///
/// @param self const QWheelEvent*
/// @param point QEventPoint*
///
QObject* q_wheelevent_exclusive_grabber(const void* self, const void* point);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
///
/// @param self QWheelEvent*
/// @param point QEventPoint*
/// @param exclusiveGrabber QObject*
///
void q_wheelevent_set_exclusive_grabber(void* self, const void* point, void* exclusiveGrabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
///
/// @param self QWheelEvent*
/// @param point QEventPoint*
///
void q_wheelevent_clear_passive_grabbers(void* self, const void* point);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
///
/// @param self QWheelEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_wheelevent_add_passive_grabber(void* self, const void* point, void* grabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
///
/// @param self QWheelEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_wheelevent_remove_passive_grabber(void* self, const void* point, void* grabber);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// @param self const QWheelEvent*
///
const QInputDevice* q_wheelevent_device(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// @param self const QWheelEvent*
///
/// @return enum QInputDevice__DeviceType
///
int32_t q_wheelevent_device_type(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
///
/// @param self const QWheelEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int32_t q_wheelevent_modifiers(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// @param self QWheelEvent*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
void q_wheelevent_set_modifiers(void* self, int32_t modifiers);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// @param self const QWheelEvent*
///
uint64_t q_wheelevent_timestamp(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QWheelEvent*
///
/// @return enum QEvent__Type
///
int32_t q_wheelevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QWheelEvent*
///
bool q_wheelevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QWheelEvent*
///
bool q_wheelevent_is_accepted(const void* self);

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
/// @param self const QWheelEvent*
///
bool q_wheelevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QWheelEvent*
///
bool q_wheelevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QWheelEvent*
///
bool q_wheelevent_is_single_point_event(const void* self);

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
void q_wheelevent_super_set_timestamp(void* self, uint64_t timestamp);

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
void q_wheelevent_super_set_accepted(void* self, bool accepted);

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
QTabletEvent* q_tabletevent_new(int32_t t, const void* device, const void* pos, const void* globalPos, double pressure, float xTilt, float yTilt, float tangentialPressure, double rotation, float z, int32_t keyState, int32_t button, int32_t buttons);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#clone)
///
/// @param self const QTabletEvent*
///
QTabletEvent* q_tabletevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QTabletEvent*
/// @param callback QTabletEvent* func(const QTabletEvent* self)
///
void q_tabletevent_on_clone(void* self, QTabletEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QTabletEvent*
///
QTabletEvent* q_tabletevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#pos)
///
/// @param self const QTabletEvent*
///
QPoint* q_tabletevent_pos(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#globalPos)
///
/// @param self const QTabletEvent*
///
QPoint* q_tabletevent_global_pos(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#posF)
///
/// @param self const QTabletEvent*
///
const QPointF* q_tabletevent_pos_f(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#globalPosF)
///
/// @param self const QTabletEvent*
///
const QPointF* q_tabletevent_global_pos_f(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#x)
///
/// @param self const QTabletEvent*
///
int32_t q_tabletevent_x(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#y)
///
/// @param self const QTabletEvent*
///
int32_t q_tabletevent_y(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#globalX)
///
/// @param self const QTabletEvent*
///
int32_t q_tabletevent_global_x(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#globalY)
///
/// @param self const QTabletEvent*
///
int32_t q_tabletevent_global_y(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#hiResGlobalX)
///
/// @param self const QTabletEvent*
///
double q_tabletevent_hi_res_global_x(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#hiResGlobalY)
///
/// @param self const QTabletEvent*
///
double q_tabletevent_hi_res_global_y(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#uniqueId)
///
/// @param self const QTabletEvent*
///
int64_t q_tabletevent_unique_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#pressure)
///
/// @param self const QTabletEvent*
///
double q_tabletevent_pressure(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#rotation)
///
/// @param self const QTabletEvent*
///
double q_tabletevent_rotation(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#z)
///
/// @param self const QTabletEvent*
///
double q_tabletevent_z(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#tangentialPressure)
///
/// @param self const QTabletEvent*
///
double q_tabletevent_tangential_pressure(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#xTilt)
///
/// @param self const QTabletEvent*
///
double q_tabletevent_x_tilt(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabletevent.html#yTilt)
///
/// @param self const QTabletEvent*
///
double q_tabletevent_y_tilt(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
///
/// @param self const QTabletEvent*
///
/// @return enum Qt__MouseButton
///
int32_t q_tabletevent_button(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
///
/// @param self const QTabletEvent*
///
/// @return flag of enum Qt__MouseButton
///
int32_t q_tabletevent_buttons(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
///
/// @param self const QTabletEvent*
///
QPointF* q_tabletevent_position(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
///
/// @param self const QTabletEvent*
///
QPointF* q_tabletevent_scene_position(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
///
/// @param self const QTabletEvent*
///
QPointF* q_tabletevent_global_position(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
///
/// @param self const QTabletEvent*
///
QObject* q_tabletevent_exclusive_point_grabber(const void* self);

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
/// @param self const QTabletEvent*
///
const QPointingDevice* q_tabletevent_pointing_device(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
///
/// @param self const QTabletEvent*
///
/// @return enum QPointingDevice__PointerType
///
int32_t q_tabletevent_pointer_type(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
///
/// @param self const QTabletEvent*
///
intptr_t q_tabletevent_point_count(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
///
/// @param self QTabletEvent*
/// @param i intptr_t
///
QEventPoint* q_tabletevent_point(void* self, intptr_t i);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
///
/// @param self const QTabletEvent*
///
/// @return libqt_list of QEventPoint*
///
libqt_list q_tabletevent_points(const void* self);

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
/// @param self const QTabletEvent*
///
bool q_tabletevent_all_points_grabbed(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
///
/// @param self const QTabletEvent*
///
bool q_tabletevent_all_points_accepted(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
///
/// @param self const QTabletEvent*
/// @param point QEventPoint*
///
QObject* q_tabletevent_exclusive_grabber(const void* self, const void* point);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
///
/// @param self QTabletEvent*
/// @param point QEventPoint*
/// @param exclusiveGrabber QObject*
///
void q_tabletevent_set_exclusive_grabber(void* self, const void* point, void* exclusiveGrabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
///
/// @param self QTabletEvent*
/// @param point QEventPoint*
///
void q_tabletevent_clear_passive_grabbers(void* self, const void* point);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
///
/// @param self QTabletEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_tabletevent_add_passive_grabber(void* self, const void* point, void* grabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
///
/// @param self QTabletEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_tabletevent_remove_passive_grabber(void* self, const void* point, void* grabber);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// @param self const QTabletEvent*
///
const QInputDevice* q_tabletevent_device(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// @param self const QTabletEvent*
///
/// @return enum QInputDevice__DeviceType
///
int32_t q_tabletevent_device_type(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
///
/// @param self const QTabletEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int32_t q_tabletevent_modifiers(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// @param self QTabletEvent*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
void q_tabletevent_set_modifiers(void* self, int32_t modifiers);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// @param self const QTabletEvent*
///
uint64_t q_tabletevent_timestamp(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QTabletEvent*
///
/// @return enum QEvent__Type
///
int32_t q_tabletevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QTabletEvent*
///
bool q_tabletevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QTabletEvent*
///
bool q_tabletevent_is_accepted(const void* self);

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
/// @param self const QTabletEvent*
///
bool q_tabletevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QTabletEvent*
///
bool q_tabletevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QTabletEvent*
///
bool q_tabletevent_is_single_point_event(const void* self);

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
/// @param self const QTabletEvent*
///
bool q_tabletevent_is_begin_event(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTabletEvent*
///
bool q_tabletevent_super_is_begin_event(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabletEvent*
/// @param callback bool func(QTabletEvent* self)
///
void q_tabletevent_on_is_begin_event(void* self, bool (*callback)(const void*));

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTabletEvent*
///
bool q_tabletevent_is_update_event(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTabletEvent*
///
bool q_tabletevent_super_is_update_event(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabletEvent*
/// @param callback bool func(QTabletEvent* self)
///
void q_tabletevent_on_is_update_event(void* self, bool (*callback)(const void*));

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTabletEvent*
///
bool q_tabletevent_is_end_event(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTabletEvent*
///
bool q_tabletevent_super_is_end_event(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabletEvent*
/// @param callback bool func(QTabletEvent* self)
///
void q_tabletevent_on_is_end_event(void* self, bool (*callback)(const void*));

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
void q_tabletevent_super_set_timestamp(void* self, uint64_t timestamp);

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
void q_tabletevent_super_set_accepted(void* self, bool accepted);

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
QNativeGestureEvent* q_nativegestureevent_new(int32_t type, const void* dev, const void* localPos, const void* scenePos, const void* globalPos, double value, uint64_t sequenceId, uint64_t intArgument);

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
QNativeGestureEvent* q_nativegestureevent_new2(int32_t type, const void* dev, int fingerCount, const void* localPos, const void* scenePos, const void* globalPos, double value, const void* delta);

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
QNativeGestureEvent* q_nativegestureevent_new3(int32_t type, const void* dev, int fingerCount, const void* localPos, const void* scenePos, const void* globalPos, double value, const void* delta, uint64_t sequenceId);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#clone)
///
/// @param self const QNativeGestureEvent*
///
QNativeGestureEvent* q_nativegestureevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QNativeGestureEvent*
/// @param callback QNativeGestureEvent* func(const QNativeGestureEvent* self)
///
void q_nativegestureevent_on_clone(void* self, QNativeGestureEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QNativeGestureEvent*
///
QNativeGestureEvent* q_nativegestureevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#gestureType)
///
/// @param self const QNativeGestureEvent*
///
/// @return enum Qt__NativeGestureType
///
int32_t q_nativegestureevent_gesture_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#fingerCount)
///
/// @param self const QNativeGestureEvent*
///
int32_t q_nativegestureevent_finger_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#value)
///
/// @param self const QNativeGestureEvent*
///
double q_nativegestureevent_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#delta)
///
/// @param self const QNativeGestureEvent*
///
QPointF* q_nativegestureevent_delta(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#pos)
///
/// @param self const QNativeGestureEvent*
///
const QPoint* q_nativegestureevent_pos(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#globalPos)
///
/// @param self const QNativeGestureEvent*
///
const QPoint* q_nativegestureevent_global_pos(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#localPos)
///
/// @param self const QNativeGestureEvent*
///
QPointF* q_nativegestureevent_local_pos(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#windowPos)
///
/// @param self const QNativeGestureEvent*
///
QPointF* q_nativegestureevent_window_pos(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativegestureevent.html#screenPos)
///
/// @param self const QNativeGestureEvent*
///
QPointF* q_nativegestureevent_screen_pos(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#button)
///
/// @param self const QNativeGestureEvent*
///
/// @return enum Qt__MouseButton
///
int32_t q_nativegestureevent_button(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#buttons)
///
/// @param self const QNativeGestureEvent*
///
/// @return flag of enum Qt__MouseButton
///
int32_t q_nativegestureevent_buttons(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#position)
///
/// @param self const QNativeGestureEvent*
///
QPointF* q_nativegestureevent_position(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#scenePosition)
///
/// @param self const QNativeGestureEvent*
///
QPointF* q_nativegestureevent_scene_position(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#globalPosition)
///
/// @param self const QNativeGestureEvent*
///
QPointF* q_nativegestureevent_global_position(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#exclusivePointGrabber)
///
/// @param self const QNativeGestureEvent*
///
QObject* q_nativegestureevent_exclusive_point_grabber(const void* self);

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
/// @param self const QNativeGestureEvent*
///
const QPointingDevice* q_nativegestureevent_pointing_device(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
///
/// @param self const QNativeGestureEvent*
///
/// @return enum QPointingDevice__PointerType
///
int32_t q_nativegestureevent_pointer_type(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
///
/// @param self const QNativeGestureEvent*
///
intptr_t q_nativegestureevent_point_count(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
///
/// @param self QNativeGestureEvent*
/// @param i intptr_t
///
QEventPoint* q_nativegestureevent_point(void* self, intptr_t i);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
///
/// @param self const QNativeGestureEvent*
///
/// @return libqt_list of QEventPoint*
///
libqt_list q_nativegestureevent_points(const void* self);

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
/// @param self const QNativeGestureEvent*
///
bool q_nativegestureevent_all_points_grabbed(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
///
/// @param self const QNativeGestureEvent*
///
bool q_nativegestureevent_all_points_accepted(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
///
/// @param self const QNativeGestureEvent*
/// @param point QEventPoint*
///
QObject* q_nativegestureevent_exclusive_grabber(const void* self, const void* point);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
///
/// @param self QNativeGestureEvent*
/// @param point QEventPoint*
/// @param exclusiveGrabber QObject*
///
void q_nativegestureevent_set_exclusive_grabber(void* self, const void* point, void* exclusiveGrabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
///
/// @param self QNativeGestureEvent*
/// @param point QEventPoint*
///
void q_nativegestureevent_clear_passive_grabbers(void* self, const void* point);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
///
/// @param self QNativeGestureEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_nativegestureevent_add_passive_grabber(void* self, const void* point, void* grabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
///
/// @param self QNativeGestureEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_nativegestureevent_remove_passive_grabber(void* self, const void* point, void* grabber);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// @param self const QNativeGestureEvent*
///
const QInputDevice* q_nativegestureevent_device(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// @param self const QNativeGestureEvent*
///
/// @return enum QInputDevice__DeviceType
///
int32_t q_nativegestureevent_device_type(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
///
/// @param self const QNativeGestureEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int32_t q_nativegestureevent_modifiers(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// @param self QNativeGestureEvent*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
void q_nativegestureevent_set_modifiers(void* self, int32_t modifiers);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// @param self const QNativeGestureEvent*
///
uint64_t q_nativegestureevent_timestamp(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QNativeGestureEvent*
///
/// @return enum QEvent__Type
///
int32_t q_nativegestureevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QNativeGestureEvent*
///
bool q_nativegestureevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QNativeGestureEvent*
///
bool q_nativegestureevent_is_accepted(const void* self);

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
/// @param self const QNativeGestureEvent*
///
bool q_nativegestureevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QNativeGestureEvent*
///
bool q_nativegestureevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QNativeGestureEvent*
///
bool q_nativegestureevent_is_single_point_event(const void* self);

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
/// @param self const QNativeGestureEvent*
///
bool q_nativegestureevent_is_begin_event(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QNativeGestureEvent*
///
bool q_nativegestureevent_super_is_begin_event(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isBeginEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNativeGestureEvent*
/// @param callback bool func(QNativeGestureEvent* self)
///
void q_nativegestureevent_on_is_begin_event(void* self, bool (*callback)(const void*));

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QNativeGestureEvent*
///
bool q_nativegestureevent_is_update_event(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QNativeGestureEvent*
///
bool q_nativegestureevent_super_is_update_event(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isUpdateEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNativeGestureEvent*
/// @param callback bool func(QNativeGestureEvent* self)
///
void q_nativegestureevent_on_is_update_event(void* self, bool (*callback)(const void*));

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QNativeGestureEvent*
///
bool q_nativegestureevent_is_end_event(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QNativeGestureEvent*
///
bool q_nativegestureevent_super_is_end_event(const void* self);

/// Inherited from QSinglePointEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsinglepointevent.html#isEndEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNativeGestureEvent*
/// @param callback bool func(QNativeGestureEvent* self)
///
void q_nativegestureevent_on_is_end_event(void* self, bool (*callback)(const void*));

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
void q_nativegestureevent_super_set_timestamp(void* self, uint64_t timestamp);

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
void q_nativegestureevent_super_set_accepted(void* self, bool accepted);

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
QKeyEvent* q_keyevent_new(int32_t type, int key, int32_t modifiers);

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
QKeyEvent* q_keyevent_new2(int32_t type, int key, int32_t modifiers, uint32_t nativeScanCode, uint32_t nativeVirtualKey, uint32_t nativeModifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html)

/// q_keyevent_new3 constructs a new QKeyEvent object.
///
/// @param type enum QEvent__Type
/// @param key int
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param text const char*
///
QKeyEvent* q_keyevent_new3(int32_t type, int key, int32_t modifiers, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html)

/// q_keyevent_new4 constructs a new QKeyEvent object.
///
/// @param type enum QEvent__Type
/// @param key int
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param text const char*
/// @param autorep bool
///
QKeyEvent* q_keyevent_new4(int32_t type, int key, int32_t modifiers, const char* text, bool autorep);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html)

/// q_keyevent_new5 constructs a new QKeyEvent object.
///
/// @param type enum QEvent__Type
/// @param key int
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param text const char*
/// @param autorep bool
/// @param count uint16_t
///
QKeyEvent* q_keyevent_new5(int32_t type, int key, int32_t modifiers, const char* text, bool autorep, uint16_t count);

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
QKeyEvent* q_keyevent_new6(int32_t type, int key, int32_t modifiers, uint32_t nativeScanCode, uint32_t nativeVirtualKey, uint32_t nativeModifiers, const char* text);

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
QKeyEvent* q_keyevent_new7(int32_t type, int key, int32_t modifiers, uint32_t nativeScanCode, uint32_t nativeVirtualKey, uint32_t nativeModifiers, const char* text, bool autorep);

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
/// @param count uint16_t
///
QKeyEvent* q_keyevent_new8(int32_t type, int key, int32_t modifiers, uint32_t nativeScanCode, uint32_t nativeVirtualKey, uint32_t nativeModifiers, const char* text, bool autorep, uint16_t count);

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
/// @param count uint16_t
/// @param device QInputDevice*
///
QKeyEvent* q_keyevent_new9(int32_t type, int key, int32_t modifiers, uint32_t nativeScanCode, uint32_t nativeVirtualKey, uint32_t nativeModifiers, const char* text, bool autorep, uint16_t count, const void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#clone)
///
/// @param self const QKeyEvent*
///
QKeyEvent* q_keyevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QKeyEvent*
/// @param callback QKeyEvent* func(const QKeyEvent* self)
///
void q_keyevent_on_clone(void* self, QKeyEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QKeyEvent*
///
QKeyEvent* q_keyevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#key)
///
/// @param self const QKeyEvent*
///
int32_t q_keyevent_key(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#matches)
///
/// @param self const QKeyEvent*
/// @param key enum QKeySequence__StandardKey
///
bool q_keyevent_matches(const void* self, int32_t key);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#modifiers)
///
/// @param self const QKeyEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int32_t q_keyevent_modifiers(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#keyCombination)
///
/// @param self const QKeyEvent*
///
QKeyCombination* q_keyevent_key_combination(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QKeyEvent*
///
const char* q_keyevent_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#isAutoRepeat)
///
/// @param self const QKeyEvent*
///
bool q_keyevent_is_auto_repeat(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#count)
///
/// @param self const QKeyEvent*
///
int32_t q_keyevent_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#nativeScanCode)
///
/// @param self const QKeyEvent*
///
uint32_t q_keyevent_native_scan_code(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#nativeVirtualKey)
///
/// @param self const QKeyEvent*
///
uint32_t q_keyevent_native_virtual_key(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyevent.html#nativeModifiers)
///
/// @param self const QKeyEvent*
///
uint32_t q_keyevent_native_modifiers(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// @param self const QKeyEvent*
///
const QInputDevice* q_keyevent_device(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// @param self const QKeyEvent*
///
/// @return enum QInputDevice__DeviceType
///
int32_t q_keyevent_device_type(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// @param self QKeyEvent*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
void q_keyevent_set_modifiers(void* self, int32_t modifiers);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// @param self const QKeyEvent*
///
uint64_t q_keyevent_timestamp(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QKeyEvent*
///
/// @return enum QEvent__Type
///
int32_t q_keyevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QKeyEvent*
///
bool q_keyevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QKeyEvent*
///
bool q_keyevent_is_accepted(const void* self);

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
/// @param self const QKeyEvent*
///
bool q_keyevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QKeyEvent*
///
bool q_keyevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QKeyEvent*
///
bool q_keyevent_is_single_point_event(const void* self);

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
void q_keyevent_super_set_timestamp(void* self, uint64_t timestamp);

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
void q_keyevent_super_set_accepted(void* self, bool accepted);

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
/// @param self const QFocusEvent*
///
QFocusEvent* q_focusevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QFocusEvent*
/// @param callback QFocusEvent* func(const QFocusEvent* self)
///
void q_focusevent_on_clone(void* self, QFocusEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QFocusEvent*
///
QFocusEvent* q_focusevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html#gotFocus)
///
/// @param self const QFocusEvent*
///
bool q_focusevent_got_focus(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html#lostFocus)
///
/// @param self const QFocusEvent*
///
bool q_focusevent_lost_focus(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfocusevent.html#reason)
///
/// @param self const QFocusEvent*
///
/// @return enum Qt__FocusReason
///
int32_t q_focusevent_reason(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QFocusEvent*
///
/// @return enum QEvent__Type
///
int32_t q_focusevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QFocusEvent*
///
bool q_focusevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QFocusEvent*
///
bool q_focusevent_is_accepted(const void* self);

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
/// @param self const QFocusEvent*
///
bool q_focusevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QFocusEvent*
///
bool q_focusevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QFocusEvent*
///
bool q_focusevent_is_single_point_event(const void* self);

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
void q_focusevent_super_set_accepted(void* self, bool accepted);

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
QPaintEvent* q_paintevent_new(const void* paintRegion);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html)

/// q_paintevent_new2 constructs a new QPaintEvent object.
///
/// @param paintRect QRect*
///
QPaintEvent* q_paintevent_new2(const void* paintRect);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html#clone)
///
/// @param self const QPaintEvent*
///
QPaintEvent* q_paintevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QPaintEvent*
/// @param callback QPaintEvent* func(const QPaintEvent* self)
///
void q_paintevent_on_clone(void* self, QPaintEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QPaintEvent*
///
QPaintEvent* q_paintevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html#rect)
///
/// @param self const QPaintEvent*
///
const QRect* q_paintevent_rect(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintevent.html#region)
///
/// @param self const QPaintEvent*
///
const QRegion* q_paintevent_region(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QPaintEvent*
///
/// @return enum QEvent__Type
///
int32_t q_paintevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QPaintEvent*
///
bool q_paintevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QPaintEvent*
///
bool q_paintevent_is_accepted(const void* self);

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
/// @param self const QPaintEvent*
///
bool q_paintevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QPaintEvent*
///
bool q_paintevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QPaintEvent*
///
bool q_paintevent_is_single_point_event(const void* self);

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
void q_paintevent_super_set_accepted(void* self, bool accepted);

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
QMoveEvent* q_moveevent_new(const void* pos, const void* oldPos);

/// [Upstream resources](https://doc.qt.io/qt-6/qmoveevent.html#clone)
///
/// @param self const QMoveEvent*
///
QMoveEvent* q_moveevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmoveevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QMoveEvent*
/// @param callback QMoveEvent* func(const QMoveEvent* self)
///
void q_moveevent_on_clone(void* self, QMoveEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmoveevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QMoveEvent*
///
QMoveEvent* q_moveevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmoveevent.html#pos)
///
/// @param self const QMoveEvent*
///
const QPoint* q_moveevent_pos(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmoveevent.html#oldPos)
///
/// @param self const QMoveEvent*
///
const QPoint* q_moveevent_old_pos(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QMoveEvent*
///
/// @return enum QEvent__Type
///
int32_t q_moveevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QMoveEvent*
///
bool q_moveevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QMoveEvent*
///
bool q_moveevent_is_accepted(const void* self);

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
/// @param self const QMoveEvent*
///
bool q_moveevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QMoveEvent*
///
bool q_moveevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QMoveEvent*
///
bool q_moveevent_is_single_point_event(const void* self);

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
void q_moveevent_super_set_accepted(void* self, bool accepted);

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
QExposeEvent* q_exposeevent_new(const void* m_region);

/// [Upstream resources](https://doc.qt.io/qt-6/qexposeevent.html#clone)
///
/// @param self const QExposeEvent*
///
QExposeEvent* q_exposeevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qexposeevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QExposeEvent*
/// @param callback QExposeEvent* func(const QExposeEvent* self)
///
void q_exposeevent_on_clone(void* self, QExposeEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qexposeevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QExposeEvent*
///
QExposeEvent* q_exposeevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qexposeevent.html#region)
///
/// @param self const QExposeEvent*
///
const QRegion* q_exposeevent_region(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QExposeEvent*
///
/// @return enum QEvent__Type
///
int32_t q_exposeevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QExposeEvent*
///
bool q_exposeevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QExposeEvent*
///
bool q_exposeevent_is_accepted(const void* self);

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
/// @param self const QExposeEvent*
///
bool q_exposeevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QExposeEvent*
///
bool q_exposeevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QExposeEvent*
///
bool q_exposeevent_is_single_point_event(const void* self);

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
void q_exposeevent_super_set_accepted(void* self, bool accepted);

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
/// @param self const QPlatformSurfaceEvent*
///
QPlatformSurfaceEvent* q_platformsurfaceevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplatformsurfaceevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QPlatformSurfaceEvent*
/// @param callback QPlatformSurfaceEvent* func(const QPlatformSurfaceEvent* self)
///
void q_platformsurfaceevent_on_clone(void* self, QPlatformSurfaceEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplatformsurfaceevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QPlatformSurfaceEvent*
///
QPlatformSurfaceEvent* q_platformsurfaceevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplatformsurfaceevent.html#surfaceEventType)
///
/// @param self const QPlatformSurfaceEvent*
///
/// @return enum QPlatformSurfaceEvent__SurfaceEventType
///
int32_t q_platformsurfaceevent_surface_event_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QPlatformSurfaceEvent*
///
/// @return enum QEvent__Type
///
int32_t q_platformsurfaceevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QPlatformSurfaceEvent*
///
bool q_platformsurfaceevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QPlatformSurfaceEvent*
///
bool q_platformsurfaceevent_is_accepted(const void* self);

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
/// @param self const QPlatformSurfaceEvent*
///
bool q_platformsurfaceevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QPlatformSurfaceEvent*
///
bool q_platformsurfaceevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QPlatformSurfaceEvent*
///
bool q_platformsurfaceevent_is_single_point_event(const void* self);

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
void q_platformsurfaceevent_super_set_accepted(void* self, bool accepted);

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
QResizeEvent* q_resizeevent_new(const void* size, const void* oldSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qresizeevent.html#clone)
///
/// @param self const QResizeEvent*
///
QResizeEvent* q_resizeevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qresizeevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QResizeEvent*
/// @param callback QResizeEvent* func(const QResizeEvent* self)
///
void q_resizeevent_on_clone(void* self, QResizeEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qresizeevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QResizeEvent*
///
QResizeEvent* q_resizeevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qresizeevent.html#size)
///
/// @param self const QResizeEvent*
///
const QSize* q_resizeevent_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qresizeevent.html#oldSize)
///
/// @param self const QResizeEvent*
///
const QSize* q_resizeevent_old_size(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QResizeEvent*
///
/// @return enum QEvent__Type
///
int32_t q_resizeevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QResizeEvent*
///
bool q_resizeevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QResizeEvent*
///
bool q_resizeevent_is_accepted(const void* self);

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
/// @param self const QResizeEvent*
///
bool q_resizeevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QResizeEvent*
///
bool q_resizeevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QResizeEvent*
///
bool q_resizeevent_is_single_point_event(const void* self);

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
void q_resizeevent_super_set_accepted(void* self, bool accepted);

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
/// @param self const QCloseEvent*
///
QCloseEvent* q_closeevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcloseevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QCloseEvent*
/// @param callback QCloseEvent* func(const QCloseEvent* self)
///
void q_closeevent_on_clone(void* self, QCloseEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcloseevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QCloseEvent*
///
QCloseEvent* q_closeevent_super_clone(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QCloseEvent*
///
/// @return enum QEvent__Type
///
int32_t q_closeevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QCloseEvent*
///
bool q_closeevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QCloseEvent*
///
bool q_closeevent_is_accepted(const void* self);

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
/// @param self const QCloseEvent*
///
bool q_closeevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QCloseEvent*
///
bool q_closeevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QCloseEvent*
///
bool q_closeevent_is_single_point_event(const void* self);

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
void q_closeevent_super_set_accepted(void* self, bool accepted);

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
/// @param self const QIconDragEvent*
///
QIconDragEvent* q_icondragevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qicondragevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QIconDragEvent*
/// @param callback QIconDragEvent* func(const QIconDragEvent* self)
///
void q_icondragevent_on_clone(void* self, QIconDragEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qicondragevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QIconDragEvent*
///
QIconDragEvent* q_icondragevent_super_clone(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QIconDragEvent*
///
/// @return enum QEvent__Type
///
int32_t q_icondragevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QIconDragEvent*
///
bool q_icondragevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QIconDragEvent*
///
bool q_icondragevent_is_accepted(const void* self);

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
/// @param self const QIconDragEvent*
///
bool q_icondragevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QIconDragEvent*
///
bool q_icondragevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QIconDragEvent*
///
bool q_icondragevent_is_single_point_event(const void* self);

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
void q_icondragevent_super_set_accepted(void* self, bool accepted);

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
/// @param self const QShowEvent*
///
QShowEvent* q_showevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qshowevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QShowEvent*
/// @param callback QShowEvent* func(const QShowEvent* self)
///
void q_showevent_on_clone(void* self, QShowEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qshowevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QShowEvent*
///
QShowEvent* q_showevent_super_clone(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QShowEvent*
///
/// @return enum QEvent__Type
///
int32_t q_showevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QShowEvent*
///
bool q_showevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QShowEvent*
///
bool q_showevent_is_accepted(const void* self);

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
/// @param self const QShowEvent*
///
bool q_showevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QShowEvent*
///
bool q_showevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QShowEvent*
///
bool q_showevent_is_single_point_event(const void* self);

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
void q_showevent_super_set_accepted(void* self, bool accepted);

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
/// @param self const QHideEvent*
///
QHideEvent* q_hideevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhideevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QHideEvent*
/// @param callback QHideEvent* func(const QHideEvent* self)
///
void q_hideevent_on_clone(void* self, QHideEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhideevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QHideEvent*
///
QHideEvent* q_hideevent_super_clone(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QHideEvent*
///
/// @return enum QEvent__Type
///
int32_t q_hideevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QHideEvent*
///
bool q_hideevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QHideEvent*
///
bool q_hideevent_is_accepted(const void* self);

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
/// @param self const QHideEvent*
///
bool q_hideevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QHideEvent*
///
bool q_hideevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QHideEvent*
///
bool q_hideevent_is_single_point_event(const void* self);

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
void q_hideevent_super_set_accepted(void* self, bool accepted);

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
QContextMenuEvent* q_contextmenuevent_new(int32_t reason, const void* pos, const void* globalPos);

/// [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html)

/// q_contextmenuevent_new2 constructs a new QContextMenuEvent object.
///
/// @param reason enum QContextMenuEvent__Reason
/// @param pos QPoint*
///
QContextMenuEvent* q_contextmenuevent_new2(int32_t reason, const void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html)

/// q_contextmenuevent_new3 constructs a new QContextMenuEvent object.
///
/// @param reason enum QContextMenuEvent__Reason
/// @param pos QPoint*
/// @param globalPos QPoint*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
QContextMenuEvent* q_contextmenuevent_new3(int32_t reason, const void* pos, const void* globalPos, int32_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#clone)
///
/// @param self const QContextMenuEvent*
///
QContextMenuEvent* q_contextmenuevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QContextMenuEvent*
/// @param callback QContextMenuEvent* func(const QContextMenuEvent* self)
///
void q_contextmenuevent_on_clone(void* self, QContextMenuEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QContextMenuEvent*
///
QContextMenuEvent* q_contextmenuevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#x)
///
/// @param self const QContextMenuEvent*
///
int32_t q_contextmenuevent_x(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#y)
///
/// @param self const QContextMenuEvent*
///
int32_t q_contextmenuevent_y(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#globalX)
///
/// @param self const QContextMenuEvent*
///
int32_t q_contextmenuevent_global_x(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#globalY)
///
/// @param self const QContextMenuEvent*
///
int32_t q_contextmenuevent_global_y(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#pos)
///
/// @param self const QContextMenuEvent*
///
const QPoint* q_contextmenuevent_pos(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#globalPos)
///
/// @param self const QContextMenuEvent*
///
const QPoint* q_contextmenuevent_global_pos(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcontextmenuevent.html#reason)
///
/// @param self const QContextMenuEvent*
///
/// @return enum QContextMenuEvent__Reason
///
int32_t q_contextmenuevent_reason(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// @param self const QContextMenuEvent*
///
const QInputDevice* q_contextmenuevent_device(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// @param self const QContextMenuEvent*
///
/// @return enum QInputDevice__DeviceType
///
int32_t q_contextmenuevent_device_type(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
///
/// @param self const QContextMenuEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int32_t q_contextmenuevent_modifiers(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// @param self QContextMenuEvent*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
void q_contextmenuevent_set_modifiers(void* self, int32_t modifiers);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// @param self const QContextMenuEvent*
///
uint64_t q_contextmenuevent_timestamp(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QContextMenuEvent*
///
/// @return enum QEvent__Type
///
int32_t q_contextmenuevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QContextMenuEvent*
///
bool q_contextmenuevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QContextMenuEvent*
///
bool q_contextmenuevent_is_accepted(const void* self);

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
/// @param self const QContextMenuEvent*
///
bool q_contextmenuevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QContextMenuEvent*
///
bool q_contextmenuevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QContextMenuEvent*
///
bool q_contextmenuevent_is_single_point_event(const void* self);

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
void q_contextmenuevent_super_set_timestamp(void* self, uint64_t timestamp);

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
void q_contextmenuevent_super_set_accepted(void* self, bool accepted);

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
/// @param attributes libqt_list of QInputMethodEvent__Attribute*
///
QInputMethodEvent* q_inputmethodevent_new2(const char* preeditText, libqt_list attributes);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#clone)
///
/// @param self const QInputMethodEvent*
///
QInputMethodEvent* q_inputmethodevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QInputMethodEvent*
/// @param callback QInputMethodEvent* func(const QInputMethodEvent* self)
///
void q_inputmethodevent_on_clone(void* self, QInputMethodEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QInputMethodEvent*
///
QInputMethodEvent* q_inputmethodevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#setCommitString)
///
/// @param self QInputMethodEvent*
/// @param commitString const char*
///
void q_inputmethodevent_set_commit_string(void* self, const char* commitString);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#attributes)
///
/// @param self const QInputMethodEvent*
///
/// @return libqt_list of QInputMethodEvent__Attribute*
///
libqt_list q_inputmethodevent_attributes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#preeditString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QInputMethodEvent*
///
const char* q_inputmethodevent_preedit_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#commitString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QInputMethodEvent*
///
const char* q_inputmethodevent_commit_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#replacementStart)
///
/// @param self const QInputMethodEvent*
///
int32_t q_inputmethodevent_replacement_start(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent.html#replacementLength)
///
/// @param self const QInputMethodEvent*
///
int32_t q_inputmethodevent_replacement_length(const void* self);

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
/// @param self const QInputMethodEvent*
///
/// @return enum QEvent__Type
///
int32_t q_inputmethodevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QInputMethodEvent*
///
bool q_inputmethodevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QInputMethodEvent*
///
bool q_inputmethodevent_is_accepted(const void* self);

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
/// @param self const QInputMethodEvent*
///
bool q_inputmethodevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QInputMethodEvent*
///
bool q_inputmethodevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QInputMethodEvent*
///
bool q_inputmethodevent_is_single_point_event(const void* self);

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
void q_inputmethodevent_super_set_accepted(void* self, bool accepted);

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
QInputMethodQueryEvent* q_inputmethodqueryevent_new(int32_t queries);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#clone)
///
/// @param self const QInputMethodQueryEvent*
///
QInputMethodQueryEvent* q_inputmethodqueryevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QInputMethodQueryEvent*
/// @param callback QInputMethodQueryEvent* func(const QInputMethodQueryEvent* self)
///
void q_inputmethodqueryevent_on_clone(void* self, QInputMethodQueryEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QInputMethodQueryEvent*
///
QInputMethodQueryEvent* q_inputmethodqueryevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#queries)
///
/// @param self const QInputMethodQueryEvent*
///
/// @return flag of enum Qt__InputMethodQuery
///
int32_t q_inputmethodqueryevent_queries(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#setValue)
///
/// @param self QInputMethodQueryEvent*
/// @param query enum Qt__InputMethodQuery
/// @param value QVariant*
///
void q_inputmethodqueryevent_set_value(void* self, int32_t query, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodqueryevent.html#value)
///
/// @param self const QInputMethodQueryEvent*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_inputmethodqueryevent_value(const void* self, int32_t query);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QInputMethodQueryEvent*
///
/// @return enum QEvent__Type
///
int32_t q_inputmethodqueryevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QInputMethodQueryEvent*
///
bool q_inputmethodqueryevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QInputMethodQueryEvent*
///
bool q_inputmethodqueryevent_is_accepted(const void* self);

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
/// @param self const QInputMethodQueryEvent*
///
bool q_inputmethodqueryevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QInputMethodQueryEvent*
///
bool q_inputmethodqueryevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QInputMethodQueryEvent*
///
bool q_inputmethodqueryevent_is_single_point_event(const void* self);

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
void q_inputmethodqueryevent_super_set_accepted(void* self, bool accepted);

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
QDropEvent* q_dropevent_new(const void* pos, int32_t actions, const void* data, int32_t buttons, int32_t modifiers);

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
QDropEvent* q_dropevent_new2(const void* pos, int32_t actions, const void* data, int32_t buttons, int32_t modifiers, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#clone)
///
/// @param self const QDropEvent*
///
QDropEvent* q_dropevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QDropEvent*
/// @param callback QDropEvent* func(const QDropEvent* self)
///
void q_dropevent_on_clone(void* self, QDropEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QDropEvent*
///
QDropEvent* q_dropevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#pos)
///
/// @param self const QDropEvent*
///
QPoint* q_dropevent_pos(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#posF)
///
/// @param self const QDropEvent*
///
QPointF* q_dropevent_pos_f(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#mouseButtons)
///
/// @param self const QDropEvent*
///
/// @return flag of enum Qt__MouseButton
///
int32_t q_dropevent_mouse_buttons(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#keyboardModifiers)
///
/// @param self const QDropEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int32_t q_dropevent_keyboard_modifiers(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#position)
///
/// @param self const QDropEvent*
///
QPointF* q_dropevent_position(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#buttons)
///
/// @param self const QDropEvent*
///
/// @return flag of enum Qt__MouseButton
///
int32_t q_dropevent_buttons(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#modifiers)
///
/// @param self const QDropEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int32_t q_dropevent_modifiers(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#possibleActions)
///
/// @param self const QDropEvent*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_dropevent_possible_actions(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#proposedAction)
///
/// @param self const QDropEvent*
///
/// @return enum Qt__DropAction
///
int32_t q_dropevent_proposed_action(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#acceptProposedAction)
///
/// @param self QDropEvent*
///
void q_dropevent_accept_proposed_action(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#dropAction)
///
/// @param self const QDropEvent*
///
/// @return enum Qt__DropAction
///
int32_t q_dropevent_drop_action(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#setDropAction)
///
/// @param self QDropEvent*
/// @param action enum Qt__DropAction
///
void q_dropevent_set_drop_action(void* self, int32_t action);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#source)
///
/// @param self const QDropEvent*
///
QObject* q_dropevent_source(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#mimeData)
///
/// @param self const QDropEvent*
///
const QMimeData* q_dropevent_mime_data(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QDropEvent*
///
/// @return enum QEvent__Type
///
int32_t q_dropevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QDropEvent*
///
bool q_dropevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QDropEvent*
///
bool q_dropevent_is_accepted(const void* self);

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
/// @param self const QDropEvent*
///
bool q_dropevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QDropEvent*
///
bool q_dropevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QDropEvent*
///
bool q_dropevent_is_single_point_event(const void* self);

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
void q_dropevent_super_set_accepted(void* self, bool accepted);

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
QDragMoveEvent* q_dragmoveevent_new(const void* pos, int32_t actions, const void* data, int32_t buttons, int32_t modifiers);

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
QDragMoveEvent* q_dragmoveevent_new2(const void* pos, int32_t actions, const void* data, int32_t buttons, int32_t modifiers, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#clone)
///
/// @param self const QDragMoveEvent*
///
QDragMoveEvent* q_dragmoveevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QDragMoveEvent*
/// @param callback QDragMoveEvent* func(const QDragMoveEvent* self)
///
void q_dragmoveevent_on_clone(void* self, QDragMoveEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QDragMoveEvent*
///
QDragMoveEvent* q_dragmoveevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#answerRect)
///
/// @param self const QDragMoveEvent*
///
QRect* q_dragmoveevent_answer_rect(const void* self);

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
void q_dragmoveevent_accept2(void* self, const void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#ignore)
///
/// @param self QDragMoveEvent*
/// @param r QRect*
///
void q_dragmoveevent_ignore2(void* self, const void* r);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#pos)
///
/// @param self const QDragMoveEvent*
///
QPoint* q_dragmoveevent_pos(const void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#posF)
///
/// @param self const QDragMoveEvent*
///
QPointF* q_dragmoveevent_pos_f(const void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#mouseButtons)
///
/// @param self const QDragMoveEvent*
///
/// @return flag of enum Qt__MouseButton
///
int32_t q_dragmoveevent_mouse_buttons(const void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#keyboardModifiers)
///
/// @param self const QDragMoveEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int32_t q_dragmoveevent_keyboard_modifiers(const void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#position)
///
/// @param self const QDragMoveEvent*
///
QPointF* q_dragmoveevent_position(const void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#buttons)
///
/// @param self const QDragMoveEvent*
///
/// @return flag of enum Qt__MouseButton
///
int32_t q_dragmoveevent_buttons(const void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#modifiers)
///
/// @param self const QDragMoveEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int32_t q_dragmoveevent_modifiers(const void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#possibleActions)
///
/// @param self const QDragMoveEvent*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_dragmoveevent_possible_actions(const void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#proposedAction)
///
/// @param self const QDragMoveEvent*
///
/// @return enum Qt__DropAction
///
int32_t q_dragmoveevent_proposed_action(const void* self);

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
/// @param self const QDragMoveEvent*
///
/// @return enum Qt__DropAction
///
int32_t q_dragmoveevent_drop_action(const void* self);

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
/// @param self const QDragMoveEvent*
///
QObject* q_dragmoveevent_source(const void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#mimeData)
///
/// @param self const QDragMoveEvent*
///
const QMimeData* q_dragmoveevent_mime_data(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QDragMoveEvent*
///
/// @return enum QEvent__Type
///
int32_t q_dragmoveevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QDragMoveEvent*
///
bool q_dragmoveevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QDragMoveEvent*
///
bool q_dragmoveevent_is_accepted(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self const QDragMoveEvent*
///
bool q_dragmoveevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QDragMoveEvent*
///
bool q_dragmoveevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QDragMoveEvent*
///
bool q_dragmoveevent_is_single_point_event(const void* self);

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
void q_dragmoveevent_super_set_accepted(void* self, bool accepted);

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
QDragEnterEvent* q_dragenterevent_new(const void* pos, int32_t actions, const void* data, int32_t buttons, int32_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qdragenterevent.html#clone)
///
/// @param self const QDragEnterEvent*
///
QDragEnterEvent* q_dragenterevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdragenterevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QDragEnterEvent*
/// @param callback QDragEnterEvent* func(const QDragEnterEvent* self)
///
void q_dragenterevent_on_clone(void* self, QDragEnterEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdragenterevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QDragEnterEvent*
///
QDragEnterEvent* q_dragenterevent_super_clone(const void* self);

/// Inherited from QDragMoveEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#answerRect)
///
/// @param self const QDragEnterEvent*
///
QRect* q_dragenterevent_answer_rect(const void* self);

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
void q_dragenterevent_accept2(void* self, const void* r);

/// Inherited from QDragMoveEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdragmoveevent.html#ignore)
///
/// @param self QDragEnterEvent*
/// @param r QRect*
///
void q_dragenterevent_ignore2(void* self, const void* r);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#pos)
///
/// @param self const QDragEnterEvent*
///
QPoint* q_dragenterevent_pos(const void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#posF)
///
/// @param self const QDragEnterEvent*
///
QPointF* q_dragenterevent_pos_f(const void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#mouseButtons)
///
/// @param self const QDragEnterEvent*
///
/// @return flag of enum Qt__MouseButton
///
int32_t q_dragenterevent_mouse_buttons(const void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#keyboardModifiers)
///
/// @param self const QDragEnterEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int32_t q_dragenterevent_keyboard_modifiers(const void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#position)
///
/// @param self const QDragEnterEvent*
///
QPointF* q_dragenterevent_position(const void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#buttons)
///
/// @param self const QDragEnterEvent*
///
/// @return flag of enum Qt__MouseButton
///
int32_t q_dragenterevent_buttons(const void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#modifiers)
///
/// @param self const QDragEnterEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int32_t q_dragenterevent_modifiers(const void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#possibleActions)
///
/// @param self const QDragEnterEvent*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_dragenterevent_possible_actions(const void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#proposedAction)
///
/// @param self const QDragEnterEvent*
///
/// @return enum Qt__DropAction
///
int32_t q_dragenterevent_proposed_action(const void* self);

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
/// @param self const QDragEnterEvent*
///
/// @return enum Qt__DropAction
///
int32_t q_dragenterevent_drop_action(const void* self);

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
/// @param self const QDragEnterEvent*
///
QObject* q_dragenterevent_source(const void* self);

/// Inherited from QDropEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdropevent.html#mimeData)
///
/// @param self const QDragEnterEvent*
///
const QMimeData* q_dragenterevent_mime_data(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QDragEnterEvent*
///
/// @return enum QEvent__Type
///
int32_t q_dragenterevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QDragEnterEvent*
///
bool q_dragenterevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QDragEnterEvent*
///
bool q_dragenterevent_is_accepted(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self const QDragEnterEvent*
///
bool q_dragenterevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QDragEnterEvent*
///
bool q_dragenterevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QDragEnterEvent*
///
bool q_dragenterevent_is_single_point_event(const void* self);

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
void q_dragenterevent_super_set_accepted(void* self, bool accepted);

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
/// @param self const QDragLeaveEvent*
///
QDragLeaveEvent* q_dragleaveevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdragleaveevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QDragLeaveEvent*
/// @param callback QDragLeaveEvent* func(const QDragLeaveEvent* self)
///
void q_dragleaveevent_on_clone(void* self, QDragLeaveEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdragleaveevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QDragLeaveEvent*
///
QDragLeaveEvent* q_dragleaveevent_super_clone(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QDragLeaveEvent*
///
/// @return enum QEvent__Type
///
int32_t q_dragleaveevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QDragLeaveEvent*
///
bool q_dragleaveevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QDragLeaveEvent*
///
bool q_dragleaveevent_is_accepted(const void* self);

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
/// @param self const QDragLeaveEvent*
///
bool q_dragleaveevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QDragLeaveEvent*
///
bool q_dragleaveevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QDragLeaveEvent*
///
bool q_dragleaveevent_is_single_point_event(const void* self);

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
void q_dragleaveevent_super_set_accepted(void* self, bool accepted);

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
QHelpEvent* q_helpevent_new(int32_t type, const void* pos, const void* globalPos);

/// [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#clone)
///
/// @param self const QHelpEvent*
///
QHelpEvent* q_helpevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QHelpEvent*
/// @param callback QHelpEvent* func(const QHelpEvent* self)
///
void q_helpevent_on_clone(void* self, QHelpEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QHelpEvent*
///
QHelpEvent* q_helpevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#x)
///
/// @param self const QHelpEvent*
///
int32_t q_helpevent_x(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#y)
///
/// @param self const QHelpEvent*
///
int32_t q_helpevent_y(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#globalX)
///
/// @param self const QHelpEvent*
///
int32_t q_helpevent_global_x(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#globalY)
///
/// @param self const QHelpEvent*
///
int32_t q_helpevent_global_y(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#pos)
///
/// @param self const QHelpEvent*
///
const QPoint* q_helpevent_pos(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhelpevent.html#globalPos)
///
/// @param self const QHelpEvent*
///
const QPoint* q_helpevent_global_pos(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QHelpEvent*
///
/// @return enum QEvent__Type
///
int32_t q_helpevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QHelpEvent*
///
bool q_helpevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QHelpEvent*
///
bool q_helpevent_is_accepted(const void* self);

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
/// @param self const QHelpEvent*
///
bool q_helpevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QHelpEvent*
///
bool q_helpevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QHelpEvent*
///
bool q_helpevent_is_single_point_event(const void* self);

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
void q_helpevent_super_set_accepted(void* self, bool accepted);

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
/// @param self const QStatusTipEvent*
///
QStatusTipEvent* q_statustipevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatustipevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QStatusTipEvent*
/// @param callback QStatusTipEvent* func(const QStatusTipEvent* self)
///
void q_statustipevent_on_clone(void* self, QStatusTipEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qstatustipevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QStatusTipEvent*
///
QStatusTipEvent* q_statustipevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatustipevent.html#tip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QStatusTipEvent*
///
const char* q_statustipevent_tip(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QStatusTipEvent*
///
/// @return enum QEvent__Type
///
int32_t q_statustipevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QStatusTipEvent*
///
bool q_statustipevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QStatusTipEvent*
///
bool q_statustipevent_is_accepted(const void* self);

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
/// @param self const QStatusTipEvent*
///
bool q_statustipevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QStatusTipEvent*
///
bool q_statustipevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QStatusTipEvent*
///
bool q_statustipevent_is_single_point_event(const void* self);

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
void q_statustipevent_super_set_accepted(void* self, bool accepted);

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
/// @param self const QWhatsThisClickedEvent*
///
QWhatsThisClickedEvent* q_whatsthisclickedevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwhatsthisclickedevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QWhatsThisClickedEvent*
/// @param callback QWhatsThisClickedEvent* func(const QWhatsThisClickedEvent* self)
///
void q_whatsthisclickedevent_on_clone(void* self, QWhatsThisClickedEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwhatsthisclickedevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QWhatsThisClickedEvent*
///
QWhatsThisClickedEvent* q_whatsthisclickedevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwhatsthisclickedevent.html#href)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QWhatsThisClickedEvent*
///
const char* q_whatsthisclickedevent_href(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QWhatsThisClickedEvent*
///
/// @return enum QEvent__Type
///
int32_t q_whatsthisclickedevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QWhatsThisClickedEvent*
///
bool q_whatsthisclickedevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QWhatsThisClickedEvent*
///
bool q_whatsthisclickedevent_is_accepted(const void* self);

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
/// @param self const QWhatsThisClickedEvent*
///
bool q_whatsthisclickedevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QWhatsThisClickedEvent*
///
bool q_whatsthisclickedevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QWhatsThisClickedEvent*
///
bool q_whatsthisclickedevent_is_single_point_event(const void* self);

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
void q_whatsthisclickedevent_super_set_accepted(void* self, bool accepted);

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
/// @param self const QActionEvent*
///
QActionEvent* q_actionevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qactionevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QActionEvent*
/// @param callback QActionEvent* func(const QActionEvent* self)
///
void q_actionevent_on_clone(void* self, QActionEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qactionevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QActionEvent*
///
QActionEvent* q_actionevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qactionevent.html#action)
///
/// @param self const QActionEvent*
///
QAction* q_actionevent_action(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qactionevent.html#before)
///
/// @param self const QActionEvent*
///
QAction* q_actionevent_before(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QActionEvent*
///
/// @return enum QEvent__Type
///
int32_t q_actionevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QActionEvent*
///
bool q_actionevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QActionEvent*
///
bool q_actionevent_is_accepted(const void* self);

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
/// @param self const QActionEvent*
///
bool q_actionevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QActionEvent*
///
bool q_actionevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QActionEvent*
///
bool q_actionevent_is_single_point_event(const void* self);

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
void q_actionevent_super_set_accepted(void* self, bool accepted);

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
QFileOpenEvent* q_fileopenevent_new2(const void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html#clone)
///
/// @param self const QFileOpenEvent*
///
QFileOpenEvent* q_fileopenevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QFileOpenEvent*
/// @param callback QFileOpenEvent* func(const QFileOpenEvent* self)
///
void q_fileopenevent_on_clone(void* self, QFileOpenEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QFileOpenEvent*
///
QFileOpenEvent* q_fileopenevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html#file)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFileOpenEvent*
///
const char* q_fileopenevent_file(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html#url)
///
/// @param self const QFileOpenEvent*
///
QUrl* q_fileopenevent_url(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileopenevent.html#openFile)
///
/// @param self const QFileOpenEvent*
/// @param file QFile*
/// @param flags flag of enum QIODeviceBase__OpenModeFlag
///
bool q_fileopenevent_open_file(const void* self, void* file, int32_t flags);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QFileOpenEvent*
///
/// @return enum QEvent__Type
///
int32_t q_fileopenevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QFileOpenEvent*
///
bool q_fileopenevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QFileOpenEvent*
///
bool q_fileopenevent_is_accepted(const void* self);

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
/// @param self const QFileOpenEvent*
///
bool q_fileopenevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QFileOpenEvent*
///
bool q_fileopenevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QFileOpenEvent*
///
bool q_fileopenevent_is_single_point_event(const void* self);

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
void q_fileopenevent_super_set_accepted(void* self, bool accepted);

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
/// @param self const QToolBarChangeEvent*
///
QToolBarChangeEvent* q_toolbarchangeevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbarchangeevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QToolBarChangeEvent*
/// @param callback QToolBarChangeEvent* func(const QToolBarChangeEvent* self)
///
void q_toolbarchangeevent_on_clone(void* self, QToolBarChangeEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbarchangeevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QToolBarChangeEvent*
///
QToolBarChangeEvent* q_toolbarchangeevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbarchangeevent.html#toggle)
///
/// @param self const QToolBarChangeEvent*
///
bool q_toolbarchangeevent_toggle(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QToolBarChangeEvent*
///
/// @return enum QEvent__Type
///
int32_t q_toolbarchangeevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QToolBarChangeEvent*
///
bool q_toolbarchangeevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QToolBarChangeEvent*
///
bool q_toolbarchangeevent_is_accepted(const void* self);

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
/// @param self const QToolBarChangeEvent*
///
bool q_toolbarchangeevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QToolBarChangeEvent*
///
bool q_toolbarchangeevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QToolBarChangeEvent*
///
bool q_toolbarchangeevent_is_single_point_event(const void* self);

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
void q_toolbarchangeevent_super_set_accepted(void* self, bool accepted);

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
QShortcutEvent* q_shortcutevent_new(const void* key, int id);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html)

/// q_shortcutevent_new2 constructs a new QShortcutEvent object.
///
/// @param key QKeySequence*
///
QShortcutEvent* q_shortcutevent_new2(const void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html)

/// q_shortcutevent_new3 constructs a new QShortcutEvent object.
///
/// @param key QKeySequence*
/// @param id int
/// @param ambiguous bool
///
QShortcutEvent* q_shortcutevent_new3(const void* key, int id, bool ambiguous);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html)

/// q_shortcutevent_new4 constructs a new QShortcutEvent object.
///
/// @param key QKeySequence*
/// @param shortcut QShortcut*
///
QShortcutEvent* q_shortcutevent_new4(const void* key, const void* shortcut);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html)

/// q_shortcutevent_new5 constructs a new QShortcutEvent object.
///
/// @param key QKeySequence*
/// @param shortcut QShortcut*
/// @param ambiguous bool
///
QShortcutEvent* q_shortcutevent_new5(const void* key, const void* shortcut, bool ambiguous);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html#clone)
///
/// @param self const QShortcutEvent*
///
QShortcutEvent* q_shortcutevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QShortcutEvent*
/// @param callback QShortcutEvent* func(const QShortcutEvent* self)
///
void q_shortcutevent_on_clone(void* self, QShortcutEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QShortcutEvent*
///
QShortcutEvent* q_shortcutevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html#key)
///
/// @param self const QShortcutEvent*
///
const QKeySequence* q_shortcutevent_key(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html#shortcutId)
///
/// @param self const QShortcutEvent*
///
int32_t q_shortcutevent_shortcut_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qshortcutevent.html#isAmbiguous)
///
/// @param self const QShortcutEvent*
///
bool q_shortcutevent_is_ambiguous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QShortcutEvent*
///
/// @return enum QEvent__Type
///
int32_t q_shortcutevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QShortcutEvent*
///
bool q_shortcutevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QShortcutEvent*
///
bool q_shortcutevent_is_accepted(const void* self);

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
/// @param self const QShortcutEvent*
///
bool q_shortcutevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QShortcutEvent*
///
bool q_shortcutevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QShortcutEvent*
///
bool q_shortcutevent_is_single_point_event(const void* self);

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
void q_shortcutevent_super_set_accepted(void* self, bool accepted);

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
/// @param self const QWindowStateChangeEvent*
///
QWindowStateChangeEvent* q_windowstatechangeevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QWindowStateChangeEvent*
/// @param callback QWindowStateChangeEvent* func(const QWindowStateChangeEvent* self)
///
void q_windowstatechangeevent_on_clone(void* self, QWindowStateChangeEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QWindowStateChangeEvent*
///
QWindowStateChangeEvent* q_windowstatechangeevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#oldState)
///
/// @param self const QWindowStateChangeEvent*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_windowstatechangeevent_old_state(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwindowstatechangeevent.html#isOverride)
///
/// @param self const QWindowStateChangeEvent*
///
bool q_windowstatechangeevent_is_override(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QWindowStateChangeEvent*
///
/// @return enum QEvent__Type
///
int32_t q_windowstatechangeevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QWindowStateChangeEvent*
///
bool q_windowstatechangeevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QWindowStateChangeEvent*
///
bool q_windowstatechangeevent_is_accepted(const void* self);

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
/// @param self const QWindowStateChangeEvent*
///
bool q_windowstatechangeevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QWindowStateChangeEvent*
///
bool q_windowstatechangeevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QWindowStateChangeEvent*
///
bool q_windowstatechangeevent_is_single_point_event(const void* self);

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
void q_windowstatechangeevent_super_set_accepted(void* self, bool accepted);

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
QTouchEvent* q_touchevent_new2(int32_t eventType, const void* device, int32_t modifiers, uint8_t touchPointStates);

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html)

/// q_touchevent_new3 constructs a new QTouchEvent object.
///
/// @param eventType enum QEvent__Type
/// @param device QPointingDevice*
///
QTouchEvent* q_touchevent_new3(int32_t eventType, const void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html)

/// q_touchevent_new4 constructs a new QTouchEvent object.
///
/// @param eventType enum QEvent__Type
/// @param device QPointingDevice*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
QTouchEvent* q_touchevent_new4(int32_t eventType, const void* device, int32_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html)

/// q_touchevent_new5 constructs a new QTouchEvent object.
///
/// @param eventType enum QEvent__Type
/// @param device QPointingDevice*
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param touchPoints libqt_list of QEventPoint*
///
QTouchEvent* q_touchevent_new5(int32_t eventType, const void* device, int32_t modifiers, libqt_list touchPoints);

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html)

/// q_touchevent_new6 constructs a new QTouchEvent object.
///
/// @param eventType enum QEvent__Type
/// @param device QPointingDevice*
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param touchPointStates flag of enum QEventPoint__State
/// @param touchPoints libqt_list of QEventPoint*
///
QTouchEvent* q_touchevent_new6(int32_t eventType, const void* device, int32_t modifiers, uint8_t touchPointStates, libqt_list touchPoints);

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#clone)
///
/// @param self const QTouchEvent*
///
QTouchEvent* q_touchevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QTouchEvent*
/// @param callback QTouchEvent* func(const QTouchEvent* self)
///
void q_touchevent_on_clone(void* self, QTouchEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QTouchEvent*
///
QTouchEvent* q_touchevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#target)
///
/// @param self const QTouchEvent*
///
QObject* q_touchevent_target(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#touchPointStates)
///
/// @param self const QTouchEvent*
///
/// @return flag of enum QEventPoint__State
///
uint8_t q_touchevent_touch_point_states(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#touchPoints)
///
/// @param self const QTouchEvent*
///
/// @return libqt_list of QEventPoint*
///
libqt_list q_touchevent_touch_points(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isBeginEvent)
///
/// @param self const QTouchEvent*
///
bool q_touchevent_is_begin_event(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isBeginEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTouchEvent*
/// @param callback bool func(const QTouchEvent* self)
///
void q_touchevent_on_is_begin_event(void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isBeginEvent)
///
/// Base class method implementation
///
/// @param self const QTouchEvent*
///
bool q_touchevent_super_is_begin_event(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isUpdateEvent)
///
/// @param self const QTouchEvent*
///
bool q_touchevent_is_update_event(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isUpdateEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTouchEvent*
/// @param callback bool func(const QTouchEvent* self)
///
void q_touchevent_on_is_update_event(void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isUpdateEvent)
///
/// Base class method implementation
///
/// @param self const QTouchEvent*
///
bool q_touchevent_super_is_update_event(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isEndEvent)
///
/// @param self const QTouchEvent*
///
bool q_touchevent_is_end_event(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isEndEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTouchEvent*
/// @param callback bool func(const QTouchEvent* self)
///
void q_touchevent_on_is_end_event(void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtouchevent.html#isEndEvent)
///
/// Base class method implementation
///
/// @param self const QTouchEvent*
///
bool q_touchevent_super_is_end_event(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointingDevice)
///
/// @param self const QTouchEvent*
///
const QPointingDevice* q_touchevent_pointing_device(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointerType)
///
/// @param self const QTouchEvent*
///
/// @return enum QPointingDevice__PointerType
///
int32_t q_touchevent_pointer_type(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#pointCount)
///
/// @param self const QTouchEvent*
///
intptr_t q_touchevent_point_count(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#point)
///
/// @param self QTouchEvent*
/// @param i intptr_t
///
QEventPoint* q_touchevent_point(void* self, intptr_t i);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#points)
///
/// @param self const QTouchEvent*
///
/// @return libqt_list of QEventPoint*
///
libqt_list q_touchevent_points(const void* self);

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
/// @param self const QTouchEvent*
///
bool q_touchevent_all_points_grabbed(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#allPointsAccepted)
///
/// @param self const QTouchEvent*
///
bool q_touchevent_all_points_accepted(const void* self);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#exclusiveGrabber)
///
/// @param self const QTouchEvent*
/// @param point QEventPoint*
///
QObject* q_touchevent_exclusive_grabber(const void* self, const void* point);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#setExclusiveGrabber)
///
/// @param self QTouchEvent*
/// @param point QEventPoint*
/// @param exclusiveGrabber QObject*
///
void q_touchevent_set_exclusive_grabber(void* self, const void* point, void* exclusiveGrabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#clearPassiveGrabbers)
///
/// @param self QTouchEvent*
/// @param point QEventPoint*
///
void q_touchevent_clear_passive_grabbers(void* self, const void* point);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#addPassiveGrabber)
///
/// @param self QTouchEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_touchevent_add_passive_grabber(void* self, const void* point, void* grabber);

/// Inherited from QPointerEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpointerevent.html#removePassiveGrabber)
///
/// @param self QTouchEvent*
/// @param point QEventPoint*
/// @param grabber QObject*
///
bool q_touchevent_remove_passive_grabber(void* self, const void* point, void* grabber);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#device)
///
/// @param self const QTouchEvent*
///
const QInputDevice* q_touchevent_device(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#deviceType)
///
/// @param self const QTouchEvent*
///
/// @return enum QInputDevice__DeviceType
///
int32_t q_touchevent_device_type(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#modifiers)
///
/// @param self const QTouchEvent*
///
/// @return flag of enum Qt__KeyboardModifier
///
int32_t q_touchevent_modifiers(const void* self);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#setModifiers)
///
/// @param self QTouchEvent*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
void q_touchevent_set_modifiers(void* self, int32_t modifiers);

/// Inherited from QInputEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qinputevent.html#timestamp)
///
/// @param self const QTouchEvent*
///
uint64_t q_touchevent_timestamp(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QTouchEvent*
///
/// @return enum QEvent__Type
///
int32_t q_touchevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QTouchEvent*
///
bool q_touchevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QTouchEvent*
///
bool q_touchevent_is_accepted(const void* self);

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
/// @param self const QTouchEvent*
///
bool q_touchevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QTouchEvent*
///
bool q_touchevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QTouchEvent*
///
bool q_touchevent_is_single_point_event(const void* self);

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
void q_touchevent_super_set_timestamp(void* self, uint64_t timestamp);

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
void q_touchevent_super_set_accepted(void* self, bool accepted);

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
QScrollPrepareEvent* q_scrollprepareevent_new(const void* startPos);

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#clone)
///
/// @param self const QScrollPrepareEvent*
///
QScrollPrepareEvent* q_scrollprepareevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QScrollPrepareEvent*
/// @param callback QScrollPrepareEvent* func(const QScrollPrepareEvent* self)
///
void q_scrollprepareevent_on_clone(void* self, QScrollPrepareEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QScrollPrepareEvent*
///
QScrollPrepareEvent* q_scrollprepareevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#startPos)
///
/// @param self const QScrollPrepareEvent*
///
QPointF* q_scrollprepareevent_start_pos(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#viewportSize)
///
/// @param self const QScrollPrepareEvent*
///
QSizeF* q_scrollprepareevent_viewport_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#contentPosRange)
///
/// @param self const QScrollPrepareEvent*
///
QRectF* q_scrollprepareevent_content_pos_range(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#contentPos)
///
/// @param self const QScrollPrepareEvent*
///
QPointF* q_scrollprepareevent_content_pos(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#setViewportSize)
///
/// @param self QScrollPrepareEvent*
/// @param size QSizeF*
///
void q_scrollprepareevent_set_viewport_size(void* self, const void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#setContentPosRange)
///
/// @param self QScrollPrepareEvent*
/// @param rect QRectF*
///
void q_scrollprepareevent_set_content_pos_range(void* self, const void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollprepareevent.html#setContentPos)
///
/// @param self QScrollPrepareEvent*
/// @param pos QPointF*
///
void q_scrollprepareevent_set_content_pos(void* self, const void* pos);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QScrollPrepareEvent*
///
/// @return enum QEvent__Type
///
int32_t q_scrollprepareevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QScrollPrepareEvent*
///
bool q_scrollprepareevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QScrollPrepareEvent*
///
bool q_scrollprepareevent_is_accepted(const void* self);

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
/// @param self const QScrollPrepareEvent*
///
bool q_scrollprepareevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QScrollPrepareEvent*
///
bool q_scrollprepareevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QScrollPrepareEvent*
///
bool q_scrollprepareevent_is_single_point_event(const void* self);

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
void q_scrollprepareevent_super_set_accepted(void* self, bool accepted);

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
QScrollEvent* q_scrollevent_new(const void* contentPos, const void* overshoot, int32_t scrollState);

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html#clone)
///
/// @param self const QScrollEvent*
///
QScrollEvent* q_scrollevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QScrollEvent*
/// @param callback QScrollEvent* func(const QScrollEvent* self)
///
void q_scrollevent_on_clone(void* self, QScrollEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QScrollEvent*
///
QScrollEvent* q_scrollevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html#contentPos)
///
/// @param self const QScrollEvent*
///
QPointF* q_scrollevent_content_pos(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html#overshootDistance)
///
/// @param self const QScrollEvent*
///
QPointF* q_scrollevent_overshoot_distance(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscrollevent.html#scrollState)
///
/// @param self const QScrollEvent*
///
/// @return enum QScrollEvent__ScrollState
///
int32_t q_scrollevent_scroll_state(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QScrollEvent*
///
/// @return enum QEvent__Type
///
int32_t q_scrollevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QScrollEvent*
///
bool q_scrollevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QScrollEvent*
///
bool q_scrollevent_is_accepted(const void* self);

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
/// @param self const QScrollEvent*
///
bool q_scrollevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QScrollEvent*
///
bool q_scrollevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QScrollEvent*
///
bool q_scrollevent_is_single_point_event(const void* self);

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
void q_scrollevent_super_set_accepted(void* self, bool accepted);

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
/// @param self const QScreenOrientationChangeEvent*
///
QScreenOrientationChangeEvent* q_screenorientationchangeevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QScreenOrientationChangeEvent*
/// @param callback QScreenOrientationChangeEvent* func(const QScreenOrientationChangeEvent* self)
///
void q_screenorientationchangeevent_on_clone(void* self, QScreenOrientationChangeEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QScreenOrientationChangeEvent*
///
QScreenOrientationChangeEvent* q_screenorientationchangeevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#screen)
///
/// @param self const QScreenOrientationChangeEvent*
///
QScreen* q_screenorientationchangeevent_screen(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscreenorientationchangeevent.html#orientation)
///
/// @param self const QScreenOrientationChangeEvent*
///
/// @return enum Qt__ScreenOrientation
///
int32_t q_screenorientationchangeevent_orientation(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QScreenOrientationChangeEvent*
///
/// @return enum QEvent__Type
///
int32_t q_screenorientationchangeevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QScreenOrientationChangeEvent*
///
bool q_screenorientationchangeevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QScreenOrientationChangeEvent*
///
bool q_screenorientationchangeevent_is_accepted(const void* self);

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
/// @param self const QScreenOrientationChangeEvent*
///
bool q_screenorientationchangeevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QScreenOrientationChangeEvent*
///
bool q_screenorientationchangeevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QScreenOrientationChangeEvent*
///
bool q_screenorientationchangeevent_is_single_point_event(const void* self);

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
void q_screenorientationchangeevent_super_set_accepted(void* self, bool accepted);

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
/// @param self const QApplicationStateChangeEvent*
///
QApplicationStateChangeEvent* q_applicationstatechangeevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplicationstatechangeevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QApplicationStateChangeEvent*
/// @param callback QApplicationStateChangeEvent* func(const QApplicationStateChangeEvent* self)
///
void q_applicationstatechangeevent_on_clone(void* self, QApplicationStateChangeEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qapplicationstatechangeevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QApplicationStateChangeEvent*
///
QApplicationStateChangeEvent* q_applicationstatechangeevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qapplicationstatechangeevent.html#applicationState)
///
/// @param self const QApplicationStateChangeEvent*
///
/// @return enum Qt__ApplicationState
///
int32_t q_applicationstatechangeevent_application_state(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QApplicationStateChangeEvent*
///
/// @return enum QEvent__Type
///
int32_t q_applicationstatechangeevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QApplicationStateChangeEvent*
///
bool q_applicationstatechangeevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QApplicationStateChangeEvent*
///
bool q_applicationstatechangeevent_is_accepted(const void* self);

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
/// @param self const QApplicationStateChangeEvent*
///
bool q_applicationstatechangeevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QApplicationStateChangeEvent*
///
bool q_applicationstatechangeevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QApplicationStateChangeEvent*
///
bool q_applicationstatechangeevent_is_single_point_event(const void* self);

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
void q_applicationstatechangeevent_super_set_accepted(void* self, bool accepted);

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
/// @param self const QChildWindowEvent*
///
QChildWindowEvent* q_childwindowevent_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchildwindowevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QChildWindowEvent*
/// @param callback QChildWindowEvent* func(const QChildWindowEvent* self)
///
void q_childwindowevent_on_clone(void* self, QChildWindowEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qchildwindowevent.html#clone)
///
/// Base class method implementation
///
/// @param self const QChildWindowEvent*
///
QChildWindowEvent* q_childwindowevent_super_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchildwindowevent.html#child)
///
/// @param self const QChildWindowEvent*
///
QWindow* q_childwindowevent_child(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QChildWindowEvent*
///
/// @return enum QEvent__Type
///
int32_t q_childwindowevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QChildWindowEvent*
///
bool q_childwindowevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const QChildWindowEvent*
///
bool q_childwindowevent_is_accepted(const void* self);

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
/// @param self const QChildWindowEvent*
///
bool q_childwindowevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QChildWindowEvent*
///
bool q_childwindowevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QChildWindowEvent*
///
bool q_childwindowevent_is_single_point_event(const void* self);

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
void q_childwindowevent_super_set_accepted(void* self, bool accepted);

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

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html)

/// q_inputmethodevent__attribute_new3 constructs a new QInputMethodEvent::Attribute object.
///
/// @param param1 QInputMethodEvent__Attribute*
///
QInputMethodEvent__Attribute* q_inputmethodevent__attribute_new3(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#type-var)
///
/// @param self const QInputMethodEvent__Attribute*
///
/// @return enum QInputMethodEvent__AttributeType
///
int32_t q_inputmethodevent__attribute_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#type-var)
///
/// @param self QInputMethodEvent__Attribute*
/// @param type enum QInputMethodEvent__AttributeType
///
void q_inputmethodevent__attribute_set_type(void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#start-var)
///
/// @param self const QInputMethodEvent__Attribute*
///
int32_t q_inputmethodevent__attribute_start(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#start-var)
///
/// @param self QInputMethodEvent__Attribute*
/// @param start int
///
void q_inputmethodevent__attribute_set_start(void* self, int start);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#length-var)
///
/// @param self const QInputMethodEvent__Attribute*
///
int32_t q_inputmethodevent__attribute_length(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#length-var)
///
/// @param self QInputMethodEvent__Attribute*
/// @param length int
///
void q_inputmethodevent__attribute_set_length(void* self, int length);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputmethodevent-attribute.html#value-var)
///
/// @param self const QInputMethodEvent__Attribute*
///
QVariant* q_inputmethodevent__attribute_value(const void* self);

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
void q_inputmethodevent__attribute_operator_assign(void* self, const void* param1);

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
