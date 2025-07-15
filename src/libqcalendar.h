#pragma once
#ifndef SRCQT6C_LIBQCALENDAR_H
#define SRCQT6C_LIBQCALENDAR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qcalendar.html

/// q_calendar_new constructs a new QCalendar object.
///
/// ``` QCalendar* other ```
QCalendar* q_calendar_new(void* other);

/// q_calendar_new2 constructs a new QCalendar object and invalidates the source QCalendar object.
///
/// ``` QCalendar* other ```
QCalendar* q_calendar_new2(void* other);

/// q_calendar_new3 constructs a new QCalendar object.
///
///
QCalendar* q_calendar_new3();

/// q_calendar_new4 constructs a new QCalendar object.
///
/// ``` enum QCalendar__System system ```
QCalendar* q_calendar_new4(int64_t system);

/// q_calendar_new5 constructs a new QCalendar object.
///
/// ``` char* name ```
QCalendar* q_calendar_new5(char* name);

/// q_calendar_new6 constructs a new QCalendar object.
///
/// ``` QCalendar__SystemId* id ```
QCalendar* q_calendar_new6(void* id);

/// q_calendar_copy_assign shallow copies `other` into `self`.
///
/// ``` QCalendar* self, QCalendar* other ```
void q_calendar_copy_assign(void* self, void* other);

