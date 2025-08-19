#include "libqelapsedtimer.hpp"
#include "libqelapsedtimer.h"

QElapsedTimer* q_elapsedtimer_new(void* other) {
    return QElapsedTimer_new((QElapsedTimer*)other);
}

QElapsedTimer* q_elapsedtimer_new2(void* other) {
    return QElapsedTimer_new2((QElapsedTimer*)other);
}

QElapsedTimer* q_elapsedtimer_new3() {
    return QElapsedTimer_new3();
}

void q_elapsedtimer_copy_assign(void* self, void* other) {
    QElapsedTimer_CopyAssign((QElapsedTimer*)self, (QElapsedTimer*)other);
}

void q_elapsedtimer_move_assign(void* self, void* other) {
    QElapsedTimer_MoveAssign((QElapsedTimer*)self, (QElapsedTimer*)other);
}

int32_t q_elapsedtimer_clock_type() {
    return QElapsedTimer_ClockType();
}

bool q_elapsedtimer_is_monotonic() {
    return QElapsedTimer_IsMonotonic();
}

void q_elapsedtimer_start(void* self) {
    QElapsedTimer_Start((QElapsedTimer*)self);
}

long long q_elapsedtimer_restart(void* self) {
    return QElapsedTimer_Restart((QElapsedTimer*)self);
}

void q_elapsedtimer_invalidate(void* self) {
    QElapsedTimer_Invalidate((QElapsedTimer*)self);
}

bool q_elapsedtimer_is_valid(void* self) {
    return QElapsedTimer_IsValid((QElapsedTimer*)self);
}

long long q_elapsedtimer_nsecs_elapsed(void* self) {
    return QElapsedTimer_NsecsElapsed((QElapsedTimer*)self);
}

long long q_elapsedtimer_elapsed(void* self) {
    return QElapsedTimer_Elapsed((QElapsedTimer*)self);
}

bool q_elapsedtimer_has_expired(void* self, long long timeout) {
    return QElapsedTimer_HasExpired((QElapsedTimer*)self, timeout);
}

long long q_elapsedtimer_msecs_since_reference(void* self) {
    return QElapsedTimer_MsecsSinceReference((QElapsedTimer*)self);
}

long long q_elapsedtimer_msecs_to(void* self, void* other) {
    return QElapsedTimer_MsecsTo((QElapsedTimer*)self, (QElapsedTimer*)other);
}

long long q_elapsedtimer_secs_to(void* self, void* other) {
    return QElapsedTimer_SecsTo((QElapsedTimer*)self, (QElapsedTimer*)other);
}

void q_elapsedtimer_delete(void* self) {
    QElapsedTimer_Delete((QElapsedTimer*)(self));
}
