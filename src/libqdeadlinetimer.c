#include "libqdeadlinetimer.hpp"
#include "libqdeadlinetimer.h"

QDeadlineTimer* q_deadlinetimer_new(void* other) {
    return QDeadlineTimer_new((QDeadlineTimer*)other);
}

QDeadlineTimer* q_deadlinetimer_new2(void* other) {
    return QDeadlineTimer_new2((QDeadlineTimer*)other);
}

QDeadlineTimer* q_deadlinetimer_new3() {
    return QDeadlineTimer_new3();
}

QDeadlineTimer* q_deadlinetimer_new4(int32_t type_) {
    return QDeadlineTimer_new4(type_);
}

QDeadlineTimer* q_deadlinetimer_new5(int32_t param1) {
    return QDeadlineTimer_new5(param1);
}

QDeadlineTimer* q_deadlinetimer_new6(long long msecs) {
    return QDeadlineTimer_new6(msecs);
}

QDeadlineTimer* q_deadlinetimer_new7(void* param1) {
    return QDeadlineTimer_new7((QDeadlineTimer*)param1);
}

QDeadlineTimer* q_deadlinetimer_new8(int32_t param1, int32_t type_) {
    return QDeadlineTimer_new8(param1, type_);
}

QDeadlineTimer* q_deadlinetimer_new9(long long msecs, int32_t typeVal) {
    return QDeadlineTimer_new9(msecs, typeVal);
}

void q_deadlinetimer_copy_assign(void* self, void* other) {
    QDeadlineTimer_CopyAssign((QDeadlineTimer*)self, (QDeadlineTimer*)other);
}

void q_deadlinetimer_move_assign(void* self, void* other) {
    QDeadlineTimer_MoveAssign((QDeadlineTimer*)self, (QDeadlineTimer*)other);
}

void q_deadlinetimer_swap(void* self, void* other) {
    QDeadlineTimer_Swap((QDeadlineTimer*)self, (QDeadlineTimer*)other);
}

bool q_deadlinetimer_is_forever(void* self) {
    return QDeadlineTimer_IsForever((QDeadlineTimer*)self);
}

bool q_deadlinetimer_has_expired(void* self) {
    return QDeadlineTimer_HasExpired((QDeadlineTimer*)self);
}

int32_t q_deadlinetimer_timer_type(void* self) {
    return QDeadlineTimer_TimerType((QDeadlineTimer*)self);
}

void q_deadlinetimer_set_timer_type(void* self, int32_t typeVal) {
    QDeadlineTimer_SetTimerType((QDeadlineTimer*)self, typeVal);
}

long long q_deadlinetimer_remaining_time(void* self) {
    return QDeadlineTimer_RemainingTime((QDeadlineTimer*)self);
}

long long q_deadlinetimer_remaining_time_n_secs(void* self) {
    return QDeadlineTimer_RemainingTimeNSecs((QDeadlineTimer*)self);
}

void q_deadlinetimer_set_remaining_time(void* self, long long msecs) {
    QDeadlineTimer_SetRemainingTime((QDeadlineTimer*)self, msecs);
}

void q_deadlinetimer_set_precise_remaining_time(void* self, long long secs) {
    QDeadlineTimer_SetPreciseRemainingTime((QDeadlineTimer*)self, secs);
}

long long q_deadlinetimer_deadline(void* self) {
    return QDeadlineTimer_Deadline((QDeadlineTimer*)self);
}

long long q_deadlinetimer_deadline_n_secs(void* self) {
    return QDeadlineTimer_DeadlineNSecs((QDeadlineTimer*)self);
}

void q_deadlinetimer_set_deadline(void* self, long long msecs) {
    QDeadlineTimer_SetDeadline((QDeadlineTimer*)self, msecs);
}

void q_deadlinetimer_set_precise_deadline(void* self, long long secs) {
    QDeadlineTimer_SetPreciseDeadline((QDeadlineTimer*)self, secs);
}

QDeadlineTimer* q_deadlinetimer_add_n_secs(void* dt, long long nsecs) {
    return QDeadlineTimer_AddNSecs((QDeadlineTimer*)dt, nsecs);
}

QDeadlineTimer* q_deadlinetimer_current() {
    return QDeadlineTimer_Current();
}

QDeadlineTimer* q_deadlinetimer_operator_plus_assign(void* self, long long msecs) {
    return QDeadlineTimer_OperatorPlusAssign((QDeadlineTimer*)self, msecs);
}

QDeadlineTimer* q_deadlinetimer_operator_minus_assign(void* self, long long msecs) {
    return QDeadlineTimer_OperatorMinusAssign((QDeadlineTimer*)self, msecs);
}

void q_deadlinetimer_set_remaining_time2(void* self, long long msecs, int32_t typeVal) {
    QDeadlineTimer_SetRemainingTime2((QDeadlineTimer*)self, msecs, typeVal);
}

void q_deadlinetimer_set_precise_remaining_time2(void* self, long long secs, long long nsecs) {
    QDeadlineTimer_SetPreciseRemainingTime2((QDeadlineTimer*)self, secs, nsecs);
}

void q_deadlinetimer_set_precise_remaining_time3(void* self, long long secs, long long nsecs, int32_t typeVal) {
    QDeadlineTimer_SetPreciseRemainingTime3((QDeadlineTimer*)self, secs, nsecs, typeVal);
}

void q_deadlinetimer_set_deadline2(void* self, long long msecs, int32_t timerType) {
    QDeadlineTimer_SetDeadline2((QDeadlineTimer*)self, msecs, timerType);
}

void q_deadlinetimer_set_precise_deadline2(void* self, long long secs, long long nsecs) {
    QDeadlineTimer_SetPreciseDeadline2((QDeadlineTimer*)self, secs, nsecs);
}

void q_deadlinetimer_set_precise_deadline3(void* self, long long secs, long long nsecs, int32_t typeVal) {
    QDeadlineTimer_SetPreciseDeadline3((QDeadlineTimer*)self, secs, nsecs, typeVal);
}

QDeadlineTimer* q_deadlinetimer_current1(int32_t timerType) {
    return QDeadlineTimer_Current1(timerType);
}

void q_deadlinetimer_delete(void* self) {
    QDeadlineTimer_Delete((QDeadlineTimer*)(self));
}
