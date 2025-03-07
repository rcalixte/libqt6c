#include "libqcalendar.hpp"
#include <string.h>
#include "libqtimezone.hpp"
#include "libqdatetime.hpp"
#include "libqdatetime.h"

/// https://doc.qt.io/qt-6/qdate.html

/// q_date_new constructs a new QDate object.
///
/// ``` QDate* other ```
QDate* q_date_new(void* other) {
    return QDate_new((QDate*)other);
}

/// q_date_new2 constructs a new QDate object and invalidates the source QDate object.
///
/// ``` QDate* other ```
QDate* q_date_new2(void* other) {
    return QDate_new2((QDate*)other);
}

/// q_date_new3 constructs a new QDate object.
///
///
QDate* q_date_new3() {
    return QDate_new3();
}

/// q_date_new4 constructs a new QDate object.
///
/// ``` int y, int m, int d ```
QDate* q_date_new4(int y, int m, int d) {
    return QDate_new4(y, m, d);
}

/// q_date_new5 constructs a new QDate object.
///
/// ``` int y, int m, int d, QCalendar* cal ```
QDate* q_date_new5(int y, int m, int d, void* cal) {
    return QDate_new5(y, m, d, (QCalendar*)cal);
}

/// q_date_new6 constructs a new QDate object.
///
/// ``` QDate* param1 ```
QDate* q_date_new6(void* param1) {
    return QDate_new6((QDate*)param1);
}

/// q_date_copy_assign shallow copies `other` into `self`.
///
/// ``` QDate* self, QDate* other ```
void q_date_copy_assign(void* self, void* other) {
    QDate_CopyAssign((QDate*)self, (QDate*)other);
}

