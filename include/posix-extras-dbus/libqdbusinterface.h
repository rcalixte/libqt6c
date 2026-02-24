#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUS_QT6C_LIBQDBUSINTERFACE_H
#define SRC_POSIX_EXTRAS_DBUS_QT6C_LIBQDBUSINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusinterface.html)

/// q_dbusinterface_new constructs a new QDBusInterface object.
///
/// @param service const char*
/// @param path const char*
///
QDBusInterface* q_dbusinterface_new(const char* service, const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusinterface.html)

/// q_dbusinterface_new2 constructs a new QDBusInterface object.
///
/// @param service const char*
/// @param path const char*
/// @param interface const char*
///
QDBusInterface* q_dbusinterface_new2(const char* service, const char* path, const char* interface);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusinterface.html)

/// q_dbusinterface_new3 constructs a new QDBusInterface object.
///
/// @param service const char*
/// @param path const char*
/// @param interface const char*
/// @param connection QDBusConnection*
///
QDBusInterface* q_dbusinterface_new3(const char* service, const char* path, const char* interface, void* connection);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusinterface.html)

/// q_dbusinterface_new4 constructs a new QDBusInterface object.
///
/// @param service const char*
/// @param path const char*
/// @param interface const char*
/// @param connection QDBusConnection*
/// @param parent QObject*
///
QDBusInterface* q_dbusinterface_new4(const char* service, const char* path, const char* interface, void* connection, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QDBusInterface*
///
const QMetaObject* q_dbusinterface_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QDBusInterface*
/// @param callback const QMetaObject* func()
///
void q_dbusinterface_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_dbusinterface_super_meta_object` instead
///
#define q_dbusinterface_qbase_meta_object q_dbusinterface_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QDBusInterface*
///
const QMetaObject* q_dbusinterface_super_meta_object(void* self);

/// @param self QDBusInterface*
/// @param param1 const char*
///
void* q_dbusinterface_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QDBusInterface*
/// @param callback void* func(QDBusInterface* self, const char* param1)
///
void q_dbusinterface_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_dbusinterface_super_metacast` instead
///
#define q_dbusinterface_qbase_metacast q_dbusinterface_super_metacast

/// Base class method implementation
///
/// @param self QDBusInterface*
/// @param param1 const char*
///
void* q_dbusinterface_super_metacast(void* self, const char* param1);

/// @param self QDBusInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_dbusinterface_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QDBusInterface*
/// @param callback int32_t func(QDBusInterface* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_dbusinterface_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `q_dbusinterface_super_metacall` instead
///
#define q_dbusinterface_qbase_metacall q_dbusinterface_super_metacall

/// Base class method implementation
///
/// @param self QDBusInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_dbusinterface_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_dbusinterface_tr(const char* s);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#isValid)
///
/// @param self QDBusInterface*
///
bool q_dbusinterface_is_valid(void* self);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#connection)
///
/// @param self QDBusInterface*
///
QDBusConnection* q_dbusinterface_connection(void* self);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#service)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDBusInterface*
///
const char* q_dbusinterface_service(void* self);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#path)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDBusInterface*
///
const char* q_dbusinterface_path(void* self);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#interface)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDBusInterface*
///
const char* q_dbusinterface_interface(void* self);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#lastError)
///
/// @param self QDBusInterface*
///
QDBusError* q_dbusinterface_last_error(void* self);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#setTimeout)
///
/// @param self QDBusInterface*
/// @param timeout int
///
void q_dbusinterface_set_timeout(void* self, int timeout);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#timeout)
///
/// @param self QDBusInterface*
///
int32_t q_dbusinterface_timeout(void* self);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#setInteractiveAuthorizationAllowed)
///
/// @param self QDBusInterface*
/// @param enable bool
///
void q_dbusinterface_set_interactive_authorization_allowed(void* self, bool enable);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#isInteractiveAuthorizationAllowed)
///
/// @param self QDBusInterface*
///
bool q_dbusinterface_is_interactive_authorization_allowed(void* self);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#call)
///
/// @param self QDBusInterface*
/// @param method const char*
///
QDBusMessage* q_dbusinterface_call(void* self, const char* method);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#call)
///
/// @param self QDBusInterface*
/// @param mode enum QDBus__CallMode
/// @param method const char*
///
QDBusMessage* q_dbusinterface_call2(void* self, int32_t mode, const char* method);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#callWithArgumentList)
///
/// @param self QDBusInterface*
/// @param mode enum QDBus__CallMode
/// @param method const char*
/// @param args libqt_list of QVariant*
///
QDBusMessage* q_dbusinterface_call_with_argument_list(void* self, int32_t mode, const char* method, libqt_list args);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#callWithCallback)
///
/// @param self QDBusInterface*
/// @param method const char*
/// @param args libqt_list of QVariant*
/// @param receiver QObject*
/// @param member const char*
/// @param errorSlot const char*
///
bool q_dbusinterface_call_with_callback(void* self, const char* method, libqt_list args, void* receiver, const char* member, const char* errorSlot);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#callWithCallback)
///
/// @param self QDBusInterface*
/// @param method const char*
/// @param args libqt_list of QVariant*
/// @param receiver QObject*
/// @param member const char*
///
bool q_dbusinterface_call_with_callback2(void* self, const char* method, libqt_list args, void* receiver, const char* member);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#asyncCall)
///
/// @param self QDBusInterface*
/// @param method const char*
///
QDBusPendingCall* q_dbusinterface_async_call(void* self, const char* method);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#asyncCallWithArgumentList)
///
/// @param self QDBusInterface*
/// @param method const char*
/// @param args libqt_list of QVariant*
///
QDBusPendingCall* q_dbusinterface_async_call_with_argument_list(void* self, const char* method, libqt_list args);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_dbusinterface_tr2(const char* s, const char* c);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_dbusinterface_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDBusInterface*
///
const char* q_dbusinterface_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDBusInterface*
/// @param name const char*
///
void q_dbusinterface_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QDBusInterface*
///
bool q_dbusinterface_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QDBusInterface*
///
bool q_dbusinterface_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QDBusInterface*
///
bool q_dbusinterface_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QDBusInterface*
///
bool q_dbusinterface_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDBusInterface*
/// @param b bool
///
bool q_dbusinterface_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QDBusInterface*
///
QThread* q_dbusinterface_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDBusInterface*
/// @param thread QThread*
///
bool q_dbusinterface_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDBusInterface*
/// @param interval int
///
int32_t q_dbusinterface_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDBusInterface*
/// @param time int64_t of nanoseconds
///
int32_t q_dbusinterface_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDBusInterface*
/// @param id int
///
void q_dbusinterface_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDBusInterface*
/// @param id enum Qt__TimerId
///
void q_dbusinterface_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QDBusInterface*
///
/// @return libqt_list of QObject*
///
libqt_list q_dbusinterface_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QDBusInterface*
/// @param parent QObject*
///
void q_dbusinterface_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDBusInterface*
/// @param filterObj QObject*
///
void q_dbusinterface_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDBusInterface*
/// @param obj QObject*
///
void q_dbusinterface_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_dbusinterface_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_dbusinterface_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDBusInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_dbusinterface_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_dbusinterface_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_dbusinterface_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDBusInterface*
///
bool q_dbusinterface_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDBusInterface*
/// @param receiver QObject*
///
bool q_dbusinterface_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_dbusinterface_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QDBusInterface*
///
void q_dbusinterface_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QDBusInterface*
///
void q_dbusinterface_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDBusInterface*
/// @param name const char*
/// @param value QVariant*
///
bool q_dbusinterface_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QDBusInterface*
/// @param name const char*
///
QVariant* q_dbusinterface_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDBusInterface*
///
const char** q_dbusinterface_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDBusInterface*
///
QBindingStorage* q_dbusinterface_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDBusInterface*
///
const QBindingStorage* q_dbusinterface_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDBusInterface*
///
void q_dbusinterface_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDBusInterface*
/// @param callback void func(QDBusInterface* self)
///
void q_dbusinterface_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QDBusInterface*
///
QObject* q_dbusinterface_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QDBusInterface*
/// @param classname const char*
///
bool q_dbusinterface_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDBusInterface*
///
void q_dbusinterface_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDBusInterface*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_dbusinterface_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDBusInterface*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_dbusinterface_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_dbusinterface_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_dbusinterface_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDBusInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_dbusinterface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDBusInterface*
/// @param signal const char*
///
bool q_dbusinterface_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDBusInterface*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_dbusinterface_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDBusInterface*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_dbusinterface_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDBusInterface*
/// @param receiver QObject*
/// @param member const char*
///
bool q_dbusinterface_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDBusInterface*
/// @param param1 QObject*
///
void q_dbusinterface_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDBusInterface*
/// @param callback void func(QDBusInterface* self, QObject* param1)
///
void q_dbusinterface_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusInterface*
/// @param signal QMetaMethod*
///
void q_dbusinterface_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_dbusinterface_super_connect_notify` instead
///
#define q_dbusinterface_qbase_connect_notify q_dbusinterface_super_connect_notify

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusInterface*
/// @param signal QMetaMethod*
///
void q_dbusinterface_super_connect_notify(void* self, void* signal);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusInterface*
/// @param callback void func(QDBusInterface* self, QMetaMethod* signal)
///
void q_dbusinterface_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusInterface*
/// @param signal QMetaMethod*
///
void q_dbusinterface_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_dbusinterface_super_disconnect_notify` instead
///
#define q_dbusinterface_qbase_disconnect_notify q_dbusinterface_super_disconnect_notify

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusInterface*
/// @param signal QMetaMethod*
///
void q_dbusinterface_super_disconnect_notify(void* self, void* signal);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusInterface*
/// @param callback void func(QDBusInterface* self, QMetaMethod* signal)
///
void q_dbusinterface_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusInterface*
/// @param event QEvent*
///
bool q_dbusinterface_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_dbusinterface_super_event` instead
///
#define q_dbusinterface_qbase_event q_dbusinterface_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusInterface*
/// @param event QEvent*
///
bool q_dbusinterface_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusInterface*
/// @param callback bool func(QDBusInterface* self, QEvent* event)
///
void q_dbusinterface_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusInterface*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_dbusinterface_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `q_dbusinterface_super_event_filter` instead
///
#define q_dbusinterface_qbase_event_filter q_dbusinterface_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusInterface*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_dbusinterface_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusInterface*
/// @param callback bool func(QDBusInterface* self, QObject* watched, QEvent* event)
///
void q_dbusinterface_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusInterface*
/// @param event QTimerEvent*
///
void q_dbusinterface_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_dbusinterface_super_timer_event` instead
///
#define q_dbusinterface_qbase_timer_event q_dbusinterface_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusInterface*
/// @param event QTimerEvent*
///
void q_dbusinterface_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusInterface*
/// @param callback void func(QDBusInterface* self, QTimerEvent* event)
///
void q_dbusinterface_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusInterface*
/// @param event QChildEvent*
///
void q_dbusinterface_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_dbusinterface_super_child_event` instead
///
#define q_dbusinterface_qbase_child_event q_dbusinterface_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusInterface*
/// @param event QChildEvent*
///
void q_dbusinterface_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusInterface*
/// @param callback void func(QDBusInterface* self, QChildEvent* event)
///
void q_dbusinterface_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusInterface*
/// @param event QEvent*
///
void q_dbusinterface_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_dbusinterface_super_custom_event` instead
///
#define q_dbusinterface_qbase_custom_event q_dbusinterface_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusInterface*
/// @param event QEvent*
///
void q_dbusinterface_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusInterface*
/// @param callback void func(QDBusInterface* self, QEvent* event)
///
void q_dbusinterface_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#internalPropGet)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusInterface*
/// @param propname const char*
///
QVariant* q_dbusinterface_internal_prop_get(void* self, const char* propname);

/// @warning DEPRECATED: Use `q_dbusinterface_super_internal_prop_get` instead
///
#define q_dbusinterface_qbase_internal_prop_get q_dbusinterface_super_internal_prop_get

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#internalPropGet)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusInterface*
/// @param propname const char*
///
QVariant* q_dbusinterface_super_internal_prop_get(void* self, const char* propname);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#internalPropGet)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusInterface*
/// @param callback QVariant* func(QDBusInterface* self, const char* propname)
///
void q_dbusinterface_on_internal_prop_get(void* self, QVariant* (*callback)(void*, const char*));

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#internalPropSet)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusInterface*
/// @param propname const char*
/// @param value QVariant*
///
void q_dbusinterface_internal_prop_set(void* self, const char* propname, void* value);

/// @warning DEPRECATED: Use `q_dbusinterface_super_internal_prop_set` instead
///
#define q_dbusinterface_qbase_internal_prop_set q_dbusinterface_super_internal_prop_set

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#internalPropSet)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusInterface*
/// @param propname const char*
/// @param value QVariant*
///
void q_dbusinterface_super_internal_prop_set(void* self, const char* propname, void* value);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#internalPropSet)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusInterface*
/// @param callback void func(QDBusInterface* self, const char* propname, QVariant* value)
///
void q_dbusinterface_on_internal_prop_set(void* self, void (*callback)(void*, const char*, void*));

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#internalConstCall)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusInterface*
/// @param mode enum QDBus__CallMode
/// @param method const char*
///
QDBusMessage* q_dbusinterface_internal_const_call(void* self, int32_t mode, const char* method);

/// @warning DEPRECATED: Use `q_dbusinterface_super_internal_const_call` instead
///
#define q_dbusinterface_qbase_internal_const_call q_dbusinterface_super_internal_const_call

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#internalConstCall)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusInterface*
/// @param mode enum QDBus__CallMode
/// @param method const char*
///
QDBusMessage* q_dbusinterface_super_internal_const_call(void* self, int32_t mode, const char* method);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#internalConstCall)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusInterface*
/// @param callback QDBusMessage* func(QDBusInterface* self, enum QDBus__CallMode mode, const char* method)
///
void q_dbusinterface_on_internal_const_call(void* self, QDBusMessage* (*callback)(void*, int32_t, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusInterface*
///
QObject* q_dbusinterface_sender(void* self);

/// @warning DEPRECATED: Use `q_dbusinterface_super_sender` instead
///
#define q_dbusinterface_qbase_sender q_dbusinterface_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusInterface*
///
QObject* q_dbusinterface_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusInterface*
/// @param callback QObject* func()
///
void q_dbusinterface_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusInterface*
///
int32_t q_dbusinterface_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_dbusinterface_super_sender_signal_index` instead
///
#define q_dbusinterface_qbase_sender_signal_index q_dbusinterface_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusInterface*
///
int32_t q_dbusinterface_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusInterface*
/// @param callback int32_t func()
///
void q_dbusinterface_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusInterface*
/// @param signal const char*
///
int32_t q_dbusinterface_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_dbusinterface_super_receivers` instead
///
#define q_dbusinterface_qbase_receivers q_dbusinterface_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusInterface*
/// @param signal const char*
///
int32_t q_dbusinterface_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusInterface*
/// @param callback int32_t func(QDBusInterface* self, const char* signal)
///
void q_dbusinterface_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusInterface*
/// @param signal QMetaMethod*
///
bool q_dbusinterface_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_dbusinterface_super_is_signal_connected` instead
///
#define q_dbusinterface_qbase_is_signal_connected q_dbusinterface_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusInterface*
/// @param signal QMetaMethod*
///
bool q_dbusinterface_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusInterface*
/// @param callback bool func(QDBusInterface* self, QMetaMethod* signal)
///
void q_dbusinterface_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QDBusInterface*
/// @param callback void func(QDBusInterface* self, const char* objectName)
///
void q_dbusinterface_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusinterface.html#dtor.QDBusInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QDBusInterface*
///
void q_dbusinterface_delete(void* self);

#endif
