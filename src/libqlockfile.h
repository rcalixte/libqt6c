#pragma once
#ifndef SRCQT6C_LIBQLOCKFILE_H
#define SRCQT6C_LIBQLOCKFILE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include <string.h>

/// https://doc.qt.io/qt-6/qlockfile.html

/// q_lockfile_new constructs a new QLockFile object.
///
/// ``` const char* fileName ```
QLockFile* q_lockfile_new(const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#fileName)
///
/// ``` QLockFile* self ```
const char* q_lockfile_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#lock)
///
/// ``` QLockFile* self ```
bool q_lockfile_lock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#tryLock)
///
/// ``` QLockFile* self ```
bool q_lockfile_try_lock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#unlock)
///
/// ``` QLockFile* self ```
void q_lockfile_unlock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#setStaleLockTime)
///
/// ``` QLockFile* self, int staleLockTime ```
void q_lockfile_set_stale_lock_time(void* self, int staleLockTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#staleLockTime)
///
/// ``` QLockFile* self ```
int32_t q_lockfile_stale_lock_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#isLocked)
///
/// ``` QLockFile* self ```
bool q_lockfile_is_locked(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#removeStaleLockFile)
///
/// ``` QLockFile* self ```
bool q_lockfile_remove_stale_lock_file(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#error)
///
/// ``` QLockFile* self ```
int64_t q_lockfile_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#tryLock)
///
/// ``` QLockFile* self, int timeout ```
bool q_lockfile_try_lock1(void* self, int timeout);

/// Delete this object from C++ memory.
///
/// ``` QLockFile* self ```
void q_lockfile_delete(void* self);

/// https://doc.qt.io/qt-6/qlockfile.html#types

typedef enum {
    QLOCKFILE_LOCKERROR_NOERROR = 0,
    QLOCKFILE_LOCKERROR_LOCKFAILEDERROR = 1,
    QLOCKFILE_LOCKERROR_PERMISSIONERROR = 2,
    QLOCKFILE_LOCKERROR_UNKNOWNERROR = 3
} QLockFile__LockError;

#endif
