#include "libqmediatimerange.hpp"
#include "libqmediatimerange.h"

/// https://doc.qt.io/qt-6/qmediatimerange.html

/// q_mediatimerange_new constructs a new QMediaTimeRange object.
///
///
QMediaTimeRange* q_mediatimerange_new() {
    return QMediaTimeRange_new();
}

/// q_mediatimerange_new2 constructs a new QMediaTimeRange object.
///
/// ``` long long start, long long end ```
QMediaTimeRange* q_mediatimerange_new2(long long start, long long end) {
    return QMediaTimeRange_new2(start, end);
}

/// q_mediatimerange_new3 constructs a new QMediaTimeRange object.
///
/// ``` QMediaTimeRange__Interval* param1 ```
QMediaTimeRange* q_mediatimerange_new3(void* param1) {
    return QMediaTimeRange_new3((QMediaTimeRange__Interval*)param1);
}

/// q_mediatimerange_new4 constructs a new QMediaTimeRange object.
///
/// ``` QMediaTimeRange* range ```
QMediaTimeRange* q_mediatimerange_new4(void* range) {
    return QMediaTimeRange_new4((QMediaTimeRange*)range);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#operator=)
///
/// ``` QMediaTimeRange* self, QMediaTimeRange* param1 ```
void q_mediatimerange_operator_assign(void* self, void* param1) {
    QMediaTimeRange_OperatorAssign((QMediaTimeRange*)self, (QMediaTimeRange*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#swap)
///
/// ``` QMediaTimeRange* self, QMediaTimeRange* other ```
void q_mediatimerange_swap(void* self, void* other) {
    QMediaTimeRange_Swap((QMediaTimeRange*)self, (QMediaTimeRange*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#detach)
///
/// ``` QMediaTimeRange* self ```
void q_mediatimerange_detach(void* self) {
    QMediaTimeRange_Detach((QMediaTimeRange*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#operator=)
///
/// ``` QMediaTimeRange* self, QMediaTimeRange__Interval* param1 ```
void q_mediatimerange_operator_assign_with_q_media_time_range_interval(void* self, void* param1) {
    QMediaTimeRange_OperatorAssignWithQMediaTimeRangeInterval((QMediaTimeRange*)self, (QMediaTimeRange__Interval*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#earliestTime)
///
/// ``` QMediaTimeRange* self ```
long long q_mediatimerange_earliest_time(void* self) {
    return QMediaTimeRange_EarliestTime((QMediaTimeRange*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#latestTime)
///
/// ``` QMediaTimeRange* self ```
long long q_mediatimerange_latest_time(void* self) {
    return QMediaTimeRange_LatestTime((QMediaTimeRange*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#intervals)
///
/// ``` QMediaTimeRange* self ```
libqt_list /* of QMediaTimeRange__Interval* */ q_mediatimerange_intervals(void* self) {
    libqt_list _arr = QMediaTimeRange_Intervals((QMediaTimeRange*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#isEmpty)
///
/// ``` QMediaTimeRange* self ```
bool q_mediatimerange_is_empty(void* self) {
    return QMediaTimeRange_IsEmpty((QMediaTimeRange*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#isContinuous)
///
/// ``` QMediaTimeRange* self ```
bool q_mediatimerange_is_continuous(void* self) {
    return QMediaTimeRange_IsContinuous((QMediaTimeRange*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#contains)
///
/// ``` QMediaTimeRange* self, long long time ```
bool q_mediatimerange_contains(void* self, long long time) {
    return QMediaTimeRange_Contains((QMediaTimeRange*)self, time);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#addInterval)
///
/// ``` QMediaTimeRange* self, long long start, long long end ```
void q_mediatimerange_add_interval(void* self, long long start, long long end) {
    QMediaTimeRange_AddInterval((QMediaTimeRange*)self, start, end);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#addInterval)
///
/// ``` QMediaTimeRange* self, QMediaTimeRange__Interval* interval ```
void q_mediatimerange_add_interval_with_interval(void* self, void* interval) {
    QMediaTimeRange_AddIntervalWithInterval((QMediaTimeRange*)self, (QMediaTimeRange__Interval*)interval);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#addTimeRange)
///
/// ``` QMediaTimeRange* self, QMediaTimeRange* param1 ```
void q_mediatimerange_add_time_range(void* self, void* param1) {
    QMediaTimeRange_AddTimeRange((QMediaTimeRange*)self, (QMediaTimeRange*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#removeInterval)
///
/// ``` QMediaTimeRange* self, long long start, long long end ```
void q_mediatimerange_remove_interval(void* self, long long start, long long end) {
    QMediaTimeRange_RemoveInterval((QMediaTimeRange*)self, start, end);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#removeInterval)
///
/// ``` QMediaTimeRange* self, QMediaTimeRange__Interval* interval ```
void q_mediatimerange_remove_interval_with_interval(void* self, void* interval) {
    QMediaTimeRange_RemoveIntervalWithInterval((QMediaTimeRange*)self, (QMediaTimeRange__Interval*)interval);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#removeTimeRange)
///
/// ``` QMediaTimeRange* self, QMediaTimeRange* param1 ```
void q_mediatimerange_remove_time_range(void* self, void* param1) {
    QMediaTimeRange_RemoveTimeRange((QMediaTimeRange*)self, (QMediaTimeRange*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#operator+=)
///
/// ``` QMediaTimeRange* self, QMediaTimeRange* param1 ```
QMediaTimeRange* q_mediatimerange_operator_plus_assign(void* self, void* param1) {
    return QMediaTimeRange_OperatorPlusAssign((QMediaTimeRange*)self, (QMediaTimeRange*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#operator+=)
///
/// ``` QMediaTimeRange* self, QMediaTimeRange__Interval* param1 ```
QMediaTimeRange* q_mediatimerange_operator_plus_assign_with_q_media_time_range_interval(void* self, void* param1) {
    return QMediaTimeRange_OperatorPlusAssignWithQMediaTimeRangeInterval((QMediaTimeRange*)self, (QMediaTimeRange__Interval*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#operator-=)
///
/// ``` QMediaTimeRange* self, QMediaTimeRange* param1 ```
QMediaTimeRange* q_mediatimerange_operator_minus_assign(void* self, void* param1) {
    return QMediaTimeRange_OperatorMinusAssign((QMediaTimeRange*)self, (QMediaTimeRange*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#operator-=)
///
/// ``` QMediaTimeRange* self, QMediaTimeRange__Interval* param1 ```
QMediaTimeRange* q_mediatimerange_operator_minus_assign_with_q_media_time_range_interval(void* self, void* param1) {
    return QMediaTimeRange_OperatorMinusAssignWithQMediaTimeRangeInterval((QMediaTimeRange*)self, (QMediaTimeRange__Interval*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange.html#clear)
///
/// ``` QMediaTimeRange* self ```
void q_mediatimerange_clear(void* self) {
    QMediaTimeRange_Clear((QMediaTimeRange*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QMediaTimeRange* self ```
void q_mediatimerange_delete(void* self) {
    QMediaTimeRange_Delete((QMediaTimeRange*)(self));
}

/// https://doc.qt.io/qt-6/qmediatimerange-interval.html

/// q_mediatimerange__interval_new constructs a new QMediaTimeRange::Interval object.
///
/// ``` QMediaTimeRange__Interval* other ```
QMediaTimeRange__Interval* q_mediatimerange__interval_new(void* other) {
    return QMediaTimeRange__Interval_new((QMediaTimeRange__Interval*)other);
}

/// q_mediatimerange__interval_new2 constructs a new QMediaTimeRange::Interval object and invalidates the source QMediaTimeRange::Interval object.
///
/// ``` QMediaTimeRange__Interval* other ```
QMediaTimeRange__Interval* q_mediatimerange__interval_new2(void* other) {
    return QMediaTimeRange__Interval_new2((QMediaTimeRange__Interval*)other);
}

/// q_mediatimerange__interval_new3 constructs a new QMediaTimeRange::Interval object.
///
///
QMediaTimeRange__Interval* q_mediatimerange__interval_new3() {
    return QMediaTimeRange__Interval_new3();
}

/// q_mediatimerange__interval_new4 constructs a new QMediaTimeRange::Interval object.
///
/// ``` long long start, long long end ```
QMediaTimeRange__Interval* q_mediatimerange__interval_new4(long long start, long long end) {
    return QMediaTimeRange__Interval_new4(start, end);
}

/// q_mediatimerange__interval_new5 constructs a new QMediaTimeRange::Interval object.
///
/// ``` QMediaTimeRange__Interval* param1 ```
QMediaTimeRange__Interval* q_mediatimerange__interval_new5(void* param1) {
    return QMediaTimeRange__Interval_new5((QMediaTimeRange__Interval*)param1);
}

/// q_mediatimerange__interval_copy_assign shallow copies `other` into `self`.
///
/// ``` QMediaTimeRange__Interval* self, QMediaTimeRange__Interval* other ```
void q_mediatimerange__interval_copy_assign(void* self, void* other) {
    QMediaTimeRange__Interval_CopyAssign((QMediaTimeRange__Interval*)self, (QMediaTimeRange__Interval*)other);
}

/// q_mediatimerange__interval_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QMediaTimeRange__Interval* self, QMediaTimeRange__Interval* other ```
void q_mediatimerange__interval_move_assign(void* self, void* other) {
    QMediaTimeRange__Interval_MoveAssign((QMediaTimeRange__Interval*)self, (QMediaTimeRange__Interval*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange__interval.html#start)
///
/// ``` QMediaTimeRange__Interval* self ```
long long q_mediatimerange__interval_start(void* self) {
    return QMediaTimeRange__Interval_Start((QMediaTimeRange__Interval*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange__interval.html#end)
///
/// ``` QMediaTimeRange__Interval* self ```
long long q_mediatimerange__interval_end(void* self) {
    return QMediaTimeRange__Interval_End((QMediaTimeRange__Interval*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange__interval.html#contains)
///
/// ``` QMediaTimeRange__Interval* self, long long time ```
bool q_mediatimerange__interval_contains(void* self, long long time) {
    return QMediaTimeRange__Interval_Contains((QMediaTimeRange__Interval*)self, time);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange__interval.html#isNormal)
///
/// ``` QMediaTimeRange__Interval* self ```
bool q_mediatimerange__interval_is_normal(void* self) {
    return QMediaTimeRange__Interval_IsNormal((QMediaTimeRange__Interval*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange__interval.html#normalized)
///
/// ``` QMediaTimeRange__Interval* self ```
QMediaTimeRange__Interval* q_mediatimerange__interval_normalized(void* self) {
    return QMediaTimeRange__Interval_Normalized((QMediaTimeRange__Interval*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediatimerange__interval.html#translated)
///
/// ``` QMediaTimeRange__Interval* self, long long offset ```
QMediaTimeRange__Interval* q_mediatimerange__interval_translated(void* self, long long offset) {
    return QMediaTimeRange__Interval_Translated((QMediaTimeRange__Interval*)self, offset);
}

/// Delete this object from C++ memory.
///
/// ``` QMediaTimeRange__Interval* self ```
void q_mediatimerange__interval_delete(void* self) {
    QMediaTimeRange__Interval_Delete((QMediaTimeRange__Interval*)(self));
}