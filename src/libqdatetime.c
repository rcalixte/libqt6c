#include "libqcalendar.hpp"
#include "libqtimezone.hpp"
#include "libqdatetime.hpp"
#include "libqdatetime.h"

QDate* q_date_new(void* other) {
    return QDate_new((QDate*)other);
}

QDate* q_date_new2(void* other) {
    return QDate_new2((QDate*)other);
}

QDate* q_date_new3() {
    return QDate_new3();
}

QDate* q_date_new4(int y, int m, int d) {
    return QDate_new4(y, m, d);
}

QDate* q_date_new5(int y, int m, int d, void* cal) {
    return QDate_new5(y, m, d, (QCalendar*)cal);
}

QDate* q_date_new6(void* param1) {
    return QDate_new6((QDate*)param1);
}

void q_date_copy_assign(void* self, void* other) {
    QDate_CopyAssign((QDate*)self, (QDate*)other);
}

void q_date_move_assign(void* self, void* other) {
    QDate_MoveAssign((QDate*)self, (QDate*)other);
}

bool q_date_is_null(void* self) {
    return QDate_IsNull((QDate*)self);
}

bool q_date_is_valid(void* self) {
    return QDate_IsValid((QDate*)self);
}

int32_t q_date_year(void* self) {
    return QDate_Year((QDate*)self);
}

int32_t q_date_month(void* self) {
    return QDate_Month((QDate*)self);
}

int32_t q_date_day(void* self) {
    return QDate_Day((QDate*)self);
}

int32_t q_date_day_of_week(void* self) {
    return QDate_DayOfWeek((QDate*)self);
}

int32_t q_date_day_of_year(void* self) {
    return QDate_DayOfYear((QDate*)self);
}

int32_t q_date_days_in_month(void* self) {
    return QDate_DaysInMonth((QDate*)self);
}

int32_t q_date_days_in_year(void* self) {
    return QDate_DaysInYear((QDate*)self);
}

int32_t q_date_week_number(void* self) {
    return QDate_WeekNumber((QDate*)self);
}

int32_t q_date_year2(void* self, void* cal) {
    return QDate_Year2((QDate*)self, (QCalendar*)cal);
}

int32_t q_date_month2(void* self, void* cal) {
    return QDate_Month2((QDate*)self, (QCalendar*)cal);
}

int32_t q_date_day2(void* self, void* cal) {
    return QDate_Day2((QDate*)self, (QCalendar*)cal);
}

int32_t q_date_day_of_week2(void* self, void* cal) {
    return QDate_DayOfWeek2((QDate*)self, (QCalendar*)cal);
}

int32_t q_date_day_of_year2(void* self, void* cal) {
    return QDate_DayOfYear2((QDate*)self, (QCalendar*)cal);
}

int32_t q_date_days_in_month2(void* self, void* cal) {
    return QDate_DaysInMonth2((QDate*)self, (QCalendar*)cal);
}

int32_t q_date_days_in_year2(void* self, void* cal) {
    return QDate_DaysInYear2((QDate*)self, (QCalendar*)cal);
}

QDateTime* q_date_start_of_day(void* self, int32_t spec) {
    return QDate_StartOfDay((QDate*)self, spec);
}

QDateTime* q_date_end_of_day(void* self, int32_t spec) {
    return QDate_EndOfDay((QDate*)self, spec);
}

QDateTime* q_date_start_of_day2(void* self, void* zone) {
    return QDate_StartOfDay2((QDate*)self, (QTimeZone*)zone);
}

QDateTime* q_date_end_of_day2(void* self, void* zone) {
    return QDate_EndOfDay2((QDate*)self, (QTimeZone*)zone);
}

QDateTime* q_date_start_of_day3(void* self) {
    return QDate_StartOfDay3((QDate*)self);
}

QDateTime* q_date_end_of_day3(void* self) {
    return QDate_EndOfDay3((QDate*)self);
}

