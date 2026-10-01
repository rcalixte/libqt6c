#pragma once
#ifndef WEBENGINE_LIBQWEBENGINEDESKTOPMEDIAREQUEST_H
#define WEBENGINE_LIBQWEBENGINEDESKTOPMEDIAREQUEST_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html)

/// q_webenginedesktopmediarequest_new constructs a new QWebEngineDesktopMediaRequest object.
///
/// @param other QWebEngineDesktopMediaRequest*
///
QWebEngineDesktopMediaRequest* q_webenginedesktopmediarequest_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#operator-eq)
///
/// @param self QWebEngineDesktopMediaRequest*
/// @param other QWebEngineDesktopMediaRequest*
///
void q_webenginedesktopmediarequest_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#swap)
///
/// @param self QWebEngineDesktopMediaRequest*
/// @param other QWebEngineDesktopMediaRequest*
///
void q_webenginedesktopmediarequest_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#screensModel)
///
/// @param self const QWebEngineDesktopMediaRequest*
///
QAbstractListModel* q_webenginedesktopmediarequest_screens_model(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#windowsModel)
///
/// @param self const QWebEngineDesktopMediaRequest*
///
QAbstractListModel* q_webenginedesktopmediarequest_windows_model(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#selectScreen)
///
/// @param self const QWebEngineDesktopMediaRequest*
/// @param index QModelIndex*
///
void q_webenginedesktopmediarequest_select_screen(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#selectWindow)
///
/// @param self const QWebEngineDesktopMediaRequest*
/// @param index QModelIndex*
///
void q_webenginedesktopmediarequest_select_window(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#cancel)
///
/// @param self const QWebEngineDesktopMediaRequest*
///
void q_webenginedesktopmediarequest_cancel(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginedesktopmediarequest.html#dtor.QWebEngineDesktopMediaRequest)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineDesktopMediaRequest*
///
void q_webenginedesktopmediarequest_delete(void* self);

#endif
