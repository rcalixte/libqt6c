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

/// https://doc.qt.io/qt-6/qdate.html

/// q_date_new constructs a new QDate object.
///
/// ``` QDate* other ```
QDate* q_date_new(void* other);

/// q_date_new2 constructs a new QDate object and invalidates the source QDate object.
///
/// ``` QDate* other ```
QDate* q_date_new2(void* other);

/// q_date_new3 constructs a new QDate object.
///
///
QDate* q_date_new3();

/// q_date_new4 constructs a new QDate object.
///
/// ``` int y, int m, int d ```
QDate* q_date_new4(int y, int m, int d);

/// q_date_new5 constructs a new QDate object.
///
/// ``` int y, int m, int d, QCalendar* cal ```
QDate* q_date_new5(int y, int m, int d, void* cal);

/// q_date_new6 constructs a new QDate object.
///
/// ``` QDate* param1 ```
QDate* q_date_new6(void* param1);

/// q_date_copy_assign shallow copies `other` into `self`.
///
/// ``` QDate* self, QDate* other ```
void q_date_copy_assign(void* self, void* other);

/// q_date_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QDate* self, QDate* other ```
void q_date_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#isNull)
///
/// ``` QDate* self ```
bool q_date_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#isValid)
///
/// ``` QDate* self ```
bool q_date_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#year)
///
/// ``` QDate* self ```
int32_t q_date_year(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#month)
///
/// ``` QDate* self ```
int32_t q_date_month(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#day)
///
/// ``` QDate* self ```
int32_t q_date_day(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#dayOfWeek)
///
/// ``` QDate* self ```
int32_t q_date_day_of_week(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#dayOfYear)
///
/// ``` QDate* self ```
int32_t q_date_day_of_year(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#daysInMonth)
///
/// ``` QDate* self ```
int32_t q_date_days_in_month(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#daysInYear)
///
/// ``` QDate* self ```
int32_t q_date_days_in_year(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#weekNumber)
///
/// ``` QDate* self ```
int32_t q_date_week_number(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#year)
///
/// ``` QDate* self, QCalendar* cal ```
int32_t q_date_year_with_cal(void* self, void* cal);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#month)
///
/// ``` QDate* self, QCalendar* cal ```
int32_t q_date_month_with_cal(void* self, void* cal);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#day)
///
/// ``` QDate* self, QCalendar* cal ```
int32_t q_date_day_with_cal(void* self, void* cal);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#dayOfWeek)
///
/// ``` QDate* self, QCalendar* cal ```
int32_t q_date_day_of_week_with_cal(void* self, void* cal);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#dayOfYear)
///
/// ``` QDate* self, QCalendar* cal ```
int32_t q_date_day_of_year_with_cal(void* self, void* cal);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#daysInMonth)
///
/// ``` QDate* self, QCalendar* cal ```
int32_t q_date_days_in_month_with_cal(void* self, void* cal);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#daysInYear)
///
/// ``` QDate* self, QCalendar* cal ```
int32_t q_date_days_in_year_with_cal(void* self, void* cal);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#startOfDay)
///
/// ``` QDate* self ```
QDateTime* q_date_start_of_day(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#endOfDay)
///
/// ``` QDate* self ```
QDateTime* q_date_end_of_day(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#startOfDay)
///
/// ``` QDate* self, QTimeZone* zone ```
QDateTime* q_date_start_of_day_with_zone(void* self, void* zone);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#endOfDay)
///
/// ``` QDate* self, QTimeZone* zone ```
QDateTime* q_date_end_of_day_with_zone(void* self, void* zone);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#toString)
///
/// ``` QDate* self ```
const char* q_date_to_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#toString)
///
/// ``` QDate* self, const char* format ```
const char* q_date_to_string_with_format(void* self, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#setDate)
///
/// ``` QDate* self, int year, int month, int day ```
bool q_date_set_date(void* self, int year, int month, int day);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#setDate)
///
/// ``` QDate* self, int year, int month, int day, QCalendar* cal ```
bool q_date_set_date2(void* self, int year, int month, int day, void* cal);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#getDate)
///
/// ``` QDate* self, int* year, int* month, int* day ```
void q_date_get_date(void* self, int* year, int* month, int* day);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#addDays)
///
/// ``` QDate* self, long long days ```
QDate* q_date_add_days(void* self, long long days);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#addMonths)
///
/// ``` QDate* self, int months ```
QDate* q_date_add_months(void* self, int months);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#addYears)
///
/// ``` QDate* self, int years ```
QDate* q_date_add_years(void* self, int years);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#addMonths)
///
/// ``` QDate* self, int months, QCalendar* cal ```
QDate* q_date_add_months2(void* self, int months, void* cal);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#addYears)
///
/// ``` QDate* self, int years, QCalendar* cal ```
QDate* q_date_add_years2(void* self, int years, void* cal);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#daysTo)
///
/// ``` QDate* self, QDate* d ```
long long q_date_days_to(void* self, void* d);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#currentDate)
///
///
QDate* q_date_current_date();

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#fromString)
///
/// ``` const char* stringVal ```
QDate* q_date_from_string_with_string_val(const char* stringVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#fromString)
///
/// ``` const char* stringVal, const char* format ```
QDate* q_date_from_string4(const char* stringVal, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#isValid)
///
/// ``` int y, int m, int d ```
bool q_date_is_valid2(int y, int m, int d);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#isLeapYear)
///
/// ``` int year ```
bool q_date_is_leap_year(int year);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#fromJulianDay)
///
/// ``` long long jd_ ```
QDate* q_date_from_julian_day(long long jd_);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#toJulianDay)
///
/// ``` QDate* self ```
long long q_date_to_julian_day(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#weekNumber)
///
/// ``` QDate* self, int* yearNum ```
int32_t q_date_week_number1(void* self, int* yearNum);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#startOfDay)
///
/// ``` QDate* self, enum Qt__TimeSpec spec ```
QDateTime* q_date_start_of_day1(void* self, int64_t spec);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#startOfDay)
///
/// ``` QDate* self, enum Qt__TimeSpec spec, int offsetSeconds ```
QDateTime* q_date_start_of_day2(void* self, int64_t spec, int offsetSeconds);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#endOfDay)
///
/// ``` QDate* self, enum Qt__TimeSpec spec ```
QDateTime* q_date_end_of_day1(void* self, int64_t spec);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#endOfDay)
///
/// ``` QDate* self, enum Qt__TimeSpec spec, int offsetSeconds ```
QDateTime* q_date_end_of_day2(void* self, int64_t spec, int offsetSeconds);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#toString)
///
/// ``` QDate* self, enum Qt__DateFormat format ```
const char* q_date_to_string1(void* self, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#toString)
///
/// ``` QDate* self, const char* format, QCalendar* cal ```
const char* q_date_to_string22(void* self, const char* format, void* cal);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#fromString)
///
/// ``` const char* stringVal, enum Qt__DateFormat format ```
QDate* q_date_from_string23(const char* stringVal, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#fromString)
///
/// ``` const char* stringVal, const char* format, QCalendar* cal ```
QDate* q_date_from_string34(const char* stringVal, const char* format, void* cal);

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#dtor.QDate)
///
/// Delete this object from C++ memory.
///
/// ``` QDate* self ```
void q_date_delete(void* self);

/// https://doc.qt.io/qt-6/qtime.html

/// q_time_new constructs a new QTime object.
///
/// ``` QTime* other ```
QTime* q_time_new(void* other);

/// q_time_new2 constructs a new QTime object and invalidates the source QTime object.
///
/// ``` QTime* other ```
QTime* q_time_new2(void* other);

/// q_time_new3 constructs a new QTime object.
///
///
QTime* q_time_new3();

/// q_time_new4 constructs a new QTime object.
///
/// ``` int h, int m ```
QTime* q_time_new4(int h, int m);

/// q_time_new5 constructs a new QTime object.
///
/// ``` QTime* param1 ```
QTime* q_time_new5(void* param1);

/// q_time_new6 constructs a new QTime object.
///
/// ``` int h, int m, int s ```
QTime* q_time_new6(int h, int m, int s);

/// q_time_new7 constructs a new QTime object.
///
/// ``` int h, int m, int s, int ms ```
QTime* q_time_new7(int h, int m, int s, int ms);

/// q_time_copy_assign shallow copies `other` into `self`.
///
/// ``` QTime* self, QTime* other ```
void q_time_copy_assign(void* self, void* other);

/// q_time_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QTime* self, QTime* other ```
void q_time_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#isNull)
///
/// ``` QTime* self ```
bool q_time_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#isValid)
///
/// ``` QTime* self ```
bool q_time_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#hour)
///
/// ``` QTime* self ```
int32_t q_time_hour(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#minute)
///
/// ``` QTime* self ```
int32_t q_time_minute(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#second)
///
/// ``` QTime* self ```
int32_t q_time_second(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#msec)
///
/// ``` QTime* self ```
int32_t q_time_msec(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#toString)
///
/// ``` QTime* self ```
const char* q_time_to_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#toString)
///
/// ``` QTime* self, const char* format ```
const char* q_time_to_string_with_format(void* self, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#setHMS)
///
/// ``` QTime* self, int h, int m, int s ```
bool q_time_set_h_m_s(void* self, int h, int m, int s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#addSecs)
///
/// ``` QTime* self, int secs ```
QTime* q_time_add_secs(void* self, int secs);

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#secsTo)
///
/// ``` QTime* self, QTime* t ```
int32_t q_time_secs_to(void* self, void* t);

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#addMSecs)
///
/// ``` QTime* self, int ms ```
QTime* q_time_add_m_secs(void* self, int ms);

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#msecsTo)
///
/// ``` QTime* self, QTime* t ```
int32_t q_time_msecs_to(void* self, void* t);

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#fromMSecsSinceStartOfDay)
///
/// ``` int msecs ```
QTime* q_time_from_m_secs_since_start_of_day(int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#msecsSinceStartOfDay)
///
/// ``` QTime* self ```
int32_t q_time_msecs_since_start_of_day(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#currentTime)
///
///
QTime* q_time_current_time();

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#fromString)
///
/// ``` const char* stringVal ```
QTime* q_time_from_string_with_string_val(const char* stringVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#fromString)
///
/// ``` const char* stringVal, const char* format ```
QTime* q_time_from_string4(const char* stringVal, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#isValid)
///
/// ``` int h, int m, int s ```
bool q_time_is_valid2(int h, int m, int s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#toString)
///
/// ``` QTime* self, enum Qt__DateFormat f ```
const char* q_time_to_string1(void* self, int64_t f);

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#setHMS)
///
/// ``` QTime* self, int h, int m, int s, int ms ```
bool q_time_set_h_m_s4(void* self, int h, int m, int s, int ms);

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#fromString)
///
/// ``` const char* stringVal, enum Qt__DateFormat format ```
QTime* q_time_from_string23(const char* stringVal, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#isValid)
///
/// ``` int h, int m, int s, int ms ```
bool q_time_is_valid4(int h, int m, int s, int ms);

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#dtor.QTime)
///
/// Delete this object from C++ memory.
///
/// ``` QTime* self ```
void q_time_delete(void* self);

/// https://doc.qt.io/qt-6/qdatetime.html

/// q_datetime_new constructs a new QDateTime object.
///
///
QDateTime* q_datetime_new();

/// q_datetime_new2 constructs a new QDateTime object.
///
/// ``` QDate* date, QTime* time ```
QDateTime* q_datetime_new2(void* date, void* time);

/// q_datetime_new3 constructs a new QDateTime object.
///
/// ``` QDate* date, QTime* time, QTimeZone* timeZone ```
QDateTime* q_datetime_new3(void* date, void* time, void* timeZone);

/// q_datetime_new4 constructs a new QDateTime object.
///
/// ``` QDateTime* other ```
QDateTime* q_datetime_new4(void* other);

/// q_datetime_new5 constructs a new QDateTime object.
///
/// ``` QDate* date, QTime* time, enum Qt__TimeSpec spec ```
QDateTime* q_datetime_new5(void* date, void* time, int64_t spec);

/// q_datetime_new6 constructs a new QDateTime object.
///
/// ``` QDate* date, QTime* time, enum Qt__TimeSpec spec, int offsetSeconds ```
QDateTime* q_datetime_new6(void* date, void* time, int64_t spec, int offsetSeconds);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#operator=)
///
/// ``` QDateTime* self, QDateTime* other ```
void q_datetime_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#swap)
///
/// ``` QDateTime* self, QDateTime* other ```
void q_datetime_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#isNull)
///
/// ``` QDateTime* self ```
bool q_datetime_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#isValid)
///
/// ``` QDateTime* self ```
bool q_datetime_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#date)
///
/// ``` QDateTime* self ```
QDate* q_datetime_date(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#time)
///
/// ``` QDateTime* self ```
QTime* q_datetime_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#timeSpec)
///
/// ``` QDateTime* self ```
int64_t q_datetime_time_spec(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#offsetFromUtc)
///
/// ``` QDateTime* self ```
int32_t q_datetime_offset_from_utc(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#timeZone)
///
/// ``` QDateTime* self ```
QTimeZone* q_datetime_time_zone(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#timeZoneAbbreviation)
///
/// ``` QDateTime* self ```
const char* q_datetime_time_zone_abbreviation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#isDaylightTime)
///
/// ``` QDateTime* self ```
bool q_datetime_is_daylight_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#toMSecsSinceEpoch)
///
/// ``` QDateTime* self ```
long long q_datetime_to_m_secs_since_epoch(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#toSecsSinceEpoch)
///
/// ``` QDateTime* self ```
long long q_datetime_to_secs_since_epoch(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#setDate)
///
/// ``` QDateTime* self, QDate* date ```
void q_datetime_set_date(void* self, void* date);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#setTime)
///
/// ``` QDateTime* self, QTime* time ```
void q_datetime_set_time(void* self, void* time);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#setTimeSpec)
///
/// ``` QDateTime* self, enum Qt__TimeSpec spec ```
void q_datetime_set_time_spec(void* self, int64_t spec);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#setOffsetFromUtc)
///
/// ``` QDateTime* self, int offsetSeconds ```
void q_datetime_set_offset_from_utc(void* self, int offsetSeconds);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#setTimeZone)
///
/// ``` QDateTime* self, QTimeZone* toZone ```
void q_datetime_set_time_zone(void* self, void* toZone);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#setMSecsSinceEpoch)
///
/// ``` QDateTime* self, long long msecs ```
void q_datetime_set_m_secs_since_epoch(void* self, long long msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#setSecsSinceEpoch)
///
/// ``` QDateTime* self, long long secs ```
void q_datetime_set_secs_since_epoch(void* self, long long secs);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#toString)
///
/// ``` QDateTime* self ```
const char* q_datetime_to_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#toString)
///
/// ``` QDateTime* self, const char* format ```
const char* q_datetime_to_string_with_format(void* self, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#addDays)
///
/// ``` QDateTime* self, long long days ```
QDateTime* q_datetime_add_days(void* self, long long days);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#addMonths)
///
/// ``` QDateTime* self, int months ```
QDateTime* q_datetime_add_months(void* self, int months);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#addYears)
///
/// ``` QDateTime* self, int years ```
QDateTime* q_datetime_add_years(void* self, int years);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#addSecs)
///
/// ``` QDateTime* self, long long secs ```
QDateTime* q_datetime_add_secs(void* self, long long secs);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#addMSecs)
///
/// ``` QDateTime* self, long long msecs ```
QDateTime* q_datetime_add_m_secs(void* self, long long msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#toTimeSpec)
///
/// ``` QDateTime* self, enum Qt__TimeSpec spec ```
QDateTime* q_datetime_to_time_spec(void* self, int64_t spec);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#toLocalTime)
///
/// ``` QDateTime* self ```
QDateTime* q_datetime_to_local_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#toUTC)
///
/// ``` QDateTime* self ```
QDateTime* q_datetime_to_u_t_c(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#toOffsetFromUtc)
///
/// ``` QDateTime* self, int offsetSeconds ```
QDateTime* q_datetime_to_offset_from_utc(void* self, int offsetSeconds);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#toTimeZone)
///
/// ``` QDateTime* self, QTimeZone* toZone ```
QDateTime* q_datetime_to_time_zone(void* self, void* toZone);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#daysTo)
///
/// ``` QDateTime* self, QDateTime* param1 ```
long long q_datetime_days_to(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#secsTo)
///
/// ``` QDateTime* self, QDateTime* param1 ```
long long q_datetime_secs_to(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#msecsTo)
///
/// ``` QDateTime* self, QDateTime* param1 ```
long long q_datetime_msecs_to(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#currentDateTime)
///
///
QDateTime* q_datetime_current_date_time();

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#currentDateTimeUtc)
///
///
QDateTime* q_datetime_current_date_time_utc();

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromString)
///
/// ``` const char* stringVal ```
QDateTime* q_datetime_from_string_with_string_val(const char* stringVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromString)
///
/// ``` const char* stringVal, const char* format ```
QDateTime* q_datetime_from_string4(const char* stringVal, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromMSecsSinceEpoch)
///
/// ``` long long msecs ```
QDateTime* q_datetime_from_m_secs_since_epoch(long long msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromSecsSinceEpoch)
///
/// ``` long long secs ```
QDateTime* q_datetime_from_secs_since_epoch(long long secs);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromMSecsSinceEpoch)
///
/// ``` long long msecs, QTimeZone* timeZone ```
QDateTime* q_datetime_from_m_secs_since_epoch2(long long msecs, void* timeZone);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromSecsSinceEpoch)
///
/// ``` long long secs, QTimeZone* timeZone ```
QDateTime* q_datetime_from_secs_since_epoch2(long long secs, void* timeZone);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#currentMSecsSinceEpoch)
///
///
long long q_datetime_current_m_secs_since_epoch();

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#currentSecsSinceEpoch)
///
///
long long q_datetime_current_secs_since_epoch();

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#toString)
///
/// ``` QDateTime* self, enum Qt__DateFormat format ```
const char* q_datetime_to_string1(void* self, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#toString)
///
/// ``` QDateTime* self, const char* format, QCalendar* cal ```
const char* q_datetime_to_string22(void* self, const char* format, void* cal);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromString)
///
/// ``` const char* stringVal, enum Qt__DateFormat format ```
QDateTime* q_datetime_from_string23(const char* stringVal, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromString)
///
/// ``` const char* stringVal, const char* format, QCalendar* cal ```
QDateTime* q_datetime_from_string34(const char* stringVal, const char* format, void* cal);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromMSecsSinceEpoch)
///
/// ``` long long msecs, enum Qt__TimeSpec spec ```
QDateTime* q_datetime_from_m_secs_since_epoch22(long long msecs, int64_t spec);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromMSecsSinceEpoch)
///
/// ``` long long msecs, enum Qt__TimeSpec spec, int offsetFromUtc ```
QDateTime* q_datetime_from_m_secs_since_epoch3(long long msecs, int64_t spec, int offsetFromUtc);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromSecsSinceEpoch)
///
/// ``` long long secs, enum Qt__TimeSpec spec ```
QDateTime* q_datetime_from_secs_since_epoch22(long long secs, int64_t spec);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromSecsSinceEpoch)
///
/// ``` long long secs, enum Qt__TimeSpec spec, int offsetFromUtc ```
QDateTime* q_datetime_from_secs_since_epoch3(long long secs, int64_t spec, int offsetFromUtc);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#dtor.QDateTime)
///
/// Delete this object from C++ memory.
///
/// ``` QDateTime* self ```
void q_datetime_delete(void* self);

/// https://doc.qt.io/qt-6/qdatetime.html#types

typedef enum {
    QDATETIME_YEARRANGE_FIRST = -292275056,
    QDATETIME_YEARRANGE_LAST = 292278994
} QDateTime__YearRange;

#endif
