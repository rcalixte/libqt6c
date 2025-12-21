#pragma once
#ifndef SRC_QT6C_LIBQTIMER_H
#define SRC_QT6C_LIBQTIMER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qtimer.html)

/// q_timer_new constructs a new QTimer object.
///
QTimer* q_timer_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qtimer.html)

/// q_timer_new2 constructs a new QTimer object.
///
/// @param parent QObject*
///
QTimer* q_timer_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QTimer*
///
const QMetaObject* q_timer_meta_object(void* self);

/// @param self QTimer*
/// @param param1 const char*
///
void* q_timer_metacast(void* self, const char* param1);

/// @param self QTimer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_timer_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QTimer*
/// @param callback int32_t func(QTimer* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_timer_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QTimer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_timer_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* q_timer_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimer.html#isActive)
///
/// @param self QTimer*
///
bool q_timer_is_active(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimer.html#timerId)
///
/// @param self QTimer*
///
int32_t q_timer_timer_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimer.html#id)
///
/// @param self QTimer*
///
/// @return enum Qt__TimerId
///
int32_t q_timer_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimer.html#setInterval)
///
/// @param self QTimer*
/// @param msec int
///
void q_timer_set_interval(void* self, int msec);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimer.html#interval)
///
/// @param self QTimer*
///
int32_t q_timer_interval(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimer.html#remainingTime)
///
/// @param self QTimer*
///
int32_t q_timer_remaining_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimer.html#setTimerType)
///
/// @param self QTimer*
/// @param atype enum Qt__TimerType
///
void q_timer_set_timer_type(void* self, int32_t atype);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimer.html#timerType)
///
/// @param self QTimer*
///
/// @return enum Qt__TimerType
///
int32_t q_timer_timer_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimer.html#setSingleShot)
///
/// @param self QTimer*
/// @param singleShot bool
///
void q_timer_set_single_shot(void* self, bool singleShot);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimer.html#isSingleShot)
///
/// @param self QTimer*
///
bool q_timer_is_single_shot(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimer.html#start)
///
/// @param self QTimer*
/// @param msec int
///
void q_timer_start(void* self, int msec);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimer.html#start)
///
/// @param self QTimer*
///
void q_timer_start2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimer.html#stop)
///
/// @param self QTimer*
///
void q_timer_stop(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimer.html#timerEvent)
///
/// @param self QTimer*
/// @param param1 QTimerEvent*
///
void q_timer_timer_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimer.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTimer*
/// @param callback void func(QTimer* self, QTimerEvent* param1)
///
void q_timer_on_timer_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtimer.html#timerEvent)
///
/// Base class method implementation
///
/// @param self QTimer*
/// @param param1 QTimerEvent*
///
void q_timer_qbase_timer_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* q_timer_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_timer_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QTimer*
///
const char* q_timer_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QTimer*
/// @param name char*
///
void q_timer_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QTimer*
///
bool q_timer_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QTimer*
///
bool q_timer_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QTimer*
///
bool q_timer_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QTimer*
///
bool q_timer_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QTimer*
/// @param b bool
///
bool q_timer_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QTimer*
///
QThread* q_timer_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTimer*
/// @param thread QThread*
///
bool q_timer_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTimer*
/// @param interval int
///
int32_t q_timer_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTimer*
/// @param id int
///
void q_timer_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTimer*
/// @param id enum Qt__TimerId
///
void q_timer_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QTimer*
///
libqt_list /* of QObject* */ q_timer_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QTimer*
/// @param parent QObject*
///
void q_timer_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QTimer*
/// @param filterObj QObject*
///
void q_timer_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QTimer*
/// @param obj QObject*
///
void q_timer_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_timer_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTimer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_timer_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_timer_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_timer_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QTimer*
///
void q_timer_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QTimer*
///
void q_timer_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QTimer*
/// @param name const char*
/// @param value QVariant*
///
bool q_timer_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QTimer*
/// @param name const char*
///
QVariant* q_timer_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QTimer*
///
const char** q_timer_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTimer*
///
QBindingStorage* q_timer_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTimer*
///
const QBindingStorage* q_timer_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTimer*
///
void q_timer_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTimer*
/// @param callback void func(QTimer* self)
///
void q_timer_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QTimer*
///
QObject* q_timer_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QTimer*
/// @param classname const char*
///
bool q_timer_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QTimer*
///
void q_timer_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTimer*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_timer_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTimer*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_timer_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_timer_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTimer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_timer_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTimer*
/// @param param1 QObject*
///
void q_timer_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTimer*
/// @param callback void func(QTimer* self, QObject* param1)
///
void q_timer_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimer*
/// @param event QEvent*
///
bool q_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimer*
/// @param event QEvent*
///
bool q_timer_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimer*
/// @param callback bool func(QTimer* self, QEvent* event)
///
void q_timer_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimer*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_timer_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimer*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_timer_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimer*
/// @param callback bool func(QTimer* self, QObject* watched, QEvent* event)
///
void q_timer_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimer*
/// @param event QChildEvent*
///
void q_timer_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimer*
/// @param event QChildEvent*
///
void q_timer_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimer*
/// @param callback void func(QTimer* self, QChildEvent* event)
///
void q_timer_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimer*
/// @param event QEvent*
///
void q_timer_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimer*
/// @param event QEvent*
///
void q_timer_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimer*
/// @param callback void func(QTimer* self, QEvent* event)
///
void q_timer_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimer*
/// @param signal QMetaMethod*
///
void q_timer_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimer*
/// @param signal QMetaMethod*
///
void q_timer_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimer*
/// @param callback void func(QTimer* self, QMetaMethod* signal)
///
void q_timer_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimer*
/// @param signal QMetaMethod*
///
void q_timer_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimer*
/// @param signal QMetaMethod*
///
void q_timer_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimer*
/// @param callback void func(QTimer* self, QMetaMethod* signal)
///
void q_timer_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimer*
///
QObject* q_timer_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimer*
///
QObject* q_timer_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimer*
/// @param callback QObject* func()
///
void q_timer_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimer*
///
int32_t q_timer_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimer*
///
int32_t q_timer_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimer*
/// @param callback int32_t func()
///
void q_timer_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimer*
/// @param signal const char*
///
int32_t q_timer_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimer*
/// @param signal const char*
///
int32_t q_timer_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimer*
/// @param callback int32_t func(QTimer* self, const char* signal)
///
void q_timer_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimer*
/// @param signal QMetaMethod*
///
bool q_timer_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimer*
/// @param signal QMetaMethod*
///
bool q_timer_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimer*
/// @param callback bool func(QTimer* self, QMetaMethod* signal)
///
void q_timer_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtimer.html#timeout)
///
/// Wrapper to allow calling private signal
///
/// @param self QTimer*
/// @param callback void func(QTimer* self)
///
void q_timer_on_timeout(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTimer*
/// @param callback void func(QTimer* self, const char* objectName)
///
void q_timer_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtimer.html#dtor.QTimer)
///
/// Delete this object from C++ memory.
///
/// @param self QTimer*
///
void q_timer_delete(void* self);

#endif
