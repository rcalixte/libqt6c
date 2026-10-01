#pragma once
#ifndef WEBENGINE_LIBQWEBENGINEHTTPREQUEST_H
#define WEBENGINE_LIBQWEBENGINEHTTPREQUEST_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html)

/// q_webenginehttprequest_new constructs a new QWebEngineHttpRequest object.
///
QWebEngineHttpRequest* q_webenginehttprequest_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html)

/// q_webenginehttprequest_new2 constructs a new QWebEngineHttpRequest object.
///
/// @param other QWebEngineHttpRequest*
///
QWebEngineHttpRequest* q_webenginehttprequest_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html)

/// q_webenginehttprequest_new3 constructs a new QWebEngineHttpRequest object.
///
/// @param url QUrl*
///
QWebEngineHttpRequest* q_webenginehttprequest_new3(const void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html)

/// q_webenginehttprequest_new4 constructs a new QWebEngineHttpRequest object.
///
/// @param url QUrl*
/// @param method enum QWebEngineHttpRequest__Method*
///
QWebEngineHttpRequest* q_webenginehttprequest_new4(const void* url, int32_t* method);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#operator-eq)
///
/// @param self QWebEngineHttpRequest*
/// @param other QWebEngineHttpRequest*
///
void q_webenginehttprequest_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#postRequest)
///
/// @param url QUrl*
/// @param postData libqt_map of const char* to const char*
///
QWebEngineHttpRequest* q_webenginehttprequest_post_request(const void* url, libqt_map postData);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#swap)
///
/// @param self QWebEngineHttpRequest*
/// @param other QWebEngineHttpRequest*
///
void q_webenginehttprequest_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#operator-eq-eq)
///
/// @param self const QWebEngineHttpRequest*
/// @param other QWebEngineHttpRequest*
///
bool q_webenginehttprequest_operator_equal(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#operator-not-eq)
///
/// @param self const QWebEngineHttpRequest*
/// @param other QWebEngineHttpRequest*
///
bool q_webenginehttprequest_operator_not_equal(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#method)
///
/// @param self const QWebEngineHttpRequest*
///
/// @return enum QWebEngineHttpRequest__Method
///
int32_t q_webenginehttprequest_method(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#setMethod)
///
/// @param self QWebEngineHttpRequest*
/// @param method enum QWebEngineHttpRequest__Method
///
void q_webenginehttprequest_set_method(void* self, int32_t method);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#url)
///
/// @param self const QWebEngineHttpRequest*
///
QUrl* q_webenginehttprequest_url(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#setUrl)
///
/// @param self QWebEngineHttpRequest*
/// @param url QUrl*
///
void q_webenginehttprequest_set_url(void* self, const void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#postData)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QWebEngineHttpRequest*
///
char* q_webenginehttprequest_post_data(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#setPostData)
///
/// @param self QWebEngineHttpRequest*
/// @param postData char*
///
void q_webenginehttprequest_set_post_data(void* self, char* postData);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#hasHeader)
///
/// @param self const QWebEngineHttpRequest*
/// @param headerName char*
///
bool q_webenginehttprequest_has_header(const void* self, char* headerName);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#headers)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QWebEngineHttpRequest*
///
const char** q_webenginehttprequest_headers(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#header)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QWebEngineHttpRequest*
/// @param headerName char*
///
char* q_webenginehttprequest_header(const void* self, char* headerName);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#setHeader)
///
/// @param self QWebEngineHttpRequest*
/// @param headerName char*
/// @param value char*
///
void q_webenginehttprequest_set_header(void* self, char* headerName, char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#unsetHeader)
///
/// @param self QWebEngineHttpRequest*
/// @param headerName char*
///
void q_webenginehttprequest_unset_header(void* self, char* headerName);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#dtor.QWebEngineHttpRequest)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineHttpRequest*
///
void q_webenginehttprequest_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginehttprequest.html#public-types)

typedef enum {
    QWEBENGINEHTTPREQUEST_METHOD_GET = 0,
    QWEBENGINEHTTPREQUEST_METHOD_POST = 1
} QWebEngineHttpRequest__Method;

#endif
