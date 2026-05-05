#pragma once
#ifndef SRC_QT6C_LIBQBYTEARRAY_H
#define SRC_QT6C_LIBQBYTEARRAY_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 int
///
char* q_bytearray_number(int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 uint32_t
///
char* q_bytearray_number2(uint32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 long
///
char* q_bytearray_number3(long param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 uintptr_t
///
char* q_bytearray_number4(uintptr_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 long long
///
char* q_bytearray_number5(long long param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 uintptr_t
///
char* q_bytearray_number6(uintptr_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 double
///
char* q_bytearray_number7(double param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#fromRawData)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param data const char*
/// @param size intptr_t
///
char* q_bytearray_from_raw_data(const char* data, intptr_t size);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#fromBase64Encoding)
///
/// @param base64 char*
///
QByteArray__FromBase64Result* q_bytearray_from_base64_encoding(char* base64);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#fromBase64)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param base64 char*
///
char* q_bytearray_from_base64(char* base64);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#fromHex)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param hexEncoded char*
///
char* q_bytearray_from_hex(char* hexEncoded);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#fromPercentEncoding)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param pctEncoded char*
///
char* q_bytearray_from_percent_encoding(char* pctEncoded);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#maxSize)
///
intptr_t q_bytearray_max_size2();

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 int
/// @param base int
///
char* q_bytearray_number22(int param1, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 uint32_t
/// @param base int
///
char* q_bytearray_number23(uint32_t param1, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 long
/// @param base int
///
char* q_bytearray_number24(long param1, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 uintptr_t
/// @param base int
///
char* q_bytearray_number25(uintptr_t param1, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 long long
/// @param base int
///
char* q_bytearray_number26(long long param1, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 uintptr_t
/// @param base int
///
char* q_bytearray_number27(uintptr_t param1, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 double
/// @param format char
///
char* q_bytearray_number28(double param1, char format);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 double
/// @param format char
/// @param precision int
///
char* q_bytearray_number32(double param1, char format, int precision);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#fromBase64Encoding)
///
/// @param base64 char*
/// @param options flag of enum QByteArray__Base64Option
///
QByteArray__FromBase64Result* q_bytearray_from_base64_encoding2(char* base64, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#fromBase64)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param base64 char*
/// @param options flag of enum QByteArray__Base64Option
///
char* q_bytearray_from_base642(char* base64, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#fromPercentEncoding)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param pctEncoded char*
/// @param percent char
///
char* q_bytearray_from_percent_encoding2(char* pctEncoded, char percent);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray-frombase64result.html)

/// q_bytearray__frombase64result_new constructs a new QByteArray::FromBase64Result object.
///
/// @param param1 QByteArray__FromBase64Result*
///
QByteArray__FromBase64Result* q_bytearray__frombase64result_new(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray-frombase64result.html)

/// q_bytearray__frombase64result_new2 constructs a new QByteArray::FromBase64Result object.
///
QByteArray__FromBase64Result* q_bytearray__frombase64result_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray-frombase64result.html#decoded-var)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QByteArray__FromBase64Result*
///
char* q_bytearray__frombase64result_decoded(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray-frombase64result.html#decoded-var)
///
/// @param self QByteArray__FromBase64Result*
/// @param decoded char*
///
void q_bytearray__frombase64result_set_decoded(void* self, char* decoded);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray-frombase64result.html#decodingStatus-var)
///
/// @param self QByteArray__FromBase64Result*
///
/// @return enum QByteArray__Base64DecodingStatus
///
int32_t q_bytearray__frombase64result_decoding_status(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray-frombase64result.html#decodingStatus-var)
///
/// @param self QByteArray__FromBase64Result*
/// @param decodingStatus enum QByteArray__Base64DecodingStatus
///
void q_bytearray__frombase64result_set_decoding_status(void* self, int32_t decodingStatus);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray-frombase64result.html#swap)
///
/// @param self QByteArray__FromBase64Result*
/// @param other QByteArray__FromBase64Result*
///
void q_bytearray__frombase64result_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray-frombase64result.html#operator)
///
/// @param self QByteArray__FromBase64Result*
///
bool q_bytearray__frombase64result_to_bool(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray-frombase64result.html#operator-2a)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QByteArray__FromBase64Result*
///
char* q_bytearray__frombase64result_operator_multiply(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray-frombase64result.html#operator-2a)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QByteArray__FromBase64Result*
///
const char* q_bytearray__frombase64result_operator_multiply2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray-frombase64result.html#operator-eq)
///
/// @param self QByteArray__FromBase64Result*
/// @param param1 QByteArray__FromBase64Result*
///
void q_bytearray__frombase64result_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self QByteArray__FromBase64Result*
///
void q_bytearray__frombase64result_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#public-types)

typedef enum {
    QBYTEARRAY_BASE64OPTION_BASE64ENCODING = 0,
    QBYTEARRAY_BASE64OPTION_BASE64URLENCODING = 1,
    QBYTEARRAY_BASE64OPTION_KEEPTRAILINGEQUALS = 0,
    QBYTEARRAY_BASE64OPTION_OMITTRAILINGEQUALS = 2,
    QBYTEARRAY_BASE64OPTION_IGNOREBASE64DECODINGERRORS = 0,
    QBYTEARRAY_BASE64OPTION_ABORTONBASE64DECODINGERRORS = 4
} QByteArray__Base64Option;

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#public-types)

typedef enum {
    QBYTEARRAY_BASE64DECODINGSTATUS_OK = 0,
    QBYTEARRAY_BASE64DECODINGSTATUS_ILLEGALINPUTLENGTH = 1,
    QBYTEARRAY_BASE64DECODINGSTATUS_ILLEGALCHARACTER = 2,
    QBYTEARRAY_BASE64DECODINGSTATUS_ILLEGALPADDING = 3
} QByteArray__Base64DecodingStatus;

#endif
