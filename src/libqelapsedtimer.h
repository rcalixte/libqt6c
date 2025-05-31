#pragma once
#ifndef SRCQT6C_LIBQELAPSEDTIMER_H
#define SRCQT6C_LIBQELAPSEDTIMER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qelapsedtimer.html

/// q_elapsedtimer_new constructs a new QElapsedTimer object.
///
/// ``` QElapsedTimer* other ```
QElapsedTimer* q_elapsedtimer_new(void* other);

/// q_elapsedtimer_new2 constructs a new QElapsedTimer object and invalidates the source QElapsedTimer object.
///
/// ``` QElapsedTimer* other ```
QElapsedTimer* q_elapsedtimer_new2(void* other);

/// q_elapsedtimer_new3 constructs a new QElapsedTimer object.
///
///
QElapsedTimer* q_elapsedtimer_new3();

/// q_elapsedtimer_copy_assign shallow copies `other` into `self`.
///
/// ``` QElapsedTimer* self, QElapsedTimer* other ```
void q_elapsedtimer_copy_assign(void* self, void* other);

/// q_elapsedtimer_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QElapsedTimer* self, QElapsedTimer* other ```
void q_elapsedtimer_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#clockType)
///
///
int64_t q_elapsedtimer_clock_type();

/// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#isMonotonic)
///
///
bool q_elapsedtimer_is_monotonic();

/// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#start)
///
/// ``` QElapsedTimer* self ```
void q_elapsedtimer_start(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#restart)
///
/// ``` QElapsedTimer* self ```
long long q_elapsedtimer_restart(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#invalidate)
///
/// ``` QElapsedTimer* self ```
void q_elapsedtimer_invalidate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#isValid)
///
/// ``` QElapsedTimer* self ```
bool q_elapsedtimer_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#nsecsElapsed)
///
/// ``` QElapsedTimer* self ```
long long q_elapsedtimer_nsecs_elapsed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#elapsed)
///
/// ``` QElapsedTimer* self ```
long long q_elapsedtimer_elapsed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#hasExpired)
///
/// ``` QElapsedTimer* self, long long timeout ```
bool q_elapsedtimer_has_expired(void* self, long long timeout);

/// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#msecsSinceReference)
///
/// ``` QElapsedTimer* self ```
long long q_elapsedtimer_msecs_since_reference(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#msecsTo)
///
/// ``` QElapsedTimer* self, QElapsedTimer* other ```
long long q_elapsedtimer_msecs_to(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#secsTo)
///
/// ``` QElapsedTimer* self, QElapsedTimer* other ```
long long q_elapsedtimer_secs_to(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#dtor.QElapsedTimer)
///
/// Delete this object from C++ memory.
///
/// ``` QElapsedTimer* self ```
void q_elapsedtimer_delete(void* self);

/// https://doc.qt.io/qt-6/qelapsedtimer.html#types

typedef enum {
    QELAPSEDTIMER_CLOCKTYPE_SYSTEMTIME = 0,
    QELAPSEDTIMER_CLOCKTYPE_MONOTONICCLOCK = 1,
    QELAPSEDTIMER_CLOCKTYPE_MACHABSOLUTETIME = 2,
    QELAPSEDTIMER_CLOCKTYPE_PERFORMANCECOUNTER = 3
} QElapsedTimer__ClockType;

#endif
