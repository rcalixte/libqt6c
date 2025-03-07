#pragma once
#ifndef SRCQT6C_LIBQWAITCONDITION_H
#define SRCQT6C_LIBQWAITCONDITION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqdeadlinetimer.h"
#include "libqmutex.h"
#include "libqreadwritelock.h"

QWaitCondition* q_waitcondition_new();
bool q_waitcondition_wait(void* self, void* lockedMutex);
bool q_waitcondition_wait2(void* self, void* lockedMutex, uint64_t time);
bool q_waitcondition_wait_with_locked_read_write_lock(void* self, void* lockedReadWriteLock);
bool q_waitcondition_wait3(void* self, void* lockedReadWriteLock, uint64_t time);
void q_waitcondition_wake_one(void* self);
void q_waitcondition_wake_all(void* self);
void q_waitcondition_notify_one(void* self);
void q_waitcondition_notify_all(void* self);
bool q_waitcondition_wait22(void* self, void* lockedMutex, void* deadline);
bool q_waitcondition_wait23(void* self, void* lockedReadWriteLock, void* deadline);
void q_waitcondition_delete(void* self);

#endif
