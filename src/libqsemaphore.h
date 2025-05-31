#pragma once
#ifndef SRCQT6C_LIBQSEMAPHORE_H
#define SRCQT6C_LIBQSEMAPHORE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qsemaphore.html

/// q_semaphore_new constructs a new QSemaphore object.
///
///
QSemaphore* q_semaphore_new();

/// q_semaphore_new2 constructs a new QSemaphore object.
///
/// ``` int n ```
QSemaphore* q_semaphore_new2(int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphore.html#acquire)
///
/// ``` QSemaphore* self ```
void q_semaphore_acquire(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphore.html#tryAcquire)
///
/// ``` QSemaphore* self ```
bool q_semaphore_try_acquire(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphore.html#tryAcquire)
///
/// ``` QSemaphore* self, int n, int timeout ```
bool q_semaphore_try_acquire2(void* self, int n, int timeout);

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphore.html#release)
///
/// ``` QSemaphore* self ```
void q_semaphore_release(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphore.html#available)
///
/// ``` QSemaphore* self ```
int32_t q_semaphore_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphore.html#try_acquire)
///
/// ``` QSemaphore* self ```
bool q_semaphore_try_acquire3(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphore.html#acquire)
///
/// ``` QSemaphore* self, int n ```
void q_semaphore_acquire1(void* self, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphore.html#tryAcquire)
///
/// ``` QSemaphore* self, int n ```
bool q_semaphore_try_acquire1(void* self, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphore.html#release)
///
/// ``` QSemaphore* self, int n ```
void q_semaphore_release1(void* self, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphore.html#dtor.QSemaphore)
///
/// Delete this object from C++ memory.
///
/// ``` QSemaphore* self ```
void q_semaphore_delete(void* self);

/// https://doc.qt.io/qt-6/qsemaphorereleaser.html

/// q_semaphorereleaser_new constructs a new QSemaphoreReleaser object.
///
///
QSemaphoreReleaser* q_semaphorereleaser_new();

/// q_semaphorereleaser_new2 constructs a new QSemaphoreReleaser object.
///
/// ``` QSemaphore* sem ```
QSemaphoreReleaser* q_semaphorereleaser_new2(void* sem);

/// q_semaphorereleaser_new3 constructs a new QSemaphoreReleaser object.
///
/// ``` QSemaphore* sem ```
QSemaphoreReleaser* q_semaphorereleaser_new3(void* sem);

/// q_semaphorereleaser_new4 constructs a new QSemaphoreReleaser object.
///
/// ``` QSemaphore* sem, int n ```
QSemaphoreReleaser* q_semaphorereleaser_new4(void* sem, int n);

/// q_semaphorereleaser_new5 constructs a new QSemaphoreReleaser object.
///
/// ``` QSemaphore* sem, int n ```
QSemaphoreReleaser* q_semaphorereleaser_new5(void* sem, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphorereleaser.html#swap)
///
/// ``` QSemaphoreReleaser* self, QSemaphoreReleaser* other ```
void q_semaphorereleaser_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphorereleaser.html#semaphore)
///
/// ``` QSemaphoreReleaser* self ```
QSemaphore* q_semaphorereleaser_semaphore(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphorereleaser.html#cancel)
///
/// ``` QSemaphoreReleaser* self ```
QSemaphore* q_semaphorereleaser_cancel(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphorereleaser.html#dtor.QSemaphoreReleaser)
///
/// Delete this object from C++ memory.
///
/// ``` QSemaphoreReleaser* self ```
void q_semaphorereleaser_delete(void* self);

#endif
