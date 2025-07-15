#pragma once
#ifndef SRC_NETWORKQT6C_LIBQDTLS_H
#define SRC_NETWORKQT6C_LIBQDTLS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qdtlsclientverifier.html

/// q_dtlsclientverifier_new constructs a new QDtlsClientVerifier object.
///
///
QDtlsClientVerifier* q_dtlsclientverifier_new();

/// q_dtlsclientverifier_new2 constructs a new QDtlsClientVerifier object.
///
/// ``` QObject* parent ```
QDtlsClientVerifier* q_dtlsclientverifier_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QDtlsClientVerifier* self ```
const QMetaObject* q_dtlsclientverifier_meta_object(void* self);

/// ``` QDtlsClientVerifier* self, const char* param1 ```
void* q_dtlsclientverifier_metacast(void* self, const char* param1);

/// ``` QDtlsClientVerifier* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_dtlsclientverifier_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QDtlsClientVerifier* self, int32_t (*slot)(QDtlsClientVerifier*, enum QMetaObject__Call, int, void*) ```
void q_dtlsclientverifier_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QDtlsClientVerifier* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_dtlsclientverifier_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_dtlsclientverifier_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtlsclientverifier.html#setCookieGeneratorParameters)
///
/// ``` QDtlsClientVerifier* self, QDtlsClientVerifier__GeneratorParameters* params ```
bool q_dtlsclientverifier_set_cookie_generator_parameters(void* self, void* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtlsclientverifier.html#cookieGeneratorParameters)
///
/// ``` QDtlsClientVerifier* self ```
QDtlsClientVerifier__GeneratorParameters* q_dtlsclientverifier_cookie_generator_parameters(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtlsclientverifier.html#verifyClient)
///
/// ``` QDtlsClientVerifier* self, QUdpSocket* socket, const char* dgram, QHostAddress* address, unsigned short port ```
bool q_dtlsclientverifier_verify_client(void* self, void* socket, const char* dgram, void* address, unsigned short port);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtlsclientverifier.html#verifiedHello)
///
/// ``` QDtlsClientVerifier* self ```
char* q_dtlsclientverifier_verified_hello(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtlsclientverifier.html#dtlsError)
///
/// ``` QDtlsClientVerifier* self ```
int64_t q_dtlsclientverifier_dtls_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtlsclientverifier.html#dtlsErrorString)
///
/// ``` QDtlsClientVerifier* self ```
const char* q_dtlsclientverifier_dtls_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_dtlsclientverifier_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_dtlsclientverifier_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QDtlsClientVerifier* self ```
const char* q_dtlsclientverifier_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QDtlsClientVerifier* self, char* name ```
void q_dtlsclientverifier_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QDtlsClientVerifier* self ```
bool q_dtlsclientverifier_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QDtlsClientVerifier* self ```
bool q_dtlsclientverifier_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QDtlsClientVerifier* self ```
bool q_dtlsclientverifier_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QDtlsClientVerifier* self ```
bool q_dtlsclientverifier_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QDtlsClientVerifier* self, bool b ```
bool q_dtlsclientverifier_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QDtlsClientVerifier* self ```
QThread* q_dtlsclientverifier_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QDtlsClientVerifier* self, QThread* thread ```
bool q_dtlsclientverifier_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDtlsClientVerifier* self, int interval ```
int32_t q_dtlsclientverifier_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QDtlsClientVerifier* self, int id ```
void q_dtlsclientverifier_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QDtlsClientVerifier* self, enum Qt__TimerId id ```
void q_dtlsclientverifier_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QDtlsClientVerifier* self ```
libqt_list /* of QObject* */ q_dtlsclientverifier_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QDtlsClientVerifier* self, QObject* parent ```
void q_dtlsclientverifier_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QDtlsClientVerifier* self, QObject* filterObj ```
void q_dtlsclientverifier_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QDtlsClientVerifier* self, QObject* obj ```
void q_dtlsclientverifier_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_dtlsclientverifier_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDtlsClientVerifier* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_dtlsclientverifier_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_dtlsclientverifier_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_dtlsclientverifier_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QDtlsClientVerifier* self ```
void q_dtlsclientverifier_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QDtlsClientVerifier* self ```
void q_dtlsclientverifier_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QDtlsClientVerifier* self, const char* name, QVariant* value ```
bool q_dtlsclientverifier_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QDtlsClientVerifier* self, const char* name ```
QVariant* q_dtlsclientverifier_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QDtlsClientVerifier* self ```
const char** q_dtlsclientverifier_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QDtlsClientVerifier* self ```
QBindingStorage* q_dtlsclientverifier_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QDtlsClientVerifier* self ```
const QBindingStorage* q_dtlsclientverifier_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDtlsClientVerifier* self ```
void q_dtlsclientverifier_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDtlsClientVerifier* self, void (*slot)(QObject*) ```
void q_dtlsclientverifier_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QDtlsClientVerifier* self ```
QObject* q_dtlsclientverifier_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QDtlsClientVerifier* self, const char* classname ```
bool q_dtlsclientverifier_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QDtlsClientVerifier* self ```
void q_dtlsclientverifier_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QDtlsClientVerifier* self, QThread* thread, Disambiguated_t* param2 ```
bool q_dtlsclientverifier_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDtlsClientVerifier* self, int interval, enum Qt__TimerType timerType ```
int32_t q_dtlsclientverifier_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_dtlsclientverifier_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDtlsClientVerifier* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_dtlsclientverifier_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDtlsClientVerifier* self, QObject* param1 ```
void q_dtlsclientverifier_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDtlsClientVerifier* self, void (*slot)(QObject*, QObject*) ```
void q_dtlsclientverifier_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QEvent* event ```
bool q_dtlsclientverifier_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QEvent* event ```
bool q_dtlsclientverifier_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, bool (*slot)(QDtlsClientVerifier*, QEvent*) ```
void q_dtlsclientverifier_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QObject* watched, QEvent* event ```
bool q_dtlsclientverifier_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QObject* watched, QEvent* event ```
bool q_dtlsclientverifier_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, bool (*slot)(QDtlsClientVerifier*, QObject*, QEvent*) ```
void q_dtlsclientverifier_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QTimerEvent* event ```
void q_dtlsclientverifier_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QTimerEvent* event ```
void q_dtlsclientverifier_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, void (*slot)(QDtlsClientVerifier*, QTimerEvent*) ```
void q_dtlsclientverifier_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QChildEvent* event ```
void q_dtlsclientverifier_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QChildEvent* event ```
void q_dtlsclientverifier_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, void (*slot)(QDtlsClientVerifier*, QChildEvent*) ```
void q_dtlsclientverifier_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QEvent* event ```
void q_dtlsclientverifier_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QEvent* event ```
void q_dtlsclientverifier_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, void (*slot)(QDtlsClientVerifier*, QEvent*) ```
void q_dtlsclientverifier_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QMetaMethod* signal ```
void q_dtlsclientverifier_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QMetaMethod* signal ```
void q_dtlsclientverifier_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, void (*slot)(QDtlsClientVerifier*, QMetaMethod*) ```
void q_dtlsclientverifier_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QMetaMethod* signal ```
void q_dtlsclientverifier_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QMetaMethod* signal ```
void q_dtlsclientverifier_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, void (*slot)(QDtlsClientVerifier*, QMetaMethod*) ```
void q_dtlsclientverifier_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtlsClientVerifier* self ```
QObject* q_dtlsclientverifier_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self ```
QObject* q_dtlsclientverifier_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QObject* (*slot)() ```
void q_dtlsclientverifier_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtlsClientVerifier* self ```
int32_t q_dtlsclientverifier_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self ```
int32_t q_dtlsclientverifier_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, int32_t (*slot)() ```
void q_dtlsclientverifier_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtlsClientVerifier* self, const char* signal ```
int32_t q_dtlsclientverifier_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, const char* signal ```
int32_t q_dtlsclientverifier_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, int32_t (*slot)(QDtlsClientVerifier*, const char*) ```
void q_dtlsclientverifier_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QMetaMethod* signal ```
bool q_dtlsclientverifier_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QMetaMethod* signal ```
bool q_dtlsclientverifier_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, bool (*slot)(QDtlsClientVerifier*, QMetaMethod*) ```
void q_dtlsclientverifier_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QDtlsClientVerifier* self, void (*slot)(QObject*, const char*) ```
void q_dtlsclientverifier_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdtlsclientverifier.html#dtor.QDtlsClientVerifier)
///
/// Delete this object from C++ memory.
///
/// ``` QDtlsClientVerifier* self ```
void q_dtlsclientverifier_delete(void* self);

/// https://doc.qt.io/qt-6/qdtls.html

/// q_dtls_new constructs a new QDtls object.
///
/// ``` enum QSslSocket__SslMode mode ```
QDtls* q_dtls_new(int64_t mode);

/// q_dtls_new2 constructs a new QDtls object.
///
/// ``` enum QSslSocket__SslMode mode, QObject* parent ```
QDtls* q_dtls_new2(int64_t mode, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QDtls* self ```
const QMetaObject* q_dtls_meta_object(void* self);

