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

QWebEngineHttpRequest* q_webenginehttprequest_new();
QWebEngineHttpRequest* q_webenginehttprequest_new2(void* other);
QWebEngineHttpRequest* q_webenginehttprequest_new3(void* url);
QWebEngineHttpRequest* q_webenginehttprequest_new4(void* url, int64_t* method);
void q_webenginehttprequest_operator_assign(void* self, void* other);
QWebEngineHttpRequest* q_webenginehttprequest_post_request(void* url, libqt_map /* of const char* to const char* */ postData);
void q_webenginehttprequest_swap(void* self, void* other);
bool q_webenginehttprequest_operator_equal(void* self, void* other);
bool q_webenginehttprequest_operator_not_equal(void* self, void* other);
int64_t q_webenginehttprequest_method(void* self);
void q_webenginehttprequest_set_method(void* self, int64_t method);
QUrl* q_webenginehttprequest_url(void* self);
void q_webenginehttprequest_set_url(void* self, void* url);
char* q_webenginehttprequest_post_data(void* self);
void q_webenginehttprequest_set_post_data(void* self, const char* postData);
bool q_webenginehttprequest_has_header(void* self, const char* headerName);
const char** q_webenginehttprequest_headers(void* self);
char* q_webenginehttprequest_header(void* self, const char* headerName);
void q_webenginehttprequest_set_header(void* self, const char* headerName, const char* value);
void q_webenginehttprequest_unset_header(void* self, const char* headerName);
void q_webenginehttprequest_delete(void* self);

/// https://doc.qt.io/qt-6/qwebenginehttprequest.html#types

typedef enum {
    QWEBENGINEHTTPREQUEST_METHOD_GET = 0,
    QWEBENGINEHTTPREQUEST_METHOD_POST = 1
} QWebEngineHttpRequest__Method;

#endif
