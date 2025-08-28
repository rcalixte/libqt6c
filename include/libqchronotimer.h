#pragma once
#ifndef SRCQT6C_LIBQCHRONOTIMER_H
#define SRCQT6C_LIBQCHRONOTIMER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qchronotimer.html

/// q_chronotimer_new constructs a new QChronoTimer object.
///
QChronoTimer* q_chronotimer_new();

/// q_chronotimer_new2 constructs a new QChronoTimer object.
///
/// @param parent QObject*
QChronoTimer* q_chronotimer_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QChronoTimer*
const QMetaObject* q_chronotimer_meta_object(void* self);

/// @param self QChronoTimer*
/// @param param1 const char*
void* q_chronotimer_metacast(void* self, const char* param1);

/// @param self QChronoTimer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_chronotimer_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QChronoTimer*
/// @param callback int32_t func(QChronoTimer* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_chronotimer_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QChronoTimer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_chronotimer_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_chronotimer_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qchronotimer.html#isActive)
///
/// @param self QChronoTimer*
bool q_chronotimer_is_active(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchronotimer.html#setTimerType)
///
/// @param self QChronoTimer*
/// @param atype enum Qt__TimerType
void q_chronotimer_set_timer_type(void* self, int32_t atype);

/// [Qt documentation](https://doc.qt.io/qt-6/qchronotimer.html#timerType)
///
/// @param self QChronoTimer*
///
/// @return enum Qt__TimerType
int32_t q_chronotimer_timer_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchronotimer.html#setSingleShot)
///
/// @param self QChronoTimer*
/// @param singleShot bool
void q_chronotimer_set_single_shot(void* self, bool singleShot);

/// [Qt documentation](https://doc.qt.io/qt-6/qchronotimer.html#isSingleShot)
///
/// @param self QChronoTimer*
bool q_chronotimer_is_single_shot(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchronotimer.html#start)
///
/// @param self QChronoTimer*
void q_chronotimer_start(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchronotimer.html#stop)
///
/// @param self QChronoTimer*
void q_chronotimer_stop(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchronotimer.html#timerEvent)
///
/// @param self QChronoTimer*
/// @param param1 QTimerEvent*
void q_chronotimer_timer_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qchronotimer.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// @param self QChronoTimer*
/// @param callback void func(QChronoTimer* self, QTimerEvent* param1)
void q_chronotimer_on_timer_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qchronotimer.html#timerEvent)
///
/// Base class method implementation
///
/// @param self QChronoTimer*
/// @param param1 QTimerEvent*
void q_chronotimer_qbase_timer_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_chronotimer_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_chronotimer_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QChronoTimer*
const char* q_chronotimer_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QChronoTimer*
/// @param name char*
void q_chronotimer_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QChronoTimer*
bool q_chronotimer_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QChronoTimer*
bool q_chronotimer_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QChronoTimer*
bool q_chronotimer_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QChronoTimer*
bool q_chronotimer_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QChronoTimer*
/// @param b bool
bool q_chronotimer_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QChronoTimer*
QThread* q_chronotimer_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QChronoTimer*
/// @param thread QThread*
bool q_chronotimer_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QChronoTimer*
/// @param interval int
int32_t q_chronotimer_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QChronoTimer*
/// @param id int
void q_chronotimer_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QChronoTimer*
/// @param id enum Qt__TimerId
void q_chronotimer_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QChronoTimer*
libqt_list /* of QObject* */ q_chronotimer_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QChronoTimer*
/// @param parent QObject*
void q_chronotimer_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QChronoTimer*
/// @param filterObj QObject*
void q_chronotimer_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QChronoTimer*
/// @param obj QObject*
void q_chronotimer_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_chronotimer_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QChronoTimer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_chronotimer_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_chronotimer_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_chronotimer_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QChronoTimer*
void q_chronotimer_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QChronoTimer*
void q_chronotimer_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QChronoTimer*
/// @param name const char*
/// @param value QVariant*
bool q_chronotimer_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QChronoTimer*
/// @param name const char*
QVariant* q_chronotimer_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QChronoTimer*
const char** q_chronotimer_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QChronoTimer*
QBindingStorage* q_chronotimer_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QChronoTimer*
const QBindingStorage* q_chronotimer_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QChronoTimer*
void q_chronotimer_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QChronoTimer*
/// @param callback void func(QChronoTimer* self)
void q_chronotimer_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QChronoTimer*
QObject* q_chronotimer_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QChronoTimer*
/// @param classname const char*
bool q_chronotimer_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QChronoTimer*
void q_chronotimer_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QChronoTimer*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_chronotimer_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QChronoTimer*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_chronotimer_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_chronotimer_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QChronoTimer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_chronotimer_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QChronoTimer*
/// @param param1 QObject*
void q_chronotimer_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QChronoTimer*
/// @param callback void func(QChronoTimer* self, QObject* param1)
void q_chronotimer_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChronoTimer*
/// @param event QEvent*
bool q_chronotimer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param event QEvent*
bool q_chronotimer_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param callback bool func(QChronoTimer* self, QEvent* event)
void q_chronotimer_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChronoTimer*
/// @param watched QObject*
/// @param event QEvent*
bool q_chronotimer_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param watched QObject*
/// @param event QEvent*
bool q_chronotimer_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param callback bool func(QChronoTimer* self, QObject* watched, QEvent* event)
void q_chronotimer_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChronoTimer*
/// @param event QChildEvent*
void q_chronotimer_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param event QChildEvent*
void q_chronotimer_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param callback void func(QChronoTimer* self, QChildEvent* event)
void q_chronotimer_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChronoTimer*
/// @param event QEvent*
void q_chronotimer_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param event QEvent*
void q_chronotimer_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param callback void func(QChronoTimer* self, QEvent* event)
void q_chronotimer_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChronoTimer*
/// @param signal QMetaMethod*
void q_chronotimer_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param signal QMetaMethod*
void q_chronotimer_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param callback void func(QChronoTimer* self, QMetaMethod* signal)
void q_chronotimer_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChronoTimer*
/// @param signal QMetaMethod*
void q_chronotimer_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param signal QMetaMethod*
void q_chronotimer_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param callback void func(QChronoTimer* self, QMetaMethod* signal)
void q_chronotimer_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChronoTimer*
QObject* q_chronotimer_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChronoTimer*
QObject* q_chronotimer_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param callback QObject* func()
void q_chronotimer_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChronoTimer*
int32_t q_chronotimer_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChronoTimer*
int32_t q_chronotimer_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param callback int32_t func()
void q_chronotimer_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChronoTimer*
/// @param signal const char*
int32_t q_chronotimer_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param signal const char*
int32_t q_chronotimer_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param callback int32_t func(QChronoTimer* self, const char* signal)
void q_chronotimer_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChronoTimer*
/// @param signal QMetaMethod*
bool q_chronotimer_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param signal QMetaMethod*
bool q_chronotimer_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param callback bool func(QChronoTimer* self, QMetaMethod* signal)
void q_chronotimer_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qchronotimer.html#timeout)
///
/// Wrapper to allow calling private signal
///
/// @param self QChronoTimer*
/// @param callback void func(QChronoTimer* self)
void q_chronotimer_on_timeout(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QChronoTimer*
/// @param callback void func(QChronoTimer* self, const char* objectName)
void q_chronotimer_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qchronotimer.html#dtor.QChronoTimer)
///
/// Delete this object from C++ memory.
///
/// @param self QChronoTimer*
void q_chronotimer_delete(void* self);

#endif
