#pragma once
#ifndef WEBENGINE_LIBQWEBENGINEREGISTERPROTOCOLHANDLERREQUEST_H
#define WEBENGINE_LIBQWEBENGINEREGISTERPROTOCOLHANDLERREQUEST_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html)

/// q_webengineregisterprotocolhandlerrequest_new constructs a new QWebEngineRegisterProtocolHandlerRequest object.
///
QWebEngineRegisterProtocolHandlerRequest* q_webengineregisterprotocolhandlerrequest_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html)

/// q_webengineregisterprotocolhandlerrequest_new2 constructs a new QWebEngineRegisterProtocolHandlerRequest object.
///
/// @param param1 QWebEngineRegisterProtocolHandlerRequest*
///
QWebEngineRegisterProtocolHandlerRequest* q_webengineregisterprotocolhandlerrequest_new2(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#accept)
///
/// @param self QWebEngineRegisterProtocolHandlerRequest*
///
void q_webengineregisterprotocolhandlerrequest_accept(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#reject)
///
/// @param self QWebEngineRegisterProtocolHandlerRequest*
///
void q_webengineregisterprotocolhandlerrequest_reject(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#origin)
///
/// @param self const QWebEngineRegisterProtocolHandlerRequest*
///
QUrl* q_webengineregisterprotocolhandlerrequest_origin(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#scheme)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QWebEngineRegisterProtocolHandlerRequest*
///
const char* q_webengineregisterprotocolhandlerrequest_scheme(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#operator-eq-eq)
///
/// @param self const QWebEngineRegisterProtocolHandlerRequest*
/// @param that QWebEngineRegisterProtocolHandlerRequest*
///
bool q_webengineregisterprotocolhandlerrequest_operator_equal(const void* self, const void* that);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#operator-not-eq)
///
/// @param self const QWebEngineRegisterProtocolHandlerRequest*
/// @param that QWebEngineRegisterProtocolHandlerRequest*
///
bool q_webengineregisterprotocolhandlerrequest_operator_not_equal(const void* self, const void* that);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#operator-eq)
///
/// @param self QWebEngineRegisterProtocolHandlerRequest*
/// @param param1 QWebEngineRegisterProtocolHandlerRequest*
///
void q_webengineregisterprotocolhandlerrequest_operator_assign(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#dtor.QWebEngineRegisterProtocolHandlerRequest)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineRegisterProtocolHandlerRequest*
///
void q_webengineregisterprotocolhandlerrequest_delete(void* self);

#endif
