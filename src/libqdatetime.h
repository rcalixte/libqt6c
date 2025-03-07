#pragma once
#ifndef SRCQT6C_LIBQDATETIME_H
#define SRCQT6C_LIBQDATETIME_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqcalendar.h"
#include <string.h>
#include "libqtimezone.h"

QDate* q_date_new(void* other);
QDate* q_date_new2(void* other);
QDate* q_date_new3();
QDate* q_date_new4(int y, int m, int d);
QDate* q_date_new5(int y, int m, int d, void* cal);
QDate* q_date_new6(void* param1);
void q_date_copy_assign(void* self, void* other);
void q_date_move_assign(void* self, void* other);
bool q_date_is_null(void* self);
bool q_date_is_valid(void* self);
int32_t q_date_year(void* self);
int32_t q_date_month(void* self);
int32_t q_date_day(void* self);
int32_t q_date_day_of_week(void* self);
int32_t q_date_day_of_year(void* self);
int32_t q_date_days_in_month(void* self);
int32_t q_date_days_in_year(void* self);
int32_t q_date_week_number(void* self);
int32_t q_date_year_with_cal(void* self, void* cal);
int32_t q_date_month_with_cal(void* self, void* cal);
int32_t q_date_day_with_cal(void* self, void* cal);
int32_t q_date_day_of_week_with_cal(void* self, void* cal);
int32_t q_date_day_of_year_with_cal(void* self, void* cal);
int32_t q_date_days_in_month_with_cal(void* self, void* cal);
int32_t q_date_days_in_year_with_cal(void* self, void* cal);
QDateTime* q_date_start_of_day(void* self);
QDateTime* q_date_end_of_day(void* self);
QDateTime* q_date_start_of_day_with_zone(void* self, void* zone);
QDateTime* q_date_end_of_day_with_zone(void* self, void* zone);
const char* q_date_to_string(void* self);
const char* q_date_to_string_with_format(void* self, const char* format);
bool q_date_set_date(void* self, int year, int month, int day);
bool q_date_set_date2(void* self, int year, int month, int day, void* cal);
void q_date_get_date(void* self, int* year, int* month, int* day);
QDate* q_date_add_days(void* self, long long days);
QDate* q_date_add_months(void* self, int months);
QDate* q_date_add_years(void* self, int years);
QDate* q_date_add_months2(void* self, int months, void* cal);
QDate* q_date_add_years2(void* self, int years, void* cal);
long long q_date_days_to(void* self, void* d);
QDate* q_date_current_date();
QDate* q_date_from_string_with_string_val(const char* stringVal);
QDate* q_date_from_string4(const char* stringVal, const char* format);
bool q_date_is_valid2(int y, int m, int d);
bool q_date_is_leap_year(int year);
QDate* q_date_from_julian_day(long long jd_);
long long q_date_to_julian_day(void* self);
int32_t q_date_week_number1(void* self, int* yearNum);
QDateTime* q_date_start_of_day1(void* self, int64_t spec);
QDateTime* q_date_start_of_day2(void* self, int64_t spec, int offsetSeconds);
QDateTime* q_date_end_of_day1(void* self, int64_t spec);
QDateTime* q_date_end_of_day2(void* self, int64_t spec, int offsetSeconds);
const char* q_date_to_string1(void* self, int64_t format);
const char* q_date_to_string22(void* self, const char* format, void* cal);
QDate* q_date_from_string23(const char* stringVal, int64_t format);
QDate* q_date_from_string34(const char* stringVal, const char* format, void* cal);
void q_date_delete(void* self);

QTime* q_time_new(void* other);
QTime* q_time_new2(void* other);
QTime* q_time_new3();
QTime* q_time_new4(int h, int m);
QTime* q_time_new5(void* param1);
QTime* q_time_new6(int h, int m, int s);
QTime* q_time_new7(int h, int m, int s, int ms);
void q_time_copy_assign(void* self, void* other);
void q_time_move_assign(void* self, void* other);
bool q_time_is_null(void* self);
bool q_time_is_valid(void* self);
int32_t q_time_hour(void* self);
int32_t q_time_minute(void* self);
int32_t q_time_second(void* self);
int32_t q_time_msec(void* self);
const char* q_time_to_string(void* self);
const char* q_time_to_string_with_format(void* self, const char* format);
bool q_time_set_h_m_s(void* self, int h, int m, int s);
QTime* q_time_add_secs(void* self, int secs);
int32_t q_time_secs_to(void* self, void* t);
QTime* q_time_add_m_secs(void* self, int ms);
int32_t q_time_msecs_to(void* self, void* t);
QTime* q_time_from_m_secs_since_start_of_day(int msecs);
int32_t q_time_msecs_since_start_of_day(void* self);
QTime* q_time_current_time();
QTime* q_time_from_string_with_string_val(const char* stringVal);
QTime* q_time_from_string4(const char* stringVal, const char* format);
bool q_time_is_valid2(int h, int m, int s);
const char* q_time_to_string1(void* self, int64_t f);
bool q_time_set_h_m_s4(void* self, int h, int m, int s, int ms);
QTime* q_time_from_string23(const char* stringVal, int64_t format);
bool q_time_is_valid4(int h, int m, int s, int ms);
void q_time_delete(void* self);

