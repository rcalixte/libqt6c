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

/// https://doc.qt.io/qt-6/qwaitcondition.html

/// q_waitcondition_new constructs a new QWaitCondition object.
///
///
QWaitCondition* q_waitcondition_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qwaitcondition.html#wait)
///
/// ``` QWaitCondition* self, QMutex* lockedMutex ```
bool q_waitcondition_wait(void* self, void* lockedMutex);

/// [Qt documentation](https://doc.qt.io/qt-6/qwaitcondition.html#wait)
///
/// ``` QWaitCondition* self, QMutex* lockedMutex, uint64_t time ```
bool q_waitcondition_wait2(void* self, void* lockedMutex, uint64_t time);

/// [Qt documentation](https://doc.qt.io/qt-6/qwaitcondition.html#wait)
///
/// ``` QWaitCondition* self, QReadWriteLock* lockedReadWriteLock ```
bool q_waitcondition_wait_with_locked_read_write_lock(void* self, void* lockedReadWriteLock);

/// [Qt documentation](https://doc.qt.io/qt-6/qwaitcondition.html#wait)
///
/// ``` QWaitCondition* self, QReadWriteLock* lockedReadWriteLock, uint64_t time ```
bool q_waitcondition_wait3(void* self, void* lockedReadWriteLock, uint64_t time);

/// [Qt documentation](https://doc.qt.io/qt-6/qwaitcondition.html#wakeOne)
///
/// ``` QWaitCondition* self ```
void q_waitcondition_wake_one(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwaitcondition.html#wakeAll)
///
/// ``` QWaitCondition* self ```
void q_waitcondition_wake_all(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwaitcondition.html#notify_one)
///
/// ``` QWaitCondition* self ```
void q_waitcondition_notify_one(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwaitcondition.html#notify_all)
///
/// ``` QWaitCondition* self ```
void q_waitcondition_notify_all(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwaitcondition.html#wait)
///
/// ``` QWaitCondition* self, QMutex* lockedMutex, QDeadlineTimer* deadline ```
bool q_waitcondition_wait22(void* self, void* lockedMutex, void* deadline);

/// [Qt documentation](https://doc.qt.io/qt-6/qwaitcondition.html#wait)
///
/// ``` QWaitCondition* self, QReadWriteLock* lockedReadWriteLock, QDeadlineTimer* deadline ```
bool q_waitcondition_wait23(void* self, void* lockedReadWriteLock, void* deadline);

/// [Qt documentation](https://doc.qt.io/qt-6/qwaitcondition.html#dtor.QWaitCondition)
///
/// Delete this object from C++ memory.
///
/// ``` QWaitCondition* self ```
void q_waitcondition_delete(void* self);

#endif
