#include "libqanystringview.hpp"
#include "libqbytearrayview.hpp"
#include <string.h>
#include "libquuid.hpp"
#include "libquuid.h"

QUuid* q_uuid_new(void* other) {
    return QUuid_new((QUuid*)other);
}

QUuid* q_uuid_new2(void* other) {
    return QUuid_new2((QUuid*)other);
}

QUuid* q_uuid_new3() {
    return QUuid_new3();
}

QUuid* q_uuid_new4(uint32_t l, unsigned short w1, unsigned short w2, unsigned char b1, unsigned char b2, unsigned char b3, unsigned char b4, unsigned char b5, unsigned char b6, unsigned char b7, unsigned char b8) {
    return QUuid_new4(l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8);
}

QUuid* q_uuid_new5(void* id128) {
    return QUuid_new5((QUuid__Id128Bytes*)id128);
}

QUuid* q_uuid_new6(char* stringVal) {
    return QUuid_new6(stringVal);
}

QUuid* q_uuid_new7(void* param1) {
    return QUuid_new7((QUuid*)param1);
}

QUuid* q_uuid_new8(void* id128, int64_t order) {
    return QUuid_new8((QUuid__Id128Bytes*)id128, order);
}

void q_uuid_copy_assign(void* self, void* other) {
    QUuid_CopyAssign((QUuid*)self, (QUuid*)other);
}

void q_uuid_move_assign(void* self, void* other) {
    QUuid_MoveAssign((QUuid*)self, (QUuid*)other);
}

QUuid* q_uuid_from_string(char* stringVal) {
    return QUuid_FromString(stringVal);
}

const char* q_uuid_to_string(void* self) {
    libqt_string _str = QUuid_ToString((QUuid*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_uuid_to_byte_array(void* self) {
    libqt_string _str = QUuid_ToByteArray((QUuid*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUuid__Id128Bytes* q_uuid_to_bytes(void* self) {
    return QUuid_ToBytes((QUuid*)self);
}

char* q_uuid_to_rfc4122(void* self) {
    libqt_string _str = QUuid_ToRfc4122((QUuid*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUuid* q_uuid_from_bytes(void* bytes) {
    return QUuid_FromBytes(bytes);
}

QUuid* q_uuid_from_rfc4122(const char* param1) {
    libqt_strview param1_strview = qstrview(param1);
    return QUuid_FromRfc4122((QByteArrayView*)&param1_strview);
}

bool q_uuid_is_null(void* self) {
    return QUuid_IsNull((QUuid*)self);
}

QUuid* q_uuid_create_uuid() {
    return QUuid_CreateUuid();
}

QUuid* q_uuid_create_uuid_v5(void* ns, const char* baseData) {
    libqt_strview baseData_strview = qstrview(baseData);
    return QUuid_CreateUuidV5((QUuid*)ns, (QByteArrayView*)&baseData_strview);
}

QUuid* q_uuid_create_uuid_v3(void* ns, const char* baseData) {
    libqt_strview baseData_strview = qstrview(baseData);
    return QUuid_CreateUuidV3((QUuid*)ns, (QByteArrayView*)&baseData_strview);
}

int64_t q_uuid_variant(void* self) {
    return QUuid_Variant((QUuid*)self);
}

int64_t q_uuid_version(void* self) {
    return QUuid_Version((QUuid*)self);
}

const char* q_uuid_to_string1(void* self, int64_t mode) {
    libqt_string _str = QUuid_ToString1((QUuid*)self, mode);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_uuid_to_byte_array1(void* self, int64_t mode) {
    libqt_string _str = QUuid_ToByteArray1((QUuid*)self, mode);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUuid__Id128Bytes* q_uuid_to_bytes1(void* self, int64_t order) {
    return QUuid_ToBytes1((QUuid*)self, order);
}

QUuid* q_uuid_from_bytes2(void* bytes, int64_t order) {
    return QUuid_FromBytes2(bytes, order);
}

void q_uuid_delete(void* self) {
    QUuid_Delete((QUuid*)(self));
}

QUuid__Id128Bytes* q_uuid__id128bytes_new() {
    return QUuid__Id128Bytes_new();
}

QUuid__Id128Bytes* q_uuid__id128bytes_new2(void* param1) {
    return QUuid__Id128Bytes_new2((QUuid__Id128Bytes*)param1);
}

const char* q_uuid__id128bytes_to_q_byte_array_view(void* self) {
    QByteArrayView* _view = QUuid__Id128Bytes_ToQByteArrayView((QUuid__Id128Bytes*)self);
    libqt_strview _ret = {
        .ptr = QByteArrayView_Data(_view),
        .len = QByteArrayView_Size(_view),
    };
    return _ret.ptr;
}

void q_uuid__id128bytes_delete(void* self) {
    QUuid__Id128Bytes_Delete((QUuid__Id128Bytes*)(self));
}
