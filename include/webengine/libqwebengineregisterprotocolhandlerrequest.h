#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEREGISTERPROTOCOLHANDLERREQUEST_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEREGISTERPROTOCOLHANDLERREQUEST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include <string.h>
#include "../libqurl.h"

/// https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html

/// q_webengineregisterprotocolhandlerrequest_new constructs a new QWebEngineRegisterProtocolHandlerRequest object.
///
///
QWebEngineRegisterProtocolHandlerRequest* q_webengineregisterprotocolhandlerrequest_new();

/// q_webengineregisterprotocolhandlerrequest_new2 constructs a new QWebEngineRegisterProtocolHandlerRequest object.
///
/// ``` QWebEngineRegisterProtocolHandlerRequest* param1 ```
QWebEngineRegisterProtocolHandlerRequest* q_webengineregisterprotocolhandlerrequest_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#accept)
///
/// ``` QWebEngineRegisterProtocolHandlerRequest* self ```
void q_webengineregisterprotocolhandlerrequest_accept(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#reject)
///
/// ``` QWebEngineRegisterProtocolHandlerRequest* self ```
void q_webengineregisterprotocolhandlerrequest_reject(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#origin)
///
/// ``` QWebEngineRegisterProtocolHandlerRequest* self ```
QUrl* q_webengineregisterprotocolhandlerrequest_origin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#scheme)
///
/// ``` QWebEngineRegisterProtocolHandlerRequest* self ```
const char* q_webengineregisterprotocolhandlerrequest_scheme(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#operator==)
///
/// ``` QWebEngineRegisterProtocolHandlerRequest* self, QWebEngineRegisterProtocolHandlerRequest* that ```
bool q_webengineregisterprotocolhandlerrequest_operator_equal(void* self, void* that);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#operator!=)
///
/// ``` QWebEngineRegisterProtocolHandlerRequest* self, QWebEngineRegisterProtocolHandlerRequest* that ```
bool q_webengineregisterprotocolhandlerrequest_operator_not_equal(void* self, void* that);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#dtor.QWebEngineRegisterProtocolHandlerRequest)
///
/// Delete this object from C++ memory.
///
/// ``` QWebEngineRegisterProtocolHandlerRequest* self ```
void q_webengineregisterprotocolhandlerrequest_delete(void* self);

#endif
