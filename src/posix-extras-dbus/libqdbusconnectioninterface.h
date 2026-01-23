#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUS_QT6C_LIBQDBUSCONNECTIONINTERFACE_H
#define SRC_POSIX_EXTRAS_DBUS_QT6C_LIBQDBUSCONNECTIONINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QDBusConnectionInterface*
///
const QMetaObject* q_dbusconnectioninterface_meta_object(void* self);

/// @param self QDBusConnectionInterface*
/// @param param1 const char*
///
void* q_dbusconnectioninterface_metacast(void* self, const char* param1);

/// @param self QDBusConnectionInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_dbusconnectioninterface_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_dbusconnectioninterface_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#serviceRegistered)
///
/// @param self QDBusConnectionInterface*
/// @param service const char*
///
void q_dbusconnectioninterface_service_registered(void* self, const char* service);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#serviceRegistered)
///
/// @param self QDBusConnectionInterface*
/// @param callback void func(QDBusConnectionInterface* self, const char* service)
///
void q_dbusconnectioninterface_on_service_registered(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#serviceUnregistered)
///
/// @param self QDBusConnectionInterface*
/// @param service const char*
///
void q_dbusconnectioninterface_service_unregistered(void* self, const char* service);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#serviceUnregistered)
///
/// @param self QDBusConnectionInterface*
/// @param callback void func(QDBusConnectionInterface* self, const char* service)
///
void q_dbusconnectioninterface_on_service_unregistered(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#serviceOwnerChanged)
///
/// @param self QDBusConnectionInterface*
/// @param name const char*
/// @param oldOwner const char*
/// @param newOwner const char*
///
void q_dbusconnectioninterface_service_owner_changed(void* self, const char* name, const char* oldOwner, const char* newOwner);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#serviceOwnerChanged)
///
/// @param self QDBusConnectionInterface*
/// @param callback void func(QDBusConnectionInterface* self, const char* name, const char* oldOwner, const char* newOwner)
///
void q_dbusconnectioninterface_on_service_owner_changed(void* self, void (*callback)(void*, const char*, const char*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#callWithCallbackFailed)
///
/// @param self QDBusConnectionInterface*
/// @param error QDBusError*
/// @param call QDBusMessage*
///
void q_dbusconnectioninterface_call_with_callback_failed(void* self, void* error, void* call);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#callWithCallbackFailed)
///
/// @param self QDBusConnectionInterface*
/// @param callback void func(QDBusConnectionInterface* self, QDBusError* error, QDBusMessage* call)
///
void q_dbusconnectioninterface_on_call_with_callback_failed(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#NameAcquired)
///
/// @param self QDBusConnectionInterface*
/// @param param1 const char*
///
void q_dbusconnectioninterface_name_acquired(void* self, const char* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#NameAcquired)
///
/// @param self QDBusConnectionInterface*
/// @param callback void func(QDBusConnectionInterface* self, const char* param1)
///
void q_dbusconnectioninterface_on_name_acquired(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#NameLost)
///
/// @param self QDBusConnectionInterface*
/// @param param1 const char*
///
void q_dbusconnectioninterface_name_lost(void* self, const char* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#NameLost)
///
/// @param self QDBusConnectionInterface*
/// @param callback void func(QDBusConnectionInterface* self, const char* param1)
///
void q_dbusconnectioninterface_on_name_lost(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#NameOwnerChanged)
///
/// @param self QDBusConnectionInterface*
/// @param param1 const char*
/// @param param2 const char*
/// @param param3 const char*
///
void q_dbusconnectioninterface_name_owner_changed(void* self, const char* param1, const char* param2, const char* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#NameOwnerChanged)
///
/// @param self QDBusConnectionInterface*
/// @param callback void func(QDBusConnectionInterface* self, const char* param1, const char* param2, const char* param3)
///
void q_dbusconnectioninterface_on_name_owner_changed(void* self, void (*callback)(void*, const char*, const char*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_dbusconnectioninterface_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_dbusconnectioninterface_tr3(const char* s, const char* c, int n);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#isValid)
///
/// @param self QDBusConnectionInterface*
///
bool q_dbusconnectioninterface_is_valid(void* self);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#connection)
///
/// @param self QDBusConnectionInterface*
///
QDBusConnection* q_dbusconnectioninterface_connection(void* self);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#service)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDBusConnectionInterface*
///
const char* q_dbusconnectioninterface_service(void* self);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#path)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDBusConnectionInterface*
///
const char* q_dbusconnectioninterface_path(void* self);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#interface)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDBusConnectionInterface*
///
const char* q_dbusconnectioninterface_interface(void* self);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#lastError)
///
/// @param self QDBusConnectionInterface*
///
QDBusError* q_dbusconnectioninterface_last_error(void* self);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#setTimeout)
///
/// @param self QDBusConnectionInterface*
/// @param timeout int
///
void q_dbusconnectioninterface_set_timeout(void* self, int timeout);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#timeout)
///
/// @param self QDBusConnectionInterface*
///
int32_t q_dbusconnectioninterface_timeout(void* self);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#setInteractiveAuthorizationAllowed)
///
/// @param self QDBusConnectionInterface*
/// @param enable bool
///
void q_dbusconnectioninterface_set_interactive_authorization_allowed(void* self, bool enable);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#isInteractiveAuthorizationAllowed)
///
/// @param self QDBusConnectionInterface*
///
bool q_dbusconnectioninterface_is_interactive_authorization_allowed(void* self);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#call)
///
/// @param self QDBusConnectionInterface*
/// @param method const char*
///
QDBusMessage* q_dbusconnectioninterface_call(void* self, const char* method);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#call)
///
/// @param self QDBusConnectionInterface*
/// @param mode enum QDBus__CallMode
/// @param method const char*
///
QDBusMessage* q_dbusconnectioninterface_call2(void* self, int32_t mode, const char* method);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#callWithArgumentList)
///
/// @param self QDBusConnectionInterface*
/// @param mode enum QDBus__CallMode
/// @param method const char*
/// @param args libqt_list of QVariant*
///
QDBusMessage* q_dbusconnectioninterface_call_with_argument_list(void* self, int32_t mode, const char* method, libqt_list /* of QVariant* */ args);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#asyncCall)
///
/// @param self QDBusConnectionInterface*
/// @param method const char*
///
QDBusPendingCall* q_dbusconnectioninterface_async_call(void* self, const char* method);

/// Inherited from QDBusAbstractInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#asyncCallWithArgumentList)
///
/// @param self QDBusConnectionInterface*
/// @param method const char*
/// @param args libqt_list of QVariant*
///
QDBusPendingCall* q_dbusconnectioninterface_async_call_with_argument_list(void* self, const char* method, libqt_list /* of QVariant* */ args);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QDBusConnectionInterface*
/// @param event QEvent*
///
bool q_dbusconnectioninterface_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QDBusConnectionInterface*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_dbusconnectioninterface_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDBusConnectionInterface*
///
const char* q_dbusconnectioninterface_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDBusConnectionInterface*
/// @param name char*
///
void q_dbusconnectioninterface_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QDBusConnectionInterface*
///
bool q_dbusconnectioninterface_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QDBusConnectionInterface*
///
bool q_dbusconnectioninterface_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QDBusConnectionInterface*
///
bool q_dbusconnectioninterface_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QDBusConnectionInterface*
///
bool q_dbusconnectioninterface_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDBusConnectionInterface*
/// @param b bool
///
bool q_dbusconnectioninterface_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QDBusConnectionInterface*
///
QThread* q_dbusconnectioninterface_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDBusConnectionInterface*
/// @param thread QThread*
///
bool q_dbusconnectioninterface_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDBusConnectionInterface*
/// @param interval int
///
int32_t q_dbusconnectioninterface_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDBusConnectionInterface*
/// @param time int64_t of nanoseconds
///
int32_t q_dbusconnectioninterface_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDBusConnectionInterface*
/// @param id int
///
void q_dbusconnectioninterface_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDBusConnectionInterface*
/// @param id enum Qt__TimerId
///
void q_dbusconnectioninterface_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QDBusConnectionInterface*
///
/// @return libqt_list of QObject*
///
libqt_list q_dbusconnectioninterface_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QDBusConnectionInterface*
/// @param parent QObject*
///
void q_dbusconnectioninterface_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDBusConnectionInterface*
/// @param filterObj QObject*
///
void q_dbusconnectioninterface_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDBusConnectionInterface*
/// @param obj QObject*
///
void q_dbusconnectioninterface_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_dbusconnectioninterface_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDBusConnectionInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_dbusconnectioninterface_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_dbusconnectioninterface_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_dbusconnectioninterface_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QDBusConnectionInterface*
///
void q_dbusconnectioninterface_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QDBusConnectionInterface*
///
void q_dbusconnectioninterface_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDBusConnectionInterface*
/// @param name const char*
/// @param value QVariant*
///
bool q_dbusconnectioninterface_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QDBusConnectionInterface*
/// @param name const char*
///
QVariant* q_dbusconnectioninterface_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDBusConnectionInterface*
///
const char** q_dbusconnectioninterface_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDBusConnectionInterface*
///
QBindingStorage* q_dbusconnectioninterface_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDBusConnectionInterface*
///
const QBindingStorage* q_dbusconnectioninterface_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDBusConnectionInterface*
///
void q_dbusconnectioninterface_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDBusConnectionInterface*
/// @param callback void func(QDBusConnectionInterface* self)
///
void q_dbusconnectioninterface_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QDBusConnectionInterface*
///
QObject* q_dbusconnectioninterface_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QDBusConnectionInterface*
/// @param classname const char*
///
bool q_dbusconnectioninterface_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDBusConnectionInterface*
///
void q_dbusconnectioninterface_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDBusConnectionInterface*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_dbusconnectioninterface_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDBusConnectionInterface*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_dbusconnectioninterface_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDBusConnectionInterface*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_dbusconnectioninterface_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_dbusconnectioninterface_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDBusConnectionInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_dbusconnectioninterface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDBusConnectionInterface*
/// @param param1 QObject*
///
void q_dbusconnectioninterface_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDBusConnectionInterface*
/// @param callback void func(QDBusConnectionInterface* self, QObject* param1)
///
void q_dbusconnectioninterface_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QDBusConnectionInterface*
/// @param callback void func(QDBusConnectionInterface* self, const char* objectName)
///
void q_dbusconnectioninterface_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#public-types)

typedef enum {
    QDBUSCONNECTIONINTERFACE_SERVICEQUEUEOPTIONS_DONTQUEUESERVICE = 0,
    QDBUSCONNECTIONINTERFACE_SERVICEQUEUEOPTIONS_QUEUESERVICE = 1,
    QDBUSCONNECTIONINTERFACE_SERVICEQUEUEOPTIONS_REPLACEEXISTINGSERVICE = 2
} QDBusConnectionInterface__ServiceQueueOptions;

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#public-types)

typedef enum {
    QDBUSCONNECTIONINTERFACE_SERVICEREPLACEMENTOPTIONS_DONTALLOWREPLACEMENT = 0,
    QDBUSCONNECTIONINTERFACE_SERVICEREPLACEMENTOPTIONS_ALLOWREPLACEMENT = 1
} QDBusConnectionInterface__ServiceReplacementOptions;

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#public-types)

typedef enum {
    QDBUSCONNECTIONINTERFACE_REGISTERSERVICEREPLY_SERVICENOTREGISTERED = 0,
    QDBUSCONNECTIONINTERFACE_REGISTERSERVICEREPLY_SERVICEREGISTERED = 1,
    QDBUSCONNECTIONINTERFACE_REGISTERSERVICEREPLY_SERVICEQUEUED = 2
} QDBusConnectionInterface__RegisterServiceReply;

#endif
