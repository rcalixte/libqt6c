#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEHTTPREQUEST_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEHTTPREQUEST_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebenginehttprequest.html

/// q_webenginehttprequest_new constructs a new QWebEngineHttpRequest object.
///
QWebEngineHttpRequest* q_webenginehttprequest_new();

/// q_webenginehttprequest_new2 constructs a new QWebEngineHttpRequest object.
///
/// @param other QWebEngineHttpRequest*
QWebEngineHttpRequest* q_webenginehttprequest_new2(void* other);

/// q_webenginehttprequest_new3 constructs a new QWebEngineHttpRequest object.
///
/// @param url QUrl*
QWebEngineHttpRequest* q_webenginehttprequest_new3(void* url);

/// q_webenginehttprequest_new4 constructs a new QWebEngineHttpRequest object.
///
/// @param url QUrl*
/// @param method enum QWebEngineHttpRequest__Method*
QWebEngineHttpRequest* q_webenginehttprequest_new4(void* url, int64_t* method);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#operator-eq)
///
/// @param self QWebEngineHttpRequest*
/// @param other QWebEngineHttpRequest*
void q_webenginehttprequest_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#postRequest)
///
/// @param url QUrl*
/// @param postData libqt_map /* of const char* to const char* */
QWebEngineHttpRequest* q_webenginehttprequest_post_request(void* url, libqt_map /* of const char* to const char* */ postData);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#swap)
///
/// @param self QWebEngineHttpRequest*
/// @param other QWebEngineHttpRequest*
void q_webenginehttprequest_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#operator-eq-eq)
///
/// @param self QWebEngineHttpRequest*
/// @param other QWebEngineHttpRequest*
bool q_webenginehttprequest_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#operator-not-eq)
///
/// @param self QWebEngineHttpRequest*
/// @param other QWebEngineHttpRequest*
bool q_webenginehttprequest_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#method)
///
/// @param self QWebEngineHttpRequest*
///
/// @return enum QWebEngineHttpRequest__Method
int64_t q_webenginehttprequest_method(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#setMethod)
///
/// @param self QWebEngineHttpRequest*
/// @param method enum QWebEngineHttpRequest__Method
void q_webenginehttprequest_set_method(void* self, int64_t method);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#url)
///
/// @param self QWebEngineHttpRequest*
QUrl* q_webenginehttprequest_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#setUrl)
///
/// @param self QWebEngineHttpRequest*
/// @param url QUrl*
void q_webenginehttprequest_set_url(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#postData)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineHttpRequest*
char* q_webenginehttprequest_post_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#setPostData)
///
/// @param self QWebEngineHttpRequest*
/// @param postData const char*
void q_webenginehttprequest_set_post_data(void* self, const char* postData);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#hasHeader)
///
/// @param self QWebEngineHttpRequest*
/// @param headerName const char*
bool q_webenginehttprequest_has_header(void* self, const char* headerName);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#headers)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineHttpRequest*
const char** q_webenginehttprequest_headers(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#header)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineHttpRequest*
/// @param headerName const char*
char* q_webenginehttprequest_header(void* self, const char* headerName);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#setHeader)
///
/// @param self QWebEngineHttpRequest*
/// @param headerName const char*
/// @param value const char*
void q_webenginehttprequest_set_header(void* self, const char* headerName, const char* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#unsetHeader)
///
/// @param self QWebEngineHttpRequest*
/// @param headerName const char*
void q_webenginehttprequest_unset_header(void* self, const char* headerName);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#dtor.QWebEngineHttpRequest)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineHttpRequest*
void q_webenginehttprequest_delete(void* self);

/// https://doc.qt.io/qt-6/qwebenginehttprequest.html#types

typedef enum {
    QWEBENGINEHTTPREQUEST_METHOD_GET = 0,
    QWEBENGINEHTTPREQUEST_METHOD_POST = 1
} QWebEngineHttpRequest__Method;

#endif
