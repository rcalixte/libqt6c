#pragma once
#ifndef SRCQT6C_LIBQDEADLINETIMER_H
#define SRCQT6C_LIBQDEADLINETIMER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

QDeadlineTimer* q_deadlinetimer_new(void* other);
QDeadlineTimer* q_deadlinetimer_new2(void* other);
QDeadlineTimer* q_deadlinetimer_new3();
QDeadlineTimer* q_deadlinetimer_new4(int64_t param1);
QDeadlineTimer* q_deadlinetimer_new5(long long msecs);
QDeadlineTimer* q_deadlinetimer_new6(void* param1);
QDeadlineTimer* q_deadlinetimer_new7(int64_t type_);
QDeadlineTimer* q_deadlinetimer_new8(int64_t param1, int64_t type_);
QDeadlineTimer* q_deadlinetimer_new9(long long msecs, int64_t typeVal);
void q_deadlinetimer_copy_assign(void* self, void* other);
void q_deadlinetimer_move_assign(void* self, void* other);
void q_deadlinetimer_swap(void* self, void* other);
bool q_deadlinetimer_is_forever(void* self);
bool q_deadlinetimer_has_expired(void* self);
int64_t q_deadlinetimer_timer_type(void* self);
void q_deadlinetimer_set_timer_type(void* self, int64_t typeVal);
long long q_deadlinetimer_remaining_time(void* self);
long long q_deadlinetimer_remaining_time_n_secs(void* self);
void q_deadlinetimer_set_remaining_time(void* self, long long msecs);
void q_deadlinetimer_set_precise_remaining_time(void* self, long long secs);
long long q_deadlinetimer_deadline(void* self);
long long q_deadlinetimer_deadline_n_secs(void* self);
void q_deadlinetimer_set_deadline(void* self, long long msecs);
void q_deadlinetimer_set_precise_deadline(void* self, long long secs);
QDeadlineTimer* q_deadlinetimer_add_n_secs(void* dt, long long nsecs);
QDeadlineTimer* q_deadlinetimer_current();
QDeadlineTimer* q_deadlinetimer_operator_plus_assign(void* self, long long msecs);
QDeadlineTimer* q_deadlinetimer_operator_minus_assign(void* self, long long msecs);
void q_deadlinetimer_operator_assign(void* self, void* param1);
void q_deadlinetimer_set_remaining_time2(void* self, long long msecs, int64_t typeVal);
void q_deadlinetimer_set_precise_remaining_time2(void* self, long long secs, long long nsecs);
void q_deadlinetimer_set_precise_remaining_time3(void* self, long long secs, long long nsecs, int64_t typeVal);
void q_deadlinetimer_set_deadline2(void* self, long long msecs, int64_t timerType);
void q_deadlinetimer_set_precise_deadline2(void* self, long long secs, long long nsecs);
void q_deadlinetimer_set_precise_deadline3(void* self, long long secs, long long nsecs, int64_t typeVal);
QDeadlineTimer* q_deadlinetimer_current1(int64_t timerType);
void q_deadlinetimer_delete(void* self);

/// https://doc.qt.io/qt-6/qdeadlinetimer.html#types

typedef enum {
    QDEADLINETIMER_FOREVERCONSTANT_FOREVER = 0
} QDeadlineTimer__ForeverConstant;

#endif
