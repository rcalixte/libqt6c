#include "libqanystringview.hpp"
#include "libqdatetime.hpp"
#include "libqlocale.hpp"
#include <string.h>
#include "libqcalendar.hpp"
#include "libqcalendar.h"

/// https://doc.qt.io/qt-6/qcalendar.html

/// q_calendar_new constructs a new QCalendar object.
///
/// ``` QCalendar* other ```
QCalendar* q_calendar_new(void* other) {
    return QCalendar_new((QCalendar*)other);
}

/// q_calendar_new2 constructs a new QCalendar object and invalidates the source QCalendar object.
///
/// ``` QCalendar* other ```
QCalendar* q_calendar_new2(void* other) {
    return QCalendar_new2((QCalendar*)other);
}

/// q_calendar_new3 constructs a new QCalendar object.
///
///
QCalendar* q_calendar_new3() {
    return QCalendar_new3();
}

/// q_calendar_new4 constructs a new QCalendar object.
///
/// ``` enum QCalendar__System system ```
QCalendar* q_calendar_new4(int64_t system) {
    return QCalendar_new4(system);
}

/// q_calendar_new5 constructs a new QCalendar object.
///
/// ``` const char* name ```
QCalendar* q_calendar_new5(const char* name) {
    libqt_strview name_strview = qstrview(name);

    return QCalendar_new5((QAnyStringView*)&name_strview);
}

/// q_calendar_new6 constructs a new QCalendar object.
///
/// ``` QCalendar__SystemId* id ```
QCalendar* q_calendar_new6(void* id) {
    return QCalendar_new6((QCalendar__SystemId*)id);
}

/// q_calendar_copy_assign shallow copies `other` into `self`.
///
/// ``` QCalendar* self, QCalendar* other ```
void q_calendar_copy_assign(void* self, void* other) {
    QCalendar_CopyAssign((QCalendar*)self, (QCalendar*)other);
}

