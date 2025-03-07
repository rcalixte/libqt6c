#pragma once
#ifndef SRCQT6C_LIBQUUID_H
#define SRCQT6C_LIBQUUID_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbytearrayview.h"
#include <string.h>

QUuid* q_uuid_new(void* other);
QUuid* q_uuid_new2(void* other);
QUuid* q_uuid_new3();
QUuid* q_uuid_new4(uint32_t l, unsigned short w1, unsigned short w2, unsigned char b1, unsigned char b2, unsigned char b3, unsigned char b4, unsigned char b5, unsigned char b6, unsigned char b7, unsigned char b8);
QUuid* q_uuid_new5(const char* stringVal);
QUuid* q_uuid_new6(void* param1);
void q_uuid_copy_assign(void* self, void* other);
void q_uuid_move_assign(void* self, void* other);
QUuid* q_uuid_from_string(const char* stringVal);
const char* q_uuid_to_string(void* self);
char* q_uuid_to_byte_array(void* self);
char* q_uuid_to_rfc4122(void* self);
QUuid* q_uuid_from_rfc4122(const char* param1);
bool q_uuid_is_null(void* self);
bool q_uuid_operator_equal(void* self, void* orig);
bool q_uuid_operator_not_equal(void* self, void* orig);
bool q_uuid_operator_lesser(void* self, void* other);
bool q_uuid_operator_greater(void* self, void* other);
QUuid* q_uuid_create_uuid();
QUuid* q_uuid_create_uuid_v3(void* ns, const char* baseData);
QUuid* q_uuid_create_uuid_v5(void* ns, const char* baseData);
QUuid* q_uuid_create_uuid_v32(void* ns, const char* baseData);
QUuid* q_uuid_create_uuid_v52(void* ns, const char* baseData);
int64_t q_uuid_variant(void* self);
int64_t q_uuid_version(void* self);
const char* q_uuid_to_string1(void* self, int64_t mode);
char* q_uuid_to_byte_array1(void* self, int64_t mode);
void q_uuid_delete(void* self);

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
