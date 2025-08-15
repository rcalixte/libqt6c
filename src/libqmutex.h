#pragma once
#ifndef SRCQT6C_LIBQMUTEX_H
#define SRCQT6C_LIBQMUTEX_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qbasicmutex.html

/// q_basicmutex_new constructs a new QBasicMutex object.
///
QBasicMutex* q_basicmutex_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qbasicmutex.html#lock)
///
/// @param self QBasicMutex*
void q_basicmutex_lock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbasicmutex.html#unlock)
///
/// @param self QBasicMutex*
void q_basicmutex_unlock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbasicmutex.html#tryLock)
///
/// @param self QBasicMutex*
bool q_basicmutex_try_lock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbasicmutex.html#try_lock)
///
/// @param self QBasicMutex*
bool q_basicmutex_try_lock2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbasicmutex.html#dtor.QBasicMutex)
///
/// Delete this object from C++ memory.
///
/// @param self QBasicMutex*
void q_basicmutex_delete(void* self);

/// https://doc.qt.io/qt-6/qmutex.html

/// q_mutex_new constructs a new QMutex object.
///
QMutex* q_mutex_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qmutex.html#try_lock)
///
/// @param self QMutex*
bool q_mutex_try_lock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmutex.html#tryLock)
///
/// @param self QMutex*
/// @param timeout int
bool q_mutex_try_lock2(void* self, int timeout);

/// [Qt documentation](https://doc.qt.io/qt-6/qmutex.html#tryLock)
///
/// @param self QMutex*
/// @param timeout QDeadlineTimer*
bool q_mutex_try_lock3(void* self, void* timeout);

/// Inherited from QBasicMutex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbasicmutex.html#lock)
///
/// @param self QMutex*
void q_mutex_lock(void* self);

/// Inherited from QBasicMutex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qbasicmutex.html#unlock)
///
/// @param self QMutex*
void q_mutex_unlock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmutex.html#dtor.QMutex)
///
/// Delete this object from C++ memory.
///
/// @param self QMutex*
void q_mutex_delete(void* self);

/// https://doc.qt.io/qt-6/qrecursivemutex.html

/// q_recursivemutex_new constructs a new QRecursiveMutex object.
///
QRecursiveMutex* q_recursivemutex_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qrecursivemutex.html#lock)
///
/// @param self QRecursiveMutex*
void q_recursivemutex_lock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrecursivemutex.html#tryLock)
///
/// @param self QRecursiveMutex*
/// @param timeout int
bool q_recursivemutex_try_lock(void* self, int timeout);

/// [Qt documentation](https://doc.qt.io/qt-6/qrecursivemutex.html#tryLock)
///
/// @param self QRecursiveMutex*
bool q_recursivemutex_try_lock2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrecursivemutex.html#unlock)
///
/// @param self QRecursiveMutex*
void q_recursivemutex_unlock(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrecursivemutex.html#try_lock)
///
/// @param self QRecursiveMutex*
bool q_recursivemutex_try_lock3(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrecursivemutex.html#tryLock)
///
/// @param self QRecursiveMutex*
/// @param timer QDeadlineTimer*
bool q_recursivemutex_try_lock1(void* self, void* timer);

/// [Qt documentation](https://doc.qt.io/qt-6/qrecursivemutex.html#dtor.QRecursiveMutex)
///
/// Delete this object from C++ memory.
///
/// @param self QRecursiveMutex*
void q_recursivemutex_delete(void* self);

#endif
