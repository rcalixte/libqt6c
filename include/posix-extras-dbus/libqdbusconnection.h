#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUS_QT6C_LIBQDBUSCONNECTION_H
#define SRC_POSIX_EXTRAS_DBUS_QT6C_LIBQDBUSCONNECTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qdbusconnection.html

/// q_dbusconnection_new constructs a new QDBusConnection object.
///
/// @param name const char*
QDBusConnection* q_dbusconnection_new(const char* name);

/// q_dbusconnection_new2 constructs a new QDBusConnection object.
///
/// @param other QDBusConnection*
QDBusConnection* q_dbusconnection_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#operator-eq)
///
/// @param self QDBusConnection*
/// @param other QDBusConnection*
void q_dbusconnection_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#swap)
///
/// @param self QDBusConnection*
/// @param other QDBusConnection*
void q_dbusconnection_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#isConnected)
///
/// @param self QDBusConnection*
bool q_dbusconnection_is_connected(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#baseService)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDBusConnection*
const char* q_dbusconnection_base_service(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#lastError)
///
/// @param self QDBusConnection*
QDBusError* q_dbusconnection_last_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDBusConnection*
const char* q_dbusconnection_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#connectionCapabilities)
///
/// @param self QDBusConnection*
///
/// @return flag of enum QDBusConnection__ConnectionCapability
int32_t q_dbusconnection_connection_capabilities(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#send)
///
/// @param self QDBusConnection*
/// @param message QDBusMessage*
bool q_dbusconnection_send(void* self, void* message);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#callWithCallback)
///
/// @param self QDBusConnection*
/// @param message QDBusMessage*
/// @param receiver QObject*
/// @param returnMethod const char*
/// @param errorMethod const char*
bool q_dbusconnection_call_with_callback(void* self, void* message, void* receiver, const char* returnMethod, const char* errorMethod);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#callWithCallback)
///
/// @param self QDBusConnection*
/// @param message QDBusMessage*
/// @param receiver QObject*
/// @param slot const char*
bool q_dbusconnection_call_with_callback2(void* self, void* message, void* receiver, const char* slot);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#call)
///
/// @param self QDBusConnection*
/// @param message QDBusMessage*
QDBusMessage* q_dbusconnection_call(void* self, void* message);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#asyncCall)
///
/// @param self QDBusConnection*
/// @param message QDBusMessage*
QDBusPendingCall* q_dbusconnection_async_call(void* self, void* message);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#connect)
///
/// @param self QDBusConnection*
/// @param service const char*
/// @param path const char*
/// @param interface const char*
/// @param name const char*
/// @param receiver QObject*
/// @param slot const char*
bool q_dbusconnection_connect(void* self, const char* service, const char* path, const char* interface, const char* name, void* receiver, const char* slot);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#connect)
///
/// @param self QDBusConnection*
/// @param service const char*
/// @param path const char*
/// @param interface const char*
/// @param name const char*
/// @param signature const char*
/// @param receiver QObject*
/// @param slot const char*
bool q_dbusconnection_connect2(void* self, const char* service, const char* path, const char* interface, const char* name, const char* signature, void* receiver, const char* slot);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#connect)
///
/// @param self QDBusConnection*
/// @param service const char*
/// @param path const char*
/// @param interface const char*
/// @param name const char*
/// @param argumentMatch const char**
/// @param signature const char*
/// @param receiver QObject*
/// @param slot const char*
bool q_dbusconnection_connect3(void* self, const char* service, const char* path, const char* interface, const char* name, const char* argumentMatch[static 1], const char* signature, void* receiver, const char* slot);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#disconnect)
///
/// @param self QDBusConnection*
/// @param service const char*
/// @param path const char*
/// @param interface const char*
/// @param name const char*
/// @param receiver QObject*
/// @param slot const char*
bool q_dbusconnection_disconnect(void* self, const char* service, const char* path, const char* interface, const char* name, void* receiver, const char* slot);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#disconnect)
///
/// @param self QDBusConnection*
/// @param service const char*
/// @param path const char*
/// @param interface const char*
/// @param name const char*
/// @param signature const char*
/// @param receiver QObject*
/// @param slot const char*
bool q_dbusconnection_disconnect2(void* self, const char* service, const char* path, const char* interface, const char* name, const char* signature, void* receiver, const char* slot);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#disconnect)
///
/// @param self QDBusConnection*
/// @param service const char*
/// @param path const char*
/// @param interface const char*
/// @param name const char*
/// @param argumentMatch const char**
/// @param signature const char*
/// @param receiver QObject*
/// @param slot const char*
bool q_dbusconnection_disconnect3(void* self, const char* service, const char* path, const char* interface, const char* name, const char* argumentMatch[static 1], const char* signature, void* receiver, const char* slot);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#registerObject)
///
/// @param self QDBusConnection*
/// @param path const char*
/// @param object QObject*
bool q_dbusconnection_register_object(void* self, const char* path, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#registerObject)
///
/// @param self QDBusConnection*
/// @param path const char*
/// @param interface const char*
/// @param object QObject*
bool q_dbusconnection_register_object2(void* self, const char* path, const char* interface, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#unregisterObject)
///
/// @param self QDBusConnection*
/// @param path const char*
void q_dbusconnection_unregister_object(void* self, const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#objectRegisteredAt)
///
/// @param self QDBusConnection*
/// @param path const char*
QObject* q_dbusconnection_object_registered_at(void* self, const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#registerVirtualObject)
///
/// @param self QDBusConnection*
/// @param path const char*
/// @param object QDBusVirtualObject*
bool q_dbusconnection_register_virtual_object(void* self, const char* path, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#registerService)
///
/// @param self QDBusConnection*
/// @param serviceName const char*
bool q_dbusconnection_register_service(void* self, const char* serviceName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#unregisterService)
///
/// @param self QDBusConnection*
/// @param serviceName const char*
bool q_dbusconnection_unregister_service(void* self, const char* serviceName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#interface)
///
/// @param self QDBusConnection*
QDBusConnectionInterface* q_dbusconnection_interface(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#internalPointer)
///
/// @param self QDBusConnection*
void* q_dbusconnection_internal_pointer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#connectToBus)
///
/// @param type enum QDBusConnection__BusType
/// @param name const char*
QDBusConnection* q_dbusconnection_connect_to_bus(int32_t type, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#connectToBus)
///
/// @param address const char*
/// @param name const char*
QDBusConnection* q_dbusconnection_connect_to_bus2(const char* address, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#connectToPeer)
///
/// @param address const char*
/// @param name const char*
QDBusConnection* q_dbusconnection_connect_to_peer(const char* address, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#disconnectFromBus)
///
/// @param name const char*
void q_dbusconnection_disconnect_from_bus(const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#disconnectFromPeer)
///
/// @param name const char*
void q_dbusconnection_disconnect_from_peer(const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#localMachineId)
///
/// Caller is responsible for freeing the returned memory
///
char* q_dbusconnection_local_machine_id();

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#sessionBus)
///
QDBusConnection* q_dbusconnection_session_bus();

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#systemBus)
///
QDBusConnection* q_dbusconnection_system_bus();

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#callWithCallback)
///
/// @param self QDBusConnection*
/// @param message QDBusMessage*
/// @param receiver QObject*
/// @param returnMethod const char*
/// @param errorMethod const char*
/// @param timeout int
bool q_dbusconnection_call_with_callback5(void* self, void* message, void* receiver, const char* returnMethod, const char* errorMethod, int timeout);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#callWithCallback)
///
/// @param self QDBusConnection*
/// @param message QDBusMessage*
/// @param receiver QObject*
/// @param slot const char*
/// @param timeout int
bool q_dbusconnection_call_with_callback4(void* self, void* message, void* receiver, const char* slot, int timeout);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#call)
///
/// @param self QDBusConnection*
/// @param message QDBusMessage*
/// @param mode enum QDBus__CallMode
QDBusMessage* q_dbusconnection_call2(void* self, void* message, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#call)
///
/// @param self QDBusConnection*
/// @param message QDBusMessage*
/// @param mode enum QDBus__CallMode
/// @param timeout int
QDBusMessage* q_dbusconnection_call3(void* self, void* message, int32_t mode, int timeout);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#asyncCall)
///
/// @param self QDBusConnection*
/// @param message QDBusMessage*
/// @param timeout int
QDBusPendingCall* q_dbusconnection_async_call2(void* self, void* message, int timeout);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#registerObject)
///
/// @param self QDBusConnection*
/// @param path const char*
/// @param object QObject*
/// @param options flag of enum QDBusConnection__RegisterOption
bool q_dbusconnection_register_object3(void* self, const char* path, void* object, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#registerObject)
///
/// @param self QDBusConnection*
/// @param path const char*
/// @param interface const char*
/// @param object QObject*
/// @param options flag of enum QDBusConnection__RegisterOption
bool q_dbusconnection_register_object4(void* self, const char* path, const char* interface, void* object, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#unregisterObject)
///
/// @param self QDBusConnection*
/// @param path const char*
/// @param mode enum QDBusConnection__UnregisterMode
void q_dbusconnection_unregister_object2(void* self, const char* path, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#registerVirtualObject)
///
/// @param self QDBusConnection*
/// @param path const char*
/// @param object QDBusVirtualObject*
/// @param options enum QDBusConnection__VirtualObjectRegisterOption
bool q_dbusconnection_register_virtual_object3(void* self, const char* path, void* object, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#dtor.QDBusConnection)
///
/// Delete this object from C++ memory.
///
/// @param self QDBusConnection*
void q_dbusconnection_delete(void* self);

/// https://doc.qt.io/qt-6/qdbusconnection.html#types

typedef enum {
    QDBUS_CALLMODE_NOBLOCK = 0,
    QDBUS_CALLMODE_BLOCK = 1,
    QDBUS_CALLMODE_BLOCKWITHGUI = 2,
    QDBUS_CALLMODE_AUTODETECT = 3
} QDBus__CallMode;

typedef enum {
    QDBUSCONNECTION_BUSTYPE_SESSIONBUS = 0,
    QDBUSCONNECTION_BUSTYPE_SYSTEMBUS = 1,
    QDBUSCONNECTION_BUSTYPE_ACTIVATIONBUS = 2
} QDBusConnection__BusType;

typedef enum {
    QDBUSCONNECTION_REGISTEROPTION_EXPORTADAPTORS = 1,
    QDBUSCONNECTION_REGISTEROPTION_EXPORTSCRIPTABLESLOTS = 16,
    QDBUSCONNECTION_REGISTEROPTION_EXPORTSCRIPTABLESIGNALS = 32,
    QDBUSCONNECTION_REGISTEROPTION_EXPORTSCRIPTABLEPROPERTIES = 64,
    QDBUSCONNECTION_REGISTEROPTION_EXPORTSCRIPTABLEINVOKABLES = 128,
    QDBUSCONNECTION_REGISTEROPTION_EXPORTSCRIPTABLECONTENTS = 240,
    QDBUSCONNECTION_REGISTEROPTION_EXPORTNONSCRIPTABLESLOTS = 256,
    QDBUSCONNECTION_REGISTEROPTION_EXPORTNONSCRIPTABLESIGNALS = 512,
    QDBUSCONNECTION_REGISTEROPTION_EXPORTNONSCRIPTABLEPROPERTIES = 1024,
    QDBUSCONNECTION_REGISTEROPTION_EXPORTNONSCRIPTABLEINVOKABLES = 2048,
    QDBUSCONNECTION_REGISTEROPTION_EXPORTNONSCRIPTABLECONTENTS = 3840,
    QDBUSCONNECTION_REGISTEROPTION_EXPORTALLSLOTS = 272,
    QDBUSCONNECTION_REGISTEROPTION_EXPORTALLSIGNALS = 544,
    QDBUSCONNECTION_REGISTEROPTION_EXPORTALLPROPERTIES = 1088,
    QDBUSCONNECTION_REGISTEROPTION_EXPORTALLINVOKABLES = 2176,
    QDBUSCONNECTION_REGISTEROPTION_EXPORTALLCONTENTS = 4080,
    QDBUSCONNECTION_REGISTEROPTION_EXPORTALLSIGNAL = 544,
    QDBUSCONNECTION_REGISTEROPTION_EXPORTCHILDOBJECTS = 4096
} QDBusConnection__RegisterOption;

typedef enum {
    QDBUSCONNECTION_UNREGISTERMODE_UNREGISTERNODE = 0,
    QDBUSCONNECTION_UNREGISTERMODE_UNREGISTERTREE = 1
} QDBusConnection__UnregisterMode;

typedef enum {
    QDBUSCONNECTION_VIRTUALOBJECTREGISTEROPTION_SINGLENODE = 0,
    QDBUSCONNECTION_VIRTUALOBJECTREGISTEROPTION_SUBPATH = 1
} QDBusConnection__VirtualObjectRegisterOption;

typedef enum {
    QDBUSCONNECTION_CONNECTIONCAPABILITY_UNIXFILEDESCRIPTORPASSING = 1
} QDBusConnection__ConnectionCapability;

#endif