/// q_date_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QDate* self, QDate* other ```
void q_date_move_assign(void* self, void* other) {
    QDate_MoveAssign((QDate*)self, (QDate*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#isNull)
///
/// ``` QDate* self ```
bool q_date_is_null(void* self) {
    return QDate_IsNull((QDate*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#isValid)
///
/// ``` QDate* self ```
bool q_date_is_valid(void* self) {
    return QDate_IsValid((QDate*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#year)
///
/// ``` QDate* self ```
int32_t q_date_year(void* self) {
    return QDate_Year((QDate*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#month)
///
/// ``` QDate* self ```
int32_t q_date_month(void* self) {
    return QDate_Month((QDate*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#day)
///
/// ``` QDate* self ```
int32_t q_date_day(void* self) {
    return QDate_Day((QDate*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#dayOfWeek)
///
/// ``` QDate* self ```
int32_t q_date_day_of_week(void* self) {
    return QDate_DayOfWeek((QDate*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#dayOfYear)
///
/// ``` QDate* self ```
int32_t q_date_day_of_year(void* self) {
    return QDate_DayOfYear((QDate*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#daysInMonth)
///
/// ``` QDate* self ```
int32_t q_date_days_in_month(void* self) {
    return QDate_DaysInMonth((QDate*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#daysInYear)
///
/// ``` QDate* self ```
int32_t q_date_days_in_year(void* self) {
    return QDate_DaysInYear((QDate*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#weekNumber)
///
/// ``` QDate* self ```
int32_t q_date_week_number(void* self) {
    return QDate_WeekNumber((QDate*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#year)
///
/// ``` QDate* self, QCalendar* cal ```
int32_t q_date_year_with_cal(void* self, void* cal) {
    return QDate_YearWithCal((QDate*)self, (QCalendar*)cal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#month)
///
/// ``` QDate* self, QCalendar* cal ```
int32_t q_date_month_with_cal(void* self, void* cal) {
    return QDate_MonthWithCal((QDate*)self, (QCalendar*)cal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#day)
///
/// ``` QDate* self, QCalendar* cal ```
int32_t q_date_day_with_cal(void* self, void* cal) {
    return QDate_DayWithCal((QDate*)self, (QCalendar*)cal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#dayOfWeek)
///
/// ``` QDate* self, QCalendar* cal ```
int32_t q_date_day_of_week_with_cal(void* self, void* cal) {
    return QDate_DayOfWeekWithCal((QDate*)self, (QCalendar*)cal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#dayOfYear)
///
/// ``` QDate* self, QCalendar* cal ```
int32_t q_date_day_of_year_with_cal(void* self, void* cal) {
    return QDate_DayOfYearWithCal((QDate*)self, (QCalendar*)cal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#daysInMonth)
///
/// ``` QDate* self, QCalendar* cal ```
int32_t q_date_days_in_month_with_cal(void* self, void* cal) {
    return QDate_DaysInMonthWithCal((QDate*)self, (QCalendar*)cal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#daysInYear)
///
/// ``` QDate* self, QCalendar* cal ```
int32_t q_date_days_in_year_with_cal(void* self, void* cal) {
    return QDate_DaysInYearWithCal((QDate*)self, (QCalendar*)cal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#startOfDay)
///
/// ``` QDate* self ```
QDateTime* q_date_start_of_day(void* self) {
    return QDate_StartOfDay((QDate*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#endOfDay)
///
/// ``` QDate* self ```
QDateTime* q_date_end_of_day(void* self) {
    return QDate_EndOfDay((QDate*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#startOfDay)
///
/// ``` QDate* self, QTimeZone* zone ```
QDateTime* q_date_start_of_day_with_zone(void* self, void* zone) {
    return QDate_StartOfDayWithZone((QDate*)self, (QTimeZone*)zone);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#endOfDay)
///
/// ``` QDate* self, QTimeZone* zone ```
QDateTime* q_date_end_of_day_with_zone(void* self, void* zone) {
    return QDate_EndOfDayWithZone((QDate*)self, (QTimeZone*)zone);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#toString)
///
/// ``` QDate* self ```
const char* q_date_to_string(void* self) {
    libqt_string _str = QDate_ToString((QDate*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#toString)
///
/// ``` QDate* self, const char* format ```
const char* q_date_to_string_with_format(void* self, const char* format) {
    libqt_string _str = QDate_ToStringWithFormat((QDate*)self, qstring(format));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#setDate)
///
/// ``` QDate* self, int year, int month, int day ```
bool q_date_set_date(void* self, int year, int month, int day) {
    return QDate_SetDate((QDate*)self, year, month, day);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#setDate)
///
/// ``` QDate* self, int year, int month, int day, QCalendar* cal ```
bool q_date_set_date2(void* self, int year, int month, int day, void* cal) {
    return QDate_SetDate2((QDate*)self, year, month, day, (QCalendar*)cal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#getDate)
///
/// ``` QDate* self, int* year, int* month, int* day ```
void q_date_get_date(void* self, int* year, int* month, int* day) {
    QDate_GetDate((QDate*)self, year, month, day);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#addDays)
///
/// ``` QDate* self, long long days ```
QDate* q_date_add_days(void* self, long long days) {
    return QDate_AddDays((QDate*)self, days);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#addMonths)
///
/// ``` QDate* self, int months ```
QDate* q_date_add_months(void* self, int months) {
    return QDate_AddMonths((QDate*)self, months);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#addYears)
///
/// ``` QDate* self, int years ```
QDate* q_date_add_years(void* self, int years) {
    return QDate_AddYears((QDate*)self, years);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#addMonths)
///
/// ``` QDate* self, int months, QCalendar* cal ```
QDate* q_date_add_months2(void* self, int months, void* cal) {
    return QDate_AddMonths2((QDate*)self, months, (QCalendar*)cal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#addYears)
///
/// ``` QDate* self, int years, QCalendar* cal ```
QDate* q_date_add_years2(void* self, int years, void* cal) {
    return QDate_AddYears2((QDate*)self, years, (QCalendar*)cal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#daysTo)
///
/// ``` QDate* self, QDate* d ```
long long q_date_days_to(void* self, void* d) {
    return QDate_DaysTo((QDate*)self, (QDate*)d);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#currentDate)
///
///
QDate* q_date_current_date() {
    return QDate_CurrentDate();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#fromString)
///
/// ``` const char* stringVal ```
QDate* q_date_from_string_with_string_val(const char* stringVal) {
    return QDate_FromStringWithStringVal(qstring(stringVal));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#fromString)
///
/// ``` const char* stringVal, const char* format ```
QDate* q_date_from_string4(const char* stringVal, const char* format) {
    return QDate_FromString4(qstring(stringVal), qstring(format));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#isValid)
///
/// ``` int y, int m, int d ```
bool q_date_is_valid2(int y, int m, int d) {
    return QDate_IsValid2(y, m, d);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#isLeapYear)
///
/// ``` int year ```
bool q_date_is_leap_year(int year) {
    return QDate_IsLeapYear(year);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#fromJulianDay)
///
/// ``` long long jd_ ```
QDate* q_date_from_julian_day(long long jd_) {
    return QDate_FromJulianDay(jd_);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#toJulianDay)
///
/// ``` QDate* self ```
long long q_date_to_julian_day(void* self) {
    return QDate_ToJulianDay((QDate*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#weekNumber)
///
/// ``` QDate* self, int* yearNum ```
int32_t q_date_week_number1(void* self, int* yearNum) {
    return QDate_WeekNumber1((QDate*)self, yearNum);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#startOfDay)
///
/// ``` QDate* self, enum Qt__TimeSpec spec ```
QDateTime* q_date_start_of_day1(void* self, int64_t spec) {
    return QDate_StartOfDay1((QDate*)self, spec);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#startOfDay)
///
/// ``` QDate* self, enum Qt__TimeSpec spec, int offsetSeconds ```
QDateTime* q_date_start_of_day2(void* self, int64_t spec, int offsetSeconds) {
    return QDate_StartOfDay2((QDate*)self, spec, offsetSeconds);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#endOfDay)
///
/// ``` QDate* self, enum Qt__TimeSpec spec ```
QDateTime* q_date_end_of_day1(void* self, int64_t spec) {
    return QDate_EndOfDay1((QDate*)self, spec);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#endOfDay)
///
/// ``` QDate* self, enum Qt__TimeSpec spec, int offsetSeconds ```
QDateTime* q_date_end_of_day2(void* self, int64_t spec, int offsetSeconds) {
    return QDate_EndOfDay2((QDate*)self, spec, offsetSeconds);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#toString)
///
/// ``` QDate* self, enum Qt__DateFormat format ```
const char* q_date_to_string1(void* self, int64_t format) {
    libqt_string _str = QDate_ToString1((QDate*)self, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#toString)
///
/// ``` QDate* self, const char* format, QCalendar* cal ```
const char* q_date_to_string22(void* self, const char* format, void* cal) {
    libqt_string _str = QDate_ToString22((QDate*)self, qstring(format), (QCalendar*)cal);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#fromString)
///
/// ``` const char* stringVal, enum Qt__DateFormat format ```
QDate* q_date_from_string23(const char* stringVal, int64_t format) {
    return QDate_FromString23(qstring(stringVal), format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdate.html#fromString)
///
/// ``` const char* stringVal, const char* format, QCalendar* cal ```
QDate* q_date_from_string34(const char* stringVal, const char* format, void* cal) {
    return QDate_FromString34(qstring(stringVal), qstring(format), (QCalendar*)cal);
}

/// Delete this object from C++ memory.
///
/// ``` QDate* self ```
void q_date_delete(void* self) {
    QDate_Delete((QDate*)(self));
}

/// https://doc.qt.io/qt-6/qtime.html

/// q_time_new constructs a new QTime object.
///
/// ``` QTime* other ```
QTime* q_time_new(void* other) {
    return QTime_new((QTime*)other);
}

/// q_time_new2 constructs a new QTime object and invalidates the source QTime object.
///
/// ``` QTime* other ```
QTime* q_time_new2(void* other) {
    return QTime_new2((QTime*)other);
}

/// q_time_new3 constructs a new QTime object.
///
///
QTime* q_time_new3() {
    return QTime_new3();
}

/// q_time_new4 constructs a new QTime object.
///
/// ``` int h, int m ```
QTime* q_time_new4(int h, int m) {
    return QTime_new4(h, m);
}

/// q_time_new5 constructs a new QTime object.
///
/// ``` QTime* param1 ```
QTime* q_time_new5(void* param1) {
    return QTime_new5((QTime*)param1);
}

/// q_time_new6 constructs a new QTime object.
///
/// ``` int h, int m, int s ```
QTime* q_time_new6(int h, int m, int s) {
    return QTime_new6(h, m, s);
}

/// q_time_new7 constructs a new QTime object.
///
/// ``` int h, int m, int s, int ms ```
QTime* q_time_new7(int h, int m, int s, int ms) {
    return QTime_new7(h, m, s, ms);
}

/// q_time_copy_assign shallow copies `other` into `self`.
///
/// ``` QTime* self, QTime* other ```
void q_time_copy_assign(void* self, void* other) {
    QTime_CopyAssign((QTime*)self, (QTime*)other);
}

/// q_time_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QTime* self, QTime* other ```
void q_time_move_assign(void* self, void* other) {
    QTime_MoveAssign((QTime*)self, (QTime*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#isNull)
///
/// ``` QTime* self ```
bool q_time_is_null(void* self) {
    return QTime_IsNull((QTime*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#isValid)
///
/// ``` QTime* self ```
bool q_time_is_valid(void* self) {
    return QTime_IsValid((QTime*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#hour)
///
/// ``` QTime* self ```
int32_t q_time_hour(void* self) {
    return QTime_Hour((QTime*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#minute)
///
/// ``` QTime* self ```
int32_t q_time_minute(void* self) {
    return QTime_Minute((QTime*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#second)
///
/// ``` QTime* self ```
int32_t q_time_second(void* self) {
    return QTime_Second((QTime*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#msec)
///
/// ``` QTime* self ```
int32_t q_time_msec(void* self) {
    return QTime_Msec((QTime*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#toString)
///
/// ``` QTime* self ```
const char* q_time_to_string(void* self) {
    libqt_string _str = QTime_ToString((QTime*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#toString)
///
/// ``` QTime* self, const char* format ```
const char* q_time_to_string_with_format(void* self, const char* format) {
    libqt_string _str = QTime_ToStringWithFormat((QTime*)self, qstring(format));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#setHMS)
///
/// ``` QTime* self, int h, int m, int s ```
bool q_time_set_h_m_s(void* self, int h, int m, int s) {
    return QTime_SetHMS((QTime*)self, h, m, s);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#addSecs)
///
/// ``` QTime* self, int secs ```
QTime* q_time_add_secs(void* self, int secs) {
    return QTime_AddSecs((QTime*)self, secs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#secsTo)
///
/// ``` QTime* self, QTime* t ```
int32_t q_time_secs_to(void* self, void* t) {
    return QTime_SecsTo((QTime*)self, (QTime*)t);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#addMSecs)
///
/// ``` QTime* self, int ms ```
QTime* q_time_add_m_secs(void* self, int ms) {
    return QTime_AddMSecs((QTime*)self, ms);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#msecsTo)
///
/// ``` QTime* self, QTime* t ```
int32_t q_time_msecs_to(void* self, void* t) {
    return QTime_MsecsTo((QTime*)self, (QTime*)t);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#fromMSecsSinceStartOfDay)
///
/// ``` int msecs ```
QTime* q_time_from_m_secs_since_start_of_day(int msecs) {
    return QTime_FromMSecsSinceStartOfDay(msecs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#msecsSinceStartOfDay)
///
/// ``` QTime* self ```
int32_t q_time_msecs_since_start_of_day(void* self) {
    return QTime_MsecsSinceStartOfDay((QTime*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#currentTime)
///
///
QTime* q_time_current_time() {
    return QTime_CurrentTime();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#fromString)
///
/// ``` const char* stringVal ```
QTime* q_time_from_string_with_string_val(const char* stringVal) {
    return QTime_FromStringWithStringVal(qstring(stringVal));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#fromString)
///
/// ``` const char* stringVal, const char* format ```
QTime* q_time_from_string4(const char* stringVal, const char* format) {
    return QTime_FromString4(qstring(stringVal), qstring(format));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#isValid)
///
/// ``` int h, int m, int s ```
bool q_time_is_valid2(int h, int m, int s) {
    return QTime_IsValid2(h, m, s);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#toString)
///
/// ``` QTime* self, enum Qt__DateFormat f ```
const char* q_time_to_string1(void* self, int64_t f) {
    libqt_string _str = QTime_ToString1((QTime*)self, f);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#setHMS)
///
/// ``` QTime* self, int h, int m, int s, int ms ```
bool q_time_set_h_m_s4(void* self, int h, int m, int s, int ms) {
    return QTime_SetHMS4((QTime*)self, h, m, s, ms);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#fromString)
///
/// ``` const char* stringVal, enum Qt__DateFormat format ```
QTime* q_time_from_string23(const char* stringVal, int64_t format) {
    return QTime_FromString23(qstring(stringVal), format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtime.html#isValid)
///
/// ``` int h, int m, int s, int ms ```
bool q_time_is_valid4(int h, int m, int s, int ms) {
    return QTime_IsValid4(h, m, s, ms);
}

/// Delete this object from C++ memory.
///
/// ``` QTime* self ```
void q_time_delete(void* self) {
    QTime_Delete((QTime*)(self));
}

/// https://doc.qt.io/qt-6/qdatetime.html

/// q_datetime_new constructs a new QDateTime object.
///
///
QDateTime* q_datetime_new() {
    return QDateTime_new();
}

/// q_datetime_new2 constructs a new QDateTime object.
///
/// ``` QDate* date, QTime* time ```
QDateTime* q_datetime_new2(void* date, void* time) {
    return QDateTime_new2((QDate*)date, (QTime*)time);
}

/// q_datetime_new3 constructs a new QDateTime object.
///
/// ``` QDate* date, QTime* time, QTimeZone* timeZone ```
QDateTime* q_datetime_new3(void* date, void* time, void* timeZone) {
    return QDateTime_new3((QDate*)date, (QTime*)time, (QTimeZone*)timeZone);
}

/// q_datetime_new4 constructs a new QDateTime object.
///
/// ``` QDateTime* other ```
QDateTime* q_datetime_new4(void* other) {
    return QDateTime_new4((QDateTime*)other);
}

/// q_datetime_new5 constructs a new QDateTime object.
///
/// ``` QDate* date, QTime* time, enum Qt__TimeSpec spec ```
QDateTime* q_datetime_new5(void* date, void* time, int64_t spec) {
    return QDateTime_new5((QDate*)date, (QTime*)time, spec);
}

/// q_datetime_new6 constructs a new QDateTime object.
///
/// ``` QDate* date, QTime* time, enum Qt__TimeSpec spec, int offsetSeconds ```
QDateTime* q_datetime_new6(void* date, void* time, int64_t spec, int offsetSeconds) {
    return QDateTime_new6((QDate*)date, (QTime*)time, spec, offsetSeconds);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#operator=)
///
/// ``` QDateTime* self, QDateTime* other ```
void q_datetime_operator_assign(void* self, void* other) {
    QDateTime_OperatorAssign((QDateTime*)self, (QDateTime*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#swap)
///
/// ``` QDateTime* self, QDateTime* other ```
void q_datetime_swap(void* self, void* other) {
    QDateTime_Swap((QDateTime*)self, (QDateTime*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#isNull)
///
/// ``` QDateTime* self ```
bool q_datetime_is_null(void* self) {
    return QDateTime_IsNull((QDateTime*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#isValid)
///
/// ``` QDateTime* self ```
bool q_datetime_is_valid(void* self) {
    return QDateTime_IsValid((QDateTime*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#date)
///
/// ``` QDateTime* self ```
QDate* q_datetime_date(void* self) {
    return QDateTime_Date((QDateTime*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#time)
///
/// ``` QDateTime* self ```
QTime* q_datetime_time(void* self) {
    return QDateTime_Time((QDateTime*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#timeSpec)
///
/// ``` QDateTime* self ```
int64_t q_datetime_time_spec(void* self) {
    return QDateTime_TimeSpec((QDateTime*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#offsetFromUtc)
///
/// ``` QDateTime* self ```
int32_t q_datetime_offset_from_utc(void* self) {
    return QDateTime_OffsetFromUtc((QDateTime*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#timeZone)
///
/// ``` QDateTime* self ```
QTimeZone* q_datetime_time_zone(void* self) {
    return QDateTime_TimeZone((QDateTime*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#timeZoneAbbreviation)
///
/// ``` QDateTime* self ```
const char* q_datetime_time_zone_abbreviation(void* self) {
    libqt_string _str = QDateTime_TimeZoneAbbreviation((QDateTime*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#isDaylightTime)
///
/// ``` QDateTime* self ```
bool q_datetime_is_daylight_time(void* self) {
    return QDateTime_IsDaylightTime((QDateTime*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#toMSecsSinceEpoch)
///
/// ``` QDateTime* self ```
long long q_datetime_to_m_secs_since_epoch(void* self) {
    return QDateTime_ToMSecsSinceEpoch((QDateTime*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#toSecsSinceEpoch)
///
/// ``` QDateTime* self ```
long long q_datetime_to_secs_since_epoch(void* self) {
    return QDateTime_ToSecsSinceEpoch((QDateTime*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#setDate)
///
/// ``` QDateTime* self, QDate* date ```
void q_datetime_set_date(void* self, void* date) {
    QDateTime_SetDate((QDateTime*)self, (QDate*)date);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#setTime)
///
/// ``` QDateTime* self, QTime* time ```
void q_datetime_set_time(void* self, void* time) {
    QDateTime_SetTime((QDateTime*)self, (QTime*)time);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#setTimeSpec)
///
/// ``` QDateTime* self, enum Qt__TimeSpec spec ```
void q_datetime_set_time_spec(void* self, int64_t spec) {
    QDateTime_SetTimeSpec((QDateTime*)self, spec);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#setOffsetFromUtc)
///
/// ``` QDateTime* self, int offsetSeconds ```
void q_datetime_set_offset_from_utc(void* self, int offsetSeconds) {
    QDateTime_SetOffsetFromUtc((QDateTime*)self, offsetSeconds);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#setTimeZone)
///
/// ``` QDateTime* self, QTimeZone* toZone ```
void q_datetime_set_time_zone(void* self, void* toZone) {
    QDateTime_SetTimeZone((QDateTime*)self, (QTimeZone*)toZone);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#setMSecsSinceEpoch)
///
/// ``` QDateTime* self, long long msecs ```
void q_datetime_set_m_secs_since_epoch(void* self, long long msecs) {
    QDateTime_SetMSecsSinceEpoch((QDateTime*)self, msecs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#setSecsSinceEpoch)
///
/// ``` QDateTime* self, long long secs ```
void q_datetime_set_secs_since_epoch(void* self, long long secs) {
    QDateTime_SetSecsSinceEpoch((QDateTime*)self, secs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#toString)
///
/// ``` QDateTime* self ```
const char* q_datetime_to_string(void* self) {
    libqt_string _str = QDateTime_ToString((QDateTime*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#toString)
///
/// ``` QDateTime* self, const char* format ```
const char* q_datetime_to_string_with_format(void* self, const char* format) {
    libqt_string _str = QDateTime_ToStringWithFormat((QDateTime*)self, qstring(format));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#addDays)
///
/// ``` QDateTime* self, long long days ```
QDateTime* q_datetime_add_days(void* self, long long days) {
    return QDateTime_AddDays((QDateTime*)self, days);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#addMonths)
///
/// ``` QDateTime* self, int months ```
QDateTime* q_datetime_add_months(void* self, int months) {
    return QDateTime_AddMonths((QDateTime*)self, months);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#addYears)
///
/// ``` QDateTime* self, int years ```
QDateTime* q_datetime_add_years(void* self, int years) {
    return QDateTime_AddYears((QDateTime*)self, years);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#addSecs)
///
/// ``` QDateTime* self, long long secs ```
QDateTime* q_datetime_add_secs(void* self, long long secs) {
    return QDateTime_AddSecs((QDateTime*)self, secs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#addMSecs)
///
/// ``` QDateTime* self, long long msecs ```
QDateTime* q_datetime_add_m_secs(void* self, long long msecs) {
    return QDateTime_AddMSecs((QDateTime*)self, msecs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#toTimeSpec)
///
/// ``` QDateTime* self, enum Qt__TimeSpec spec ```
QDateTime* q_datetime_to_time_spec(void* self, int64_t spec) {
    return QDateTime_ToTimeSpec((QDateTime*)self, spec);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#toLocalTime)
///
/// ``` QDateTime* self ```
QDateTime* q_datetime_to_local_time(void* self) {
    return QDateTime_ToLocalTime((QDateTime*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#toUTC)
///
/// ``` QDateTime* self ```
QDateTime* q_datetime_to_u_t_c(void* self) {
    return QDateTime_ToUTC((QDateTime*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#toOffsetFromUtc)
///
/// ``` QDateTime* self, int offsetSeconds ```
QDateTime* q_datetime_to_offset_from_utc(void* self, int offsetSeconds) {
    return QDateTime_ToOffsetFromUtc((QDateTime*)self, offsetSeconds);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#toTimeZone)
///
/// ``` QDateTime* self, QTimeZone* toZone ```
QDateTime* q_datetime_to_time_zone(void* self, void* toZone) {
    return QDateTime_ToTimeZone((QDateTime*)self, (QTimeZone*)toZone);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#daysTo)
///
/// ``` QDateTime* self, QDateTime* param1 ```
long long q_datetime_days_to(void* self, void* param1) {
    return QDateTime_DaysTo((QDateTime*)self, (QDateTime*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#secsTo)
///
/// ``` QDateTime* self, QDateTime* param1 ```
long long q_datetime_secs_to(void* self, void* param1) {
    return QDateTime_SecsTo((QDateTime*)self, (QDateTime*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#msecsTo)
///
/// ``` QDateTime* self, QDateTime* param1 ```
long long q_datetime_msecs_to(void* self, void* param1) {
    return QDateTime_MsecsTo((QDateTime*)self, (QDateTime*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#currentDateTime)
///
///
QDateTime* q_datetime_current_date_time() {
    return QDateTime_CurrentDateTime();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#currentDateTimeUtc)
///
///
QDateTime* q_datetime_current_date_time_utc() {
    return QDateTime_CurrentDateTimeUtc();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromString)
///
/// ``` const char* stringVal ```
QDateTime* q_datetime_from_string_with_string_val(const char* stringVal) {
    return QDateTime_FromStringWithStringVal(qstring(stringVal));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromString)
///
/// ``` const char* stringVal, const char* format ```
QDateTime* q_datetime_from_string4(const char* stringVal, const char* format) {
    return QDateTime_FromString4(qstring(stringVal), qstring(format));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromMSecsSinceEpoch)
///
/// ``` long long msecs ```
QDateTime* q_datetime_from_m_secs_since_epoch(long long msecs) {
    return QDateTime_FromMSecsSinceEpoch(msecs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromSecsSinceEpoch)
///
/// ``` long long secs ```
QDateTime* q_datetime_from_secs_since_epoch(long long secs) {
    return QDateTime_FromSecsSinceEpoch(secs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromMSecsSinceEpoch)
///
/// ``` long long msecs, QTimeZone* timeZone ```
QDateTime* q_datetime_from_m_secs_since_epoch2(long long msecs, void* timeZone) {
    return QDateTime_FromMSecsSinceEpoch2(msecs, (QTimeZone*)timeZone);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromSecsSinceEpoch)
///
/// ``` long long secs, QTimeZone* timeZone ```
QDateTime* q_datetime_from_secs_since_epoch2(long long secs, void* timeZone) {
    return QDateTime_FromSecsSinceEpoch2(secs, (QTimeZone*)timeZone);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#currentMSecsSinceEpoch)
///
///
long long q_datetime_current_m_secs_since_epoch() {
    return QDateTime_CurrentMSecsSinceEpoch();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#currentSecsSinceEpoch)
///
///
long long q_datetime_current_secs_since_epoch() {
    return QDateTime_CurrentSecsSinceEpoch();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#toString)
///
/// ``` QDateTime* self, enum Qt__DateFormat format ```
const char* q_datetime_to_string1(void* self, int64_t format) {
    libqt_string _str = QDateTime_ToString1((QDateTime*)self, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#toString)
///
/// ``` QDateTime* self, const char* format, QCalendar* cal ```
const char* q_datetime_to_string22(void* self, const char* format, void* cal) {
    libqt_string _str = QDateTime_ToString22((QDateTime*)self, qstring(format), (QCalendar*)cal);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromString)
///
/// ``` const char* stringVal, enum Qt__DateFormat format ```
QDateTime* q_datetime_from_string23(const char* stringVal, int64_t format) {
    return QDateTime_FromString23(qstring(stringVal), format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromString)
///
/// ``` const char* stringVal, const char* format, QCalendar* cal ```
QDateTime* q_datetime_from_string34(const char* stringVal, const char* format, void* cal) {
    return QDateTime_FromString34(qstring(stringVal), qstring(format), (QCalendar*)cal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromMSecsSinceEpoch)
///
/// ``` long long msecs, enum Qt__TimeSpec spec ```
QDateTime* q_datetime_from_m_secs_since_epoch22(long long msecs, int64_t spec) {
    return QDateTime_FromMSecsSinceEpoch22(msecs, spec);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromMSecsSinceEpoch)
///
/// ``` long long msecs, enum Qt__TimeSpec spec, int offsetFromUtc ```
QDateTime* q_datetime_from_m_secs_since_epoch3(long long msecs, int64_t spec, int offsetFromUtc) {
    return QDateTime_FromMSecsSinceEpoch3(msecs, spec, offsetFromUtc);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromSecsSinceEpoch)
///
/// ``` long long secs, enum Qt__TimeSpec spec ```
QDateTime* q_datetime_from_secs_since_epoch22(long long secs, int64_t spec) {
    return QDateTime_FromSecsSinceEpoch22(secs, spec);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetime.html#fromSecsSinceEpoch)
///
/// ``` long long secs, enum Qt__TimeSpec spec, int offsetFromUtc ```
QDateTime* q_datetime_from_secs_since_epoch3(long long secs, int64_t spec, int offsetFromUtc) {
    return QDateTime_FromSecsSinceEpoch3(secs, spec, offsetFromUtc);
}

/// Delete this object from C++ memory.
///
/// ``` QDateTime* self ```
void q_datetime_delete(void* self) {
    QDateTime_Delete((QDateTime*)(self));
}