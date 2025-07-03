#pragma once
#ifndef SRCQT6C_LIBQTIMELINE_H
#define SRCQT6C_LIBQTIMELINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqevent.h"
#include "libqeasingcurve.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qtimeline.html

/// q_timeline_new constructs a new QTimeLine object.
///
///
QTimeLine* q_timeline_new();

/// q_timeline_new2 constructs a new QTimeLine object.
///
/// ``` int duration ```
QTimeLine* q_timeline_new2(int duration);

/// q_timeline_new3 constructs a new QTimeLine object.
///
/// ``` int duration, QObject* parent ```
QTimeLine* q_timeline_new3(int duration, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTimeLine* self ```
const QMetaObject* q_timeline_meta_object(void* self);

/// ``` QTimeLine* self, const char* param1 ```
void* q_timeline_metacast(void* self, const char* param1);

/// ``` QTimeLine* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_timeline_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QTimeLine* self, int32_t (*slot)(QTimeLine*, enum QMetaObject__Call, int, void*) ```
void q_timeline_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QTimeLine* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_timeline_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_timeline_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#state)
///
/// ``` QTimeLine* self ```
int64_t q_timeline_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#loopCount)
///
/// ``` QTimeLine* self ```
int32_t q_timeline_loop_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#setLoopCount)
///
/// ``` QTimeLine* self, int count ```
void q_timeline_set_loop_count(void* self, int count);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#direction)
///
/// ``` QTimeLine* self ```
int64_t q_timeline_direction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#setDirection)
///
/// ``` QTimeLine* self, enum QTimeLine__Direction direction ```
void q_timeline_set_direction(void* self, int64_t direction);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#duration)
///
/// ``` QTimeLine* self ```
int32_t q_timeline_duration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#setDuration)
///
/// ``` QTimeLine* self, int duration ```
void q_timeline_set_duration(void* self, int duration);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#startFrame)
///
/// ``` QTimeLine* self ```
int32_t q_timeline_start_frame(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#setStartFrame)
///
/// ``` QTimeLine* self, int frame ```
void q_timeline_set_start_frame(void* self, int frame);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#endFrame)
///
/// ``` QTimeLine* self ```
int32_t q_timeline_end_frame(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#setEndFrame)
///
/// ``` QTimeLine* self, int frame ```
void q_timeline_set_end_frame(void* self, int frame);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#setFrameRange)
///
/// ``` QTimeLine* self, int startFrame, int endFrame ```
void q_timeline_set_frame_range(void* self, int startFrame, int endFrame);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#updateInterval)
///
/// ``` QTimeLine* self ```
int32_t q_timeline_update_interval(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#setUpdateInterval)
///
/// ``` QTimeLine* self, int interval ```
void q_timeline_set_update_interval(void* self, int interval);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#easingCurve)
///
/// ``` QTimeLine* self ```
QEasingCurve* q_timeline_easing_curve(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#setEasingCurve)
///
/// ``` QTimeLine* self, QEasingCurve* curve ```
void q_timeline_set_easing_curve(void* self, void* curve);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#currentTime)
///
/// ``` QTimeLine* self ```
int32_t q_timeline_current_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#currentFrame)
///
/// ``` QTimeLine* self ```
int32_t q_timeline_current_frame(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#currentValue)
///
/// ``` QTimeLine* self ```
double q_timeline_current_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#frameForTime)
///
/// ``` QTimeLine* self, int msec ```
int32_t q_timeline_frame_for_time(void* self, int msec);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#valueForTime)
///
/// ``` QTimeLine* self, int msec ```
double q_timeline_value_for_time(void* self, int msec);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#valueForTime)
///
/// Allows for overriding the related default method
///
/// ``` QTimeLine* self, double (*slot)(QTimeLine*, int) ```
void q_timeline_on_value_for_time(void* self, double (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#valueForTime)
///
/// Base class method implementation
///
/// ``` QTimeLine* self, int msec ```
double q_timeline_qbase_value_for_time(void* self, int msec);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#start)
///
/// ``` QTimeLine* self ```
void q_timeline_start(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#resume)
///
/// ``` QTimeLine* self ```
void q_timeline_resume(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#stop)
///
/// ``` QTimeLine* self ```
void q_timeline_stop(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#setPaused)
///
/// ``` QTimeLine* self, bool paused ```
void q_timeline_set_paused(void* self, bool paused);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#setCurrentTime)
///
/// ``` QTimeLine* self, int msec ```
void q_timeline_set_current_time(void* self, int msec);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#toggleDirection)
///
/// ``` QTimeLine* self ```
void q_timeline_toggle_direction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#timerEvent)
///
/// ``` QTimeLine* self, QTimerEvent* event ```
void q_timeline_timer_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTimeLine* self, void (*slot)(QTimeLine*, QTimerEvent*) ```
void q_timeline_on_timer_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#timerEvent)
///
/// Base class method implementation
///
/// ``` QTimeLine* self, QTimerEvent* event ```
void q_timeline_qbase_timer_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_timeline_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_timeline_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTimeLine* self ```
const char* q_timeline_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTimeLine* self, char* name ```
void q_timeline_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTimeLine* self ```
bool q_timeline_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTimeLine* self ```
bool q_timeline_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTimeLine* self ```
bool q_timeline_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTimeLine* self ```
bool q_timeline_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTimeLine* self, bool b ```
bool q_timeline_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTimeLine* self ```
QThread* q_timeline_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTimeLine* self, QThread* thread ```
void q_timeline_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTimeLine* self, int interval ```
int32_t q_timeline_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTimeLine* self, int id ```
void q_timeline_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTimeLine* self ```
libqt_list /* of QObject* */ q_timeline_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QTimeLine* self, QObject* parent ```
void q_timeline_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTimeLine* self, QObject* filterObj ```
void q_timeline_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTimeLine* self, QObject* obj ```
void q_timeline_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_timeline_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTimeLine* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_timeline_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_timeline_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_timeline_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTimeLine* self ```
void q_timeline_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTimeLine* self ```
void q_timeline_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTimeLine* self, const char* name, QVariant* value ```
bool q_timeline_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTimeLine* self, const char* name ```
QVariant* q_timeline_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTimeLine* self ```
const char** q_timeline_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTimeLine* self ```
QBindingStorage* q_timeline_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTimeLine* self ```
const QBindingStorage* q_timeline_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTimeLine* self ```
void q_timeline_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTimeLine* self, void (*slot)(QObject*) ```
void q_timeline_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QTimeLine* self ```
QObject* q_timeline_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTimeLine* self, const char* classname ```
bool q_timeline_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTimeLine* self ```
void q_timeline_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTimeLine* self, int interval, enum Qt__TimerType timerType ```
int32_t q_timeline_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_timeline_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTimeLine* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_timeline_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTimeLine* self, QObject* param1 ```
void q_timeline_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTimeLine* self, void (*slot)(QObject*, QObject*) ```
void q_timeline_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeLine* self, QEvent* event ```
bool q_timeline_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeLine* self, QEvent* event ```
bool q_timeline_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeLine* self, bool (*slot)(QTimeLine*, QEvent*) ```
void q_timeline_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeLine* self, QObject* watched, QEvent* event ```
bool q_timeline_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeLine* self, QObject* watched, QEvent* event ```
bool q_timeline_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeLine* self, bool (*slot)(QTimeLine*, QObject*, QEvent*) ```
void q_timeline_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeLine* self, QChildEvent* event ```
void q_timeline_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeLine* self, QChildEvent* event ```
void q_timeline_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeLine* self, void (*slot)(QTimeLine*, QChildEvent*) ```
void q_timeline_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeLine* self, QEvent* event ```
void q_timeline_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeLine* self, QEvent* event ```
void q_timeline_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeLine* self, void (*slot)(QTimeLine*, QEvent*) ```
void q_timeline_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeLine* self, QMetaMethod* signal ```
void q_timeline_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeLine* self, QMetaMethod* signal ```
void q_timeline_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeLine* self, void (*slot)(QTimeLine*, QMetaMethod*) ```
void q_timeline_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeLine* self, QMetaMethod* signal ```
void q_timeline_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeLine* self, QMetaMethod* signal ```
void q_timeline_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeLine* self, void (*slot)(QTimeLine*, QMetaMethod*) ```
void q_timeline_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeLine* self ```
QObject* q_timeline_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeLine* self ```
QObject* q_timeline_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeLine* self, QObject* (*slot)() ```
void q_timeline_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeLine* self ```
int32_t q_timeline_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeLine* self ```
int32_t q_timeline_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeLine* self, int32_t (*slot)() ```
void q_timeline_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeLine* self, const char* signal ```
int32_t q_timeline_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeLine* self, const char* signal ```
int32_t q_timeline_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeLine* self, int32_t (*slot)(QTimeLine*, const char*) ```
void q_timeline_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeLine* self, QMetaMethod* signal ```
bool q_timeline_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeLine* self, QMetaMethod* signal ```
bool q_timeline_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeLine* self, bool (*slot)(QTimeLine*, QMetaMethod*) ```
void q_timeline_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#valueChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QTimeLine* self, void (*slot)(QTimeLine*, double) ```
void q_timeline_on_value_changed(void* self, void (*slot)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#frameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QTimeLine* self, void (*slot)(QTimeLine*, int) ```
void q_timeline_on_frame_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#stateChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QTimeLine* self, void (*slot)(QTimeLine*, enum QTimeLine__State) ```
void q_timeline_on_state_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#finished)
///
/// Wrapper to allow calling private signal
///
/// ``` QTimeLine* self, void (*slot)(QTimeLine*) ```
void q_timeline_on_finished(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QTimeLine* self, void (*slot)(QObject*, const char*) ```
void q_timeline_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#dtor.QTimeLine)
///
/// Delete this object from C++ memory.
///
/// ``` QTimeLine* self ```
void q_timeline_delete(void* self);

/// https://doc.qt.io/qt-6/qtimeline.html#types

typedef enum {
    QTIMELINE_STATE_NOTRUNNING = 0,
    QTIMELINE_STATE_PAUSED = 1,
    QTIMELINE_STATE_RUNNING = 2
} QTimeLine__State;

typedef enum {
    QTIMELINE_DIRECTION_FORWARD = 0,
    QTIMELINE_DIRECTION_BACKWARD = 1
} QTimeLine__Direction;

#endif
