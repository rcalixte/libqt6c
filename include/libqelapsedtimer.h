#pragma once
#ifndef LIBQELAPSEDTIMER_H
#define LIBQELAPSEDTIMER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html)

/// q_elapsedtimer_new constructs a new QElapsedTimer object.
///
QElapsedTimer* q_elapsedtimer_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html)

/// q_elapsedtimer_new2 constructs a new QElapsedTimer object.
///
/// @param other QElapsedTimer*
///
QElapsedTimer* q_elapsedtimer_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html)

/// q_elapsedtimer_new3 constructs a new QElapsedTimer object and invalidates the source QElapsedTimer object.
///
/// @param other QElapsedTimer*
///
QElapsedTimer* q_elapsedtimer_new3(void* other);

/// q_elapsedtimer_copy_assign shallow copies `other` into `self`.
///
/// @param self QElapsedTimer*
/// @param other QElapsedTimer*
///
void q_elapsedtimer_copy_assign(void* self, void* other);

/// q_elapsedtimer_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QElapsedTimer*
/// @param other QElapsedTimer*
///
void q_elapsedtimer_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#clockType)
///
/// @return enum QElapsedTimer__ClockType
///
int32_t q_elapsedtimer_clock_type();

/// [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#isMonotonic)
///
bool q_elapsedtimer_is_monotonic();

/// [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#start)
///
/// @param self QElapsedTimer*
///
void q_elapsedtimer_start(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#restart)
///
/// @param self QElapsedTimer*
///
int64_t q_elapsedtimer_restart(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#invalidate)
///
/// @param self QElapsedTimer*
///
void q_elapsedtimer_invalidate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#isValid)
///
/// @param self const QElapsedTimer*
///
bool q_elapsedtimer_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#nsecsElapsed)
///
/// @param self const QElapsedTimer*
///
int64_t q_elapsedtimer_nsecs_elapsed(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#elapsed)
///
/// @param self const QElapsedTimer*
///
int64_t q_elapsedtimer_elapsed(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#hasExpired)
///
/// @param self const QElapsedTimer*
/// @param timeout int64_t
///
bool q_elapsedtimer_has_expired(const void* self, int64_t timeout);

/// [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#msecsSinceReference)
///
/// @param self const QElapsedTimer*
///
int64_t q_elapsedtimer_msecs_since_reference(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#msecsTo)
///
/// @param self const QElapsedTimer*
/// @param other QElapsedTimer*
///
int64_t q_elapsedtimer_msecs_to(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#secsTo)
///
/// @param self const QElapsedTimer*
/// @param other QElapsedTimer*
///
int64_t q_elapsedtimer_secs_to(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#dtor.QElapsedTimer)
///
/// Delete this object from C++ memory.
///
/// @param self QElapsedTimer*
///
void q_elapsedtimer_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qelapsedtimer.html#public-types)

typedef enum {
    QELAPSEDTIMER_CLOCKTYPE_SYSTEMTIME = 0,
    QELAPSEDTIMER_CLOCKTYPE_MONOTONICCLOCK = 1,
    QELAPSEDTIMER_CLOCKTYPE_MACHABSOLUTETIME = 2,
    QELAPSEDTIMER_CLOCKTYPE_PERFORMANCECOUNTER = 3
} QElapsedTimer__ClockType;

#endif