QDateTime* q_datetime_new();
QDateTime* q_datetime_new2(void* date, void* time);
QDateTime* q_datetime_new3(void* date, void* time, void* timeZone);
QDateTime* q_datetime_new4(void* other);
QDateTime* q_datetime_new5(void* date, void* time, int64_t spec);
QDateTime* q_datetime_new6(void* date, void* time, int64_t spec, int offsetSeconds);
void q_datetime_operator_assign(void* self, void* other);
void q_datetime_swap(void* self, void* other);
bool q_datetime_is_null(void* self);
bool q_datetime_is_valid(void* self);
QDate* q_datetime_date(void* self);
QTime* q_datetime_time(void* self);
int64_t q_datetime_time_spec(void* self);
int32_t q_datetime_offset_from_utc(void* self);
QTimeZone* q_datetime_time_zone(void* self);
const char* q_datetime_time_zone_abbreviation(void* self);
bool q_datetime_is_daylight_time(void* self);
long long q_datetime_to_m_secs_since_epoch(void* self);
long long q_datetime_to_secs_since_epoch(void* self);
void q_datetime_set_date(void* self, void* date);
void q_datetime_set_time(void* self, void* time);
void q_datetime_set_time_spec(void* self, int64_t spec);
void q_datetime_set_offset_from_utc(void* self, int offsetSeconds);
void q_datetime_set_time_zone(void* self, void* toZone);
void q_datetime_set_m_secs_since_epoch(void* self, long long msecs);
void q_datetime_set_secs_since_epoch(void* self, long long secs);
const char* q_datetime_to_string(void* self);
const char* q_datetime_to_string_with_format(void* self, const char* format);
QDateTime* q_datetime_add_days(void* self, long long days);
QDateTime* q_datetime_add_months(void* self, int months);
QDateTime* q_datetime_add_years(void* self, int years);
QDateTime* q_datetime_add_secs(void* self, long long secs);
QDateTime* q_datetime_add_m_secs(void* self, long long msecs);
QDateTime* q_datetime_to_time_spec(void* self, int64_t spec);
QDateTime* q_datetime_to_local_time(void* self);
QDateTime* q_datetime_to_u_t_c(void* self);
QDateTime* q_datetime_to_offset_from_utc(void* self, int offsetSeconds);
QDateTime* q_datetime_to_time_zone(void* self, void* toZone);
long long q_datetime_days_to(void* self, void* param1);
long long q_datetime_secs_to(void* self, void* param1);
long long q_datetime_msecs_to(void* self, void* param1);
QDateTime* q_datetime_current_date_time();
QDateTime* q_datetime_current_date_time_utc();
QDateTime* q_datetime_from_string_with_string_val(const char* stringVal);
QDateTime* q_datetime_from_string4(const char* stringVal, const char* format);
QDateTime* q_datetime_from_m_secs_since_epoch(long long msecs);
QDateTime* q_datetime_from_secs_since_epoch(long long secs);
QDateTime* q_datetime_from_m_secs_since_epoch2(long long msecs, void* timeZone);
QDateTime* q_datetime_from_secs_since_epoch2(long long secs, void* timeZone);
long long q_datetime_current_m_secs_since_epoch();
long long q_datetime_current_secs_since_epoch();
const char* q_datetime_to_string1(void* self, int64_t format);
const char* q_datetime_to_string22(void* self, const char* format, void* cal);
QDateTime* q_datetime_from_string23(const char* stringVal, int64_t format);
QDateTime* q_datetime_from_string34(const char* stringVal, const char* format, void* cal);
QDateTime* q_datetime_from_m_secs_since_epoch22(long long msecs, int64_t spec);
QDateTime* q_datetime_from_m_secs_since_epoch3(long long msecs, int64_t spec, int offsetFromUtc);
QDateTime* q_datetime_from_secs_since_epoch22(long long secs, int64_t spec);
QDateTime* q_datetime_from_secs_since_epoch3(long long secs, int64_t spec, int offsetFromUtc);
void q_datetime_delete(void* self);

/// https://doc.qt.io/qt-6/qdatetime.html#types

typedef enum {
    QDATETIME_YEARRANGE_FIRST = -292275056,
    QDATETIME_YEARRANGE_LAST = 292278994
} QDateTime__YearRange;

#endif
