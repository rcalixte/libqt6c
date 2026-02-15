#pragma once
#ifndef SRC_QT6C_LIBQTIMELINE_H
#define SRC_QT6C_LIBQTIMELINE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html)

/// q_timeline_new constructs a new QTimeLine object.
///
QTimeLine* q_timeline_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html)

/// q_timeline_new2 constructs a new QTimeLine object.
///
/// @param duration int
///
QTimeLine* q_timeline_new2(int duration);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html)

/// q_timeline_new3 constructs a new QTimeLine object.
///
/// @param duration int
/// @param parent QObject*
///
QTimeLine* q_timeline_new3(int duration, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QTimeLine*
///
const QMetaObject* q_timeline_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QTimeLine*
/// @param callback const QMetaObject* func()
///
void q_timeline_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QTimeLine*
///
const QMetaObject* q_timeline_qbase_meta_object(void* self);

/// @param self QTimeLine*
/// @param param1 const char*
///
void* q_timeline_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QTimeLine*
/// @param callback void* func(QTimeLine* self, const char* param1)
///
void q_timeline_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QTimeLine*
/// @param param1 const char*
///
void* q_timeline_qbase_metacast(void* self, const char* param1);

/// @param self QTimeLine*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_timeline_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QTimeLine*
/// @param callback int32_t func(QTimeLine* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_timeline_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QTimeLine*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_timeline_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_timeline_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#state)
///
/// @param self QTimeLine*
///
/// @return enum QTimeLine__State
///
int32_t q_timeline_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#loopCount)
///
/// @param self QTimeLine*
///
int32_t q_timeline_loop_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#setLoopCount)
///
/// @param self QTimeLine*
/// @param count int
///
void q_timeline_set_loop_count(void* self, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#direction)
///
/// @param self QTimeLine*
///
/// @return enum QTimeLine__Direction
///
int32_t q_timeline_direction(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#setDirection)
///
/// @param self QTimeLine*
/// @param direction enum QTimeLine__Direction
///
void q_timeline_set_direction(void* self, int32_t direction);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#duration)
///
/// @param self QTimeLine*
///
int32_t q_timeline_duration(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#setDuration)
///
/// @param self QTimeLine*
/// @param duration int
///
void q_timeline_set_duration(void* self, int duration);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#startFrame)
///
/// @param self QTimeLine*
///
int32_t q_timeline_start_frame(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#setStartFrame)
///
/// @param self QTimeLine*
/// @param frame int
///
void q_timeline_set_start_frame(void* self, int frame);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#endFrame)
///
/// @param self QTimeLine*
///
int32_t q_timeline_end_frame(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#setEndFrame)
///
/// @param self QTimeLine*
/// @param frame int
///
void q_timeline_set_end_frame(void* self, int frame);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#setFrameRange)
///
/// @param self QTimeLine*
/// @param startFrame int
/// @param endFrame int
///
void q_timeline_set_frame_range(void* self, int startFrame, int endFrame);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#updateInterval)
///
/// @param self QTimeLine*
///
int32_t q_timeline_update_interval(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#setUpdateInterval)
///
/// @param self QTimeLine*
/// @param interval int
///
void q_timeline_set_update_interval(void* self, int interval);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#easingCurve)
///
/// @param self QTimeLine*
///
QEasingCurve* q_timeline_easing_curve(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#setEasingCurve)
///
/// @param self QTimeLine*
/// @param curve QEasingCurve*
///
void q_timeline_set_easing_curve(void* self, void* curve);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#currentTime)
///
/// @param self QTimeLine*
///
int32_t q_timeline_current_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#currentFrame)
///
/// @param self QTimeLine*
///
int32_t q_timeline_current_frame(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#currentValue)
///
/// @param self QTimeLine*
///
double q_timeline_current_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#frameForTime)
///
/// @param self QTimeLine*
/// @param msec int
///
int32_t q_timeline_frame_for_time(void* self, int msec);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#valueForTime)
///
/// @param self QTimeLine*
/// @param msec int
///
double q_timeline_value_for_time(void* self, int msec);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#valueForTime)
///
/// Allows for overriding the related default method
///
/// @param self QTimeLine*
/// @param callback double func(QTimeLine* self, int msec)
///
void q_timeline_on_value_for_time(void* self, double (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#valueForTime)
///
/// Base class method implementation
///
/// @param self QTimeLine*
/// @param msec int
///
double q_timeline_qbase_value_for_time(void* self, int msec);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#start)
///
/// @param self QTimeLine*
///
void q_timeline_start(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#resume)
///
/// @param self QTimeLine*
///
void q_timeline_resume(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#stop)
///
/// @param self QTimeLine*
///
void q_timeline_stop(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#setPaused)
///
/// @param self QTimeLine*
/// @param paused bool
///
void q_timeline_set_paused(void* self, bool paused);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#setCurrentTime)
///
/// @param self QTimeLine*
/// @param msec int
///
void q_timeline_set_current_time(void* self, int msec);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#toggleDirection)
///
/// @param self QTimeLine*
///
void q_timeline_toggle_direction(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#timerEvent)
///
/// @param self QTimeLine*
/// @param event QTimerEvent*
///
void q_timeline_timer_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTimeLine*
/// @param callback void func(QTimeLine* self, QTimerEvent* event)
///
void q_timeline_on_timer_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#timerEvent)
///
/// Base class method implementation
///
/// @param self QTimeLine*
/// @param event QTimerEvent*
///
void q_timeline_qbase_timer_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_timeline_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_timeline_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTimeLine*
///
const char* q_timeline_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QTimeLine*
/// @param name const char*
///
void q_timeline_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QTimeLine*
///
bool q_timeline_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QTimeLine*
///
bool q_timeline_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QTimeLine*
///
bool q_timeline_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QTimeLine*
///
bool q_timeline_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QTimeLine*
/// @param b bool
///
bool q_timeline_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QTimeLine*
///
QThread* q_timeline_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTimeLine*
/// @param thread QThread*
///
bool q_timeline_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTimeLine*
/// @param interval int
///
int32_t q_timeline_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTimeLine*
/// @param time int64_t of nanoseconds
///
int32_t q_timeline_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTimeLine*
/// @param id int
///
void q_timeline_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTimeLine*
/// @param id enum Qt__TimerId
///
void q_timeline_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QTimeLine*
///
/// @return libqt_list of QObject*
///
libqt_list q_timeline_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QTimeLine*
/// @param parent QObject*
///
void q_timeline_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QTimeLine*
/// @param filterObj QObject*
///
void q_timeline_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QTimeLine*
/// @param obj QObject*
///
void q_timeline_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_timeline_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_timeline_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTimeLine*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_timeline_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_timeline_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_timeline_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QTimeLine*
///
bool q_timeline_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QTimeLine*
/// @param receiver QObject*
///
bool q_timeline_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_timeline_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QTimeLine*
///
void q_timeline_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QTimeLine*
///
void q_timeline_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QTimeLine*
/// @param name const char*
/// @param value QVariant*
///
bool q_timeline_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QTimeLine*
/// @param name const char*
///
QVariant* q_timeline_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QTimeLine*
///
const char** q_timeline_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTimeLine*
///
QBindingStorage* q_timeline_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTimeLine*
///
const QBindingStorage* q_timeline_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTimeLine*
///
void q_timeline_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTimeLine*
/// @param callback void func(QTimeLine* self)
///
void q_timeline_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QTimeLine*
///
QObject* q_timeline_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QTimeLine*
/// @param classname const char*
///
bool q_timeline_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QTimeLine*
///
void q_timeline_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTimeLine*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_timeline_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTimeLine*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_timeline_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_timeline_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_timeline_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTimeLine*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_timeline_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QTimeLine*
/// @param signal const char*
///
bool q_timeline_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QTimeLine*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_timeline_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QTimeLine*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_timeline_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QTimeLine*
/// @param receiver QObject*
/// @param member const char*
///
bool q_timeline_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTimeLine*
/// @param param1 QObject*
///
void q_timeline_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTimeLine*
/// @param callback void func(QTimeLine* self, QObject* param1)
///
void q_timeline_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeLine*
/// @param event QEvent*
///
bool q_timeline_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeLine*
/// @param event QEvent*
///
bool q_timeline_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeLine*
/// @param callback bool func(QTimeLine* self, QEvent* event)
///
void q_timeline_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeLine*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_timeline_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeLine*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_timeline_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeLine*
/// @param callback bool func(QTimeLine* self, QObject* watched, QEvent* event)
///
void q_timeline_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeLine*
/// @param event QChildEvent*
///
void q_timeline_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeLine*
/// @param event QChildEvent*
///
void q_timeline_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeLine*
/// @param callback void func(QTimeLine* self, QChildEvent* event)
///
void q_timeline_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeLine*
/// @param event QEvent*
///
void q_timeline_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeLine*
/// @param event QEvent*
///
void q_timeline_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeLine*
/// @param callback void func(QTimeLine* self, QEvent* event)
///
void q_timeline_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeLine*
/// @param signal QMetaMethod*
///
void q_timeline_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeLine*
/// @param signal QMetaMethod*
///
void q_timeline_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeLine*
/// @param callback void func(QTimeLine* self, QMetaMethod* signal)
///
void q_timeline_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeLine*
/// @param signal QMetaMethod*
///
void q_timeline_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeLine*
/// @param signal QMetaMethod*
///
void q_timeline_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeLine*
/// @param callback void func(QTimeLine* self, QMetaMethod* signal)
///
void q_timeline_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeLine*
///
QObject* q_timeline_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeLine*
///
QObject* q_timeline_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeLine*
/// @param callback QObject* func()
///
void q_timeline_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeLine*
///
int32_t q_timeline_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeLine*
///
int32_t q_timeline_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeLine*
/// @param callback int32_t func()
///
void q_timeline_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeLine*
/// @param signal const char*
///
int32_t q_timeline_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeLine*
/// @param signal const char*
///
int32_t q_timeline_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeLine*
/// @param callback int32_t func(QTimeLine* self, const char* signal)
///
void q_timeline_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimeLine*
/// @param signal QMetaMethod*
///
bool q_timeline_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimeLine*
/// @param signal QMetaMethod*
///
bool q_timeline_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimeLine*
/// @param callback bool func(QTimeLine* self, QMetaMethod* signal)
///
void q_timeline_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#valueChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTimeLine*
/// @param callback void func(QTimeLine* self, double x)
///
void q_timeline_on_value_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#frameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTimeLine*
/// @param callback void func(QTimeLine* self, int param1)
///
void q_timeline_on_frame_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#stateChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTimeLine*
/// @param callback void func(QTimeLine* self, enum QTimeLine__State newState)
///
void q_timeline_on_state_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#finished)
///
/// Wrapper to allow calling private signal
///
/// @param self QTimeLine*
/// @param callback void func(QTimeLine* self)
///
void q_timeline_on_finished(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTimeLine*
/// @param callback void func(QTimeLine* self, const char* objectName)
///
void q_timeline_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#dtor.QTimeLine)
///
/// Delete this object from C++ memory.
///
/// @param self QTimeLine*
///
void q_timeline_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#public-types)

typedef enum {
    QTIMELINE_STATE_NOTRUNNING = 0,
    QTIMELINE_STATE_PAUSED = 1,
    QTIMELINE_STATE_RUNNING = 2
} QTimeLine__State;

/// [Upstream resources](https://doc.qt.io/qt-6/qtimeline.html#public-types)

typedef enum {
    QTIMELINE_DIRECTION_FORWARD = 0,
    QTIMELINE_DIRECTION_BACKWARD = 1
} QTimeLine__Direction;

#endif
