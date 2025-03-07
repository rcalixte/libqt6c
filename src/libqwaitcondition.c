#include "libqdeadlinetimer.hpp"
#include "libqmutex.hpp"
#include "libqreadwritelock.hpp"
#include "libqwaitcondition.hpp"
#include "libqwaitcondition.h"

/// https://doc.qt.io/qt-6/qwaitcondition.html

/// q_waitcondition_new constructs a new QWaitCondition object.
///
///
QWaitCondition* q_waitcondition_new() {
    return QWaitCondition_new();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwaitcondition.html#wait)
///
/// ``` QWaitCondition* self, QMutex* lockedMutex ```
bool q_waitcondition_wait(void* self, void* lockedMutex) {
    return QWaitCondition_Wait((QWaitCondition*)self, (QMutex*)lockedMutex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwaitcondition.html#wait)
///
/// ``` QWaitCondition* self, QMutex* lockedMutex, uint64_t time ```
bool q_waitcondition_wait2(void* self, void* lockedMutex, uint64_t time) {
    return QWaitCondition_Wait2((QWaitCondition*)self, (QMutex*)lockedMutex, time);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwaitcondition.html#wait)
///
/// ``` QWaitCondition* self, QReadWriteLock* lockedReadWriteLock ```
bool q_waitcondition_wait_with_locked_read_write_lock(void* self, void* lockedReadWriteLock) {
    return QWaitCondition_WaitWithLockedReadWriteLock((QWaitCondition*)self, (QReadWriteLock*)lockedReadWriteLock);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwaitcondition.html#wait)
///
/// ``` QWaitCondition* self, QReadWriteLock* lockedReadWriteLock, uint64_t time ```
bool q_waitcondition_wait3(void* self, void* lockedReadWriteLock, uint64_t time) {
    return QWaitCondition_Wait3((QWaitCondition*)self, (QReadWriteLock*)lockedReadWriteLock, time);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwaitcondition.html#wakeOne)
///
/// ``` QWaitCondition* self ```
void q_waitcondition_wake_one(void* self) {
    QWaitCondition_WakeOne((QWaitCondition*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwaitcondition.html#wakeAll)
///
/// ``` QWaitCondition* self ```
void q_waitcondition_wake_all(void* self) {
    QWaitCondition_WakeAll((QWaitCondition*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwaitcondition.html#notify_one)
///
/// ``` QWaitCondition* self ```
void q_waitcondition_notify_one(void* self) {
    QWaitCondition_NotifyOne((QWaitCondition*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwaitcondition.html#notify_all)
///
/// ``` QWaitCondition* self ```
void q_waitcondition_notify_all(void* self) {
    QWaitCondition_NotifyAll((QWaitCondition*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwaitcondition.html#wait)
///
/// ``` QWaitCondition* self, QMutex* lockedMutex, QDeadlineTimer* deadline ```
bool q_waitcondition_wait22(void* self, void* lockedMutex, void* deadline) {
    return QWaitCondition_Wait22((QWaitCondition*)self, (QMutex*)lockedMutex, (QDeadlineTimer*)deadline);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwaitcondition.html#wait)
///
/// ``` QWaitCondition* self, QReadWriteLock* lockedReadWriteLock, QDeadlineTimer* deadline ```
bool q_waitcondition_wait23(void* self, void* lockedReadWriteLock, void* deadline) {
    return QWaitCondition_Wait23((QWaitCondition*)self, (QReadWriteLock*)lockedReadWriteLock, (QDeadlineTimer*)deadline);
}

/// Delete this object from C++ memory.
///
/// ``` QWaitCondition* self ```
void q_waitcondition_delete(void* self) {
    QWaitCondition_Delete((QWaitCondition*)(self));
}