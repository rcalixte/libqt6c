#pragma once
#ifndef SRCQT6C_LIBQRUNNABLE_H
#define SRCQT6C_LIBQRUNNABLE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qrunnable.html

/// q_runnable_new constructs a new QRunnable object.
///
///
QRunnable* q_runnable_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qrunnable.html#run)
///
/// ``` QRunnable* self ```
void q_runnable_run(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrunnable.html#run)
///
/// Allows for overriding the related default method
///
/// ``` QRunnable* self, void (*slot)() ```
void q_runnable_on_run(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qrunnable.html#run)
///
/// Base class method implementation
///
/// ``` QRunnable* self ```
void q_runnable_qbase_run(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrunnable.html#autoDelete)
///
/// ``` QRunnable* self ```
bool q_runnable_auto_delete(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrunnable.html#setAutoDelete)
///
/// ``` QRunnable* self, bool autoDelete ```
void q_runnable_set_auto_delete(void* self, bool autoDelete);

/// [Qt documentation](https://doc.qt.io/qt-6/qrunnable.html#dtor.QRunnable)
///
/// Delete this object from C++ memory.
///
/// ``` QRunnable* self ```
void q_runnable_delete(void* self);

#endif
