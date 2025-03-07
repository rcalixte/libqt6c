#pragma once
#ifndef SRCQT6C_LIBQMUTEX_H
#define SRCQT6C_LIBQMUTEX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

QBasicMutex* q_basicmutex_new();
void q_basicmutex_lock(void* self);
void q_basicmutex_unlock(void* self);
bool q_basicmutex_try_lock(void* self);
bool q_basicmutex_try_lock2(void* self);
void q_basicmutex_delete(void* self);

QMutex* q_mutex_new();
bool q_mutex_try_lock(void* self);
bool q_mutex_try_lock_with_timeout(void* self, int timeout);
void q_mutex_lock(void* self);
void q_mutex_unlock(void* self);
bool q_mutex_try_lock2(void* self);
void q_mutex_delete(void* self);

QRecursiveMutex* q_recursivemutex_new();
void q_recursivemutex_lock(void* self);
bool q_recursivemutex_try_lock(void* self);
void q_recursivemutex_unlock(void* self);
bool q_recursivemutex_try_lock2(void* self);
bool q_recursivemutex_try_lock1(void* self, int timeout);
void q_recursivemutex_delete(void* self);

#endif
