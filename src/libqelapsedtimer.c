#include "libqelapsedtimer.hpp"
#include "libqelapsedtimer.h"

/// https://doc.qt.io/qt-6/qelapsedtimer.html

/// q_elapsedtimer_new constructs a new QElapsedTimer object.
///
/// ``` QElapsedTimer* other ```
QElapsedTimer* q_elapsedtimer_new(void* other) {
    return QElapsedTimer_new((QElapsedTimer*)other);
}

/// q_elapsedtimer_new2 constructs a new QElapsedTimer object and invalidates the source QElapsedTimer object.
///
/// ``` QElapsedTimer* other ```
QElapsedTimer* q_elapsedtimer_new2(void* other) {
    return QElapsedTimer_new2((QElapsedTimer*)other);
}

/// q_elapsedtimer_new3 constructs a new QElapsedTimer object.
///
///
QElapsedTimer* q_elapsedtimer_new3() {
    return QElapsedTimer_new3();
}

/// q_elapsedtimer_copy_assign shallow copies `other` into `self`.
///
/// ``` QElapsedTimer* self, QElapsedTimer* other ```
void q_elapsedtimer_copy_assign(void* self, void* other) {
    QElapsedTimer_CopyAssign((QElapsedTimer*)self, (QElapsedTimer*)other);
}

/// q_elapsedtimer_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QElapsedTimer* self, QElapsedTimer* other ```
void q_elapsedtimer_move_assign(void* self, void* other) {
    QElapsedTimer_MoveAssign((QElapsedTimer*)self, (QElapsedTimer*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#clockType)
///
///
int64_t q_elapsedtimer_clock_type() {
    return QElapsedTimer_ClockType();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#isMonotonic)
///
///
bool q_elapsedtimer_is_monotonic() {
    return QElapsedTimer_IsMonotonic();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#start)
///
/// ``` QElapsedTimer* self ```
void q_elapsedtimer_start(void* self) {
    QElapsedTimer_Start((QElapsedTimer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#restart)
///
/// ``` QElapsedTimer* self ```
long long q_elapsedtimer_restart(void* self) {
    return QElapsedTimer_Restart((QElapsedTimer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#invalidate)
///
/// ``` QElapsedTimer* self ```
void q_elapsedtimer_invalidate(void* self) {
    QElapsedTimer_Invalidate((QElapsedTimer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#isValid)
///
/// ``` QElapsedTimer* self ```
bool q_elapsedtimer_is_valid(void* self) {
    return QElapsedTimer_IsValid((QElapsedTimer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#nsecsElapsed)
///
/// ``` QElapsedTimer* self ```
long long q_elapsedtimer_nsecs_elapsed(void* self) {
    return QElapsedTimer_NsecsElapsed((QElapsedTimer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#elapsed)
///
/// ``` QElapsedTimer* self ```
long long q_elapsedtimer_elapsed(void* self) {
    return QElapsedTimer_Elapsed((QElapsedTimer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#hasExpired)
///
/// ``` QElapsedTimer* self, long long timeout ```
bool q_elapsedtimer_has_expired(void* self, long long timeout) {
    return QElapsedTimer_HasExpired((QElapsedTimer*)self, timeout);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#msecsSinceReference)
///
/// ``` QElapsedTimer* self ```
long long q_elapsedtimer_msecs_since_reference(void* self) {
    return QElapsedTimer_MsecsSinceReference((QElapsedTimer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#msecsTo)
///
/// ``` QElapsedTimer* self, QElapsedTimer* other ```
long long q_elapsedtimer_msecs_to(void* self, void* other) {
    return QElapsedTimer_MsecsTo((QElapsedTimer*)self, (QElapsedTimer*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qelapsedtimer.html#secsTo)
///
/// ``` QElapsedTimer* self, QElapsedTimer* other ```
long long q_elapsedtimer_secs_to(void* self, void* other) {
    return QElapsedTimer_SecsTo((QElapsedTimer*)self, (QElapsedTimer*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QElapsedTimer* self ```
void q_elapsedtimer_delete(void* self) {
    QElapsedTimer_Delete((QElapsedTimer*)(self));
}