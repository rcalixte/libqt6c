#pragma once
#ifndef SRCQT6C_LIBQUUID_H
#define SRCQT6C_LIBQUUID_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/quuid.html

/// q_uuid_new constructs a new QUuid object.
///
/// ``` QUuid* other ```
QUuid* q_uuid_new(void* other);

/// q_uuid_new2 constructs a new QUuid object and invalidates the source QUuid object.
///
/// ``` QUuid* other ```
QUuid* q_uuid_new2(void* other);

/// q_uuid_new3 constructs a new QUuid object.
///
///
QUuid* q_uuid_new3();

/// q_uuid_new4 constructs a new QUuid object.
///
/// ``` uint32_t l, unsigned short w1, unsigned short w2, unsigned char b1, unsigned char b2, unsigned char b3, unsigned char b4, unsigned char b5, unsigned char b6, unsigned char b7, unsigned char b8 ```
QUuid* q_uuid_new4(uint32_t l, unsigned short w1, unsigned short w2, unsigned char b1, unsigned char b2, unsigned char b3, unsigned char b4, unsigned char b5, unsigned char b6, unsigned char b7, unsigned char b8);

/// q_uuid_new5 constructs a new QUuid object.
///
/// ``` QUuid__Id128Bytes* id128 ```
QUuid* q_uuid_new5(void* id128);

/// q_uuid_new6 constructs a new QUuid object.
///
/// ``` char* stringVal ```
QUuid* q_uuid_new6(char* stringVal);

/// q_uuid_new7 constructs a new QUuid object.
///
/// ``` QUuid* param1 ```
QUuid* q_uuid_new7(void* param1);

/// q_uuid_new8 constructs a new QUuid object.
///
/// ``` QUuid__Id128Bytes* id128, enum QSysInfo__Endian order ```
QUuid* q_uuid_new8(void* id128, int64_t order);

/// q_uuid_copy_assign shallow copies `other` into `self`.
///
/// ``` QUuid* self, QUuid* other ```
void q_uuid_copy_assign(void* self, void* other);

/// q_uuid_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QUuid* self, QUuid* other ```
void q_uuid_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#fromString)
///
/// ``` char* stringVal ```
QUuid* q_uuid_from_string(char* stringVal);

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#toString)
///
/// ``` QUuid* self ```
const char* q_uuid_to_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#toByteArray)
///
/// ``` QUuid* self ```
char* q_uuid_to_byte_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#toBytes)
///
/// ``` QUuid* self ```
QUuid__Id128Bytes* q_uuid_to_bytes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#toRfc4122)
///
/// ``` QUuid* self ```
char* q_uuid_to_rfc4122(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#fromBytes)
///
/// ``` void* bytes ```
QUuid* q_uuid_from_bytes(void* bytes);

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#fromRfc4122)
///
/// ``` const char* param1 ```
QUuid* q_uuid_from_rfc4122(const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#isNull)
///
/// ``` QUuid* self ```
bool q_uuid_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#createUuid)
///
///
QUuid* q_uuid_create_uuid();

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#createUuidV5)
///
/// ``` QUuid* ns, const char* baseData ```
QUuid* q_uuid_create_uuid_v5(void* ns, const char* baseData);

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#createUuidV3)
///
/// ``` QUuid* ns, const char* baseData ```
QUuid* q_uuid_create_uuid_v3(void* ns, const char* baseData);

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#variant)
///
/// ``` QUuid* self ```
int64_t q_uuid_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#version)
///
/// ``` QUuid* self ```
int64_t q_uuid_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#toString)
///
/// ``` QUuid* self, enum QUuid__StringFormat mode ```
const char* q_uuid_to_string1(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#toByteArray)
///
/// ``` QUuid* self, enum QUuid__StringFormat mode ```
char* q_uuid_to_byte_array1(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#toBytes)
///
/// ``` QUuid* self, enum QSysInfo__Endian order ```
QUuid__Id128Bytes* q_uuid_to_bytes1(void* self, int64_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#fromBytes)
///
/// ``` void* bytes, enum QSysInfo__Endian order ```
QUuid* q_uuid_from_bytes2(void* bytes, int64_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#dtor.QUuid)
///
/// Delete this object from C++ memory.
///
/// ``` QUuid* self ```
void q_uuid_delete(void* self);

/// https://doc.qt.io/qt-6/quuid-id128bytes.html

/// q_uuid__id128bytes_new constructs a new QUuid::Id128Bytes object.
///
///
QUuid__Id128Bytes* q_uuid__id128bytes_new();

/// q_uuid__id128bytes_new2 constructs a new QUuid::Id128Bytes object.
///
/// ``` QUuid__Id128Bytes* param1 ```
QUuid__Id128Bytes* q_uuid__id128bytes_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/quuid__id128bytes.html#operator QByteArrayView)
///
/// ``` QUuid__Id128Bytes* self ```
const char* q_uuid__id128bytes_to_q_byte_array_view(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/quuid::id128bytes.html#dtor.QUuid::Id128Bytes)
///
/// Delete this object from C++ memory.
///
/// ``` QUuid__Id128Bytes* self ```
void q_uuid__id128bytes_delete(void* self);

/// https://doc.qt.io/qt-6/quuid.html#types

typedef enum {
    QUUID_VARIANT_VARUNKNOWN = -1,
    QUUID_VARIANT_NCS = 0,
    QUUID_VARIANT_DCE = 2,
    QUUID_VARIANT_MICROSOFT = 6,
    QUUID_VARIANT_RESERVED = 7
} QUuid__Variant;

typedef enum {
    QUUID_VERSION_VERUNKNOWN = -1,
    QUUID_VERSION_TIME = 1,
    QUUID_VERSION_EMBEDDEDPOSIX = 2,
    QUUID_VERSION_MD5 = 3,
    QUUID_VERSION_NAME = 3,
    QUUID_VERSION_RANDOM = 4,
    QUUID_VERSION_SHA1 = 5
} QUuid__Version;

typedef enum {
    QUUID_STRINGFORMAT_WITHBRACES = 0,
    QUUID_STRINGFORMAT_WITHOUTBRACES = 1,
    QUUID_STRINGFORMAT_ID128 = 3
} QUuid__StringFormat;

#endif
