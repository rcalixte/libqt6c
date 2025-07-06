#pragma once
#ifndef SRC_NETWORKQT6C_LIBQRESTREPLY_H
#define SRC_NETWORKQT6C_LIBQRESTREPLY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qrestreply.html

/// q_restreply_new constructs a new QRestReply object.
///
/// ``` QNetworkReply* reply ```
QRestReply* q_restreply_new(void* reply);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestreply.html#swap)
///
/// ``` QRestReply* self, QRestReply* other ```
void q_restreply_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestreply.html#networkReply)
///
/// ``` QRestReply* self ```
QNetworkReply* q_restreply_network_reply(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestreply.html#readBody)
///
/// ``` QRestReply* self ```
char* q_restreply_read_body(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestreply.html#readText)
///
/// ``` QRestReply* self ```
const char* q_restreply_read_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestreply.html#isSuccess)
///
/// ``` QRestReply* self ```
bool q_restreply_is_success(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestreply.html#httpStatus)
///
/// ``` QRestReply* self ```
int32_t q_restreply_http_status(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestreply.html#isHttpStatusSuccess)
///
/// ``` QRestReply* self ```
bool q_restreply_is_http_status_success(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestreply.html#hasError)
///
/// ``` QRestReply* self ```
bool q_restreply_has_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestreply.html#error)
///
/// ``` QRestReply* self ```
int64_t q_restreply_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestreply.html#errorString)
///
/// ``` QRestReply* self ```
const char* q_restreply_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestreply.html#dtor.QRestReply)
///
/// Delete this object from C++ memory.
///
/// ``` QRestReply* self ```
void q_restreply_delete(void* self);

#endif
