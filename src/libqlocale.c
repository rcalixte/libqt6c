#include "libqcalendar.hpp"
#include "libqdatetime.hpp"
#include <string.h>
#include "libqlocale.hpp"
#include "libqlocale.h"

/// https://doc.qt.io/qt-6/qlocale.html

/// q_locale_new constructs a new QLocale object.
///
///
QLocale* q_locale_new() {
    return QLocale_new();
}

/// q_locale_new2 constructs a new QLocale object.
///
/// ``` const char* name ```
QLocale* q_locale_new2(const char* name) {
    return QLocale_new2(qstring(name));
}

/// q_locale_new3 constructs a new QLocale object.
///
/// ``` enum QLocale__Language language, enum QLocale__Country territory ```
QLocale* q_locale_new3(int64_t language, int64_t territory) {
    return QLocale_new3(language, territory);
}

/// q_locale_new4 constructs a new QLocale object.
///
/// ``` enum QLocale__Language language ```
QLocale* q_locale_new4(int64_t language) {
    return QLocale_new4(language);
}

/// q_locale_new5 constructs a new QLocale object.
///
/// ``` QLocale* other ```
QLocale* q_locale_new5(void* other) {
    return QLocale_new5((QLocale*)other);
}

/// q_locale_new6 constructs a new QLocale object.
///
/// ``` enum QLocale__Language language, enum QLocale__Script script ```
QLocale* q_locale_new6(int64_t language, int64_t script) {
    return QLocale_new6(language, script);
}

