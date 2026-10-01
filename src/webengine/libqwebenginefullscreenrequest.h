#pragma once
#ifndef WEBENGINE_LIBQWEBENGINEFULLSCREENREQUEST_H
#define WEBENGINE_LIBQWEBENGINEFULLSCREENREQUEST_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html)

/// q_webenginefullscreenrequest_new constructs a new QWebEngineFullScreenRequest object.
///
/// @param other QWebEngineFullScreenRequest*
///
QWebEngineFullScreenRequest* q_webenginefullscreenrequest_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#operator-eq)
///
/// @param self QWebEngineFullScreenRequest*
/// @param other QWebEngineFullScreenRequest*
///
void q_webenginefullscreenrequest_operator_assign(void* self, const void* other);

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
/// @param self const QWebEngineFullScreenRequest*
///
bool q_webenginefullscreenrequest_toggle_on(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#origin)
///
/// @param self const QWebEngineFullScreenRequest*
///
QUrl* q_webenginefullscreenrequest_origin(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#dtor.QWebEngineFullScreenRequest)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineFullScreenRequest*
///
void q_webenginefullscreenrequest_delete(void* self);

#endif
