#pragma once
#ifndef SRC_QT6C_LIBQRUNNABLE_H
#define SRC_QT6C_LIBQRUNNABLE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qrunnable.html

/// q_runnable_new constructs a new QRunnable object.
///
QRunnable* q_runnable_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qrunnable.html#run)
///
/// @param self QRunnable*
void q_runnable_run(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrunnable.html#run)
///
/// Allows for overriding the related default method
///
/// @param self QRunnable*
/// @param callback void func()
void q_runnable_on_run(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qrunnable.html#run)
///
/// Base class method implementation
///
/// @param self QRunnable*
void q_runnable_qbase_run(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrunnable.html#autoDelete)
///
/// @param self QRunnable*
bool q_runnable_auto_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrunnable.html#setAutoDelete)
///
/// @param self QRunnable*
/// @param autoDelete bool
void q_runnable_set_auto_delete(void* self, bool autoDelete);

/// [Upstream resources](https://doc.qt.io/qt-6/qrunnable.html#dtor.QRunnable)
///
/// Delete this object from C++ memory.
///
/// @param self QRunnable*
void q_runnable_delete(void* self);

#endif
