#include "libqdeadlinetimer.hpp"
#include "libqreadwritelock.hpp"
#include "libqreadwritelock.h"

QReadWriteLock* q_readwritelock_new() {
    return QReadWriteLock_new();
}

QReadWriteLock* q_readwritelock_new2(int32_t recursionMode) {
    return QReadWriteLock_new2(recursionMode);
}

void q_readwritelock_lock_for_read(void* self) {
    QReadWriteLock_LockForRead((QReadWriteLock*)self);
}

bool q_readwritelock_try_lock_for_read(void* self, int timeout) {
    return QReadWriteLock_TryLockForRead((QReadWriteLock*)self, timeout);
}

bool q_readwritelock_try_lock_for_read2(void* self) {
    return QReadWriteLock_TryLockForRead2((QReadWriteLock*)self);
}

void q_readwritelock_lock_for_write(void* self) {
    QReadWriteLock_LockForWrite((QReadWriteLock*)self);
}

bool q_readwritelock_try_lock_for_write(void* self, int timeout) {
    return QReadWriteLock_TryLockForWrite((QReadWriteLock*)self, timeout);
}

bool q_readwritelock_try_lock_for_write2(void* self) {
    return QReadWriteLock_TryLockForWrite2((QReadWriteLock*)self);
}

void q_readwritelock_unlock(void* self) {
    QReadWriteLock_Unlock((QReadWriteLock*)self);
}

bool q_readwritelock_try_lock_for_read1(void* self, void* timeout) {
    return QReadWriteLock_TryLockForRead1((QReadWriteLock*)self, (QDeadlineTimer*)timeout);
}

bool q_readwritelock_try_lock_for_write1(void* self, void* timeout) {
    return QReadWriteLock_TryLockForWrite1((QReadWriteLock*)self, (QDeadlineTimer*)timeout);
}

void q_readwritelock_delete(void* self) {
    QReadWriteLock_Delete((QReadWriteLock*)(self));
}

QReadLocker* q_readlocker_new(void* readWriteLock) {
    return QReadLocker_new((QReadWriteLock*)readWriteLock);
}

void q_readlocker_unlock(void* self) {
    QReadLocker_Unlock((QReadLocker*)self);
}

void q_readlocker_relock(void* self) {
    QReadLocker_Relock((QReadLocker*)self);
}

QReadWriteLock* q_readlocker_read_write_lock(void* self) {
    return QReadLocker_ReadWriteLock((QReadLocker*)self);
}

void q_readlocker_delete(void* self) {
    QReadLocker_Delete((QReadLocker*)(self));
}

QWriteLocker* q_writelocker_new(void* readWriteLock) {
    return QWriteLocker_new((QReadWriteLock*)readWriteLock);
}

void q_writelocker_unlock(void* self) {
    QWriteLocker_Unlock((QWriteLocker*)self);
}

void q_writelocker_relock(void* self) {
    QWriteLocker_Relock((QWriteLocker*)self);
}

QReadWriteLock* q_writelocker_read_write_lock(void* self) {
    return QWriteLocker_ReadWriteLock((QWriteLocker*)self);
}

void q_writelocker_delete(void* self) {
    QWriteLocker_Delete((QWriteLocker*)(self));
}
