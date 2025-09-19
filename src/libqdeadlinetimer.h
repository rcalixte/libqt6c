#pragma once
#ifndef SRCQT6C_LIBQDEADLINETIMER_H
#define SRCQT6C_LIBQDEADLINETIMER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qdeadlinetimer.html

/// q_deadlinetimer_new constructs a new QDeadlineTimer object.
///
/// @param other QDeadlineTimer*
QDeadlineTimer* q_deadlinetimer_new(void* other);

/// q_deadlinetimer_new2 constructs a new QDeadlineTimer object and invalidates the source QDeadlineTimer object.
///
/// @param other QDeadlineTimer*
QDeadlineTimer* q_deadlinetimer_new2(void* other);

/// q_deadlinetimer_new3 constructs a new QDeadlineTimer object.
///
QDeadlineTimer* q_deadlinetimer_new3();

/// q_deadlinetimer_new4 constructs a new QDeadlineTimer object.
///
/// @param type_ enum Qt__TimerType
QDeadlineTimer* q_deadlinetimer_new4(int32_t type_);

/// q_deadlinetimer_new5 constructs a new QDeadlineTimer object.
///
/// @param param1 enum QDeadlineTimer__ForeverConstant
QDeadlineTimer* q_deadlinetimer_new5(int32_t param1);

/// q_deadlinetimer_new6 constructs a new QDeadlineTimer object.
///
/// @param msecs long long
QDeadlineTimer* q_deadlinetimer_new6(long long msecs);

/// q_deadlinetimer_new7 constructs a new QDeadlineTimer object.
///
/// @param param1 QDeadlineTimer*
QDeadlineTimer* q_deadlinetimer_new7(void* param1);

/// q_deadlinetimer_new8 constructs a new QDeadlineTimer object.
///
/// @param param1 enum QDeadlineTimer__ForeverConstant
/// @param type_ enum Qt__TimerType
QDeadlineTimer* q_deadlinetimer_new8(int32_t param1, int32_t type_);

/// q_deadlinetimer_new9 constructs a new QDeadlineTimer object.
///
/// @param msecs long long
/// @param type enum Qt__TimerType
QDeadlineTimer* q_deadlinetimer_new9(long long msecs, int32_t type);

/// q_deadlinetimer_copy_assign shallow copies `other` into `self`.
///
/// @param self QDeadlineTimer*
/// @param other QDeadlineTimer*
void q_deadlinetimer_copy_assign(void* self, void* other);

/// q_deadlinetimer_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QDeadlineTimer*
/// @param other QDeadlineTimer*
void q_deadlinetimer_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#swap)
///
/// @param self QDeadlineTimer*
/// @param other QDeadlineTimer*
void q_deadlinetimer_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#isForever)
///
/// @param self QDeadlineTimer*
bool q_deadlinetimer_is_forever(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#hasExpired)
///
/// @param self QDeadlineTimer*
bool q_deadlinetimer_has_expired(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#timerType)
///
/// @param self QDeadlineTimer*
///
/// @return enum Qt__TimerType
int32_t q_deadlinetimer_timer_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#setTimerType)
///
/// @param self QDeadlineTimer*
/// @param type enum Qt__TimerType
void q_deadlinetimer_set_timer_type(void* self, int32_t type);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#remainingTime)
///
/// @param self QDeadlineTimer*
long long q_deadlinetimer_remaining_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#remainingTimeNSecs)
///
/// @param self QDeadlineTimer*
long long q_deadlinetimer_remaining_time_n_secs(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#setRemainingTime)
///
/// @param self QDeadlineTimer*
/// @param msecs long long
void q_deadlinetimer_set_remaining_time(void* self, long long msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseRemainingTime)
///
/// @param self QDeadlineTimer*
/// @param secs long long
void q_deadlinetimer_set_precise_remaining_time(void* self, long long secs);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#deadline)
///
/// @param self QDeadlineTimer*
long long q_deadlinetimer_deadline(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#deadlineNSecs)
///
/// @param self QDeadlineTimer*
long long q_deadlinetimer_deadline_n_secs(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#setDeadline)
///
/// @param self QDeadlineTimer*
/// @param msecs long long
void q_deadlinetimer_set_deadline(void* self, long long msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseDeadline)
///
/// @param self QDeadlineTimer*
/// @param secs long long
void q_deadlinetimer_set_precise_deadline(void* self, long long secs);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#addNSecs)
///
/// @param dt QDeadlineTimer*
/// @param nsecs long long
QDeadlineTimer* q_deadlinetimer_add_n_secs(void* dt, long long nsecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#current)
///
QDeadlineTimer* q_deadlinetimer_current();

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#operator-2b-eq)
///
/// @param self QDeadlineTimer*
/// @param msecs long long
QDeadlineTimer* q_deadlinetimer_operator_plus_assign(void* self, long long msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#operator--eq)
///
/// @param self QDeadlineTimer*
/// @param msecs long long
QDeadlineTimer* q_deadlinetimer_operator_minus_assign(void* self, long long msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#setRemainingTime)
///
/// @param self QDeadlineTimer*
/// @param msecs long long
/// @param type enum Qt__TimerType
void q_deadlinetimer_set_remaining_time2(void* self, long long msecs, int32_t type);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseRemainingTime)
///
/// @param self QDeadlineTimer*
/// @param secs long long
/// @param nsecs long long
void q_deadlinetimer_set_precise_remaining_time2(void* self, long long secs, long long nsecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseRemainingTime)
///
/// @param self QDeadlineTimer*
/// @param secs long long
/// @param nsecs long long
/// @param type enum Qt__TimerType
void q_deadlinetimer_set_precise_remaining_time3(void* self, long long secs, long long nsecs, int32_t type);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#setDeadline)
///
/// @param self QDeadlineTimer*
/// @param msecs long long
/// @param timerType enum Qt__TimerType
void q_deadlinetimer_set_deadline2(void* self, long long msecs, int32_t timerType);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseDeadline)
///
/// @param self QDeadlineTimer*
/// @param secs long long
/// @param nsecs long long
void q_deadlinetimer_set_precise_deadline2(void* self, long long secs, long long nsecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseDeadline)
///
/// @param self QDeadlineTimer*
/// @param secs long long
/// @param nsecs long long
/// @param type enum Qt__TimerType
void q_deadlinetimer_set_precise_deadline3(void* self, long long secs, long long nsecs, int32_t type);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#current)
///
/// @param timerType enum Qt__TimerType
QDeadlineTimer* q_deadlinetimer_current1(int32_t timerType);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#dtor.QDeadlineTimer)
///
/// Delete this object from C++ memory.
///
/// @param self QDeadlineTimer*
void q_deadlinetimer_delete(void* self);

/// https://doc.qt.io/qt-6/qdeadlinetimer.html#types

typedef enum {
    QDEADLINETIMER_FOREVERCONSTANT_FOREVER = 0
} QDeadlineTimer__ForeverConstant;

#endif
