#pragma once
#ifndef SRCQT6C_LIBQMESSAGEAUTHENTICATIONCODE_H
#define SRCQT6C_LIBQMESSAGEAUTHENTICATIONCODE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqiodevice.h"

/// https://doc.qt.io/qt-6/qmessageauthenticationcode.html

/// q_messageauthenticationcode_new constructs a new QMessageAuthenticationCode object.
///
/// ``` enum QCryptographicHash__Algorithm method ```
QMessageAuthenticationCode* q_messageauthenticationcode_new(int64_t method);

/// q_messageauthenticationcode_new2 constructs a new QMessageAuthenticationCode object.
///
/// ``` enum QCryptographicHash__Algorithm method, const char* key ```
QMessageAuthenticationCode* q_messageauthenticationcode_new2(int64_t method, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#reset)
///
/// ``` QMessageAuthenticationCode* self ```
void q_messageauthenticationcode_reset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#setKey)
///
/// ``` QMessageAuthenticationCode* self, const char* key ```
void q_messageauthenticationcode_set_key(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#addData)
///
/// ``` QMessageAuthenticationCode* self, const char* data, int64_t length ```
void q_messageauthenticationcode_add_data(void* self, const char* data, int64_t length);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#addData)
///
/// ``` QMessageAuthenticationCode* self, const char* data ```
void q_messageauthenticationcode_add_data_with_data(void* self, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#addData)
///
/// ``` QMessageAuthenticationCode* self, QIODevice* device ```
bool q_messageauthenticationcode_add_data_with_device(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#result)
///
/// ``` QMessageAuthenticationCode* self ```
char* q_messageauthenticationcode_result(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessageauthenticationcode.html#hash)
///
/// ``` const char* message, const char* key, enum QCryptographicHash__Algorithm method ```
char* q_messageauthenticationcode_hash(const char* message, const char* key, int64_t method);

/// Delete this object from C++ memory.
///
/// ``` QMessageAuthenticationCode* self ```
void q_messageauthenticationcode_delete(void* self);

#endif
