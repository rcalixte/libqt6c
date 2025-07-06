#pragma once
#ifndef SRCQT6C_LIBQMUTEX_H
#define SRCQT6C_LIBQMUTEX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qbasicmutex.html

/// q_basicmutex_new constructs a new QBasicMutex object.
///
///
QBasicMutex* q_basicmutex_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qbasicmutex.html#lock)
///
/// ``` QBasicMutex* self ```
void q_basicmutex_lock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbasicmutex.html#unlock)
///
/// ``` QBasicMutex* self ```
void q_basicmutex_unlock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbasicmutex.html#tryLock)
///
/// ``` QBasicMutex* self ```
bool q_basicmutex_try_lock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbasicmutex.html#try_lock)
///
/// ``` QBasicMutex* self ```
bool q_basicmutex_try_lock2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbasicmutex.html#dtor.QBasicMutex)
///
/// Delete this object from C++ memory.
///
/// ``` QBasicMutex* self ```
void q_basicmutex_delete(void* self);

/// https://doc.qt.io/qt-6/qmutex.html

/// q_mutex_new constructs a new QMutex object.
///
///
QMutex* q_mutex_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qmutex.html#try_lock)
///
/// ``` QMutex* self ```
bool q_mutex_try_lock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmutex.html#tryLock)
///
/// ``` QMutex* self, int timeout ```
bool q_mutex_try_lock_with_timeout(void* self, int timeout);

/// [Qt documentation](https://doc.qt.io/qt-6/qmutex.html#tryLock)
///
/// ``` QMutex* self, QDeadlineTimer* timeout ```
bool q_mutex_try_lock2(void* self, void* timeout);

/// Inherited from QBasicMutex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbasicmutex.html#lock)
///
/// ``` QMutex* self ```
void q_mutex_lock(void* self);

/// Inherited from QBasicMutex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbasicmutex.html#unlock)
///
/// ``` QMutex* self ```
void q_mutex_unlock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmutex.html#dtor.QMutex)
///
/// Delete this object from C++ memory.
///
/// ``` QMutex* self ```
void q_mutex_delete(void* self);

/// https://doc.qt.io/qt-6/qrecursivemutex.html

/// q_recursivemutex_new constructs a new QRecursiveMutex object.
///
///
QRecursiveMutex* q_recursivemutex_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qrecursivemutex.html#lock)
///
/// ``` QRecursiveMutex* self ```
void q_recursivemutex_lock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrecursivemutex.html#tryLock)
///
/// ``` QRecursiveMutex* self, int timeout ```
bool q_recursivemutex_try_lock(void* self, int timeout);

/// [Qt documentation](https://doc.qt.io/qt-6/qrecursivemutex.html#tryLock)
///
/// ``` QRecursiveMutex* self ```
bool q_recursivemutex_try_lock2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrecursivemutex.html#unlock)
///
/// ``` QRecursiveMutex* self ```
void q_recursivemutex_unlock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrecursivemutex.html#try_lock)
///
/// ``` QRecursiveMutex* self ```
bool q_recursivemutex_try_lock3(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrecursivemutex.html#tryLock)
///
/// ``` QRecursiveMutex* self, QDeadlineTimer* timer ```
bool q_recursivemutex_try_lock1(void* self, void* timer);

/// [Qt documentation](https://doc.qt.io/qt-6/qrecursivemutex.html#dtor.QRecursiveMutex)
///
/// Delete this object from C++ memory.
///
/// ``` QRecursiveMutex* self ```
void q_recursivemutex_delete(void* self);

#endif
