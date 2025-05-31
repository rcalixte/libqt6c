#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEHTTPREQUEST_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEHTTPREQUEST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include <string.h>
#include "../libqurl.h"

/// https://doc.qt.io/qt-6/qwebenginehttprequest.html

/// q_webenginehttprequest_new constructs a new QWebEngineHttpRequest object.
///
///
QWebEngineHttpRequest* q_webenginehttprequest_new();

/// q_webenginehttprequest_new2 constructs a new QWebEngineHttpRequest object.
///
/// ``` QWebEngineHttpRequest* other ```
QWebEngineHttpRequest* q_webenginehttprequest_new2(void* other);

/// q_webenginehttprequest_new3 constructs a new QWebEngineHttpRequest object.
///
/// ``` QUrl* url ```
QWebEngineHttpRequest* q_webenginehttprequest_new3(void* url);

/// q_webenginehttprequest_new4 constructs a new QWebEngineHttpRequest object.
///
/// ``` QUrl* url, enum QWebEngineHttpRequest__Method* method ```
QWebEngineHttpRequest* q_webenginehttprequest_new4(void* url, int64_t* method);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#operator=)
///
/// ``` QWebEngineHttpRequest* self, QWebEngineHttpRequest* other ```
void q_webenginehttprequest_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#postRequest)
///
/// ``` QUrl* url, libqt_map /* of const char* to const char* */ postData ```
QWebEngineHttpRequest* q_webenginehttprequest_post_request(void* url, libqt_map /* of const char* to const char* */ postData);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#swap)
///
/// ``` QWebEngineHttpRequest* self, QWebEngineHttpRequest* other ```
void q_webenginehttprequest_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#operator==)
///
/// ``` QWebEngineHttpRequest* self, QWebEngineHttpRequest* other ```
bool q_webenginehttprequest_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#operator!=)
///
/// ``` QWebEngineHttpRequest* self, QWebEngineHttpRequest* other ```
bool q_webenginehttprequest_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#method)
///
/// ``` QWebEngineHttpRequest* self ```
int64_t q_webenginehttprequest_method(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#setMethod)
///
/// ``` QWebEngineHttpRequest* self, enum QWebEngineHttpRequest__Method method ```
void q_webenginehttprequest_set_method(void* self, int64_t method);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#url)
///
/// ``` QWebEngineHttpRequest* self ```
QUrl* q_webenginehttprequest_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#setUrl)
///
/// ``` QWebEngineHttpRequest* self, QUrl* url ```
void q_webenginehttprequest_set_url(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#postData)
///
/// ``` QWebEngineHttpRequest* self ```
char* q_webenginehttprequest_post_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#setPostData)
///
/// ``` QWebEngineHttpRequest* self, const char* postData ```
void q_webenginehttprequest_set_post_data(void* self, const char* postData);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#hasHeader)
///
/// ``` QWebEngineHttpRequest* self, const char* headerName ```
bool q_webenginehttprequest_has_header(void* self, const char* headerName);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#headers)
///
/// ``` QWebEngineHttpRequest* self ```
const char** q_webenginehttprequest_headers(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#header)
///
/// ``` QWebEngineHttpRequest* self, const char* headerName ```
char* q_webenginehttprequest_header(void* self, const char* headerName);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#setHeader)
///
/// ``` QWebEngineHttpRequest* self, const char* headerName, const char* value ```
void q_webenginehttprequest_set_header(void* self, const char* headerName, const char* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#unsetHeader)
///
/// ``` QWebEngineHttpRequest* self, const char* headerName ```
void q_webenginehttprequest_unset_header(void* self, const char* headerName);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginehttprequest.html#dtor.QWebEngineHttpRequest)
///
/// Delete this object from C++ memory.
///
/// ``` QWebEngineHttpRequest* self ```
void q_webenginehttprequest_delete(void* self);

/// https://doc.qt.io/qt-6/qwebenginehttprequest.html#types

typedef enum {
    QWEBENGINEHTTPREQUEST_METHOD_GET = 0,
    QWEBENGINEHTTPREQUEST_METHOD_POST = 1
} QWebEngineHttpRequest__Method;

#endif
