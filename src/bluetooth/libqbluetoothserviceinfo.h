#pragma once
#ifndef SRC_BLUETOOTH_QT6C_LIBQBLUETOOTHSERVICEINFO_H
#define SRC_BLUETOOTH_QT6C_LIBQBLUETOOTHSERVICEINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html)

/// q_bluetoothserviceinfo_new constructs a new QBluetoothServiceInfo object.
///
QBluetoothServiceInfo* q_bluetoothserviceinfo_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html)

/// q_bluetoothserviceinfo_new2 constructs a new QBluetoothServiceInfo object.
///
/// @param other QBluetoothServiceInfo*
///
QBluetoothServiceInfo* q_bluetoothserviceinfo_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#isValid)
///
/// @param self QBluetoothServiceInfo*
///
bool q_bluetoothserviceinfo_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#isComplete)
///
/// @param self QBluetoothServiceInfo*
///
bool q_bluetoothserviceinfo_is_complete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#setDevice)
///
/// @param self QBluetoothServiceInfo*
/// @param info QBluetoothDeviceInfo*
///
void q_bluetoothserviceinfo_set_device(void* self, void* info);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#device)
///
/// @param self QBluetoothServiceInfo*
///
QBluetoothDeviceInfo* q_bluetoothserviceinfo_device(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#setAttribute)
///
/// @param self QBluetoothServiceInfo*
/// @param attributeId uint16_t
/// @param value QVariant*
///
void q_bluetoothserviceinfo_set_attribute(void* self, uint16_t attributeId, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#setAttribute)
///
/// @param self QBluetoothServiceInfo*
/// @param attributeId uint16_t
/// @param value QBluetoothUuid*
///
void q_bluetoothserviceinfo_set_attribute2(void* self, uint16_t attributeId, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#setAttribute)
///
/// @param self QBluetoothServiceInfo*
/// @param attributeId uint16_t
/// @param value QBluetoothServiceInfo__Sequence*
///
void q_bluetoothserviceinfo_set_attribute3(void* self, uint16_t attributeId, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#setAttribute)
///
/// @param self QBluetoothServiceInfo*
/// @param attributeId uint16_t
/// @param value QBluetoothServiceInfo__Alternative*
///
void q_bluetoothserviceinfo_set_attribute4(void* self, uint16_t attributeId, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#attribute)
///
/// @param self QBluetoothServiceInfo*
/// @param attributeId uint16_t
///
QVariant* q_bluetoothserviceinfo_attribute(void* self, uint16_t attributeId);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#attributes)
///
/// @param self QBluetoothServiceInfo*
///
/// @return libqt_list of unsigned short
///
libqt_list q_bluetoothserviceinfo_attributes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#contains)
///
/// @param self QBluetoothServiceInfo*
/// @param attributeId uint16_t
///
bool q_bluetoothserviceinfo_contains(void* self, uint16_t attributeId);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#removeAttribute)
///
/// @param self QBluetoothServiceInfo*
/// @param attributeId uint16_t
///
void q_bluetoothserviceinfo_remove_attribute(void* self, uint16_t attributeId);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#setServiceName)
///
/// @param self QBluetoothServiceInfo*
/// @param name const char*
///
void q_bluetoothserviceinfo_set_service_name(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#serviceName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QBluetoothServiceInfo*
///
const char* q_bluetoothserviceinfo_service_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#setServiceDescription)
///
/// @param self QBluetoothServiceInfo*
/// @param description const char*
///
void q_bluetoothserviceinfo_set_service_description(void* self, const char* description);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#serviceDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QBluetoothServiceInfo*
///
const char* q_bluetoothserviceinfo_service_description(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#setServiceProvider)
///
/// @param self QBluetoothServiceInfo*
/// @param provider const char*
///
void q_bluetoothserviceinfo_set_service_provider(void* self, const char* provider);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#serviceProvider)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QBluetoothServiceInfo*
///
const char* q_bluetoothserviceinfo_service_provider(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#socketProtocol)
///
/// @param self QBluetoothServiceInfo*
///
/// @return enum QBluetoothServiceInfo__Protocol
///
int32_t q_bluetoothserviceinfo_socket_protocol(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#protocolServiceMultiplexer)
///
/// @param self QBluetoothServiceInfo*
///
int32_t q_bluetoothserviceinfo_protocol_service_multiplexer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#serverChannel)
///
/// @param self QBluetoothServiceInfo*
///
int32_t q_bluetoothserviceinfo_server_channel(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#protocolDescriptor)
///
/// @param self QBluetoothServiceInfo*
/// @param protocol enum QBluetoothUuid__ProtocolUuid
///
QBluetoothServiceInfo__Sequence* q_bluetoothserviceinfo_protocol_descriptor(void* self, int32_t protocol);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#setServiceAvailability)
///
/// @param self QBluetoothServiceInfo*
/// @param availability uint8_t
///
void q_bluetoothserviceinfo_set_service_availability(void* self, uint8_t availability);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#serviceAvailability)
///
/// @param self QBluetoothServiceInfo*
///
uint8_t q_bluetoothserviceinfo_service_availability(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#setServiceUuid)
///
/// @param self QBluetoothServiceInfo*
/// @param uuid QBluetoothUuid*
///
void q_bluetoothserviceinfo_set_service_uuid(void* self, void* uuid);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#serviceUuid)
///
/// @param self QBluetoothServiceInfo*
///
QBluetoothUuid* q_bluetoothserviceinfo_service_uuid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#serviceClassUuids)
///
/// @param self QBluetoothServiceInfo*
///
/// @return libqt_list of QBluetoothUuid*
///
libqt_list q_bluetoothserviceinfo_service_class_uuids(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#operator-eq)
///
/// @param self QBluetoothServiceInfo*
/// @param other QBluetoothServiceInfo*
///
void q_bluetoothserviceinfo_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#isRegistered)
///
/// @param self QBluetoothServiceInfo*
///
bool q_bluetoothserviceinfo_is_registered(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#registerService)
///
/// @param self QBluetoothServiceInfo*
///
bool q_bluetoothserviceinfo_register_service(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#unregisterService)
///
/// @param self QBluetoothServiceInfo*
///
bool q_bluetoothserviceinfo_unregister_service(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#registerService)
///
/// @param self QBluetoothServiceInfo*
/// @param localAdapter QBluetoothAddress*
///
bool q_bluetoothserviceinfo_register_service1(void* self, void* localAdapter);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#dtor.QBluetoothServiceInfo)
///
/// Delete this object from C++ memory.
///
/// @param self QBluetoothServiceInfo*
///
void q_bluetoothserviceinfo_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo-sequence.html)

/// q_bluetoothserviceinfo__sequence_new constructs a new QBluetoothServiceInfo::Sequence object.
///
QBluetoothServiceInfo__Sequence* q_bluetoothserviceinfo__sequence_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo-sequence.html)

/// q_bluetoothserviceinfo__sequence_new2 constructs a new QBluetoothServiceInfo::Sequence object.
///
/// @param list libqt_list of QVariant*
///
QBluetoothServiceInfo__Sequence* q_bluetoothserviceinfo__sequence_new2(libqt_list list);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo-sequence.html)

/// q_bluetoothserviceinfo__sequence_new3 constructs a new QBluetoothServiceInfo::Sequence object.
///
/// @param param1 QBluetoothServiceInfo__Sequence*
///
QBluetoothServiceInfo__Sequence* q_bluetoothserviceinfo__sequence_new3(void* param1);

/// Delete this object from C++ memory.
///
/// @param self QBluetoothServiceInfo__Sequence*
///
void q_bluetoothserviceinfo__sequence_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo-alternative.html)

/// q_bluetoothserviceinfo__alternative_new constructs a new QBluetoothServiceInfo::Alternative object.
///
QBluetoothServiceInfo__Alternative* q_bluetoothserviceinfo__alternative_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo-alternative.html)

/// q_bluetoothserviceinfo__alternative_new2 constructs a new QBluetoothServiceInfo::Alternative object.
///
/// @param list libqt_list of QVariant*
///
QBluetoothServiceInfo__Alternative* q_bluetoothserviceinfo__alternative_new2(libqt_list list);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo-alternative.html)

/// q_bluetoothserviceinfo__alternative_new3 constructs a new QBluetoothServiceInfo::Alternative object.
///
/// @param param1 QBluetoothServiceInfo__Alternative*
///
QBluetoothServiceInfo__Alternative* q_bluetoothserviceinfo__alternative_new3(void* param1);

/// Delete this object from C++ memory.
///
/// @param self QBluetoothServiceInfo__Alternative*
///
void q_bluetoothserviceinfo__alternative_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#public-types)

typedef enum {
    QBLUETOOTHSERVICEINFO_ATTRIBUTEID_SERVICERECORDHANDLE = 0,
    QBLUETOOTHSERVICEINFO_ATTRIBUTEID_SERVICECLASSIDS = 1,
    QBLUETOOTHSERVICEINFO_ATTRIBUTEID_SERVICERECORDSTATE = 2,
    QBLUETOOTHSERVICEINFO_ATTRIBUTEID_SERVICEID = 3,
    QBLUETOOTHSERVICEINFO_ATTRIBUTEID_PROTOCOLDESCRIPTORLIST = 4,
    QBLUETOOTHSERVICEINFO_ATTRIBUTEID_BROWSEGROUPLIST = 5,
    QBLUETOOTHSERVICEINFO_ATTRIBUTEID_LANGUAGEBASEATTRIBUTEIDLIST = 6,
    QBLUETOOTHSERVICEINFO_ATTRIBUTEID_SERVICEINFOTIMETOLIVE = 7,
    QBLUETOOTHSERVICEINFO_ATTRIBUTEID_SERVICEAVAILABILITY = 8,
    QBLUETOOTHSERVICEINFO_ATTRIBUTEID_BLUETOOTHPROFILEDESCRIPTORLIST = 9,
    QBLUETOOTHSERVICEINFO_ATTRIBUTEID_DOCUMENTATIONURL = 10,
    QBLUETOOTHSERVICEINFO_ATTRIBUTEID_CLIENTEXECUTABLEURL = 11,
    QBLUETOOTHSERVICEINFO_ATTRIBUTEID_ICONURL = 12,
    QBLUETOOTHSERVICEINFO_ATTRIBUTEID_ADDITIONALPROTOCOLDESCRIPTORLIST = 13,
    QBLUETOOTHSERVICEINFO_ATTRIBUTEID_PRIMARYLANGUAGEBASE = 256,
    QBLUETOOTHSERVICEINFO_ATTRIBUTEID_SERVICENAME = 256,
    QBLUETOOTHSERVICEINFO_ATTRIBUTEID_SERVICEDESCRIPTION = 257,
    QBLUETOOTHSERVICEINFO_ATTRIBUTEID_SERVICEPROVIDER = 258
} QBluetoothServiceInfo__AttributeId;

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserviceinfo.html#public-types)

typedef enum {
    QBLUETOOTHSERVICEINFO_PROTOCOL_UNKNOWNPROTOCOL = 0,
    QBLUETOOTHSERVICEINFO_PROTOCOL_L2CAPPROTOCOL = 1,
    QBLUETOOTHSERVICEINFO_PROTOCOL_RFCOMMPROTOCOL = 2
} QBluetoothServiceInfo__Protocol;

#endif
