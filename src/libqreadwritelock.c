#include "libqreadwritelock.hpp"
#include "libqreadwritelock.h"

/// https://doc.qt.io/qt-6/qreadwritelock.html

/// q_readwritelock_new constructs a new QReadWriteLock object.
///
///
QReadWriteLock* q_readwritelock_new() {
    return QReadWriteLock_new();
}

/// q_readwritelock_new2 constructs a new QReadWriteLock object.
///
/// ``` enum QReadWriteLock__RecursionMode recursionMode ```
QReadWriteLock* q_readwritelock_new2(int64_t recursionMode) {
    return QReadWriteLock_new2(recursionMode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#lockForRead)
///
/// ``` QReadWriteLock* self ```
void q_readwritelock_lock_for_read(void* self) {
    QReadWriteLock_LockForRead((QReadWriteLock*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForRead)
///
/// ``` QReadWriteLock* self ```
bool q_readwritelock_try_lock_for_read(void* self) {
    return QReadWriteLock_TryLockForRead((QReadWriteLock*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForRead)
///
/// ``` QReadWriteLock* self, int timeout ```
bool q_readwritelock_try_lock_for_read_with_timeout(void* self, int timeout) {
    return QReadWriteLock_TryLockForReadWithTimeout((QReadWriteLock*)self, timeout);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#lockForWrite)
///
/// ``` QReadWriteLock* self ```
void q_readwritelock_lock_for_write(void* self) {
    QReadWriteLock_LockForWrite((QReadWriteLock*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForWrite)
///
/// ``` QReadWriteLock* self ```
bool q_readwritelock_try_lock_for_write(void* self) {
    return QReadWriteLock_TryLockForWrite((QReadWriteLock*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#tryLockForWrite)
///
/// ``` QReadWriteLock* self, int timeout ```
bool q_readwritelock_try_lock_for_write_with_timeout(void* self, int timeout) {
    return QReadWriteLock_TryLockForWriteWithTimeout((QReadWriteLock*)self, timeout);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qreadwritelock.html#unlock)
///
/// ``` QReadWriteLock* self ```
void q_readwritelock_unlock(void* self) {
    QReadWriteLock_Unlock((QReadWriteLock*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QReadWriteLock* self ```
void q_readwritelock_delete(void* self) {
    QReadWriteLock_Delete((QReadWriteLock*)(self));
}

/// https://doc.qt.io/qt-6/qreadlocker.html

/// q_readlocker_new constructs a new QReadLocker object.
///
/// ``` QReadWriteLock* readWriteLock ```
QReadLocker* q_readlocker_new(void* readWriteLock) {
    return QReadLocker_new((QReadWriteLock*)readWriteLock);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qreadlocker.html#unlock)
///
/// ``` QReadLocker* self ```
void q_readlocker_unlock(void* self) {
    QReadLocker_Unlock((QReadLocker*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qreadlocker.html#relock)
///
/// ``` QReadLocker* self ```
void q_readlocker_relock(void* self) {
    QReadLocker_Relock((QReadLocker*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qreadlocker.html#readWriteLock)
///
/// ``` QReadLocker* self ```
QReadWriteLock* q_readlocker_read_write_lock(void* self) {
    return QReadLocker_ReadWriteLock((QReadLocker*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QReadLocker* self ```
void q_readlocker_delete(void* self) {
    QReadLocker_Delete((QReadLocker*)(self));
}

/// https://doc.qt.io/qt-6/qwritelocker.html

/// q_writelocker_new constructs a new QWriteLocker object.
///
/// ``` QReadWriteLock* readWriteLock ```
QWriteLocker* q_writelocker_new(void* readWriteLock) {
    return QWriteLocker_new((QReadWriteLock*)readWriteLock);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwritelocker.html#unlock)
///
/// ``` QWriteLocker* self ```
void q_writelocker_unlock(void* self) {
    QWriteLocker_Unlock((QWriteLocker*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwritelocker.html#relock)
///
/// ``` QWriteLocker* self ```
void q_writelocker_relock(void* self) {
    QWriteLocker_Relock((QWriteLocker*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwritelocker.html#readWriteLock)
///
/// ``` QWriteLocker* self ```
QReadWriteLock* q_writelocker_read_write_lock(void* self) {
    return QWriteLocker_ReadWriteLock((QWriteLocker*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QWriteLocker* self ```
void q_writelocker_delete(void* self) {
    QWriteLocker_Delete((QWriteLocker*)(self));
}