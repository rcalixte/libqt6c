#pragma once
#ifndef SRCQT6C_LIBQREADWRITELOCK_H
#define SRCQT6C_LIBQREADWRITELOCK_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qreadwritelock.html

/// q_readwritelock_new constructs a new QReadWriteLock object.
///
///
QReadWriteLock* q_readwritelock_new();

/// q_readwritelock_new2 constructs a new QReadWriteLock object.
///
/// ``` enum QReadWriteLock__RecursionMode recursionMode ```
QReadWriteLock* q_readwritelock_new2(int64_t recursionMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#lockForRead)
///
/// ``` QReadWriteLock* self ```
void q_readwritelock_lock_for_read(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForRead)
///
/// ``` QReadWriteLock* self, int timeout ```
bool q_readwritelock_try_lock_for_read(void* self, int timeout);

/// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForRead)
///
/// ``` QReadWriteLock* self ```
bool q_readwritelock_try_lock_for_read2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#lockForWrite)
///
/// ``` QReadWriteLock* self ```
void q_readwritelock_lock_for_write(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForWrite)
///
/// ``` QReadWriteLock* self, int timeout ```
bool q_readwritelock_try_lock_for_write(void* self, int timeout);

/// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForWrite)
///
/// ``` QReadWriteLock* self ```
bool q_readwritelock_try_lock_for_write2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#unlock)
///
/// ``` QReadWriteLock* self ```
void q_readwritelock_unlock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForRead)
///
/// ``` QReadWriteLock* self, QDeadlineTimer* timeout ```
bool q_readwritelock_try_lock_for_read1(void* self, void* timeout);

/// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForWrite)
///
/// ``` QReadWriteLock* self, QDeadlineTimer* timeout ```
bool q_readwritelock_try_lock_for_write1(void* self, void* timeout);

/// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#dtor.QReadWriteLock)
///
/// Delete this object from C++ memory.
///
/// ``` QReadWriteLock* self ```
void q_readwritelock_delete(void* self);

/// https://doc.qt.io/qt-6/qreadlocker.html

/// q_readlocker_new constructs a new QReadLocker object.
///
/// ``` QReadWriteLock* readWriteLock ```
QReadLocker* q_readlocker_new(void* readWriteLock);

/// [Qt documentation](https://doc.qt.io/qt-6/qreadlocker.html#unlock)
///
/// ``` QReadLocker* self ```
void q_readlocker_unlock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qreadlocker.html#relock)
///
/// ``` QReadLocker* self ```
void q_readlocker_relock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qreadlocker.html#readWriteLock)
///
/// ``` QReadLocker* self ```
QReadWriteLock* q_readlocker_read_write_lock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qreadlocker.html#dtor.QReadLocker)
///
/// Delete this object from C++ memory.
///
/// ``` QReadLocker* self ```
void q_readlocker_delete(void* self);

/// https://doc.qt.io/qt-6/qwritelocker.html

/// q_writelocker_new constructs a new QWriteLocker object.
///
/// ``` QReadWriteLock* readWriteLock ```
QWriteLocker* q_writelocker_new(void* readWriteLock);

/// [Qt documentation](https://doc.qt.io/qt-6/qwritelocker.html#unlock)
///
/// ``` QWriteLocker* self ```
void q_writelocker_unlock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwritelocker.html#relock)
///
/// ``` QWriteLocker* self ```
void q_writelocker_relock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwritelocker.html#readWriteLock)
///
/// ``` QWriteLocker* self ```
QReadWriteLock* q_writelocker_read_write_lock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwritelocker.html#dtor.QWriteLocker)
///
/// Delete this object from C++ memory.
///
/// ``` QWriteLocker* self ```
void q_writelocker_delete(void* self);

/// https://doc.qt.io/qt-6/qreadwritelock.html#types

typedef enum {
    QREADWRITELOCK_RECURSIONMODE_NONRECURSIVE = 0,
    QREADWRITELOCK_RECURSIONMODE_RECURSIVE = 1
} QReadWriteLock__RecursionMode;

#endif
