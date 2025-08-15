#pragma once
#ifndef SRCQT6C_LIBQREADWRITELOCK_H
#define SRCQT6C_LIBQREADWRITELOCK_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qreadwritelock.html

/// q_readwritelock_new constructs a new QReadWriteLock object.
///
QReadWriteLock* q_readwritelock_new();

/// q_readwritelock_new2 constructs a new QReadWriteLock object.
///
/// @param recursionMode enum QReadWriteLock__RecursionMode
QReadWriteLock* q_readwritelock_new2(int64_t recursionMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#lockForRead)
///
/// @param self QReadWriteLock*
void q_readwritelock_lock_for_read(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForRead)
///
/// @param self QReadWriteLock*
/// @param timeout int
bool q_readwritelock_try_lock_for_read(void* self, int timeout);

/// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForRead)
///
/// @param self QReadWriteLock*
bool q_readwritelock_try_lock_for_read2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#lockForWrite)
///
/// @param self QReadWriteLock*
void q_readwritelock_lock_for_write(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForWrite)
///
/// @param self QReadWriteLock*
/// @param timeout int
bool q_readwritelock_try_lock_for_write(void* self, int timeout);

/// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForWrite)
///
/// @param self QReadWriteLock*
bool q_readwritelock_try_lock_for_write2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#unlock)
///
/// @param self QReadWriteLock*
void q_readwritelock_unlock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForRead)
///
/// @param self QReadWriteLock*
/// @param timeout QDeadlineTimer*
bool q_readwritelock_try_lock_for_read1(void* self, void* timeout);

/// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForWrite)
///
/// @param self QReadWriteLock*
/// @param timeout QDeadlineTimer*
bool q_readwritelock_try_lock_for_write1(void* self, void* timeout);

/// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#dtor.QReadWriteLock)
///
/// Delete this object from C++ memory.
///
/// @param self QReadWriteLock*
void q_readwritelock_delete(void* self);

/// https://doc.qt.io/qt-6/qreadlocker.html

/// q_readlocker_new constructs a new QReadLocker object.
///
/// @param readWriteLock QReadWriteLock*
QReadLocker* q_readlocker_new(void* readWriteLock);

/// [Qt documentation](https://doc.qt.io/qt-6/qreadlocker.html#unlock)
///
/// @param self QReadLocker*
void q_readlocker_unlock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qreadlocker.html#relock)
///
/// @param self QReadLocker*
void q_readlocker_relock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qreadlocker.html#readWriteLock)
///
/// @param self QReadLocker*
QReadWriteLock* q_readlocker_read_write_lock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qreadlocker.html#dtor.QReadLocker)
///
/// Delete this object from C++ memory.
///
/// @param self QReadLocker*
void q_readlocker_delete(void* self);

/// https://doc.qt.io/qt-6/qwritelocker.html

/// q_writelocker_new constructs a new QWriteLocker object.
///
/// @param readWriteLock QReadWriteLock*
QWriteLocker* q_writelocker_new(void* readWriteLock);

/// [Qt documentation](https://doc.qt.io/qt-6/qwritelocker.html#unlock)
///
/// @param self QWriteLocker*
void q_writelocker_unlock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwritelocker.html#relock)
///
/// @param self QWriteLocker*
void q_writelocker_relock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwritelocker.html#readWriteLock)
///
/// @param self QWriteLocker*
QReadWriteLock* q_writelocker_read_write_lock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwritelocker.html#dtor.QWriteLocker)
///
/// Delete this object from C++ memory.
///
/// @param self QWriteLocker*
void q_writelocker_delete(void* self);

/// https://doc.qt.io/qt-6/qreadwritelock.html#types

typedef enum {
    QREADWRITELOCK_RECURSIONMODE_NONRECURSIVE = 0,
    QREADWRITELOCK_RECURSIONMODE_RECURSIVE = 1
} QReadWriteLock__RecursionMode;

#endif
