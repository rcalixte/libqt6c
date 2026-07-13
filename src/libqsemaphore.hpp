#pragma once
#ifndef SRCC_LIBQSEMAPHORE_HPP
#define SRCC_LIBQSEMAPHORE_HPP

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDeadlineTimer QDeadlineTimer;
typedef struct QSemaphore QSemaphore;
typedef struct QSemaphoreReleaser QSemaphoreReleaser;
#endif

QSemaphore* QSemaphore_New();
QSemaphore* QSemaphore_New2(int n);
void QSemaphore_Acquire(QSemaphore* self);
bool QSemaphore_TryAcquire(QSemaphore* self);
bool QSemaphore_TryAcquire2(QSemaphore* self, int n, int timeout);
bool QSemaphore_TryAcquire3(QSemaphore* self, int n, QDeadlineTimer* timeout);
void QSemaphore_Release(QSemaphore* self);
int QSemaphore_Available(const QSemaphore* self);
bool QSemaphore_TryAcquire4(QSemaphore* self);
void QSemaphore_Acquire1(QSemaphore* self, int n);
bool QSemaphore_TryAcquire1(QSemaphore* self, int n);
void QSemaphore_Release1(QSemaphore* self, int n);
void QSemaphore_Delete(QSemaphore* self);

QSemaphoreReleaser* QSemaphoreReleaser_New();
QSemaphoreReleaser* QSemaphoreReleaser_New2(QSemaphore* sem);
QSemaphoreReleaser* QSemaphoreReleaser_New3(QSemaphore* sem);
QSemaphoreReleaser* QSemaphoreReleaser_New4(QSemaphore* sem, int n);
QSemaphoreReleaser* QSemaphoreReleaser_New5(QSemaphore* sem, int n);
void QSemaphoreReleaser_Swap(QSemaphoreReleaser* self, QSemaphoreReleaser* other);
QSemaphore* QSemaphoreReleaser_Semaphore(const QSemaphoreReleaser* self);
QSemaphore* QSemaphoreReleaser_Cancel(QSemaphoreReleaser* self);
void QSemaphoreReleaser_Delete(QSemaphoreReleaser* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