/// q_calendar_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QCalendar* self, QCalendar* other ```
void q_calendar_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isValid)
///
/// ``` QCalendar* self ```
bool q_calendar_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#daysInMonth)
///
/// ``` QCalendar* self, int month ```
int32_t q_calendar_days_in_month(void* self, int month);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#daysInYear)
///
/// ``` QCalendar* self, int year ```
int32_t q_calendar_days_in_year(void* self, int year);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#monthsInYear)
///
/// ``` QCalendar* self, int year ```
int32_t q_calendar_months_in_year(void* self, int year);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isDateValid)
///
/// ``` QCalendar* self, int year, int month, int day ```
bool q_calendar_is_date_valid(void* self, int year, int month, int day);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isLeapYear)
///
/// ``` QCalendar* self, int year ```
bool q_calendar_is_leap_year(void* self, int year);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isGregorian)
///
/// ``` QCalendar* self ```
bool q_calendar_is_gregorian(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isLunar)
///
/// ``` QCalendar* self ```
bool q_calendar_is_lunar(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isLuniSolar)
///
/// ``` QCalendar* self ```
bool q_calendar_is_luni_solar(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isSolar)
///
/// ``` QCalendar* self ```
bool q_calendar_is_solar(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isProleptic)
///
/// ``` QCalendar* self ```
bool q_calendar_is_proleptic(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#hasYearZero)
///
/// ``` QCalendar* self ```
bool q_calendar_has_year_zero(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#maximumDaysInMonth)
///
/// ``` QCalendar* self ```
int32_t q_calendar_maximum_days_in_month(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#minimumDaysInMonth)
///
/// ``` QCalendar* self ```
int32_t q_calendar_minimum_days_in_month(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#maximumMonthsInYear)
///
/// ``` QCalendar* self ```
int32_t q_calendar_maximum_months_in_year(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#name)
///
/// ``` QCalendar* self ```
const char* q_calendar_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#dateFromParts)
///
/// ``` QCalendar* self, int year, int month, int day ```
QDate* q_calendar_date_from_parts(void* self, int year, int month, int day);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#dateFromParts)
///
/// ``` QCalendar* self, QCalendar__YearMonthDay* parts ```
QDate* q_calendar_date_from_parts2(void* self, void* parts);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#matchCenturyToWeekday)
///
/// ``` QCalendar* self, QCalendar__YearMonthDay* parts, int dow ```
QDate* q_calendar_match_century_to_weekday(void* self, void* parts, int dow);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#partsFromDate)
///
/// ``` QCalendar* self, QDate* date ```
QCalendar__YearMonthDay* q_calendar_parts_from_date(void* self, void* date);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#dayOfWeek)
///
/// ``` QCalendar* self, QDate* date ```
int32_t q_calendar_day_of_week(void* self, void* date);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#monthName)
///
/// ``` QCalendar* self, QLocale* locale, int month ```
const char* q_calendar_month_name(void* self, void* locale, int month);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#standaloneMonthName)
///
/// ``` QCalendar* self, QLocale* locale, int month ```
const char* q_calendar_standalone_month_name(void* self, void* locale, int month);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#weekDayName)
///
/// ``` QCalendar* self, QLocale* locale, int day ```
const char* q_calendar_week_day_name(void* self, void* locale, int day);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#standaloneWeekDayName)
///
/// ``` QCalendar* self, QLocale* locale, int day ```
const char* q_calendar_standalone_week_day_name(void* self, void* locale, int day);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#availableCalendars)
///
///
const char** q_calendar_available_calendars();

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#daysInMonth)
///
/// ``` QCalendar* self, int month, int year ```
int32_t q_calendar_days_in_month2(void* self, int month, int year);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#monthName)
///
/// ``` QCalendar* self, QLocale* locale, int month, int year ```
const char* q_calendar_month_name3(void* self, void* locale, int month, int year);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#monthName)
///
/// ``` QCalendar* self, QLocale* locale, int month, int year, enum QLocale__FormatType format ```
const char* q_calendar_month_name4(void* self, void* locale, int month, int year, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#standaloneMonthName)
///
/// ``` QCalendar* self, QLocale* locale, int month, int year ```
const char* q_calendar_standalone_month_name3(void* self, void* locale, int month, int year);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#standaloneMonthName)
///
/// ``` QCalendar* self, QLocale* locale, int month, int year, enum QLocale__FormatType format ```
const char* q_calendar_standalone_month_name4(void* self, void* locale, int month, int year, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#weekDayName)
///
/// ``` QCalendar* self, QLocale* locale, int day, enum QLocale__FormatType format ```
const char* q_calendar_week_day_name3(void* self, void* locale, int day, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#standaloneWeekDayName)
///
/// ``` QCalendar* self, QLocale* locale, int day, enum QLocale__FormatType format ```
const char* q_calendar_standalone_week_day_name3(void* self, void* locale, int day, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#dtor.QCalendar)
///
/// Delete this object from C++ memory.
///
/// ``` QCalendar* self ```
void q_calendar_delete(void* self);

/// https://doc.qt.io/qt-6/qcalendar-yearmonthday.html

/// q_calendar__yearmonthday_new constructs a new QCalendar::YearMonthDay object.
///
/// ``` QCalendar__YearMonthDay* other ```
QCalendar__YearMonthDay* q_calendar__yearmonthday_new(void* other);

/// q_calendar__yearmonthday_new2 constructs a new QCalendar::YearMonthDay object and invalidates the source QCalendar::YearMonthDay object.
///
/// ``` QCalendar__YearMonthDay* other ```
QCalendar__YearMonthDay* q_calendar__yearmonthday_new2(void* other);

/// q_calendar__yearmonthday_new3 constructs a new QCalendar::YearMonthDay object.
///
///
QCalendar__YearMonthDay* q_calendar__yearmonthday_new3();

/// q_calendar__yearmonthday_new4 constructs a new QCalendar::YearMonthDay object.
///
/// ``` int y ```
QCalendar__YearMonthDay* q_calendar__yearmonthday_new4(int y);

/// q_calendar__yearmonthday_new5 constructs a new QCalendar::YearMonthDay object.
///
/// ``` int y, int m ```
QCalendar__YearMonthDay* q_calendar__yearmonthday_new5(int y, int m);

/// q_calendar__yearmonthday_new6 constructs a new QCalendar::YearMonthDay object.
///
/// ``` int y, int m, int d ```
QCalendar__YearMonthDay* q_calendar__yearmonthday_new6(int y, int m, int d);

/// q_calendar__yearmonthday_copy_assign shallow copies `other` into `self`.
///
/// ``` QCalendar__YearMonthDay* self, QCalendar__YearMonthDay* other ```
void q_calendar__yearmonthday_copy_assign(void* self, void* other);

/// q_calendar__yearmonthday_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QCalendar__YearMonthDay* self, QCalendar__YearMonthDay* other ```
void q_calendar__yearmonthday_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar__yearmonthday.html#isValid)
///
/// ``` QCalendar__YearMonthDay* self ```
bool q_calendar__yearmonthday_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar::yearmonthday.html#dtor.QCalendar::YearMonthDay)
///
/// Delete this object from C++ memory.
///
/// ``` QCalendar__YearMonthDay* self ```
void q_calendar__yearmonthday_delete(void* self);

/// https://doc.qt.io/qt-6/qcalendar-systemid.html

/// q_calendar__systemid_new constructs a new QCalendar::SystemId object.
///
/// ``` QCalendar__SystemId* other ```
QCalendar__SystemId* q_calendar__systemid_new(void* other);

/// q_calendar__systemid_new2 constructs a new QCalendar::SystemId object and invalidates the source QCalendar::SystemId object.
///
/// ``` QCalendar__SystemId* other ```
QCalendar__SystemId* q_calendar__systemid_new2(void* other);

/// q_calendar__systemid_new3 constructs a new QCalendar::SystemId object.
///
///
QCalendar__SystemId* q_calendar__systemid_new3();

/// q_calendar__systemid_copy_assign shallow copies `other` into `self`.
///
/// ``` QCalendar__SystemId* self, QCalendar__SystemId* other ```
void q_calendar__systemid_copy_assign(void* self, void* other);

/// q_calendar__systemid_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QCalendar__SystemId* self, QCalendar__SystemId* other ```
void q_calendar__systemid_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar__systemid.html#index)
///
/// ``` QCalendar__SystemId* self ```
uint64_t q_calendar__systemid_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar__systemid.html#isValid)
///
/// ``` QCalendar__SystemId* self ```
bool q_calendar__systemid_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar::systemid.html#dtor.QCalendar::SystemId)
///
/// Delete this object from C++ memory.
///
/// ``` QCalendar__SystemId* self ```
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
