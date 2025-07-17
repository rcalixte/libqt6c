#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEQUOTAREQUEST_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEQUOTAREQUEST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebenginequotarequest.html

/// q_webenginequotarequest_new constructs a new QWebEngineQuotaRequest object.
///
/// ``` QWebEngineQuotaRequest* other ```
QWebEngineQuotaRequest* q_webenginequotarequest_new(void* other);

/// q_webenginequotarequest_new2 constructs a new QWebEngineQuotaRequest object and invalidates the source QWebEngineQuotaRequest object.
///
/// ``` QWebEngineQuotaRequest* other ```
QWebEngineQuotaRequest* q_webenginequotarequest_new2(void* other);

/// q_webenginequotarequest_new3 constructs a new QWebEngineQuotaRequest object.
///
///
QWebEngineQuotaRequest* q_webenginequotarequest_new3();

/// q_webenginequotarequest_copy_assign shallow copies `other` into `self`.
///
/// ``` QWebEngineQuotaRequest* self, QWebEngineQuotaRequest* other ```
void q_webenginequotarequest_copy_assign(void* self, void* other);

/// q_webenginequotarequest_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QWebEngineQuotaRequest* self, QWebEngineQuotaRequest* other ```
void q_webenginequotarequest_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginequotarequest.html#accept)
///
/// ``` QWebEngineQuotaRequest* self ```
void q_webenginequotarequest_accept(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginequotarequest.html#reject)
///
/// ``` QWebEngineQuotaRequest* self ```
void q_webenginequotarequest_reject(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginequotarequest.html#origin)
///
/// ``` QWebEngineQuotaRequest* self ```
QUrl* q_webenginequotarequest_origin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginequotarequest.html#requestedSize)
///
/// ``` QWebEngineQuotaRequest* self ```
long long q_webenginequotarequest_requested_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginequotarequest.html#operator-eq-eq)
///
/// ``` QWebEngineQuotaRequest* self, QWebEngineQuotaRequest* param1 ```
bool q_webenginequotarequest_operator_equal(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginequotarequest.html#operator-not-eq)
///
/// ``` QWebEngineQuotaRequest* self, QWebEngineQuotaRequest* param1 ```
bool q_webenginequotarequest_operator_not_equal(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginequotarequest.html#dtor.QWebEngineQuotaRequest)
///
/// Delete this object from C++ memory.
///
/// ``` QWebEngineQuotaRequest* self ```
void q_webenginequotarequest_delete(void* self);

#endif
