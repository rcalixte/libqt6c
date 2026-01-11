#include "libqanystringview.hpp"
#include "libqdatetime.hpp"
#include "libqlocale.hpp"
#include "libqcalendar.hpp"
#include "libqcalendar.h"

QCalendar* q_calendar_new(void* other) {
    return QCalendar_new((QCalendar*)other);
}

QCalendar* q_calendar_new2(void* other) {
    return QCalendar_new2((QCalendar*)other);
}

QCalendar* q_calendar_new3() {
    return QCalendar_new3();
}

QCalendar* q_calendar_new4(int32_t system) {
    return QCalendar_new4(system);
}

QCalendar* q_calendar_new5(char* name) {
    return QCalendar_new5(name);
}

QCalendar* q_calendar_new6(void* id) {
    return QCalendar_new6((QCalendar__SystemId*)id);
}

void q_calendar_copy_assign(void* self, void* other) {
    QCalendar_CopyAssign((QCalendar*)self, (QCalendar*)other);
}

void q_calendar_move_assign(void* self, void* other) {
    QCalendar_MoveAssign((QCalendar*)self, (QCalendar*)other);
}

bool q_calendar_is_valid(void* self) {
    return QCalendar_IsValid((QCalendar*)self);
}

int32_t q_calendar_days_in_month(void* self, int month) {
    return QCalendar_DaysInMonth((QCalendar*)self, month);
}

int32_t q_calendar_days_in_year(void* self, int year) {
    return QCalendar_DaysInYear((QCalendar*)self, year);
}

int32_t q_calendar_months_in_year(void* self, int year) {
    return QCalendar_MonthsInYear((QCalendar*)self, year);
}

bool q_calendar_is_date_valid(void* self, int year, int month, int day) {
    return QCalendar_IsDateValid((QCalendar*)self, year, month, day);
}

bool q_calendar_is_leap_year(void* self, int year) {
    return QCalendar_IsLeapYear((QCalendar*)self, year);
}

bool q_calendar_is_gregorian(void* self) {
    return QCalendar_IsGregorian((QCalendar*)self);
}

bool q_calendar_is_lunar(void* self) {
    return QCalendar_IsLunar((QCalendar*)self);
}

bool q_calendar_is_luni_solar(void* self) {
    return QCalendar_IsLuniSolar((QCalendar*)self);
}

bool q_calendar_is_solar(void* self) {
    return QCalendar_IsSolar((QCalendar*)self);
}

bool q_calendar_is_proleptic(void* self) {
    return QCalendar_IsProleptic((QCalendar*)self);
}

bool q_calendar_has_year_zero(void* self) {
    return QCalendar_HasYearZero((QCalendar*)self);
}

int32_t q_calendar_maximum_days_in_month(void* self) {
    return QCalendar_MaximumDaysInMonth((QCalendar*)self);
}

int32_t q_calendar_minimum_days_in_month(void* self) {
    return QCalendar_MinimumDaysInMonth((QCalendar*)self);
}

int32_t q_calendar_maximum_months_in_year(void* self) {
    return QCalendar_MaximumMonthsInYear((QCalendar*)self);
}