/// q_calendar_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QCalendar* self, QCalendar* other ```
void q_calendar_move_assign(void* self, void* other) {
    QCalendar_MoveAssign((QCalendar*)self, (QCalendar*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isValid)
///
/// ``` QCalendar* self ```
bool q_calendar_is_valid(void* self) {
    return QCalendar_IsValid((QCalendar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#daysInMonth)
///
/// ``` QCalendar* self, int month ```
int32_t q_calendar_days_in_month(void* self, int month) {
    return QCalendar_DaysInMonth((QCalendar*)self, month);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#daysInYear)
///
/// ``` QCalendar* self, int year ```
int32_t q_calendar_days_in_year(void* self, int year) {
    return QCalendar_DaysInYear((QCalendar*)self, year);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#monthsInYear)
///
/// ``` QCalendar* self, int year ```
int32_t q_calendar_months_in_year(void* self, int year) {
    return QCalendar_MonthsInYear((QCalendar*)self, year);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isDateValid)
///
/// ``` QCalendar* self, int year, int month, int day ```
bool q_calendar_is_date_valid(void* self, int year, int month, int day) {
    return QCalendar_IsDateValid((QCalendar*)self, year, month, day);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isLeapYear)
///
/// ``` QCalendar* self, int year ```
bool q_calendar_is_leap_year(void* self, int year) {
    return QCalendar_IsLeapYear((QCalendar*)self, year);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isGregorian)
///
/// ``` QCalendar* self ```
bool q_calendar_is_gregorian(void* self) {
    return QCalendar_IsGregorian((QCalendar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isLunar)
///
/// ``` QCalendar* self ```
bool q_calendar_is_lunar(void* self) {
    return QCalendar_IsLunar((QCalendar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isLuniSolar)
///
/// ``` QCalendar* self ```
bool q_calendar_is_luni_solar(void* self) {
    return QCalendar_IsLuniSolar((QCalendar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isSolar)
///
/// ``` QCalendar* self ```
bool q_calendar_is_solar(void* self) {
    return QCalendar_IsSolar((QCalendar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#isProleptic)
///
/// ``` QCalendar* self ```
bool q_calendar_is_proleptic(void* self) {
    return QCalendar_IsProleptic((QCalendar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#hasYearZero)
///
/// ``` QCalendar* self ```
bool q_calendar_has_year_zero(void* self) {
    return QCalendar_HasYearZero((QCalendar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#maximumDaysInMonth)
///
/// ``` QCalendar* self ```
int32_t q_calendar_maximum_days_in_month(void* self) {
    return QCalendar_MaximumDaysInMonth((QCalendar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#minimumDaysInMonth)
///
/// ``` QCalendar* self ```
int32_t q_calendar_minimum_days_in_month(void* self) {
    return QCalendar_MinimumDaysInMonth((QCalendar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#maximumMonthsInYear)
///
/// ``` QCalendar* self ```
int32_t q_calendar_maximum_months_in_year(void* self) {
    return QCalendar_MaximumMonthsInYear((QCalendar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#name)
///
/// ``` QCalendar* self ```
const char* q_calendar_name(void* self) {
    libqt_string _str = QCalendar_Name((QCalendar*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#dateFromParts)
///
/// ``` QCalendar* self, int year, int month, int day ```
QDate* q_calendar_date_from_parts(void* self, int year, int month, int day) {
    return QCalendar_DateFromParts((QCalendar*)self, year, month, day);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#dateFromParts)
///
/// ``` QCalendar* self, QCalendar__YearMonthDay* parts ```
QDate* q_calendar_date_from_parts_with_parts(void* self, void* parts) {
    return QCalendar_DateFromPartsWithParts((QCalendar*)self, (QCalendar__YearMonthDay*)parts);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#partsFromDate)
///
/// ``` QCalendar* self, QDate* date ```
QCalendar__YearMonthDay* q_calendar_parts_from_date(void* self, void* date) {
    return QCalendar_PartsFromDate((QCalendar*)self, (QDate*)date);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#dayOfWeek)
///
/// ``` QCalendar* self, QDate* date ```
int32_t q_calendar_day_of_week(void* self, void* date) {
    return QCalendar_DayOfWeek((QCalendar*)self, (QDate*)date);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#monthName)
///
/// ``` QCalendar* self, QLocale* locale, int month ```
const char* q_calendar_month_name(void* self, void* locale, int month) {
    libqt_string _str = QCalendar_MonthName((QCalendar*)self, (QLocale*)locale, month);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#standaloneMonthName)
///
/// ``` QCalendar* self, QLocale* locale, int month ```
const char* q_calendar_standalone_month_name(void* self, void* locale, int month) {
    libqt_string _str = QCalendar_StandaloneMonthName((QCalendar*)self, (QLocale*)locale, month);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#weekDayName)
///
/// ``` QCalendar* self, QLocale* locale, int day ```
const char* q_calendar_week_day_name(void* self, void* locale, int day) {
    libqt_string _str = QCalendar_WeekDayName((QCalendar*)self, (QLocale*)locale, day);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#standaloneWeekDayName)
///
/// ``` QCalendar* self, QLocale* locale, int day ```
const char* q_calendar_standalone_week_day_name(void* self, void* locale, int day) {
    libqt_string _str = QCalendar_StandaloneWeekDayName((QCalendar*)self, (QLocale*)locale, day);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#availableCalendars)
///
///
const char** q_calendar_available_calendars() {
    libqt_list _arr = QCalendar_AvailableCalendars();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#daysInMonth)
///
/// ``` QCalendar* self, int month, int year ```
int32_t q_calendar_days_in_month2(void* self, int month, int year) {
    return QCalendar_DaysInMonth2((QCalendar*)self, month, year);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#monthName)
///
/// ``` QCalendar* self, QLocale* locale, int month, int year ```
const char* q_calendar_month_name3(void* self, void* locale, int month, int year) {
    libqt_string _str = QCalendar_MonthName3((QCalendar*)self, (QLocale*)locale, month, year);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#monthName)
///
/// ``` QCalendar* self, QLocale* locale, int month, int year, enum QLocale__FormatType format ```
const char* q_calendar_month_name4(void* self, void* locale, int month, int year, int64_t format) {
    libqt_string _str = QCalendar_MonthName4((QCalendar*)self, (QLocale*)locale, month, year, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#standaloneMonthName)
///
/// ``` QCalendar* self, QLocale* locale, int month, int year ```
const char* q_calendar_standalone_month_name3(void* self, void* locale, int month, int year) {
    libqt_string _str = QCalendar_StandaloneMonthName3((QCalendar*)self, (QLocale*)locale, month, year);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#standaloneMonthName)
///
/// ``` QCalendar* self, QLocale* locale, int month, int year, enum QLocale__FormatType format ```
const char* q_calendar_standalone_month_name4(void* self, void* locale, int month, int year, int64_t format) {
    libqt_string _str = QCalendar_StandaloneMonthName4((QCalendar*)self, (QLocale*)locale, month, year, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#weekDayName)
///
/// ``` QCalendar* self, QLocale* locale, int day, enum QLocale__FormatType format ```
const char* q_calendar_week_day_name3(void* self, void* locale, int day, int64_t format) {
    libqt_string _str = QCalendar_WeekDayName3((QCalendar*)self, (QLocale*)locale, day, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar.html#standaloneWeekDayName)
///
/// ``` QCalendar* self, QLocale* locale, int day, enum QLocale__FormatType format ```
const char* q_calendar_standalone_week_day_name3(void* self, void* locale, int day, int64_t format) {
    libqt_string _str = QCalendar_StandaloneWeekDayName3((QCalendar*)self, (QLocale*)locale, day, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QCalendar* self ```
void q_calendar_delete(void* self) {
    QCalendar_Delete((QCalendar*)(self));
}

/// https://doc.qt.io/qt-6/qcalendar-yearmonthday.html

/// q_calendar__yearmonthday_new constructs a new QCalendar::YearMonthDay object.
///
/// ``` QCalendar__YearMonthDay* other ```
QCalendar__YearMonthDay* q_calendar__yearmonthday_new(void* other) {
    return QCalendar__YearMonthDay_new((QCalendar__YearMonthDay*)other);
}

/// q_calendar__yearmonthday_new2 constructs a new QCalendar::YearMonthDay object and invalidates the source QCalendar::YearMonthDay object.
///
/// ``` QCalendar__YearMonthDay* other ```
QCalendar__YearMonthDay* q_calendar__yearmonthday_new2(void* other) {
    return QCalendar__YearMonthDay_new2((QCalendar__YearMonthDay*)other);
}

/// q_calendar__yearmonthday_new3 constructs a new QCalendar::YearMonthDay object.
///
///
QCalendar__YearMonthDay* q_calendar__yearmonthday_new3() {
    return QCalendar__YearMonthDay_new3();
}

/// q_calendar__yearmonthday_new4 constructs a new QCalendar::YearMonthDay object.
///
/// ``` int y ```
QCalendar__YearMonthDay* q_calendar__yearmonthday_new4(int y) {
    return QCalendar__YearMonthDay_new4(y);
}

/// q_calendar__yearmonthday_new5 constructs a new QCalendar::YearMonthDay object.
///
/// ``` int y, int m ```
QCalendar__YearMonthDay* q_calendar__yearmonthday_new5(int y, int m) {
    return QCalendar__YearMonthDay_new5(y, m);
}

/// q_calendar__yearmonthday_new6 constructs a new QCalendar::YearMonthDay object.
///
/// ``` int y, int m, int d ```
QCalendar__YearMonthDay* q_calendar__yearmonthday_new6(int y, int m, int d) {
    return QCalendar__YearMonthDay_new6(y, m, d);
}

/// q_calendar__yearmonthday_copy_assign shallow copies `other` into `self`.
///
/// ``` QCalendar__YearMonthDay* self, QCalendar__YearMonthDay* other ```
void q_calendar__yearmonthday_copy_assign(void* self, void* other) {
    QCalendar__YearMonthDay_CopyAssign((QCalendar__YearMonthDay*)self, (QCalendar__YearMonthDay*)other);
}

/// q_calendar__yearmonthday_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QCalendar__YearMonthDay* self, QCalendar__YearMonthDay* other ```
void q_calendar__yearmonthday_move_assign(void* self, void* other) {
    QCalendar__YearMonthDay_MoveAssign((QCalendar__YearMonthDay*)self, (QCalendar__YearMonthDay*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar__yearmonthday.html#isValid)
///
/// ``` QCalendar__YearMonthDay* self ```
bool q_calendar__yearmonthday_is_valid(void* self) {
    return QCalendar__YearMonthDay_IsValid((QCalendar__YearMonthDay*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QCalendar__YearMonthDay* self ```
void q_calendar__yearmonthday_delete(void* self) {
    QCalendar__YearMonthDay_Delete((QCalendar__YearMonthDay*)(self));
}

/// https://doc.qt.io/qt-6/qcalendar-systemid.html

/// q_calendar__systemid_new constructs a new QCalendar::SystemId object.
///
/// ``` QCalendar__SystemId* other ```
QCalendar__SystemId* q_calendar__systemid_new(void* other) {
    return QCalendar__SystemId_new((QCalendar__SystemId*)other);
}

/// q_calendar__systemid_new2 constructs a new QCalendar::SystemId object and invalidates the source QCalendar::SystemId object.
///
/// ``` QCalendar__SystemId* other ```
QCalendar__SystemId* q_calendar__systemid_new2(void* other) {
    return QCalendar__SystemId_new2((QCalendar__SystemId*)other);
}

/// q_calendar__systemid_new3 constructs a new QCalendar::SystemId object.
///
///
QCalendar__SystemId* q_calendar__systemid_new3() {
    return QCalendar__SystemId_new3();
}

/// q_calendar__systemid_copy_assign shallow copies `other` into `self`.
///
/// ``` QCalendar__SystemId* self, QCalendar__SystemId* other ```
void q_calendar__systemid_copy_assign(void* self, void* other) {
    QCalendar__SystemId_CopyAssign((QCalendar__SystemId*)self, (QCalendar__SystemId*)other);
}

/// q_calendar__systemid_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QCalendar__SystemId* self, QCalendar__SystemId* other ```
void q_calendar__systemid_move_assign(void* self, void* other) {
    QCalendar__SystemId_MoveAssign((QCalendar__SystemId*)self, (QCalendar__SystemId*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar__systemid.html#index)
///
/// ``` QCalendar__SystemId* self ```
uint64_t q_calendar__systemid_index(void* self) {
    return QCalendar__SystemId_Index((QCalendar__SystemId*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendar__systemid.html#isValid)
///
/// ``` QCalendar__SystemId* self ```
bool q_calendar__systemid_is_valid(void* self) {
    return QCalendar__SystemId_IsValid((QCalendar__SystemId*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QCalendar__SystemId* self ```
void q_calendar__systemid_delete(void* self) {
    QCalendar__SystemId_Delete((QCalendar__SystemId*)(self));
}