#pragma once
#ifndef SRCQT6C_LIBQBASICTIMER_H
#define SRCQT6C_LIBQBASICTIMER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qbasictimer.html

/// q_basictimer_new constructs a new QBasicTimer object.
///
///
QBasicTimer* q_basictimer_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qbasictimer.html#swap)
///
/// ``` QBasicTimer* self, QBasicTimer* other ```
void q_basictimer_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qbasictimer.html#isActive)
///
/// ``` QBasicTimer* self ```
bool q_basictimer_is_active(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbasictimer.html#timerId)
///
/// ``` QBasicTimer* self ```
int32_t q_basictimer_timer_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbasictimer.html#id)
///
/// ``` QBasicTimer* self ```
int64_t q_basictimer_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbasictimer.html#start)
///
/// ``` QBasicTimer* self, int msec, QObject* obj ```
void q_basictimer_start(void* self, int msec, void* obj);

/// [Qt documentation](https://doc.qt.io/qt-6/qbasictimer.html#start)
///
/// ``` QBasicTimer* self, int msec, enum Qt__TimerType timerType, QObject* obj ```
void q_basictimer_start2(void* self, int msec, int64_t timerType, void* obj);

/// [Qt documentation](https://doc.qt.io/qt-6/qbasictimer.html#stop)
///
/// ``` QBasicTimer* self ```
void q_basictimer_stop(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbasictimer.html#dtor.QBasicTimer)
///
/// Delete this object from C++ memory.
///
/// ``` QBasicTimer* self ```
void q_basictimer_delete(void* self);

#endif
