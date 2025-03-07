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

QLockFile* q_lockfile_new(const char* fileName);
const char* q_lockfile_file_name(void* self);
bool q_lockfile_lock(void* self);
bool q_lockfile_try_lock(void* self);
void q_lockfile_unlock(void* self);
void q_lockfile_set_stale_lock_time(void* self, int staleLockTime);
int32_t q_lockfile_stale_lock_time(void* self);
bool q_lockfile_is_locked(void* self);
bool q_lockfile_remove_stale_lock_file(void* self);
int64_t q_lockfile_error(void* self);
bool q_lockfile_try_lock1(void* self, int timeout);
void q_lockfile_delete(void* self);

/// https://doc.qt.io/qt-6/qlockfile.html#types

typedef enum {
    QLOCKFILE_LOCKERROR_NOERROR = 0,
    QLOCKFILE_LOCKERROR_LOCKFAILEDERROR = 1,
    QLOCKFILE_LOCKERROR_PERMISSIONERROR = 2,
    QLOCKFILE_LOCKERROR_UNKNOWNERROR = 3
} QLockFile__LockError;

#endif
