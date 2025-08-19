#include "libqlockfile.hpp"
#include "libqlockfile.h"

QLockFile* q_lockfile_new(const char* fileName) {
    return QLockFile_new(qstring(fileName));
}

const char* q_lockfile_file_name(void* self) {
    libqt_string _str = QLockFile_FileName((QLockFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_lockfile_lock(void* self) {
    return QLockFile_Lock((QLockFile*)self);
}

bool q_lockfile_try_lock(void* self, int timeout) {
    return QLockFile_TryLock((QLockFile*)self, timeout);
}

void q_lockfile_unlock(void* self) {
    QLockFile_Unlock((QLockFile*)self);
}

void q_lockfile_set_stale_lock_time(void* self, int staleLockTime) {
    QLockFile_SetStaleLockTime((QLockFile*)self, staleLockTime);
}

int32_t q_lockfile_stale_lock_time(void* self) {
    return QLockFile_StaleLockTime((QLockFile*)self);
}

bool q_lockfile_try_lock2(void* self) {
    return QLockFile_TryLock2((QLockFile*)self);
}

bool q_lockfile_is_locked(void* self) {
    return QLockFile_IsLocked((QLockFile*)self);
}

bool q_lockfile_remove_stale_lock_file(void* self) {
    return QLockFile_RemoveStaleLockFile((QLockFile*)self);
}

int32_t q_lockfile_error(void* self) {
    return QLockFile_Error((QLockFile*)self);
}

void q_lockfile_delete(void* self) {
    QLockFile_Delete((QLockFile*)(self));
}
