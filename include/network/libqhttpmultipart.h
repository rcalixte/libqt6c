#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQHTTPMULTIPART_H
#define SRC_NETWORK_QT6C_LIBQHTTPMULTIPART_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qhttppart.html)

/// q_httppart_new constructs a new QHttpPart object.
///
QHttpPart* q_httppart_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qhttppart.html)

/// q_httppart_new2 constructs a new QHttpPart object.
///
/// @param other QHttpPart*
///
QHttpPart* q_httppart_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttppart.html#operator-eq)
///
/// @param self QHttpPart*
/// @param other QHttpPart*
///
void q_httppart_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttppart.html#swap)
///
/// @param self QHttpPart*
/// @param other QHttpPart*
///
void q_httppart_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttppart.html#operator-eq-eq)
///
/// @param self QHttpPart*
/// @param other QHttpPart*
///
bool q_httppart_operator_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttppart.html#operator-not-eq)
///
/// @param self QHttpPart*
/// @param other QHttpPart*
///
bool q_httppart_operator_not_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttppart.html#setHeader)
///
/// @param self QHttpPart*
/// @param header enum QNetworkRequest__KnownHeaders
/// @param value QVariant*
///
void q_httppart_set_header(void* self, int32_t header, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttppart.html#setRawHeader)
///
/// @param self QHttpPart*
/// @param headerName const char*
/// @param headerValue const char*
///
void q_httppart_set_raw_header(void* self, const char* headerName, const char* headerValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttppart.html#setBody)
///
/// @param self QHttpPart*
/// @param body const char*
///
void q_httppart_set_body(void* self, const char* body);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttppart.html#setBodyDevice)
///
/// @param self QHttpPart*
/// @param device QIODevice*
///
void q_httppart_set_body_device(void* self, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttppart.html#dtor.QHttpPart)
///
/// Delete this object from C++ memory.
///
/// @param self QHttpPart*
///
void q_httppart_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpmultipart.html)

/// q_httpmultipart_new constructs a new QHttpMultiPart object.
///
QHttpMultiPart* q_httpmultipart_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpmultipart.html)

/// q_httpmultipart_new2 constructs a new QHttpMultiPart object.
///
/// @param contentType enum QHttpMultiPart__ContentType
///
QHttpMultiPart* q_httpmultipart_new2(int32_t contentType);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpmultipart.html)

/// q_httpmultipart_new3 constructs a new QHttpMultiPart object.
///
/// @param parent QObject*
///
QHttpMultiPart* q_httpmultipart_new3(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpmultipart.html)

