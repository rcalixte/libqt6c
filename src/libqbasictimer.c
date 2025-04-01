#include "libqobject.hpp"
#include "libqbasictimer.hpp"
#include "libqbasictimer.h"

QBasicTimer* q_basictimer_new() {
    return QBasicTimer_new();
}

void q_basictimer_swap(void* self, void* other) {
    QBasicTimer_Swap((QBasicTimer*)self, (QBasicTimer*)other);
}

bool q_basictimer_is_active(void* self) {
    return QBasicTimer_IsActive((QBasicTimer*)self);
}

int32_t q_basictimer_timer_id(void* self) {
    return QBasicTimer_TimerId((QBasicTimer*)self);
}

void q_basictimer_start(void* self, int msec, void* obj) {
    QBasicTimer_Start((QBasicTimer*)self, msec, (QObject*)obj);
}

void q_basictimer_start2(void* self, int msec, int64_t timerType, void* obj) {
    QBasicTimer_Start2((QBasicTimer*)self, msec, timerType, (QObject*)obj);
}

void q_basictimer_stop(void* self) {
    QBasicTimer_Stop((QBasicTimer*)self);
}

void q_basictimer_delete(void* self) {
    QBasicTimer_Delete((QBasicTimer*)(self));
}
