#pragma once
#ifndef LIBQABSTRACTEVENTDISPATCHER_H
#define LIBQABSTRACTEVENTDISPATCHER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QAbstractEventDispatcher*
///
const QMetaObject* q_abstracteventdispatcher_meta_object(const void* self);

/// @param self QAbstractEventDispatcher*
/// @param param1 const char*
///
void* q_abstracteventdispatcher_metacast(void* self, const char* param1);

/// @param self QAbstractEventDispatcher*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_abstracteventdispatcher_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_abstracteventdispatcher_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#instance)
///
QAbstractEventDispatcher* q_abstracteventdispatcher_instance();

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#processEvents)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self QAbstractEventDispatcher*
/// @param flags flag of enum QEventLoop__ProcessEventsFlag
///
bool q_abstracteventdispatcher_process_events(void* self, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registerSocketNotifier)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self QAbstractEventDispatcher*
/// @param notifier QSocketNotifier*
///
void q_abstracteventdispatcher_register_socket_notifier(void* self, void* notifier);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterSocketNotifier)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self QAbstractEventDispatcher*
/// @param notifier QSocketNotifier*
///
void q_abstracteventdispatcher_unregister_socket_notifier(void* self, void* notifier);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registerTimer)
///
/// @param self QAbstractEventDispatcher*
/// @param interval int64_t
/// @param timerType enum Qt__TimerType
/// @param object QObject*
///
int32_t q_abstracteventdispatcher_register_timer2(void* self, int64_t interval, int32_t timerType, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registerTimer)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self QAbstractEventDispatcher*
/// @param timerId int
/// @param interval int64_t
/// @param timerType enum Qt__TimerType
/// @param object QObject*
///
void q_abstracteventdispatcher_register_timer3(void* self, int timerId, int64_t interval, int32_t timerType, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterTimer)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self QAbstractEventDispatcher*
/// @param timerId int
///
bool q_abstracteventdispatcher_unregister_timer(void* self, int timerId);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterTimers)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self QAbstractEventDispatcher*
/// @param object QObject*
///
bool q_abstracteventdispatcher_unregister_timers(void* self, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registeredTimers)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAbstractEventDispatcher*
/// @param object QObject*
///
/// @return libqt_list of QAbstractEventDispatcher__TimerInfo*
///
libqt_list q_abstracteventdispatcher_registered_timers(const void* self, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#remainingTime)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self QAbstractEventDispatcher*
/// @param timerId int
///
int32_t q_abstracteventdispatcher_remaining_time(void* self, int timerId);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterTimer)
///
/// @param self QAbstractEventDispatcher*
/// @param timerId enum Qt__TimerId
///
bool q_abstracteventdispatcher_unregister_timer2(void* self, int32_t timerId);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#timersForObject)
///
/// @param self const QAbstractEventDispatcher*
/// @param object QObject*
///
/// @return libqt_list of QAbstractEventDispatcher__TimerInfoV2*
///
libqt_list q_abstracteventdispatcher_timers_for_object(const void* self, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#wakeUp)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self QAbstractEventDispatcher*
///
void q_abstracteventdispatcher_wake_up(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#interrupt)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self QAbstractEventDispatcher*
///
void q_abstracteventdispatcher_interrupt(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#startingUp)
///
/// @param self QAbstractEventDispatcher*
///
void q_abstracteventdispatcher_starting_up(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#closingDown)
///
/// @param self QAbstractEventDispatcher*
///
void q_abstracteventdispatcher_closing_down(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#installNativeEventFilter)
///
/// @param self QAbstractEventDispatcher*
/// @param filterObj QAbstractNativeEventFilter*
///
void q_abstracteventdispatcher_install_native_event_filter(void* self, void* filterObj);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#removeNativeEventFilter)
///
/// @param self QAbstractEventDispatcher*
/// @param filterObj QAbstractNativeEventFilter*
///
void q_abstracteventdispatcher_remove_native_event_filter(void* self, void* filterObj);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#filterNativeEvent)
///
/// @param self QAbstractEventDispatcher*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_abstracteventdispatcher_filter_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#aboutToBlock)
///
/// @param self QAbstractEventDispatcher*
///
void q_abstracteventdispatcher_about_to_block(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#aboutToBlock)
///
/// @param self QAbstractEventDispatcher*
/// @param callback void func(QAbstractEventDispatcher* self)
///
void q_abstracteventdispatcher_on_about_to_block(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#awake)
///
/// @param self QAbstractEventDispatcher*
///
void q_abstracteventdispatcher_awake(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#awake)
///
/// @param self QAbstractEventDispatcher*
/// @param callback void func(QAbstractEventDispatcher* self)
///
void q_abstracteventdispatcher_on_awake(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_abstracteventdispatcher_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_abstracteventdispatcher_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#instance)
///
/// @param thread QThread*
///
QAbstractEventDispatcher* q_abstracteventdispatcher_instance1(void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QAbstractEventDispatcher*
/// @param event QEvent*
///
bool q_abstracteventdispatcher_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QAbstractEventDispatcher*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_abstracteventdispatcher_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAbstractEventDispatcher*
///
const char* q_abstracteventdispatcher_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAbstractEventDispatcher*
/// @param name const char*
///
void q_abstracteventdispatcher_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QAbstractEventDispatcher*
///
bool q_abstracteventdispatcher_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QAbstractEventDispatcher*
///
bool q_abstracteventdispatcher_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QAbstractEventDispatcher*
///
bool q_abstracteventdispatcher_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QAbstractEventDispatcher*
///
bool q_abstracteventdispatcher_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAbstractEventDispatcher*
/// @param b bool
///
bool q_abstracteventdispatcher_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QAbstractEventDispatcher*
///
QThread* q_abstracteventdispatcher_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstractEventDispatcher*
/// @param thread QThread*
///
bool q_abstracteventdispatcher_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractEventDispatcher*
/// @param interval int
///
int32_t q_abstracteventdispatcher_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractEventDispatcher*
/// @param time int64_t of nanoseconds
///
int32_t q_abstracteventdispatcher_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractEventDispatcher*
/// @param id int
///
void q_abstracteventdispatcher_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractEventDispatcher*
/// @param id enum Qt__TimerId
///
void q_abstracteventdispatcher_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QAbstractEventDispatcher*
///
/// @return libqt_list of QObject*
///
libqt_list q_abstracteventdispatcher_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QAbstractEventDispatcher*
/// @param parent QObject*
///
void q_abstracteventdispatcher_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAbstractEventDispatcher*
/// @param filterObj QObject*
///
void q_abstracteventdispatcher_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAbstractEventDispatcher*
/// @param obj QObject*
///
void q_abstracteventdispatcher_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_abstracteventdispatcher_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_abstracteventdispatcher_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QAbstractEventDispatcher*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_abstracteventdispatcher_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstracteventdispatcher_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_abstracteventdispatcher_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractEventDispatcher*
///
bool q_abstracteventdispatcher_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractEventDispatcher*
/// @param receiver QObject*
///
bool q_abstracteventdispatcher_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_abstracteventdispatcher_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QAbstractEventDispatcher*
///
void q_abstracteventdispatcher_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QAbstractEventDispatcher*
///
void q_abstracteventdispatcher_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAbstractEventDispatcher*
/// @param name const char*
/// @param value QVariant*
///
bool q_abstracteventdispatcher_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QAbstractEventDispatcher*
/// @param name const char*
///
QVariant* q_abstracteventdispatcher_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QAbstractEventDispatcher*
///
const char** q_abstracteventdispatcher_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstractEventDispatcher*
///
QBindingStorage* q_abstracteventdispatcher_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QAbstractEventDispatcher*
///
const QBindingStorage* q_abstracteventdispatcher_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractEventDispatcher*
///
void q_abstracteventdispatcher_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractEventDispatcher*
/// @param callback void func(QAbstractEventDispatcher* self)
///
void q_abstracteventdispatcher_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QAbstractEventDispatcher*
///
QObject* q_abstracteventdispatcher_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QAbstractEventDispatcher*
/// @param classname const char*
///
bool q_abstracteventdispatcher_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAbstractEventDispatcher*
///
void q_abstracteventdispatcher_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractEventDispatcher*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_abstracteventdispatcher_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractEventDispatcher*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_abstracteventdispatcher_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_abstracteventdispatcher_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_abstracteventdispatcher_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QAbstractEventDispatcher*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstracteventdispatcher_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractEventDispatcher*
/// @param signal const char*
///
bool q_abstracteventdispatcher_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractEventDispatcher*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_abstracteventdispatcher_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractEventDispatcher*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstracteventdispatcher_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractEventDispatcher*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstracteventdispatcher_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractEventDispatcher*
/// @param param1 QObject*
///
void q_abstracteventdispatcher_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractEventDispatcher*
/// @param callback void func(QAbstractEventDispatcher* self, QObject* param1)
///
void q_abstracteventdispatcher_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractEventDispatcher*
/// @param callback void func(QAbstractEventDispatcher* self, const char* objectName)
///
void q_abstracteventdispatcher_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#dtor.QAbstractEventDispatcher)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractEventDispatcher*
///
void q_abstracteventdispatcher_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcherv2.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QAbstractEventDispatcherV2*
///
const QMetaObject* q_abstracteventdispatcherv2_meta_object(const void* self);

/// @param self QAbstractEventDispatcherV2*
/// @param param1 const char*
///
void* q_abstracteventdispatcherv2_metacast(void* self, const char* param1);

/// @param self QAbstractEventDispatcherV2*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_abstracteventdispatcherv2_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_abstracteventdispatcherv2_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcherv2.html#processEventsWithDeadline)
///
/// @param self QAbstractEventDispatcherV2*
/// @param flags flag of enum QEventLoop__ProcessEventsFlag
/// @param deadline QDeadlineTimer*
///
bool q_abstracteventdispatcherv2_process_events_with_deadline(void* self, int32_t flags, void* deadline);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_abstracteventdispatcherv2_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_abstracteventdispatcherv2_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractEventDispatcher
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#instance)
///
QAbstractEventDispatcher* q_abstracteventdispatcherv2_instance();

/// Inherited from QAbstractEventDispatcher
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registerTimer)
///
/// @param self QAbstractEventDispatcherV2*
/// @param interval int64_t
/// @param timerType enum Qt__TimerType
/// @param object QObject*
///
int32_t q_abstracteventdispatcherv2_register_timer2(void* self, int64_t interval, int32_t timerType, void* object);

/// Inherited from QAbstractEventDispatcher
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterTimer)
///
/// @param self QAbstractEventDispatcherV2*
/// @param timerId enum Qt__TimerId
///
bool q_abstracteventdispatcherv2_unregister_timer2(void* self, int32_t timerId);

/// Inherited from QAbstractEventDispatcher
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#startingUp)
///
/// @param self QAbstractEventDispatcherV2*
///
void q_abstracteventdispatcherv2_starting_up(void* self);

/// Inherited from QAbstractEventDispatcher
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#closingDown)
///
/// @param self QAbstractEventDispatcherV2*
///
void q_abstracteventdispatcherv2_closing_down(void* self);

/// Inherited from QAbstractEventDispatcher
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#installNativeEventFilter)
///
/// @param self QAbstractEventDispatcherV2*
/// @param filterObj QAbstractNativeEventFilter*
///
void q_abstracteventdispatcherv2_install_native_event_filter(void* self, void* filterObj);

/// Inherited from QAbstractEventDispatcher
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#removeNativeEventFilter)
///
/// @param self QAbstractEventDispatcherV2*
/// @param filterObj QAbstractNativeEventFilter*
///
void q_abstracteventdispatcherv2_remove_native_event_filter(void* self, void* filterObj);

/// Inherited from QAbstractEventDispatcher
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#filterNativeEvent)
///
/// @param self QAbstractEventDispatcherV2*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_abstracteventdispatcherv2_filter_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QAbstractEventDispatcher
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#aboutToBlock)
///
/// @param self QAbstractEventDispatcherV2*
///
void q_abstracteventdispatcherv2_about_to_block(void* self);

/// Inherited from QAbstractEventDispatcher
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#aboutToBlock)
///
/// @param self QAbstractEventDispatcherV2*
/// @param callback void func(QAbstractEventDispatcherV2* self)
///
void q_abstracteventdispatcherv2_on_about_to_block(void* self, void (*callback)(void*));

/// Inherited from QAbstractEventDispatcher
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#awake)
///
/// @param self QAbstractEventDispatcherV2*
///
void q_abstracteventdispatcherv2_awake(void* self);

/// Inherited from QAbstractEventDispatcher
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#awake)
///
/// @param self QAbstractEventDispatcherV2*
/// @param callback void func(QAbstractEventDispatcherV2* self)
///
void q_abstracteventdispatcherv2_on_awake(void* self, void (*callback)(void*));

/// Inherited from QAbstractEventDispatcher
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#instance)
///
/// @param thread QThread*
///
QAbstractEventDispatcher* q_abstracteventdispatcherv2_instance1(void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QAbstractEventDispatcherV2*
/// @param event QEvent*
///
bool q_abstracteventdispatcherv2_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QAbstractEventDispatcherV2*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_abstracteventdispatcherv2_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAbstractEventDispatcherV2*
///
const char* q_abstracteventdispatcherv2_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAbstractEventDispatcherV2*
/// @param name const char*
///
void q_abstracteventdispatcherv2_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QAbstractEventDispatcherV2*
///
bool q_abstracteventdispatcherv2_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QAbstractEventDispatcherV2*
///
bool q_abstracteventdispatcherv2_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QAbstractEventDispatcherV2*
///
bool q_abstracteventdispatcherv2_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QAbstractEventDispatcherV2*
///
bool q_abstracteventdispatcherv2_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAbstractEventDispatcherV2*
/// @param b bool
///
bool q_abstracteventdispatcherv2_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QAbstractEventDispatcherV2*
///
QThread* q_abstracteventdispatcherv2_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstractEventDispatcherV2*
/// @param thread QThread*
///
bool q_abstracteventdispatcherv2_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractEventDispatcherV2*
/// @param interval int
///
int32_t q_abstracteventdispatcherv2_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractEventDispatcherV2*
/// @param time int64_t of nanoseconds
///
int32_t q_abstracteventdispatcherv2_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractEventDispatcherV2*
/// @param id int
///
void q_abstracteventdispatcherv2_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractEventDispatcherV2*
/// @param id enum Qt__TimerId
///
void q_abstracteventdispatcherv2_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QAbstractEventDispatcherV2*
///
/// @return libqt_list of QObject*
///
libqt_list q_abstracteventdispatcherv2_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QAbstractEventDispatcherV2*
/// @param parent QObject*
///
void q_abstracteventdispatcherv2_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAbstractEventDispatcherV2*
/// @param filterObj QObject*
///
void q_abstracteventdispatcherv2_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAbstractEventDispatcherV2*
/// @param obj QObject*
///
void q_abstracteventdispatcherv2_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_abstracteventdispatcherv2_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_abstracteventdispatcherv2_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QAbstractEventDispatcherV2*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_abstracteventdispatcherv2_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstracteventdispatcherv2_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_abstracteventdispatcherv2_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractEventDispatcherV2*
///
bool q_abstracteventdispatcherv2_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractEventDispatcherV2*
/// @param receiver QObject*
///
bool q_abstracteventdispatcherv2_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_abstracteventdispatcherv2_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QAbstractEventDispatcherV2*
///
void q_abstracteventdispatcherv2_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QAbstractEventDispatcherV2*
///
void q_abstracteventdispatcherv2_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAbstractEventDispatcherV2*
/// @param name const char*
/// @param value QVariant*
///
bool q_abstracteventdispatcherv2_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QAbstractEventDispatcherV2*
/// @param name const char*
///
QVariant* q_abstracteventdispatcherv2_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QAbstractEventDispatcherV2*
///
const char** q_abstracteventdispatcherv2_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstractEventDispatcherV2*
///
QBindingStorage* q_abstracteventdispatcherv2_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QAbstractEventDispatcherV2*
///
const QBindingStorage* q_abstracteventdispatcherv2_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractEventDispatcherV2*
///
void q_abstracteventdispatcherv2_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractEventDispatcherV2*
/// @param callback void func(QAbstractEventDispatcherV2* self)
///
void q_abstracteventdispatcherv2_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QAbstractEventDispatcherV2*
///
QObject* q_abstracteventdispatcherv2_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QAbstractEventDispatcherV2*
/// @param classname const char*
///
bool q_abstracteventdispatcherv2_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAbstractEventDispatcherV2*
///
void q_abstracteventdispatcherv2_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractEventDispatcherV2*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_abstracteventdispatcherv2_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractEventDispatcherV2*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_abstracteventdispatcherv2_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_abstracteventdispatcherv2_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_abstracteventdispatcherv2_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QAbstractEventDispatcherV2*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstracteventdispatcherv2_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractEventDispatcherV2*
/// @param signal const char*
///
bool q_abstracteventdispatcherv2_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractEventDispatcherV2*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_abstracteventdispatcherv2_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractEventDispatcherV2*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstracteventdispatcherv2_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractEventDispatcherV2*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstracteventdispatcherv2_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractEventDispatcherV2*
/// @param param1 QObject*
///
void q_abstracteventdispatcherv2_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractEventDispatcherV2*
/// @param callback void func(QAbstractEventDispatcherV2* self, QObject* param1)
///
void q_abstracteventdispatcherv2_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractEventDispatcherV2*
/// @param callback void func(QAbstractEventDispatcherV2* self, const char* objectName)
///
void q_abstracteventdispatcherv2_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcherv2.html#dtor.QAbstractEventDispatcherV2)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractEventDispatcherV2*
///
void q_abstracteventdispatcherv2_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfo.html)

/// q_abstracteventdispatcher__timerinfo_new constructs a new QAbstractEventDispatcher::TimerInfo object.
///
/// @param other QAbstractEventDispatcher__TimerInfo*
///
QAbstractEventDispatcher__TimerInfo* q_abstracteventdispatcher__timerinfo_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfo.html)

/// q_abstracteventdispatcher__timerinfo_new2 constructs a new QAbstractEventDispatcher::TimerInfo object and invalidates the source QAbstractEventDispatcher::TimerInfo object.
///
/// @param other QAbstractEventDispatcher__TimerInfo*
///
QAbstractEventDispatcher__TimerInfo* q_abstracteventdispatcher__timerinfo_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfo.html)

/// q_abstracteventdispatcher__timerinfo_new3 constructs a new QAbstractEventDispatcher::TimerInfo object.
///
/// @param id int
/// @param i int
/// @param t enum Qt__TimerType
///
QAbstractEventDispatcher__TimerInfo* q_abstracteventdispatcher__timerinfo_new3(int id, int i, int32_t t);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfo.html)

/// q_abstracteventdispatcher__timerinfo_new4 constructs a new QAbstractEventDispatcher::TimerInfo object.
///
/// @param param1 QAbstractEventDispatcher__TimerInfo*
///
QAbstractEventDispatcher__TimerInfo* q_abstracteventdispatcher__timerinfo_new4(const void* param1);

/// q_abstracteventdispatcher__timerinfo_copy_assign shallow copies `other` into `self`.
///
/// @param self QAbstractEventDispatcher__TimerInfo*
/// @param other QAbstractEventDispatcher__TimerInfo*
///
void q_abstracteventdispatcher__timerinfo_copy_assign(void* self, void* other);

/// q_abstracteventdispatcher__timerinfo_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QAbstractEventDispatcher__TimerInfo*
/// @param other QAbstractEventDispatcher__TimerInfo*
///
void q_abstracteventdispatcher__timerinfo_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfo.html#timerId-var)
///
/// @param self const QAbstractEventDispatcher__TimerInfo*
///
int32_t q_abstracteventdispatcher__timerinfo_timer_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfo.html#timerId-var)
///
/// @param self QAbstractEventDispatcher__TimerInfo*
/// @param timerId int
///
void q_abstracteventdispatcher__timerinfo_set_timer_id(void* self, int timerId);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfo.html#interval-var)
///
/// @param self const QAbstractEventDispatcher__TimerInfo*
///
int32_t q_abstracteventdispatcher__timerinfo_interval(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfo.html#interval-var)
///
/// @param self QAbstractEventDispatcher__TimerInfo*
/// @param interval int
///
void q_abstracteventdispatcher__timerinfo_set_interval(void* self, int interval);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfo.html#timerType-var)
///
/// @param self const QAbstractEventDispatcher__TimerInfo*
///
/// @return enum Qt__TimerType
///
int32_t q_abstracteventdispatcher__timerinfo_timer_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfo.html#timerType-var)
///
/// @param self QAbstractEventDispatcher__TimerInfo*
/// @param timerType enum Qt__TimerType
///
void q_abstracteventdispatcher__timerinfo_set_timer_type(void* self, int32_t timerType);

/// Delete this object from C++ memory.
///
/// @param self QAbstractEventDispatcher__TimerInfo*
///
void q_abstracteventdispatcher__timerinfo_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfov2.html)

/// q_abstracteventdispatcher__timerinfov2_new constructs a new QAbstractEventDispatcher::TimerInfoV2 object.
///
/// @param param1 QAbstractEventDispatcher__TimerInfoV2*
///
QAbstractEventDispatcher__TimerInfoV2* q_abstracteventdispatcher__timerinfov2_new(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfov2.html)

/// q_abstracteventdispatcher__timerinfov2_new2 constructs a new QAbstractEventDispatcher::TimerInfoV2 object.
///
QAbstractEventDispatcher__TimerInfoV2* q_abstracteventdispatcher__timerinfov2_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfov2.html#timerId-var)
///
/// @param self const QAbstractEventDispatcher__TimerInfoV2*
///
/// @return enum Qt__TimerId
///
int32_t q_abstracteventdispatcher__timerinfov2_timer_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfov2.html#timerId-var)
///
/// @param self QAbstractEventDispatcher__TimerInfoV2*
/// @param timerId enum Qt__TimerId
///
void q_abstracteventdispatcher__timerinfov2_set_timer_id(void* self, int32_t timerId);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfov2.html#timerType-var)
///
/// @param self const QAbstractEventDispatcher__TimerInfoV2*
///
/// @return enum Qt__TimerType
///
int32_t q_abstracteventdispatcher__timerinfov2_timer_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfov2.html#timerType-var)
///
/// @param self QAbstractEventDispatcher__TimerInfoV2*
/// @param timerType enum Qt__TimerType
///
void q_abstracteventdispatcher__timerinfov2_set_timer_type(void* self, int32_t timerType);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfov2.html#operator-eq)
///
/// @param self QAbstractEventDispatcher__TimerInfoV2*
/// @param param1 QAbstractEventDispatcher__TimerInfoV2*
///
void q_abstracteventdispatcher__timerinfov2_operator_assign(void* self, const void* param1);

/// Delete this object from C++ memory.
///
/// @param self QAbstractEventDispatcher__TimerInfoV2*
///
void q_abstracteventdispatcher__timerinfov2_delete(void* self);

#endif
