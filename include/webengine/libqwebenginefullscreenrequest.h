#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEFULLSCREENREQUEST_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEFULLSCREENREQUEST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html

/// q_webenginefullscreenrequest_new constructs a new QWebEngineFullScreenRequest object.
///
/// ``` QWebEngineFullScreenRequest* other ```
QWebEngineFullScreenRequest* q_webenginefullscreenrequest_new(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#operator-eq)
///
/// ``` QWebEngineFullScreenRequest* self, QWebEngineFullScreenRequest* other ```
void q_webenginefullscreenrequest_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#reject)
///
/// ``` QWebEngineFullScreenRequest* self ```
void q_webenginefullscreenrequest_reject(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#accept)
///
/// ``` QWebEngineFullScreenRequest* self ```
void q_webenginefullscreenrequest_accept(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#toggleOn)
///
/// ``` QWebEngineFullScreenRequest* self ```
bool q_webenginefullscreenrequest_toggle_on(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#origin)
///
/// ``` QWebEngineFullScreenRequest* self ```
QUrl* q_webenginefullscreenrequest_origin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefullscreenrequest.html#dtor.QWebEngineFullScreenRequest)
///
/// Delete this object from C++ memory.
///
/// ``` QWebEngineFullScreenRequest* self ```
void q_webenginefullscreenrequest_delete(void* self);

#endif
