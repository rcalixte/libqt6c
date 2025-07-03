#pragma once
#ifndef SRCQT6C_LIBQEVENTLOOP_H
#define SRCQT6C_LIBQEVENTLOOP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"

/// https://doc.qt.io/qt-6/qeventloop.html

/// q_eventloop_new constructs a new QEventLoop object.
///
///
QEventLoop* q_eventloop_new();

/// q_eventloop_new2 constructs a new QEventLoop object.
///
/// ``` QObject* parent ```
QEventLoop* q_eventloop_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QEventLoop* self ```
const QMetaObject* q_eventloop_meta_object(void* self);

/// ``` QEventLoop* self, const char* param1 ```
void* q_eventloop_metacast(void* self, const char* param1);

/// ``` QEventLoop* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_eventloop_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QEventLoop* self, int32_t (*slot)(QEventLoop*, enum QMetaObject__Call, int, void*) ```
void q_eventloop_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QEventLoop* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_eventloop_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_eventloop_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#processEvents)
///
/// ``` QEventLoop* self ```
bool q_eventloop_process_events(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#processEvents)
///
/// ``` QEventLoop* self, int flags, int maximumTime ```
void q_eventloop_process_events2(void* self, int64_t flags, int maximumTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#exec)
///
/// ``` QEventLoop* self ```
int32_t q_eventloop_exec(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#isRunning)
///
/// ``` QEventLoop* self ```
bool q_eventloop_is_running(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#wakeUp)
///
/// ``` QEventLoop* self ```
void q_eventloop_wake_up(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#event)
///
/// ``` QEventLoop* self, QEvent* event ```
bool q_eventloop_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QEventLoop* self, bool (*slot)(QEventLoop*, QEvent*) ```
void q_eventloop_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#event)
///
/// Base class method implementation
///
/// ``` QEventLoop* self, QEvent* event ```
bool q_eventloop_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#exit)
///
/// ``` QEventLoop* self ```
void q_eventloop_exit(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#quit)
///
/// ``` QEventLoop* self ```
void q_eventloop_quit(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_eventloop_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_eventloop_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#processEvents)
///
/// ``` QEventLoop* self, int flags ```
bool q_eventloop_process_events1(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#exec)
///
/// ``` QEventLoop* self, int flags ```
int32_t q_eventloop_exec1(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#exit)
///
/// ``` QEventLoop* self, int returnCode ```
void q_eventloop_exit1(void* self, int returnCode);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QEventLoop* self ```
const char* q_eventloop_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QEventLoop* self, char* name ```
void q_eventloop_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QEventLoop* self ```
bool q_eventloop_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QEventLoop* self ```
bool q_eventloop_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QEventLoop* self ```
bool q_eventloop_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QEventLoop* self ```
bool q_eventloop_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QEventLoop* self, bool b ```
bool q_eventloop_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QEventLoop* self ```
QThread* q_eventloop_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QEventLoop* self, QThread* thread ```
void q_eventloop_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QEventLoop* self, int interval ```
int32_t q_eventloop_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QEventLoop* self, int id ```
void q_eventloop_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QEventLoop* self ```
libqt_list /* of QObject* */ q_eventloop_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QEventLoop* self, QObject* parent ```
void q_eventloop_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QEventLoop* self, QObject* filterObj ```
void q_eventloop_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QEventLoop* self, QObject* obj ```
void q_eventloop_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_eventloop_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QEventLoop* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_eventloop_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_eventloop_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_eventloop_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QEventLoop* self ```
void q_eventloop_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QEventLoop* self ```
void q_eventloop_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QEventLoop* self, const char* name, QVariant* value ```
bool q_eventloop_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QEventLoop* self, const char* name ```
QVariant* q_eventloop_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QEventLoop* self ```
const char** q_eventloop_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QEventLoop* self ```
QBindingStorage* q_eventloop_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QEventLoop* self ```
const QBindingStorage* q_eventloop_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QEventLoop* self ```
void q_eventloop_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QEventLoop* self, void (*slot)(QObject*) ```
void q_eventloop_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QEventLoop* self ```
QObject* q_eventloop_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QEventLoop* self, const char* classname ```
bool q_eventloop_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QEventLoop* self ```
void q_eventloop_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QEventLoop* self, int interval, enum Qt__TimerType timerType ```
int32_t q_eventloop_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_eventloop_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QEventLoop* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_eventloop_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QEventLoop* self, QObject* param1 ```
void q_eventloop_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QEventLoop* self, void (*slot)(QObject*, QObject*) ```
void q_eventloop_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QEventLoop* self, QObject* watched, QEvent* event ```
bool q_eventloop_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QEventLoop* self, QObject* watched, QEvent* event ```
bool q_eventloop_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QEventLoop* self, bool (*slot)(QEventLoop*, QObject*, QEvent*) ```
void q_eventloop_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QEventLoop* self, QTimerEvent* event ```
void q_eventloop_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QEventLoop* self, QTimerEvent* event ```
void q_eventloop_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QEventLoop* self, void (*slot)(QEventLoop*, QTimerEvent*) ```
void q_eventloop_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QEventLoop* self, QChildEvent* event ```
void q_eventloop_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QEventLoop* self, QChildEvent* event ```
void q_eventloop_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QEventLoop* self, void (*slot)(QEventLoop*, QChildEvent*) ```
void q_eventloop_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QEventLoop* self, QEvent* event ```
void q_eventloop_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QEventLoop* self, QEvent* event ```
void q_eventloop_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QEventLoop* self, void (*slot)(QEventLoop*, QEvent*) ```
void q_eventloop_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QEventLoop* self, QMetaMethod* signal ```
void q_eventloop_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QEventLoop* self, QMetaMethod* signal ```
void q_eventloop_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QEventLoop* self, void (*slot)(QEventLoop*, QMetaMethod*) ```
void q_eventloop_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QEventLoop* self, QMetaMethod* signal ```
void q_eventloop_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QEventLoop* self, QMetaMethod* signal ```
void q_eventloop_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QEventLoop* self, void (*slot)(QEventLoop*, QMetaMethod*) ```
void q_eventloop_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QEventLoop* self ```
QObject* q_eventloop_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QEventLoop* self ```
QObject* q_eventloop_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QEventLoop* self, QObject* (*slot)() ```
void q_eventloop_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QEventLoop* self ```
int32_t q_eventloop_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QEventLoop* self ```
int32_t q_eventloop_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QEventLoop* self, int32_t (*slot)() ```
void q_eventloop_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QEventLoop* self, const char* signal ```
int32_t q_eventloop_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QEventLoop* self, const char* signal ```
int32_t q_eventloop_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QEventLoop* self, int32_t (*slot)(QEventLoop*, const char*) ```
void q_eventloop_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QEventLoop* self, QMetaMethod* signal ```
bool q_eventloop_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QEventLoop* self, QMetaMethod* signal ```
bool q_eventloop_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QEventLoop* self, bool (*slot)(QEventLoop*, QMetaMethod*) ```
void q_eventloop_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QEventLoop* self, void (*slot)(QObject*, const char*) ```
void q_eventloop_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#dtor.QEventLoop)
///
/// Delete this object from C++ memory.
///
/// ``` QEventLoop* self ```
void q_eventloop_delete(void* self);

/// https://doc.qt.io/qt-6/qeventlooplocker.html

/// q_eventlooplocker_new constructs a new QEventLoopLocker object.
///
///
QEventLoopLocker* q_eventlooplocker_new();

/// q_eventlooplocker_new2 constructs a new QEventLoopLocker object.
///
/// ``` QEventLoop* loop ```
QEventLoopLocker* q_eventlooplocker_new2(void* loop);

/// q_eventlooplocker_new3 constructs a new QEventLoopLocker object.
///
/// ``` QThread* thread ```
QEventLoopLocker* q_eventlooplocker_new3(void* thread);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventlooplocker.html#dtor.QEventLoopLocker)
///
/// Delete this object from C++ memory.
///
/// ``` QEventLoopLocker* self ```
void q_eventlooplocker_delete(void* self);

/// https://doc.qt.io/qt-6/qeventloop.html#types

typedef enum {
    QEVENTLOOP_PROCESSEVENTSFLAG_ALLEVENTS = 0,
    QEVENTLOOP_PROCESSEVENTSFLAG_EXCLUDEUSERINPUTEVENTS = 1,
    QEVENTLOOP_PROCESSEVENTSFLAG_EXCLUDESOCKETNOTIFIERS = 2,
    QEVENTLOOP_PROCESSEVENTSFLAG_WAITFORMOREEVENTS = 4,
    QEVENTLOOP_PROCESSEVENTSFLAG_X11EXCLUDETIMERS = 8,
    QEVENTLOOP_PROCESSEVENTSFLAG_EVENTLOOPEXEC = 32,
    QEVENTLOOP_PROCESSEVENTSFLAG_DIALOGEXEC = 64,
    QEVENTLOOP_PROCESSEVENTSFLAG_APPLICATIONEXEC = 128
} QEventLoop__ProcessEventsFlag;

#endif
