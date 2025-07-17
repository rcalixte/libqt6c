#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQCAPTURABLEWINDOW_H
#define SRC_MULTIMEDIAQT6C_LIBQCAPTURABLEWINDOW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qcapturablewindow.html

/// q_capturablewindow_new constructs a new QCapturableWindow object.
///
///
QCapturableWindow* q_capturablewindow_new();

/// q_capturablewindow_new2 constructs a new QCapturableWindow object.
///
/// ``` QCapturableWindow* other ```
QCapturableWindow* q_capturablewindow_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcapturablewindow.html#operator-eq)
///
/// ``` QCapturableWindow* self, QCapturableWindow* other ```
void q_capturablewindow_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcapturablewindow.html#swap)
///
/// ``` QCapturableWindow* self, QCapturableWindow* other ```
void q_capturablewindow_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcapturablewindow.html#isValid)
///
/// ``` QCapturableWindow* self ```
bool q_capturablewindow_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcapturablewindow.html#description)
///
/// ``` QCapturableWindow* self ```
const char* q_capturablewindow_description(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcapturablewindow.html#dtor.QCapturableWindow)
///
/// Delete this object from C++ memory.
///
/// ``` QCapturableWindow* self ```
void q_capturablewindow_delete(void* self);

#endif
