#pragma once
#ifndef SRC_WEBSOCKETS_QT6C_LIBQWEBSOCKETCORSAUTHENTICATOR_H
#define SRC_WEBSOCKETS_QT6C_LIBQWEBSOCKETCORSAUTHENTICATOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketcorsauthenticator.html)

/// q_websocketcorsauthenticator_new constructs a new QWebSocketCorsAuthenticator object.
///
/// @param origin const char*
///
QWebSocketCorsAuthenticator* q_websocketcorsauthenticator_new(const char* origin);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketcorsauthenticator.html)

/// q_websocketcorsauthenticator_new2 constructs a new QWebSocketCorsAuthenticator object.
///
/// @param other QWebSocketCorsAuthenticator*
///
QWebSocketCorsAuthenticator* q_websocketcorsauthenticator_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketcorsauthenticator.html#swap)
///
/// @param self QWebSocketCorsAuthenticator*
/// @param other QWebSocketCorsAuthenticator*
///
void q_websocketcorsauthenticator_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketcorsauthenticator.html#operator-eq)
///
/// @param self QWebSocketCorsAuthenticator*
/// @param other QWebSocketCorsAuthenticator*
///
void q_websocketcorsauthenticator_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketcorsauthenticator.html#origin)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWebSocketCorsAuthenticator*
///
const char* q_websocketcorsauthenticator_origin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketcorsauthenticator.html#setAllowed)
///
/// @param self QWebSocketCorsAuthenticator*
/// @param allowed bool
///
void q_websocketcorsauthenticator_set_allowed(void* self, bool allowed);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketcorsauthenticator.html#allowed)
///
/// @param self QWebSocketCorsAuthenticator*
///
bool q_websocketcorsauthenticator_allowed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketcorsauthenticator.html#dtor.QWebSocketCorsAuthenticator)
///
/// Delete this object from C++ memory.
///
/// @param self QWebSocketCorsAuthenticator*
///
void q_websocketcorsauthenticator_delete(void* self);

#endif
