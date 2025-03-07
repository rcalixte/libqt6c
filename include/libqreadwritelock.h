#pragma once
#ifndef SRCQT6C_LIBQREADWRITELOCK_H
#define SRCQT6C_LIBQREADWRITELOCK_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

QReadWriteLock* q_readwritelock_new();
QReadWriteLock* q_readwritelock_new2(int64_t recursionMode);
void q_readwritelock_lock_for_read(void* self);
bool q_readwritelock_try_lock_for_read(void* self);
bool q_readwritelock_try_lock_for_read_with_timeout(void* self, int timeout);
void q_readwritelock_lock_for_write(void* self);
bool q_readwritelock_try_lock_for_write(void* self);
bool q_readwritelock_try_lock_for_write_with_timeout(void* self, int timeout);
void q_readwritelock_unlock(void* self);
void q_readwritelock_delete(void* self);

QReadLocker* q_readlocker_new(void* readWriteLock);
void q_readlocker_unlock(void* self);
void q_readlocker_relock(void* self);
QReadWriteLock* q_readlocker_read_write_lock(void* self);
void q_readlocker_delete(void* self);

QWriteLocker* q_writelocker_new(void* readWriteLock);
void q_writelocker_unlock(void* self);
void q_writelocker_relock(void* self);
QReadWriteLock* q_writelocker_read_write_lock(void* self);
void q_writelocker_delete(void* self);

/// https://doc.qt.io/qt-6/qreadwritelock.html#types

typedef enum {
    QREADWRITELOCK_RECURSIONMODE_NONRECURSIVE = 0,
    QREADWRITELOCK_RECURSIONMODE_RECURSIVE = 1
} QReadWriteLock__RecursionMode;

#endif
