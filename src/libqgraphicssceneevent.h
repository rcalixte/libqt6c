#pragma once
#ifndef SRCQT6C_LIBQGRAPHICSSCENEEVENT_H
#define SRCQT6C_LIBQGRAPHICSSCENEEVENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqevent.h"
#include "libqmimedata.h"
#include "libqpoint.h"
#include "libqsize.h"
#include "libqwidget.h"

/// https://doc.qt.io/qt-6/qgraphicssceneevent.html

/// q_graphicssceneevent_new constructs a new QGraphicsSceneEvent object.
///
/// ``` enum QEvent__Type typeVal ```
QGraphicsSceneEvent* q_graphicssceneevent_new(int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
///
/// ``` QGraphicsSceneEvent* self ```
QWidget* q_graphicssceneevent_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
///
/// ``` QGraphicsSceneEvent* self, QWidget* widget ```
void q_graphicssceneevent_set_widget(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
///
/// ``` QGraphicsSceneEvent* self ```
uint64_t q_graphicssceneevent_timestamp(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
///
/// ``` QGraphicsSceneEvent* self, uint64_t ts ```
void q_graphicssceneevent_set_timestamp(void* self, uint64_t ts);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QGraphicsSceneEvent* self ```
int64_t q_graphicssceneevent_type(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QGraphicsSceneEvent* self ```
bool q_graphicssceneevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QGraphicsSceneEvent* self ```
bool q_graphicssceneevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QGraphicsSceneEvent* self ```
void q_graphicssceneevent_accept(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QGraphicsSceneEvent* self ```
void q_graphicssceneevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QGraphicsSceneEvent* self ```
bool q_graphicssceneevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QGraphicsSceneEvent* self ```
bool q_graphicssceneevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QGraphicsSceneEvent* self ```
bool q_graphicssceneevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_graphicssceneevent_register_event_type();

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_graphicssceneevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSceneEvent* self, bool accepted ```
void q_graphicssceneevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSceneEvent* self, bool accepted ```
void q_graphicssceneevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSceneEvent* self, void (*slot)(QGraphicsSceneEvent*, bool) ```
void q_graphicssceneevent_on_set_accepted(void* self, void (*slot)(void*, bool));

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSceneEvent* self ```
QEvent* q_graphicssceneevent_clone(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSceneEvent* self ```
QEvent* q_graphicssceneevent_qbase_clone(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSceneEvent* self, QEvent* (*slot)() ```
void q_graphicssceneevent_on_clone(void* self, QEvent* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#dtor.QGraphicsSceneEvent)
///
/// Delete this object from C++ memory.
///
/// ``` QGraphicsSceneEvent* self ```
void q_graphicssceneevent_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html

/// q_graphicsscenemouseevent_new constructs a new QGraphicsSceneMouseEvent object.
///
///
QGraphicsSceneMouseEvent* q_graphicsscenemouseevent_new();

/// q_graphicsscenemouseevent_new2 constructs a new QGraphicsSceneMouseEvent object.
///
/// ``` enum QEvent__Type typeVal ```
QGraphicsSceneMouseEvent* q_graphicsscenemouseevent_new2(int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#pos)
///
/// ``` QGraphicsSceneMouseEvent* self ```
QPointF* q_graphicsscenemouseevent_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setPos)
///
/// ``` QGraphicsSceneMouseEvent* self, QPointF* pos ```
void q_graphicsscenemouseevent_set_pos(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#scenePos)
///
/// ``` QGraphicsSceneMouseEvent* self ```
QPointF* q_graphicsscenemouseevent_scene_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setScenePos)
///
/// ``` QGraphicsSceneMouseEvent* self, QPointF* pos ```
void q_graphicsscenemouseevent_set_scene_pos(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#screenPos)
///
/// ``` QGraphicsSceneMouseEvent* self ```
QPoint* q_graphicsscenemouseevent_screen_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setScreenPos)
///
/// ``` QGraphicsSceneMouseEvent* self, QPoint* pos ```
void q_graphicsscenemouseevent_set_screen_pos(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#buttonDownPos)
///
/// ``` QGraphicsSceneMouseEvent* self, enum Qt__MouseButton button ```
QPointF* q_graphicsscenemouseevent_button_down_pos(void* self, int64_t button);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setButtonDownPos)
///
/// ``` QGraphicsSceneMouseEvent* self, enum Qt__MouseButton button, QPointF* pos ```
void q_graphicsscenemouseevent_set_button_down_pos(void* self, int64_t button, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#buttonDownScenePos)
///
/// ``` QGraphicsSceneMouseEvent* self, enum Qt__MouseButton button ```
QPointF* q_graphicsscenemouseevent_button_down_scene_pos(void* self, int64_t button);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setButtonDownScenePos)
///
/// ``` QGraphicsSceneMouseEvent* self, enum Qt__MouseButton button, QPointF* pos ```
void q_graphicsscenemouseevent_set_button_down_scene_pos(void* self, int64_t button, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#buttonDownScreenPos)
///
/// ``` QGraphicsSceneMouseEvent* self, enum Qt__MouseButton button ```
QPoint* q_graphicsscenemouseevent_button_down_screen_pos(void* self, int64_t button);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setButtonDownScreenPos)
///
/// ``` QGraphicsSceneMouseEvent* self, enum Qt__MouseButton button, QPoint* pos ```
void q_graphicsscenemouseevent_set_button_down_screen_pos(void* self, int64_t button, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#lastPos)
///
/// ``` QGraphicsSceneMouseEvent* self ```
QPointF* q_graphicsscenemouseevent_last_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setLastPos)
///
/// ``` QGraphicsSceneMouseEvent* self, QPointF* pos ```
void q_graphicsscenemouseevent_set_last_pos(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#lastScenePos)
///
/// ``` QGraphicsSceneMouseEvent* self ```
QPointF* q_graphicsscenemouseevent_last_scene_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setLastScenePos)
///
/// ``` QGraphicsSceneMouseEvent* self, QPointF* pos ```
void q_graphicsscenemouseevent_set_last_scene_pos(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#lastScreenPos)
///
/// ``` QGraphicsSceneMouseEvent* self ```
QPoint* q_graphicsscenemouseevent_last_screen_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setLastScreenPos)
///
/// ``` QGraphicsSceneMouseEvent* self, QPoint* pos ```
void q_graphicsscenemouseevent_set_last_screen_pos(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#buttons)
///
/// ``` QGraphicsSceneMouseEvent* self ```
int64_t q_graphicsscenemouseevent_buttons(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setButtons)
///
/// ``` QGraphicsSceneMouseEvent* self, int buttons ```
void q_graphicsscenemouseevent_set_buttons(void* self, int64_t buttons);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#button)
///
/// ``` QGraphicsSceneMouseEvent* self ```
int64_t q_graphicsscenemouseevent_button(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setButton)
///
/// ``` QGraphicsSceneMouseEvent* self, enum Qt__MouseButton button ```
void q_graphicsscenemouseevent_set_button(void* self, int64_t button);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#modifiers)
///
/// ``` QGraphicsSceneMouseEvent* self ```
int64_t q_graphicsscenemouseevent_modifiers(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setModifiers)
///
/// ``` QGraphicsSceneMouseEvent* self, int modifiers ```
void q_graphicsscenemouseevent_set_modifiers(void* self, int64_t modifiers);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#source)
///
/// ``` QGraphicsSceneMouseEvent* self ```
int64_t q_graphicsscenemouseevent_source(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setSource)
///
/// ``` QGraphicsSceneMouseEvent* self, enum Qt__MouseEventSource source ```
void q_graphicsscenemouseevent_set_source(void* self, int64_t source);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#flags)
///
/// ``` QGraphicsSceneMouseEvent* self ```
int64_t q_graphicsscenemouseevent_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setFlags)
///
/// ``` QGraphicsSceneMouseEvent* self, int flags ```
void q_graphicsscenemouseevent_set_flags(void* self, int64_t flags);

/// Inherited from QGraphicsSceneEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
///
/// ``` QGraphicsSceneMouseEvent* self ```
QWidget* q_graphicsscenemouseevent_widget(void* self);

/// Inherited from QGraphicsSceneEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
///
/// ``` QGraphicsSceneMouseEvent* self, QWidget* widget ```
void q_graphicsscenemouseevent_set_widget(void* self, void* widget);

/// Inherited from QGraphicsSceneEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
///
/// ``` QGraphicsSceneMouseEvent* self ```
uint64_t q_graphicsscenemouseevent_timestamp(void* self);

/// Inherited from QGraphicsSceneEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
///
/// ``` QGraphicsSceneMouseEvent* self, uint64_t ts ```
void q_graphicsscenemouseevent_set_timestamp(void* self, uint64_t ts);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QGraphicsSceneMouseEvent* self ```
int64_t q_graphicsscenemouseevent_type(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QGraphicsSceneMouseEvent* self ```
bool q_graphicsscenemouseevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QGraphicsSceneMouseEvent* self ```
bool q_graphicsscenemouseevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QGraphicsSceneMouseEvent* self ```
void q_graphicsscenemouseevent_accept(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QGraphicsSceneMouseEvent* self ```
void q_graphicsscenemouseevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QGraphicsSceneMouseEvent* self ```
bool q_graphicsscenemouseevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QGraphicsSceneMouseEvent* self ```
bool q_graphicsscenemouseevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QGraphicsSceneMouseEvent* self ```
bool q_graphicsscenemouseevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_graphicsscenemouseevent_register_event_type();

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_graphicsscenemouseevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSceneMouseEvent* self, bool accepted ```
void q_graphicsscenemouseevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSceneMouseEvent* self, bool accepted ```
void q_graphicsscenemouseevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSceneMouseEvent* self, void (*slot)(QGraphicsSceneMouseEvent*, bool) ```
void q_graphicsscenemouseevent_on_set_accepted(void* self, void (*slot)(void*, bool));

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSceneMouseEvent* self ```
QEvent* q_graphicsscenemouseevent_clone(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSceneMouseEvent* self ```
QEvent* q_graphicsscenemouseevent_qbase_clone(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSceneMouseEvent* self, QEvent* (*slot)() ```
void q_graphicsscenemouseevent_on_clone(void* self, QEvent* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#dtor.QGraphicsSceneMouseEvent)
///
/// Delete this object from C++ memory.
///
/// ``` QGraphicsSceneMouseEvent* self ```
void q_graphicsscenemouseevent_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html

/// q_graphicsscenewheelevent_new constructs a new QGraphicsSceneWheelEvent object.
///
///
QGraphicsSceneWheelEvent* q_graphicsscenewheelevent_new();

/// q_graphicsscenewheelevent_new2 constructs a new QGraphicsSceneWheelEvent object.
///
/// ``` enum QEvent__Type typeVal ```
QGraphicsSceneWheelEvent* q_graphicsscenewheelevent_new2(int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#pos)
///
/// ``` QGraphicsSceneWheelEvent* self ```
QPointF* q_graphicsscenewheelevent_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setPos)
///
/// ``` QGraphicsSceneWheelEvent* self, QPointF* pos ```
void q_graphicsscenewheelevent_set_pos(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#scenePos)
///
/// ``` QGraphicsSceneWheelEvent* self ```
QPointF* q_graphicsscenewheelevent_scene_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setScenePos)
///
/// ``` QGraphicsSceneWheelEvent* self, QPointF* pos ```
void q_graphicsscenewheelevent_set_scene_pos(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#screenPos)
///
/// ``` QGraphicsSceneWheelEvent* self ```
QPoint* q_graphicsscenewheelevent_screen_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setScreenPos)
///
/// ``` QGraphicsSceneWheelEvent* self, QPoint* pos ```
void q_graphicsscenewheelevent_set_screen_pos(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#buttons)
///
/// ``` QGraphicsSceneWheelEvent* self ```
int64_t q_graphicsscenewheelevent_buttons(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setButtons)
///
/// ``` QGraphicsSceneWheelEvent* self, int buttons ```
void q_graphicsscenewheelevent_set_buttons(void* self, int64_t buttons);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#modifiers)
///
/// ``` QGraphicsSceneWheelEvent* self ```
int64_t q_graphicsscenewheelevent_modifiers(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setModifiers)
///
/// ``` QGraphicsSceneWheelEvent* self, int modifiers ```
void q_graphicsscenewheelevent_set_modifiers(void* self, int64_t modifiers);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#delta)
///
/// ``` QGraphicsSceneWheelEvent* self ```
int32_t q_graphicsscenewheelevent_delta(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setDelta)
///
/// ``` QGraphicsSceneWheelEvent* self, int delta ```
void q_graphicsscenewheelevent_set_delta(void* self, int delta);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#orientation)
///
/// ``` QGraphicsSceneWheelEvent* self ```
int64_t q_graphicsscenewheelevent_orientation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setOrientation)
///
/// ``` QGraphicsSceneWheelEvent* self, enum Qt__Orientation orientation ```
void q_graphicsscenewheelevent_set_orientation(void* self, int64_t orientation);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#phase)
///
/// ``` QGraphicsSceneWheelEvent* self ```
int64_t q_graphicsscenewheelevent_phase(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setPhase)
///
/// ``` QGraphicsSceneWheelEvent* self, enum Qt__ScrollPhase scrollPhase ```
void q_graphicsscenewheelevent_set_phase(void* self, int64_t scrollPhase);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#pixelDelta)
///
/// ``` QGraphicsSceneWheelEvent* self ```
QPoint* q_graphicsscenewheelevent_pixel_delta(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setPixelDelta)
///
/// ``` QGraphicsSceneWheelEvent* self, QPoint* delta ```
void q_graphicsscenewheelevent_set_pixel_delta(void* self, void* delta);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#isInverted)
///
/// ``` QGraphicsSceneWheelEvent* self ```
bool q_graphicsscenewheelevent_is_inverted(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setInverted)
///
/// ``` QGraphicsSceneWheelEvent* self, bool inverted ```
void q_graphicsscenewheelevent_set_inverted(void* self, bool inverted);

/// Inherited from QGraphicsSceneEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
///
/// ``` QGraphicsSceneWheelEvent* self ```
QWidget* q_graphicsscenewheelevent_widget(void* self);

/// Inherited from QGraphicsSceneEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
///
/// ``` QGraphicsSceneWheelEvent* self, QWidget* widget ```
void q_graphicsscenewheelevent_set_widget(void* self, void* widget);

/// Inherited from QGraphicsSceneEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
///
/// ``` QGraphicsSceneWheelEvent* self ```
uint64_t q_graphicsscenewheelevent_timestamp(void* self);

/// Inherited from QGraphicsSceneEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
///
/// ``` QGraphicsSceneWheelEvent* self, uint64_t ts ```
void q_graphicsscenewheelevent_set_timestamp(void* self, uint64_t ts);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QGraphicsSceneWheelEvent* self ```
int64_t q_graphicsscenewheelevent_type(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QGraphicsSceneWheelEvent* self ```
bool q_graphicsscenewheelevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QGraphicsSceneWheelEvent* self ```
bool q_graphicsscenewheelevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QGraphicsSceneWheelEvent* self ```
void q_graphicsscenewheelevent_accept(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QGraphicsSceneWheelEvent* self ```
void q_graphicsscenewheelevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QGraphicsSceneWheelEvent* self ```
bool q_graphicsscenewheelevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QGraphicsSceneWheelEvent* self ```
bool q_graphicsscenewheelevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QGraphicsSceneWheelEvent* self ```
bool q_graphicsscenewheelevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_graphicsscenewheelevent_register_event_type();

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_graphicsscenewheelevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSceneWheelEvent* self, bool accepted ```
void q_graphicsscenewheelevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSceneWheelEvent* self, bool accepted ```
void q_graphicsscenewheelevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSceneWheelEvent* self, void (*slot)(QGraphicsSceneWheelEvent*, bool) ```
void q_graphicsscenewheelevent_on_set_accepted(void* self, void (*slot)(void*, bool));

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSceneWheelEvent* self ```
QEvent* q_graphicsscenewheelevent_clone(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSceneWheelEvent* self ```
QEvent* q_graphicsscenewheelevent_qbase_clone(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSceneWheelEvent* self, QEvent* (*slot)() ```
void q_graphicsscenewheelevent_on_clone(void* self, QEvent* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#dtor.QGraphicsSceneWheelEvent)
///
/// Delete this object from C++ memory.
///
/// ``` QGraphicsSceneWheelEvent* self ```
void q_graphicsscenewheelevent_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html

/// q_graphicsscenecontextmenuevent_new constructs a new QGraphicsSceneContextMenuEvent object.
///
///
QGraphicsSceneContextMenuEvent* q_graphicsscenecontextmenuevent_new();

/// q_graphicsscenecontextmenuevent_new2 constructs a new QGraphicsSceneContextMenuEvent object.
///
/// ``` enum QEvent__Type typeVal ```
QGraphicsSceneContextMenuEvent* q_graphicsscenecontextmenuevent_new2(int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#pos)
///
/// ``` QGraphicsSceneContextMenuEvent* self ```
QPointF* q_graphicsscenecontextmenuevent_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#setPos)
///
/// ``` QGraphicsSceneContextMenuEvent* self, QPointF* pos ```
void q_graphicsscenecontextmenuevent_set_pos(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#scenePos)
///
/// ``` QGraphicsSceneContextMenuEvent* self ```
QPointF* q_graphicsscenecontextmenuevent_scene_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#setScenePos)
///
/// ``` QGraphicsSceneContextMenuEvent* self, QPointF* pos ```
void q_graphicsscenecontextmenuevent_set_scene_pos(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#screenPos)
///
/// ``` QGraphicsSceneContextMenuEvent* self ```
QPoint* q_graphicsscenecontextmenuevent_screen_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#setScreenPos)
///
/// ``` QGraphicsSceneContextMenuEvent* self, QPoint* pos ```
void q_graphicsscenecontextmenuevent_set_screen_pos(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#modifiers)
///
/// ``` QGraphicsSceneContextMenuEvent* self ```
int64_t q_graphicsscenecontextmenuevent_modifiers(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#setModifiers)
///
/// ``` QGraphicsSceneContextMenuEvent* self, int modifiers ```
void q_graphicsscenecontextmenuevent_set_modifiers(void* self, int64_t modifiers);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#reason)
///
/// ``` QGraphicsSceneContextMenuEvent* self ```
int64_t q_graphicsscenecontextmenuevent_reason(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#setReason)
///
/// ``` QGraphicsSceneContextMenuEvent* self, enum QGraphicsSceneContextMenuEvent__Reason reason ```
void q_graphicsscenecontextmenuevent_set_reason(void* self, int64_t reason);

/// Inherited from QGraphicsSceneEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
///
/// ``` QGraphicsSceneContextMenuEvent* self ```
QWidget* q_graphicsscenecontextmenuevent_widget(void* self);

/// Inherited from QGraphicsSceneEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
///
/// ``` QGraphicsSceneContextMenuEvent* self, QWidget* widget ```
void q_graphicsscenecontextmenuevent_set_widget(void* self, void* widget);

/// Inherited from QGraphicsSceneEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
///
/// ``` QGraphicsSceneContextMenuEvent* self ```
uint64_t q_graphicsscenecontextmenuevent_timestamp(void* self);

/// Inherited from QGraphicsSceneEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
///
/// ``` QGraphicsSceneContextMenuEvent* self, uint64_t ts ```
void q_graphicsscenecontextmenuevent_set_timestamp(void* self, uint64_t ts);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QGraphicsSceneContextMenuEvent* self ```
int64_t q_graphicsscenecontextmenuevent_type(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QGraphicsSceneContextMenuEvent* self ```
bool q_graphicsscenecontextmenuevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QGraphicsSceneContextMenuEvent* self ```
bool q_graphicsscenecontextmenuevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QGraphicsSceneContextMenuEvent* self ```
void q_graphicsscenecontextmenuevent_accept(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QGraphicsSceneContextMenuEvent* self ```
void q_graphicsscenecontextmenuevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QGraphicsSceneContextMenuEvent* self ```
bool q_graphicsscenecontextmenuevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QGraphicsSceneContextMenuEvent* self ```
bool q_graphicsscenecontextmenuevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QGraphicsSceneContextMenuEvent* self ```
bool q_graphicsscenecontextmenuevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_graphicsscenecontextmenuevent_register_event_type();

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_graphicsscenecontextmenuevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSceneContextMenuEvent* self, bool accepted ```
void q_graphicsscenecontextmenuevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSceneContextMenuEvent* self, bool accepted ```
void q_graphicsscenecontextmenuevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSceneContextMenuEvent* self, void (*slot)(QGraphicsSceneContextMenuEvent*, bool) ```
void q_graphicsscenecontextmenuevent_on_set_accepted(void* self, void (*slot)(void*, bool));

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSceneContextMenuEvent* self ```
QEvent* q_graphicsscenecontextmenuevent_clone(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSceneContextMenuEvent* self ```
QEvent* q_graphicsscenecontextmenuevent_qbase_clone(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSceneContextMenuEvent* self, QEvent* (*slot)() ```
void q_graphicsscenecontextmenuevent_on_clone(void* self, QEvent* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#dtor.QGraphicsSceneContextMenuEvent)
///
/// Delete this object from C++ memory.
///
/// ``` QGraphicsSceneContextMenuEvent* self ```
void q_graphicsscenecontextmenuevent_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html

/// q_graphicsscenehoverevent_new constructs a new QGraphicsSceneHoverEvent object.
///
///
QGraphicsSceneHoverEvent* q_graphicsscenehoverevent_new();

/// q_graphicsscenehoverevent_new2 constructs a new QGraphicsSceneHoverEvent object.
///
/// ``` enum QEvent__Type typeVal ```
QGraphicsSceneHoverEvent* q_graphicsscenehoverevent_new2(int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#pos)
///
/// ``` QGraphicsSceneHoverEvent* self ```
QPointF* q_graphicsscenehoverevent_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setPos)
///
/// ``` QGraphicsSceneHoverEvent* self, QPointF* pos ```
void q_graphicsscenehoverevent_set_pos(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#scenePos)
///
/// ``` QGraphicsSceneHoverEvent* self ```
QPointF* q_graphicsscenehoverevent_scene_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setScenePos)
///
/// ``` QGraphicsSceneHoverEvent* self, QPointF* pos ```
void q_graphicsscenehoverevent_set_scene_pos(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#screenPos)
///
/// ``` QGraphicsSceneHoverEvent* self ```
QPoint* q_graphicsscenehoverevent_screen_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setScreenPos)
///
/// ``` QGraphicsSceneHoverEvent* self, QPoint* pos ```
void q_graphicsscenehoverevent_set_screen_pos(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#lastPos)
///
/// ``` QGraphicsSceneHoverEvent* self ```
QPointF* q_graphicsscenehoverevent_last_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setLastPos)
///
/// ``` QGraphicsSceneHoverEvent* self, QPointF* pos ```
void q_graphicsscenehoverevent_set_last_pos(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#lastScenePos)
///
/// ``` QGraphicsSceneHoverEvent* self ```
QPointF* q_graphicsscenehoverevent_last_scene_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setLastScenePos)
///
/// ``` QGraphicsSceneHoverEvent* self, QPointF* pos ```
void q_graphicsscenehoverevent_set_last_scene_pos(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#lastScreenPos)
///
/// ``` QGraphicsSceneHoverEvent* self ```
QPoint* q_graphicsscenehoverevent_last_screen_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setLastScreenPos)
///
/// ``` QGraphicsSceneHoverEvent* self, QPoint* pos ```
void q_graphicsscenehoverevent_set_last_screen_pos(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#modifiers)
///
/// ``` QGraphicsSceneHoverEvent* self ```
int64_t q_graphicsscenehoverevent_modifiers(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setModifiers)
///
/// ``` QGraphicsSceneHoverEvent* self, int modifiers ```
void q_graphicsscenehoverevent_set_modifiers(void* self, int64_t modifiers);

/// Inherited from QGraphicsSceneEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
///
/// ``` QGraphicsSceneHoverEvent* self ```
QWidget* q_graphicsscenehoverevent_widget(void* self);

/// Inherited from QGraphicsSceneEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
///
/// ``` QGraphicsSceneHoverEvent* self, QWidget* widget ```
void q_graphicsscenehoverevent_set_widget(void* self, void* widget);

/// Inherited from QGraphicsSceneEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
///
/// ``` QGraphicsSceneHoverEvent* self ```
uint64_t q_graphicsscenehoverevent_timestamp(void* self);

/// Inherited from QGraphicsSceneEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
///
/// ``` QGraphicsSceneHoverEvent* self, uint64_t ts ```
void q_graphicsscenehoverevent_set_timestamp(void* self, uint64_t ts);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QGraphicsSceneHoverEvent* self ```
int64_t q_graphicsscenehoverevent_type(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QGraphicsSceneHoverEvent* self ```
bool q_graphicsscenehoverevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QGraphicsSceneHoverEvent* self ```
bool q_graphicsscenehoverevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QGraphicsSceneHoverEvent* self ```
void q_graphicsscenehoverevent_accept(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QGraphicsSceneHoverEvent* self ```
void q_graphicsscenehoverevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QGraphicsSceneHoverEvent* self ```
bool q_graphicsscenehoverevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QGraphicsSceneHoverEvent* self ```
bool q_graphicsscenehoverevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QGraphicsSceneHoverEvent* self ```
bool q_graphicsscenehoverevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_graphicsscenehoverevent_register_event_type();

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_graphicsscenehoverevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSceneHoverEvent* self, bool accepted ```
void q_graphicsscenehoverevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSceneHoverEvent* self, bool accepted ```
void q_graphicsscenehoverevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSceneHoverEvent* self, void (*slot)(QGraphicsSceneHoverEvent*, bool) ```
void q_graphicsscenehoverevent_on_set_accepted(void* self, void (*slot)(void*, bool));

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSceneHoverEvent* self ```
QEvent* q_graphicsscenehoverevent_clone(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSceneHoverEvent* self ```
QEvent* q_graphicsscenehoverevent_qbase_clone(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSceneHoverEvent* self, QEvent* (*slot)() ```
void q_graphicsscenehoverevent_on_clone(void* self, QEvent* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#dtor.QGraphicsSceneHoverEvent)
///
/// Delete this object from C++ memory.
///
/// ``` QGraphicsSceneHoverEvent* self ```
void q_graphicsscenehoverevent_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html

/// q_graphicsscenehelpevent_new constructs a new QGraphicsSceneHelpEvent object.
///
///
QGraphicsSceneHelpEvent* q_graphicsscenehelpevent_new();

/// q_graphicsscenehelpevent_new2 constructs a new QGraphicsSceneHelpEvent object.
///
/// ``` enum QEvent__Type typeVal ```
QGraphicsSceneHelpEvent* q_graphicsscenehelpevent_new2(int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html#scenePos)
///
/// ``` QGraphicsSceneHelpEvent* self ```
QPointF* q_graphicsscenehelpevent_scene_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html#setScenePos)
///
/// ``` QGraphicsSceneHelpEvent* self, QPointF* pos ```
void q_graphicsscenehelpevent_set_scene_pos(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html#screenPos)
///
/// ``` QGraphicsSceneHelpEvent* self ```
QPoint* q_graphicsscenehelpevent_screen_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html#setScreenPos)
///
/// ``` QGraphicsSceneHelpEvent* self, QPoint* pos ```
void q_graphicsscenehelpevent_set_screen_pos(void* self, void* pos);

/// Inherited from QGraphicsSceneEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
///
/// ``` QGraphicsSceneHelpEvent* self ```
QWidget* q_graphicsscenehelpevent_widget(void* self);

/// Inherited from QGraphicsSceneEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
///
/// ``` QGraphicsSceneHelpEvent* self, QWidget* widget ```
void q_graphicsscenehelpevent_set_widget(void* self, void* widget);

/// Inherited from QGraphicsSceneEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
///
/// ``` QGraphicsSceneHelpEvent* self ```
uint64_t q_graphicsscenehelpevent_timestamp(void* self);

/// Inherited from QGraphicsSceneEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
///
/// ``` QGraphicsSceneHelpEvent* self, uint64_t ts ```
void q_graphicsscenehelpevent_set_timestamp(void* self, uint64_t ts);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QGraphicsSceneHelpEvent* self ```
int64_t q_graphicsscenehelpevent_type(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QGraphicsSceneHelpEvent* self ```
bool q_graphicsscenehelpevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QGraphicsSceneHelpEvent* self ```
bool q_graphicsscenehelpevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QGraphicsSceneHelpEvent* self ```
void q_graphicsscenehelpevent_accept(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QGraphicsSceneHelpEvent* self ```
void q_graphicsscenehelpevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QGraphicsSceneHelpEvent* self ```
bool q_graphicsscenehelpevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QGraphicsSceneHelpEvent* self ```
bool q_graphicsscenehelpevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QGraphicsSceneHelpEvent* self ```
bool q_graphicsscenehelpevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_graphicsscenehelpevent_register_event_type();

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_graphicsscenehelpevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSceneHelpEvent* self, bool accepted ```
void q_graphicsscenehelpevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSceneHelpEvent* self, bool accepted ```
void q_graphicsscenehelpevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSceneHelpEvent* self, void (*slot)(QGraphicsSceneHelpEvent*, bool) ```
void q_graphicsscenehelpevent_on_set_accepted(void* self, void (*slot)(void*, bool));

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSceneHelpEvent* self ```
QEvent* q_graphicsscenehelpevent_clone(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSceneHelpEvent* self ```
QEvent* q_graphicsscenehelpevent_qbase_clone(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSceneHelpEvent* self, QEvent* (*slot)() ```
void q_graphicsscenehelpevent_on_clone(void* self, QEvent* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html#dtor.QGraphicsSceneHelpEvent)
///
/// Delete this object from C++ memory.
///
/// ``` QGraphicsSceneHelpEvent* self ```
void q_graphicsscenehelpevent_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html

/// q_graphicsscenedragdropevent_new constructs a new QGraphicsSceneDragDropEvent object.
///
///
QGraphicsSceneDragDropEvent* q_graphicsscenedragdropevent_new();

/// q_graphicsscenedragdropevent_new2 constructs a new QGraphicsSceneDragDropEvent object.
///
/// ``` enum QEvent__Type typeVal ```
QGraphicsSceneDragDropEvent* q_graphicsscenedragdropevent_new2(int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#pos)
///
/// ``` QGraphicsSceneDragDropEvent* self ```
QPointF* q_graphicsscenedragdropevent_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setPos)
///
/// ``` QGraphicsSceneDragDropEvent* self, QPointF* pos ```
void q_graphicsscenedragdropevent_set_pos(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#scenePos)
///
/// ``` QGraphicsSceneDragDropEvent* self ```
QPointF* q_graphicsscenedragdropevent_scene_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setScenePos)
///
/// ``` QGraphicsSceneDragDropEvent* self, QPointF* pos ```
void q_graphicsscenedragdropevent_set_scene_pos(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#screenPos)
///
/// ``` QGraphicsSceneDragDropEvent* self ```
QPoint* q_graphicsscenedragdropevent_screen_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setScreenPos)
///
/// ``` QGraphicsSceneDragDropEvent* self, QPoint* pos ```
void q_graphicsscenedragdropevent_set_screen_pos(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#buttons)
///
/// ``` QGraphicsSceneDragDropEvent* self ```
int64_t q_graphicsscenedragdropevent_buttons(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setButtons)
///
/// ``` QGraphicsSceneDragDropEvent* self, int buttons ```
void q_graphicsscenedragdropevent_set_buttons(void* self, int64_t buttons);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#modifiers)
///
/// ``` QGraphicsSceneDragDropEvent* self ```
int64_t q_graphicsscenedragdropevent_modifiers(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setModifiers)
///
/// ``` QGraphicsSceneDragDropEvent* self, int modifiers ```
void q_graphicsscenedragdropevent_set_modifiers(void* self, int64_t modifiers);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#possibleActions)
///
/// ``` QGraphicsSceneDragDropEvent* self ```
int64_t q_graphicsscenedragdropevent_possible_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setPossibleActions)
///
/// ``` QGraphicsSceneDragDropEvent* self, int actions ```
void q_graphicsscenedragdropevent_set_possible_actions(void* self, int64_t actions);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#proposedAction)
///
/// ``` QGraphicsSceneDragDropEvent* self ```
int64_t q_graphicsscenedragdropevent_proposed_action(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setProposedAction)
///
/// ``` QGraphicsSceneDragDropEvent* self, enum Qt__DropAction action ```
void q_graphicsscenedragdropevent_set_proposed_action(void* self, int64_t action);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#acceptProposedAction)
///
/// ``` QGraphicsSceneDragDropEvent* self ```
void q_graphicsscenedragdropevent_accept_proposed_action(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#dropAction)
///
/// ``` QGraphicsSceneDragDropEvent* self ```
int64_t q_graphicsscenedragdropevent_drop_action(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setDropAction)
///
/// ``` QGraphicsSceneDragDropEvent* self, enum Qt__DropAction action ```
void q_graphicsscenedragdropevent_set_drop_action(void* self, int64_t action);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#source)
///
/// ``` QGraphicsSceneDragDropEvent* self ```
QWidget* q_graphicsscenedragdropevent_source(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setSource)
///
/// ``` QGraphicsSceneDragDropEvent* self, QWidget* source ```
void q_graphicsscenedragdropevent_set_source(void* self, void* source);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#mimeData)
///
/// ``` QGraphicsSceneDragDropEvent* self ```
const QMimeData* q_graphicsscenedragdropevent_mime_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setMimeData)
///
/// ``` QGraphicsSceneDragDropEvent* self, QMimeData* data ```
void q_graphicsscenedragdropevent_set_mime_data(void* self, void* data);

/// Inherited from QGraphicsSceneEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
///
/// ``` QGraphicsSceneDragDropEvent* self ```
QWidget* q_graphicsscenedragdropevent_widget(void* self);

/// Inherited from QGraphicsSceneEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
///
/// ``` QGraphicsSceneDragDropEvent* self, QWidget* widget ```
void q_graphicsscenedragdropevent_set_widget(void* self, void* widget);

/// Inherited from QGraphicsSceneEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
///
/// ``` QGraphicsSceneDragDropEvent* self ```
uint64_t q_graphicsscenedragdropevent_timestamp(void* self);

/// Inherited from QGraphicsSceneEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
///
/// ``` QGraphicsSceneDragDropEvent* self, uint64_t ts ```
void q_graphicsscenedragdropevent_set_timestamp(void* self, uint64_t ts);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QGraphicsSceneDragDropEvent* self ```
int64_t q_graphicsscenedragdropevent_type(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QGraphicsSceneDragDropEvent* self ```
bool q_graphicsscenedragdropevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QGraphicsSceneDragDropEvent* self ```
bool q_graphicsscenedragdropevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QGraphicsSceneDragDropEvent* self ```
void q_graphicsscenedragdropevent_accept(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QGraphicsSceneDragDropEvent* self ```
void q_graphicsscenedragdropevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QGraphicsSceneDragDropEvent* self ```
bool q_graphicsscenedragdropevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QGraphicsSceneDragDropEvent* self ```
bool q_graphicsscenedragdropevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QGraphicsSceneDragDropEvent* self ```
bool q_graphicsscenedragdropevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_graphicsscenedragdropevent_register_event_type();

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_graphicsscenedragdropevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSceneDragDropEvent* self, bool accepted ```
void q_graphicsscenedragdropevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSceneDragDropEvent* self, bool accepted ```
void q_graphicsscenedragdropevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSceneDragDropEvent* self, void (*slot)(QGraphicsSceneDragDropEvent*, bool) ```
void q_graphicsscenedragdropevent_on_set_accepted(void* self, void (*slot)(void*, bool));

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSceneDragDropEvent* self ```
QEvent* q_graphicsscenedragdropevent_clone(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSceneDragDropEvent* self ```
QEvent* q_graphicsscenedragdropevent_qbase_clone(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSceneDragDropEvent* self, QEvent* (*slot)() ```
void q_graphicsscenedragdropevent_on_clone(void* self, QEvent* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#dtor.QGraphicsSceneDragDropEvent)
///
/// Delete this object from C++ memory.
///
/// ``` QGraphicsSceneDragDropEvent* self ```
void q_graphicsscenedragdropevent_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html

/// q_graphicssceneresizeevent_new constructs a new QGraphicsSceneResizeEvent object.
///
///
QGraphicsSceneResizeEvent* q_graphicssceneresizeevent_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html#oldSize)
///
/// ``` QGraphicsSceneResizeEvent* self ```
QSizeF* q_graphicssceneresizeevent_old_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html#setOldSize)
///
/// ``` QGraphicsSceneResizeEvent* self, QSizeF* size ```
void q_graphicssceneresizeevent_set_old_size(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html#newSize)
///
/// ``` QGraphicsSceneResizeEvent* self ```
QSizeF* q_graphicssceneresizeevent_new_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html#setNewSize)
///
/// ``` QGraphicsSceneResizeEvent* self, QSizeF* size ```
void q_graphicssceneresizeevent_set_new_size(void* self, void* size);

/// Inherited from QGraphicsSceneEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
///
/// ``` QGraphicsSceneResizeEvent* self ```
QWidget* q_graphicssceneresizeevent_widget(void* self);

/// Inherited from QGraphicsSceneEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
///
/// ``` QGraphicsSceneResizeEvent* self, QWidget* widget ```
void q_graphicssceneresizeevent_set_widget(void* self, void* widget);

/// Inherited from QGraphicsSceneEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
///
/// ``` QGraphicsSceneResizeEvent* self ```
uint64_t q_graphicssceneresizeevent_timestamp(void* self);

/// Inherited from QGraphicsSceneEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
///
/// ``` QGraphicsSceneResizeEvent* self, uint64_t ts ```
void q_graphicssceneresizeevent_set_timestamp(void* self, uint64_t ts);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QGraphicsSceneResizeEvent* self ```
int64_t q_graphicssceneresizeevent_type(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QGraphicsSceneResizeEvent* self ```
bool q_graphicssceneresizeevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QGraphicsSceneResizeEvent* self ```
bool q_graphicssceneresizeevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QGraphicsSceneResizeEvent* self ```
void q_graphicssceneresizeevent_accept(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QGraphicsSceneResizeEvent* self ```
void q_graphicssceneresizeevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QGraphicsSceneResizeEvent* self ```
bool q_graphicssceneresizeevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QGraphicsSceneResizeEvent* self ```
bool q_graphicssceneresizeevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QGraphicsSceneResizeEvent* self ```
bool q_graphicssceneresizeevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_graphicssceneresizeevent_register_event_type();

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_graphicssceneresizeevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSceneResizeEvent* self, bool accepted ```
void q_graphicssceneresizeevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSceneResizeEvent* self, bool accepted ```
void q_graphicssceneresizeevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSceneResizeEvent* self, void (*slot)(QGraphicsSceneResizeEvent*, bool) ```
void q_graphicssceneresizeevent_on_set_accepted(void* self, void (*slot)(void*, bool));

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSceneResizeEvent* self ```
QEvent* q_graphicssceneresizeevent_clone(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSceneResizeEvent* self ```
QEvent* q_graphicssceneresizeevent_qbase_clone(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSceneResizeEvent* self, QEvent* (*slot)() ```
void q_graphicssceneresizeevent_on_clone(void* self, QEvent* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html#dtor.QGraphicsSceneResizeEvent)
///
/// Delete this object from C++ memory.
///
/// ``` QGraphicsSceneResizeEvent* self ```
void q_graphicssceneresizeevent_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html

/// q_graphicsscenemoveevent_new constructs a new QGraphicsSceneMoveEvent object.
///
///
QGraphicsSceneMoveEvent* q_graphicsscenemoveevent_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html#oldPos)
///
/// ``` QGraphicsSceneMoveEvent* self ```
QPointF* q_graphicsscenemoveevent_old_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html#setOldPos)
///
/// ``` QGraphicsSceneMoveEvent* self, QPointF* pos ```
void q_graphicsscenemoveevent_set_old_pos(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html#newPos)
///
/// ``` QGraphicsSceneMoveEvent* self ```
QPointF* q_graphicsscenemoveevent_new_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html#setNewPos)
///
/// ``` QGraphicsSceneMoveEvent* self, QPointF* pos ```
void q_graphicsscenemoveevent_set_new_pos(void* self, void* pos);

/// Inherited from QGraphicsSceneEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
///
/// ``` QGraphicsSceneMoveEvent* self ```
QWidget* q_graphicsscenemoveevent_widget(void* self);

/// Inherited from QGraphicsSceneEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
///
/// ``` QGraphicsSceneMoveEvent* self, QWidget* widget ```
void q_graphicsscenemoveevent_set_widget(void* self, void* widget);

/// Inherited from QGraphicsSceneEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
///
/// ``` QGraphicsSceneMoveEvent* self ```
uint64_t q_graphicsscenemoveevent_timestamp(void* self);

/// Inherited from QGraphicsSceneEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
///
/// ``` QGraphicsSceneMoveEvent* self, uint64_t ts ```
void q_graphicsscenemoveevent_set_timestamp(void* self, uint64_t ts);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QGraphicsSceneMoveEvent* self ```
int64_t q_graphicsscenemoveevent_type(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QGraphicsSceneMoveEvent* self ```
bool q_graphicsscenemoveevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QGraphicsSceneMoveEvent* self ```
bool q_graphicsscenemoveevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QGraphicsSceneMoveEvent* self ```
void q_graphicsscenemoveevent_accept(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QGraphicsSceneMoveEvent* self ```
void q_graphicsscenemoveevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QGraphicsSceneMoveEvent* self ```
bool q_graphicsscenemoveevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QGraphicsSceneMoveEvent* self ```
bool q_graphicsscenemoveevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QGraphicsSceneMoveEvent* self ```
bool q_graphicsscenemoveevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_graphicsscenemoveevent_register_event_type();

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_graphicsscenemoveevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSceneMoveEvent* self, bool accepted ```
void q_graphicsscenemoveevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSceneMoveEvent* self, bool accepted ```
void q_graphicsscenemoveevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSceneMoveEvent* self, void (*slot)(QGraphicsSceneMoveEvent*, bool) ```
void q_graphicsscenemoveevent_on_set_accepted(void* self, void (*slot)(void*, bool));

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSceneMoveEvent* self ```
QEvent* q_graphicsscenemoveevent_clone(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSceneMoveEvent* self ```
QEvent* q_graphicsscenemoveevent_qbase_clone(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSceneMoveEvent* self, QEvent* (*slot)() ```
void q_graphicsscenemoveevent_on_clone(void* self, QEvent* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html#dtor.QGraphicsSceneMoveEvent)
///
/// Delete this object from C++ memory.
///
/// ``` QGraphicsSceneMoveEvent* self ```
void q_graphicsscenemoveevent_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicssceneevent.html#types

typedef enum {
    QGRAPHICSSCENECONTEXTMENUEVENT_REASON_MOUSE = 0,
    QGRAPHICSSCENECONTEXTMENUEVENT_REASON_KEYBOARD = 1,
    QGRAPHICSSCENECONTEXTMENUEVENT_REASON_OTHER = 2
} QGraphicsSceneContextMenuEvent__Reason;

#endif
