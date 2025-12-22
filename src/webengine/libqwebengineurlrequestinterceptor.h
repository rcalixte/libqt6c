#pragma once
#ifndef SRC_WEBENGINE_QT6C_LIBQWEBENGINEURLREQUESTINTERCEPTOR_H
#define SRC_WEBENGINE_QT6C_LIBQWEBENGINEURLREQUESTINTERCEPTOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinterceptor.html)

/// q_webengineurlrequestinterceptor_new constructs a new QWebEngineUrlRequestInterceptor object.
///
QWebEngineUrlRequestInterceptor* q_webengineurlrequestinterceptor_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinterceptor.html)

/// q_webengineurlrequestinterceptor_new2 constructs a new QWebEngineUrlRequestInterceptor object.
///
/// @param p QObject*
///
QWebEngineUrlRequestInterceptor* q_webengineurlrequestinterceptor_new2(void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QWebEngineUrlRequestInterceptor*
///
const QMetaObject* q_webengineurlrequestinterceptor_meta_object(void* self);

/// @param self QWebEngineUrlRequestInterceptor*
/// @param param1 const char*
///
void* q_webengineurlrequestinterceptor_metacast(void* self, const char* param1);

/// @param self QWebEngineUrlRequestInterceptor*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_webengineurlrequestinterceptor_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param callback int32_t func(QWebEngineUrlRequestInterceptor* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_webengineurlrequestinterceptor_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_webengineurlrequestinterceptor_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_webengineurlrequestinterceptor_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinterceptor.html#interceptRequest)
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param info QWebEngineUrlRequestInfo*
///
void q_webengineurlrequestinterceptor_intercept_request(void* self, void* info);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinterceptor.html#interceptRequest)
///
/// Allows for overriding the related default method
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param callback void func(QWebEngineUrlRequestInterceptor* self, QWebEngineUrlRequestInfo* info)
///
void q_webengineurlrequestinterceptor_on_intercept_request(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinterceptor.html#interceptRequest)
///
/// Base class method implementation
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param info QWebEngineUrlRequestInfo*
///
void q_webengineurlrequestinterceptor_qbase_intercept_request(void* self, void* info);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_webengineurlrequestinterceptor_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_webengineurlrequestinterceptor_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWebEngineUrlRequestInterceptor*
///
const char* q_webengineurlrequestinterceptor_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param name char*
///
void q_webengineurlrequestinterceptor_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QWebEngineUrlRequestInterceptor*
///
bool q_webengineurlrequestinterceptor_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QWebEngineUrlRequestInterceptor*
///
bool q_webengineurlrequestinterceptor_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QWebEngineUrlRequestInterceptor*
///
bool q_webengineurlrequestinterceptor_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QWebEngineUrlRequestInterceptor*
///
bool q_webengineurlrequestinterceptor_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param b bool
///
bool q_webengineurlrequestinterceptor_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QWebEngineUrlRequestInterceptor*
///
QThread* q_webengineurlrequestinterceptor_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param thread QThread*
///
bool q_webengineurlrequestinterceptor_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param interval int
///
int32_t q_webengineurlrequestinterceptor_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param id int
///
void q_webengineurlrequestinterceptor_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param id enum Qt__TimerId
///
void q_webengineurlrequestinterceptor_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QWebEngineUrlRequestInterceptor*
///
libqt_list /* of QObject* */ q_webengineurlrequestinterceptor_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param parent QObject*
///
void q_webengineurlrequestinterceptor_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param filterObj QObject*
///
void q_webengineurlrequestinterceptor_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param obj QObject*
///
void q_webengineurlrequestinterceptor_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_webengineurlrequestinterceptor_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_webengineurlrequestinterceptor_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_webengineurlrequestinterceptor_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_webengineurlrequestinterceptor_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QWebEngineUrlRequestInterceptor*
///
void q_webengineurlrequestinterceptor_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QWebEngineUrlRequestInterceptor*
///
void q_webengineurlrequestinterceptor_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param name const char*
/// @param value QVariant*
///
bool q_webengineurlrequestinterceptor_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param name const char*
///
QVariant* q_webengineurlrequestinterceptor_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QWebEngineUrlRequestInterceptor*
///
const char** q_webengineurlrequestinterceptor_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebEngineUrlRequestInterceptor*
///
QBindingStorage* q_webengineurlrequestinterceptor_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebEngineUrlRequestInterceptor*
///
const QBindingStorage* q_webengineurlrequestinterceptor_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineUrlRequestInterceptor*
///
void q_webengineurlrequestinterceptor_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param callback void func(QWebEngineUrlRequestInterceptor* self)
///
void q_webengineurlrequestinterceptor_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QWebEngineUrlRequestInterceptor*
///
QObject* q_webengineurlrequestinterceptor_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param classname const char*
///
bool q_webengineurlrequestinterceptor_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QWebEngineUrlRequestInterceptor*
///
void q_webengineurlrequestinterceptor_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_webengineurlrequestinterceptor_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_webengineurlrequestinterceptor_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_webengineurlrequestinterceptor_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_webengineurlrequestinterceptor_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param param1 QObject*
///
void q_webengineurlrequestinterceptor_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param callback void func(QWebEngineUrlRequestInterceptor* self, QObject* param1)
///
void q_webengineurlrequestinterceptor_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param event QEvent*
///
bool q_webengineurlrequestinterceptor_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param event QEvent*
///
bool q_webengineurlrequestinterceptor_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param callback bool func(QWebEngineUrlRequestInterceptor* self, QEvent* event)
///
void q_webengineurlrequestinterceptor_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_webengineurlrequestinterceptor_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_webengineurlrequestinterceptor_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param callback bool func(QWebEngineUrlRequestInterceptor* self, QObject* watched, QEvent* event)
///
void q_webengineurlrequestinterceptor_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param event QTimerEvent*
///
void q_webengineurlrequestinterceptor_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param event QTimerEvent*
///
void q_webengineurlrequestinterceptor_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param callback void func(QWebEngineUrlRequestInterceptor* self, QTimerEvent* event)
///
void q_webengineurlrequestinterceptor_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param event QChildEvent*
///
void q_webengineurlrequestinterceptor_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param event QChildEvent*
///
void q_webengineurlrequestinterceptor_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param callback void func(QWebEngineUrlRequestInterceptor* self, QChildEvent* event)
///
void q_webengineurlrequestinterceptor_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param event QEvent*
///
void q_webengineurlrequestinterceptor_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param event QEvent*
///
void q_webengineurlrequestinterceptor_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param callback void func(QWebEngineUrlRequestInterceptor* self, QEvent* event)
///
void q_webengineurlrequestinterceptor_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param signal QMetaMethod*
///
void q_webengineurlrequestinterceptor_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param signal QMetaMethod*
///
void q_webengineurlrequestinterceptor_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param callback void func(QWebEngineUrlRequestInterceptor* self, QMetaMethod* signal)
///
void q_webengineurlrequestinterceptor_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param signal QMetaMethod*
///
void q_webengineurlrequestinterceptor_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param signal QMetaMethod*
///
void q_webengineurlrequestinterceptor_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param callback void func(QWebEngineUrlRequestInterceptor* self, QMetaMethod* signal)
///
void q_webengineurlrequestinterceptor_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineUrlRequestInterceptor*
///
QObject* q_webengineurlrequestinterceptor_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineUrlRequestInterceptor*
///
QObject* q_webengineurlrequestinterceptor_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param callback QObject* func()
///
void q_webengineurlrequestinterceptor_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineUrlRequestInterceptor*
///
int32_t q_webengineurlrequestinterceptor_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineUrlRequestInterceptor*
///
int32_t q_webengineurlrequestinterceptor_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param callback int32_t func()
///
void q_webengineurlrequestinterceptor_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param signal const char*
///
int32_t q_webengineurlrequestinterceptor_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param signal const char*
///
int32_t q_webengineurlrequestinterceptor_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param callback int32_t func(QWebEngineUrlRequestInterceptor* self, const char* signal)
///
void q_webengineurlrequestinterceptor_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param signal QMetaMethod*
///
bool q_webengineurlrequestinterceptor_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param signal QMetaMethod*
///
bool q_webengineurlrequestinterceptor_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param callback bool func(QWebEngineUrlRequestInterceptor* self, QMetaMethod* signal)
///
void q_webengineurlrequestinterceptor_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineUrlRequestInterceptor*
/// @param callback void func(QWebEngineUrlRequestInterceptor* self, const char* objectName)
///
void q_webengineurlrequestinterceptor_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinterceptor.html#dtor.QWebEngineUrlRequestInterceptor)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineUrlRequestInterceptor*
///
void q_webengineurlrequestinterceptor_delete(void* self);

#endif
