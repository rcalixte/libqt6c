#include "libqobject.hpp"
#include "libqbasictimer.hpp"
#include "libqbasictimer.h"

/// https://doc.qt.io/qt-6/qbasictimer.html

/// q_basictimer_new constructs a new QBasicTimer object.
///
///
QBasicTimer* q_basictimer_new() {
    return QBasicTimer_new();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbasictimer.html#swap)
///
/// ``` QBasicTimer* self, QBasicTimer* other ```
void q_basictimer_swap(void* self, void* other) {
    QBasicTimer_Swap((QBasicTimer*)self, (QBasicTimer*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbasictimer.html#isActive)
///
/// ``` QBasicTimer* self ```
bool q_basictimer_is_active(void* self) {
    return QBasicTimer_IsActive((QBasicTimer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbasictimer.html#timerId)
///
/// ``` QBasicTimer* self ```
int32_t q_basictimer_timer_id(void* self) {
    return QBasicTimer_TimerId((QBasicTimer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbasictimer.html#start)
///
/// ``` QBasicTimer* self, int msec, QObject* obj ```
void q_basictimer_start(void* self, int msec, void* obj) {
    QBasicTimer_Start((QBasicTimer*)self, msec, (QObject*)obj);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbasictimer.html#start)
///
/// ``` QBasicTimer* self, int msec, enum Qt__TimerType timerType, QObject* obj ```
void q_basictimer_start2(void* self, int msec, int64_t timerType, void* obj) {
    QBasicTimer_Start2((QBasicTimer*)self, msec, timerType, (QObject*)obj);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbasictimer.html#stop)
///
/// ``` QBasicTimer* self ```
void q_basictimer_stop(void* self) {
    QBasicTimer_Stop((QBasicTimer*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QBasicTimer* self ```
void q_basictimer_delete(void* self) {
    QBasicTimer_Delete((QBasicTimer*)(self));
}