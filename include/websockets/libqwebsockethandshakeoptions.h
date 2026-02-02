#pragma once
#ifndef SRC_WEBSOCKETS_QT6C_LIBQWEBSOCKETHANDSHAKEOPTIONS_H
#define SRC_WEBSOCKETS_QT6C_LIBQWEBSOCKETHANDSHAKEOPTIONS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsockethandshakeoptions.html)

/// q_websockethandshakeoptions_new constructs a new QWebSocketHandshakeOptions object.
///
QWebSocketHandshakeOptions* q_websockethandshakeoptions_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsockethandshakeoptions.html)

/// q_websockethandshakeoptions_new2 constructs a new QWebSocketHandshakeOptions object.
///
/// @param other QWebSocketHandshakeOptions*
///
QWebSocketHandshakeOptions* q_websockethandshakeoptions_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsockethandshakeoptions.html#operator-eq)
///
/// @param self QWebSocketHandshakeOptions*
/// @param other QWebSocketHandshakeOptions*
///
void q_websockethandshakeoptions_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsockethandshakeoptions.html#swap)
///
/// @param self QWebSocketHandshakeOptions*
/// @param other QWebSocketHandshakeOptions*
///
void q_websockethandshakeoptions_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsockethandshakeoptions.html#subprotocols)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QWebSocketHandshakeOptions*
///
const char** q_websockethandshakeoptions_subprotocols(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsockethandshakeoptions.html#setSubprotocols)
///
/// @param self QWebSocketHandshakeOptions*
/// @param protocols const char**
///
void q_websockethandshakeoptions_set_subprotocols(void* self, const char* protocols[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsockethandshakeoptions.html#dtor.QWebSocketHandshakeOptions)
///
/// Delete this object from C++ memory.
///
/// @param self QWebSocketHandshakeOptions*
///
void q_websockethandshakeoptions_delete(void* self);

#endif
