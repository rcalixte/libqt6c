#pragma once
#ifndef SRCQT6C_LIBQMESSAGEAUTHENTICATIONCODE_H
#define SRCQT6C_LIBQMESSAGEAUTHENTICATIONCODE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qmessageauthenticationcode.html

/// q_messageauthenticationcode_new constructs a new QMessageAuthenticationCode object.
///
/// @param method enum QCryptographicHash__Algorithm
QMessageAuthenticationCode* q_messageauthenticationcode_new(int64_t method);

/// q_messageauthenticationcode_new2 constructs a new QMessageAuthenticationCode object.
///
/// @param method enum QCryptographicHash__Algorithm
/// @param key const char*
QMessageAuthenticationCode* q_messageauthenticationcode_new2(int64_t method, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#swap)
///
/// @param self QMessageAuthenticationCode*
/// @param other QMessageAuthenticationCode*
void q_messageauthenticationcode_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#reset)
///
/// @param self QMessageAuthenticationCode*
void q_messageauthenticationcode_reset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#setKey)
///
/// @param self QMessageAuthenticationCode*
/// @param key const char*
void q_messageauthenticationcode_set_key(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#addData)
///
/// @param self QMessageAuthenticationCode*
/// @param data const char*
/// @param length int64_t
void q_messageauthenticationcode_add_data(void* self, const char* data, int64_t length);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#addData)
///
/// @param self QMessageAuthenticationCode*
/// @param data const char*
void q_messageauthenticationcode_add_data2(void* self, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#addData)
///
/// @param self QMessageAuthenticationCode*
/// @param device QIODevice*
bool q_messageauthenticationcode_add_data3(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#resultView)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMessageAuthenticationCode*
const char* q_messageauthenticationcode_result_view(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#result)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMessageAuthenticationCode*
char* q_messageauthenticationcode_result(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#hash)
///
/// Caller is responsible for freeing the returned memory
///
/// @param message const char*
/// @param key const char*
/// @param method enum QCryptographicHash__Algorithm
char* q_messageauthenticationcode_hash(const char* message, const char* key, int64_t method);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#hashInto)
///
/// Caller is responsible for freeing the returned memory
///
/// @param buffer libqt_list /* of char */
/// @param message const char*
/// @param key const char*
/// @param method enum QCryptographicHash__Algorithm
const char* q_messageauthenticationcode_hash_into(libqt_list buffer, const char* message, const char* key, int64_t method);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#hashInto)
///
/// Caller is responsible for freeing the returned memory
///
/// @param buffer libqt_list /* of unsigned char */
/// @param message const char*
/// @param key const char*
/// @param method enum QCryptographicHash__Algorithm
const char* q_messageauthenticationcode_hash_into2(libqt_list buffer, const char* message, const char* key, int64_t method);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#hashInto)
///
/// Caller is responsible for freeing the returned memory
///
/// @param buffer libqt_list /* of char */
/// @param messageParts libqt_list /* of const char* */
/// @param key const char*
/// @param method enum QCryptographicHash__Algorithm
const char* q_messageauthenticationcode_hash_into4(libqt_list buffer, libqt_list messageParts, const char* key, int64_t method);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#hashInto)
///
/// Caller is responsible for freeing the returned memory
///
/// @param buffer libqt_list /* of unsigned char */
/// @param messageParts libqt_list /* of const char* */
/// @param key const char*
/// @param method enum QCryptographicHash__Algorithm
const char* q_messageauthenticationcode_hash_into5(libqt_list buffer, libqt_list messageParts, const char* key, int64_t method);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#dtor.QMessageAuthenticationCode)
///
/// Delete this object from C++ memory.
///
/// @param self QMessageAuthenticationCode*
void q_messageauthenticationcode_delete(void* self);

#endif
