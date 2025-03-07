#pragma once
#ifndef SRCQT6C_LIBQCALENDAR_H
#define SRCQT6C_LIBQCALENDAR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqdatetime.h"
#include "libqlocale.h"
#include <string.h>

QCalendar* q_calendar_new(void* other);
QCalendar* q_calendar_new2(void* other);
QCalendar* q_calendar_new3();
QCalendar* q_calendar_new4(int64_t system);
QCalendar* q_calendar_new5(const char* name);
QCalendar* q_calendar_new6(void* id);
void q_calendar_copy_assign(void* self, void* other);
void q_calendar_move_assign(void* self, void* other);
bool q_calendar_is_valid(void* self);
int32_t q_calendar_days_in_month(void* self, int month);
int32_t q_calendar_days_in_year(void* self, int year);
int32_t q_calendar_months_in_year(void* self, int year);
bool q_calendar_is_date_valid(void* self, int year, int month, int day);
bool q_calendar_is_leap_year(void* self, int year);
bool q_calendar_is_gregorian(void* self);
bool q_calendar_is_lunar(void* self);
bool q_calendar_is_luni_solar(void* self);
bool q_calendar_is_solar(void* self);
bool q_calendar_is_proleptic(void* self);
bool q_calendar_has_year_zero(void* self);
int32_t q_calendar_maximum_days_in_month(void* self);
int32_t q_calendar_minimum_days_in_month(void* self);
int32_t q_calendar_maximum_months_in_year(void* self);
const char* q_calendar_name(void* self);
QDate* q_calendar_date_from_parts(void* self, int year, int month, int day);
QDate* q_calendar_date_from_parts_with_parts(void* self, void* parts);
QCalendar__YearMonthDay* q_calendar_parts_from_date(void* self, void* date);
int32_t q_calendar_day_of_week(void* self, void* date);
const char* q_calendar_month_name(void* self, void* locale, int month);
const char* q_calendar_standalone_month_name(void* self, void* locale, int month);
const char* q_calendar_week_day_name(void* self, void* locale, int day);
const char* q_calendar_standalone_week_day_name(void* self, void* locale, int day);
const char** q_calendar_available_calendars();
int32_t q_calendar_days_in_month2(void* self, int month, int year);
const char* q_calendar_month_name3(void* self, void* locale, int month, int year);
const char* q_calendar_month_name4(void* self, void* locale, int month, int year, int64_t format);
const char* q_calendar_standalone_month_name3(void* self, void* locale, int month, int year);
const char* q_calendar_standalone_month_name4(void* self, void* locale, int month, int year, int64_t format);
const char* q_calendar_week_day_name3(void* self, void* locale, int day, int64_t format);
const char* q_calendar_standalone_week_day_name3(void* self, void* locale, int day, int64_t format);
void q_calendar_delete(void* self);

QCalendar__YearMonthDay* q_calendar__yearmonthday_new(void* other);
QCalendar__YearMonthDay* q_calendar__yearmonthday_new2(void* other);
QCalendar__YearMonthDay* q_calendar__yearmonthday_new3();
QCalendar__YearMonthDay* q_calendar__yearmonthday_new4(int y);
QCalendar__YearMonthDay* q_calendar__yearmonthday_new5(int y, int m);
QCalendar__YearMonthDay* q_calendar__yearmonthday_new6(int y, int m, int d);
void q_calendar__yearmonthday_copy_assign(void* self, void* other);
void q_calendar__yearmonthday_move_assign(void* self, void* other);
bool q_calendar__yearmonthday_is_valid(void* self);
void q_calendar__yearmonthday_delete(void* self);

QCalendar__SystemId* q_calendar__systemid_new(void* other);
QCalendar__SystemId* q_calendar__systemid_new2(void* other);
QCalendar__SystemId* q_calendar__systemid_new3();
void q_calendar__systemid_copy_assign(void* self, void* other);
void q_calendar__systemid_move_assign(void* self, void* other);
uint64_t q_calendar__systemid_index(void* self);
bool q_calendar__systemid_is_valid(void* self);
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
