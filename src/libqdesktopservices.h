#pragma once
#ifndef SRC_QT6C_LIBQDESKTOPSERVICES_H
#define SRC_QT6C_LIBQDESKTOPSERVICES_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qdesktopservices.html

/// q_desktopservices_new constructs a new QDesktopServices object.
///
/// @param other QDesktopServices*
QDesktopServices* q_desktopservices_new(void* other);

/// q_desktopservices_new2 constructs a new QDesktopServices object and invalidates the source QDesktopServices object.
///
/// @param other QDesktopServices*
QDesktopServices* q_desktopservices_new2(void* other);

/// q_desktopservices_copy_assign shallow copies `other` into `self`.
///
/// @param self QDesktopServices*
/// @param other QDesktopServices*
void q_desktopservices_copy_assign(void* self, void* other);

/// q_desktopservices_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QDesktopServices*
/// @param other QDesktopServices*
void q_desktopservices_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdesktopservices.html#openUrl)
///
/// @param url QUrl*
bool q_desktopservices_open_url(void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qdesktopservices.html#setUrlHandler)
///
/// @param scheme const char*
/// @param receiver QObject*
/// @param method const char*
void q_desktopservices_set_url_handler(const char* scheme, void* receiver, const char* method);

/// [Qt documentation](https://doc.qt.io/qt-6/qdesktopservices.html#unsetUrlHandler)
///
/// @param scheme const char*
void q_desktopservices_unset_url_handler(const char* scheme);

/// [Qt documentation](https://doc.qt.io/qt-6/qdesktopservices.html#dtor.QDesktopServices)
///
/// Delete this object from C++ memory.
///
/// @param self QDesktopServices*
void q_desktopservices_delete(void* self);

#endif