/// q_httpmultipart_new4 constructs a new QHttpMultiPart object.
///
/// @param contentType enum QHttpMultiPart__ContentType
/// @param parent QObject*
///
QHttpMultiPart* q_httpmultipart_new4(int32_t contentType, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QHttpMultiPart*
///
const QMetaObject* q_httpmultipart_meta_object(void* self);

/// @param self QHttpMultiPart*
/// @param param1 const char*
///
void* q_httpmultipart_metacast(void* self, const char* param1);

/// @param self QHttpMultiPart*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_httpmultipart_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QHttpMultiPart*
/// @param callback int32_t func(QHttpMultiPart* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_httpmultipart_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QHttpMultiPart*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_httpmultipart_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_httpmultipart_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpmultipart.html#append)
///
/// @param self QHttpMultiPart*
/// @param httpPart QHttpPart*
///
void q_httpmultipart_append(void* self, void* httpPart);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpmultipart.html#setContentType)
///
/// @param self QHttpMultiPart*
/// @param contentType enum QHttpMultiPart__ContentType
///
void q_httpmultipart_set_content_type(void* self, int32_t contentType);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpmultipart.html#boundary)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QHttpMultiPart*
///
char* q_httpmultipart_boundary(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpmultipart.html#setBoundary)
///
/// @param self QHttpMultiPart*
/// @param boundary const char*
///
void q_httpmultipart_set_boundary(void* self, const char* boundary);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_httpmultipart_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_httpmultipart_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QHttpMultiPart*
///
const char* q_httpmultipart_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QHttpMultiPart*
/// @param name char*
///
void q_httpmultipart_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QHttpMultiPart*
///
bool q_httpmultipart_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QHttpMultiPart*
///
bool q_httpmultipart_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QHttpMultiPart*
///
bool q_httpmultipart_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QHttpMultiPart*
///
bool q_httpmultipart_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QHttpMultiPart*
/// @param b bool
///
bool q_httpmultipart_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QHttpMultiPart*
///
QThread* q_httpmultipart_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QHttpMultiPart*
/// @param thread QThread*
///
bool q_httpmultipart_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHttpMultiPart*
/// @param interval int
///
int32_t q_httpmultipart_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QHttpMultiPart*
/// @param id int
///
void q_httpmultipart_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QHttpMultiPart*
/// @param id enum Qt__TimerId
///
void q_httpmultipart_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QHttpMultiPart*
///
libqt_list /* of QObject* */ q_httpmultipart_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QHttpMultiPart*
/// @param parent QObject*
///
void q_httpmultipart_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QHttpMultiPart*
/// @param filterObj QObject*
///
void q_httpmultipart_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QHttpMultiPart*
/// @param obj QObject*
///
void q_httpmultipart_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_httpmultipart_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QHttpMultiPart*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_httpmultipart_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_httpmultipart_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_httpmultipart_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QHttpMultiPart*
///
void q_httpmultipart_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QHttpMultiPart*
///
void q_httpmultipart_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QHttpMultiPart*
/// @param name const char*
/// @param value QVariant*
///
bool q_httpmultipart_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QHttpMultiPart*
/// @param name const char*
///
QVariant* q_httpmultipart_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QHttpMultiPart*
///
const char** q_httpmultipart_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QHttpMultiPart*
///
QBindingStorage* q_httpmultipart_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QHttpMultiPart*
///
const QBindingStorage* q_httpmultipart_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHttpMultiPart*
///
void q_httpmultipart_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHttpMultiPart*
/// @param callback void func(QHttpMultiPart* self)
///
void q_httpmultipart_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QHttpMultiPart*
///
QObject* q_httpmultipart_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QHttpMultiPart*
/// @param classname const char*
///
bool q_httpmultipart_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QHttpMultiPart*
///
void q_httpmultipart_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QHttpMultiPart*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_httpmultipart_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHttpMultiPart*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_httpmultipart_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_httpmultipart_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QHttpMultiPart*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_httpmultipart_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHttpMultiPart*
/// @param param1 QObject*
///
void q_httpmultipart_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHttpMultiPart*
/// @param callback void func(QHttpMultiPart* self, QObject* param1)
///
void q_httpmultipart_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHttpMultiPart*
/// @param event QEvent*
///
bool q_httpmultipart_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHttpMultiPart*
/// @param event QEvent*
///
bool q_httpmultipart_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHttpMultiPart*
/// @param callback bool func(QHttpMultiPart* self, QEvent* event)
///
void q_httpmultipart_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHttpMultiPart*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_httpmultipart_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHttpMultiPart*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_httpmultipart_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHttpMultiPart*
/// @param callback bool func(QHttpMultiPart* self, QObject* watched, QEvent* event)
///
void q_httpmultipart_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHttpMultiPart*
/// @param event QTimerEvent*
///
void q_httpmultipart_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHttpMultiPart*
/// @param event QTimerEvent*
///
void q_httpmultipart_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHttpMultiPart*
/// @param callback void func(QHttpMultiPart* self, QTimerEvent* event)
///
void q_httpmultipart_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHttpMultiPart*
/// @param event QChildEvent*
///
void q_httpmultipart_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHttpMultiPart*
/// @param event QChildEvent*
///
void q_httpmultipart_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHttpMultiPart*
/// @param callback void func(QHttpMultiPart* self, QChildEvent* event)
///
void q_httpmultipart_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHttpMultiPart*
/// @param event QEvent*
///
void q_httpmultipart_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHttpMultiPart*
/// @param event QEvent*
///
void q_httpmultipart_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHttpMultiPart*
/// @param callback void func(QHttpMultiPart* self, QEvent* event)
///
void q_httpmultipart_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHttpMultiPart*
/// @param signal QMetaMethod*
///
void q_httpmultipart_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHttpMultiPart*
/// @param signal QMetaMethod*
///
void q_httpmultipart_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHttpMultiPart*
/// @param callback void func(QHttpMultiPart* self, QMetaMethod* signal)
///
void q_httpmultipart_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHttpMultiPart*
/// @param signal QMetaMethod*
///
void q_httpmultipart_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHttpMultiPart*
/// @param signal QMetaMethod*
///
void q_httpmultipart_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHttpMultiPart*
/// @param callback void func(QHttpMultiPart* self, QMetaMethod* signal)
///
void q_httpmultipart_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHttpMultiPart*
///
QObject* q_httpmultipart_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHttpMultiPart*
///
QObject* q_httpmultipart_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHttpMultiPart*
/// @param callback QObject* func()
///
void q_httpmultipart_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHttpMultiPart*
///
int32_t q_httpmultipart_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHttpMultiPart*
///
int32_t q_httpmultipart_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHttpMultiPart*
/// @param callback int32_t func()
///
void q_httpmultipart_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHttpMultiPart*
/// @param signal const char*
///
int32_t q_httpmultipart_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHttpMultiPart*
/// @param signal const char*
///
int32_t q_httpmultipart_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHttpMultiPart*
/// @param callback int32_t func(QHttpMultiPart* self, const char* signal)
///
void q_httpmultipart_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHttpMultiPart*
/// @param signal QMetaMethod*
///
bool q_httpmultipart_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHttpMultiPart*
/// @param signal QMetaMethod*
///
bool q_httpmultipart_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHttpMultiPart*
/// @param callback bool func(QHttpMultiPart* self, QMetaMethod* signal)
///
void q_httpmultipart_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QHttpMultiPart*
/// @param callback void func(QHttpMultiPart* self, const char* objectName)
///
void q_httpmultipart_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpmultipart.html#dtor.QHttpMultiPart)
///
/// Delete this object from C++ memory.
///
/// @param self QHttpMultiPart*
///
void q_httpmultipart_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpmultipart.html#public-types)

typedef enum {
    QHTTPMULTIPART_CONTENTTYPE_MIXEDTYPE = 0,
    QHTTPMULTIPART_CONTENTTYPE_RELATEDTYPE = 1,
    QHTTPMULTIPART_CONTENTTYPE_FORMDATATYPE = 2,
    QHTTPMULTIPART_CONTENTTYPE_ALTERNATIVETYPE = 3
} QHttpMultiPart__ContentType;

#endif
