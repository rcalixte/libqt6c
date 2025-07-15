#pragma once
#ifndef SRCQT6C_LIBQABSTRACTEVENTDISPATCHER_H
#define SRCQT6C_LIBQABSTRACTEVENTDISPATCHER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qabstracteventdispatcher.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAbstractEventDispatcher* self ```
const QMetaObject* q_abstracteventdispatcher_meta_object(void* self);

/// ``` QAbstractEventDispatcher* self, const char* param1 ```
void* q_abstracteventdispatcher_metacast(void* self, const char* param1);

/// ``` QAbstractEventDispatcher* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstracteventdispatcher_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_abstracteventdispatcher_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#instance)
///
///
QAbstractEventDispatcher* q_abstracteventdispatcher_instance();

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#processEvents)
///
/// ``` QAbstractEventDispatcher* self, int flags ```
bool q_abstracteventdispatcher_process_events(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registerSocketNotifier)
///
/// ``` QAbstractEventDispatcher* self, QSocketNotifier* notifier ```
void q_abstracteventdispatcher_register_socket_notifier(void* self, void* notifier);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterSocketNotifier)
///
/// ``` QAbstractEventDispatcher* self, QSocketNotifier* notifier ```
void q_abstracteventdispatcher_unregister_socket_notifier(void* self, void* notifier);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registerTimer)
///
/// ``` QAbstractEventDispatcher* self, long long interval, enum Qt__TimerType timerType, QObject* object ```
int32_t q_abstracteventdispatcher_register_timer(void* self, long long interval, int64_t timerType, void* object);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registerTimer)
///
/// ``` QAbstractEventDispatcher* self, int timerId, long long interval, enum Qt__TimerType timerType, QObject* object ```
void q_abstracteventdispatcher_register_timer2(void* self, int timerId, long long interval, int64_t timerType, void* object);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterTimer)
///
/// ``` QAbstractEventDispatcher* self, int timerId ```
bool q_abstracteventdispatcher_unregister_timer(void* self, int timerId);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterTimers)
///
/// ``` QAbstractEventDispatcher* self, QObject* object ```
bool q_abstracteventdispatcher_unregister_timers(void* self, void* object);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registeredTimers)
///
/// ``` QAbstractEventDispatcher* self, QObject* object ```
libqt_list /* of QAbstractEventDispatcher__TimerInfo* */ q_abstracteventdispatcher_registered_timers(void* self, void* object);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#remainingTime)
///
/// ``` QAbstractEventDispatcher* self, int timerId ```
int32_t q_abstracteventdispatcher_remaining_time(void* self, int timerId);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterTimer)
///
/// ``` QAbstractEventDispatcher* self, enum Qt__TimerId timerId ```
bool q_abstracteventdispatcher_unregister_timer2(void* self, int64_t timerId);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#timersForObject)
///
/// ``` QAbstractEventDispatcher* self, QObject* object ```
libqt_list /* of QAbstractEventDispatcher__TimerInfoV2* */ q_abstracteventdispatcher_timers_for_object(void* self, void* object);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#wakeUp)
///
/// ``` QAbstractEventDispatcher* self ```
void q_abstracteventdispatcher_wake_up(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#interrupt)
///
/// ``` QAbstractEventDispatcher* self ```
void q_abstracteventdispatcher_interrupt(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#startingUp)
///
/// ``` QAbstractEventDispatcher* self ```
void q_abstracteventdispatcher_starting_up(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#closingDown)
///
/// ``` QAbstractEventDispatcher* self ```
void q_abstracteventdispatcher_closing_down(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#installNativeEventFilter)
///
/// ``` QAbstractEventDispatcher* self, QAbstractNativeEventFilter* filterObj ```
void q_abstracteventdispatcher_install_native_event_filter(void* self, void* filterObj);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#removeNativeEventFilter)
///
/// ``` QAbstractEventDispatcher* self, QAbstractNativeEventFilter* filterObj ```
void q_abstracteventdispatcher_remove_native_event_filter(void* self, void* filterObj);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#filterNativeEvent)
///
/// ``` QAbstractEventDispatcher* self, const char* eventType, void* message, intptr_t* result ```
bool q_abstracteventdispatcher_filter_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#aboutToBlock)
///
/// ``` QAbstractEventDispatcher* self ```
void q_abstracteventdispatcher_about_to_block(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#aboutToBlock)
///
/// ``` QAbstractEventDispatcher* self, void (*slot)(QAbstractEventDispatcher*) ```
void q_abstracteventdispatcher_on_about_to_block(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#awake)
///
/// ``` QAbstractEventDispatcher* self ```
void q_abstracteventdispatcher_awake(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#awake)
///
/// ``` QAbstractEventDispatcher* self, void (*slot)(QAbstractEventDispatcher*) ```
void q_abstracteventdispatcher_on_awake(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_abstracteventdispatcher_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_abstracteventdispatcher_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#instance)
///
/// ``` QThread* thread ```
QAbstractEventDispatcher* q_abstracteventdispatcher_instance1(void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QAbstractEventDispatcher* self, QEvent* event ```
bool q_abstracteventdispatcher_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QAbstractEventDispatcher* self, QObject* watched, QEvent* event ```
bool q_abstracteventdispatcher_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAbstractEventDispatcher* self ```
const char* q_abstracteventdispatcher_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAbstractEventDispatcher* self, char* name ```
void q_abstracteventdispatcher_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAbstractEventDispatcher* self ```
bool q_abstracteventdispatcher_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAbstractEventDispatcher* self ```
bool q_abstracteventdispatcher_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAbstractEventDispatcher* self ```
bool q_abstracteventdispatcher_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAbstractEventDispatcher* self ```
bool q_abstracteventdispatcher_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAbstractEventDispatcher* self, bool b ```
bool q_abstracteventdispatcher_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAbstractEventDispatcher* self ```
QThread* q_abstracteventdispatcher_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractEventDispatcher* self, QThread* thread ```
bool q_abstracteventdispatcher_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractEventDispatcher* self, int interval ```
int32_t q_abstracteventdispatcher_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractEventDispatcher* self, int id ```
void q_abstracteventdispatcher_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractEventDispatcher* self, enum Qt__TimerId id ```
void q_abstracteventdispatcher_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAbstractEventDispatcher* self ```
libqt_list /* of QObject* */ q_abstracteventdispatcher_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAbstractEventDispatcher* self, QObject* parent ```
void q_abstracteventdispatcher_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAbstractEventDispatcher* self, QObject* filterObj ```
void q_abstracteventdispatcher_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAbstractEventDispatcher* self, QObject* obj ```
void q_abstracteventdispatcher_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_abstracteventdispatcher_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractEventDispatcher* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_abstracteventdispatcher_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_abstracteventdispatcher_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_abstracteventdispatcher_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAbstractEventDispatcher* self ```
void q_abstracteventdispatcher_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAbstractEventDispatcher* self ```
void q_abstracteventdispatcher_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAbstractEventDispatcher* self, const char* name, QVariant* value ```
bool q_abstracteventdispatcher_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAbstractEventDispatcher* self, const char* name ```
QVariant* q_abstracteventdispatcher_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAbstractEventDispatcher* self ```
const char** q_abstracteventdispatcher_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractEventDispatcher* self ```
QBindingStorage* q_abstracteventdispatcher_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractEventDispatcher* self ```
const QBindingStorage* q_abstracteventdispatcher_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractEventDispatcher* self ```
void q_abstracteventdispatcher_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractEventDispatcher* self, void (*slot)(QObject*) ```
void q_abstracteventdispatcher_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAbstractEventDispatcher* self ```
QObject* q_abstracteventdispatcher_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAbstractEventDispatcher* self, const char* classname ```
bool q_abstracteventdispatcher_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAbstractEventDispatcher* self ```
void q_abstracteventdispatcher_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractEventDispatcher* self, QThread* thread, Disambiguated_t* param2 ```
bool q_abstracteventdispatcher_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractEventDispatcher* self, int interval, enum Qt__TimerType timerType ```
int32_t q_abstracteventdispatcher_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstracteventdispatcher_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractEventDispatcher* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstracteventdispatcher_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractEventDispatcher* self, QObject* param1 ```
void q_abstracteventdispatcher_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractEventDispatcher* self, void (*slot)(QObject*, QObject*) ```
void q_abstracteventdispatcher_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractEventDispatcher* self, void (*slot)(QObject*, const char*) ```
void q_abstracteventdispatcher_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#dtor.QAbstractEventDispatcher)
///
/// Delete this object from C++ memory.
///
/// ``` QAbstractEventDispatcher* self ```
void q_abstracteventdispatcher_delete(void* self);

/// https://doc.qt.io/qt-6/qabstracteventdispatcherv2.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAbstractEventDispatcherV2* self ```
const QMetaObject* q_abstracteventdispatcherv2_meta_object(void* self);

/// ``` QAbstractEventDispatcherV2* self, const char* param1 ```
void* q_abstracteventdispatcherv2_metacast(void* self, const char* param1);

/// ``` QAbstractEventDispatcherV2* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstracteventdispatcherv2_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_abstracteventdispatcherv2_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcherv2.html#unregisterTimer)
///
/// ``` QAbstractEventDispatcherV2* self, enum Qt__TimerId timerId ```
bool q_abstracteventdispatcherv2_unregister_timer(void* self, int64_t timerId);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcherv2.html#timersForObject)
///
/// ``` QAbstractEventDispatcherV2* self, QObject* object ```
libqt_list /* of QAbstractEventDispatcher__TimerInfoV2* */ q_abstracteventdispatcherv2_timers_for_object(void* self, void* object);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcherv2.html#processEventsWithDeadline)
///
/// ``` QAbstractEventDispatcherV2* self, int flags, QDeadlineTimer* deadline ```
bool q_abstracteventdispatcherv2_process_events_with_deadline(void* self, int64_t flags, void* deadline);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_abstracteventdispatcherv2_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_abstracteventdispatcherv2_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractEventDispatcher
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#instance)
///
///
QAbstractEventDispatcher* q_abstracteventdispatcherv2_instance();

/// Inherited from QAbstractEventDispatcher
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#processEvents)
///
/// ``` QAbstractEventDispatcherV2* self, int flags ```
bool q_abstracteventdispatcherv2_process_events(void* self, int64_t flags);

/// Inherited from QAbstractEventDispatcher
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registerSocketNotifier)
///
/// ``` QAbstractEventDispatcherV2* self, QSocketNotifier* notifier ```
void q_abstracteventdispatcherv2_register_socket_notifier(void* self, void* notifier);

/// Inherited from QAbstractEventDispatcher
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterSocketNotifier)
///
/// ``` QAbstractEventDispatcherV2* self, QSocketNotifier* notifier ```
void q_abstracteventdispatcherv2_unregister_socket_notifier(void* self, void* notifier);

/// Inherited from QAbstractEventDispatcher
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registerTimer)
///
/// ``` QAbstractEventDispatcherV2* self, long long interval, enum Qt__TimerType timerType, QObject* object ```
int32_t q_abstracteventdispatcherv2_register_timer(void* self, long long interval, int64_t timerType, void* object);

/// Inherited from QAbstractEventDispatcher
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registerTimer)
///
/// ``` QAbstractEventDispatcherV2* self, int timerId, long long interval, enum Qt__TimerType timerType, QObject* object ```
void q_abstracteventdispatcherv2_register_timer2(void* self, int timerId, long long interval, int64_t timerType, void* object);

/// Inherited from QAbstractEventDispatcher
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterTimers)
///
/// ``` QAbstractEventDispatcherV2* self, QObject* object ```
bool q_abstracteventdispatcherv2_unregister_timers(void* self, void* object);

/// Inherited from QAbstractEventDispatcher
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registeredTimers)
///
/// ``` QAbstractEventDispatcherV2* self, QObject* object ```
libqt_list /* of QAbstractEventDispatcher__TimerInfo* */ q_abstracteventdispatcherv2_registered_timers(void* self, void* object);

/// Inherited from QAbstractEventDispatcher
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#remainingTime)
///
/// ``` QAbstractEventDispatcherV2* self, int timerId ```
int32_t q_abstracteventdispatcherv2_remaining_time(void* self, int timerId);

/// Inherited from QAbstractEventDispatcher
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterTimer)
///
/// ``` QAbstractEventDispatcherV2* self, enum Qt__TimerId timerId ```
bool q_abstracteventdispatcherv2_unregister_timer2(void* self, int64_t timerId);

/// Inherited from QAbstractEventDispatcher
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#wakeUp)
///
/// ``` QAbstractEventDispatcherV2* self ```
void q_abstracteventdispatcherv2_wake_up(void* self);

/// Inherited from QAbstractEventDispatcher
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#interrupt)
///
/// ``` QAbstractEventDispatcherV2* self ```
void q_abstracteventdispatcherv2_interrupt(void* self);

/// Inherited from QAbstractEventDispatcher
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#startingUp)
///
/// ``` QAbstractEventDispatcherV2* self ```
void q_abstracteventdispatcherv2_starting_up(void* self);

/// Inherited from QAbstractEventDispatcher
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#closingDown)
///
/// ``` QAbstractEventDispatcherV2* self ```
void q_abstracteventdispatcherv2_closing_down(void* self);

/// Inherited from QAbstractEventDispatcher
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#installNativeEventFilter)
///
/// ``` QAbstractEventDispatcherV2* self, QAbstractNativeEventFilter* filterObj ```
void q_abstracteventdispatcherv2_install_native_event_filter(void* self, void* filterObj);

/// Inherited from QAbstractEventDispatcher
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#removeNativeEventFilter)
///
/// ``` QAbstractEventDispatcherV2* self, QAbstractNativeEventFilter* filterObj ```
void q_abstracteventdispatcherv2_remove_native_event_filter(void* self, void* filterObj);

/// Inherited from QAbstractEventDispatcher
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#filterNativeEvent)
///
/// ``` QAbstractEventDispatcherV2* self, const char* eventType, void* message, intptr_t* result ```
bool q_abstracteventdispatcherv2_filter_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QAbstractEventDispatcher
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#aboutToBlock)
///
/// ``` QAbstractEventDispatcherV2* self ```
void q_abstracteventdispatcherv2_about_to_block(void* self);

/// Inherited from QAbstractEventDispatcher
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#aboutToBlock)
///
/// ``` QAbstractEventDispatcherV2* self, void (*slot)(QAbstractEventDispatcher*) ```
void q_abstracteventdispatcherv2_on_about_to_block(void* self, void (*slot)(void*));

/// Inherited from QAbstractEventDispatcher
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#awake)
///
/// ``` QAbstractEventDispatcherV2* self ```
void q_abstracteventdispatcherv2_awake(void* self);

/// Inherited from QAbstractEventDispatcher
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#awake)
///
/// ``` QAbstractEventDispatcherV2* self, void (*slot)(QAbstractEventDispatcher*) ```
void q_abstracteventdispatcherv2_on_awake(void* self, void (*slot)(void*));

/// Inherited from QAbstractEventDispatcher
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#instance)
///
/// ``` QThread* thread ```
QAbstractEventDispatcher* q_abstracteventdispatcherv2_instance1(void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QAbstractEventDispatcherV2* self, QEvent* event ```
bool q_abstracteventdispatcherv2_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QAbstractEventDispatcherV2* self, QObject* watched, QEvent* event ```
bool q_abstracteventdispatcherv2_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAbstractEventDispatcherV2* self ```
const char* q_abstracteventdispatcherv2_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAbstractEventDispatcherV2* self, char* name ```
void q_abstracteventdispatcherv2_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAbstractEventDispatcherV2* self ```
bool q_abstracteventdispatcherv2_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAbstractEventDispatcherV2* self ```
bool q_abstracteventdispatcherv2_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAbstractEventDispatcherV2* self ```
bool q_abstracteventdispatcherv2_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAbstractEventDispatcherV2* self ```
bool q_abstracteventdispatcherv2_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAbstractEventDispatcherV2* self, bool b ```
bool q_abstracteventdispatcherv2_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAbstractEventDispatcherV2* self ```
QThread* q_abstracteventdispatcherv2_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractEventDispatcherV2* self, QThread* thread ```
bool q_abstracteventdispatcherv2_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractEventDispatcherV2* self, int interval ```
int32_t q_abstracteventdispatcherv2_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractEventDispatcherV2* self, int id ```
void q_abstracteventdispatcherv2_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractEventDispatcherV2* self, enum Qt__TimerId id ```
void q_abstracteventdispatcherv2_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAbstractEventDispatcherV2* self ```
libqt_list /* of QObject* */ q_abstracteventdispatcherv2_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAbstractEventDispatcherV2* self, QObject* parent ```
void q_abstracteventdispatcherv2_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAbstractEventDispatcherV2* self, QObject* filterObj ```
void q_abstracteventdispatcherv2_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAbstractEventDispatcherV2* self, QObject* obj ```
void q_abstracteventdispatcherv2_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_abstracteventdispatcherv2_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractEventDispatcherV2* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_abstracteventdispatcherv2_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_abstracteventdispatcherv2_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_abstracteventdispatcherv2_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAbstractEventDispatcherV2* self ```
void q_abstracteventdispatcherv2_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAbstractEventDispatcherV2* self ```
void q_abstracteventdispatcherv2_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAbstractEventDispatcherV2* self, const char* name, QVariant* value ```
bool q_abstracteventdispatcherv2_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAbstractEventDispatcherV2* self, const char* name ```
QVariant* q_abstracteventdispatcherv2_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAbstractEventDispatcherV2* self ```
const char** q_abstracteventdispatcherv2_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractEventDispatcherV2* self ```
QBindingStorage* q_abstracteventdispatcherv2_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractEventDispatcherV2* self ```
const QBindingStorage* q_abstracteventdispatcherv2_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractEventDispatcherV2* self ```
void q_abstracteventdispatcherv2_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractEventDispatcherV2* self, void (*slot)(QObject*) ```
void q_abstracteventdispatcherv2_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAbstractEventDispatcherV2* self ```
QObject* q_abstracteventdispatcherv2_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAbstractEventDispatcherV2* self, const char* classname ```
bool q_abstracteventdispatcherv2_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAbstractEventDispatcherV2* self ```
void q_abstracteventdispatcherv2_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractEventDispatcherV2* self, QThread* thread, Disambiguated_t* param2 ```
bool q_abstracteventdispatcherv2_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractEventDispatcherV2* self, int interval, enum Qt__TimerType timerType ```
int32_t q_abstracteventdispatcherv2_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstracteventdispatcherv2_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractEventDispatcherV2* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstracteventdispatcherv2_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractEventDispatcherV2* self, QObject* param1 ```
void q_abstracteventdispatcherv2_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractEventDispatcherV2* self, void (*slot)(QObject*, QObject*) ```
void q_abstracteventdispatcherv2_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractEventDispatcherV2* self, void (*slot)(QObject*, const char*) ```
void q_abstracteventdispatcherv2_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcherv2.html#dtor.QAbstractEventDispatcherV2)
///
/// Delete this object from C++ memory.
///
/// ``` QAbstractEventDispatcherV2* self ```
void q_abstracteventdispatcherv2_delete(void* self);

/// https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfo.html

/// q_abstracteventdispatcher__timerinfo_new constructs a new QAbstractEventDispatcher::TimerInfo object.
///
/// ``` QAbstractEventDispatcher__TimerInfo* other ```
QAbstractEventDispatcher__TimerInfo* q_abstracteventdispatcher__timerinfo_new(void* other);

/// q_abstracteventdispatcher__timerinfo_new2 constructs a new QAbstractEventDispatcher::TimerInfo object and invalidates the source QAbstractEventDispatcher::TimerInfo object.
///
/// ``` QAbstractEventDispatcher__TimerInfo* other ```
QAbstractEventDispatcher__TimerInfo* q_abstracteventdispatcher__timerinfo_new2(void* other);

/// q_abstracteventdispatcher__timerinfo_new3 constructs a new QAbstractEventDispatcher::TimerInfo object.
///
/// ``` int id, int i, enum Qt__TimerType t ```
QAbstractEventDispatcher__TimerInfo* q_abstracteventdispatcher__timerinfo_new3(int id, int i, int64_t t);

/// q_abstracteventdispatcher__timerinfo_new4 constructs a new QAbstractEventDispatcher::TimerInfo object.
///
/// ``` QAbstractEventDispatcher__TimerInfo* param1 ```
QAbstractEventDispatcher__TimerInfo* q_abstracteventdispatcher__timerinfo_new4(void* param1);

/// q_abstracteventdispatcher__timerinfo_copy_assign shallow copies `other` into `self`.
///
/// ``` QAbstractEventDispatcher__TimerInfo* self, QAbstractEventDispatcher__TimerInfo* other ```
void q_abstracteventdispatcher__timerinfo_copy_assign(void* self, void* other);

/// q_abstracteventdispatcher__timerinfo_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QAbstractEventDispatcher__TimerInfo* self, QAbstractEventDispatcher__TimerInfo* other ```
void q_abstracteventdispatcher__timerinfo_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher::timerinfo.html#dtor.QAbstractEventDispatcher::TimerInfo)
///
/// Delete this object from C++ memory.
///
/// ``` QAbstractEventDispatcher__TimerInfo* self ```
void q_abstracteventdispatcher__timerinfo_delete(void* self);

/// https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfov2.html

/// q_abstracteventdispatcher__timerinfov2_new constructs a new QAbstractEventDispatcher::TimerInfoV2 object.
///
/// ``` QAbstractEventDispatcher__TimerInfoV2* param1 ```
QAbstractEventDispatcher__TimerInfoV2* q_abstracteventdispatcher__timerinfov2_new(void* param1);

/// q_abstracteventdispatcher__timerinfov2_new2 constructs a new QAbstractEventDispatcher::TimerInfoV2 object.
///
///
QAbstractEventDispatcher__TimerInfoV2* q_abstracteventdispatcher__timerinfov2_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher__timerinfov2.html#operator=)
///
/// ``` QAbstractEventDispatcher__TimerInfoV2* self, QAbstractEventDispatcher__TimerInfoV2* param1 ```
void q_abstracteventdispatcher__timerinfov2_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher::timerinfov2.html#dtor.QAbstractEventDispatcher::TimerInfoV2)
///
/// Delete this object from C++ memory.
///
/// ``` QAbstractEventDispatcher__TimerInfoV2* self ```
void q_abstracteventdispatcher__timerinfov2_delete(void* self);

#endif
