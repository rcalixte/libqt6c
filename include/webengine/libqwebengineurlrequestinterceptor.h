#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEURLREQUESTINTERCEPTOR_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEURLREQUESTINTERCEPTOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebengineurlrequestinterceptor.html

/// q_webengineurlrequestinterceptor_new constructs a new QWebEngineUrlRequestInterceptor object.
///
///
QWebEngineUrlRequestInterceptor* q_webengineurlrequestinterceptor_new();

/// q_webengineurlrequestinterceptor_new2 constructs a new QWebEngineUrlRequestInterceptor object.
///
/// ``` QObject* p ```
QWebEngineUrlRequestInterceptor* q_webengineurlrequestinterceptor_new2(void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWebEngineUrlRequestInterceptor* self ```
const QMetaObject* q_webengineurlrequestinterceptor_meta_object(void* self);

/// ``` QWebEngineUrlRequestInterceptor* self, const char* param1 ```
void* q_webengineurlrequestinterceptor_metacast(void* self, const char* param1);

/// ``` QWebEngineUrlRequestInterceptor* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webengineurlrequestinterceptor_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QWebEngineUrlRequestInterceptor* self, int32_t (*slot)(QWebEngineUrlRequestInterceptor*, enum QMetaObject__Call, int, void*) ```
void q_webengineurlrequestinterceptor_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QWebEngineUrlRequestInterceptor* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webengineurlrequestinterceptor_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_webengineurlrequestinterceptor_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinterceptor.html#interceptRequest)
///
/// ``` QWebEngineUrlRequestInterceptor* self, QWebEngineUrlRequestInfo* info ```
void q_webengineurlrequestinterceptor_intercept_request(void* self, void* info);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinterceptor.html#interceptRequest)
///
/// Allows for overriding the related default method
///
/// ``` QWebEngineUrlRequestInterceptor* self, void (*slot)(QWebEngineUrlRequestInterceptor*, QWebEngineUrlRequestInfo*) ```
void q_webengineurlrequestinterceptor_on_intercept_request(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinterceptor.html#interceptRequest)
///
/// Base class method implementation
///
/// ``` QWebEngineUrlRequestInterceptor* self, QWebEngineUrlRequestInfo* info ```
void q_webengineurlrequestinterceptor_qbase_intercept_request(void* self, void* info);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_webengineurlrequestinterceptor_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_webengineurlrequestinterceptor_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWebEngineUrlRequestInterceptor* self ```
const char* q_webengineurlrequestinterceptor_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWebEngineUrlRequestInterceptor* self, char* name ```
void q_webengineurlrequestinterceptor_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWebEngineUrlRequestInterceptor* self ```
bool q_webengineurlrequestinterceptor_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWebEngineUrlRequestInterceptor* self ```
bool q_webengineurlrequestinterceptor_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWebEngineUrlRequestInterceptor* self ```
bool q_webengineurlrequestinterceptor_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWebEngineUrlRequestInterceptor* self ```
bool q_webengineurlrequestinterceptor_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWebEngineUrlRequestInterceptor* self, bool b ```
bool q_webengineurlrequestinterceptor_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWebEngineUrlRequestInterceptor* self ```
QThread* q_webengineurlrequestinterceptor_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineUrlRequestInterceptor* self, QThread* thread ```
bool q_webengineurlrequestinterceptor_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineUrlRequestInterceptor* self, int interval ```
int32_t q_webengineurlrequestinterceptor_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineUrlRequestInterceptor* self, int id ```
void q_webengineurlrequestinterceptor_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineUrlRequestInterceptor* self, enum Qt__TimerId id ```
void q_webengineurlrequestinterceptor_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWebEngineUrlRequestInterceptor* self ```
libqt_list /* of QObject* */ q_webengineurlrequestinterceptor_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QWebEngineUrlRequestInterceptor* self, QObject* parent ```
void q_webengineurlrequestinterceptor_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWebEngineUrlRequestInterceptor* self, QObject* filterObj ```
void q_webengineurlrequestinterceptor_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWebEngineUrlRequestInterceptor* self, QObject* obj ```
void q_webengineurlrequestinterceptor_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_webengineurlrequestinterceptor_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineUrlRequestInterceptor* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_webengineurlrequestinterceptor_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_webengineurlrequestinterceptor_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_webengineurlrequestinterceptor_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWebEngineUrlRequestInterceptor* self ```
void q_webengineurlrequestinterceptor_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWebEngineUrlRequestInterceptor* self ```
void q_webengineurlrequestinterceptor_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWebEngineUrlRequestInterceptor* self, const char* name, QVariant* value ```
bool q_webengineurlrequestinterceptor_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWebEngineUrlRequestInterceptor* self, const char* name ```
QVariant* q_webengineurlrequestinterceptor_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWebEngineUrlRequestInterceptor* self ```
const char** q_webengineurlrequestinterceptor_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineUrlRequestInterceptor* self ```
QBindingStorage* q_webengineurlrequestinterceptor_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineUrlRequestInterceptor* self ```
const QBindingStorage* q_webengineurlrequestinterceptor_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineUrlRequestInterceptor* self ```
void q_webengineurlrequestinterceptor_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineUrlRequestInterceptor* self, void (*slot)(QObject*) ```
void q_webengineurlrequestinterceptor_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWebEngineUrlRequestInterceptor* self ```
QObject* q_webengineurlrequestinterceptor_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWebEngineUrlRequestInterceptor* self, const char* classname ```
bool q_webengineurlrequestinterceptor_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWebEngineUrlRequestInterceptor* self ```
void q_webengineurlrequestinterceptor_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineUrlRequestInterceptor* self, QThread* thread, Disambiguated_t* param2 ```
bool q_webengineurlrequestinterceptor_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineUrlRequestInterceptor* self, int interval, enum Qt__TimerType timerType ```
int32_t q_webengineurlrequestinterceptor_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webengineurlrequestinterceptor_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineUrlRequestInterceptor* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webengineurlrequestinterceptor_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineUrlRequestInterceptor* self, QObject* param1 ```
void q_webengineurlrequestinterceptor_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineUrlRequestInterceptor* self, void (*slot)(QObject*, QObject*) ```
void q_webengineurlrequestinterceptor_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineUrlRequestInterceptor* self, QEvent* event ```
bool q_webengineurlrequestinterceptor_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineUrlRequestInterceptor* self, QEvent* event ```
bool q_webengineurlrequestinterceptor_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineUrlRequestInterceptor* self, bool (*slot)(QWebEngineUrlRequestInterceptor*, QEvent*) ```
void q_webengineurlrequestinterceptor_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineUrlRequestInterceptor* self, QObject* watched, QEvent* event ```
bool q_webengineurlrequestinterceptor_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineUrlRequestInterceptor* self, QObject* watched, QEvent* event ```
bool q_webengineurlrequestinterceptor_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineUrlRequestInterceptor* self, bool (*slot)(QWebEngineUrlRequestInterceptor*, QObject*, QEvent*) ```
void q_webengineurlrequestinterceptor_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineUrlRequestInterceptor* self, QTimerEvent* event ```
void q_webengineurlrequestinterceptor_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineUrlRequestInterceptor* self, QTimerEvent* event ```
void q_webengineurlrequestinterceptor_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineUrlRequestInterceptor* self, void (*slot)(QWebEngineUrlRequestInterceptor*, QTimerEvent*) ```
void q_webengineurlrequestinterceptor_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineUrlRequestInterceptor* self, QChildEvent* event ```
void q_webengineurlrequestinterceptor_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineUrlRequestInterceptor* self, QChildEvent* event ```
void q_webengineurlrequestinterceptor_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineUrlRequestInterceptor* self, void (*slot)(QWebEngineUrlRequestInterceptor*, QChildEvent*) ```
void q_webengineurlrequestinterceptor_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineUrlRequestInterceptor* self, QEvent* event ```
void q_webengineurlrequestinterceptor_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineUrlRequestInterceptor* self, QEvent* event ```
void q_webengineurlrequestinterceptor_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineUrlRequestInterceptor* self, void (*slot)(QWebEngineUrlRequestInterceptor*, QEvent*) ```
void q_webengineurlrequestinterceptor_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineUrlRequestInterceptor* self, QMetaMethod* signal ```
void q_webengineurlrequestinterceptor_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineUrlRequestInterceptor* self, QMetaMethod* signal ```
void q_webengineurlrequestinterceptor_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineUrlRequestInterceptor* self, void (*slot)(QWebEngineUrlRequestInterceptor*, QMetaMethod*) ```
void q_webengineurlrequestinterceptor_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineUrlRequestInterceptor* self, QMetaMethod* signal ```
void q_webengineurlrequestinterceptor_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineUrlRequestInterceptor* self, QMetaMethod* signal ```
void q_webengineurlrequestinterceptor_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineUrlRequestInterceptor* self, void (*slot)(QWebEngineUrlRequestInterceptor*, QMetaMethod*) ```
void q_webengineurlrequestinterceptor_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineUrlRequestInterceptor* self ```
QObject* q_webengineurlrequestinterceptor_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineUrlRequestInterceptor* self ```
QObject* q_webengineurlrequestinterceptor_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineUrlRequestInterceptor* self, QObject* (*slot)() ```
void q_webengineurlrequestinterceptor_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineUrlRequestInterceptor* self ```
int32_t q_webengineurlrequestinterceptor_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineUrlRequestInterceptor* self ```
int32_t q_webengineurlrequestinterceptor_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineUrlRequestInterceptor* self, int32_t (*slot)() ```
void q_webengineurlrequestinterceptor_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineUrlRequestInterceptor* self, const char* signal ```
int32_t q_webengineurlrequestinterceptor_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineUrlRequestInterceptor* self, const char* signal ```
int32_t q_webengineurlrequestinterceptor_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineUrlRequestInterceptor* self, int32_t (*slot)(QWebEngineUrlRequestInterceptor*, const char*) ```
void q_webengineurlrequestinterceptor_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineUrlRequestInterceptor* self, QMetaMethod* signal ```
bool q_webengineurlrequestinterceptor_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineUrlRequestInterceptor* self, QMetaMethod* signal ```
bool q_webengineurlrequestinterceptor_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineUrlRequestInterceptor* self, bool (*slot)(QWebEngineUrlRequestInterceptor*, QMetaMethod*) ```
void q_webengineurlrequestinterceptor_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QWebEngineUrlRequestInterceptor* self, void (*slot)(QObject*, const char*) ```
void q_webengineurlrequestinterceptor_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinterceptor.html#dtor.QWebEngineUrlRequestInterceptor)
///
/// Delete this object from C++ memory.
///
/// ``` QWebEngineUrlRequestInterceptor* self ```
void q_webengineurlrequestinterceptor_delete(void* self);

#endif
