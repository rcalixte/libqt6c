#include <string.h>
#include "libqlockfile.hpp"
#include "libqlockfile.h"

/// https://doc.qt.io/qt-6/qlockfile.html

/// q_lockfile_new constructs a new QLockFile object.
///
/// ``` const char* fileName ```
QLockFile* q_lockfile_new(const char* fileName) {
    return QLockFile_new(qstring(fileName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#fileName)
///
/// ``` QLockFile* self ```
const char* q_lockfile_file_name(void* self) {
    libqt_string _str = QLockFile_FileName((QLockFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#lock)
///
/// ``` QLockFile* self ```
bool q_lockfile_lock(void* self) {
    return QLockFile_Lock((QLockFile*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#tryLock)
///
/// ``` QLockFile* self ```
bool q_lockfile_try_lock(void* self) {
    return QLockFile_TryLock((QLockFile*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#unlock)
///
/// ``` QLockFile* self ```
void q_lockfile_unlock(void* self) {
    QLockFile_Unlock((QLockFile*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#setStaleLockTime)
///
/// ``` QLockFile* self, int staleLockTime ```
void q_lockfile_set_stale_lock_time(void* self, int staleLockTime) {
    QLockFile_SetStaleLockTime((QLockFile*)self, staleLockTime);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#staleLockTime)
///
/// ``` QLockFile* self ```
int32_t q_lockfile_stale_lock_time(void* self) {
    return QLockFile_StaleLockTime((QLockFile*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#isLocked)
///
/// ``` QLockFile* self ```
bool q_lockfile_is_locked(void* self) {
    return QLockFile_IsLocked((QLockFile*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#removeStaleLockFile)
///
/// ``` QLockFile* self ```
bool q_lockfile_remove_stale_lock_file(void* self) {
    return QLockFile_RemoveStaleLockFile((QLockFile*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#error)
///
/// ``` QLockFile* self ```
int64_t q_lockfile_error(void* self) {
    return QLockFile_Error((QLockFile*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlockfile.html#tryLock)
///
/// ``` QLockFile* self, int timeout ```
bool q_lockfile_try_lock1(void* self, int timeout) {
    return QLockFile_TryLock1((QLockFile*)self, timeout);
}

/// Delete this object from C++ memory.
///
/// ``` QLockFile* self ```
void q_lockfile_delete(void* self) {
    QLockFile_Delete((QLockFile*)(self));
}