const char* q_calendar_name(void* self) {
    libqt_string _str = QCalendar_Name((QCalendar*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDate* q_calendar_date_from_parts(void* self, int year, int month, int day) {
    return QCalendar_DateFromParts((QCalendar*)self, year, month, day);
}

QDate* q_calendar_date_from_parts2(void* self, void* parts) {
    return QCalendar_DateFromParts2((QCalendar*)self, (QCalendar__YearMonthDay*)parts);
}

QDate* q_calendar_match_century_to_weekday(void* self, void* parts, int dow) {
    return QCalendar_MatchCenturyToWeekday((QCalendar*)self, (QCalendar__YearMonthDay*)parts, dow);
}

QCalendar__YearMonthDay* q_calendar_parts_from_date(void* self, void* date) {
    return QCalendar_PartsFromDate((QCalendar*)self, (QDate*)date);
}

int32_t q_calendar_day_of_week(void* self, void* date) {
    return QCalendar_DayOfWeek((QCalendar*)self, (QDate*)date);
}

const char* q_calendar_month_name(void* self, void* locale, int month) {
    libqt_string _str = QCalendar_MonthName((QCalendar*)self, (QLocale*)locale, month);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_calendar_standalone_month_name(void* self, void* locale, int month) {
    libqt_string _str = QCalendar_StandaloneMonthName((QCalendar*)self, (QLocale*)locale, month);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_calendar_week_day_name(void* self, void* locale, int day) {
    libqt_string _str = QCalendar_WeekDayName((QCalendar*)self, (QLocale*)locale, day);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_calendar_standalone_week_day_name(void* self, void* locale, int day) {
    libqt_string _str = QCalendar_StandaloneWeekDayName((QCalendar*)self, (QLocale*)locale, day);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_calendar_available_calendars() {
    libqt_list _arr = QCalendar_AvailableCalendars();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_calendar_available_calendars");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

int32_t q_calendar_days_in_month2(void* self, int month, int year) {
    return QCalendar_DaysInMonth2((QCalendar*)self, month, year);
}

const char* q_calendar_month_name3(void* self, void* locale, int month, int year) {
    libqt_string _str = QCalendar_MonthName3((QCalendar*)self, (QLocale*)locale, month, year);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_calendar_month_name4(void* self, void* locale, int month, int year, int32_t format) {
    libqt_string _str = QCalendar_MonthName4((QCalendar*)self, (QLocale*)locale, month, year, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_calendar_standalone_month_name3(void* self, void* locale, int month, int year) {
    libqt_string _str = QCalendar_StandaloneMonthName3((QCalendar*)self, (QLocale*)locale, month, year);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_calendar_standalone_month_name4(void* self, void* locale, int month, int year, int32_t format) {
    libqt_string _str = QCalendar_StandaloneMonthName4((QCalendar*)self, (QLocale*)locale, month, year, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_calendar_week_day_name3(void* self, void* locale, int day, int32_t format) {
    libqt_string _str = QCalendar_WeekDayName3((QCalendar*)self, (QLocale*)locale, day, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_calendar_standalone_week_day_name3(void* self, void* locale, int day, int32_t format) {
    libqt_string _str = QCalendar_StandaloneWeekDayName3((QCalendar*)self, (QLocale*)locale, day, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_calendar_delete(void* self) {
    QCalendar_Delete((QCalendar*)(self));
}

QCalendar__YearMonthDay* q_calendar__yearmonthday_new(void* other) {
    return QCalendar__YearMonthDay_new((QCalendar__YearMonthDay*)other);
}

QCalendar__YearMonthDay* q_calendar__yearmonthday_new2(void* other) {
    return QCalendar__YearMonthDay_new2((QCalendar__YearMonthDay*)other);
}

QCalendar__YearMonthDay* q_calendar__yearmonthday_new3() {
    return QCalendar__YearMonthDay_new3();
}

QCalendar__YearMonthDay* q_calendar__yearmonthday_new4(int y) {
    return QCalendar__YearMonthDay_new4(y);
}

QCalendar__YearMonthDay* q_calendar__yearmonthday_new5(int y, int m) {
    return QCalendar__YearMonthDay_new5(y, m);
}

QCalendar__YearMonthDay* q_calendar__yearmonthday_new6(int y, int m, int d) {
    return QCalendar__YearMonthDay_new6(y, m, d);
}

void q_calendar__yearmonthday_copy_assign(void* self, void* other) {
    QCalendar__YearMonthDay_CopyAssign((QCalendar__YearMonthDay*)self, (QCalendar__YearMonthDay*)other);
}

void q_calendar__yearmonthday_move_assign(void* self, void* other) {
    QCalendar__YearMonthDay_MoveAssign((QCalendar__YearMonthDay*)self, (QCalendar__YearMonthDay*)other);
}

bool q_calendar__yearmonthday_is_valid(void* self) {
    return QCalendar__YearMonthDay_IsValid((QCalendar__YearMonthDay*)self);
}

int32_t q_calendar__yearmonthday_year(void* self) {
    return QCalendar__YearMonthDay_Year((QCalendar__YearMonthDay*)self);
}

void q_calendar__yearmonthday_set_year(void* self, int year) {
    QCalendar__YearMonthDay_SetYear((QCalendar__YearMonthDay*)self, year);
}

int32_t q_calendar__yearmonthday_month(void* self) {
    return QCalendar__YearMonthDay_Month((QCalendar__YearMonthDay*)self);
}

void q_calendar__yearmonthday_set_month(void* self, int month) {
    QCalendar__YearMonthDay_SetMonth((QCalendar__YearMonthDay*)self, month);
}

int32_t q_calendar__yearmonthday_day(void* self) {
    return QCalendar__YearMonthDay_Day((QCalendar__YearMonthDay*)self);
}

void q_calendar__yearmonthday_set_day(void* self, int day) {
    QCalendar__YearMonthDay_SetDay((QCalendar__YearMonthDay*)self, day);
}

void q_calendar__yearmonthday_delete(void* self) {
    QCalendar__YearMonthDay_Delete((QCalendar__YearMonthDay*)(self));
}

QCalendar__SystemId* q_calendar__systemid_new(void* other) {
    return QCalendar__SystemId_new((QCalendar__SystemId*)other);
}

QCalendar__SystemId* q_calendar__systemid_new2(void* other) {
    return QCalendar__SystemId_new2((QCalendar__SystemId*)other);
}

QCalendar__SystemId* q_calendar__systemid_new3() {
    return QCalendar__SystemId_new3();
}

void q_calendar__systemid_copy_assign(void* self, void* other) {
    QCalendar__SystemId_CopyAssign((QCalendar__SystemId*)self, (QCalendar__SystemId*)other);
}

void q_calendar__systemid_move_assign(void* self, void* other) {
    QCalendar__SystemId_MoveAssign((QCalendar__SystemId*)self, (QCalendar__SystemId*)other);
}

uint64_t q_calendar__systemid_index(void* self) {
    return QCalendar__SystemId_Index((QCalendar__SystemId*)self);
}

bool q_calendar__systemid_is_valid(void* self) {
    return QCalendar__SystemId_IsValid((QCalendar__SystemId*)self);
}

void q_calendar__systemid_delete(void* self) {
    QCalendar__SystemId_Delete((QCalendar__SystemId*)(self));
}
