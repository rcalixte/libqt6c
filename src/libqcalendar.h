#pragma once
#ifndef SRCQT6C_LIBQCALENDAR_H
#define SRCQT6C_LIBQCALENDAR_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qcalendar.html

/// q_calendar_new constructs a new QCalendar object.
///
/// @param other QCalendar*
QCalendar* q_calendar_new(void* other);

/// q_calendar_new2 constructs a new QCalendar object and invalidates the source QCalendar object.
///
/// @param other QCalendar*
QCalendar* q_calendar_new2(void* other);

/// q_calendar_new3 constructs a new QCalendar object.
///
QCalendar* q_calendar_new3();

/// q_calendar_new4 constructs a new QCalendar object.
///
/// @param system enum QCalendar__System
QCalendar* q_calendar_new4(int32_t system);

/// q_calendar_new5 constructs a new QCalendar object.
///
/// @param name char*
QCalendar* q_calendar_new5(char* name);

/// q_calendar_new6 constructs a new QCalendar object.
///
/// @param id QCalendar__SystemId*
QCalendar* q_calendar_new6(void* id);

/// q_calendar_copy_assign shallow copies `other` into `self`.
///
/// @param self QCalendar*
/// @param other QCalendar*
void q_calendar_copy_assign(void* self, void* other);

