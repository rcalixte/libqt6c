#pragma once
#ifndef SRCQT6C_LIBQSEMAPHORE_H
#define SRCQT6C_LIBQSEMAPHORE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

QSemaphore* q_semaphore_new();
QSemaphore* q_semaphore_new2(int n);
void q_semaphore_acquire(void* self);
bool q_semaphore_try_acquire(void* self);
bool q_semaphore_try_acquire2(void* self, int n, int timeout);
void q_semaphore_release(void* self);
int32_t q_semaphore_available(void* self);
bool q_semaphore_try_acquire3(void* self);
void q_semaphore_acquire1(void* self, int n);
bool q_semaphore_try_acquire1(void* self, int n);
void q_semaphore_release1(void* self, int n);
void q_semaphore_delete(void* self);

QSemaphoreReleaser* q_semaphorereleaser_new();
QSemaphoreReleaser* q_semaphorereleaser_new2(void* sem);
QSemaphoreReleaser* q_semaphorereleaser_new3(void* sem);
QSemaphoreReleaser* q_semaphorereleaser_new4(void* sem, int n);
QSemaphoreReleaser* q_semaphorereleaser_new5(void* sem, int n);
void q_semaphorereleaser_swap(void* self, void* other);
QSemaphore* q_semaphorereleaser_semaphore(void* self);
QSemaphore* q_semaphorereleaser_cancel(void* self);
void q_semaphorereleaser_delete(void* self);

#endif