/// q_locale_new7 constructs a new QLocale object.
///
/// ``` enum QLocale__Language language, enum QLocale__Script script, enum QLocale__Country territory ```
QLocale* q_locale_new7(int64_t language, int64_t script, int64_t territory) {
    return QLocale_new7(language, script, territory);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#operator=)
///
/// ``` QLocale* self, QLocale* other ```
void q_locale_operator_assign(void* self, void* other) {
    QLocale_OperatorAssign((QLocale*)self, (QLocale*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#swap)
///
/// ``` QLocale* self, QLocale* other ```
void q_locale_swap(void* self, void* other) {
    QLocale_Swap((QLocale*)self, (QLocale*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#language)
///
/// ``` QLocale* self ```
int64_t q_locale_language(void* self) {
    return QLocale_Language((QLocale*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#script)
///
/// ``` QLocale* self ```
int64_t q_locale_script(void* self) {
    return QLocale_Script((QLocale*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#territory)
///
/// ``` QLocale* self ```
int64_t q_locale_territory(void* self) {
    return QLocale_Territory((QLocale*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#country)
///
/// ``` QLocale* self ```
int64_t q_locale_country(void* self) {
    return QLocale_Country((QLocale*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#name)
///
/// ``` QLocale* self ```
const char* q_locale_name(void* self) {
    libqt_string _str = QLocale_Name((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#bcp47Name)
///
/// ``` QLocale* self ```
const char* q_locale_bcp47_name(void* self) {
    libqt_string _str = QLocale_Bcp47Name((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#nativeLanguageName)
///
/// ``` QLocale* self ```
const char* q_locale_native_language_name(void* self) {
    libqt_string _str = QLocale_NativeLanguageName((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#nativeTerritoryName)
///
/// ``` QLocale* self ```
const char* q_locale_native_territory_name(void* self) {
    libqt_string _str = QLocale_NativeTerritoryName((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#nativeCountryName)
///
/// ``` QLocale* self ```
const char* q_locale_native_country_name(void* self) {
    libqt_string _str = QLocale_NativeCountryName((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toShort)
///
/// ``` QLocale* self, const char* s ```
short q_locale_to_short(void* self, const char* s) {
    return QLocale_ToShort((QLocale*)self, qstring(s));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toUShort)
///
/// ``` QLocale* self, const char* s ```
unsigned short q_locale_to_u_short(void* self, const char* s) {
    return QLocale_ToUShort((QLocale*)self, qstring(s));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toInt)
///
/// ``` QLocale* self, const char* s ```
int32_t q_locale_to_int(void* self, const char* s) {
    return QLocale_ToInt((QLocale*)self, qstring(s));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toUInt)
///
/// ``` QLocale* self, const char* s ```
uint32_t q_locale_to_u_int(void* self, const char* s) {
    return QLocale_ToUInt((QLocale*)self, qstring(s));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toLong)
///
/// ``` QLocale* self, const char* s ```
int64_t q_locale_to_long(void* self, const char* s) {
    return QLocale_ToLong((QLocale*)self, qstring(s));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toULong)
///
/// ``` QLocale* self, const char* s ```
uint64_t q_locale_to_u_long(void* self, const char* s) {
    return QLocale_ToULong((QLocale*)self, qstring(s));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toLongLong)
///
/// ``` QLocale* self, const char* s ```
long long q_locale_to_long_long(void* self, const char* s) {
    return QLocale_ToLongLong((QLocale*)self, qstring(s));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toULongLong)
///
/// ``` QLocale* self, const char* s ```
uint64_t q_locale_to_u_long_long(void* self, const char* s) {
    return QLocale_ToULongLong((QLocale*)self, qstring(s));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toFloat)
///
/// ``` QLocale* self, const char* s ```
float q_locale_to_float(void* self, const char* s) {
    return QLocale_ToFloat((QLocale*)self, qstring(s));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDouble)
///
/// ``` QLocale* self, const char* s ```
double q_locale_to_double(void* self, const char* s) {
    return QLocale_ToDouble((QLocale*)self, qstring(s));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// ``` QLocale* self, long long i ```
const char* q_locale_to_string(void* self, long long i) {
    libqt_string _str = QLocale_ToString((QLocale*)self, i);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// ``` QLocale* self, uint64_t i ```
const char* q_locale_to_string_with_qulonglong(void* self, uint64_t i) {
    libqt_string _str = QLocale_ToStringWithQulonglong((QLocale*)self, i);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// ``` QLocale* self, int64_t i ```
const char* q_locale_to_string_with_long(void* self, int64_t i) {
    libqt_string _str = QLocale_ToStringWithLong((QLocale*)self, i);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// ``` QLocale* self, uint64_t i ```
const char* q_locale_to_string_with_ulong(void* self, uint64_t i) {
    libqt_string _str = QLocale_ToStringWithUlong((QLocale*)self, i);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// ``` QLocale* self, short i ```
const char* q_locale_to_string_with_short(void* self, short i) {
    libqt_string _str = QLocale_ToStringWithShort((QLocale*)self, i);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// ``` QLocale* self, unsigned short i ```
const char* q_locale_to_string_with_ushort(void* self, unsigned short i) {
    libqt_string _str = QLocale_ToStringWithUshort((QLocale*)self, i);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// ``` QLocale* self, int i ```
const char* q_locale_to_string_with_int(void* self, int i) {
    libqt_string _str = QLocale_ToStringWithInt((QLocale*)self, i);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// ``` QLocale* self, uint32_t i ```
const char* q_locale_to_string_with_uint(void* self, uint32_t i) {
    libqt_string _str = QLocale_ToStringWithUint((QLocale*)self, i);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// ``` QLocale* self, double f ```
const char* q_locale_to_string_with_double(void* self, double f) {
    libqt_string _str = QLocale_ToStringWithDouble((QLocale*)self, f);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// ``` QLocale* self, float f ```
const char* q_locale_to_string_with_float(void* self, float f) {
    libqt_string _str = QLocale_ToStringWithFloat((QLocale*)self, f);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// ``` QLocale* self, QDate* date, const char* format ```
const char* q_locale_to_string2(void* self, void* date, const char* format) {
    libqt_string _str = QLocale_ToString2((QLocale*)self, (QDate*)date, qstring(format));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// ``` QLocale* self, QTime* time, const char* format ```
const char* q_locale_to_string3(void* self, void* time, const char* format) {
    libqt_string _str = QLocale_ToString3((QLocale*)self, (QTime*)time, qstring(format));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// ``` QLocale* self, QDateTime* dateTime, const char* format ```
const char* q_locale_to_string4(void* self, void* dateTime, const char* format) {
    libqt_string _str = QLocale_ToString4((QLocale*)self, (QDateTime*)dateTime, qstring(format));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// ``` QLocale* self, QDate* date ```
const char* q_locale_to_string_with_date(void* self, void* date) {
    libqt_string _str = QLocale_ToStringWithDate((QLocale*)self, (QDate*)date);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// ``` QLocale* self, QTime* time ```
const char* q_locale_to_string_with_time(void* self, void* time) {
    libqt_string _str = QLocale_ToStringWithTime((QLocale*)self, (QTime*)time);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// ``` QLocale* self, QDateTime* dateTime ```
const char* q_locale_to_string_with_date_time(void* self, void* dateTime) {
    libqt_string _str = QLocale_ToStringWithDateTime((QLocale*)self, (QDateTime*)dateTime);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// ``` QLocale* self, QDate* date, enum QLocale__FormatType format, QCalendar* cal ```
const char* q_locale_to_string9(void* self, void* date, int64_t format, void* cal) {
    libqt_string _str = QLocale_ToString9((QLocale*)self, (QDate*)date, format, (QCalendar*)cal);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// ``` QLocale* self, QDateTime* dateTime, enum QLocale__FormatType format, QCalendar* cal ```
const char* q_locale_to_string10(void* self, void* dateTime, int64_t format, void* cal) {
    libqt_string _str = QLocale_ToString10((QLocale*)self, (QDateTime*)dateTime, format, (QCalendar*)cal);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#dateFormat)
///
/// ``` QLocale* self ```
const char* q_locale_date_format(void* self) {
    libqt_string _str = QLocale_DateFormat((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#timeFormat)
///
/// ``` QLocale* self ```
const char* q_locale_time_format(void* self) {
    libqt_string _str = QLocale_TimeFormat((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#dateTimeFormat)
///
/// ``` QLocale* self ```
const char* q_locale_date_time_format(void* self) {
    libqt_string _str = QLocale_DateTimeFormat((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDate)
///
/// ``` QLocale* self, const char* stringVal ```
QDate* q_locale_to_date(void* self, const char* stringVal) {
    return QLocale_ToDate((QLocale*)self, qstring(stringVal));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toTime)
///
/// ``` QLocale* self, const char* stringVal ```
QTime* q_locale_to_time(void* self, const char* stringVal) {
    return QLocale_ToTime((QLocale*)self, qstring(stringVal));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDateTime)
///
/// ``` QLocale* self, const char* stringVal ```
QDateTime* q_locale_to_date_time(void* self, const char* stringVal) {
    return QLocale_ToDateTime((QLocale*)self, qstring(stringVal));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDate)
///
/// ``` QLocale* self, const char* stringVal, const char* format ```
QDate* q_locale_to_date2(void* self, const char* stringVal, const char* format) {
    return QLocale_ToDate2((QLocale*)self, qstring(stringVal), qstring(format));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toTime)
///
/// ``` QLocale* self, const char* stringVal, const char* format ```
QTime* q_locale_to_time2(void* self, const char* stringVal, const char* format) {
    return QLocale_ToTime2((QLocale*)self, qstring(stringVal), qstring(format));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDateTime)
///
/// ``` QLocale* self, const char* stringVal, const char* format ```
QDateTime* q_locale_to_date_time2(void* self, const char* stringVal, const char* format) {
    return QLocale_ToDateTime2((QLocale*)self, qstring(stringVal), qstring(format));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDate)
///
/// ``` QLocale* self, const char* stringVal, enum QLocale__FormatType format, QCalendar* cal ```
QDate* q_locale_to_date3(void* self, const char* stringVal, int64_t format, void* cal) {
    return QLocale_ToDate3((QLocale*)self, qstring(stringVal), format, (QCalendar*)cal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDateTime)
///
/// ``` QLocale* self, const char* stringVal, enum QLocale__FormatType format, QCalendar* cal ```
QDateTime* q_locale_to_date_time3(void* self, const char* stringVal, int64_t format, void* cal) {
    return QLocale_ToDateTime3((QLocale*)self, qstring(stringVal), format, (QCalendar*)cal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDate)
///
/// ``` QLocale* self, const char* stringVal, const char* format, QCalendar* cal ```
QDate* q_locale_to_date4(void* self, const char* stringVal, const char* format, void* cal) {
    return QLocale_ToDate4((QLocale*)self, qstring(stringVal), qstring(format), (QCalendar*)cal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDateTime)
///
/// ``` QLocale* self, const char* stringVal, const char* format, QCalendar* cal ```
QDateTime* q_locale_to_date_time4(void* self, const char* stringVal, const char* format, void* cal) {
    return QLocale_ToDateTime4((QLocale*)self, qstring(stringVal), qstring(format), (QCalendar*)cal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#decimalPoint)
///
/// ``` QLocale* self ```
const char* q_locale_decimal_point(void* self) {
    libqt_string _str = QLocale_DecimalPoint((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#groupSeparator)
///
/// ``` QLocale* self ```
const char* q_locale_group_separator(void* self) {
    libqt_string _str = QLocale_GroupSeparator((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#percent)
///
/// ``` QLocale* self ```
const char* q_locale_percent(void* self) {
    libqt_string _str = QLocale_Percent((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#zeroDigit)
///
/// ``` QLocale* self ```
const char* q_locale_zero_digit(void* self) {
    libqt_string _str = QLocale_ZeroDigit((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#negativeSign)
///
/// ``` QLocale* self ```
const char* q_locale_negative_sign(void* self) {
    libqt_string _str = QLocale_NegativeSign((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#positiveSign)
///
/// ``` QLocale* self ```
const char* q_locale_positive_sign(void* self) {
    libqt_string _str = QLocale_PositiveSign((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#exponential)
///
/// ``` QLocale* self ```
const char* q_locale_exponential(void* self) {
    libqt_string _str = QLocale_Exponential((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#monthName)
///
/// ``` QLocale* self, int param1 ```
const char* q_locale_month_name(void* self, int param1) {
    libqt_string _str = QLocale_MonthName((QLocale*)self, param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#standaloneMonthName)
///
/// ``` QLocale* self, int param1 ```
const char* q_locale_standalone_month_name(void* self, int param1) {
    libqt_string _str = QLocale_StandaloneMonthName((QLocale*)self, param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#dayName)
///
/// ``` QLocale* self, int param1 ```
const char* q_locale_day_name(void* self, int param1) {
    libqt_string _str = QLocale_DayName((QLocale*)self, param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#standaloneDayName)
///
/// ``` QLocale* self, int param1 ```
const char* q_locale_standalone_day_name(void* self, int param1) {
    libqt_string _str = QLocale_StandaloneDayName((QLocale*)self, param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#firstDayOfWeek)
///
/// ``` QLocale* self ```
int64_t q_locale_first_day_of_week(void* self) {
    return QLocale_FirstDayOfWeek((QLocale*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#weekdays)
///
/// ``` QLocale* self ```
libqt_list /* of int64_t */ q_locale_weekdays(void* self) {
    libqt_list _arr = QLocale_Weekdays((QLocale*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#amText)
///
/// ``` QLocale* self ```
const char* q_locale_am_text(void* self) {
    libqt_string _str = QLocale_AmText((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#pmText)
///
/// ``` QLocale* self ```
const char* q_locale_pm_text(void* self) {
    libqt_string _str = QLocale_PmText((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#measurementSystem)
///
/// ``` QLocale* self ```
int64_t q_locale_measurement_system(void* self) {
    return QLocale_MeasurementSystem((QLocale*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#collation)
///
/// ``` QLocale* self ```
QLocale* q_locale_collation(void* self) {
    return QLocale_Collation((QLocale*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#textDirection)
///
/// ``` QLocale* self ```
int64_t q_locale_text_direction(void* self) {
    return QLocale_TextDirection((QLocale*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toUpper)
///
/// ``` QLocale* self, const char* str ```
const char* q_locale_to_upper(void* self, const char* str) {
    libqt_string _str = QLocale_ToUpper((QLocale*)self, qstring(str));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toLower)
///
/// ``` QLocale* self, const char* str ```
const char* q_locale_to_lower(void* self, const char* str) {
    libqt_string _str = QLocale_ToLower((QLocale*)self, qstring(str));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#currencySymbol)
///
/// ``` QLocale* self ```
const char* q_locale_currency_symbol(void* self) {
    libqt_string _str = QLocale_CurrencySymbol((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// ``` QLocale* self, long long param1 ```
const char* q_locale_to_currency_string(void* self, long long param1) {
    libqt_string _str = QLocale_ToCurrencyString((QLocale*)self, param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// ``` QLocale* self, uint64_t param1 ```
const char* q_locale_to_currency_string_with_unsignedlonglong(void* self, uint64_t param1) {
    libqt_string _str = QLocale_ToCurrencyStringWithUnsignedlonglong((QLocale*)self, param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// ``` QLocale* self, short i ```
const char* q_locale_to_currency_string_with_short(void* self, short i) {
    libqt_string _str = QLocale_ToCurrencyStringWithShort((QLocale*)self, i);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// ``` QLocale* self, unsigned short i ```
const char* q_locale_to_currency_string_with_ushort(void* self, unsigned short i) {
    libqt_string _str = QLocale_ToCurrencyStringWithUshort((QLocale*)self, i);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// ``` QLocale* self, int i ```
const char* q_locale_to_currency_string_with_int(void* self, int i) {
    libqt_string _str = QLocale_ToCurrencyStringWithInt((QLocale*)self, i);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// ``` QLocale* self, uint32_t i ```
const char* q_locale_to_currency_string_with_uint(void* self, uint32_t i) {
    libqt_string _str = QLocale_ToCurrencyStringWithUint((QLocale*)self, i);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// ``` QLocale* self, double param1 ```
const char* q_locale_to_currency_string_with_double(void* self, double param1) {
    libqt_string _str = QLocale_ToCurrencyStringWithDouble((QLocale*)self, param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// ``` QLocale* self, float i ```
const char* q_locale_to_currency_string_with_float(void* self, float i) {
    libqt_string _str = QLocale_ToCurrencyStringWithFloat((QLocale*)self, i);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#formattedDataSize)
///
/// ``` QLocale* self, long long bytes ```
const char* q_locale_formatted_data_size(void* self, long long bytes) {
    libqt_string _str = QLocale_FormattedDataSize((QLocale*)self, bytes);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#uiLanguages)
///
/// ``` QLocale* self ```
const char** q_locale_ui_languages(void* self) {
    libqt_list _arr = QLocale_UiLanguages((QLocale*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#languageToCode)
///
/// ``` enum QLocale__Language language ```
const char* q_locale_language_to_code(int64_t language) {
    libqt_string _str = QLocale_LanguageToCode(language);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#territoryToCode)
///
/// ``` enum QLocale__Country territory ```
const char* q_locale_territory_to_code(int64_t territory) {
    libqt_string _str = QLocale_TerritoryToCode(territory);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#countryToCode)
///
/// ``` enum QLocale__Country country ```
const char* q_locale_country_to_code(int64_t country) {
    libqt_string _str = QLocale_CountryToCode(country);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#scriptToCode)
///
/// ``` enum QLocale__Script script ```
const char* q_locale_script_to_code(int64_t script) {
    libqt_string _str = QLocale_ScriptToCode(script);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#languageToString)
///
/// ``` enum QLocale__Language language ```
const char* q_locale_language_to_string(int64_t language) {
    libqt_string _str = QLocale_LanguageToString(language);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#territoryToString)
///
/// ``` enum QLocale__Country territory ```
const char* q_locale_territory_to_string(int64_t territory) {
    libqt_string _str = QLocale_TerritoryToString(territory);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#countryToString)
///
/// ``` enum QLocale__Country country ```
const char* q_locale_country_to_string(int64_t country) {
    libqt_string _str = QLocale_CountryToString(country);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#scriptToString)
///
/// ``` enum QLocale__Script script ```
const char* q_locale_script_to_string(int64_t script) {
    libqt_string _str = QLocale_ScriptToString(script);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#setDefault)
///
/// ``` QLocale* locale ```
void q_locale_set_default(void* locale) {
    QLocale_SetDefault((QLocale*)locale);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#c)
///
///
QLocale* q_locale_c() {
    return QLocale_C();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#system)
///
///
QLocale* q_locale_system() {
    return QLocale_System();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#matchingLocales)
///
/// ``` enum QLocale__Language language, enum QLocale__Script script, enum QLocale__Country territory ```
libqt_list /* of QLocale* */ q_locale_matching_locales(int64_t language, int64_t script, int64_t territory) {
    libqt_list _arr = QLocale_MatchingLocales(language, script, territory);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#countriesForLanguage)
///
/// ``` enum QLocale__Language lang ```
libqt_list /* of int64_t */ q_locale_countries_for_language(int64_t lang) {
    libqt_list _arr = QLocale_CountriesForLanguage(lang);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#setNumberOptions)
///
/// ``` QLocale* self, int options ```
void q_locale_set_number_options(void* self, int64_t options) {
    QLocale_SetNumberOptions((QLocale*)self, options);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#numberOptions)
///
/// ``` QLocale* self ```
int64_t q_locale_number_options(void* self) {
    return QLocale_NumberOptions((QLocale*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#quoteString)
///
/// ``` QLocale* self, const char* str ```
const char* q_locale_quote_string(void* self, const char* str) {
    libqt_string _str = QLocale_QuoteString((QLocale*)self, qstring(str));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#createSeparatedList)
///
/// ``` QLocale* self, const char* strl[] ```
const char* q_locale_create_separated_list(void* self, const char* strl[]) {
    size_t strl_len = libqt_strv_length(strl);
    libqt_string* strl_qstr = malloc(strl_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < strl_len; ++_i) {
        strl_qstr[_i] = qstring(strl[_i]);
    }
    libqt_list strl_list = qstrlist(strl_qstr, strl_len);
    libqt_string _str = QLocale_CreateSeparatedList((QLocale*)self, strl_list);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toShort)
///
/// ``` QLocale* self, const char* s, bool* ok ```
short q_locale_to_short2(void* self, const char* s, bool* ok) {
    return QLocale_ToShort2((QLocale*)self, qstring(s), (bool*)ok);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toUShort)
///
/// ``` QLocale* self, const char* s, bool* ok ```
unsigned short q_locale_to_u_short2(void* self, const char* s, bool* ok) {
    return QLocale_ToUShort2((QLocale*)self, qstring(s), (bool*)ok);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toInt)
///
/// ``` QLocale* self, const char* s, bool* ok ```
int32_t q_locale_to_int2(void* self, const char* s, bool* ok) {
    return QLocale_ToInt2((QLocale*)self, qstring(s), (bool*)ok);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toUInt)
///
/// ``` QLocale* self, const char* s, bool* ok ```
uint32_t q_locale_to_u_int2(void* self, const char* s, bool* ok) {
    return QLocale_ToUInt2((QLocale*)self, qstring(s), (bool*)ok);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toLong)
///
/// ``` QLocale* self, const char* s, bool* ok ```
int64_t q_locale_to_long2(void* self, const char* s, bool* ok) {
    return QLocale_ToLong2((QLocale*)self, qstring(s), (bool*)ok);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toULong)
///
/// ``` QLocale* self, const char* s, bool* ok ```
uint64_t q_locale_to_u_long2(void* self, const char* s, bool* ok) {
    return QLocale_ToULong2((QLocale*)self, qstring(s), (bool*)ok);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toLongLong)
///
/// ``` QLocale* self, const char* s, bool* ok ```
long long q_locale_to_long_long2(void* self, const char* s, bool* ok) {
    return QLocale_ToLongLong2((QLocale*)self, qstring(s), (bool*)ok);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toULongLong)
///
/// ``` QLocale* self, const char* s, bool* ok ```
uint64_t q_locale_to_u_long_long2(void* self, const char* s, bool* ok) {
    return QLocale_ToULongLong2((QLocale*)self, qstring(s), (bool*)ok);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toFloat)
///
/// ``` QLocale* self, const char* s, bool* ok ```
float q_locale_to_float2(void* self, const char* s, bool* ok) {
    return QLocale_ToFloat2((QLocale*)self, qstring(s), (bool*)ok);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDouble)
///
/// ``` QLocale* self, const char* s, bool* ok ```
double q_locale_to_double2(void* self, const char* s, bool* ok) {
    return QLocale_ToDouble2((QLocale*)self, qstring(s), (bool*)ok);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// ``` QLocale* self, double f, char format ```
const char* q_locale_to_string22(void* self, double f, char format) {
    libqt_string _str = QLocale_ToString22((QLocale*)self, f, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// ``` QLocale* self, double f, char format, int precision ```
const char* q_locale_to_string32(void* self, double f, char format, int precision) {
    libqt_string _str = QLocale_ToString32((QLocale*)self, f, format, precision);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// ``` QLocale* self, float f, char format ```
const char* q_locale_to_string23(void* self, float f, char format) {
    libqt_string _str = QLocale_ToString23((QLocale*)self, f, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// ``` QLocale* self, float f, char format, int precision ```
const char* q_locale_to_string33(void* self, float f, char format, int precision) {
    libqt_string _str = QLocale_ToString33((QLocale*)self, f, format, precision);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// ``` QLocale* self, QDate* date, enum QLocale__FormatType format ```
const char* q_locale_to_string24(void* self, void* date, int64_t format) {
    libqt_string _str = QLocale_ToString24((QLocale*)self, (QDate*)date, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// ``` QLocale* self, QTime* time, enum QLocale__FormatType format ```
const char* q_locale_to_string25(void* self, void* time, int64_t format) {
    libqt_string _str = QLocale_ToString25((QLocale*)self, (QTime*)time, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// ``` QLocale* self, QDateTime* dateTime, enum QLocale__FormatType format ```
const char* q_locale_to_string26(void* self, void* dateTime, int64_t format) {
    libqt_string _str = QLocale_ToString26((QLocale*)self, (QDateTime*)dateTime, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#dateFormat)
///
/// ``` QLocale* self, enum QLocale__FormatType format ```
const char* q_locale_date_format1(void* self, int64_t format) {
    libqt_string _str = QLocale_DateFormat1((QLocale*)self, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#timeFormat)
///
/// ``` QLocale* self, enum QLocale__FormatType format ```
const char* q_locale_time_format1(void* self, int64_t format) {
    libqt_string _str = QLocale_TimeFormat1((QLocale*)self, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#dateTimeFormat)
///
/// ``` QLocale* self, enum QLocale__FormatType format ```
const char* q_locale_date_time_format1(void* self, int64_t format) {
    libqt_string _str = QLocale_DateTimeFormat1((QLocale*)self, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDate)
///
/// ``` QLocale* self, const char* stringVal, enum QLocale__FormatType param2 ```
QDate* q_locale_to_date22(void* self, const char* stringVal, int64_t param2) {
    return QLocale_ToDate22((QLocale*)self, qstring(stringVal), param2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toTime)
///
/// ``` QLocale* self, const char* stringVal, enum QLocale__FormatType param2 ```
QTime* q_locale_to_time22(void* self, const char* stringVal, int64_t param2) {
    return QLocale_ToTime22((QLocale*)self, qstring(stringVal), param2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDateTime)
///
/// ``` QLocale* self, const char* stringVal, enum QLocale__FormatType format ```
QDateTime* q_locale_to_date_time22(void* self, const char* stringVal, int64_t format) {
    return QLocale_ToDateTime22((QLocale*)self, qstring(stringVal), format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#monthName)
///
/// ``` QLocale* self, int param1, enum QLocale__FormatType format ```
const char* q_locale_month_name2(void* self, int param1, int64_t format) {
    libqt_string _str = QLocale_MonthName2((QLocale*)self, param1, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#standaloneMonthName)
///
/// ``` QLocale* self, int param1, enum QLocale__FormatType format ```
const char* q_locale_standalone_month_name2(void* self, int param1, int64_t format) {
    libqt_string _str = QLocale_StandaloneMonthName2((QLocale*)self, param1, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#dayName)
///
/// ``` QLocale* self, int param1, enum QLocale__FormatType format ```
const char* q_locale_day_name2(void* self, int param1, int64_t format) {
    libqt_string _str = QLocale_DayName2((QLocale*)self, param1, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#standaloneDayName)
///
/// ``` QLocale* self, int param1, enum QLocale__FormatType format ```
const char* q_locale_standalone_day_name2(void* self, int param1, int64_t format) {
    libqt_string _str = QLocale_StandaloneDayName2((QLocale*)self, param1, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#currencySymbol)
///
/// ``` QLocale* self, enum QLocale__CurrencySymbolFormat param1 ```
const char* q_locale_currency_symbol1(void* self, int64_t param1) {
    libqt_string _str = QLocale_CurrencySymbol1((QLocale*)self, param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// ``` QLocale* self, long long param1, const char* symbol ```
const char* q_locale_to_currency_string2(void* self, long long param1, const char* symbol) {
    libqt_string _str = QLocale_ToCurrencyString2((QLocale*)self, param1, qstring(symbol));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// ``` QLocale* self, uint64_t param1, const char* symbol ```
const char* q_locale_to_currency_string22(void* self, uint64_t param1, const char* symbol) {
    libqt_string _str = QLocale_ToCurrencyString22((QLocale*)self, param1, qstring(symbol));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// ``` QLocale* self, short i, const char* symbol ```
const char* q_locale_to_currency_string23(void* self, short i, const char* symbol) {
    libqt_string _str = QLocale_ToCurrencyString23((QLocale*)self, i, qstring(symbol));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// ``` QLocale* self, unsigned short i, const char* symbol ```
const char* q_locale_to_currency_string24(void* self, unsigned short i, const char* symbol) {
    libqt_string _str = QLocale_ToCurrencyString24((QLocale*)self, i, qstring(symbol));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// ``` QLocale* self, int i, const char* symbol ```
const char* q_locale_to_currency_string25(void* self, int i, const char* symbol) {
    libqt_string _str = QLocale_ToCurrencyString25((QLocale*)self, i, qstring(symbol));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// ``` QLocale* self, uint32_t i, const char* symbol ```
const char* q_locale_to_currency_string26(void* self, uint32_t i, const char* symbol) {
    libqt_string _str = QLocale_ToCurrencyString26((QLocale*)self, i, qstring(symbol));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// ``` QLocale* self, double param1, const char* symbol ```
const char* q_locale_to_currency_string27(void* self, double param1, const char* symbol) {
    libqt_string _str = QLocale_ToCurrencyString27((QLocale*)self, param1, qstring(symbol));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// ``` QLocale* self, double param1, const char* symbol, int precision ```
const char* q_locale_to_currency_string3(void* self, double param1, const char* symbol, int precision) {
    libqt_string _str = QLocale_ToCurrencyString3((QLocale*)self, param1, qstring(symbol), precision);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// ``` QLocale* self, float i, const char* symbol ```
const char* q_locale_to_currency_string28(void* self, float i, const char* symbol) {
    libqt_string _str = QLocale_ToCurrencyString28((QLocale*)self, i, qstring(symbol));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// ``` QLocale* self, float i, const char* symbol, int precision ```
const char* q_locale_to_currency_string32(void* self, float i, const char* symbol, int precision) {
    libqt_string _str = QLocale_ToCurrencyString32((QLocale*)self, i, qstring(symbol), precision);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#formattedDataSize)
///
/// ``` QLocale* self, long long bytes, int precision ```
const char* q_locale_formatted_data_size2(void* self, long long bytes, int precision) {
    libqt_string _str = QLocale_FormattedDataSize2((QLocale*)self, bytes, precision);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#formattedDataSize)
///
/// ``` QLocale* self, long long bytes, int precision, int format ```
const char* q_locale_formatted_data_size3(void* self, long long bytes, int precision, int64_t format) {
    libqt_string _str = QLocale_FormattedDataSize3((QLocale*)self, bytes, precision, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#languageToCode)
///
/// ``` enum QLocale__Language language, int codeTypes ```
const char* q_locale_language_to_code2(int64_t language, int64_t codeTypes) {
    libqt_string _str = QLocale_LanguageToCode2(language, codeTypes);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#quoteString)
///
/// ``` QLocale* self, const char* str, enum QLocale__QuotationStyle style ```
const char* q_locale_quote_string2(void* self, const char* str, int64_t style) {
    libqt_string _str = QLocale_QuoteString2((QLocale*)self, qstring(str), style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QLocale* self ```
void q_locale_delete(void* self) {
    QLocale_Delete((QLocale*)(self));
}