#pragma once
#ifndef SRCQT6C_LIBQLOCKFILE_H
#define SRCQT6C_LIBQLOCKFILE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qlockfile.html

/// q_lockfile_new constructs a new QLockFile object.
///
/// @param fileName const char*
QLockFile* q_lockfile_new(const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#fileName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLockFile*
const char* q_lockfile_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#lock)
///
/// @param self QLockFile*
bool q_lockfile_lock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#tryLock)
///
/// @param self QLockFile*
/// @param timeout int
bool q_lockfile_try_lock(void* self, int timeout);

/// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#unlock)
///
/// @param self QLockFile*
void q_lockfile_unlock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#setStaleLockTime)
///
/// @param self QLockFile*
/// @param staleLockTime int
void q_lockfile_set_stale_lock_time(void* self, int staleLockTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#staleLockTime)
///
/// @param self QLockFile*
int32_t q_lockfile_stale_lock_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#tryLock)
///
/// @param self QLockFile*
bool q_lockfile_try_lock2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#isLocked)
///
/// @param self QLockFile*
bool q_lockfile_is_locked(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#removeStaleLockFile)
///
/// @param self QLockFile*
bool q_lockfile_remove_stale_lock_file(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#error)
///
/// @param self QLockFile*
///
/// @return enum QLockFile__LockError
int64_t q_lockfile_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#dtor.QLockFile)
///
/// Delete this object from C++ memory.
///
/// @param self QLockFile*
void q_lockfile_delete(void* self);

/// https://doc.qt.io/qt-6/qlockfile.html#types

typedef enum {
    QLOCKFILE_LOCKERROR_NOERROR = 0,
    QLOCKFILE_LOCKERROR_LOCKFAILEDERROR = 1,
    QLOCKFILE_LOCKERROR_PERMISSIONERROR = 2,
    QLOCKFILE_LOCKERROR_UNKNOWNERROR = 3
} QLockFile__LockError;

#endif