const char* q_date_to_string(void* self) {
    libqt_string _str = QDate_ToString((QDate*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_date_to_string2(void* self, const char* format) {
    libqt_string _str = QDate_ToString2((QDate*)self, qstring(format));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_date_to_string3(void* self, const char* format, void* cal) {
    libqt_string _str = QDate_ToString3((QDate*)self, qstring(format), (QCalendar*)cal);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_date_set_date(void* self, int year, int month, int day) {
    return QDate_SetDate((QDate*)self, year, month, day);
}

bool q_date_set_date2(void* self, int year, int month, int day, void* cal) {
    return QDate_SetDate2((QDate*)self, year, month, day, (QCalendar*)cal);
}

void q_date_get_date(void* self, int* year, int* month, int* day) {
    QDate_GetDate((QDate*)self, year, month, day);
}

QDate* q_date_add_days(void* self, long long days) {
    return QDate_AddDays((QDate*)self, days);
}

QDate* q_date_add_months(void* self, int months) {
    return QDate_AddMonths((QDate*)self, months);
}

QDate* q_date_add_years(void* self, int years) {
    return QDate_AddYears((QDate*)self, years);
}

QDate* q_date_add_months2(void* self, int months, void* cal) {
    return QDate_AddMonths2((QDate*)self, months, (QCalendar*)cal);
}

QDate* q_date_add_years2(void* self, int years, void* cal) {
    return QDate_AddYears2((QDate*)self, years, (QCalendar*)cal);
}

long long q_date_days_to(void* self, void* d) {
    return QDate_DaysTo((QDate*)self, (QDate*)d);
}

QDate* q_date_current_date() {
    return QDate_CurrentDate();
}

QDate* q_date_from_string2(const char* stringVal) {
    return QDate_FromString2(qstring(stringVal));
}

QDate* q_date_from_string5(const char* stringVal, const char* format, void* cal) {
    return QDate_FromString5(qstring(stringVal), qstring(format), (QCalendar*)cal);
}

QDate* q_date_from_string10(const char* stringVal, const char* format) {
    return QDate_FromString10(qstring(stringVal), qstring(format));
}

QDate* q_date_from_string11(const char* stringVal, const char* format, int baseYear, void* cal) {
    return QDate_FromString11(qstring(stringVal), qstring(format), baseYear, (QCalendar*)cal);
}

bool q_date_is_valid2(int y, int m, int d) {
    return QDate_IsValid2(y, m, d);
}

bool q_date_is_leap_year(int year) {
    return QDate_IsLeapYear(year);
}

QDate* q_date_from_julian_day(long long jd_) {
    return QDate_FromJulianDay(jd_);
}

long long q_date_to_julian_day(void* self) {
    return QDate_ToJulianDay((QDate*)self);
}

int32_t q_date_week_number1(void* self, int* yearNum) {
    return QDate_WeekNumber1((QDate*)self, yearNum);
}

QDateTime* q_date_start_of_day22(void* self, int32_t spec, int offsetSeconds) {
    return QDate_StartOfDay22((QDate*)self, spec, offsetSeconds);
}

QDateTime* q_date_end_of_day22(void* self, int32_t spec, int offsetSeconds) {
    return QDate_EndOfDay22((QDate*)self, spec, offsetSeconds);
}

const char* q_date_to_string1(void* self, int32_t format) {
    libqt_string _str = QDate_ToString1((QDate*)self, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDate* q_date_from_string23(const char* stringVal, int32_t format) {
    return QDate_FromString23(qstring(stringVal), format);
}

QDate* q_date_from_string34(const char* stringVal, const char* format, int baseYear) {
    return QDate_FromString34(qstring(stringVal), qstring(format), baseYear);
}

void q_date_delete(void* self) {
    QDate_Delete((QDate*)(self));
}

QTime* q_time_new(void* other) {
    return QTime_new((QTime*)other);
}

QTime* q_time_new2(void* other) {
    return QTime_new2((QTime*)other);
}

QTime* q_time_new3() {
    return QTime_new3();
}

QTime* q_time_new4(int h, int m) {
    return QTime_new4(h, m);
}

QTime* q_time_new5(void* param1) {
    return QTime_new5((QTime*)param1);
}

QTime* q_time_new6(int h, int m, int s) {
    return QTime_new6(h, m, s);
}

QTime* q_time_new7(int h, int m, int s, int ms) {
    return QTime_new7(h, m, s, ms);
}

void q_time_copy_assign(void* self, void* other) {
    QTime_CopyAssign((QTime*)self, (QTime*)other);
}

void q_time_move_assign(void* self, void* other) {
    QTime_MoveAssign((QTime*)self, (QTime*)other);
}

bool q_time_is_null(void* self) {
    return QTime_IsNull((QTime*)self);
}

bool q_time_is_valid(void* self) {
    return QTime_IsValid((QTime*)self);
}

int32_t q_time_hour(void* self) {
    return QTime_Hour((QTime*)self);
}

int32_t q_time_minute(void* self) {
    return QTime_Minute((QTime*)self);
}

int32_t q_time_second(void* self) {
    return QTime_Second((QTime*)self);
}

int32_t q_time_msec(void* self) {
    return QTime_Msec((QTime*)self);
}

const char* q_time_to_string(void* self) {
    libqt_string _str = QTime_ToString((QTime*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_time_to_string2(void* self, const char* format) {
    libqt_string _str = QTime_ToString2((QTime*)self, qstring(format));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_time_set_h_m_s(void* self, int h, int m, int s) {
    return QTime_SetHMS((QTime*)self, h, m, s);
}

QTime* q_time_add_secs(void* self, int secs) {
    return QTime_AddSecs((QTime*)self, secs);
}

int32_t q_time_secs_to(void* self, void* t) {
    return QTime_SecsTo((QTime*)self, (QTime*)t);
}

QTime* q_time_add_m_secs(void* self, int ms) {
    return QTime_AddMSecs((QTime*)self, ms);
}

int32_t q_time_msecs_to(void* self, void* t) {
    return QTime_MsecsTo((QTime*)self, (QTime*)t);
}

QTime* q_time_from_m_secs_since_start_of_day(int msecs) {
    return QTime_FromMSecsSinceStartOfDay(msecs);
}

int32_t q_time_msecs_since_start_of_day(void* self) {
    return QTime_MsecsSinceStartOfDay((QTime*)self);
}

QTime* q_time_current_time() {
    return QTime_CurrentTime();
}

QTime* q_time_from_string4(const char* stringVal) {
    return QTime_FromString4(qstring(stringVal));
}

QTime* q_time_from_string5(const char* stringVal, const char* format) {
    return QTime_FromString5(qstring(stringVal), qstring(format));
}

bool q_time_is_valid2(int h, int m, int s) {
    return QTime_IsValid2(h, m, s);
}

const char* q_time_to_string1(void* self, int32_t f) {
    libqt_string _str = QTime_ToString1((QTime*)self, f);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_time_set_h_m_s4(void* self, int h, int m, int s, int ms) {
    return QTime_SetHMS4((QTime*)self, h, m, s, ms);
}

QTime* q_time_from_string23(const char* stringVal, int32_t format) {
    return QTime_FromString23(qstring(stringVal), format);
}

bool q_time_is_valid4(int h, int m, int s, int ms) {
    return QTime_IsValid4(h, m, s, ms);
}

void q_time_delete(void* self) {
    QTime_Delete((QTime*)(self));
}

QDateTime* q_datetime_new() {
    return QDateTime_new();
}

QDateTime* q_datetime_new2(void* date, void* time, int32_t spec) {
    return QDateTime_new2((QDate*)date, (QTime*)time, spec);
}

QDateTime* q_datetime_new3(void* date, void* time, void* timeZone) {
    return QDateTime_new3((QDate*)date, (QTime*)time, (QTimeZone*)timeZone);
}

QDateTime* q_datetime_new4(void* date, void* time) {
    return QDateTime_new4((QDate*)date, (QTime*)time);
}

QDateTime* q_datetime_new5(void* other) {
    return QDateTime_new5((QDateTime*)other);
}

QDateTime* q_datetime_new6(void* date, void* time, int32_t spec, int offsetSeconds) {
    return QDateTime_new6((QDate*)date, (QTime*)time, spec, offsetSeconds);
}

QDateTime* q_datetime_new7(void* date, void* time, void* timeZone, int32_t resolve) {
    return QDateTime_new7((QDate*)date, (QTime*)time, (QTimeZone*)timeZone, resolve);
}

QDateTime* q_datetime_new8(void* date, void* time, int32_t resolve) {
    return QDateTime_new8((QDate*)date, (QTime*)time, resolve);
}

void q_datetime_operator_assign(void* self, void* other) {
    QDateTime_OperatorAssign((QDateTime*)self, (QDateTime*)other);
}

void q_datetime_swap(void* self, void* other) {
    QDateTime_Swap((QDateTime*)self, (QDateTime*)other);
}

bool q_datetime_is_null(void* self) {
    return QDateTime_IsNull((QDateTime*)self);
}

bool q_datetime_is_valid(void* self) {
    return QDateTime_IsValid((QDateTime*)self);
}

QDate* q_datetime_date(void* self) {
    return QDateTime_Date((QDateTime*)self);
}

QTime* q_datetime_time(void* self) {
    return QDateTime_Time((QDateTime*)self);
}

int32_t q_datetime_time_spec(void* self) {
    return QDateTime_TimeSpec((QDateTime*)self);
}

int32_t q_datetime_offset_from_utc(void* self) {
    return QDateTime_OffsetFromUtc((QDateTime*)self);
}

QTimeZone* q_datetime_time_representation(void* self) {
    return QDateTime_TimeRepresentation((QDateTime*)self);
}

QTimeZone* q_datetime_time_zone(void* self) {
    return QDateTime_TimeZone((QDateTime*)self);
}

const char* q_datetime_time_zone_abbreviation(void* self) {
    libqt_string _str = QDateTime_TimeZoneAbbreviation((QDateTime*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_datetime_is_daylight_time(void* self) {
    return QDateTime_IsDaylightTime((QDateTime*)self);
}

long long q_datetime_to_m_secs_since_epoch(void* self) {
    return QDateTime_ToMSecsSinceEpoch((QDateTime*)self);
}

long long q_datetime_to_secs_since_epoch(void* self) {
    return QDateTime_ToSecsSinceEpoch((QDateTime*)self);
}

void q_datetime_set_date(void* self, void* date) {
    QDateTime_SetDate((QDateTime*)self, (QDate*)date);
}

void q_datetime_set_time(void* self, void* time) {
    QDateTime_SetTime((QDateTime*)self, (QTime*)time);
}

void q_datetime_set_time_spec(void* self, int32_t spec) {
    QDateTime_SetTimeSpec((QDateTime*)self, spec);
}

void q_datetime_set_offset_from_utc(void* self, int offsetSeconds) {
    QDateTime_SetOffsetFromUtc((QDateTime*)self, offsetSeconds);
}

void q_datetime_set_time_zone(void* self, void* toZone) {
    QDateTime_SetTimeZone((QDateTime*)self, (QTimeZone*)toZone);
}

void q_datetime_set_m_secs_since_epoch(void* self, long long msecs) {
    QDateTime_SetMSecsSinceEpoch((QDateTime*)self, msecs);
}

void q_datetime_set_secs_since_epoch(void* self, long long secs) {
    QDateTime_SetSecsSinceEpoch((QDateTime*)self, secs);
}

const char* q_datetime_to_string(void* self) {
    libqt_string _str = QDateTime_ToString((QDateTime*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_datetime_to_string2(void* self, const char* format) {
    libqt_string _str = QDateTime_ToString2((QDateTime*)self, qstring(format));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_datetime_to_string3(void* self, const char* format, void* cal) {
    libqt_string _str = QDateTime_ToString3((QDateTime*)self, qstring(format), (QCalendar*)cal);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDateTime* q_datetime_add_days(void* self, long long days) {
    return QDateTime_AddDays((QDateTime*)self, days);
}

QDateTime* q_datetime_add_months(void* self, int months) {
    return QDateTime_AddMonths((QDateTime*)self, months);
}

QDateTime* q_datetime_add_years(void* self, int years) {
    return QDateTime_AddYears((QDateTime*)self, years);
}

QDateTime* q_datetime_add_secs(void* self, long long secs) {
    return QDateTime_AddSecs((QDateTime*)self, secs);
}

QDateTime* q_datetime_add_m_secs(void* self, long long msecs) {
    return QDateTime_AddMSecs((QDateTime*)self, msecs);
}

QDateTime* q_datetime_to_time_spec(void* self, int32_t spec) {
    return QDateTime_ToTimeSpec((QDateTime*)self, spec);
}

QDateTime* q_datetime_to_local_time(void* self) {
    return QDateTime_ToLocalTime((QDateTime*)self);
}

QDateTime* q_datetime_to_u_t_c(void* self) {
    return QDateTime_ToUTC((QDateTime*)self);
}

QDateTime* q_datetime_to_offset_from_utc(void* self, int offsetSeconds) {
    return QDateTime_ToOffsetFromUtc((QDateTime*)self, offsetSeconds);
}

QDateTime* q_datetime_to_time_zone(void* self, void* toZone) {
    return QDateTime_ToTimeZone((QDateTime*)self, (QTimeZone*)toZone);
}

long long q_datetime_days_to(void* self, void* param1) {
    return QDateTime_DaysTo((QDateTime*)self, (QDateTime*)param1);
}

long long q_datetime_secs_to(void* self, void* param1) {
    return QDateTime_SecsTo((QDateTime*)self, (QDateTime*)param1);
}

long long q_datetime_msecs_to(void* self, void* param1) {
    return QDateTime_MsecsTo((QDateTime*)self, (QDateTime*)param1);
}

QDateTime* q_datetime_current_date_time(void* zone) {
    return QDateTime_CurrentDateTime((QTimeZone*)zone);
}

QDateTime* q_datetime_current_date_time2() {
    return QDateTime_CurrentDateTime2();
}

QDateTime* q_datetime_current_date_time_utc() {
    return QDateTime_CurrentDateTimeUtc();
}

QDateTime* q_datetime_from_string2(const char* stringVal) {
    return QDateTime_FromString2(qstring(stringVal));
}

QDateTime* q_datetime_from_string5(const char* stringVal, const char* format, void* cal) {
    return QDateTime_FromString5(qstring(stringVal), qstring(format), (QCalendar*)cal);
}

QDateTime* q_datetime_from_string10(const char* stringVal, const char* format) {
    return QDateTime_FromString10(qstring(stringVal), qstring(format));
}

QDateTime* q_datetime_from_string11(const char* stringVal, const char* format, int baseYear, void* cal) {
    return QDateTime_FromString11(qstring(stringVal), qstring(format), baseYear, (QCalendar*)cal);
}

QDateTime* q_datetime_from_m_secs_since_epoch(long long msecs, int32_t spec) {
    return QDateTime_FromMSecsSinceEpoch(msecs, spec);
}

QDateTime* q_datetime_from_secs_since_epoch(long long secs, int32_t spec) {
    return QDateTime_FromSecsSinceEpoch(secs, spec);
}

QDateTime* q_datetime_from_m_secs_since_epoch2(long long msecs, void* timeZone) {
    return QDateTime_FromMSecsSinceEpoch2(msecs, (QTimeZone*)timeZone);
}

QDateTime* q_datetime_from_secs_since_epoch2(long long secs, void* timeZone) {
    return QDateTime_FromSecsSinceEpoch2(secs, (QTimeZone*)timeZone);
}

QDateTime* q_datetime_from_m_secs_since_epoch3(long long msecs) {
    return QDateTime_FromMSecsSinceEpoch3(msecs);
}

QDateTime* q_datetime_from_secs_since_epoch3(long long secs) {
    return QDateTime_FromSecsSinceEpoch3(secs);
}

long long q_datetime_current_m_secs_since_epoch() {
    return QDateTime_CurrentMSecsSinceEpoch();
}

long long q_datetime_current_secs_since_epoch() {
    return QDateTime_CurrentSecsSinceEpoch();
}

void q_datetime_set_date2(void* self, void* date, int32_t resolve) {
    QDateTime_SetDate2((QDateTime*)self, (QDate*)date, resolve);
}

void q_datetime_set_time2(void* self, void* time, int32_t resolve) {
    QDateTime_SetTime2((QDateTime*)self, (QTime*)time, resolve);
}

void q_datetime_set_time_zone2(void* self, void* toZone, int32_t resolve) {
    QDateTime_SetTimeZone2((QDateTime*)self, (QTimeZone*)toZone, resolve);
}

const char* q_datetime_to_string1(void* self, int32_t format) {
    libqt_string _str = QDateTime_ToString1((QDateTime*)self, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDateTime* q_datetime_from_string23(const char* stringVal, int32_t format) {
    return QDateTime_FromString23(qstring(stringVal), format);
}

QDateTime* q_datetime_from_string34(const char* stringVal, const char* format, int baseYear) {
    return QDateTime_FromString34(qstring(stringVal), qstring(format), baseYear);
}

QDateTime* q_datetime_from_m_secs_since_epoch32(long long msecs, int32_t spec, int offsetFromUtc) {
    return QDateTime_FromMSecsSinceEpoch32(msecs, spec, offsetFromUtc);
}

QDateTime* q_datetime_from_secs_since_epoch32(long long secs, int32_t spec, int offsetFromUtc) {
    return QDateTime_FromSecsSinceEpoch32(secs, spec, offsetFromUtc);
}

void q_datetime_delete(void* self) {
    QDateTime_Delete((QDateTime*)(self));
}
