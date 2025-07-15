#include "libqmediatimerange.hpp"
#include "libqmediatimerange.h"

QMediaTimeRange* q_mediatimerange_new() {
    return QMediaTimeRange_new();
}

QMediaTimeRange* q_mediatimerange_new2(long long start, long long end) {
    return QMediaTimeRange_new2(start, end);
}

QMediaTimeRange* q_mediatimerange_new3(void* param1) {
    return QMediaTimeRange_new3((QMediaTimeRange__Interval*)param1);
}

QMediaTimeRange* q_mediatimerange_new4(void* range) {
    return QMediaTimeRange_new4((QMediaTimeRange*)range);
}

void q_mediatimerange_operator_assign(void* self, void* param1) {
    QMediaTimeRange_OperatorAssign((QMediaTimeRange*)self, (QMediaTimeRange*)param1);
}

void q_mediatimerange_swap(void* self, void* other) {
    QMediaTimeRange_Swap((QMediaTimeRange*)self, (QMediaTimeRange*)other);
}

void q_mediatimerange_detach(void* self) {
    QMediaTimeRange_Detach((QMediaTimeRange*)self);
}

void q_mediatimerange_operator_assign2(void* self, void* param1) {
    QMediaTimeRange_OperatorAssign2((QMediaTimeRange*)self, (QMediaTimeRange__Interval*)param1);
}

long long q_mediatimerange_earliest_time(void* self) {
    return QMediaTimeRange_EarliestTime((QMediaTimeRange*)self);
}

long long q_mediatimerange_latest_time(void* self) {
    return QMediaTimeRange_LatestTime((QMediaTimeRange*)self);
}

libqt_list /* of QMediaTimeRange__Interval* */ q_mediatimerange_intervals(void* self) {
    libqt_list _arr = QMediaTimeRange_Intervals((QMediaTimeRange*)self);
    return _arr;
}

bool q_mediatimerange_is_empty(void* self) {
    return QMediaTimeRange_IsEmpty((QMediaTimeRange*)self);
}

bool q_mediatimerange_is_continuous(void* self) {
    return QMediaTimeRange_IsContinuous((QMediaTimeRange*)self);
}

bool q_mediatimerange_contains(void* self, long long time) {
    return QMediaTimeRange_Contains((QMediaTimeRange*)self, time);
}

void q_mediatimerange_add_interval(void* self, long long start, long long end) {
    QMediaTimeRange_AddInterval((QMediaTimeRange*)self, start, end);
}

void q_mediatimerange_add_interval2(void* self, void* interval) {
    QMediaTimeRange_AddInterval2((QMediaTimeRange*)self, (QMediaTimeRange__Interval*)interval);
}

void q_mediatimerange_add_time_range(void* self, void* param1) {
    QMediaTimeRange_AddTimeRange((QMediaTimeRange*)self, (QMediaTimeRange*)param1);
}

void q_mediatimerange_remove_interval(void* self, long long start, long long end) {
    QMediaTimeRange_RemoveInterval((QMediaTimeRange*)self, start, end);
}

void q_mediatimerange_remove_interval2(void* self, void* interval) {
    QMediaTimeRange_RemoveInterval2((QMediaTimeRange*)self, (QMediaTimeRange__Interval*)interval);
}

void q_mediatimerange_remove_time_range(void* self, void* param1) {
    QMediaTimeRange_RemoveTimeRange((QMediaTimeRange*)self, (QMediaTimeRange*)param1);
}

QMediaTimeRange* q_mediatimerange_operator_plus_assign(void* self, void* param1) {
    return QMediaTimeRange_OperatorPlusAssign((QMediaTimeRange*)self, (QMediaTimeRange*)param1);
}

QMediaTimeRange* q_mediatimerange_operator_plus_assign2(void* self, void* param1) {
    return QMediaTimeRange_OperatorPlusAssign2((QMediaTimeRange*)self, (QMediaTimeRange__Interval*)param1);
}

QMediaTimeRange* q_mediatimerange_operator_minus_assign(void* self, void* param1) {
    return QMediaTimeRange_OperatorMinusAssign((QMediaTimeRange*)self, (QMediaTimeRange*)param1);
}

QMediaTimeRange* q_mediatimerange_operator_minus_assign2(void* self, void* param1) {
    return QMediaTimeRange_OperatorMinusAssign2((QMediaTimeRange*)self, (QMediaTimeRange__Interval*)param1);
}

void q_mediatimerange_clear(void* self) {
    QMediaTimeRange_Clear((QMediaTimeRange*)self);
}

void q_mediatimerange_delete(void* self) {
    QMediaTimeRange_Delete((QMediaTimeRange*)(self));
}

QMediaTimeRange__Interval* q_mediatimerange__interval_new(void* other) {
    return QMediaTimeRange__Interval_new((QMediaTimeRange__Interval*)other);
}

QMediaTimeRange__Interval* q_mediatimerange__interval_new2(void* other) {
    return QMediaTimeRange__Interval_new2((QMediaTimeRange__Interval*)other);
}

QMediaTimeRange__Interval* q_mediatimerange__interval_new3() {
    return QMediaTimeRange__Interval_new3();
}

QMediaTimeRange__Interval* q_mediatimerange__interval_new4(long long start, long long end) {
    return QMediaTimeRange__Interval_new4(start, end);
}

QMediaTimeRange__Interval* q_mediatimerange__interval_new5(void* param1) {
    return QMediaTimeRange__Interval_new5((QMediaTimeRange__Interval*)param1);
}

void q_mediatimerange__interval_copy_assign(void* self, void* other) {
    QMediaTimeRange__Interval_CopyAssign((QMediaTimeRange__Interval*)self, (QMediaTimeRange__Interval*)other);
}

void q_mediatimerange__interval_move_assign(void* self, void* other) {
    QMediaTimeRange__Interval_MoveAssign((QMediaTimeRange__Interval*)self, (QMediaTimeRange__Interval*)other);
}

long long q_mediatimerange__interval_start(void* self) {
    return QMediaTimeRange__Interval_Start((QMediaTimeRange__Interval*)self);
}

long long q_mediatimerange__interval_end(void* self) {
    return QMediaTimeRange__Interval_End((QMediaTimeRange__Interval*)self);
}

bool q_mediatimerange__interval_contains(void* self, long long time) {
    return QMediaTimeRange__Interval_Contains((QMediaTimeRange__Interval*)self, time);
}

bool q_mediatimerange__interval_is_normal(void* self) {
    return QMediaTimeRange__Interval_IsNormal((QMediaTimeRange__Interval*)self);
}

QMediaTimeRange__Interval* q_mediatimerange__interval_normalized(void* self) {
    return QMediaTimeRange__Interval_Normalized((QMediaTimeRange__Interval*)self);
}

QMediaTimeRange__Interval* q_mediatimerange__interval_translated(void* self, long long offset) {
    return QMediaTimeRange__Interval_Translated((QMediaTimeRange__Interval*)self, offset);
}

void q_mediatimerange__interval_delete(void* self) {
    QMediaTimeRange__Interval_Delete((QMediaTimeRange__Interval*)(self));
}
