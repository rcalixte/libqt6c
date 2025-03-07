#pragma once
#ifndef SRCQT6C_LIBQELAPSEDTIMER_H
#define SRCQT6C_LIBQELAPSEDTIMER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

QElapsedTimer* q_elapsedtimer_new(void* other);
QElapsedTimer* q_elapsedtimer_new2(void* other);
QElapsedTimer* q_elapsedtimer_new3();
void q_elapsedtimer_copy_assign(void* self, void* other);
void q_elapsedtimer_move_assign(void* self, void* other);
int64_t q_elapsedtimer_clock_type();
bool q_elapsedtimer_is_monotonic();
void q_elapsedtimer_start(void* self);
long long q_elapsedtimer_restart(void* self);
void q_elapsedtimer_invalidate(void* self);
bool q_elapsedtimer_is_valid(void* self);
long long q_elapsedtimer_nsecs_elapsed(void* self);
long long q_elapsedtimer_elapsed(void* self);
bool q_elapsedtimer_has_expired(void* self, long long timeout);
long long q_elapsedtimer_msecs_since_reference(void* self);
long long q_elapsedtimer_msecs_to(void* self, void* other);
long long q_elapsedtimer_secs_to(void* self, void* other);
void q_elapsedtimer_delete(void* self);

/// https://doc.qt.io/qt-6/qelapsedtimer.html#types

typedef enum {
    QELAPSEDTIMER_CLOCKTYPE_SYSTEMTIME = 0,
    QELAPSEDTIMER_CLOCKTYPE_MONOTONICCLOCK = 1,
    QELAPSEDTIMER_CLOCKTYPE_MACHABSOLUTETIME = 2,
    QELAPSEDTIMER_CLOCKTYPE_PERFORMANCECOUNTER = 3
} QElapsedTimer__ClockType;

#endif
