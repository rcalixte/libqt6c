#pragma once
#ifndef SRC_QT6C_LIBQUUID_H
#define SRC_QT6C_LIBQUUID_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html)

/// q_uuid_new constructs a new QUuid object.
///
/// @param other QUuid*
///
QUuid* q_uuid_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html)

/// q_uuid_new2 constructs a new QUuid object and invalidates the source QUuid object.
///
/// @param other QUuid*
///
QUuid* q_uuid_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html)

/// q_uuid_new3 constructs a new QUuid object.
///
QUuid* q_uuid_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html)

/// q_uuid_new4 constructs a new QUuid object.
///
/// @param l uint32_t
/// @param w1 unsigned short
/// @param w2 unsigned short
/// @param b1 unsigned char
/// @param b2 unsigned char
/// @param b3 unsigned char
/// @param b4 unsigned char
/// @param b5 unsigned char
/// @param b6 unsigned char
/// @param b7 unsigned char
/// @param b8 unsigned char
///
QUuid* q_uuid_new4(uint32_t l, unsigned short w1, unsigned short w2, unsigned char b1, unsigned char b2, unsigned char b3, unsigned char b4, unsigned char b5, unsigned char b6, unsigned char b7, unsigned char b8);

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html)

/// q_uuid_new5 constructs a new QUuid object.
///
/// @param id128 QUuid__Id128Bytes*
///
QUuid* q_uuid_new5(void* id128);

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html)

/// q_uuid_new6 constructs a new QUuid object.
///
/// @param stringVal char*
///
QUuid* q_uuid_new6(char* stringVal);

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html)

/// q_uuid_new7 constructs a new QUuid object.
///
/// @param param1 QUuid*
///
QUuid* q_uuid_new7(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html)

/// q_uuid_new8 constructs a new QUuid object.
///
/// @param id128 QUuid__Id128Bytes*
/// @param order enum QSysInfo__Endian
///
QUuid* q_uuid_new8(void* id128, int32_t order);

/// q_uuid_copy_assign shallow copies `other` into `self`.
///
/// @param self QUuid*
/// @param other QUuid*
///
void q_uuid_copy_assign(void* self, void* other);

/// q_uuid_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QUuid*
/// @param other QUuid*
///
void q_uuid_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html#fromString)
///
/// @param stringVal char*
///
QUuid* q_uuid_from_string(char* stringVal);

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QUuid*
///
const char* q_uuid_to_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toByteArray)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QUuid*
///
char* q_uuid_to_byte_array(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toBytes)
///
/// @param self QUuid*
///
QUuid__Id128Bytes* q_uuid_to_bytes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toRfc4122)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QUuid*
///
char* q_uuid_to_rfc4122(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html#fromBytes)
///
/// @param bytes void*
///
QUuid* q_uuid_from_bytes(void* bytes);

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html#fromRfc4122)
///
/// @param param1 const char*
///
QUuid* q_uuid_from_rfc4122(const char* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html#isNull)
///
/// @param self QUuid*
///
bool q_uuid_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html#createUuid)
///
QUuid* q_uuid_create_uuid();

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html#createUuidV5)
///
/// @param ns QUuid*
/// @param baseData const char*
///
QUuid* q_uuid_create_uuid_v5(void* ns, const char* baseData);

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html#createUuidV3)
///
/// @param ns QUuid*
/// @param baseData const char*
///
QUuid* q_uuid_create_uuid_v3(void* ns, const char* baseData);

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html#variant)
///
/// @param self QUuid*
///
/// @return enum QUuid__Variant
///
int32_t q_uuid_variant(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html#version)
///
/// @param self QUuid*
///
/// @return enum QUuid__Version
///
int32_t q_uuid_version(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data1-var)
///
/// @param self QUuid*
///
uint32_t q_uuid_data1(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data1-var)
///
/// @param self QUuid*
/// @param data1 uint32_t
///
void q_uuid_set_data1(void* self, uint32_t data1);

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data2-var)
///
/// @param self QUuid*
///
unsigned short q_uuid_data2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data2-var)
///
/// @param self QUuid*
/// @param data2 unsigned short
///
void q_uuid_set_data2(void* self, unsigned short data2);

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data3-var)
///
/// @param self QUuid*
///
unsigned short q_uuid_data3(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data3-var)
///
/// @param self QUuid*
/// @param data3 unsigned short
///
void q_uuid_set_data3(void* self, unsigned short data3);

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QUuid*
/// @param mode enum QUuid__StringFormat
///
const char* q_uuid_to_string1(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toByteArray)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QUuid*
/// @param mode enum QUuid__StringFormat
///
char* q_uuid_to_byte_array1(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toBytes)
///
/// @param self QUuid*
/// @param order enum QSysInfo__Endian
///
QUuid__Id128Bytes* q_uuid_to_bytes1(void* self, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html#fromBytes)
///
/// @param bytes void*
/// @param order enum QSysInfo__Endian
///
QUuid* q_uuid_from_bytes2(void* bytes, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html#dtor.QUuid)
///
/// Delete this object from C++ memory.
///
/// @param self QUuid*
///
void q_uuid_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/quuid-id128bytes.html)

/// q_uuid__id128bytes_new constructs a new QUuid::Id128Bytes object.
///
QUuid__Id128Bytes* q_uuid__id128bytes_new();

/// [Upstream resources](https://doc.qt.io/qt-6/quuid-id128bytes.html)

/// q_uuid__id128bytes_new2 constructs a new QUuid::Id128Bytes object.
///
/// @param param1 QUuid__Id128Bytes*
///
QUuid__Id128Bytes* q_uuid__id128bytes_new2(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/quuid-id128bytes.html#operator)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QUuid__Id128Bytes*
///
const char* q_uuid__id128bytes_to_q_byte_array_view(void* self);

/// Delete this object from C++ memory.
///
/// @param self QUuid__Id128Bytes*
///
void q_uuid__id128bytes_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html#public-types)

typedef enum {
    QUUID_VARIANT_VARUNKNOWN = -1,
    QUUID_VARIANT_NCS = 0,
    QUUID_VARIANT_DCE = 2,
    QUUID_VARIANT_MICROSOFT = 6,
    QUUID_VARIANT_RESERVED = 7
} QUuid__Variant;

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html#public-types)

typedef enum {
    QUUID_VERSION_VERUNKNOWN = -1,
    QUUID_VERSION_TIME = 1,
    QUUID_VERSION_EMBEDDEDPOSIX = 2,
    QUUID_VERSION_MD5 = 3,
    QUUID_VERSION_NAME = 3,
    QUUID_VERSION_RANDOM = 4,
    QUUID_VERSION_SHA1 = 5
} QUuid__Version;

/// [Upstream resources](https://doc.qt.io/qt-6/quuid.html#public-types)

typedef enum {
    QUUID_STRINGFORMAT_WITHBRACES = 0,
    QUUID_STRINGFORMAT_WITHOUTBRACES = 1,
    QUUID_STRINGFORMAT_ID128 = 3
} QUuid__StringFormat;

#endif
