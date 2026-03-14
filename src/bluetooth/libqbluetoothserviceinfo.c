#include "libqbluetoothaddress.hpp"
#include "libqbluetoothdeviceinfo.hpp"
#include "libqbluetoothuuid.hpp"
#include "../libqvariant.hpp"
#include "libqbluetoothserviceinfo.hpp"
#include "libqbluetoothserviceinfo.h"

QBluetoothServiceInfo* q_bluetoothserviceinfo_new() {
    return QBluetoothServiceInfo_new();
}

QBluetoothServiceInfo* q_bluetoothserviceinfo_new2(void* other) {
    return QBluetoothServiceInfo_new2((QBluetoothServiceInfo*)other);
}

bool q_bluetoothserviceinfo_is_valid(void* self) {
    return QBluetoothServiceInfo_IsValid((QBluetoothServiceInfo*)self);
}

bool q_bluetoothserviceinfo_is_complete(void* self) {
    return QBluetoothServiceInfo_IsComplete((QBluetoothServiceInfo*)self);
}

void q_bluetoothserviceinfo_set_device(void* self, void* info) {
    QBluetoothServiceInfo_SetDevice((QBluetoothServiceInfo*)self, (QBluetoothDeviceInfo*)info);
}

QBluetoothDeviceInfo* q_bluetoothserviceinfo_device(void* self) {
    return QBluetoothServiceInfo_Device((QBluetoothServiceInfo*)self);
}

void q_bluetoothserviceinfo_set_attribute(void* self, unsigned short attributeId, void* value) {
    QBluetoothServiceInfo_SetAttribute((QBluetoothServiceInfo*)self, attributeId, (QVariant*)value);
}

void q_bluetoothserviceinfo_set_attribute2(void* self, unsigned short attributeId, void* value) {
    QBluetoothServiceInfo_SetAttribute2((QBluetoothServiceInfo*)self, attributeId, (QBluetoothUuid*)value);
}

void q_bluetoothserviceinfo_set_attribute3(void* self, unsigned short attributeId, void* value) {
    QBluetoothServiceInfo_SetAttribute3((QBluetoothServiceInfo*)self, attributeId, (QBluetoothServiceInfo__Sequence*)value);
}

void q_bluetoothserviceinfo_set_attribute4(void* self, unsigned short attributeId, void* value) {
    QBluetoothServiceInfo_SetAttribute4((QBluetoothServiceInfo*)self, attributeId, (QBluetoothServiceInfo__Alternative*)value);
}

QVariant* q_bluetoothserviceinfo_attribute(void* self, unsigned short attributeId) {
    return QBluetoothServiceInfo_Attribute((QBluetoothServiceInfo*)self, attributeId);
}

libqt_list /* of unsigned short */ q_bluetoothserviceinfo_attributes(void* self) {
    libqt_list _arr = QBluetoothServiceInfo_Attributes((QBluetoothServiceInfo*)self);
    return _arr;
}

bool q_bluetoothserviceinfo_contains(void* self, unsigned short attributeId) {
    return QBluetoothServiceInfo_Contains((QBluetoothServiceInfo*)self, attributeId);
}

void q_bluetoothserviceinfo_remove_attribute(void* self, unsigned short attributeId) {
    QBluetoothServiceInfo_RemoveAttribute((QBluetoothServiceInfo*)self, attributeId);
}

void q_bluetoothserviceinfo_set_service_name(void* self, const char* name) {
    QBluetoothServiceInfo_SetServiceName((QBluetoothServiceInfo*)self, qstring(name));
}

