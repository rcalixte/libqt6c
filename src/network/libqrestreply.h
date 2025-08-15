#pragma once
#ifndef SRC_NETWORKQT6C_LIBQRESTREPLY_H
#define SRC_NETWORKQT6C_LIBQRESTREPLY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qrestreply.html

/// q_restreply_new constructs a new QRestReply object.
///
/// @param reply QNetworkReply*
QRestReply* q_restreply_new(void* reply);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestreply.html#swap)
///
/// @param self QRestReply*
/// @param other QRestReply*
void q_restreply_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestreply.html#networkReply)
///
/// @param self QRestReply*
QNetworkReply* q_restreply_network_reply(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestreply.html#readBody)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QRestReply*
char* q_restreply_read_body(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestreply.html#readText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QRestReply*
const char* q_restreply_read_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestreply.html#isSuccess)
///
/// @param self QRestReply*
bool q_restreply_is_success(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestreply.html#httpStatus)
///
/// @param self QRestReply*
int32_t q_restreply_http_status(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestreply.html#isHttpStatusSuccess)
///
/// @param self QRestReply*
bool q_restreply_is_http_status_success(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestreply.html#hasError)
///
/// @param self QRestReply*
bool q_restreply_has_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestreply.html#error)
///
/// @param self QRestReply*
///
/// @return enum QNetworkReply__NetworkError
int64_t q_restreply_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestreply.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QRestReply*
const char* q_restreply_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestreply.html#dtor.QRestReply)
///
/// Delete this object from C++ memory.
///
/// @param self QRestReply*
void q_restreply_delete(void* self);

#endif
