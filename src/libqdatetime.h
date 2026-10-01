#pragma once
#ifndef LIBQDATETIME_H
#define LIBQDATETIME_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html)

/// q_date_new constructs a new QDate object.
///
/// @param other QDate*
///
QDate* q_date_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html)

/// q_date_new2 constructs a new QDate object and invalidates the source QDate object.
///
/// @param other QDate*
///
QDate* q_date_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html)

/// q_date_new3 constructs a new QDate object.
///
QDate* q_date_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html)

/// q_date_new4 constructs a new QDate object.
///
/// @param y int
/// @param m int
/// @param d int
///
QDate* q_date_new4(int y, int m, int d);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html)

/// q_date_new5 constructs a new QDate object.
///
/// @param y int
/// @param m int
/// @param d int
/// @param cal QCalendar*
///
QDate* q_date_new5(int y, int m, int d, void* cal);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html)

/// q_date_new6 constructs a new QDate object.
///
/// @param param1 QDate*
///
QDate* q_date_new6(const void* param1);

/// q_date_copy_assign shallow copies `other` into `self`.
///
/// @param self QDate*
/// @param other QDate*
///
void q_date_copy_assign(void* self, void* other);

/// q_date_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QDate*
/// @param other QDate*
///
void q_date_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#isNull)
///
/// @param self const QDate*
///
bool q_date_is_null(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#isValid)
///
/// @param self const QDate*
///
bool q_date_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#year)
///
/// @param self const QDate*
///
int32_t q_date_year(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#month)
///
/// @param self const QDate*
///
int32_t q_date_month(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#day)
///
/// @param self const QDate*
///
int32_t q_date_day(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#dayOfWeek)
///
/// @param self const QDate*
///
int32_t q_date_day_of_week(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#dayOfYear)
///
/// @param self const QDate*
///
int32_t q_date_day_of_year(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#daysInMonth)
///
/// @param self const QDate*
///
int32_t q_date_days_in_month(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#daysInYear)
///
/// @param self const QDate*
///
int32_t q_date_days_in_year(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#weekNumber)
///
/// @param self const QDate*
///
int32_t q_date_week_number(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#year)
///
/// @param self const QDate*
/// @param cal QCalendar*
///
int32_t q_date_year2(const void* self, void* cal);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#month)
///
/// @param self const QDate*
/// @param cal QCalendar*
///
int32_t q_date_month2(const void* self, void* cal);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#day)
///
/// @param self const QDate*
/// @param cal QCalendar*
///
int32_t q_date_day2(const void* self, void* cal);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#dayOfWeek)
///
/// @param self const QDate*
/// @param cal QCalendar*
///
int32_t q_date_day_of_week2(const void* self, void* cal);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#dayOfYear)
///
/// @param self const QDate*
/// @param cal QCalendar*
///
int32_t q_date_day_of_year2(const void* self, void* cal);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#daysInMonth)
///
/// @param self const QDate*
/// @param cal QCalendar*
///
int32_t q_date_days_in_month2(const void* self, void* cal);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#daysInYear)
///
/// @param self const QDate*
/// @param cal QCalendar*
///
int32_t q_date_days_in_year2(const void* self, void* cal);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#startOfDay)
///
/// @param self const QDate*
/// @param spec enum Qt__TimeSpec
///
QDateTime* q_date_start_of_day(const void* self, int32_t spec);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#endOfDay)
///
/// @param self const QDate*
/// @param spec enum Qt__TimeSpec
///
QDateTime* q_date_end_of_day(const void* self, int32_t spec);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#startOfDay)
///
/// @param self const QDate*
/// @param zone QTimeZone*
///
QDateTime* q_date_start_of_day2(const void* self, const void* zone);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#endOfDay)
///
/// @param self const QDate*
/// @param zone QTimeZone*
///
QDateTime* q_date_end_of_day2(const void* self, const void* zone);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#startOfDay)
///
/// @param self const QDate*
///
QDateTime* q_date_start_of_day3(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#endOfDay)
///
/// @param self const QDate*
///
QDateTime* q_date_end_of_day3(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDate*
///
const char* q_date_to_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDate*
/// @param format const char*
///
const char* q_date_to_string2(const void* self, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDate*
/// @param format const char*
/// @param cal QCalendar*
///
const char* q_date_to_string3(const void* self, const char* format, void* cal);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDate*
/// @param format const char*
///
const char* q_date_to_string4(const void* self, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDate*
/// @param format const char*
/// @param cal QCalendar*
///
const char* q_date_to_string5(const void* self, const char* format, void* cal);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#setDate)
///
/// @param self QDate*
/// @param year int
/// @param month int
/// @param day int
///
bool q_date_set_date(void* self, int year, int month, int day);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#setDate)
///
/// @param self QDate*
/// @param year int
/// @param month int
/// @param day int
/// @param cal QCalendar*
///
bool q_date_set_date2(void* self, int year, int month, int day, void* cal);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#getDate)
///
/// @param self const QDate*
/// @param year int*
/// @param month int*
/// @param day int*
///
void q_date_get_date(const void* self, int* year, int* month, int* day);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#addDays)
///
/// @param self const QDate*
/// @param days int64_t
///
QDate* q_date_add_days(const void* self, int64_t days);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#addMonths)
///
/// @param self const QDate*
/// @param months int
///
QDate* q_date_add_months(const void* self, int months);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#addYears)
///
/// @param self const QDate*
/// @param years int
///
QDate* q_date_add_years(const void* self, int years);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#addMonths)
///
/// @param self const QDate*
/// @param months int
/// @param cal QCalendar*
///
QDate* q_date_add_months2(const void* self, int months, void* cal);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#addYears)
///
/// @param self const QDate*
/// @param years int
/// @param cal QCalendar*
///
QDate* q_date_add_years2(const void* self, int years, void* cal);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#daysTo)
///
/// @param self const QDate*
/// @param d QDate*
///
int64_t q_date_days_to(const void* self, void* d);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#currentDate)
///
QDate* q_date_current_date();

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
///
/// @param string const char*
///
QDate* q_date_from_string(const char* string);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
///
/// @param string const char*
///
QDate* q_date_from_string2(const char* string);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
///
/// @param string const char*
/// @param format const char*
/// @param cal QCalendar*
///
QDate* q_date_from_string3(const char* string, const char* format, void* cal);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
///
/// @param string const char*
/// @param format const char*
/// @param cal QCalendar*
///
QDate* q_date_from_string4(const char* string, const char* format, void* cal);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
///
/// @param string const char*
/// @param format const char*
/// @param cal QCalendar*
///
QDate* q_date_from_string5(const char* string, const char* format, void* cal);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
///
/// @param string const char*
/// @param format const char*
///
QDate* q_date_from_string6(const char* string, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
///
/// @param string const char*
/// @param format const char*
/// @param baseYear int
/// @param cal QCalendar*
///
QDate* q_date_from_string7(const char* string, const char* format, int baseYear, void* cal);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
///
/// @param string const char*
/// @param format const char*
///
QDate* q_date_from_string8(const char* string, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
///
/// @param string const char*
/// @param format const char*
/// @param baseYear int
/// @param cal QCalendar*
///
QDate* q_date_from_string9(const char* string, const char* format, int baseYear, void* cal);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
///
/// @param string const char*
/// @param format const char*
///
QDate* q_date_from_string10(const char* string, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
///
/// @param string const char*
/// @param format const char*
/// @param baseYear int
/// @param cal QCalendar*
///
QDate* q_date_from_string11(const char* string, const char* format, int baseYear, void* cal);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#isValid)
///
/// @param y int
/// @param m int
/// @param d int
///
bool q_date_is_valid2(int y, int m, int d);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#isLeapYear)
///
/// @param year int
///
bool q_date_is_leap_year(int year);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromJulianDay)
///
/// @param jd_ int64_t
///
QDate* q_date_from_julian_day(int64_t jd_);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#toJulianDay)
///
/// @param self const QDate*
///
int64_t q_date_to_julian_day(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#weekNumber)
///
/// @param self const QDate*
/// @param yearNum int*
///
int32_t q_date_week_number1(const void* self, int* yearNum);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#startOfDay)
///
/// @param self const QDate*
/// @param spec enum Qt__TimeSpec
/// @param offsetSeconds int
///
QDateTime* q_date_start_of_day22(const void* self, int32_t spec, int offsetSeconds);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#endOfDay)
///
/// @param self const QDate*
/// @param spec enum Qt__TimeSpec
/// @param offsetSeconds int
///
QDateTime* q_date_end_of_day22(const void* self, int32_t spec, int offsetSeconds);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDate*
/// @param format enum Qt__DateFormat
///
const char* q_date_to_string1(const void* self, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
///
/// @param string const char*
/// @param format enum Qt__DateFormat
///
QDate* q_date_from_string22(const char* string, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
///
/// @param string const char*
/// @param format enum Qt__DateFormat
///
QDate* q_date_from_string23(const char* string, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
///
/// @param string const char*
/// @param format const char*
/// @param baseYear int
///
QDate* q_date_from_string32(const char* string, const char* format, int baseYear);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
///
/// @param string const char*
/// @param format const char*
/// @param baseYear int
///
QDate* q_date_from_string33(const char* string, const char* format, int baseYear);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#fromString)
///
/// @param string const char*
/// @param format const char*
/// @param baseYear int
///
QDate* q_date_from_string34(const char* string, const char* format, int baseYear);

/// [Upstream resources](https://doc.qt.io/qt-6/qdate.html#dtor.QDate)
///
/// Delete this object from C++ memory.
///
/// @param self QDate*
///
void q_date_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html)

/// q_time_new constructs a new QTime object.
///
/// @param other QTime*
///
QTime* q_time_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html)

/// q_time_new2 constructs a new QTime object and invalidates the source QTime object.
///
/// @param other QTime*
///
QTime* q_time_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html)

/// q_time_new3 constructs a new QTime object.
///
QTime* q_time_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html)

/// q_time_new4 constructs a new QTime object.
///
/// @param h int
/// @param m int
///
QTime* q_time_new4(int h, int m);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html)

/// q_time_new5 constructs a new QTime object.
///
/// @param param1 QTime*
///
QTime* q_time_new5(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html)

/// q_time_new6 constructs a new QTime object.
///
/// @param h int
/// @param m int
/// @param s int
///
QTime* q_time_new6(int h, int m, int s);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html)

/// q_time_new7 constructs a new QTime object.
///
/// @param h int
/// @param m int
/// @param s int
/// @param ms int
///
QTime* q_time_new7(int h, int m, int s, int ms);

/// q_time_copy_assign shallow copies `other` into `self`.
///
/// @param self QTime*
/// @param other QTime*
///
void q_time_copy_assign(void* self, void* other);

/// q_time_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QTime*
/// @param other QTime*
///
void q_time_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html#isNull)
///
/// @param self const QTime*
///
bool q_time_is_null(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html#isValid)
///
/// @param self const QTime*
///
bool q_time_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html#hour)
///
/// @param self const QTime*
///
int32_t q_time_hour(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html#minute)
///
/// @param self const QTime*
///
int32_t q_time_minute(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html#second)
///
/// @param self const QTime*
///
int32_t q_time_second(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html#msec)
///
/// @param self const QTime*
///
int32_t q_time_msec(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTime*
///
const char* q_time_to_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTime*
/// @param format const char*
///
const char* q_time_to_string2(const void* self, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTime*
/// @param format const char*
///
const char* q_time_to_string3(const void* self, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html#setHMS)
///
/// @param self QTime*
/// @param h int
/// @param m int
/// @param s int
///
bool q_time_set_h_m_s(void* self, int h, int m, int s);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html#addSecs)
///
/// @param self const QTime*
/// @param secs int
///
QTime* q_time_add_secs(const void* self, int secs);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html#secsTo)
///
/// @param self const QTime*
/// @param t QTime*
///
int32_t q_time_secs_to(const void* self, void* t);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html#addMSecs)
///
/// @param self const QTime*
/// @param ms int
///
QTime* q_time_add_m_secs(const void* self, int ms);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html#msecsTo)
///
/// @param self const QTime*
/// @param t QTime*
///
int32_t q_time_msecs_to(const void* self, void* t);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html#fromMSecsSinceStartOfDay)
///
/// @param msecs int
///
QTime* q_time_from_m_secs_since_start_of_day(int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html#msecsSinceStartOfDay)
///
/// @param self const QTime*
///
int32_t q_time_msecs_since_start_of_day(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html#currentTime)
///
QTime* q_time_current_time();

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html#fromString)
///
/// @param string const char*
///
QTime* q_time_from_string(const char* string);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html#fromString)
///
/// @param string const char*
/// @param format const char*
///
QTime* q_time_from_string2(const char* string, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html#fromString)
///
/// @param string const char*
/// @param format const char*
///
QTime* q_time_from_string3(const char* string, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html#fromString)
///
/// @param string const char*
///
QTime* q_time_from_string4(const char* string);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html#fromString)
///
/// @param string const char*
/// @param format const char*
///
QTime* q_time_from_string5(const char* string, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html#isValid)
///
/// @param h int
/// @param m int
/// @param s int
///
bool q_time_is_valid2(int h, int m, int s);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTime*
/// @param f enum Qt__DateFormat
///
const char* q_time_to_string1(const void* self, int32_t f);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html#setHMS)
///
/// @param self QTime*
/// @param h int
/// @param m int
/// @param s int
/// @param ms int
///
bool q_time_set_h_m_s4(void* self, int h, int m, int s, int ms);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html#fromString)
///
/// @param string const char*
/// @param format enum Qt__DateFormat
///
QTime* q_time_from_string22(const char* string, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html#fromString)
///
/// @param string const char*
/// @param format enum Qt__DateFormat
///
QTime* q_time_from_string23(const char* string, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html#isValid)
///
/// @param h int
/// @param m int
/// @param s int
/// @param ms int
///
bool q_time_is_valid4(int h, int m, int s, int ms);

/// [Upstream resources](https://doc.qt.io/qt-6/qtime.html#dtor.QTime)
///
/// Delete this object from C++ memory.
///
/// @param self QTime*
///
void q_time_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html)

/// q_datetime_new constructs a new QDateTime object.
///
QDateTime* q_datetime_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html)

/// q_datetime_new2 constructs a new QDateTime object.
///
/// @param date QDate*
/// @param time QTime*
/// @param spec enum Qt__TimeSpec
///
QDateTime* q_datetime_new2(void* date, void* time, int32_t spec);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html)

/// q_datetime_new3 constructs a new QDateTime object.
///
/// @param date QDate*
/// @param time QTime*
/// @param timeZone QTimeZone*
///
QDateTime* q_datetime_new3(void* date, void* time, const void* timeZone);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html)

/// q_datetime_new4 constructs a new QDateTime object.
///
/// @param date QDate*
/// @param time QTime*
///
QDateTime* q_datetime_new4(void* date, void* time);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html)

/// q_datetime_new5 constructs a new QDateTime object.
///
/// @param other QDateTime*
///
QDateTime* q_datetime_new5(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html)

/// q_datetime_new6 constructs a new QDateTime object.
///
/// @param date QDate*
/// @param time QTime*
/// @param spec enum Qt__TimeSpec
/// @param offsetSeconds int
///
QDateTime* q_datetime_new6(void* date, void* time, int32_t spec, int offsetSeconds);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html)

/// q_datetime_new7 constructs a new QDateTime object.
///
/// @param date QDate*
/// @param time QTime*
/// @param timeZone QTimeZone*
/// @param resolve enum QDateTime__TransitionResolution
///
QDateTime* q_datetime_new7(void* date, void* time, const void* timeZone, int32_t resolve);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html)

/// q_datetime_new8 constructs a new QDateTime object.
///
/// @param date QDate*
/// @param time QTime*
/// @param resolve enum QDateTime__TransitionResolution
///
QDateTime* q_datetime_new8(void* date, void* time, int32_t resolve);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#operator-eq)
///
/// @param self QDateTime*
/// @param other QDateTime*
///
void q_datetime_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#swap)
///
/// @param self QDateTime*
/// @param other QDateTime*
///
void q_datetime_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#isNull)
///
/// @param self const QDateTime*
///
bool q_datetime_is_null(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#isValid)
///
/// @param self const QDateTime*
///
bool q_datetime_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#date)
///
/// @param self const QDateTime*
///
QDate* q_datetime_date(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#time)
///
/// @param self const QDateTime*
///
QTime* q_datetime_time(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#timeSpec)
///
/// @param self const QDateTime*
///
/// @return enum Qt__TimeSpec
///
int32_t q_datetime_time_spec(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#offsetFromUtc)
///
/// @param self const QDateTime*
///
int32_t q_datetime_offset_from_utc(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#timeRepresentation)
///
/// @param self const QDateTime*
///
QTimeZone* q_datetime_time_representation(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#timeZone)
///
/// @param self const QDateTime*
///
QTimeZone* q_datetime_time_zone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#timeZoneAbbreviation)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDateTime*
///
const char* q_datetime_time_zone_abbreviation(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#isDaylightTime)
///
/// @param self const QDateTime*
///
bool q_datetime_is_daylight_time(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#toMSecsSinceEpoch)
///
/// @param self const QDateTime*
///
int64_t q_datetime_to_m_secs_since_epoch(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#toSecsSinceEpoch)
///
/// @param self const QDateTime*
///
int64_t q_datetime_to_secs_since_epoch(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#setDate)
///
/// @param self QDateTime*
/// @param date QDate*
///
void q_datetime_set_date(void* self, void* date);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#setTime)
///
/// @param self QDateTime*
/// @param time QTime*
///
void q_datetime_set_time(void* self, void* time);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#setTimeSpec)
///
/// @param self QDateTime*
/// @param spec enum Qt__TimeSpec
///
void q_datetime_set_time_spec(void* self, int32_t spec);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#setOffsetFromUtc)
///
/// @param self QDateTime*
/// @param offsetSeconds int
///
void q_datetime_set_offset_from_utc(void* self, int offsetSeconds);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#setTimeZone)
///
/// @param self QDateTime*
/// @param toZone QTimeZone*
///
void q_datetime_set_time_zone(void* self, const void* toZone);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#setMSecsSinceEpoch)
///
/// @param self QDateTime*
/// @param msecs int64_t
///
void q_datetime_set_m_secs_since_epoch(void* self, int64_t msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#setSecsSinceEpoch)
///
/// @param self QDateTime*
/// @param secs int64_t
///
void q_datetime_set_secs_since_epoch(void* self, int64_t secs);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDateTime*
///
const char* q_datetime_to_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDateTime*
/// @param format const char*
///
const char* q_datetime_to_string2(const void* self, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDateTime*
/// @param format const char*
/// @param cal QCalendar*
///
const char* q_datetime_to_string3(const void* self, const char* format, void* cal);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDateTime*
/// @param format const char*
///
const char* q_datetime_to_string4(const void* self, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDateTime*
/// @param format const char*
/// @param cal QCalendar*
///
const char* q_datetime_to_string5(const void* self, const char* format, void* cal);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#addDays)
///
/// @param self const QDateTime*
/// @param days int64_t
///
QDateTime* q_datetime_add_days(const void* self, int64_t days);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#addMonths)
///
/// @param self const QDateTime*
/// @param months int
///
QDateTime* q_datetime_add_months(const void* self, int months);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#addYears)
///
/// @param self const QDateTime*
/// @param years int
///
QDateTime* q_datetime_add_years(const void* self, int years);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#addSecs)
///
/// @param self const QDateTime*
/// @param secs int64_t
///
QDateTime* q_datetime_add_secs(const void* self, int64_t secs);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#addMSecs)
///
/// @param self const QDateTime*
/// @param msecs int64_t
///
QDateTime* q_datetime_add_m_secs(const void* self, int64_t msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#addDuration)
///
/// @param self const QDateTime*
/// @param msecs int64_t of milliseconds
///
QDateTime* q_datetime_add_duration(const void* self, int64_t msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#toTimeSpec)
///
/// @param self const QDateTime*
/// @param spec enum Qt__TimeSpec
///
QDateTime* q_datetime_to_time_spec(const void* self, int32_t spec);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#toLocalTime)
///
/// @param self const QDateTime*
///
QDateTime* q_datetime_to_local_time(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#toUTC)
///
/// @param self const QDateTime*
///
QDateTime* q_datetime_to_u_t_c(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#toOffsetFromUtc)
///
/// @param self const QDateTime*
/// @param offsetSeconds int
///
QDateTime* q_datetime_to_offset_from_utc(const void* self, int offsetSeconds);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#toTimeZone)
///
/// @param self const QDateTime*
/// @param toZone QTimeZone*
///
QDateTime* q_datetime_to_time_zone(const void* self, const void* toZone);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#daysTo)
///
/// @param self const QDateTime*
/// @param param1 QDateTime*
///
int64_t q_datetime_days_to(const void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#secsTo)
///
/// @param self const QDateTime*
/// @param param1 QDateTime*
///
int64_t q_datetime_secs_to(const void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#msecsTo)
///
/// @param self const QDateTime*
/// @param param1 QDateTime*
///
int64_t q_datetime_msecs_to(const void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#currentDateTime)
///
/// @param zone QTimeZone*
///
QDateTime* q_datetime_current_date_time(const void* zone);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#currentDateTime)
///
QDateTime* q_datetime_current_date_time2();

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#currentDateTimeUtc)
///
QDateTime* q_datetime_current_date_time_utc();

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
///
/// @param string const char*
///
QDateTime* q_datetime_from_string(const char* string);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
///
/// @param string const char*
///
QDateTime* q_datetime_from_string2(const char* string);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
///
/// @param string const char*
/// @param format const char*
/// @param cal QCalendar*
///
QDateTime* q_datetime_from_string3(const char* string, const char* format, void* cal);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
///
/// @param string const char*
/// @param format const char*
/// @param cal QCalendar*
///
QDateTime* q_datetime_from_string4(const char* string, const char* format, void* cal);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
///
/// @param string const char*
/// @param format const char*
/// @param cal QCalendar*
///
QDateTime* q_datetime_from_string5(const char* string, const char* format, void* cal);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
///
/// @param string const char*
/// @param format const char*
///
QDateTime* q_datetime_from_string6(const char* string, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
///
/// @param string const char*
/// @param format const char*
/// @param baseYear int
/// @param cal QCalendar*
///
QDateTime* q_datetime_from_string7(const char* string, const char* format, int baseYear, void* cal);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
///
/// @param string const char*
/// @param format const char*
///
QDateTime* q_datetime_from_string8(const char* string, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
///
/// @param string const char*
/// @param format const char*
/// @param baseYear int
/// @param cal QCalendar*
///
QDateTime* q_datetime_from_string9(const char* string, const char* format, int baseYear, void* cal);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
///
/// @param string const char*
/// @param format const char*
///
QDateTime* q_datetime_from_string10(const char* string, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
///
/// @param string const char*
/// @param format const char*
/// @param baseYear int
/// @param cal QCalendar*
///
QDateTime* q_datetime_from_string11(const char* string, const char* format, int baseYear, void* cal);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromMSecsSinceEpoch)
///
/// @param msecs int64_t
/// @param spec enum Qt__TimeSpec
///
QDateTime* q_datetime_from_m_secs_since_epoch(int64_t msecs, int32_t spec);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromSecsSinceEpoch)
///
/// @param secs int64_t
/// @param spec enum Qt__TimeSpec
///
QDateTime* q_datetime_from_secs_since_epoch(int64_t secs, int32_t spec);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromMSecsSinceEpoch)
///
/// @param msecs int64_t
/// @param timeZone QTimeZone*
///
QDateTime* q_datetime_from_m_secs_since_epoch2(int64_t msecs, const void* timeZone);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromSecsSinceEpoch)
///
/// @param secs int64_t
/// @param timeZone QTimeZone*
///
QDateTime* q_datetime_from_secs_since_epoch2(int64_t secs, const void* timeZone);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromMSecsSinceEpoch)
///
/// @param msecs int64_t
///
QDateTime* q_datetime_from_m_secs_since_epoch3(int64_t msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromSecsSinceEpoch)
///
/// @param secs int64_t
///
QDateTime* q_datetime_from_secs_since_epoch3(int64_t secs);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#currentMSecsSinceEpoch)
///
int64_t q_datetime_current_m_secs_since_epoch();

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#currentSecsSinceEpoch)
///
int64_t q_datetime_current_secs_since_epoch();

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#operator-2b-eq)
///
/// @param self QDateTime*
/// @param duration int64_t of milliseconds
///
QDateTime* q_datetime_operator_plus_assign(void* self, int64_t duration);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#operator--eq)
///
/// @param self QDateTime*
/// @param duration int64_t of milliseconds
///
QDateTime* q_datetime_operator_minus_assign(void* self, int64_t duration);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#setDate)
///
/// @param self QDateTime*
/// @param date QDate*
/// @param resolve enum QDateTime__TransitionResolution
///
void q_datetime_set_date2(void* self, void* date, int32_t resolve);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#setTime)
///
/// @param self QDateTime*
/// @param time QTime*
/// @param resolve enum QDateTime__TransitionResolution
///
void q_datetime_set_time2(void* self, void* time, int32_t resolve);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#setTimeZone)
///
/// @param self QDateTime*
/// @param toZone QTimeZone*
/// @param resolve enum QDateTime__TransitionResolution
///
void q_datetime_set_time_zone2(void* self, const void* toZone, int32_t resolve);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDateTime*
/// @param format enum Qt__DateFormat
///
const char* q_datetime_to_string1(const void* self, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
///
/// @param string const char*
/// @param format enum Qt__DateFormat
///
QDateTime* q_datetime_from_string22(const char* string, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
///
/// @param string const char*
/// @param format enum Qt__DateFormat
///
QDateTime* q_datetime_from_string23(const char* string, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
///
/// @param string const char*
/// @param format const char*
/// @param baseYear int
///
QDateTime* q_datetime_from_string32(const char* string, const char* format, int baseYear);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
///
/// @param string const char*
/// @param format const char*
/// @param baseYear int
///
QDateTime* q_datetime_from_string33(const char* string, const char* format, int baseYear);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromString)
///
/// @param string const char*
/// @param format const char*
/// @param baseYear int
///
QDateTime* q_datetime_from_string34(const char* string, const char* format, int baseYear);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromMSecsSinceEpoch)
///
/// @param msecs int64_t
/// @param spec enum Qt__TimeSpec
/// @param offsetFromUtc int
///
QDateTime* q_datetime_from_m_secs_since_epoch32(int64_t msecs, int32_t spec, int offsetFromUtc);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#fromSecsSinceEpoch)
///
/// @param secs int64_t
/// @param spec enum Qt__TimeSpec
/// @param offsetFromUtc int
///
QDateTime* q_datetime_from_secs_since_epoch32(int64_t secs, int32_t spec, int offsetFromUtc);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#dtor.QDateTime)
///
/// Delete this object from C++ memory.
///
/// @param self QDateTime*
///
void q_datetime_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#qHash)
///
/// @param key QDateTime*
/// @param seed size_t
///
size_t q_qdatetime_q_hash(const void* key, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#qHash)
///
/// @param key QDate*
/// @param seed size_t
///
size_t q_qdatetime_q_hash2(void* key, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#qHash)
///
/// @param key QTime*
/// @param seed size_t
///
size_t q_qdatetime_q_hash3(void* key, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#public-types)

typedef enum {
    QDATETIME_TRANSITIONRESOLUTION_REJECT = 0,
    QDATETIME_TRANSITIONRESOLUTION_RELATIVETOBEFORE = 1,
    QDATETIME_TRANSITIONRESOLUTION_RELATIVETOAFTER = 2,
    QDATETIME_TRANSITIONRESOLUTION_PREFERBEFORE = 3,
    QDATETIME_TRANSITIONRESOLUTION_PREFERAFTER = 4,
    QDATETIME_TRANSITIONRESOLUTION_PREFERSTANDARD = 5,
    QDATETIME_TRANSITIONRESOLUTION_PREFERDAYLIGHTSAVING = 6,
    QDATETIME_TRANSITIONRESOLUTION_LEGACYBEHAVIOR = 1
} QDateTime__TransitionResolution;

/// [Upstream resources](https://doc.qt.io/qt-6/qdatetime.html#public-types)

typedef enum {
    QDATETIME_YEARRANGE_FIRST = -292275056,
    QDATETIME_YEARRANGE_LAST = 292278994
} QDateTime__YearRange;

#endif
