#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEDESKTOPMEDIAREQUEST_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEDESKTOPMEDIAREQUEST_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html

/// q_webenginedesktopmediarequest_new constructs a new QWebEngineDesktopMediaRequest object.
///
/// @param other QWebEngineDesktopMediaRequest*
QWebEngineDesktopMediaRequest* q_webenginedesktopmediarequest_new(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#operator-eq)
///
/// @param self QWebEngineDesktopMediaRequest*
/// @param other QWebEngineDesktopMediaRequest*
void q_webenginedesktopmediarequest_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#swap)
///
/// @param self QWebEngineDesktopMediaRequest*
/// @param other QWebEngineDesktopMediaRequest*
void q_webenginedesktopmediarequest_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#screensModel)
///
/// @param self QWebEngineDesktopMediaRequest*
QAbstractListModel* q_webenginedesktopmediarequest_screens_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#windowsModel)
///
/// @param self QWebEngineDesktopMediaRequest*
QAbstractListModel* q_webenginedesktopmediarequest_windows_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#selectScreen)
///
/// @param self QWebEngineDesktopMediaRequest*
/// @param index QModelIndex*
void q_webenginedesktopmediarequest_select_screen(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#selectWindow)
///
/// @param self QWebEngineDesktopMediaRequest*
/// @param index QModelIndex*
void q_webenginedesktopmediarequest_select_window(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#cancel)
///
/// @param self QWebEngineDesktopMediaRequest*
void q_webenginedesktopmediarequest_cancel(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#dtor.QWebEngineDesktopMediaRequest)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineDesktopMediaRequest*
void q_webenginedesktopmediarequest_delete(void* self);

#endif
