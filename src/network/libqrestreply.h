#pragma once
#ifndef NETWORK_LIBQRESTREPLY_H
#define NETWORK_LIBQRESTREPLY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
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
/// @param self const QRestReply*
///
QNetworkReply* q_restreply_network_reply(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#readJson)
///
/// @param self QRestReply*
///
/// @return QJsonDocument* (NOTE: This pointer value could be `NULL`.)
///
QJsonDocument* q_restreply_read_json(void* self);

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
/// @param self const QRestReply*
///
bool q_restreply_is_success(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#httpStatus)
///
/// @param self const QRestReply*
///
int32_t q_restreply_http_status(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#isHttpStatusSuccess)
///
/// @param self const QRestReply*
///
bool q_restreply_is_http_status_success(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#hasError)
///
/// @param self const QRestReply*
///
bool q_restreply_has_error(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#error)
///
/// @param self const QRestReply*
///
/// @return enum QNetworkReply__NetworkError
///
int32_t q_restreply_error(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QRestReply*
///
const char* q_restreply_error_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#readJson)
///
/// @param self QRestReply*
/// @param error QJsonParseError*
///
/// @return QJsonDocument* (NOTE: This pointer value could be `NULL`.)
///
QJsonDocument* q_restreply_read_json1(void* self, void* error);

/// [Upstream resources](https://doc.qt.io/qt-6/qrestreply.html#dtor.QRestReply)
///
/// Delete this object from C++ memory.
///
/// @param self QRestReply*
///
void q_restreply_delete(void* self);

#endif