const char* q_bluetoothserviceinfo_service_name(void* self) {
    libqt_string _str = QBluetoothServiceInfo_ServiceName((QBluetoothServiceInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_bluetoothserviceinfo_set_service_description(void* self, const char* description) {
    QBluetoothServiceInfo_SetServiceDescription((QBluetoothServiceInfo*)self, qstring(description));
}

const char* q_bluetoothserviceinfo_service_description(void* self) {
    libqt_string _str = QBluetoothServiceInfo_ServiceDescription((QBluetoothServiceInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_bluetoothserviceinfo_set_service_provider(void* self, const char* provider) {
    QBluetoothServiceInfo_SetServiceProvider((QBluetoothServiceInfo*)self, qstring(provider));
}

const char* q_bluetoothserviceinfo_service_provider(void* self) {
    libqt_string _str = QBluetoothServiceInfo_ServiceProvider((QBluetoothServiceInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_bluetoothserviceinfo_socket_protocol(void* self) {
    return QBluetoothServiceInfo_SocketProtocol((QBluetoothServiceInfo*)self);
}

int32_t q_bluetoothserviceinfo_protocol_service_multiplexer(void* self) {
    return QBluetoothServiceInfo_ProtocolServiceMultiplexer((QBluetoothServiceInfo*)self);
}

int32_t q_bluetoothserviceinfo_server_channel(void* self) {
    return QBluetoothServiceInfo_ServerChannel((QBluetoothServiceInfo*)self);
}

QBluetoothServiceInfo__Sequence* q_bluetoothserviceinfo_protocol_descriptor(void* self, int32_t protocol) {
    return QBluetoothServiceInfo_ProtocolDescriptor((QBluetoothServiceInfo*)self, protocol);
}

void q_bluetoothserviceinfo_set_service_availability(void* self, unsigned char availability) {
    QBluetoothServiceInfo_SetServiceAvailability((QBluetoothServiceInfo*)self, availability);
}

unsigned char q_bluetoothserviceinfo_service_availability(void* self) {
    return QBluetoothServiceInfo_ServiceAvailability((QBluetoothServiceInfo*)self);
}

void q_bluetoothserviceinfo_set_service_uuid(void* self, void* uuid) {
    QBluetoothServiceInfo_SetServiceUuid((QBluetoothServiceInfo*)self, (QBluetoothUuid*)uuid);
}

QBluetoothUuid* q_bluetoothserviceinfo_service_uuid(void* self) {
    return QBluetoothServiceInfo_ServiceUuid((QBluetoothServiceInfo*)self);
}

libqt_list /* of QBluetoothUuid* */ q_bluetoothserviceinfo_service_class_uuids(void* self) {
    libqt_list _arr = QBluetoothServiceInfo_ServiceClassUuids((QBluetoothServiceInfo*)self);
    return _arr;
}

void q_bluetoothserviceinfo_operator_assign(void* self, void* other) {
    QBluetoothServiceInfo_OperatorAssign((QBluetoothServiceInfo*)self, (QBluetoothServiceInfo*)other);
}

bool q_bluetoothserviceinfo_is_registered(void* self) {
    return QBluetoothServiceInfo_IsRegistered((QBluetoothServiceInfo*)self);
}

bool q_bluetoothserviceinfo_register_service(void* self) {
    return QBluetoothServiceInfo_RegisterService((QBluetoothServiceInfo*)self);
}

bool q_bluetoothserviceinfo_unregister_service(void* self) {
    return QBluetoothServiceInfo_UnregisterService((QBluetoothServiceInfo*)self);
}

bool q_bluetoothserviceinfo_register_service1(void* self, void* localAdapter) {
    return QBluetoothServiceInfo_RegisterService1((QBluetoothServiceInfo*)self, (QBluetoothAddress*)localAdapter);
}

void q_bluetoothserviceinfo_delete(void* self) {
    QBluetoothServiceInfo_Delete((QBluetoothServiceInfo*)(self));
}

// Also inherits unprojectable QList<QVariant>

QBluetoothServiceInfo__Sequence* q_bluetoothserviceinfo__sequence_new() {
    return QBluetoothServiceInfo__Sequence_new();
}

QBluetoothServiceInfo__Sequence* q_bluetoothserviceinfo__sequence_new2(libqt_list /* of QVariant* */ list) {
    return QBluetoothServiceInfo__Sequence_new2(list);
}

QBluetoothServiceInfo__Sequence* q_bluetoothserviceinfo__sequence_new3(void* param1) {
    return QBluetoothServiceInfo__Sequence_new3((QBluetoothServiceInfo__Sequence*)param1);
}

void q_bluetoothserviceinfo__sequence_delete(void* self) {
    QBluetoothServiceInfo__Sequence_Delete((QBluetoothServiceInfo__Sequence*)(self));
}

// Also inherits unprojectable QList<QVariant>

QBluetoothServiceInfo__Alternative* q_bluetoothserviceinfo__alternative_new() {
    return QBluetoothServiceInfo__Alternative_new();
}

QBluetoothServiceInfo__Alternative* q_bluetoothserviceinfo__alternative_new2(libqt_list /* of QVariant* */ list) {
    return QBluetoothServiceInfo__Alternative_new2(list);
}

QBluetoothServiceInfo__Alternative* q_bluetoothserviceinfo__alternative_new3(void* param1) {
    return QBluetoothServiceInfo__Alternative_new3((QBluetoothServiceInfo__Alternative*)param1);
}

void q_bluetoothserviceinfo__alternative_delete(void* self) {
    QBluetoothServiceInfo__Alternative_Delete((QBluetoothServiceInfo__Alternative*)(self));
}
