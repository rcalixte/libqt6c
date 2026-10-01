#pragma once
#ifndef NETWORK_LIBQSSLKEY_H
#define NETWORK_LIBQSSLKEY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html)

/// q_sslkey_new constructs a new QSslKey object.
///
QSslKey* q_sslkey_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html)

/// q_sslkey_new2 constructs a new QSslKey object.
///
/// @param encoded char*
/// @param algorithm enum QSsl__KeyAlgorithm
///
QSslKey* q_sslkey_new2(char* encoded, int32_t algorithm);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html)

/// q_sslkey_new3 constructs a new QSslKey object.
///
/// @param device QIODevice*
/// @param algorithm enum QSsl__KeyAlgorithm
///
QSslKey* q_sslkey_new3(void* device, int32_t algorithm);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html)

/// q_sslkey_new4 constructs a new QSslKey object.
///
/// @param handle void*
///
QSslKey* q_sslkey_new4(void* handle);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html)

/// q_sslkey_new5 constructs a new QSslKey object.
///
/// @param other QSslKey*
///
QSslKey* q_sslkey_new5(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html)

/// q_sslkey_new6 constructs a new QSslKey object.
///
/// @param encoded char*
/// @param algorithm enum QSsl__KeyAlgorithm
/// @param format enum QSsl__EncodingFormat
///
QSslKey* q_sslkey_new6(char* encoded, int32_t algorithm, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html)

/// q_sslkey_new7 constructs a new QSslKey object.
///
/// @param encoded char*
/// @param algorithm enum QSsl__KeyAlgorithm
/// @param format enum QSsl__EncodingFormat
/// @param type enum QSsl__KeyType
///
QSslKey* q_sslkey_new7(char* encoded, int32_t algorithm, int32_t format, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html)

/// q_sslkey_new8 constructs a new QSslKey object.
///
/// @param encoded char*
/// @param algorithm enum QSsl__KeyAlgorithm
/// @param format enum QSsl__EncodingFormat
/// @param type enum QSsl__KeyType
/// @param passPhrase char*
///
QSslKey* q_sslkey_new8(char* encoded, int32_t algorithm, int32_t format, int32_t type, char* passPhrase);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html)

/// q_sslkey_new9 constructs a new QSslKey object.
///
/// @param device QIODevice*
/// @param algorithm enum QSsl__KeyAlgorithm
/// @param format enum QSsl__EncodingFormat
///
QSslKey* q_sslkey_new9(void* device, int32_t algorithm, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html)

/// q_sslkey_new10 constructs a new QSslKey object.
///
/// @param device QIODevice*
/// @param algorithm enum QSsl__KeyAlgorithm
/// @param format enum QSsl__EncodingFormat
/// @param type enum QSsl__KeyType
///
QSslKey* q_sslkey_new10(void* device, int32_t algorithm, int32_t format, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html)

/// q_sslkey_new11 constructs a new QSslKey object.
///
/// @param device QIODevice*
/// @param algorithm enum QSsl__KeyAlgorithm
/// @param format enum QSsl__EncodingFormat
/// @param type enum QSsl__KeyType
/// @param passPhrase char*
///
QSslKey* q_sslkey_new11(void* device, int32_t algorithm, int32_t format, int32_t type, char* passPhrase);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html)

/// q_sslkey_new12 constructs a new QSslKey object.
///
/// @param handle void*
/// @param type enum QSsl__KeyType
///
QSslKey* q_sslkey_new12(void* handle, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#operator-eq)
///
/// @param self QSslKey*
/// @param other QSslKey*
///
void q_sslkey_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#swap)
///
/// @param self QSslKey*
/// @param other QSslKey*
///
void q_sslkey_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#isNull)
///
/// @param self const QSslKey*
///
bool q_sslkey_is_null(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#clear)
///
/// @param self QSslKey*
///
void q_sslkey_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#length)
///
/// @param self const QSslKey*
///
int32_t q_sslkey_length(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#type)
///
/// @param self const QSslKey*
///
/// @return enum QSsl__KeyType
///
int32_t q_sslkey_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#algorithm)
///
/// @param self const QSslKey*
///
/// @return enum QSsl__KeyAlgorithm
///
int32_t q_sslkey_algorithm(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#toPem)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QSslKey*
///
char* q_sslkey_to_pem(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#toDer)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QSslKey*
///
char* q_sslkey_to_der(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#handle)
///
/// @param self const QSslKey*
///
void* q_sslkey_handle(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#operator-eq-eq)
///
/// @param self const QSslKey*
/// @param key QSslKey*
///
bool q_sslkey_operator_equal(const void* self, const void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#operator-not-eq)
///
/// @param self const QSslKey*
/// @param key QSslKey*
///
bool q_sslkey_operator_not_equal(const void* self, const void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#toPem)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QSslKey*
/// @param passPhrase char*
///
char* q_sslkey_to_pem1(const void* self, char* passPhrase);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#toDer)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QSslKey*
/// @param passPhrase char*
///
char* q_sslkey_to_der1(const void* self, char* passPhrase);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#dtor.QSslKey)
///
/// Delete this object from C++ memory.
///
/// @param self QSslKey*
///
void q_sslkey_delete(void* self);

#endif
