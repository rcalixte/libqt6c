#include "libqmutex.hpp"
#include "libqmutex.h"

/// https://doc.qt.io/qt-6/qbasicmutex.html

/// q_basicmutex_new constructs a new QBasicMutex object.
///
///
QBasicMutex* q_basicmutex_new() {
    return QBasicMutex_new();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbasicmutex.html#lock)
///
/// ``` QBasicMutex* self ```
void q_basicmutex_lock(void* self) {
    QBasicMutex_Lock((QBasicMutex*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbasicmutex.html#unlock)
///
/// ``` QBasicMutex* self ```
void q_basicmutex_unlock(void* self) {
    QBasicMutex_Unlock((QBasicMutex*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbasicmutex.html#tryLock)
///
/// ``` QBasicMutex* self ```
bool q_basicmutex_try_lock(void* self) {
    return QBasicMutex_TryLock((QBasicMutex*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbasicmutex.html#try_lock)
///
/// ``` QBasicMutex* self ```
bool q_basicmutex_try_lock2(void* self) {
    return QBasicMutex_TryLock2((QBasicMutex*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QBasicMutex* self ```
void q_basicmutex_delete(void* self) {
    QBasicMutex_Delete((QBasicMutex*)(self));
}

/// https://doc.qt.io/qt-6/qmutex.html

/// q_mutex_new constructs a new QMutex object.
///
///
QMutex* q_mutex_new() {
    return QMutex_new();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmutex.html#try_lock)
///
/// ``` QMutex* self ```
bool q_mutex_try_lock(void* self) {
    return QMutex_TryLock((QMutex*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmutex.html#tryLock)
///
/// ``` QMutex* self, int timeout ```
bool q_mutex_try_lock_with_timeout(void* self, int timeout) {
    return QMutex_TryLockWithTimeout((QMutex*)self, timeout);
}

/// Inherited from QBasicMutex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbasicmutex.html#lock)
///
/// ``` QMutex* self ```
void q_mutex_lock(void* self) {
    QBasicMutex_Lock((QBasicMutex*)self);
}

/// Inherited from QBasicMutex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbasicmutex.html#unlock)
///
/// ``` QMutex* self ```
void q_mutex_unlock(void* self) {
    QBasicMutex_Unlock((QBasicMutex*)self);
}

/// Inherited from QBasicMutex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbasicmutex.html#try_lock)
///
/// ``` QMutex* self ```
bool q_mutex_try_lock2(void* self) {
    return QBasicMutex_TryLock2((QBasicMutex*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QMutex* self ```
void q_mutex_delete(void* self) {
    QMutex_Delete((QMutex*)(self));
}

/// https://doc.qt.io/qt-6/qrecursivemutex.html

/// q_recursivemutex_new constructs a new QRecursiveMutex object.
///
///
QRecursiveMutex* q_recursivemutex_new() {
    return QRecursiveMutex_new();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrecursivemutex.html#lock)
///
/// ``` QRecursiveMutex* self ```
void q_recursivemutex_lock(void* self) {
    QRecursiveMutex_Lock((QRecursiveMutex*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrecursivemutex.html#tryLock)
///
/// ``` QRecursiveMutex* self ```
bool q_recursivemutex_try_lock(void* self) {
    return QRecursiveMutex_TryLock((QRecursiveMutex*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrecursivemutex.html#unlock)
///
/// ``` QRecursiveMutex* self ```
void q_recursivemutex_unlock(void* self) {
    QRecursiveMutex_Unlock((QRecursiveMutex*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrecursivemutex.html#try_lock)
///
/// ``` QRecursiveMutex* self ```
bool q_recursivemutex_try_lock2(void* self) {
    return QRecursiveMutex_TryLock2((QRecursiveMutex*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrecursivemutex.html#tryLock)
///
/// ``` QRecursiveMutex* self, int timeout ```
bool q_recursivemutex_try_lock1(void* self, int timeout) {
    return QRecursiveMutex_TryLock1((QRecursiveMutex*)self, timeout);
}

/// Delete this object from C++ memory.
///
/// ``` QRecursiveMutex* self ```
void q_recursivemutex_delete(void* self) {
    QRecursiveMutex_Delete((QRecursiveMutex*)(self));
}