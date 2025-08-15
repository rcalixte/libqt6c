#pragma once
#ifndef SRCQT6C_LIBQSEMAPHORE_H
#define SRCQT6C_LIBQSEMAPHORE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qsemaphore.html

/// q_semaphore_new constructs a new QSemaphore object.
///
QSemaphore* q_semaphore_new();

/// q_semaphore_new2 constructs a new QSemaphore object.
///
/// @param n int
QSemaphore* q_semaphore_new2(int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphore.html#acquire)
///
/// @param self QSemaphore*
void q_semaphore_acquire(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphore.html#tryAcquire)
///
/// @param self QSemaphore*
bool q_semaphore_try_acquire(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphore.html#tryAcquire)
///
/// @param self QSemaphore*
/// @param n int
/// @param timeout int
bool q_semaphore_try_acquire2(void* self, int n, int timeout);

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphore.html#tryAcquire)
///
/// @param self QSemaphore*
/// @param n int
/// @param timeout QDeadlineTimer*
bool q_semaphore_try_acquire3(void* self, int n, void* timeout);

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphore.html#release)
///
/// @param self QSemaphore*
void q_semaphore_release(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphore.html#available)
///
/// @param self QSemaphore*
int32_t q_semaphore_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphore.html#try_acquire)
///
/// @param self QSemaphore*
bool q_semaphore_try_acquire4(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphore.html#acquire)
///
/// @param self QSemaphore*
/// @param n int
void q_semaphore_acquire1(void* self, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphore.html#tryAcquire)
///
/// @param self QSemaphore*
/// @param n int
bool q_semaphore_try_acquire1(void* self, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphore.html#release)
///
/// @param self QSemaphore*
/// @param n int
void q_semaphore_release1(void* self, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphore.html#dtor.QSemaphore)
///
/// Delete this object from C++ memory.
///
/// @param self QSemaphore*
void q_semaphore_delete(void* self);

/// https://doc.qt.io/qt-6/qsemaphorereleaser.html

/// q_semaphorereleaser_new constructs a new QSemaphoreReleaser object.
///
QSemaphoreReleaser* q_semaphorereleaser_new();

/// q_semaphorereleaser_new2 constructs a new QSemaphoreReleaser object.
///
/// @param sem QSemaphore*
QSemaphoreReleaser* q_semaphorereleaser_new2(void* sem);

/// q_semaphorereleaser_new3 constructs a new QSemaphoreReleaser object.
///
/// @param sem QSemaphore*
QSemaphoreReleaser* q_semaphorereleaser_new3(void* sem);

/// q_semaphorereleaser_new4 constructs a new QSemaphoreReleaser object.
///
/// @param sem QSemaphore*
/// @param n int
QSemaphoreReleaser* q_semaphorereleaser_new4(void* sem, int n);

/// q_semaphorereleaser_new5 constructs a new QSemaphoreReleaser object.
///
/// @param sem QSemaphore*
/// @param n int
QSemaphoreReleaser* q_semaphorereleaser_new5(void* sem, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphorereleaser.html#swap)
///
/// @param self QSemaphoreReleaser*
/// @param other QSemaphoreReleaser*
void q_semaphorereleaser_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphorereleaser.html#semaphore)
///
/// @param self QSemaphoreReleaser*
QSemaphore* q_semaphorereleaser_semaphore(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphorereleaser.html#cancel)
///
/// @param self QSemaphoreReleaser*
QSemaphore* q_semaphorereleaser_cancel(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsemaphorereleaser.html#dtor.QSemaphoreReleaser)
///
/// Delete this object from C++ memory.
///
/// @param self QSemaphoreReleaser*
void q_semaphorereleaser_delete(void* self);

#endif
