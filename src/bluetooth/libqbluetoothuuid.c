#include "../libquuid.hpp"
#include "libqbluetoothuuid.hpp"
#include "libqbluetoothuuid.h"

QBluetoothUuid* q_bluetoothuuid_new(void* other) {
    return QBluetoothUuid_new((QBluetoothUuid*)other);
}

QBluetoothUuid* q_bluetoothuuid_new2() {
    return QBluetoothUuid_new2();
}

QBluetoothUuid* q_bluetoothuuid_new3(int32_t uuid) {
    return QBluetoothUuid_new3(uuid);
}

QBluetoothUuid* q_bluetoothuuid_new4(int32_t uuid) {
    return QBluetoothUuid_new4(uuid);
}

QBluetoothUuid* q_bluetoothuuid_new5(int32_t uuid) {
    return QBluetoothUuid_new5(uuid);
}

QBluetoothUuid* q_bluetoothuuid_new6(int32_t uuid) {
    return QBluetoothUuid_new6(uuid);
}

QBluetoothUuid* q_bluetoothuuid_new7(unsigned short uuid) {
    return QBluetoothUuid_new7(uuid);
}

QBluetoothUuid* q_bluetoothuuid_new8(uint32_t uuid) {
    return QBluetoothUuid_new8(uuid);
}

QBluetoothUuid* q_bluetoothuuid_new9(void* uuid) {
    return QBluetoothUuid_new9((QBluetoothUuid*)uuid);
}

QBluetoothUuid* q_bluetoothuuid_new10(void* uuid) {
    return QBluetoothUuid_new10((QUuid*)uuid);
}

void q_bluetoothuuid_copy_assign(void* self, void* other) {
    QBluetoothUuid_CopyAssign((QBluetoothUuid*)self, (QBluetoothUuid*)other);
}

void q_bluetoothuuid_operator_assign(void* self, void* other) {
    QBluetoothUuid_OperatorAssign((QBluetoothUuid*)self, (QBluetoothUuid*)other);
}

int32_t q_bluetoothuuid_minimum_size(void* self) {
    return QBluetoothUuid_MinimumSize((QBluetoothUuid*)self);
}

unsigned short q_bluetoothuuid_to_u_int16(void* self) {
    return QBluetoothUuid_ToUInt16((QBluetoothUuid*)self);
}

uint32_t q_bluetoothuuid_to_u_int32(void* self) {
    return QBluetoothUuid_ToUInt32((QBluetoothUuid*)self);
}

__uint128_t q_bluetoothuuid_to_u_int128(void* self) {
    return QBluetoothUuid_ToUInt128((QBluetoothUuid*)self);
}

const char* q_bluetoothuuid_service_class_to_string(int32_t uuid) {
    libqt_string _str = QBluetoothUuid_ServiceClassToString(uuid);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_bluetoothuuid_protocol_to_string(int32_t uuid) {
    libqt_string _str = QBluetoothUuid_ProtocolToString(uuid);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_bluetoothuuid_characteristic_to_string(int32_t uuid) {
    libqt_string _str = QBluetoothUuid_CharacteristicToString(uuid);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_bluetoothuuid_descriptor_to_string(int32_t uuid) {
    libqt_string _str = QBluetoothUuid_DescriptorToString(uuid);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

unsigned short q_bluetoothuuid_to_u_int161(void* self, bool* ok) {
    return QBluetoothUuid_ToUInt161((QBluetoothUuid*)self, (bool*)ok);
}

uint32_t q_bluetoothuuid_to_u_int321(void* self, bool* ok) {
    return QBluetoothUuid_ToUInt321((QBluetoothUuid*)self, (bool*)ok);
}

__uint128_t q_bluetoothuuid_to_u_int1281(void* self, int32_t order) {
    return QBluetoothUuid_ToUInt1281((QBluetoothUuid*)self, order);
}

QUuid* q_bluetoothuuid_from_string(const char* stringVal) {
    return QUuid_FromString(stringVal);
}

const char* q_bluetoothuuid_to_string(void* self) {
    libqt_string _str = QUuid_ToString((QUuid*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_bluetoothuuid_to_byte_array(void* self) {
    libqt_string _str = QUuid_ToByteArray((QUuid*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUuid__Id128Bytes* q_bluetoothuuid_to_bytes(void* self) {
    return QUuid_ToBytes((QUuid*)self);
}

char* q_bluetoothuuid_to_rfc4122(void* self) {
    libqt_string _str = QUuid_ToRfc4122((QUuid*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUuid* q_bluetoothuuid_from_bytes(void* bytes) {
    return QUuid_FromBytes(bytes);
}

QUuid* q_bluetoothuuid_from_rfc4122(char* param1) {
    return QUuid_FromRfc4122(qstring(param1));
}

bool q_bluetoothuuid_is_null(void* self) {
    return QUuid_IsNull((QUuid*)self);
}

QUuid* q_bluetoothuuid_create_uuid() {
    return QUuid_CreateUuid();
}

QUuid* q_bluetoothuuid_create_uuid_v5(void* ns, char* baseData) {
    return QUuid_CreateUuidV5((QUuid*)ns, qstring(baseData));
}

QUuid* q_bluetoothuuid_create_uuid_v3(void* ns, char* baseData) {
    return QUuid_CreateUuidV3((QUuid*)ns, qstring(baseData));
}

int32_t q_bluetoothuuid_variant(void* self) {
    return QUuid_Variant((QUuid*)self);
}

int32_t q_bluetoothuuid_version(void* self) {
    return QUuid_Version((QUuid*)self);
}

uint32_t q_bluetoothuuid_data1(void* self) {
    return QUuid_Data1((QUuid*)self);
}

void q_bluetoothuuid_set_data1(void* self, uint32_t data1) {
    QUuid_SetData1((QUuid*)self, data1);
}

unsigned short q_bluetoothuuid_data2(void* self) {
    return QUuid_Data2((QUuid*)self);
}

void q_bluetoothuuid_set_data2(void* self, unsigned short data2) {
    QUuid_SetData2((QUuid*)self, data2);
}

unsigned short q_bluetoothuuid_data3(void* self) {
    return QUuid_Data3((QUuid*)self);
}

void q_bluetoothuuid_set_data3(void* self, unsigned short data3) {
    QUuid_SetData3((QUuid*)self, data3);
}

const char* q_bluetoothuuid_to_string1(void* self, int32_t mode) {
    libqt_string _str = QUuid_ToString1((QUuid*)self, mode);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_bluetoothuuid_to_byte_array1(void* self, int32_t mode) {
    libqt_string _str = QUuid_ToByteArray1((QUuid*)self, mode);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUuid__Id128Bytes* q_bluetoothuuid_to_bytes1(void* self, int32_t order) {
    return QUuid_ToBytes1((QUuid*)self, order);
}

QUuid* q_bluetoothuuid_from_bytes2(void* bytes, int32_t order) {
    return QUuid_FromBytes2(bytes, order);
}

void q_bluetoothuuid_delete(void* self) {
    QBluetoothUuid_Delete((QBluetoothUuid*)(self));
}