/// q_calendar_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QCalendar*
/// @param other QCalendar*
void q_calendar_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isValid)
///
/// @param self QCalendar*
bool q_calendar_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#daysInMonth)
///
/// @param self QCalendar*
/// @param month int
int32_t q_calendar_days_in_month(void* self, int month);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#daysInYear)
///
/// @param self QCalendar*
/// @param year int
int32_t q_calendar_days_in_year(void* self, int year);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#monthsInYear)
///
/// @param self QCalendar*
/// @param year int
int32_t q_calendar_months_in_year(void* self, int year);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isDateValid)
///
/// @param self QCalendar*
/// @param year int
/// @param month int
/// @param day int
bool q_calendar_is_date_valid(void* self, int year, int month, int day);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isLeapYear)
///
/// @param self QCalendar*
/// @param year int
bool q_calendar_is_leap_year(void* self, int year);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isGregorian)
///
/// @param self QCalendar*
bool q_calendar_is_gregorian(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isLunar)
///
/// @param self QCalendar*
bool q_calendar_is_lunar(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isLuniSolar)
///
/// @param self QCalendar*
bool q_calendar_is_luni_solar(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isSolar)
///
/// @param self QCalendar*
bool q_calendar_is_solar(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isProleptic)
///
/// @param self QCalendar*
bool q_calendar_is_proleptic(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#hasYearZero)
///
/// @param self QCalendar*
bool q_calendar_has_year_zero(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#maximumDaysInMonth)
///
/// @param self QCalendar*
int32_t q_calendar_maximum_days_in_month(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#minimumDaysInMonth)
///
/// @param self QCalendar*
int32_t q_calendar_minimum_days_in_month(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#maximumMonthsInYear)
///
/// @param self QCalendar*
int32_t q_calendar_maximum_months_in_year(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCalendar*
const char* q_calendar_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#dateFromParts)
///
/// @param self QCalendar*
/// @param year int
/// @param month int
/// @param day int
QDate* q_calendar_date_from_parts(void* self, int year, int month, int day);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#dateFromParts)
///
/// @param self QCalendar*
/// @param parts QCalendar__YearMonthDay*
QDate* q_calendar_date_from_parts2(void* self, void* parts);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#matchCenturyToWeekday)
///
/// @param self QCalendar*
/// @param parts QCalendar__YearMonthDay*
/// @param dow int
QDate* q_calendar_match_century_to_weekday(void* self, void* parts, int dow);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#partsFromDate)
///
/// @param self QCalendar*
/// @param date QDate*
QCalendar__YearMonthDay* q_calendar_parts_from_date(void* self, void* date);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#dayOfWeek)
///
/// @param self QCalendar*
/// @param date QDate*
int32_t q_calendar_day_of_week(void* self, void* date);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#monthName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCalendar*
/// @param locale QLocale*
/// @param month int
const char* q_calendar_month_name(void* self, void* locale, int month);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#standaloneMonthName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCalendar*
/// @param locale QLocale*
/// @param month int
const char* q_calendar_standalone_month_name(void* self, void* locale, int month);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#weekDayName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCalendar*
/// @param locale QLocale*
/// @param day int
const char* q_calendar_week_day_name(void* self, void* locale, int day);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#standaloneWeekDayName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCalendar*
/// @param locale QLocale*
/// @param day int
const char* q_calendar_standalone_week_day_name(void* self, void* locale, int day);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#availableCalendars)
///
/// Caller is responsible for freeing the returned memory
///
const char** q_calendar_available_calendars();

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#daysInMonth)
///
/// @param self QCalendar*
/// @param month int
/// @param year int
int32_t q_calendar_days_in_month2(void* self, int month, int year);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#monthName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCalendar*
/// @param locale QLocale*
/// @param month int
/// @param year int
const char* q_calendar_month_name3(void* self, void* locale, int month, int year);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#monthName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCalendar*
/// @param locale QLocale*
/// @param month int
/// @param year int
/// @param format enum QLocale__FormatType
const char* q_calendar_month_name4(void* self, void* locale, int month, int year, int32_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#standaloneMonthName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCalendar*
/// @param locale QLocale*
/// @param month int
/// @param year int
const char* q_calendar_standalone_month_name3(void* self, void* locale, int month, int year);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#standaloneMonthName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCalendar*
/// @param locale QLocale*
/// @param month int
/// @param year int
/// @param format enum QLocale__FormatType
const char* q_calendar_standalone_month_name4(void* self, void* locale, int month, int year, int32_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#weekDayName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCalendar*
/// @param locale QLocale*
/// @param day int
/// @param format enum QLocale__FormatType
const char* q_calendar_week_day_name3(void* self, void* locale, int day, int32_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#standaloneWeekDayName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCalendar*
/// @param locale QLocale*
/// @param day int
/// @param format enum QLocale__FormatType
const char* q_calendar_standalone_week_day_name3(void* self, void* locale, int day, int32_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#dtor.QCalendar)
///
/// Delete this object from C++ memory.
///
/// @param self QCalendar*
void q_calendar_delete(void* self);

/// https://doc.qt.io/qt-6/qcalendar-yearmonthday.html

/// q_calendar__yearmonthday_new constructs a new QCalendar::YearMonthDay object.
///
/// @param other QCalendar__YearMonthDay*
QCalendar__YearMonthDay* q_calendar__yearmonthday_new(void* other);

/// q_calendar__yearmonthday_new2 constructs a new QCalendar::YearMonthDay object and invalidates the source QCalendar::YearMonthDay object.
///
/// @param other QCalendar__YearMonthDay*
QCalendar__YearMonthDay* q_calendar__yearmonthday_new2(void* other);

/// q_calendar__yearmonthday_new3 constructs a new QCalendar::YearMonthDay object.
///
QCalendar__YearMonthDay* q_calendar__yearmonthday_new3();

/// q_calendar__yearmonthday_new4 constructs a new QCalendar::YearMonthDay object.
///
/// @param y int
QCalendar__YearMonthDay* q_calendar__yearmonthday_new4(int y);

/// q_calendar__yearmonthday_new5 constructs a new QCalendar::YearMonthDay object.
///
/// @param y int
/// @param m int
QCalendar__YearMonthDay* q_calendar__yearmonthday_new5(int y, int m);

/// q_calendar__yearmonthday_new6 constructs a new QCalendar::YearMonthDay object.
///
/// @param y int
/// @param m int
/// @param d int
QCalendar__YearMonthDay* q_calendar__yearmonthday_new6(int y, int m, int d);

/// q_calendar__yearmonthday_copy_assign shallow copies `other` into `self`.
///
/// @param self QCalendar__YearMonthDay*
/// @param other QCalendar__YearMonthDay*
void q_calendar__yearmonthday_copy_assign(void* self, void* other);

/// q_calendar__yearmonthday_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QCalendar__YearMonthDay*
/// @param other QCalendar__YearMonthDay*
void q_calendar__yearmonthday_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar-yearmonthday.html#isValid)
///
/// @param self QCalendar__YearMonthDay*
bool q_calendar__yearmonthday_is_valid(void* self);

/// Delete this object from C++ memory.
///
/// @param self QCalendar__YearMonthDay*
void q_calendar__yearmonthday_delete(void* self);

/// https://doc.qt.io/qt-6/qcalendar-systemid.html

/// q_calendar__systemid_new constructs a new QCalendar::SystemId object.
///
/// @param other QCalendar__SystemId*
QCalendar__SystemId* q_calendar__systemid_new(void* other);

/// q_calendar__systemid_new2 constructs a new QCalendar::SystemId object and invalidates the source QCalendar::SystemId object.
///
/// @param other QCalendar__SystemId*
QCalendar__SystemId* q_calendar__systemid_new2(void* other);

/// q_calendar__systemid_new3 constructs a new QCalendar::SystemId object.
///
QCalendar__SystemId* q_calendar__systemid_new3();

/// q_calendar__systemid_copy_assign shallow copies `other` into `self`.
///
/// @param self QCalendar__SystemId*
/// @param other QCalendar__SystemId*
void q_calendar__systemid_copy_assign(void* self, void* other);

/// q_calendar__systemid_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QCalendar__SystemId*
/// @param other QCalendar__SystemId*
void q_calendar__systemid_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar-systemid.html#index)
///
/// @param self QCalendar__SystemId*
uint64_t q_calendar__systemid_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar-systemid.html#isValid)
///
/// @param self QCalendar__SystemId*
bool q_calendar__systemid_is_valid(void* self);

/// Delete this object from C++ memory.
///
/// @param self QCalendar__SystemId*
void q_calendar__systemid_delete(void* self);

/// https://doc.qt.io/qt-6/qcalendar.html#types

typedef enum {
    QCALENDAR__UNSPECIFIED = -2147483648
} QCalendar__;

typedef enum {
    QCALENDAR_SYSTEM_GREGORIAN = 0,
    QCALENDAR_SYSTEM_JULIAN = 8,
    QCALENDAR_SYSTEM_MILANKOVIC = 9,
    QCALENDAR_SYSTEM_JALALI = 10,
    QCALENDAR_SYSTEM_ISLAMICCIVIL = 11,
    QCALENDAR_SYSTEM_LAST = 11,
    QCALENDAR_SYSTEM_USER = -1
} QCalendar__System;

#endif