/// ``` QDtls* self, const char* param1 ```
void* q_dtls_metacast(void* self, const char* param1);

/// ``` QDtls* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_dtls_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QDtls* self, int32_t (*slot)(QDtls*, enum QMetaObject__Call, int, void*) ```
void q_dtls_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QDtls* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_dtls_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_dtls_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#setPeer)
///
/// ``` QDtls* self, QHostAddress* address, unsigned short port ```
bool q_dtls_set_peer(void* self, void* address, unsigned short port);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#setPeerVerificationName)
///
/// ``` QDtls* self, const char* name ```
bool q_dtls_set_peer_verification_name(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#peerAddress)
///
/// ``` QDtls* self ```
QHostAddress* q_dtls_peer_address(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#peerPort)
///
/// ``` QDtls* self ```
unsigned short q_dtls_peer_port(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#peerVerificationName)
///
/// ``` QDtls* self ```
const char* q_dtls_peer_verification_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#sslMode)
///
/// ``` QDtls* self ```
int64_t q_dtls_ssl_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#setMtuHint)
///
/// ``` QDtls* self, unsigned short mtuHint ```
void q_dtls_set_mtu_hint(void* self, unsigned short mtuHint);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#mtuHint)
///
/// ``` QDtls* self ```
unsigned short q_dtls_mtu_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#setCookieGeneratorParameters)
///
/// ``` QDtls* self, QDtlsClientVerifier__GeneratorParameters* params ```
bool q_dtls_set_cookie_generator_parameters(void* self, void* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#cookieGeneratorParameters)
///
/// ``` QDtls* self ```
QDtlsClientVerifier__GeneratorParameters* q_dtls_cookie_generator_parameters(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#setDtlsConfiguration)
///
/// ``` QDtls* self, QSslConfiguration* configuration ```
bool q_dtls_set_dtls_configuration(void* self, void* configuration);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#dtlsConfiguration)
///
/// ``` QDtls* self ```
QSslConfiguration* q_dtls_dtls_configuration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#handshakeState)
///
/// ``` QDtls* self ```
int64_t q_dtls_handshake_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#doHandshake)
///
/// ``` QDtls* self, QUdpSocket* socket ```
bool q_dtls_do_handshake(void* self, void* socket);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#handleTimeout)
///
/// ``` QDtls* self, QUdpSocket* socket ```
bool q_dtls_handle_timeout(void* self, void* socket);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#resumeHandshake)
///
/// ``` QDtls* self, QUdpSocket* socket ```
bool q_dtls_resume_handshake(void* self, void* socket);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#abortHandshake)
///
/// ``` QDtls* self, QUdpSocket* socket ```
bool q_dtls_abort_handshake(void* self, void* socket);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#shutdown)
///
/// ``` QDtls* self, QUdpSocket* socket ```
bool q_dtls_shutdown(void* self, void* socket);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#isConnectionEncrypted)
///
/// ``` QDtls* self ```
bool q_dtls_is_connection_encrypted(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#sessionCipher)
///
/// ``` QDtls* self ```
QSslCipher* q_dtls_session_cipher(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#sessionProtocol)
///
/// ``` QDtls* self ```
int64_t q_dtls_session_protocol(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#writeDatagramEncrypted)
///
/// ``` QDtls* self, QUdpSocket* socket, const char* dgram ```
long long q_dtls_write_datagram_encrypted(void* self, void* socket, const char* dgram);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#decryptDatagram)
///
/// ``` QDtls* self, QUdpSocket* socket, const char* dgram ```
char* q_dtls_decrypt_datagram(void* self, void* socket, const char* dgram);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#dtlsError)
///
/// ``` QDtls* self ```
int64_t q_dtls_dtls_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#dtlsErrorString)
///
/// ``` QDtls* self ```
const char* q_dtls_dtls_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#peerVerificationErrors)
///
/// ``` QDtls* self ```
libqt_list /* of QSslError* */ q_dtls_peer_verification_errors(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#ignoreVerificationErrors)
///
/// ``` QDtls* self, libqt_list /* of QSslError* */ errorsToIgnore ```
void q_dtls_ignore_verification_errors(void* self, libqt_list errorsToIgnore);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#pskRequired)
///
/// ``` QDtls* self, QSslPreSharedKeyAuthenticator* authenticator ```
void q_dtls_psk_required(void* self, void* authenticator);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#pskRequired)
///
/// ``` QDtls* self, void (*slot)(QDtls*, QSslPreSharedKeyAuthenticator*) ```
void q_dtls_on_psk_required(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#handshakeTimeout)
///
/// ``` QDtls* self ```
void q_dtls_handshake_timeout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#handshakeTimeout)
///
/// ``` QDtls* self, void (*slot)(QDtls*) ```
void q_dtls_on_handshake_timeout(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_dtls_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_dtls_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#setPeer)
///
/// ``` QDtls* self, QHostAddress* address, unsigned short port, const char* verificationName ```
bool q_dtls_set_peer3(void* self, void* address, unsigned short port, const char* verificationName);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#doHandshake)
///
/// ``` QDtls* self, QUdpSocket* socket, const char* dgram ```
bool q_dtls_do_handshake2(void* self, void* socket, const char* dgram);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QDtls* self ```
const char* q_dtls_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QDtls* self, char* name ```
void q_dtls_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QDtls* self ```
bool q_dtls_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QDtls* self ```
bool q_dtls_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QDtls* self ```
bool q_dtls_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QDtls* self ```
bool q_dtls_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QDtls* self, bool b ```
bool q_dtls_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QDtls* self ```
QThread* q_dtls_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QDtls* self, QThread* thread ```
bool q_dtls_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDtls* self, int interval ```
int32_t q_dtls_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QDtls* self, int id ```
void q_dtls_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QDtls* self, enum Qt__TimerId id ```
void q_dtls_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QDtls* self ```
libqt_list /* of QObject* */ q_dtls_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QDtls* self, QObject* parent ```
void q_dtls_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QDtls* self, QObject* filterObj ```
void q_dtls_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QDtls* self, QObject* obj ```
void q_dtls_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_dtls_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDtls* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_dtls_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_dtls_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_dtls_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QDtls* self ```
void q_dtls_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QDtls* self ```
void q_dtls_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QDtls* self, const char* name, QVariant* value ```
bool q_dtls_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QDtls* self, const char* name ```
QVariant* q_dtls_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QDtls* self ```
const char** q_dtls_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QDtls* self ```
QBindingStorage* q_dtls_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QDtls* self ```
const QBindingStorage* q_dtls_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDtls* self ```
void q_dtls_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDtls* self, void (*slot)(QObject*) ```
void q_dtls_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QDtls* self ```
QObject* q_dtls_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QDtls* self, const char* classname ```
bool q_dtls_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QDtls* self ```
void q_dtls_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QDtls* self, QThread* thread, Disambiguated_t* param2 ```
bool q_dtls_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDtls* self, int interval, enum Qt__TimerType timerType ```
int32_t q_dtls_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_dtls_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDtls* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_dtls_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDtls* self, QObject* param1 ```
void q_dtls_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDtls* self, void (*slot)(QObject*, QObject*) ```
void q_dtls_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtls* self, QEvent* event ```
bool q_dtls_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtls* self, QEvent* event ```
bool q_dtls_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtls* self, bool (*slot)(QDtls*, QEvent*) ```
void q_dtls_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtls* self, QObject* watched, QEvent* event ```
bool q_dtls_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtls* self, QObject* watched, QEvent* event ```
bool q_dtls_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtls* self, bool (*slot)(QDtls*, QObject*, QEvent*) ```
void q_dtls_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtls* self, QTimerEvent* event ```
void q_dtls_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtls* self, QTimerEvent* event ```
void q_dtls_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtls* self, void (*slot)(QDtls*, QTimerEvent*) ```
void q_dtls_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtls* self, QChildEvent* event ```
void q_dtls_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtls* self, QChildEvent* event ```
void q_dtls_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtls* self, void (*slot)(QDtls*, QChildEvent*) ```
void q_dtls_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtls* self, QEvent* event ```
void q_dtls_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtls* self, QEvent* event ```
void q_dtls_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtls* self, void (*slot)(QDtls*, QEvent*) ```
void q_dtls_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtls* self, QMetaMethod* signal ```
void q_dtls_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtls* self, QMetaMethod* signal ```
void q_dtls_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtls* self, void (*slot)(QDtls*, QMetaMethod*) ```
void q_dtls_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtls* self, QMetaMethod* signal ```
void q_dtls_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtls* self, QMetaMethod* signal ```
void q_dtls_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtls* self, void (*slot)(QDtls*, QMetaMethod*) ```
void q_dtls_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtls* self ```
QObject* q_dtls_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtls* self ```
QObject* q_dtls_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtls* self, QObject* (*slot)() ```
void q_dtls_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtls* self ```
int32_t q_dtls_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtls* self ```
int32_t q_dtls_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtls* self, int32_t (*slot)() ```
void q_dtls_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtls* self, const char* signal ```
int32_t q_dtls_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtls* self, const char* signal ```
int32_t q_dtls_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtls* self, int32_t (*slot)(QDtls*, const char*) ```
void q_dtls_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtls* self, QMetaMethod* signal ```
bool q_dtls_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtls* self, QMetaMethod* signal ```
bool q_dtls_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtls* self, bool (*slot)(QDtls*, QMetaMethod*) ```
void q_dtls_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QDtls* self, void (*slot)(QObject*, const char*) ```
void q_dtls_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#dtor.QDtls)
///
/// Delete this object from C++ memory.
///
/// ``` QDtls* self ```
void q_dtls_delete(void* self);

/// https://doc.qt.io/qt-6/qdtlsclientverifier-generatorparameters.html

/// q_dtlsclientverifier__generatorparameters_new constructs a new QDtlsClientVerifier::GeneratorParameters object.
///
///
QDtlsClientVerifier__GeneratorParameters* q_dtlsclientverifier__generatorparameters_new();

/// q_dtlsclientverifier__generatorparameters_new2 constructs a new QDtlsClientVerifier::GeneratorParameters object.
///
/// ``` enum QCryptographicHash__Algorithm a, const char* s ```
QDtlsClientVerifier__GeneratorParameters* q_dtlsclientverifier__generatorparameters_new2(int64_t a, const char* s);

/// q_dtlsclientverifier__generatorparameters_new3 constructs a new QDtlsClientVerifier::GeneratorParameters object.
///
/// ``` QDtlsClientVerifier__GeneratorParameters* param1 ```
QDtlsClientVerifier__GeneratorParameters* q_dtlsclientverifier__generatorparameters_new3(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtlsclientverifier__generatorparameters.html#operator=)
///
/// ``` QDtlsClientVerifier__GeneratorParameters* self, QDtlsClientVerifier__GeneratorParameters* param1 ```
void q_dtlsclientverifier__generatorparameters_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qdtlsclientverifier::generatorparameters.html#dtor.QDtlsClientVerifier::GeneratorParameters)
///
/// Delete this object from C++ memory.
///
/// ``` QDtlsClientVerifier__GeneratorParameters* self ```
void q_dtlsclientverifier__generatorparameters_delete(void* self);

/// https://doc.qt.io/qt-6/qdtls.html#types

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

typedef enum {
    QDTLS_HANDSHAKESTATE_HANDSHAKENOTSTARTED = 0,
    QDTLS_HANDSHAKESTATE_HANDSHAKEINPROGRESS = 1,
    QDTLS_HANDSHAKESTATE_PEERVERIFICATIONFAILED = 2,
    QDTLS_HANDSHAKESTATE_HANDSHAKECOMPLETE = 3
} QDtls__HandshakeState;

#endif
