#pragma once
#ifndef SRC_WEBENGINE_QT6C_LIBQWEBENGINEQUOTAREQUEST_H
#define SRC_WEBENGINE_QT6C_LIBQWEBENGINEQUOTAREQUEST_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebenginequotarequest.html

/// q_webenginequotarequest_new constructs a new QWebEngineQuotaRequest object.
///
/// @param other QWebEngineQuotaRequest*
QWebEngineQuotaRequest* q_webenginequotarequest_new(void* other);

/// q_webenginequotarequest_new2 constructs a new QWebEngineQuotaRequest object and invalidates the source QWebEngineQuotaRequest object.
///
/// @param other QWebEngineQuotaRequest*
QWebEngineQuotaRequest* q_webenginequotarequest_new2(void* other);

/// q_webenginequotarequest_new3 constructs a new QWebEngineQuotaRequest object.
///
QWebEngineQuotaRequest* q_webenginequotarequest_new3();

/// q_webenginequotarequest_copy_assign shallow copies `other` into `self`.
///
/// @param self QWebEngineQuotaRequest*
/// @param other QWebEngineQuotaRequest*
void q_webenginequotarequest_copy_assign(void* self, void* other);

/// q_webenginequotarequest_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QWebEngineQuotaRequest*
/// @param other QWebEngineQuotaRequest*
void q_webenginequotarequest_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginequotarequest.html#accept)
///
/// @param self QWebEngineQuotaRequest*
void q_webenginequotarequest_accept(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginequotarequest.html#reject)
///
/// @param self QWebEngineQuotaRequest*
void q_webenginequotarequest_reject(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginequotarequest.html#origin)
///
/// @param self QWebEngineQuotaRequest*
QUrl* q_webenginequotarequest_origin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginequotarequest.html#requestedSize)
///
/// @param self QWebEngineQuotaRequest*
long long q_webenginequotarequest_requested_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginequotarequest.html#operator-eq-eq)
///
/// @param self QWebEngineQuotaRequest*
/// @param param1 QWebEngineQuotaRequest*
bool q_webenginequotarequest_operator_equal(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginequotarequest.html#operator-not-eq)
///
/// @param self QWebEngineQuotaRequest*
/// @param param1 QWebEngineQuotaRequest*
bool q_webenginequotarequest_operator_not_equal(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginequotarequest.html#dtor.QWebEngineQuotaRequest)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineQuotaRequest*
void q_webenginequotarequest_delete(void* self);

#endif
