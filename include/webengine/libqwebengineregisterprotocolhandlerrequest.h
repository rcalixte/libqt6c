#pragma once
#ifndef SRC_WEBENGINE_QT6C_LIBQWEBENGINEREGISTERPROTOCOLHANDLERREQUEST_H
#define SRC_WEBENGINE_QT6C_LIBQWEBENGINEREGISTERPROTOCOLHANDLERREQUEST_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QWebEngineRegisterProtocolHandlerRequest* q_webengineregisterprotocolhandlerrequest_new2(void* param1);

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
/// @param self QWebEngineRegisterProtocolHandlerRequest*
///
QUrl* q_webengineregisterprotocolhandlerrequest_origin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#scheme)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineRegisterProtocolHandlerRequest*
///
const char* q_webengineregisterprotocolhandlerrequest_scheme(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#operator-eq-eq)
///
/// @param self QWebEngineRegisterProtocolHandlerRequest*
/// @param that QWebEngineRegisterProtocolHandlerRequest*
///
bool q_webengineregisterprotocolhandlerrequest_operator_equal(void* self, void* that);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#operator-not-eq)
///
/// @param self QWebEngineRegisterProtocolHandlerRequest*
/// @param that QWebEngineRegisterProtocolHandlerRequest*
///
bool q_webengineregisterprotocolhandlerrequest_operator_not_equal(void* self, void* that);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#dtor.QWebEngineRegisterProtocolHandlerRequest)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineRegisterProtocolHandlerRequest*
///
void q_webengineregisterprotocolhandlerrequest_delete(void* self);

#endif
