#include "libqdbusconnectioninterface.hpp"
#include "libqdbuserror.hpp"
#include "libqdbusmessage.hpp"
#include "libqdbuspendingcall.hpp"
#include "libqdbusvirtualobject.hpp"
#include "../libqobject.hpp"
#include "libqdbusconnection.hpp"
#include "libqdbusconnection.h"

QDBusConnection* q_dbusconnection_new(const char* name) {
    return QDBusConnection_new(qstring(name));
}

QDBusConnection* q_dbusconnection_new2(void* other) {
    return QDBusConnection_new2((QDBusConnection*)other);
}

void q_dbusconnection_operator_assign(void* self, void* other) {
    QDBusConnection_OperatorAssign((QDBusConnection*)self, (QDBusConnection*)other);
}

void q_dbusconnection_swap(void* self, void* other) {
    QDBusConnection_Swap((QDBusConnection*)self, (QDBusConnection*)other);
}

bool q_dbusconnection_is_connected(void* self) {
    return QDBusConnection_IsConnected((QDBusConnection*)self);
}

const char* q_dbusconnection_base_service(void* self) {
    libqt_string _str = QDBusConnection_BaseService((QDBusConnection*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDBusError* q_dbusconnection_last_error(void* self) {
    return QDBusConnection_LastError((QDBusConnection*)self);
}

const char* q_dbusconnection_name(void* self) {
    libqt_string _str = QDBusConnection_Name((QDBusConnection*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_dbusconnection_connection_capabilities(void* self) {
    return QDBusConnection_ConnectionCapabilities((QDBusConnection*)self);
}

bool q_dbusconnection_send(void* self, void* message) {
    return QDBusConnection_Send((QDBusConnection*)self, (QDBusMessage*)message);
}

bool q_dbusconnection_call_with_callback(void* self, void* message, void* receiver, const char* returnMethod, const char* errorMethod) {
    return QDBusConnection_CallWithCallback((QDBusConnection*)self, (QDBusMessage*)message, (QObject*)receiver, returnMethod, errorMethod);
}

bool q_dbusconnection_call_with_callback2(void* self, void* message, void* receiver, const char* slot) {
    return QDBusConnection_CallWithCallback2((QDBusConnection*)self, (QDBusMessage*)message, (QObject*)receiver, slot);
}

QDBusMessage* q_dbusconnection_call(void* self, void* message) {
    return QDBusConnection_Call((QDBusConnection*)self, (QDBusMessage*)message);
}

QDBusPendingCall* q_dbusconnection_async_call(void* self, void* message) {
    return QDBusConnection_AsyncCall((QDBusConnection*)self, (QDBusMessage*)message);
}

bool q_dbusconnection_connect(void* self, const char* service, const char* path, const char* interface, const char* name, void* receiver, const char* slot) {
    return QDBusConnection_Connect((QDBusConnection*)self, qstring(service), qstring(path), qstring(interface), qstring(name), (QObject*)receiver, slot);
}

bool q_dbusconnection_connect2(void* self, const char* service, const char* path, const char* interface, const char* name, const char* signature, void* receiver, const char* slot) {
    return QDBusConnection_Connect2((QDBusConnection*)self, qstring(service), qstring(path), qstring(interface), qstring(name), qstring(signature), (QObject*)receiver, slot);
}

bool q_dbusconnection_connect3(void* self, const char* service, const char* path, const char* interface, const char* name, const char* argumentMatch[], const char* signature, void* receiver, const char* slot) {
    size_t argumentMatch_len = libqt_strv_length(argumentMatch);
    libqt_string* argumentMatch_qstr = (libqt_string*)malloc(argumentMatch_len * sizeof(libqt_string));
    if (argumentMatch_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_dbusconnection_connect3");
        abort();
    }
    for (size_t i = 0; i < argumentMatch_len; ++i) {
        argumentMatch_qstr[i] = qstring(argumentMatch[i]);
    }
    libqt_list argumentMatch_list = qlist(argumentMatch_qstr, argumentMatch_len);
    bool _out = QDBusConnection_Connect3((QDBusConnection*)self, qstring(service), qstring(path), qstring(interface), qstring(name), argumentMatch_list, qstring(signature), (QObject*)receiver, slot);
    free(argumentMatch_qstr);
    return _out;
}

bool q_dbusconnection_disconnect(void* self, const char* service, const char* path, const char* interface, const char* name, void* receiver, const char* slot) {
    return QDBusConnection_Disconnect((QDBusConnection*)self, qstring(service), qstring(path), qstring(interface), qstring(name), (QObject*)receiver, slot);
}

bool q_dbusconnection_disconnect2(void* self, const char* service, const char* path, const char* interface, const char* name, const char* signature, void* receiver, const char* slot) {
    return QDBusConnection_Disconnect2((QDBusConnection*)self, qstring(service), qstring(path), qstring(interface), qstring(name), qstring(signature), (QObject*)receiver, slot);
}

bool q_dbusconnection_disconnect3(void* self, const char* service, const char* path, const char* interface, const char* name, const char* argumentMatch[], const char* signature, void* receiver, const char* slot) {
    size_t argumentMatch_len = libqt_strv_length(argumentMatch);
    libqt_string* argumentMatch_qstr = (libqt_string*)malloc(argumentMatch_len * sizeof(libqt_string));
    if (argumentMatch_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_dbusconnection_disconnect3");
        abort();
    }
    for (size_t i = 0; i < argumentMatch_len; ++i) {
        argumentMatch_qstr[i] = qstring(argumentMatch[i]);
    }
    libqt_list argumentMatch_list = qlist(argumentMatch_qstr, argumentMatch_len);
    bool _out = QDBusConnection_Disconnect3((QDBusConnection*)self, qstring(service), qstring(path), qstring(interface), qstring(name), argumentMatch_list, qstring(signature), (QObject*)receiver, slot);
    free(argumentMatch_qstr);
    return _out;
}

bool q_dbusconnection_register_object(void* self, const char* path, void* object) {
    return QDBusConnection_RegisterObject((QDBusConnection*)self, qstring(path), (QObject*)object);
}

bool q_dbusconnection_register_object2(void* self, const char* path, const char* interface, void* object) {
    return QDBusConnection_RegisterObject2((QDBusConnection*)self, qstring(path), qstring(interface), (QObject*)object);
}

void q_dbusconnection_unregister_object(void* self, const char* path) {
    QDBusConnection_UnregisterObject((QDBusConnection*)self, qstring(path));
}

QObject* q_dbusconnection_object_registered_at(void* self, const char* path) {
    return QDBusConnection_ObjectRegisteredAt((QDBusConnection*)self, qstring(path));
}

bool q_dbusconnection_register_virtual_object(void* self, const char* path, void* object) {
    return QDBusConnection_RegisterVirtualObject((QDBusConnection*)self, qstring(path), (QDBusVirtualObject*)object);
}

bool q_dbusconnection_register_service(void* self, const char* serviceName) {
    return QDBusConnection_RegisterService((QDBusConnection*)self, qstring(serviceName));
}

bool q_dbusconnection_unregister_service(void* self, const char* serviceName) {
    return QDBusConnection_UnregisterService((QDBusConnection*)self, qstring(serviceName));
}

QDBusConnectionInterface* q_dbusconnection_interface(void* self) {
    return QDBusConnection_Interface((QDBusConnection*)self);
}

void* q_dbusconnection_internal_pointer(void* self) {
    return QDBusConnection_InternalPointer((QDBusConnection*)self);
}

QDBusConnection* q_dbusconnection_connect_to_bus(int32_t type, const char* name) {
    return QDBusConnection_ConnectToBus(type, qstring(name));
}

QDBusConnection* q_dbusconnection_connect_to_bus2(const char* address, const char* name) {
    return QDBusConnection_ConnectToBus2(qstring(address), qstring(name));
}

QDBusConnection* q_dbusconnection_connect_to_peer(const char* address, const char* name) {
    return QDBusConnection_ConnectToPeer(qstring(address), qstring(name));
}

void q_dbusconnection_disconnect_from_bus(const char* name) {
    QDBusConnection_DisconnectFromBus(qstring(name));
}

void q_dbusconnection_disconnect_from_peer(const char* name) {
    QDBusConnection_DisconnectFromPeer(qstring(name));
}

char* q_dbusconnection_local_machine_id() {
    libqt_string _str = QDBusConnection_LocalMachineId();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDBusConnection* q_dbusconnection_session_bus() {
    return QDBusConnection_SessionBus();
}

QDBusConnection* q_dbusconnection_system_bus() {
    return QDBusConnection_SystemBus();
}

bool q_dbusconnection_call_with_callback5(void* self, void* message, void* receiver, const char* returnMethod, const char* errorMethod, int timeout) {
    return QDBusConnection_CallWithCallback5((QDBusConnection*)self, (QDBusMessage*)message, (QObject*)receiver, returnMethod, errorMethod, timeout);
}

bool q_dbusconnection_call_with_callback4(void* self, void* message, void* receiver, const char* slot, int timeout) {
    return QDBusConnection_CallWithCallback4((QDBusConnection*)self, (QDBusMessage*)message, (QObject*)receiver, slot, timeout);
}

QDBusMessage* q_dbusconnection_call2(void* self, void* message, int32_t mode) {
    return QDBusConnection_Call2((QDBusConnection*)self, (QDBusMessage*)message, mode);
}

QDBusMessage* q_dbusconnection_call3(void* self, void* message, int32_t mode, int timeout) {
    return QDBusConnection_Call3((QDBusConnection*)self, (QDBusMessage*)message, mode, timeout);
}

QDBusPendingCall* q_dbusconnection_async_call2(void* self, void* message, int timeout) {
    return QDBusConnection_AsyncCall2((QDBusConnection*)self, (QDBusMessage*)message, timeout);
}

bool q_dbusconnection_register_object3(void* self, const char* path, void* object, int32_t options) {
    return QDBusConnection_RegisterObject3((QDBusConnection*)self, qstring(path), (QObject*)object, options);
}

bool q_dbusconnection_register_object4(void* self, const char* path, const char* interface, void* object, int32_t options) {
    return QDBusConnection_RegisterObject4((QDBusConnection*)self, qstring(path), qstring(interface), (QObject*)object, options);
}

void q_dbusconnection_unregister_object2(void* self, const char* path, int32_t mode) {
    QDBusConnection_UnregisterObject2((QDBusConnection*)self, qstring(path), mode);
}

bool q_dbusconnection_register_virtual_object3(void* self, const char* path, void* object, int32_t options) {
    return QDBusConnection_RegisterVirtualObject3((QDBusConnection*)self, qstring(path), (QDBusVirtualObject*)object, options);
}

void q_dbusconnection_delete(void* self) {
    QDBusConnection_Delete((QDBusConnection*)(self));
}
