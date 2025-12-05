#pragma once
#ifndef SRC_WEBENGINE_QT6C_LIBQWEBENGINEFULLSCREENREQUEST_H
#define SRC_WEBENGINE_QT6C_LIBQWEBENGINEFULLSCREENREQUEST_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html)

/// q_webenginefullscreenrequest_new constructs a new QWebEngineFullScreenRequest object.
///
/// @param other QWebEngineFullScreenRequest*
///
QWebEngineFullScreenRequest* q_webenginefullscreenrequest_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#operator-eq)
///
/// @param self QWebEngineFullScreenRequest*
/// @param other QWebEngineFullScreenRequest*
///
void q_webenginefullscreenrequest_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#reject)
///
/// @param self QWebEngineFullScreenRequest*
///
void q_webenginefullscreenrequest_reject(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#accept)
///
/// @param self QWebEngineFullScreenRequest*
///
void q_webenginefullscreenrequest_accept(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#toggleOn)
///
/// @param self QWebEngineFullScreenRequest*
///
bool q_webenginefullscreenrequest_toggle_on(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#origin)
///
/// @param self QWebEngineFullScreenRequest*
///
QUrl* q_webenginefullscreenrequest_origin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#dtor.QWebEngineFullScreenRequest)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineFullScreenRequest*
///
void q_webenginefullscreenrequest_delete(void* self);

#endif
