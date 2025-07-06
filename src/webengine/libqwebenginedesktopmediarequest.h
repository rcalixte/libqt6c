#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEDESKTOPMEDIAREQUEST_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEDESKTOPMEDIAREQUEST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html

/// q_webenginedesktopmediarequest_new constructs a new QWebEngineDesktopMediaRequest object.
///
/// ``` QWebEngineDesktopMediaRequest* other ```
QWebEngineDesktopMediaRequest* q_webenginedesktopmediarequest_new(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#operator=)
///
/// ``` QWebEngineDesktopMediaRequest* self, QWebEngineDesktopMediaRequest* other ```
void q_webenginedesktopmediarequest_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#swap)
///
/// ``` QWebEngineDesktopMediaRequest* self, QWebEngineDesktopMediaRequest* other ```
void q_webenginedesktopmediarequest_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#screensModel)
///
/// ``` QWebEngineDesktopMediaRequest* self ```
QAbstractListModel* q_webenginedesktopmediarequest_screens_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#windowsModel)
///
/// ``` QWebEngineDesktopMediaRequest* self ```
QAbstractListModel* q_webenginedesktopmediarequest_windows_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#selectScreen)
///
/// ``` QWebEngineDesktopMediaRequest* self, QModelIndex* index ```
void q_webenginedesktopmediarequest_select_screen(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#selectWindow)
///
/// ``` QWebEngineDesktopMediaRequest* self, QModelIndex* index ```
void q_webenginedesktopmediarequest_select_window(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#cancel)
///
/// ``` QWebEngineDesktopMediaRequest* self ```
void q_webenginedesktopmediarequest_cancel(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#dtor.QWebEngineDesktopMediaRequest)
///
/// Delete this object from C++ memory.
///
/// ``` QWebEngineDesktopMediaRequest* self ```
void q_webenginedesktopmediarequest_delete(void* self);

#endif
