#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQDTLS_H
#define SRC_NETWORK_QT6C_LIBQDTLS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier.html)

/// q_dtlsclientverifier_new constructs a new QDtlsClientVerifier object.
///
QDtlsClientVerifier* q_dtlsclientverifier_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier.html)

/// q_dtlsclientverifier_new2 constructs a new QDtlsClientVerifier object.
///
/// @param parent QObject*
///
QDtlsClientVerifier* q_dtlsclientverifier_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QDtlsClientVerifier*
///
const QMetaObject* q_dtlsclientverifier_meta_object(void* self);

/// @param self QDtlsClientVerifier*
/// @param param1 const char*
///
void* q_dtlsclientverifier_metacast(void* self, const char* param1);

/// @param self QDtlsClientVerifier*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_dtlsclientverifier_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QDtlsClientVerifier*
/// @param callback int32_t func(QDtlsClientVerifier* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_dtlsclientverifier_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QDtlsClientVerifier*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_dtlsclientverifier_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_dtlsclientverifier_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier.html#setCookieGeneratorParameters)
///
/// @param self QDtlsClientVerifier*
/// @param params QDtlsClientVerifier__GeneratorParameters*
///
bool q_dtlsclientverifier_set_cookie_generator_parameters(void* self, void* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier.html#cookieGeneratorParameters)
///
/// @param self QDtlsClientVerifier*
///
QDtlsClientVerifier__GeneratorParameters* q_dtlsclientverifier_cookie_generator_parameters(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier.html#verifyClient)
///
/// @param self QDtlsClientVerifier*
/// @param socket QUdpSocket*
/// @param dgram const char*
/// @param address QHostAddress*
/// @param port unsigned short
///
bool q_dtlsclientverifier_verify_client(void* self, void* socket, const char* dgram, void* address, unsigned short port);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier.html#verifiedHello)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDtlsClientVerifier*
///
char* q_dtlsclientverifier_verified_hello(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier.html#dtlsError)
///
/// @param self QDtlsClientVerifier*
///
/// @return enum QDtlsClientVerifier__QDtlsError
///
uint8_t q_dtlsclientverifier_dtls_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier.html#dtlsErrorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDtlsClientVerifier*
///
const char* q_dtlsclientverifier_dtls_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_dtlsclientverifier_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_dtlsclientverifier_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDtlsClientVerifier*
///
const char* q_dtlsclientverifier_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDtlsClientVerifier*
/// @param name char*
///
void q_dtlsclientverifier_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QDtlsClientVerifier*
///
bool q_dtlsclientverifier_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QDtlsClientVerifier*
///
bool q_dtlsclientverifier_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QDtlsClientVerifier*
///
bool q_dtlsclientverifier_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QDtlsClientVerifier*
///
bool q_dtlsclientverifier_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDtlsClientVerifier*
/// @param b bool
///
bool q_dtlsclientverifier_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QDtlsClientVerifier*
///
QThread* q_dtlsclientverifier_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDtlsClientVerifier*
/// @param thread QThread*
///
bool q_dtlsclientverifier_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDtlsClientVerifier*
/// @param interval int
///
int32_t q_dtlsclientverifier_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDtlsClientVerifier*
/// @param id int
///
void q_dtlsclientverifier_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDtlsClientVerifier*
/// @param id enum Qt__TimerId
///
void q_dtlsclientverifier_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QDtlsClientVerifier*
///
/// @return libqt_list of QObject*
///
libqt_list q_dtlsclientverifier_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QDtlsClientVerifier*
/// @param parent QObject*
///
void q_dtlsclientverifier_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDtlsClientVerifier*
/// @param filterObj QObject*
///
void q_dtlsclientverifier_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDtlsClientVerifier*
/// @param obj QObject*
///
void q_dtlsclientverifier_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_dtlsclientverifier_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDtlsClientVerifier*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_dtlsclientverifier_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_dtlsclientverifier_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_dtlsclientverifier_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QDtlsClientVerifier*
///
void q_dtlsclientverifier_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QDtlsClientVerifier*
///
void q_dtlsclientverifier_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDtlsClientVerifier*
/// @param name const char*
/// @param value QVariant*
///
bool q_dtlsclientverifier_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QDtlsClientVerifier*
/// @param name const char*
///
QVariant* q_dtlsclientverifier_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDtlsClientVerifier*
///
const char** q_dtlsclientverifier_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDtlsClientVerifier*
///
QBindingStorage* q_dtlsclientverifier_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDtlsClientVerifier*
///
const QBindingStorage* q_dtlsclientverifier_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDtlsClientVerifier*
///
void q_dtlsclientverifier_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDtlsClientVerifier*
/// @param callback void func(QDtlsClientVerifier* self)
///
void q_dtlsclientverifier_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QDtlsClientVerifier*
///
QObject* q_dtlsclientverifier_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QDtlsClientVerifier*
/// @param classname const char*
///
bool q_dtlsclientverifier_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDtlsClientVerifier*
///
void q_dtlsclientverifier_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDtlsClientVerifier*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_dtlsclientverifier_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDtlsClientVerifier*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_dtlsclientverifier_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_dtlsclientverifier_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDtlsClientVerifier*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_dtlsclientverifier_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDtlsClientVerifier*
/// @param param1 QObject*
///
void q_dtlsclientverifier_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDtlsClientVerifier*
/// @param callback void func(QDtlsClientVerifier* self, QObject* param1)
///
void q_dtlsclientverifier_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDtlsClientVerifier*
/// @param event QEvent*
///
bool q_dtlsclientverifier_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDtlsClientVerifier*
/// @param event QEvent*
///
bool q_dtlsclientverifier_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDtlsClientVerifier*
/// @param callback bool func(QDtlsClientVerifier* self, QEvent* event)
///
void q_dtlsclientverifier_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDtlsClientVerifier*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_dtlsclientverifier_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDtlsClientVerifier*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_dtlsclientverifier_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDtlsClientVerifier*
/// @param callback bool func(QDtlsClientVerifier* self, QObject* watched, QEvent* event)
///
void q_dtlsclientverifier_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDtlsClientVerifier*
/// @param event QTimerEvent*
///
void q_dtlsclientverifier_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDtlsClientVerifier*
/// @param event QTimerEvent*
///
void q_dtlsclientverifier_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDtlsClientVerifier*
/// @param callback void func(QDtlsClientVerifier* self, QTimerEvent* event)
///
void q_dtlsclientverifier_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDtlsClientVerifier*
/// @param event QChildEvent*
///
void q_dtlsclientverifier_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDtlsClientVerifier*
/// @param event QChildEvent*
///
void q_dtlsclientverifier_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDtlsClientVerifier*
/// @param callback void func(QDtlsClientVerifier* self, QChildEvent* event)
///
void q_dtlsclientverifier_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDtlsClientVerifier*
/// @param event QEvent*
///
void q_dtlsclientverifier_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDtlsClientVerifier*
/// @param event QEvent*
///
void q_dtlsclientverifier_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDtlsClientVerifier*
/// @param callback void func(QDtlsClientVerifier* self, QEvent* event)
///
void q_dtlsclientverifier_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDtlsClientVerifier*
/// @param signal QMetaMethod*
///
void q_dtlsclientverifier_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDtlsClientVerifier*
/// @param signal QMetaMethod*
///
void q_dtlsclientverifier_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDtlsClientVerifier*
/// @param callback void func(QDtlsClientVerifier* self, QMetaMethod* signal)
///
void q_dtlsclientverifier_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDtlsClientVerifier*
/// @param signal QMetaMethod*
///
void q_dtlsclientverifier_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDtlsClientVerifier*
/// @param signal QMetaMethod*
///
void q_dtlsclientverifier_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDtlsClientVerifier*
/// @param callback void func(QDtlsClientVerifier* self, QMetaMethod* signal)
///
void q_dtlsclientverifier_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDtlsClientVerifier*
///
QObject* q_dtlsclientverifier_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDtlsClientVerifier*
///
QObject* q_dtlsclientverifier_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDtlsClientVerifier*
/// @param callback QObject* func()
///
void q_dtlsclientverifier_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDtlsClientVerifier*
///
int32_t q_dtlsclientverifier_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDtlsClientVerifier*
///
int32_t q_dtlsclientverifier_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDtlsClientVerifier*
/// @param callback int32_t func()
///
void q_dtlsclientverifier_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDtlsClientVerifier*
/// @param signal const char*
///
int32_t q_dtlsclientverifier_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDtlsClientVerifier*
/// @param signal const char*
///
int32_t q_dtlsclientverifier_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDtlsClientVerifier*
/// @param callback int32_t func(QDtlsClientVerifier* self, const char* signal)
///
void q_dtlsclientverifier_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDtlsClientVerifier*
/// @param signal QMetaMethod*
///
bool q_dtlsclientverifier_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDtlsClientVerifier*
/// @param signal QMetaMethod*
///
bool q_dtlsclientverifier_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDtlsClientVerifier*
/// @param callback bool func(QDtlsClientVerifier* self, QMetaMethod* signal)
///
void q_dtlsclientverifier_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QDtlsClientVerifier*
/// @param callback void func(QDtlsClientVerifier* self, const char* objectName)
///
void q_dtlsclientverifier_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier.html#dtor.QDtlsClientVerifier)
///
/// Delete this object from C++ memory.
///
/// @param self QDtlsClientVerifier*
///
void q_dtlsclientverifier_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html)

/// q_dtls_new constructs a new QDtls object.
///
/// @param mode enum QSslSocket__SslMode
///
QDtls* q_dtls_new(int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html)

/// q_dtls_new2 constructs a new QDtls object.
///
/// @param mode enum QSslSocket__SslMode
/// @param parent QObject*
///
QDtls* q_dtls_new2(int32_t mode, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QDtls*
///
const QMetaObject* q_dtls_meta_object(void* self);

/// @param self QDtls*
/// @param param1 const char*
///
void* q_dtls_metacast(void* self, const char* param1);

/// @param self QDtls*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_dtls_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QDtls*
/// @param callback int32_t func(QDtls* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_dtls_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QDtls*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_dtls_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_dtls_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#setPeer)
///
/// @param self QDtls*
/// @param address QHostAddress*
/// @param port unsigned short
///
bool q_dtls_set_peer(void* self, void* address, unsigned short port);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#setPeerVerificationName)
///
/// @param self QDtls*
/// @param name const char*
///
bool q_dtls_set_peer_verification_name(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#peerAddress)
///
/// @param self QDtls*
///
QHostAddress* q_dtls_peer_address(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#peerPort)
///
/// @param self QDtls*
///
unsigned short q_dtls_peer_port(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#peerVerificationName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDtls*
///
const char* q_dtls_peer_verification_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#sslMode)
///
/// @param self QDtls*
///
/// @return enum QSslSocket__SslMode
///
int32_t q_dtls_ssl_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#setMtuHint)
///
/// @param self QDtls*
/// @param mtuHint unsigned short
///
void q_dtls_set_mtu_hint(void* self, unsigned short mtuHint);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#mtuHint)
///
/// @param self QDtls*
///
unsigned short q_dtls_mtu_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#setCookieGeneratorParameters)
///
/// @param self QDtls*
/// @param params QDtlsClientVerifier__GeneratorParameters*
///
bool q_dtls_set_cookie_generator_parameters(void* self, void* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#cookieGeneratorParameters)
///
/// @param self QDtls*
///
QDtlsClientVerifier__GeneratorParameters* q_dtls_cookie_generator_parameters(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#setDtlsConfiguration)
///
/// @param self QDtls*
/// @param configuration QSslConfiguration*
///
bool q_dtls_set_dtls_configuration(void* self, void* configuration);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#dtlsConfiguration)
///
/// @param self QDtls*
///
QSslConfiguration* q_dtls_dtls_configuration(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#handshakeState)
///
/// @param self QDtls*
///
/// @return enum QDtls__HandshakeState
///
int32_t q_dtls_handshake_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#doHandshake)
///
/// @param self QDtls*
/// @param socket QUdpSocket*
///
bool q_dtls_do_handshake(void* self, void* socket);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#handleTimeout)
///
/// @param self QDtls*
/// @param socket QUdpSocket*
///
bool q_dtls_handle_timeout(void* self, void* socket);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#resumeHandshake)
///
/// @param self QDtls*
/// @param socket QUdpSocket*
///
bool q_dtls_resume_handshake(void* self, void* socket);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#abortHandshake)
///
/// @param self QDtls*
/// @param socket QUdpSocket*
///
bool q_dtls_abort_handshake(void* self, void* socket);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#shutdown)
///
/// @param self QDtls*
/// @param socket QUdpSocket*
///
bool q_dtls_shutdown(void* self, void* socket);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#isConnectionEncrypted)
///
/// @param self QDtls*
///
bool q_dtls_is_connection_encrypted(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#sessionCipher)
///
/// @param self QDtls*
///
QSslCipher* q_dtls_session_cipher(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#sessionProtocol)
///
/// @param self QDtls*
///
/// @return enum QSsl__SslProtocol
///
int32_t q_dtls_session_protocol(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#writeDatagramEncrypted)
///
/// @param self QDtls*
/// @param socket QUdpSocket*
/// @param dgram const char*
///
long long q_dtls_write_datagram_encrypted(void* self, void* socket, const char* dgram);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#decryptDatagram)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDtls*
/// @param socket QUdpSocket*
/// @param dgram const char*
///
char* q_dtls_decrypt_datagram(void* self, void* socket, const char* dgram);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#dtlsError)
///
/// @param self QDtls*
///
/// @return enum QDtls__QDtlsError
///
uint8_t q_dtls_dtls_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#dtlsErrorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDtls*
///
const char* q_dtls_dtls_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#peerVerificationErrors)
///
/// @param self QDtls*
///
/// @return libqt_list of QSslError*
///
libqt_list q_dtls_peer_verification_errors(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#ignoreVerificationErrors)
///
/// @param self QDtls*
/// @param errorsToIgnore libqt_list of QSslError*
///
void q_dtls_ignore_verification_errors(void* self, libqt_list /* of QSslError* */ errorsToIgnore);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#pskRequired)
///
/// @param self QDtls*
/// @param authenticator QSslPreSharedKeyAuthenticator*
///
void q_dtls_psk_required(void* self, void* authenticator);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#pskRequired)
///
/// @param self QDtls*
/// @param callback void func(QDtls* self, QSslPreSharedKeyAuthenticator* authenticator)
///
void q_dtls_on_psk_required(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#handshakeTimeout)
///
/// @param self QDtls*
///
void q_dtls_handshake_timeout(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#handshakeTimeout)
///
/// @param self QDtls*
/// @param callback void func(QDtls* self)
///
void q_dtls_on_handshake_timeout(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_dtls_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_dtls_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#setPeer)
///
/// @param self QDtls*
/// @param address QHostAddress*
/// @param port unsigned short
/// @param verificationName const char*
///
bool q_dtls_set_peer3(void* self, void* address, unsigned short port, const char* verificationName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#doHandshake)
///
/// @param self QDtls*
/// @param socket QUdpSocket*
/// @param dgram const char*
///
bool q_dtls_do_handshake2(void* self, void* socket, const char* dgram);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDtls*
///
const char* q_dtls_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDtls*
/// @param name char*
///
void q_dtls_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QDtls*
///
bool q_dtls_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QDtls*
///
bool q_dtls_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QDtls*
///
bool q_dtls_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QDtls*
///
bool q_dtls_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDtls*
/// @param b bool
///
bool q_dtls_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QDtls*
///
QThread* q_dtls_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDtls*
/// @param thread QThread*
///
bool q_dtls_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDtls*
/// @param interval int
///
int32_t q_dtls_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDtls*
/// @param id int
///
void q_dtls_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDtls*
/// @param id enum Qt__TimerId
///
void q_dtls_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QDtls*
///
/// @return libqt_list of QObject*
///
libqt_list q_dtls_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QDtls*
/// @param parent QObject*
///
void q_dtls_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDtls*
/// @param filterObj QObject*
///
void q_dtls_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDtls*
/// @param obj QObject*
///
void q_dtls_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_dtls_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDtls*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_dtls_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_dtls_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_dtls_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QDtls*
///
void q_dtls_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QDtls*
///
void q_dtls_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDtls*
/// @param name const char*
/// @param value QVariant*
///
bool q_dtls_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QDtls*
/// @param name const char*
///
QVariant* q_dtls_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDtls*
///
const char** q_dtls_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDtls*
///
QBindingStorage* q_dtls_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDtls*
///
const QBindingStorage* q_dtls_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDtls*
///
void q_dtls_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDtls*
/// @param callback void func(QDtls* self)
///
void q_dtls_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QDtls*
///
QObject* q_dtls_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QDtls*
/// @param classname const char*
///
bool q_dtls_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDtls*
///
void q_dtls_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDtls*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_dtls_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDtls*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_dtls_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_dtls_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDtls*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_dtls_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDtls*
/// @param param1 QObject*
///
void q_dtls_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDtls*
/// @param callback void func(QDtls* self, QObject* param1)
///
void q_dtls_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDtls*
/// @param event QEvent*
///
bool q_dtls_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDtls*
/// @param event QEvent*
///
bool q_dtls_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDtls*
/// @param callback bool func(QDtls* self, QEvent* event)
///
void q_dtls_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDtls*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_dtls_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDtls*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_dtls_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDtls*
/// @param callback bool func(QDtls* self, QObject* watched, QEvent* event)
///
void q_dtls_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDtls*
/// @param event QTimerEvent*
///
void q_dtls_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDtls*
/// @param event QTimerEvent*
///
void q_dtls_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDtls*
/// @param callback void func(QDtls* self, QTimerEvent* event)
///
void q_dtls_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDtls*
/// @param event QChildEvent*
///
void q_dtls_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDtls*
/// @param event QChildEvent*
///
void q_dtls_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDtls*
/// @param callback void func(QDtls* self, QChildEvent* event)
///
void q_dtls_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDtls*
/// @param event QEvent*
///
void q_dtls_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDtls*
/// @param event QEvent*
///
void q_dtls_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDtls*
/// @param callback void func(QDtls* self, QEvent* event)
///
void q_dtls_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDtls*
/// @param signal QMetaMethod*
///
void q_dtls_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDtls*
/// @param signal QMetaMethod*
///
void q_dtls_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDtls*
/// @param callback void func(QDtls* self, QMetaMethod* signal)
///
void q_dtls_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDtls*
/// @param signal QMetaMethod*
///
void q_dtls_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDtls*
/// @param signal QMetaMethod*
///
void q_dtls_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDtls*
/// @param callback void func(QDtls* self, QMetaMethod* signal)
///
void q_dtls_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDtls*
///
QObject* q_dtls_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDtls*
///
QObject* q_dtls_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDtls*
/// @param callback QObject* func()
///
void q_dtls_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDtls*
///
int32_t q_dtls_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDtls*
///
int32_t q_dtls_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDtls*
/// @param callback int32_t func()
///
void q_dtls_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDtls*
/// @param signal const char*
///
int32_t q_dtls_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDtls*
/// @param signal const char*
///
int32_t q_dtls_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDtls*
/// @param callback int32_t func(QDtls* self, const char* signal)
///
void q_dtls_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDtls*
/// @param signal QMetaMethod*
///
bool q_dtls_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDtls*
/// @param signal QMetaMethod*
///
bool q_dtls_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDtls*
/// @param callback bool func(QDtls* self, QMetaMethod* signal)
///
void q_dtls_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QDtls*
/// @param callback void func(QDtls* self, const char* objectName)
///
void q_dtls_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#dtor.QDtls)
///
/// Delete this object from C++ memory.
///
/// @param self QDtls*
///
void q_dtls_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier-generatorparameters.html)

/// q_dtlsclientverifier__generatorparameters_new constructs a new QDtlsClientVerifier::GeneratorParameters object.
///
QDtlsClientVerifier__GeneratorParameters* q_dtlsclientverifier__generatorparameters_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier-generatorparameters.html)

/// q_dtlsclientverifier__generatorparameters_new2 constructs a new QDtlsClientVerifier::GeneratorParameters object.
///
/// @param a enum QCryptographicHash__Algorithm
/// @param s const char*
///
QDtlsClientVerifier__GeneratorParameters* q_dtlsclientverifier__generatorparameters_new2(int32_t a, const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier-generatorparameters.html)

/// q_dtlsclientverifier__generatorparameters_new3 constructs a new QDtlsClientVerifier::GeneratorParameters object.
///
/// @param param1 QDtlsClientVerifier__GeneratorParameters*
///
QDtlsClientVerifier__GeneratorParameters* q_dtlsclientverifier__generatorparameters_new3(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier-generatorparameters.html#hash-var)
///
/// @param self QDtlsClientVerifier__GeneratorParameters*
///
/// @return enum QCryptographicHash__Algorithm
///
int32_t q_dtlsclientverifier__generatorparameters_hash(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier-generatorparameters.html#hash-var)
///
/// @param self QDtlsClientVerifier__GeneratorParameters*
/// @param hash enum QCryptographicHash__Algorithm
///
void q_dtlsclientverifier__generatorparameters_set_hash(void* self, int32_t hash);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier-generatorparameters.html#secret-var)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDtlsClientVerifier__GeneratorParameters*
///
char* q_dtlsclientverifier__generatorparameters_secret(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier-generatorparameters.html#secret-var)
///
/// @param self QDtlsClientVerifier__GeneratorParameters*
/// @param secret char*
///
void q_dtlsclientverifier__generatorparameters_set_secret(void* self, char* secret);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtlsclientverifier-generatorparameters.html#operator-eq)
///
/// @param self QDtlsClientVerifier__GeneratorParameters*
/// @param param1 QDtlsClientVerifier__GeneratorParameters*
///
void q_dtlsclientverifier__generatorparameters_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self QDtlsClientVerifier__GeneratorParameters*
///
void q_dtlsclientverifier__generatorparameters_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#public-types)

typedef enum {
    QDTLSERROR_NOERROR = 0,
    QDTLSERROR_INVALIDINPUTPARAMETERS = 1,
    QDTLSERROR_INVALIDOPERATION = 2,
    QDTLSERROR_UNDERLYINGSOCKETERROR = 3,
    QDTLSERROR_REMOTECLOSEDCONNECTIONERROR = 4,
    QDTLSERROR_PEERVERIFICATIONERROR = 5,
    QDTLSERROR_TLSINITIALIZATIONERROR = 6,
    QDTLSERROR_TLSFATALERROR = 7,
    QDTLSERROR_TLSNONFATALERROR = 8
} QDtlsError__;

/// [Upstream resources](https://doc.qt.io/qt-6/qdtls.html#public-types)

typedef enum {
    QDTLS_HANDSHAKESTATE_HANDSHAKENOTSTARTED = 0,
    QDTLS_HANDSHAKESTATE_HANDSHAKEINPROGRESS = 1,
    QDTLS_HANDSHAKESTATE_PEERVERIFICATIONFAILED = 2,
    QDTLS_HANDSHAKESTATE_HANDSHAKECOMPLETE = 3
} QDtls__HandshakeState;

#endif
