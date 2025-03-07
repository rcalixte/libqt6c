#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQMEDIATIMERANGE_H
#define SRC_MULTIMEDIAQT6C_LIBQMEDIATIMERANGE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

QMediaTimeRange* q_mediatimerange_new();
QMediaTimeRange* q_mediatimerange_new2(long long start, long long end);
QMediaTimeRange* q_mediatimerange_new3(void* param1);
QMediaTimeRange* q_mediatimerange_new4(void* range);
void q_mediatimerange_operator_assign(void* self, void* param1);
void q_mediatimerange_swap(void* self, void* other);
void q_mediatimerange_detach(void* self);
void q_mediatimerange_operator_assign_with_q_media_time_range_interval(void* self, void* param1);
long long q_mediatimerange_earliest_time(void* self);
long long q_mediatimerange_latest_time(void* self);
libqt_list /* of QMediaTimeRange__Interval* */ q_mediatimerange_intervals(void* self);
bool q_mediatimerange_is_empty(void* self);
bool q_mediatimerange_is_continuous(void* self);
bool q_mediatimerange_contains(void* self, long long time);
void q_mediatimerange_add_interval(void* self, long long start, long long end);
void q_mediatimerange_add_interval_with_interval(void* self, void* interval);
void q_mediatimerange_add_time_range(void* self, void* param1);
void q_mediatimerange_remove_interval(void* self, long long start, long long end);
void q_mediatimerange_remove_interval_with_interval(void* self, void* interval);
void q_mediatimerange_remove_time_range(void* self, void* param1);
QMediaTimeRange* q_mediatimerange_operator_plus_assign(void* self, void* param1);
QMediaTimeRange* q_mediatimerange_operator_plus_assign_with_q_media_time_range_interval(void* self, void* param1);
QMediaTimeRange* q_mediatimerange_operator_minus_assign(void* self, void* param1);
QMediaTimeRange* q_mediatimerange_operator_minus_assign_with_q_media_time_range_interval(void* self, void* param1);
void q_mediatimerange_clear(void* self);
void q_mediatimerange_delete(void* self);

QMediaTimeRange__Interval* q_mediatimerange__interval_new(void* other);
QMediaTimeRange__Interval* q_mediatimerange__interval_new2(void* other);
QMediaTimeRange__Interval* q_mediatimerange__interval_new3();
QMediaTimeRange__Interval* q_mediatimerange__interval_new4(long long start, long long end);
QMediaTimeRange__Interval* q_mediatimerange__interval_new5(void* param1);
void q_mediatimerange__interval_copy_assign(void* self, void* other);
void q_mediatimerange__interval_move_assign(void* self, void* other);
long long q_mediatimerange__interval_start(void* self);
long long q_mediatimerange__interval_end(void* self);
bool q_mediatimerange__interval_contains(void* self, long long time);
bool q_mediatimerange__interval_is_normal(void* self);
QMediaTimeRange__Interval* q_mediatimerange__interval_normalized(void* self);
QMediaTimeRange__Interval* q_mediatimerange__interval_translated(void* self, long long offset);
void q_mediatimerange__interval_delete(void* self);

#endif
