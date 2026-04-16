#pragma once
#ifndef SRC_QT6C_LIBQDEADLINETIMER_H
#define SRC_QT6C_LIBQDEADLINETIMER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html)

/// q_deadlinetimer_new constructs a new QDeadlineTimer object.
///
/// @param other QDeadlineTimer*
///
QDeadlineTimer* q_deadlinetimer_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html)

/// q_deadlinetimer_new2 constructs a new QDeadlineTimer object and invalidates the source QDeadlineTimer object.
///
/// @param other QDeadlineTimer*
///
QDeadlineTimer* q_deadlinetimer_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html)

/// q_deadlinetimer_new3 constructs a new QDeadlineTimer object.
///
QDeadlineTimer* q_deadlinetimer_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html)

/// q_deadlinetimer_new4 constructs a new QDeadlineTimer object.
///
/// @param type_ enum Qt__TimerType
///
QDeadlineTimer* q_deadlinetimer_new4(int32_t type_);

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html)

/// q_deadlinetimer_new5 constructs a new QDeadlineTimer object.
///
/// @param param1 enum QDeadlineTimer__ForeverConstant
///
QDeadlineTimer* q_deadlinetimer_new5(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html)

/// q_deadlinetimer_new6 constructs a new QDeadlineTimer object.
///
/// @param msecs int64_t
///
QDeadlineTimer* q_deadlinetimer_new6(int64_t msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html)

/// q_deadlinetimer_new7 constructs a new QDeadlineTimer object.
///
/// @param param1 QDeadlineTimer*
///
QDeadlineTimer* q_deadlinetimer_new7(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html)

/// q_deadlinetimer_new8 constructs a new QDeadlineTimer object.
///
/// @param param1 enum QDeadlineTimer__ForeverConstant
/// @param type_ enum Qt__TimerType
///
QDeadlineTimer* q_deadlinetimer_new8(int32_t param1, int32_t type_);

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html)

/// q_deadlinetimer_new9 constructs a new QDeadlineTimer object.
///
/// @param msecs int64_t
/// @param type enum Qt__TimerType
///
QDeadlineTimer* q_deadlinetimer_new9(int64_t msecs, int32_t type);

/// q_deadlinetimer_copy_assign shallow copies `other` into `self`.
///
/// @param self QDeadlineTimer*
/// @param other QDeadlineTimer*
///
void q_deadlinetimer_copy_assign(void* self, void* other);

/// q_deadlinetimer_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QDeadlineTimer*
/// @param other QDeadlineTimer*
///
void q_deadlinetimer_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#swap)
///
/// @param self QDeadlineTimer*
/// @param other QDeadlineTimer*
///
void q_deadlinetimer_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#isForever)
///
/// @param self QDeadlineTimer*
///
bool q_deadlinetimer_is_forever(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#hasExpired)
///
/// @param self QDeadlineTimer*
///
bool q_deadlinetimer_has_expired(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#timerType)
///
/// @param self QDeadlineTimer*
///
/// @return enum Qt__TimerType
///
int32_t q_deadlinetimer_timer_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setTimerType)
///
/// @param self QDeadlineTimer*
/// @param type enum Qt__TimerType
///
void q_deadlinetimer_set_timer_type(void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#remainingTime)
///
/// @param self QDeadlineTimer*
///
int64_t q_deadlinetimer_remaining_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#remainingTimeNSecs)
///
/// @param self QDeadlineTimer*
///
int64_t q_deadlinetimer_remaining_time_n_secs(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setRemainingTime)
///
/// @param self QDeadlineTimer*
/// @param msecs int64_t
///
void q_deadlinetimer_set_remaining_time(void* self, int64_t msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseRemainingTime)
///
/// @param self QDeadlineTimer*
/// @param secs int64_t
///
void q_deadlinetimer_set_precise_remaining_time(void* self, int64_t secs);

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#deadline)
///
/// @param self QDeadlineTimer*
///
int64_t q_deadlinetimer_deadline(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#deadlineNSecs)
///
/// @param self QDeadlineTimer*
///
int64_t q_deadlinetimer_deadline_n_secs(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setDeadline)
///
/// @param self QDeadlineTimer*
/// @param msecs int64_t
///
void q_deadlinetimer_set_deadline(void* self, int64_t msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseDeadline)
///
/// @param self QDeadlineTimer*
/// @param secs int64_t
///
void q_deadlinetimer_set_precise_deadline(void* self, int64_t secs);

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#addNSecs)
///
/// @param dt QDeadlineTimer*
/// @param nsecs int64_t
///
QDeadlineTimer* q_deadlinetimer_add_n_secs(void* dt, int64_t nsecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#current)
///
QDeadlineTimer* q_deadlinetimer_current();

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#operator-2b-eq)
///
/// @param self QDeadlineTimer*
/// @param msecs int64_t
///
QDeadlineTimer* q_deadlinetimer_operator_plus_assign(void* self, int64_t msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#operator--eq)
///
/// @param self QDeadlineTimer*
/// @param msecs int64_t
///
QDeadlineTimer* q_deadlinetimer_operator_minus_assign(void* self, int64_t msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#remainingTimeAsDuration)
///
/// @param self QDeadlineTimer*
///
/// @return int64_t of nanoseconds
///
int64_t q_deadlinetimer_remaining_time_as_duration(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setRemainingTime)
///
/// @param self QDeadlineTimer*
/// @param msecs int64_t
/// @param type enum Qt__TimerType
///
void q_deadlinetimer_set_remaining_time2(void* self, int64_t msecs, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseRemainingTime)
///
/// @param self QDeadlineTimer*
/// @param secs int64_t
/// @param nsecs int64_t
///
void q_deadlinetimer_set_precise_remaining_time2(void* self, int64_t secs, int64_t nsecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseRemainingTime)
///
/// @param self QDeadlineTimer*
/// @param secs int64_t
/// @param nsecs int64_t
/// @param type enum Qt__TimerType
///
void q_deadlinetimer_set_precise_remaining_time3(void* self, int64_t secs, int64_t nsecs, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setDeadline)
///
/// @param self QDeadlineTimer*
/// @param msecs int64_t
/// @param timerType enum Qt__TimerType
///
void q_deadlinetimer_set_deadline2(void* self, int64_t msecs, int32_t timerType);

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseDeadline)
///
/// @param self QDeadlineTimer*
/// @param secs int64_t
/// @param nsecs int64_t
///
void q_deadlinetimer_set_precise_deadline2(void* self, int64_t secs, int64_t nsecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseDeadline)
///
/// @param self QDeadlineTimer*
/// @param secs int64_t
/// @param nsecs int64_t
/// @param type enum Qt__TimerType
///
void q_deadlinetimer_set_precise_deadline3(void* self, int64_t secs, int64_t nsecs, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#current)
///
/// @param timerType enum Qt__TimerType
///
QDeadlineTimer* q_deadlinetimer_current1(int32_t timerType);

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#dtor.QDeadlineTimer)
///
/// Delete this object from C++ memory.
///
/// @param self QDeadlineTimer*
///
void q_deadlinetimer_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdeadlinetimer.html#public-types)

typedef enum {
    QDEADLINETIMER_FOREVERCONSTANT_FOREVER = 0
} QDeadlineTimer__ForeverConstant;

#endif
