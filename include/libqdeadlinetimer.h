#pragma once
#ifndef SRCQT6C_LIBQDEADLINETIMER_H
#define SRCQT6C_LIBQDEADLINETIMER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qdeadlinetimer.html

/// q_deadlinetimer_new constructs a new QDeadlineTimer object.
///
/// ``` QDeadlineTimer* other ```
QDeadlineTimer* q_deadlinetimer_new(void* other);

/// q_deadlinetimer_new2 constructs a new QDeadlineTimer object and invalidates the source QDeadlineTimer object.
///
/// ``` QDeadlineTimer* other ```
QDeadlineTimer* q_deadlinetimer_new2(void* other);

/// q_deadlinetimer_new3 constructs a new QDeadlineTimer object.
///
///
QDeadlineTimer* q_deadlinetimer_new3();

/// q_deadlinetimer_new4 constructs a new QDeadlineTimer object.
///
/// ``` enum Qt__TimerType type_ ```
QDeadlineTimer* q_deadlinetimer_new4(int64_t type_);

/// q_deadlinetimer_new5 constructs a new QDeadlineTimer object.
///
/// ``` enum QDeadlineTimer__ForeverConstant param1 ```
QDeadlineTimer* q_deadlinetimer_new5(int64_t param1);

/// q_deadlinetimer_new6 constructs a new QDeadlineTimer object.
///
/// ``` long long msecs ```
QDeadlineTimer* q_deadlinetimer_new6(long long msecs);

/// q_deadlinetimer_new7 constructs a new QDeadlineTimer object.
///
/// ``` QDeadlineTimer* param1 ```
QDeadlineTimer* q_deadlinetimer_new7(void* param1);

/// q_deadlinetimer_new8 constructs a new QDeadlineTimer object.
///
/// ``` enum QDeadlineTimer__ForeverConstant param1, enum Qt__TimerType type_ ```
QDeadlineTimer* q_deadlinetimer_new8(int64_t param1, int64_t type_);

/// q_deadlinetimer_new9 constructs a new QDeadlineTimer object.
///
/// ``` long long msecs, enum Qt__TimerType typeVal ```
QDeadlineTimer* q_deadlinetimer_new9(long long msecs, int64_t typeVal);

/// q_deadlinetimer_copy_assign shallow copies `other` into `self`.
///
/// ``` QDeadlineTimer* self, QDeadlineTimer* other ```
void q_deadlinetimer_copy_assign(void* self, void* other);

/// q_deadlinetimer_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QDeadlineTimer* self, QDeadlineTimer* other ```
void q_deadlinetimer_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#swap)
///
/// ``` QDeadlineTimer* self, QDeadlineTimer* other ```
void q_deadlinetimer_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#isForever)
///
/// ``` QDeadlineTimer* self ```
bool q_deadlinetimer_is_forever(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#hasExpired)
///
/// ``` QDeadlineTimer* self ```
bool q_deadlinetimer_has_expired(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#timerType)
///
/// ``` QDeadlineTimer* self ```
int64_t q_deadlinetimer_timer_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#setTimerType)
///
/// ``` QDeadlineTimer* self, enum Qt__TimerType typeVal ```
void q_deadlinetimer_set_timer_type(void* self, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#remainingTime)
///
/// ``` QDeadlineTimer* self ```
long long q_deadlinetimer_remaining_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#remainingTimeNSecs)
///
/// ``` QDeadlineTimer* self ```
long long q_deadlinetimer_remaining_time_n_secs(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#setRemainingTime)
///
/// ``` QDeadlineTimer* self, long long msecs ```
void q_deadlinetimer_set_remaining_time(void* self, long long msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseRemainingTime)
///
/// ``` QDeadlineTimer* self, long long secs ```
void q_deadlinetimer_set_precise_remaining_time(void* self, long long secs);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#deadline)
///
/// ``` QDeadlineTimer* self ```
long long q_deadlinetimer_deadline(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#deadlineNSecs)
///
/// ``` QDeadlineTimer* self ```
long long q_deadlinetimer_deadline_n_secs(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#setDeadline)
///
/// ``` QDeadlineTimer* self, long long msecs ```
void q_deadlinetimer_set_deadline(void* self, long long msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseDeadline)
///
/// ``` QDeadlineTimer* self, long long secs ```
void q_deadlinetimer_set_precise_deadline(void* self, long long secs);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#addNSecs)
///
/// ``` QDeadlineTimer* dt, long long nsecs ```
QDeadlineTimer* q_deadlinetimer_add_n_secs(void* dt, long long nsecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#current)
///
///
QDeadlineTimer* q_deadlinetimer_current();

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#operator+=)
///
/// ``` QDeadlineTimer* self, long long msecs ```
QDeadlineTimer* q_deadlinetimer_operator_plus_assign(void* self, long long msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#operator-=)
///
/// ``` QDeadlineTimer* self, long long msecs ```
QDeadlineTimer* q_deadlinetimer_operator_minus_assign(void* self, long long msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#setRemainingTime)
///
/// ``` QDeadlineTimer* self, long long msecs, enum Qt__TimerType typeVal ```
void q_deadlinetimer_set_remaining_time2(void* self, long long msecs, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseRemainingTime)
///
/// ``` QDeadlineTimer* self, long long secs, long long nsecs ```
void q_deadlinetimer_set_precise_remaining_time2(void* self, long long secs, long long nsecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseRemainingTime)
///
/// ``` QDeadlineTimer* self, long long secs, long long nsecs, enum Qt__TimerType typeVal ```
void q_deadlinetimer_set_precise_remaining_time3(void* self, long long secs, long long nsecs, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#setDeadline)
///
/// ``` QDeadlineTimer* self, long long msecs, enum Qt__TimerType timerType ```
void q_deadlinetimer_set_deadline2(void* self, long long msecs, int64_t timerType);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseDeadline)
///
/// ``` QDeadlineTimer* self, long long secs, long long nsecs ```
void q_deadlinetimer_set_precise_deadline2(void* self, long long secs, long long nsecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#setPreciseDeadline)
///
/// ``` QDeadlineTimer* self, long long secs, long long nsecs, enum Qt__TimerType typeVal ```
void q_deadlinetimer_set_precise_deadline3(void* self, long long secs, long long nsecs, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#current)
///
/// ``` enum Qt__TimerType timerType ```
QDeadlineTimer* q_deadlinetimer_current1(int64_t timerType);

/// [Qt documentation](https://doc.qt.io/qt-6/qdeadlinetimer.html#dtor.QDeadlineTimer)
///
/// Delete this object from C++ memory.
///
/// ``` QDeadlineTimer* self ```
void q_deadlinetimer_delete(void* self);

/// https://doc.qt.io/qt-6/qdeadlinetimer.html#types

typedef enum {
    QDEADLINETIMER_FOREVERCONSTANT_FOREVER = 0
} QDeadlineTimer__ForeverConstant;

#endif
