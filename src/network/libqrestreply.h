#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQRESTREPLY_H
#define SRC_NETWORK_QT6C_LIBQRESTREPLY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html)

/// q_restreply_new constructs a new QRestReply object.
///
/// @param reply QNetworkReply*
///
QRestReply* q_restreply_new(void* reply);

/// [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#swap)
///
/// @param self QRestReply*
/// @param other QRestReply*
///
void q_restreply_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#networkReply)
///
/// @param self QRestReply*
///
QNetworkReply* q_restreply_network_reply(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#readBody)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QRestReply*
///
char* q_restreply_read_body(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#readText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QRestReply*
///
const char* q_restreply_read_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#isSuccess)
///
/// @param self QRestReply*
///
bool q_restreply_is_success(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#httpStatus)
///
/// @param self QRestReply*
///
int32_t q_restreply_http_status(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#isHttpStatusSuccess)
///
/// @param self QRestReply*
///
bool q_restreply_is_http_status_success(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#hasError)
///
/// @param self QRestReply*
///
bool q_restreply_has_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#error)
///
/// @param self QRestReply*
///
/// @return enum QNetworkReply__NetworkError
///
int32_t q_restreply_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QRestReply*
///
const char* q_restreply_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#dtor.QRestReply)
///
/// Delete this object from C++ memory.
///
/// @param self QRestReply*
///
void q_restreply_delete(void* self);

#endif
