#pragma once
#ifndef SRCQT6C_LIBQBASICTIMER_H
#define SRCQT6C_LIBQBASICTIMER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqobject.h"

QBasicTimer* q_basictimer_new();
void q_basictimer_swap(void* self, void* other);
bool q_basictimer_is_active(void* self);
int32_t q_basictimer_timer_id(void* self);
void q_basictimer_start(void* self, int msec, void* obj);
void q_basictimer_start2(void* self, int msec, int64_t timerType, void* obj);
void q_basictimer_stop(void* self);
void q_basictimer_delete(void* self);

#endif
