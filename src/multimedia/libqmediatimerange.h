#pragma once
#ifndef SRC_MULTIMEDIA_QT6C_LIBQMEDIATIMERANGE_H
#define SRC_MULTIMEDIA_QT6C_LIBQMEDIATIMERANGE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qmediatimerange.html

/// q_mediatimerange_new constructs a new QMediaTimeRange object.
///
QMediaTimeRange* q_mediatimerange_new();

/// q_mediatimerange_new2 constructs a new QMediaTimeRange object.
///
/// @param start long long
/// @param end long long
QMediaTimeRange* q_mediatimerange_new2(long long start, long long end);

/// q_mediatimerange_new3 constructs a new QMediaTimeRange object.
///
/// @param param1 QMediaTimeRange__Interval*
QMediaTimeRange* q_mediatimerange_new3(void* param1);

/// q_mediatimerange_new4 constructs a new QMediaTimeRange object.
///
/// @param range QMediaTimeRange*
QMediaTimeRange* q_mediatimerange_new4(void* range);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#operator-eq)
///
/// @param self QMediaTimeRange*
/// @param param1 QMediaTimeRange*
void q_mediatimerange_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#swap)
///
/// @param self QMediaTimeRange*
/// @param other QMediaTimeRange*
void q_mediatimerange_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#detach)
///
/// @param self QMediaTimeRange*
void q_mediatimerange_detach(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#operator-eq)
///
/// @param self QMediaTimeRange*
/// @param param1 QMediaTimeRange__Interval*
void q_mediatimerange_operator_assign2(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#earliestTime)
///
/// @param self QMediaTimeRange*
long long q_mediatimerange_earliest_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#latestTime)
///
/// @param self QMediaTimeRange*
long long q_mediatimerange_latest_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#intervals)
///
/// @param self QMediaTimeRange*
libqt_list /* of QMediaTimeRange__Interval* */ q_mediatimerange_intervals(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#isEmpty)
///
/// @param self QMediaTimeRange*
bool q_mediatimerange_is_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#isContinuous)
///
/// @param self QMediaTimeRange*
bool q_mediatimerange_is_continuous(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#contains)
///
/// @param self QMediaTimeRange*
/// @param time long long
bool q_mediatimerange_contains(void* self, long long time);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#addInterval)
///
/// @param self QMediaTimeRange*
/// @param start long long
/// @param end long long
void q_mediatimerange_add_interval(void* self, long long start, long long end);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#addInterval)
///
/// @param self QMediaTimeRange*
/// @param interval QMediaTimeRange__Interval*
void q_mediatimerange_add_interval2(void* self, void* interval);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#addTimeRange)
///
/// @param self QMediaTimeRange*
/// @param param1 QMediaTimeRange*
void q_mediatimerange_add_time_range(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#removeInterval)
///
/// @param self QMediaTimeRange*
/// @param start long long
/// @param end long long
void q_mediatimerange_remove_interval(void* self, long long start, long long end);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#removeInterval)
///
/// @param self QMediaTimeRange*
/// @param interval QMediaTimeRange__Interval*
void q_mediatimerange_remove_interval2(void* self, void* interval);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#removeTimeRange)
///
/// @param self QMediaTimeRange*
/// @param param1 QMediaTimeRange*
void q_mediatimerange_remove_time_range(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#operator-2b-eq)
///
/// @param self QMediaTimeRange*
/// @param param1 QMediaTimeRange*
QMediaTimeRange* q_mediatimerange_operator_plus_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#operator-2b-eq)
///
/// @param self QMediaTimeRange*
/// @param param1 QMediaTimeRange__Interval*
QMediaTimeRange* q_mediatimerange_operator_plus_assign2(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#operator--eq)
///
/// @param self QMediaTimeRange*
/// @param param1 QMediaTimeRange*
QMediaTimeRange* q_mediatimerange_operator_minus_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#operator--eq)
///
/// @param self QMediaTimeRange*
/// @param param1 QMediaTimeRange__Interval*
QMediaTimeRange* q_mediatimerange_operator_minus_assign2(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#clear)
///
/// @param self QMediaTimeRange*
void q_mediatimerange_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#dtor.QMediaTimeRange)
///
/// Delete this object from C++ memory.
///
/// @param self QMediaTimeRange*
void q_mediatimerange_delete(void* self);

/// https://doc.qt.io/qt-6/qmediatimerange-interval.html

/// q_mediatimerange__interval_new constructs a new QMediaTimeRange::Interval object.
///
/// @param other QMediaTimeRange__Interval*
QMediaTimeRange__Interval* q_mediatimerange__interval_new(void* other);

/// q_mediatimerange__interval_new2 constructs a new QMediaTimeRange::Interval object and invalidates the source QMediaTimeRange::Interval object.
///
/// @param other QMediaTimeRange__Interval*
QMediaTimeRange__Interval* q_mediatimerange__interval_new2(void* other);

/// q_mediatimerange__interval_new3 constructs a new QMediaTimeRange::Interval object.
///
QMediaTimeRange__Interval* q_mediatimerange__interval_new3();

/// q_mediatimerange__interval_new4 constructs a new QMediaTimeRange::Interval object.
///
/// @param start long long
/// @param end long long
QMediaTimeRange__Interval* q_mediatimerange__interval_new4(long long start, long long end);

/// q_mediatimerange__interval_new5 constructs a new QMediaTimeRange::Interval object.
///
/// @param param1 QMediaTimeRange__Interval*
QMediaTimeRange__Interval* q_mediatimerange__interval_new5(void* param1);

/// q_mediatimerange__interval_copy_assign shallow copies `other` into `self`.
///
/// @param self QMediaTimeRange__Interval*
/// @param other QMediaTimeRange__Interval*
void q_mediatimerange__interval_copy_assign(void* self, void* other);

/// q_mediatimerange__interval_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QMediaTimeRange__Interval*
/// @param other QMediaTimeRange__Interval*
void q_mediatimerange__interval_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange-interval.html#start)
///
/// @param self QMediaTimeRange__Interval*
long long q_mediatimerange__interval_start(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange-interval.html#end)
///
/// @param self QMediaTimeRange__Interval*
long long q_mediatimerange__interval_end(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange-interval.html#contains)
///
/// @param self QMediaTimeRange__Interval*
/// @param time long long
bool q_mediatimerange__interval_contains(void* self, long long time);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange-interval.html#isNormal)
///
/// @param self QMediaTimeRange__Interval*
bool q_mediatimerange__interval_is_normal(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange-interval.html#normalized)
///
/// @param self QMediaTimeRange__Interval*
QMediaTimeRange__Interval* q_mediatimerange__interval_normalized(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange-interval.html#translated)
///
/// @param self QMediaTimeRange__Interval*
/// @param offset long long
QMediaTimeRange__Interval* q_mediatimerange__interval_translated(void* self, long long offset);

/// Delete this object from C++ memory.
///
/// @param self QMediaTimeRange__Interval*
void q_mediatimerange__interval_delete(void* self);

#endif
