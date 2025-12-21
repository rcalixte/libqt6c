#pragma once
#ifndef SRC_MULTIMEDIA_QT6C_LIBQCAPTURABLEWINDOW_H
#define SRC_MULTIMEDIA_QT6C_LIBQCAPTURABLEWINDOW_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qcapturablewindow.html)

/// q_capturablewindow_new constructs a new QCapturableWindow object.
///
QCapturableWindow* q_capturablewindow_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qcapturablewindow.html)

/// q_capturablewindow_new2 constructs a new QCapturableWindow object.
///
/// @param other QCapturableWindow*
///
QCapturableWindow* q_capturablewindow_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcapturablewindow.html#operator-eq)
///
/// @param self QCapturableWindow*
/// @param other QCapturableWindow*
///
void q_capturablewindow_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcapturablewindow.html#swap)
///
/// @param self QCapturableWindow*
/// @param other QCapturableWindow*
///
void q_capturablewindow_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcapturablewindow.html#isValid)
///
/// @param self QCapturableWindow*
///
bool q_capturablewindow_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcapturablewindow.html#description)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QCapturableWindow*
///
const char* q_capturablewindow_description(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcapturablewindow.html#dtor.QCapturableWindow)
///
/// Delete this object from C++ memory.
///
/// @param self QCapturableWindow*
///
void q_capturablewindow_delete(void* self);

#endif
