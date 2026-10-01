#pragma once
#ifndef MULTIMEDIA_LIBQMEDIATIMERANGE_H
#define MULTIMEDIA_LIBQMEDIATIMERANGE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html)

/// q_mediatimerange_new constructs a new QMediaTimeRange object.
///
QMediaTimeRange* q_mediatimerange_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html)

/// q_mediatimerange_new2 constructs a new QMediaTimeRange object.
///
/// @param start int64_t
/// @param end int64_t
///
QMediaTimeRange* q_mediatimerange_new2(int64_t start, int64_t end);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html)

/// q_mediatimerange_new3 constructs a new QMediaTimeRange object.
///
/// @param param1 QMediaTimeRange__Interval*
///
QMediaTimeRange* q_mediatimerange_new3(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html)

/// q_mediatimerange_new4 constructs a new QMediaTimeRange object.
///
/// @param range QMediaTimeRange*
///
QMediaTimeRange* q_mediatimerange_new4(const void* range);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#operator-eq)
///
/// @param self QMediaTimeRange*
/// @param param1 QMediaTimeRange*
///
void q_mediatimerange_operator_assign(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#swap)
///
/// @param self QMediaTimeRange*
/// @param other QMediaTimeRange*
///
void q_mediatimerange_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#detach)
///
/// @param self QMediaTimeRange*
///
void q_mediatimerange_detach(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#operator-eq)
///
/// @param self QMediaTimeRange*
/// @param param1 QMediaTimeRange__Interval*
///
void q_mediatimerange_operator_assign2(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#earliestTime)
///
/// @param self const QMediaTimeRange*
///
int64_t q_mediatimerange_earliest_time(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#latestTime)
///
/// @param self const QMediaTimeRange*
///
int64_t q_mediatimerange_latest_time(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#intervals)
///
/// @param self const QMediaTimeRange*
///
/// @return libqt_list of QMediaTimeRange__Interval*
///
libqt_list q_mediatimerange_intervals(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#isEmpty)
///
/// @param self const QMediaTimeRange*
///
bool q_mediatimerange_is_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#isContinuous)
///
/// @param self const QMediaTimeRange*
///
bool q_mediatimerange_is_continuous(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#contains)
///
/// @param self const QMediaTimeRange*
/// @param time int64_t
///
bool q_mediatimerange_contains(const void* self, int64_t time);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#addInterval)
///
/// @param self QMediaTimeRange*
/// @param start int64_t
/// @param end int64_t
///
void q_mediatimerange_add_interval(void* self, int64_t start, int64_t end);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#addInterval)
///
/// @param self QMediaTimeRange*
/// @param interval QMediaTimeRange__Interval*
///
void q_mediatimerange_add_interval2(void* self, const void* interval);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#addTimeRange)
///
/// @param self QMediaTimeRange*
/// @param param1 QMediaTimeRange*
///
void q_mediatimerange_add_time_range(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#removeInterval)
///
/// @param self QMediaTimeRange*
/// @param start int64_t
/// @param end int64_t
///
void q_mediatimerange_remove_interval(void* self, int64_t start, int64_t end);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#removeInterval)
///
/// @param self QMediaTimeRange*
/// @param interval QMediaTimeRange__Interval*
///
void q_mediatimerange_remove_interval2(void* self, const void* interval);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#removeTimeRange)
///
/// @param self QMediaTimeRange*
/// @param param1 QMediaTimeRange*
///
void q_mediatimerange_remove_time_range(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#operator-2b-eq)
///
/// @param self QMediaTimeRange*
/// @param param1 QMediaTimeRange*
///
QMediaTimeRange* q_mediatimerange_operator_plus_assign(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#operator-2b-eq)
///
/// @param self QMediaTimeRange*
/// @param param1 QMediaTimeRange__Interval*
///
QMediaTimeRange* q_mediatimerange_operator_plus_assign2(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#operator--eq)
///
/// @param self QMediaTimeRange*
/// @param param1 QMediaTimeRange*
///
QMediaTimeRange* q_mediatimerange_operator_minus_assign(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#operator--eq)
///
/// @param self QMediaTimeRange*
/// @param param1 QMediaTimeRange__Interval*
///
QMediaTimeRange* q_mediatimerange_operator_minus_assign2(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#clear)
///
/// @param self QMediaTimeRange*
///
void q_mediatimerange_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange.html#dtor.QMediaTimeRange)
///
/// Delete this object from C++ memory.
///
/// @param self QMediaTimeRange*
///
void q_mediatimerange_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange-interval.html)

/// q_mediatimerange__interval_new constructs a new QMediaTimeRange::Interval object.
///
QMediaTimeRange__Interval* q_mediatimerange__interval_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange-interval.html)

/// q_mediatimerange__interval_new2 constructs a new QMediaTimeRange::Interval object.
///
/// @param other QMediaTimeRange__Interval*
///
QMediaTimeRange__Interval* q_mediatimerange__interval_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange-interval.html)

/// q_mediatimerange__interval_new3 constructs a new QMediaTimeRange::Interval object and invalidates the source QMediaTimeRange::Interval object.
///
/// @param other QMediaTimeRange__Interval*
///
QMediaTimeRange__Interval* q_mediatimerange__interval_new3(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange-interval.html)

/// q_mediatimerange__interval_new4 constructs a new QMediaTimeRange::Interval object.
///
/// @param start int64_t
/// @param end int64_t
///
QMediaTimeRange__Interval* q_mediatimerange__interval_new4(int64_t start, int64_t end);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange-interval.html)

/// q_mediatimerange__interval_new5 constructs a new QMediaTimeRange::Interval object.
///
/// @param param1 QMediaTimeRange__Interval*
///
QMediaTimeRange__Interval* q_mediatimerange__interval_new5(const void* param1);

/// q_mediatimerange__interval_copy_assign shallow copies `other` into `self`.
///
/// @param self QMediaTimeRange__Interval*
/// @param other QMediaTimeRange__Interval*
///
void q_mediatimerange__interval_copy_assign(void* self, void* other);

/// q_mediatimerange__interval_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QMediaTimeRange__Interval*
/// @param other QMediaTimeRange__Interval*
///
void q_mediatimerange__interval_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange-interval.html#start)
///
/// @param self const QMediaTimeRange__Interval*
///
int64_t q_mediatimerange__interval_start(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange-interval.html#end)
///
/// @param self const QMediaTimeRange__Interval*
///
int64_t q_mediatimerange__interval_end(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange-interval.html#contains)
///
/// @param self const QMediaTimeRange__Interval*
/// @param time int64_t
///
bool q_mediatimerange__interval_contains(const void* self, int64_t time);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange-interval.html#isNormal)
///
/// @param self const QMediaTimeRange__Interval*
///
bool q_mediatimerange__interval_is_normal(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange-interval.html#normalized)
///
/// @param self const QMediaTimeRange__Interval*
///
QMediaTimeRange__Interval* q_mediatimerange__interval_normalized(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmediatimerange-interval.html#translated)
///
/// @param self const QMediaTimeRange__Interval*
/// @param offset int64_t
///
QMediaTimeRange__Interval* q_mediatimerange__interval_translated(const void* self, int64_t offset);

/// Delete this object from C++ memory.
///
/// @param self QMediaTimeRange__Interval*
///
void q_mediatimerange__interval_delete(void* self);

#endif
