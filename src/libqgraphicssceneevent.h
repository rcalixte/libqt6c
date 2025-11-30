#pragma once
#ifndef SRC_QT6C_LIBQGRAPHICSSCENEEVENT_H
#define SRC_QT6C_LIBQGRAPHICSSCENEEVENT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qgraphicssceneevent.html

/// q_graphicssceneevent_new constructs a new QGraphicsSceneEvent object.
///
/// @param type enum QEvent__Type
QGraphicsSceneEvent* q_graphicssceneevent_new(int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
///
/// @param self QGraphicsSceneEvent*
QWidget* q_graphicssceneevent_widget(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
///
/// @param self QGraphicsSceneEvent*
/// @param widget QWidget*
void q_graphicssceneevent_set_widget(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
///
/// @param self QGraphicsSceneEvent*
uint64_t q_graphicssceneevent_timestamp(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
///
/// @param self QGraphicsSceneEvent*
/// @param ts uint64_t
void q_graphicssceneevent_set_timestamp(void* self, uint64_t ts);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QGraphicsSceneEvent*
///
/// @return enum QEvent__Type
int32_t q_graphicssceneevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QGraphicsSceneEvent*
bool q_graphicssceneevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QGraphicsSceneEvent*
bool q_graphicssceneevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QGraphicsSceneEvent*
void q_graphicssceneevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QGraphicsSceneEvent*
void q_graphicssceneevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QGraphicsSceneEvent*
bool q_graphicssceneevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QGraphicsSceneEvent*
bool q_graphicssceneevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QGraphicsSceneEvent*
bool q_graphicssceneevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_graphicssceneevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
int32_t q_graphicssceneevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSceneEvent*
/// @param accepted bool
void q_graphicssceneevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSceneEvent*
/// @param accepted bool
void q_graphicssceneevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSceneEvent*
/// @param callback void func(QGraphicsSceneEvent* self, bool accepted)
void q_graphicssceneevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSceneEvent*
QEvent* q_graphicssceneevent_clone(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSceneEvent*
QEvent* q_graphicssceneevent_qbase_clone(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSceneEvent*
/// @param callback QEvent* func()
void q_graphicssceneevent_on_clone(void* self, QEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#dtor.QGraphicsSceneEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsSceneEvent*
void q_graphicssceneevent_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html

/// q_graphicsscenemouseevent_new constructs a new QGraphicsSceneMouseEvent object.
///
QGraphicsSceneMouseEvent* q_graphicsscenemouseevent_new();

/// q_graphicsscenemouseevent_new2 constructs a new QGraphicsSceneMouseEvent object.
///
/// @param type enum QEvent__Type
QGraphicsSceneMouseEvent* q_graphicsscenemouseevent_new2(int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#pos)
///
/// @param self QGraphicsSceneMouseEvent*
QPointF* q_graphicsscenemouseevent_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setPos)
///
/// @param self QGraphicsSceneMouseEvent*
/// @param pos QPointF*
void q_graphicsscenemouseevent_set_pos(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#scenePos)
///
/// @param self QGraphicsSceneMouseEvent*
QPointF* q_graphicsscenemouseevent_scene_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setScenePos)
///
/// @param self QGraphicsSceneMouseEvent*
/// @param pos QPointF*
void q_graphicsscenemouseevent_set_scene_pos(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#screenPos)
///
/// @param self QGraphicsSceneMouseEvent*
QPoint* q_graphicsscenemouseevent_screen_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setScreenPos)
///
/// @param self QGraphicsSceneMouseEvent*
/// @param pos QPoint*
void q_graphicsscenemouseevent_set_screen_pos(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#buttonDownPos)
///
/// @param self QGraphicsSceneMouseEvent*
/// @param button enum Qt__MouseButton
QPointF* q_graphicsscenemouseevent_button_down_pos(void* self, int64_t button);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setButtonDownPos)
///
/// @param self QGraphicsSceneMouseEvent*
/// @param button enum Qt__MouseButton
/// @param pos QPointF*
void q_graphicsscenemouseevent_set_button_down_pos(void* self, int64_t button, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#buttonDownScenePos)
///
/// @param self QGraphicsSceneMouseEvent*
/// @param button enum Qt__MouseButton
QPointF* q_graphicsscenemouseevent_button_down_scene_pos(void* self, int64_t button);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setButtonDownScenePos)
///
/// @param self QGraphicsSceneMouseEvent*
/// @param button enum Qt__MouseButton
/// @param pos QPointF*
void q_graphicsscenemouseevent_set_button_down_scene_pos(void* self, int64_t button, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#buttonDownScreenPos)
///
/// @param self QGraphicsSceneMouseEvent*
/// @param button enum Qt__MouseButton
QPoint* q_graphicsscenemouseevent_button_down_screen_pos(void* self, int64_t button);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setButtonDownScreenPos)
///
/// @param self QGraphicsSceneMouseEvent*
/// @param button enum Qt__MouseButton
/// @param pos QPoint*
void q_graphicsscenemouseevent_set_button_down_screen_pos(void* self, int64_t button, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#lastPos)
///
/// @param self QGraphicsSceneMouseEvent*
QPointF* q_graphicsscenemouseevent_last_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setLastPos)
///
/// @param self QGraphicsSceneMouseEvent*
/// @param pos QPointF*
void q_graphicsscenemouseevent_set_last_pos(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#lastScenePos)
///
/// @param self QGraphicsSceneMouseEvent*
QPointF* q_graphicsscenemouseevent_last_scene_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setLastScenePos)
///
/// @param self QGraphicsSceneMouseEvent*
/// @param pos QPointF*
void q_graphicsscenemouseevent_set_last_scene_pos(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#lastScreenPos)
///
/// @param self QGraphicsSceneMouseEvent*
QPoint* q_graphicsscenemouseevent_last_screen_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setLastScreenPos)
///
/// @param self QGraphicsSceneMouseEvent*
/// @param pos QPoint*
void q_graphicsscenemouseevent_set_last_screen_pos(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#buttons)
///
/// @param self QGraphicsSceneMouseEvent*
///
/// @return flag of enum Qt__MouseButton
int64_t q_graphicsscenemouseevent_buttons(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setButtons)
///
/// @param self QGraphicsSceneMouseEvent*
/// @param buttons flag of enum Qt__MouseButton
void q_graphicsscenemouseevent_set_buttons(void* self, int64_t buttons);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#button)
///
/// @param self QGraphicsSceneMouseEvent*
///
/// @return enum Qt__MouseButton
int64_t q_graphicsscenemouseevent_button(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setButton)
///
/// @param self QGraphicsSceneMouseEvent*
/// @param button enum Qt__MouseButton
void q_graphicsscenemouseevent_set_button(void* self, int64_t button);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#modifiers)
///
/// @param self QGraphicsSceneMouseEvent*
///
/// @return flag of enum Qt__KeyboardModifier
int64_t q_graphicsscenemouseevent_modifiers(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setModifiers)
///
/// @param self QGraphicsSceneMouseEvent*
/// @param modifiers flag of enum Qt__KeyboardModifier
void q_graphicsscenemouseevent_set_modifiers(void* self, int64_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#source)
///
/// @param self QGraphicsSceneMouseEvent*
///
/// @return enum Qt__MouseEventSource
int32_t q_graphicsscenemouseevent_source(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setSource)
///
/// @param self QGraphicsSceneMouseEvent*
/// @param source enum Qt__MouseEventSource
void q_graphicsscenemouseevent_set_source(void* self, int32_t source);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#flags)
///
/// @param self QGraphicsSceneMouseEvent*
///
/// @return flag of enum Qt__MouseEventFlag
int32_t q_graphicsscenemouseevent_flags(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setFlags)
///
/// @param self QGraphicsSceneMouseEvent*
/// @param flags flag of enum Qt__MouseEventFlag
void q_graphicsscenemouseevent_set_flags(void* self, int32_t flags);

/// Inherited from QGraphicsSceneEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
///
/// @param self QGraphicsSceneMouseEvent*
QWidget* q_graphicsscenemouseevent_widget(void* self);

/// Inherited from QGraphicsSceneEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
///
/// @param self QGraphicsSceneMouseEvent*
/// @param widget QWidget*
void q_graphicsscenemouseevent_set_widget(void* self, void* widget);

/// Inherited from QGraphicsSceneEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
///
/// @param self QGraphicsSceneMouseEvent*
uint64_t q_graphicsscenemouseevent_timestamp(void* self);

/// Inherited from QGraphicsSceneEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
///
/// @param self QGraphicsSceneMouseEvent*
/// @param ts uint64_t
void q_graphicsscenemouseevent_set_timestamp(void* self, uint64_t ts);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QGraphicsSceneMouseEvent*
///
/// @return enum QEvent__Type
int32_t q_graphicsscenemouseevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QGraphicsSceneMouseEvent*
bool q_graphicsscenemouseevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QGraphicsSceneMouseEvent*
bool q_graphicsscenemouseevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QGraphicsSceneMouseEvent*
void q_graphicsscenemouseevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QGraphicsSceneMouseEvent*
void q_graphicsscenemouseevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QGraphicsSceneMouseEvent*
bool q_graphicsscenemouseevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QGraphicsSceneMouseEvent*
bool q_graphicsscenemouseevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QGraphicsSceneMouseEvent*
bool q_graphicsscenemouseevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_graphicsscenemouseevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
int32_t q_graphicsscenemouseevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSceneMouseEvent*
/// @param accepted bool
void q_graphicsscenemouseevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSceneMouseEvent*
/// @param accepted bool
void q_graphicsscenemouseevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSceneMouseEvent*
/// @param callback void func(QGraphicsSceneMouseEvent* self, bool accepted)
void q_graphicsscenemouseevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSceneMouseEvent*
QEvent* q_graphicsscenemouseevent_clone(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSceneMouseEvent*
QEvent* q_graphicsscenemouseevent_qbase_clone(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSceneMouseEvent*
/// @param callback QEvent* func()
void q_graphicsscenemouseevent_on_clone(void* self, QEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#dtor.QGraphicsSceneMouseEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsSceneMouseEvent*
void q_graphicsscenemouseevent_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html

/// q_graphicsscenewheelevent_new constructs a new QGraphicsSceneWheelEvent object.
///
QGraphicsSceneWheelEvent* q_graphicsscenewheelevent_new();

/// q_graphicsscenewheelevent_new2 constructs a new QGraphicsSceneWheelEvent object.
///
/// @param type enum QEvent__Type
QGraphicsSceneWheelEvent* q_graphicsscenewheelevent_new2(int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#pos)
///
/// @param self QGraphicsSceneWheelEvent*
QPointF* q_graphicsscenewheelevent_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setPos)
///
/// @param self QGraphicsSceneWheelEvent*
/// @param pos QPointF*
void q_graphicsscenewheelevent_set_pos(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#scenePos)
///
/// @param self QGraphicsSceneWheelEvent*
QPointF* q_graphicsscenewheelevent_scene_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setScenePos)
///
/// @param self QGraphicsSceneWheelEvent*
/// @param pos QPointF*
void q_graphicsscenewheelevent_set_scene_pos(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#screenPos)
///
/// @param self QGraphicsSceneWheelEvent*
QPoint* q_graphicsscenewheelevent_screen_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setScreenPos)
///
/// @param self QGraphicsSceneWheelEvent*
/// @param pos QPoint*
void q_graphicsscenewheelevent_set_screen_pos(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#buttons)
///
/// @param self QGraphicsSceneWheelEvent*
///
/// @return flag of enum Qt__MouseButton
int64_t q_graphicsscenewheelevent_buttons(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setButtons)
///
/// @param self QGraphicsSceneWheelEvent*
/// @param buttons flag of enum Qt__MouseButton
void q_graphicsscenewheelevent_set_buttons(void* self, int64_t buttons);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#modifiers)
///
/// @param self QGraphicsSceneWheelEvent*
///
/// @return flag of enum Qt__KeyboardModifier
int64_t q_graphicsscenewheelevent_modifiers(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setModifiers)
///
/// @param self QGraphicsSceneWheelEvent*
/// @param modifiers flag of enum Qt__KeyboardModifier
void q_graphicsscenewheelevent_set_modifiers(void* self, int64_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#delta)
///
/// @param self QGraphicsSceneWheelEvent*
int32_t q_graphicsscenewheelevent_delta(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setDelta)
///
/// @param self QGraphicsSceneWheelEvent*
/// @param delta int
void q_graphicsscenewheelevent_set_delta(void* self, int delta);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#orientation)
///
/// @param self QGraphicsSceneWheelEvent*
///
/// @return enum Qt__Orientation
int32_t q_graphicsscenewheelevent_orientation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setOrientation)
///
/// @param self QGraphicsSceneWheelEvent*
/// @param orientation enum Qt__Orientation
void q_graphicsscenewheelevent_set_orientation(void* self, int32_t orientation);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#phase)
///
/// @param self QGraphicsSceneWheelEvent*
///
/// @return enum Qt__ScrollPhase
int32_t q_graphicsscenewheelevent_phase(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setPhase)
///
/// @param self QGraphicsSceneWheelEvent*
/// @param scrollPhase enum Qt__ScrollPhase
void q_graphicsscenewheelevent_set_phase(void* self, int32_t scrollPhase);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#pixelDelta)
///
/// @param self QGraphicsSceneWheelEvent*
QPoint* q_graphicsscenewheelevent_pixel_delta(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setPixelDelta)
///
/// @param self QGraphicsSceneWheelEvent*
/// @param delta QPoint*
void q_graphicsscenewheelevent_set_pixel_delta(void* self, void* delta);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#isInverted)
///
/// @param self QGraphicsSceneWheelEvent*
bool q_graphicsscenewheelevent_is_inverted(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setInverted)
///
/// @param self QGraphicsSceneWheelEvent*
/// @param inverted bool
void q_graphicsscenewheelevent_set_inverted(void* self, bool inverted);

/// Inherited from QGraphicsSceneEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
///
/// @param self QGraphicsSceneWheelEvent*
QWidget* q_graphicsscenewheelevent_widget(void* self);

/// Inherited from QGraphicsSceneEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
///
/// @param self QGraphicsSceneWheelEvent*
/// @param widget QWidget*
void q_graphicsscenewheelevent_set_widget(void* self, void* widget);

/// Inherited from QGraphicsSceneEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
///
/// @param self QGraphicsSceneWheelEvent*
uint64_t q_graphicsscenewheelevent_timestamp(void* self);

/// Inherited from QGraphicsSceneEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
///
/// @param self QGraphicsSceneWheelEvent*
/// @param ts uint64_t
void q_graphicsscenewheelevent_set_timestamp(void* self, uint64_t ts);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QGraphicsSceneWheelEvent*
///
/// @return enum QEvent__Type
int32_t q_graphicsscenewheelevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QGraphicsSceneWheelEvent*
bool q_graphicsscenewheelevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QGraphicsSceneWheelEvent*
bool q_graphicsscenewheelevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QGraphicsSceneWheelEvent*
void q_graphicsscenewheelevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QGraphicsSceneWheelEvent*
void q_graphicsscenewheelevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QGraphicsSceneWheelEvent*
bool q_graphicsscenewheelevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QGraphicsSceneWheelEvent*
bool q_graphicsscenewheelevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QGraphicsSceneWheelEvent*
bool q_graphicsscenewheelevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_graphicsscenewheelevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
int32_t q_graphicsscenewheelevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSceneWheelEvent*
/// @param accepted bool
void q_graphicsscenewheelevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSceneWheelEvent*
/// @param accepted bool
void q_graphicsscenewheelevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSceneWheelEvent*
/// @param callback void func(QGraphicsSceneWheelEvent* self, bool accepted)
void q_graphicsscenewheelevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSceneWheelEvent*
QEvent* q_graphicsscenewheelevent_clone(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSceneWheelEvent*
QEvent* q_graphicsscenewheelevent_qbase_clone(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSceneWheelEvent*
/// @param callback QEvent* func()
void q_graphicsscenewheelevent_on_clone(void* self, QEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#dtor.QGraphicsSceneWheelEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsSceneWheelEvent*
void q_graphicsscenewheelevent_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html

/// q_graphicsscenecontextmenuevent_new constructs a new QGraphicsSceneContextMenuEvent object.
///
QGraphicsSceneContextMenuEvent* q_graphicsscenecontextmenuevent_new();

/// q_graphicsscenecontextmenuevent_new2 constructs a new QGraphicsSceneContextMenuEvent object.
///
/// @param type enum QEvent__Type
QGraphicsSceneContextMenuEvent* q_graphicsscenecontextmenuevent_new2(int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#pos)
///
/// @param self QGraphicsSceneContextMenuEvent*
QPointF* q_graphicsscenecontextmenuevent_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#setPos)
///
/// @param self QGraphicsSceneContextMenuEvent*
/// @param pos QPointF*
void q_graphicsscenecontextmenuevent_set_pos(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#scenePos)
///
/// @param self QGraphicsSceneContextMenuEvent*
QPointF* q_graphicsscenecontextmenuevent_scene_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#setScenePos)
///
/// @param self QGraphicsSceneContextMenuEvent*
/// @param pos QPointF*
void q_graphicsscenecontextmenuevent_set_scene_pos(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#screenPos)
///
/// @param self QGraphicsSceneContextMenuEvent*
QPoint* q_graphicsscenecontextmenuevent_screen_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#setScreenPos)
///
/// @param self QGraphicsSceneContextMenuEvent*
/// @param pos QPoint*
void q_graphicsscenecontextmenuevent_set_screen_pos(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#modifiers)
///
/// @param self QGraphicsSceneContextMenuEvent*
///
/// @return flag of enum Qt__KeyboardModifier
int64_t q_graphicsscenecontextmenuevent_modifiers(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#setModifiers)
///
/// @param self QGraphicsSceneContextMenuEvent*
/// @param modifiers flag of enum Qt__KeyboardModifier
void q_graphicsscenecontextmenuevent_set_modifiers(void* self, int64_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#reason)
///
/// @param self QGraphicsSceneContextMenuEvent*
///
/// @return enum QGraphicsSceneContextMenuEvent__Reason
int32_t q_graphicsscenecontextmenuevent_reason(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#setReason)
///
/// @param self QGraphicsSceneContextMenuEvent*
/// @param reason enum QGraphicsSceneContextMenuEvent__Reason
void q_graphicsscenecontextmenuevent_set_reason(void* self, int32_t reason);

/// Inherited from QGraphicsSceneEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
///
/// @param self QGraphicsSceneContextMenuEvent*
QWidget* q_graphicsscenecontextmenuevent_widget(void* self);

/// Inherited from QGraphicsSceneEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
///
/// @param self QGraphicsSceneContextMenuEvent*
/// @param widget QWidget*
void q_graphicsscenecontextmenuevent_set_widget(void* self, void* widget);

/// Inherited from QGraphicsSceneEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
///
/// @param self QGraphicsSceneContextMenuEvent*
uint64_t q_graphicsscenecontextmenuevent_timestamp(void* self);

/// Inherited from QGraphicsSceneEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
///
/// @param self QGraphicsSceneContextMenuEvent*
/// @param ts uint64_t
void q_graphicsscenecontextmenuevent_set_timestamp(void* self, uint64_t ts);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QGraphicsSceneContextMenuEvent*
///
/// @return enum QEvent__Type
int32_t q_graphicsscenecontextmenuevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QGraphicsSceneContextMenuEvent*
bool q_graphicsscenecontextmenuevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QGraphicsSceneContextMenuEvent*
bool q_graphicsscenecontextmenuevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QGraphicsSceneContextMenuEvent*
void q_graphicsscenecontextmenuevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QGraphicsSceneContextMenuEvent*
void q_graphicsscenecontextmenuevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QGraphicsSceneContextMenuEvent*
bool q_graphicsscenecontextmenuevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QGraphicsSceneContextMenuEvent*
bool q_graphicsscenecontextmenuevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QGraphicsSceneContextMenuEvent*
bool q_graphicsscenecontextmenuevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_graphicsscenecontextmenuevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
int32_t q_graphicsscenecontextmenuevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSceneContextMenuEvent*
/// @param accepted bool
void q_graphicsscenecontextmenuevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSceneContextMenuEvent*
/// @param accepted bool
void q_graphicsscenecontextmenuevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSceneContextMenuEvent*
/// @param callback void func(QGraphicsSceneContextMenuEvent* self, bool accepted)
void q_graphicsscenecontextmenuevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSceneContextMenuEvent*
QEvent* q_graphicsscenecontextmenuevent_clone(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSceneContextMenuEvent*
QEvent* q_graphicsscenecontextmenuevent_qbase_clone(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSceneContextMenuEvent*
/// @param callback QEvent* func()
void q_graphicsscenecontextmenuevent_on_clone(void* self, QEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#dtor.QGraphicsSceneContextMenuEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsSceneContextMenuEvent*
void q_graphicsscenecontextmenuevent_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html

/// q_graphicsscenehoverevent_new constructs a new QGraphicsSceneHoverEvent object.
///
QGraphicsSceneHoverEvent* q_graphicsscenehoverevent_new();

/// q_graphicsscenehoverevent_new2 constructs a new QGraphicsSceneHoverEvent object.
///
/// @param type enum QEvent__Type
QGraphicsSceneHoverEvent* q_graphicsscenehoverevent_new2(int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#pos)
///
/// @param self QGraphicsSceneHoverEvent*
QPointF* q_graphicsscenehoverevent_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setPos)
///
/// @param self QGraphicsSceneHoverEvent*
/// @param pos QPointF*
void q_graphicsscenehoverevent_set_pos(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#scenePos)
///
/// @param self QGraphicsSceneHoverEvent*
QPointF* q_graphicsscenehoverevent_scene_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setScenePos)
///
/// @param self QGraphicsSceneHoverEvent*
/// @param pos QPointF*
void q_graphicsscenehoverevent_set_scene_pos(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#screenPos)
///
/// @param self QGraphicsSceneHoverEvent*
QPoint* q_graphicsscenehoverevent_screen_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setScreenPos)
///
/// @param self QGraphicsSceneHoverEvent*
/// @param pos QPoint*
void q_graphicsscenehoverevent_set_screen_pos(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#lastPos)
///
/// @param self QGraphicsSceneHoverEvent*
QPointF* q_graphicsscenehoverevent_last_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setLastPos)
///
/// @param self QGraphicsSceneHoverEvent*
/// @param pos QPointF*
void q_graphicsscenehoverevent_set_last_pos(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#lastScenePos)
///
/// @param self QGraphicsSceneHoverEvent*
QPointF* q_graphicsscenehoverevent_last_scene_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setLastScenePos)
///
/// @param self QGraphicsSceneHoverEvent*
/// @param pos QPointF*
void q_graphicsscenehoverevent_set_last_scene_pos(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#lastScreenPos)
///
/// @param self QGraphicsSceneHoverEvent*
QPoint* q_graphicsscenehoverevent_last_screen_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setLastScreenPos)
///
/// @param self QGraphicsSceneHoverEvent*
/// @param pos QPoint*
void q_graphicsscenehoverevent_set_last_screen_pos(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#modifiers)
///
/// @param self QGraphicsSceneHoverEvent*
///
/// @return flag of enum Qt__KeyboardModifier
int64_t q_graphicsscenehoverevent_modifiers(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setModifiers)
///
/// @param self QGraphicsSceneHoverEvent*
/// @param modifiers flag of enum Qt__KeyboardModifier
void q_graphicsscenehoverevent_set_modifiers(void* self, int64_t modifiers);

/// Inherited from QGraphicsSceneEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
///
/// @param self QGraphicsSceneHoverEvent*
QWidget* q_graphicsscenehoverevent_widget(void* self);

/// Inherited from QGraphicsSceneEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
///
/// @param self QGraphicsSceneHoverEvent*
/// @param widget QWidget*
void q_graphicsscenehoverevent_set_widget(void* self, void* widget);

/// Inherited from QGraphicsSceneEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
///
/// @param self QGraphicsSceneHoverEvent*
uint64_t q_graphicsscenehoverevent_timestamp(void* self);

/// Inherited from QGraphicsSceneEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
///
/// @param self QGraphicsSceneHoverEvent*
/// @param ts uint64_t
void q_graphicsscenehoverevent_set_timestamp(void* self, uint64_t ts);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QGraphicsSceneHoverEvent*
///
/// @return enum QEvent__Type
int32_t q_graphicsscenehoverevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QGraphicsSceneHoverEvent*
bool q_graphicsscenehoverevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QGraphicsSceneHoverEvent*
bool q_graphicsscenehoverevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QGraphicsSceneHoverEvent*
void q_graphicsscenehoverevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QGraphicsSceneHoverEvent*
void q_graphicsscenehoverevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QGraphicsSceneHoverEvent*
bool q_graphicsscenehoverevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QGraphicsSceneHoverEvent*
bool q_graphicsscenehoverevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QGraphicsSceneHoverEvent*
bool q_graphicsscenehoverevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_graphicsscenehoverevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
int32_t q_graphicsscenehoverevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSceneHoverEvent*
/// @param accepted bool
void q_graphicsscenehoverevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSceneHoverEvent*
/// @param accepted bool
void q_graphicsscenehoverevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSceneHoverEvent*
/// @param callback void func(QGraphicsSceneHoverEvent* self, bool accepted)
void q_graphicsscenehoverevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSceneHoverEvent*
QEvent* q_graphicsscenehoverevent_clone(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSceneHoverEvent*
QEvent* q_graphicsscenehoverevent_qbase_clone(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSceneHoverEvent*
/// @param callback QEvent* func()
void q_graphicsscenehoverevent_on_clone(void* self, QEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#dtor.QGraphicsSceneHoverEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsSceneHoverEvent*
void q_graphicsscenehoverevent_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html

/// q_graphicsscenehelpevent_new constructs a new QGraphicsSceneHelpEvent object.
///
QGraphicsSceneHelpEvent* q_graphicsscenehelpevent_new();

/// q_graphicsscenehelpevent_new2 constructs a new QGraphicsSceneHelpEvent object.
///
/// @param type enum QEvent__Type
QGraphicsSceneHelpEvent* q_graphicsscenehelpevent_new2(int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html#scenePos)
///
/// @param self QGraphicsSceneHelpEvent*
QPointF* q_graphicsscenehelpevent_scene_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html#setScenePos)
///
/// @param self QGraphicsSceneHelpEvent*
/// @param pos QPointF*
void q_graphicsscenehelpevent_set_scene_pos(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html#screenPos)
///
/// @param self QGraphicsSceneHelpEvent*
QPoint* q_graphicsscenehelpevent_screen_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html#setScreenPos)
///
/// @param self QGraphicsSceneHelpEvent*
/// @param pos QPoint*
void q_graphicsscenehelpevent_set_screen_pos(void* self, void* pos);

/// Inherited from QGraphicsSceneEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
///
/// @param self QGraphicsSceneHelpEvent*
QWidget* q_graphicsscenehelpevent_widget(void* self);

/// Inherited from QGraphicsSceneEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
///
/// @param self QGraphicsSceneHelpEvent*
/// @param widget QWidget*
void q_graphicsscenehelpevent_set_widget(void* self, void* widget);

/// Inherited from QGraphicsSceneEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
///
/// @param self QGraphicsSceneHelpEvent*
uint64_t q_graphicsscenehelpevent_timestamp(void* self);

/// Inherited from QGraphicsSceneEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
///
/// @param self QGraphicsSceneHelpEvent*
/// @param ts uint64_t
void q_graphicsscenehelpevent_set_timestamp(void* self, uint64_t ts);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QGraphicsSceneHelpEvent*
///
/// @return enum QEvent__Type
int32_t q_graphicsscenehelpevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QGraphicsSceneHelpEvent*
bool q_graphicsscenehelpevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QGraphicsSceneHelpEvent*
bool q_graphicsscenehelpevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QGraphicsSceneHelpEvent*
void q_graphicsscenehelpevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QGraphicsSceneHelpEvent*
void q_graphicsscenehelpevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QGraphicsSceneHelpEvent*
bool q_graphicsscenehelpevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QGraphicsSceneHelpEvent*
bool q_graphicsscenehelpevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QGraphicsSceneHelpEvent*
bool q_graphicsscenehelpevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_graphicsscenehelpevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
int32_t q_graphicsscenehelpevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSceneHelpEvent*
/// @param accepted bool
void q_graphicsscenehelpevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSceneHelpEvent*
/// @param accepted bool
void q_graphicsscenehelpevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSceneHelpEvent*
/// @param callback void func(QGraphicsSceneHelpEvent* self, bool accepted)
void q_graphicsscenehelpevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSceneHelpEvent*
QEvent* q_graphicsscenehelpevent_clone(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSceneHelpEvent*
QEvent* q_graphicsscenehelpevent_qbase_clone(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSceneHelpEvent*
/// @param callback QEvent* func()
void q_graphicsscenehelpevent_on_clone(void* self, QEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html#dtor.QGraphicsSceneHelpEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsSceneHelpEvent*
void q_graphicsscenehelpevent_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html

/// q_graphicsscenedragdropevent_new constructs a new QGraphicsSceneDragDropEvent object.
///
QGraphicsSceneDragDropEvent* q_graphicsscenedragdropevent_new();

/// q_graphicsscenedragdropevent_new2 constructs a new QGraphicsSceneDragDropEvent object.
///
/// @param type enum QEvent__Type
QGraphicsSceneDragDropEvent* q_graphicsscenedragdropevent_new2(int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#pos)
///
/// @param self QGraphicsSceneDragDropEvent*
QPointF* q_graphicsscenedragdropevent_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setPos)
///
/// @param self QGraphicsSceneDragDropEvent*
/// @param pos QPointF*
void q_graphicsscenedragdropevent_set_pos(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#scenePos)
///
/// @param self QGraphicsSceneDragDropEvent*
QPointF* q_graphicsscenedragdropevent_scene_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setScenePos)
///
/// @param self QGraphicsSceneDragDropEvent*
/// @param pos QPointF*
void q_graphicsscenedragdropevent_set_scene_pos(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#screenPos)
///
/// @param self QGraphicsSceneDragDropEvent*
QPoint* q_graphicsscenedragdropevent_screen_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setScreenPos)
///
/// @param self QGraphicsSceneDragDropEvent*
/// @param pos QPoint*
void q_graphicsscenedragdropevent_set_screen_pos(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#buttons)
///
/// @param self QGraphicsSceneDragDropEvent*
///
/// @return flag of enum Qt__MouseButton
int64_t q_graphicsscenedragdropevent_buttons(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setButtons)
///
/// @param self QGraphicsSceneDragDropEvent*
/// @param buttons flag of enum Qt__MouseButton
void q_graphicsscenedragdropevent_set_buttons(void* self, int64_t buttons);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#modifiers)
///
/// @param self QGraphicsSceneDragDropEvent*
///
/// @return flag of enum Qt__KeyboardModifier
int64_t q_graphicsscenedragdropevent_modifiers(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setModifiers)
///
/// @param self QGraphicsSceneDragDropEvent*
/// @param modifiers flag of enum Qt__KeyboardModifier
void q_graphicsscenedragdropevent_set_modifiers(void* self, int64_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#possibleActions)
///
/// @param self QGraphicsSceneDragDropEvent*
///
/// @return flag of enum Qt__DropAction
int32_t q_graphicsscenedragdropevent_possible_actions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setPossibleActions)
///
/// @param self QGraphicsSceneDragDropEvent*
/// @param actions flag of enum Qt__DropAction
void q_graphicsscenedragdropevent_set_possible_actions(void* self, int32_t actions);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#proposedAction)
///
/// @param self QGraphicsSceneDragDropEvent*
///
/// @return enum Qt__DropAction
int32_t q_graphicsscenedragdropevent_proposed_action(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setProposedAction)
///
/// @param self QGraphicsSceneDragDropEvent*
/// @param action enum Qt__DropAction
void q_graphicsscenedragdropevent_set_proposed_action(void* self, int32_t action);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#acceptProposedAction)
///
/// @param self QGraphicsSceneDragDropEvent*
void q_graphicsscenedragdropevent_accept_proposed_action(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#dropAction)
///
/// @param self QGraphicsSceneDragDropEvent*
///
/// @return enum Qt__DropAction
int32_t q_graphicsscenedragdropevent_drop_action(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setDropAction)
///
/// @param self QGraphicsSceneDragDropEvent*
/// @param action enum Qt__DropAction
void q_graphicsscenedragdropevent_set_drop_action(void* self, int32_t action);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#source)
///
/// @param self QGraphicsSceneDragDropEvent*
QWidget* q_graphicsscenedragdropevent_source(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setSource)
///
/// @param self QGraphicsSceneDragDropEvent*
/// @param source QWidget*
void q_graphicsscenedragdropevent_set_source(void* self, void* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#mimeData)
///
/// @param self QGraphicsSceneDragDropEvent*
const QMimeData* q_graphicsscenedragdropevent_mime_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setMimeData)
///
/// @param self QGraphicsSceneDragDropEvent*
/// @param data QMimeData*
void q_graphicsscenedragdropevent_set_mime_data(void* self, void* data);

/// Inherited from QGraphicsSceneEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
///
/// @param self QGraphicsSceneDragDropEvent*
QWidget* q_graphicsscenedragdropevent_widget(void* self);

/// Inherited from QGraphicsSceneEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
///
/// @param self QGraphicsSceneDragDropEvent*
/// @param widget QWidget*
void q_graphicsscenedragdropevent_set_widget(void* self, void* widget);

/// Inherited from QGraphicsSceneEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
///
/// @param self QGraphicsSceneDragDropEvent*
uint64_t q_graphicsscenedragdropevent_timestamp(void* self);

/// Inherited from QGraphicsSceneEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
///
/// @param self QGraphicsSceneDragDropEvent*
/// @param ts uint64_t
void q_graphicsscenedragdropevent_set_timestamp(void* self, uint64_t ts);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QGraphicsSceneDragDropEvent*
///
/// @return enum QEvent__Type
int32_t q_graphicsscenedragdropevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QGraphicsSceneDragDropEvent*
bool q_graphicsscenedragdropevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QGraphicsSceneDragDropEvent*
bool q_graphicsscenedragdropevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QGraphicsSceneDragDropEvent*
void q_graphicsscenedragdropevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QGraphicsSceneDragDropEvent*
void q_graphicsscenedragdropevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QGraphicsSceneDragDropEvent*
bool q_graphicsscenedragdropevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QGraphicsSceneDragDropEvent*
bool q_graphicsscenedragdropevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QGraphicsSceneDragDropEvent*
bool q_graphicsscenedragdropevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_graphicsscenedragdropevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
int32_t q_graphicsscenedragdropevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSceneDragDropEvent*
/// @param accepted bool
void q_graphicsscenedragdropevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSceneDragDropEvent*
/// @param accepted bool
void q_graphicsscenedragdropevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSceneDragDropEvent*
/// @param callback void func(QGraphicsSceneDragDropEvent* self, bool accepted)
void q_graphicsscenedragdropevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSceneDragDropEvent*
QEvent* q_graphicsscenedragdropevent_clone(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSceneDragDropEvent*
QEvent* q_graphicsscenedragdropevent_qbase_clone(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSceneDragDropEvent*
/// @param callback QEvent* func()
void q_graphicsscenedragdropevent_on_clone(void* self, QEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#dtor.QGraphicsSceneDragDropEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsSceneDragDropEvent*
void q_graphicsscenedragdropevent_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html

/// q_graphicssceneresizeevent_new constructs a new QGraphicsSceneResizeEvent object.
///
QGraphicsSceneResizeEvent* q_graphicssceneresizeevent_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html#oldSize)
///
/// @param self QGraphicsSceneResizeEvent*
QSizeF* q_graphicssceneresizeevent_old_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html#setOldSize)
///
/// @param self QGraphicsSceneResizeEvent*
/// @param size QSizeF*
void q_graphicssceneresizeevent_set_old_size(void* self, void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html#newSize)
///
/// @param self QGraphicsSceneResizeEvent*
QSizeF* q_graphicssceneresizeevent_new_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html#setNewSize)
///
/// @param self QGraphicsSceneResizeEvent*
/// @param size QSizeF*
void q_graphicssceneresizeevent_set_new_size(void* self, void* size);

/// Inherited from QGraphicsSceneEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
///
/// @param self QGraphicsSceneResizeEvent*
QWidget* q_graphicssceneresizeevent_widget(void* self);

/// Inherited from QGraphicsSceneEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
///
/// @param self QGraphicsSceneResizeEvent*
/// @param widget QWidget*
void q_graphicssceneresizeevent_set_widget(void* self, void* widget);

/// Inherited from QGraphicsSceneEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
///
/// @param self QGraphicsSceneResizeEvent*
uint64_t q_graphicssceneresizeevent_timestamp(void* self);

/// Inherited from QGraphicsSceneEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
///
/// @param self QGraphicsSceneResizeEvent*
/// @param ts uint64_t
void q_graphicssceneresizeevent_set_timestamp(void* self, uint64_t ts);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QGraphicsSceneResizeEvent*
///
/// @return enum QEvent__Type
int32_t q_graphicssceneresizeevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QGraphicsSceneResizeEvent*
bool q_graphicssceneresizeevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QGraphicsSceneResizeEvent*
bool q_graphicssceneresizeevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QGraphicsSceneResizeEvent*
void q_graphicssceneresizeevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QGraphicsSceneResizeEvent*
void q_graphicssceneresizeevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QGraphicsSceneResizeEvent*
bool q_graphicssceneresizeevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QGraphicsSceneResizeEvent*
bool q_graphicssceneresizeevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QGraphicsSceneResizeEvent*
bool q_graphicssceneresizeevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_graphicssceneresizeevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
int32_t q_graphicssceneresizeevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSceneResizeEvent*
/// @param accepted bool
void q_graphicssceneresizeevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSceneResizeEvent*
/// @param accepted bool
void q_graphicssceneresizeevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSceneResizeEvent*
/// @param callback void func(QGraphicsSceneResizeEvent* self, bool accepted)
void q_graphicssceneresizeevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSceneResizeEvent*
QEvent* q_graphicssceneresizeevent_clone(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSceneResizeEvent*
QEvent* q_graphicssceneresizeevent_qbase_clone(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSceneResizeEvent*
/// @param callback QEvent* func()
void q_graphicssceneresizeevent_on_clone(void* self, QEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html#dtor.QGraphicsSceneResizeEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsSceneResizeEvent*
void q_graphicssceneresizeevent_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html

/// q_graphicsscenemoveevent_new constructs a new QGraphicsSceneMoveEvent object.
///
QGraphicsSceneMoveEvent* q_graphicsscenemoveevent_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html#oldPos)
///
/// @param self QGraphicsSceneMoveEvent*
QPointF* q_graphicsscenemoveevent_old_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html#setOldPos)
///
/// @param self QGraphicsSceneMoveEvent*
/// @param pos QPointF*
void q_graphicsscenemoveevent_set_old_pos(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html#newPos)
///
/// @param self QGraphicsSceneMoveEvent*
QPointF* q_graphicsscenemoveevent_new_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html#setNewPos)
///
/// @param self QGraphicsSceneMoveEvent*
/// @param pos QPointF*
void q_graphicsscenemoveevent_set_new_pos(void* self, void* pos);

/// Inherited from QGraphicsSceneEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
///
/// @param self QGraphicsSceneMoveEvent*
QWidget* q_graphicsscenemoveevent_widget(void* self);

/// Inherited from QGraphicsSceneEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
///
/// @param self QGraphicsSceneMoveEvent*
/// @param widget QWidget*
void q_graphicsscenemoveevent_set_widget(void* self, void* widget);

/// Inherited from QGraphicsSceneEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
///
/// @param self QGraphicsSceneMoveEvent*
uint64_t q_graphicsscenemoveevent_timestamp(void* self);

/// Inherited from QGraphicsSceneEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
///
/// @param self QGraphicsSceneMoveEvent*
/// @param ts uint64_t
void q_graphicsscenemoveevent_set_timestamp(void* self, uint64_t ts);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QGraphicsSceneMoveEvent*
///
/// @return enum QEvent__Type
int32_t q_graphicsscenemoveevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QGraphicsSceneMoveEvent*
bool q_graphicsscenemoveevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QGraphicsSceneMoveEvent*
bool q_graphicsscenemoveevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QGraphicsSceneMoveEvent*
void q_graphicsscenemoveevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QGraphicsSceneMoveEvent*
void q_graphicsscenemoveevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QGraphicsSceneMoveEvent*
bool q_graphicsscenemoveevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QGraphicsSceneMoveEvent*
bool q_graphicsscenemoveevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QGraphicsSceneMoveEvent*
bool q_graphicsscenemoveevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_graphicsscenemoveevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
int32_t q_graphicsscenemoveevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSceneMoveEvent*
/// @param accepted bool
void q_graphicsscenemoveevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSceneMoveEvent*
/// @param accepted bool
void q_graphicsscenemoveevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSceneMoveEvent*
/// @param callback void func(QGraphicsSceneMoveEvent* self, bool accepted)
void q_graphicsscenemoveevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsSceneMoveEvent*
QEvent* q_graphicsscenemoveevent_clone(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsSceneMoveEvent*
QEvent* q_graphicsscenemoveevent_qbase_clone(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsSceneMoveEvent*
/// @param callback QEvent* func()
void q_graphicsscenemoveevent_on_clone(void* self, QEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html#dtor.QGraphicsSceneMoveEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsSceneMoveEvent*
void q_graphicsscenemoveevent_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicssceneevent.html#types

typedef enum {
    QGRAPHICSSCENECONTEXTMENUEVENT_REASON_MOUSE = 0,
    QGRAPHICSSCENECONTEXTMENUEVENT_REASON_KEYBOARD = 1,
    QGRAPHICSSCENECONTEXTMENUEVENT_REASON_OTHER = 2
} QGraphicsSceneContextMenuEvent__Reason;

#endif
