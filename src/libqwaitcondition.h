#pragma once
#ifndef SRC_QT6C_LIBQWAITCONDITION_H
#define SRC_QT6C_LIBQWAITCONDITION_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qwaitcondition.html)

/// q_waitcondition_new constructs a new QWaitCondition object.
///
QWaitCondition* q_waitcondition_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qwaitcondition.html#wait)
///
/// @param self QWaitCondition*
/// @param lockedMutex QMutex*
///
bool q_waitcondition_wait(void* self, void* lockedMutex);

/// [Upstream resources](https://doc.qt.io/qt-6/qwaitcondition.html#wait)
///
/// @param self QWaitCondition*
/// @param lockedMutex QMutex*
/// @param time uint64_t
///
bool q_waitcondition_wait2(void* self, void* lockedMutex, uint64_t time);

/// [Upstream resources](https://doc.qt.io/qt-6/qwaitcondition.html#wait)
///
/// @param self QWaitCondition*
/// @param lockedReadWriteLock QReadWriteLock*
///
bool q_waitcondition_wait3(void* self, void* lockedReadWriteLock);

/// [Upstream resources](https://doc.qt.io/qt-6/qwaitcondition.html#wait)
///
/// @param self QWaitCondition*
/// @param lockedReadWriteLock QReadWriteLock*
/// @param time uint64_t
///
bool q_waitcondition_wait4(void* self, void* lockedReadWriteLock, uint64_t time);

/// [Upstream resources](https://doc.qt.io/qt-6/qwaitcondition.html#wakeOne)
///
/// @param self QWaitCondition*
///
void q_waitcondition_wake_one(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwaitcondition.html#wakeAll)
///
/// @param self QWaitCondition*
///
void q_waitcondition_wake_all(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwaitcondition.html#notify_one)
///
/// @param self QWaitCondition*
///
void q_waitcondition_notify_one(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwaitcondition.html#notify_all)
///
/// @param self QWaitCondition*
///
void q_waitcondition_notify_all(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwaitcondition.html#wait)
///
/// @param self QWaitCondition*
/// @param lockedMutex QMutex*
/// @param deadline QDeadlineTimer*
///
bool q_waitcondition_wait22(void* self, void* lockedMutex, void* deadline);

/// [Upstream resources](https://doc.qt.io/qt-6/qwaitcondition.html#wait)
///
/// @param self QWaitCondition*
/// @param lockedReadWriteLock QReadWriteLock*
/// @param deadline QDeadlineTimer*
///
bool q_waitcondition_wait23(void* self, void* lockedReadWriteLock, void* deadline);

/// [Upstream resources](https://doc.qt.io/qt-6/qwaitcondition.html#dtor.QWaitCondition)
///
/// Delete this object from C++ memory.
///
/// @param self QWaitCondition*
///
void q_waitcondition_delete(void* self);

#endif
