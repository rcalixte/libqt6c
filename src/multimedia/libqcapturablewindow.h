#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQCAPTURABLEWINDOW_H
#define SRC_MULTIMEDIAQT6C_LIBQCAPTURABLEWINDOW_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qcapturablewindow.html

/// q_capturablewindow_new constructs a new QCapturableWindow object.
///
QCapturableWindow* q_capturablewindow_new();

/// q_capturablewindow_new2 constructs a new QCapturableWindow object.
///
/// @param other QCapturableWindow*
QCapturableWindow* q_capturablewindow_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcapturablewindow.html#operator-eq)
///
/// @param self QCapturableWindow*
/// @param other QCapturableWindow*
void q_capturablewindow_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcapturablewindow.html#swap)
///
/// @param self QCapturableWindow*
/// @param other QCapturableWindow*
void q_capturablewindow_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcapturablewindow.html#isValid)
///
/// @param self QCapturableWindow*
bool q_capturablewindow_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcapturablewindow.html#description)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCapturableWindow*
const char* q_capturablewindow_description(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcapturablewindow.html#dtor.QCapturableWindow)
///
/// Delete this object from C++ memory.
///
/// @param self QCapturableWindow*
void q_capturablewindow_delete(void* self);

#endif
