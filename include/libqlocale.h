#pragma once
#ifndef SRCQT6C_LIBQLOCALE_H
#define SRCQT6C_LIBQLOCALE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qlocale.html

/// q_locale_new constructs a new QLocale object.
///
QLocale* q_locale_new();

/// q_locale_new2 constructs a new QLocale object.
///
/// @param name const char*
QLocale* q_locale_new2(const char* name);

/// q_locale_new3 constructs a new QLocale object.
///
/// @param language enum QLocale__Language
/// @param territory enum QLocale__Country
QLocale* q_locale_new3(uint16_t language, uint16_t territory);

/// q_locale_new4 constructs a new QLocale object.
///
/// @param language enum QLocale__Language
QLocale* q_locale_new4(uint16_t language);

/// q_locale_new5 constructs a new QLocale object.
///
/// @param other QLocale*
QLocale* q_locale_new5(void* other);

/// q_locale_new6 constructs a new QLocale object.
///
/// @param language enum QLocale__Language
/// @param script enum QLocale__Script
QLocale* q_locale_new6(uint16_t language, uint16_t script);

/// q_locale_new7 constructs a new QLocale object.
///
/// @param language enum QLocale__Language
/// @param script enum QLocale__Script
/// @param territory enum QLocale__Country
QLocale* q_locale_new7(uint16_t language, uint16_t script, uint16_t territory);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#operator-eq)
///
/// @param self QLocale*
/// @param other QLocale*
void q_locale_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#swap)
///
/// @param self QLocale*
/// @param other QLocale*
void q_locale_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#language)
///
/// @param self QLocale*
///
/// @return enum QLocale__Language
uint16_t q_locale_language(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#script)
///
/// @param self QLocale*
///
/// @return enum QLocale__Script
uint16_t q_locale_script(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#territory)
///
/// @param self QLocale*
///
/// @return enum QLocale__Country
uint16_t q_locale_territory(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#country)
///
/// @param self QLocale*
///
/// @return enum QLocale__Country
uint16_t q_locale_country(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
const char* q_locale_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#bcp47Name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
const char* q_locale_bcp47_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#nativeLanguageName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
const char* q_locale_native_language_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#nativeTerritoryName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
const char* q_locale_native_territory_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#nativeCountryName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
const char* q_locale_native_country_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toShort)
///
/// @param self QLocale*
/// @param s const char*
short q_locale_to_short(void* self, const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toUShort)
///
/// @param self QLocale*
/// @param s const char*
unsigned short q_locale_to_u_short(void* self, const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toInt)
///
/// @param self QLocale*
/// @param s const char*
int32_t q_locale_to_int(void* self, const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toUInt)
///
/// @param self QLocale*
/// @param s const char*
uint32_t q_locale_to_u_int(void* self, const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toLong)
///
/// @param self QLocale*
/// @param s const char*
int64_t q_locale_to_long(void* self, const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toULong)
///
/// @param self QLocale*
/// @param s const char*
uint64_t q_locale_to_u_long(void* self, const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toLongLong)
///
/// @param self QLocale*
/// @param s const char*
long long q_locale_to_long_long(void* self, const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toULongLong)
///
/// @param self QLocale*
/// @param s const char*
uint64_t q_locale_to_u_long_long(void* self, const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toFloat)
///
/// @param self QLocale*
/// @param s const char*
float q_locale_to_float(void* self, const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDouble)
///
/// @param self QLocale*
/// @param s const char*
double q_locale_to_double(void* self, const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param i long long
const char* q_locale_to_string(void* self, long long i);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param i uint64_t
const char* q_locale_to_string2(void* self, uint64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param i int64_t
const char* q_locale_to_string3(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param i uint64_t
const char* q_locale_to_string4(void* self, uint64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param i short
const char* q_locale_to_string5(void* self, short i);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param i unsigned short
const char* q_locale_to_string6(void* self, unsigned short i);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param i int
const char* q_locale_to_string7(void* self, int i);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param i uint32_t
const char* q_locale_to_string8(void* self, uint32_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param f double
const char* q_locale_to_string9(void* self, double f);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param f float
const char* q_locale_to_string10(void* self, float f);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param date QDate*
/// @param format const char*
const char* q_locale_to_string11(void* self, void* date, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param time QTime*
/// @param format const char*
const char* q_locale_to_string12(void* self, void* time, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param dateTime QDateTime*
/// @param format const char*
const char* q_locale_to_string13(void* self, void* dateTime, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param date QDate*
const char* q_locale_to_string17(void* self, void* date);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param time QTime*
const char* q_locale_to_string18(void* self, void* time);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param dateTime QDateTime*
const char* q_locale_to_string19(void* self, void* dateTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param date QDate*
/// @param format enum QLocale__FormatType
/// @param cal QCalendar*
const char* q_locale_to_string21(void* self, void* date, int32_t format, void* cal);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param dateTime QDateTime*
/// @param format enum QLocale__FormatType
/// @param cal QCalendar*
const char* q_locale_to_string22(void* self, void* dateTime, int32_t format, void* cal);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#dateFormat)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
const char* q_locale_date_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#timeFormat)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
const char* q_locale_time_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#dateTimeFormat)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
const char* q_locale_date_time_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toTime)
///
/// @param self QLocale*
/// @param stringVal const char*
QTime* q_locale_to_time(void* self, const char* stringVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toTime)
///
/// @param self QLocale*
/// @param stringVal const char*
/// @param format const char*
QTime* q_locale_to_time2(void* self, const char* stringVal, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDate)
///
/// @param self QLocale*
/// @param stringVal const char*
QDate* q_locale_to_date(void* self, const char* stringVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDate)
///
/// @param self QLocale*
/// @param stringVal const char*
/// @param format const char*
QDate* q_locale_to_date2(void* self, const char* stringVal, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDateTime)
///
/// @param self QLocale*
/// @param stringVal const char*
QDateTime* q_locale_to_date_time(void* self, const char* stringVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDateTime)
///
/// @param self QLocale*
/// @param stringVal const char*
/// @param format const char*
QDateTime* q_locale_to_date_time2(void* self, const char* stringVal, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDate)
///
/// @param self QLocale*
/// @param stringVal const char*
/// @param format enum QLocale__FormatType
/// @param cal QCalendar*
QDate* q_locale_to_date3(void* self, const char* stringVal, int32_t format, void* cal);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDate)
///
/// @param self QLocale*
/// @param stringVal const char*
/// @param format const char*
/// @param cal QCalendar*
QDate* q_locale_to_date4(void* self, const char* stringVal, const char* format, void* cal);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDateTime)
///
/// @param self QLocale*
/// @param stringVal const char*
/// @param format enum QLocale__FormatType
/// @param cal QCalendar*
QDateTime* q_locale_to_date_time3(void* self, const char* stringVal, int32_t format, void* cal);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDateTime)
///
/// @param self QLocale*
/// @param stringVal const char*
/// @param format const char*
/// @param cal QCalendar*
QDateTime* q_locale_to_date_time4(void* self, const char* stringVal, const char* format, void* cal);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#decimalPoint)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
const char* q_locale_decimal_point(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#groupSeparator)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
const char* q_locale_group_separator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#percent)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
const char* q_locale_percent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#zeroDigit)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
const char* q_locale_zero_digit(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#negativeSign)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
const char* q_locale_negative_sign(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#positiveSign)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
const char* q_locale_positive_sign(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#exponential)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
const char* q_locale_exponential(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#monthName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param param1 int
const char* q_locale_month_name(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#standaloneMonthName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param param1 int
const char* q_locale_standalone_month_name(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#dayName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param param1 int
const char* q_locale_day_name(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#standaloneDayName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param param1 int
const char* q_locale_standalone_day_name(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#firstDayOfWeek)
///
/// @param self QLocale*
///
/// @return enum Qt__DayOfWeek
int32_t q_locale_first_day_of_week(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#weekdays)
///
/// @param self QLocale*
///
/// @return libqt_list of enum Qt__DayOfWeek
libqt_list /* of int32_t */ q_locale_weekdays(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#amText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
const char* q_locale_am_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#pmText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
const char* q_locale_pm_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#measurementSystem)
///
/// @param self QLocale*
///
/// @return enum QLocale__MeasurementSystem
int32_t q_locale_measurement_system(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#collation)
///
/// @param self QLocale*
QLocale* q_locale_collation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#textDirection)
///
/// @param self QLocale*
///
/// @return enum Qt__LayoutDirection
int32_t q_locale_text_direction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toUpper)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param str const char*
const char* q_locale_to_upper(void* self, const char* str);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toLower)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param str const char*
const char* q_locale_to_lower(void* self, const char* str);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#currencySymbol)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
const char* q_locale_currency_symbol(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param param1 long long
const char* q_locale_to_currency_string(void* self, long long param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param param1 uint64_t
const char* q_locale_to_currency_string2(void* self, uint64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param i short
const char* q_locale_to_currency_string3(void* self, short i);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param i unsigned short
const char* q_locale_to_currency_string4(void* self, unsigned short i);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param i int
const char* q_locale_to_currency_string5(void* self, int i);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param i uint32_t
const char* q_locale_to_currency_string6(void* self, uint32_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param param1 double
const char* q_locale_to_currency_string7(void* self, double param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param i float
const char* q_locale_to_currency_string8(void* self, float i);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#formattedDataSize)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param bytes long long
const char* q_locale_formatted_data_size(void* self, long long bytes);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#uiLanguages)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
const char** q_locale_ui_languages(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#languageToCode)
///
/// Caller is responsible for freeing the returned memory
///
/// @param language enum QLocale__Language
const char* q_locale_language_to_code(uint16_t language);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#territoryToCode)
///
/// Caller is responsible for freeing the returned memory
///
/// @param territory enum QLocale__Country
const char* q_locale_territory_to_code(uint16_t territory);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#countryToCode)
///
/// Caller is responsible for freeing the returned memory
///
/// @param country enum QLocale__Country
const char* q_locale_country_to_code(uint16_t country);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#scriptToCode)
///
/// Caller is responsible for freeing the returned memory
///
/// @param script enum QLocale__Script
const char* q_locale_script_to_code(uint16_t script);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#languageToString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param language enum QLocale__Language
const char* q_locale_language_to_string(uint16_t language);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#territoryToString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param territory enum QLocale__Country
const char* q_locale_territory_to_string(uint16_t territory);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#countryToString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param country enum QLocale__Country
const char* q_locale_country_to_string(uint16_t country);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#scriptToString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param script enum QLocale__Script
const char* q_locale_script_to_string(uint16_t script);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#setDefault)
///
/// @param locale QLocale*
void q_locale_set_default(void* locale);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#c)
///
QLocale* q_locale_c();

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#system)
///
QLocale* q_locale_system();

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#matchingLocales)
///
/// @param language enum QLocale__Language
/// @param script enum QLocale__Script
/// @param territory enum QLocale__Country
libqt_list /* of QLocale* */ q_locale_matching_locales(uint16_t language, uint16_t script, uint16_t territory);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#countriesForLanguage)
///
/// @param lang enum QLocale__Language
///
/// @return libqt_list of enum QLocale__Country
libqt_list /* of uint16_t */ q_locale_countries_for_language(uint16_t lang);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#setNumberOptions)
///
/// @param self QLocale*
/// @param options flag of enum QLocale__NumberOption
void q_locale_set_number_options(void* self, int32_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#numberOptions)
///
/// @param self QLocale*
///
/// @return flag of enum QLocale__NumberOption
int32_t q_locale_number_options(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#quoteString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param str const char*
const char* q_locale_quote_string(void* self, const char* str);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#createSeparatedList)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param strl const char**
const char* q_locale_create_separated_list(void* self, const char* strl[static 1]);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param separator enum QLocale__TagSeparator
const char* q_locale_name1(void* self, int8_t separator);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#bcp47Name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param separator enum QLocale__TagSeparator
const char* q_locale_bcp47_name1(void* self, int8_t separator);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toShort)
///
/// @param self QLocale*
/// @param s const char*
/// @param ok bool*
short q_locale_to_short22(void* self, const char* s, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toUShort)
///
/// @param self QLocale*
/// @param s const char*
/// @param ok bool*
unsigned short q_locale_to_u_short22(void* self, const char* s, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toInt)
///
/// @param self QLocale*
/// @param s const char*
/// @param ok bool*
int32_t q_locale_to_int22(void* self, const char* s, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toUInt)
///
/// @param self QLocale*
/// @param s const char*
/// @param ok bool*
uint32_t q_locale_to_u_int22(void* self, const char* s, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toLong)
///
/// @param self QLocale*
/// @param s const char*
/// @param ok bool*
int64_t q_locale_to_long22(void* self, const char* s, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toULong)
///
/// @param self QLocale*
/// @param s const char*
/// @param ok bool*
uint64_t q_locale_to_u_long22(void* self, const char* s, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toLongLong)
///
/// @param self QLocale*
/// @param s const char*
/// @param ok bool*
long long q_locale_to_long_long22(void* self, const char* s, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toULongLong)
///
/// @param self QLocale*
/// @param s const char*
/// @param ok bool*
uint64_t q_locale_to_u_long_long22(void* self, const char* s, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toFloat)
///
/// @param self QLocale*
/// @param s const char*
/// @param ok bool*
float q_locale_to_float22(void* self, const char* s, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDouble)
///
/// @param self QLocale*
/// @param s const char*
/// @param ok bool*
double q_locale_to_double22(void* self, const char* s, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param f double
/// @param format char
const char* q_locale_to_string24(void* self, double f, char format);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param f double
/// @param format char
/// @param precision int
const char* q_locale_to_string32(void* self, double f, char format, int precision);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param f float
/// @param format char
const char* q_locale_to_string25(void* self, float f, char format);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param f float
/// @param format char
/// @param precision int
const char* q_locale_to_string33(void* self, float f, char format, int precision);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param date QDate*
/// @param format enum QLocale__FormatType
const char* q_locale_to_string26(void* self, void* date, int32_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param time QTime*
/// @param format enum QLocale__FormatType
const char* q_locale_to_string27(void* self, void* time, int32_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param dateTime QDateTime*
/// @param format enum QLocale__FormatType
const char* q_locale_to_string28(void* self, void* dateTime, int32_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#dateFormat)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param format enum QLocale__FormatType
const char* q_locale_date_format1(void* self, int32_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#timeFormat)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param format enum QLocale__FormatType
const char* q_locale_time_format1(void* self, int32_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#dateTimeFormat)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param format enum QLocale__FormatType
const char* q_locale_date_time_format1(void* self, int32_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toTime)
///
/// @param self QLocale*
/// @param stringVal const char*
/// @param param2 enum QLocale__FormatType
QTime* q_locale_to_time22(void* self, const char* stringVal, int32_t param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDate)
///
/// @param self QLocale*
/// @param stringVal const char*
/// @param param2 enum QLocale__FormatType
QDate* q_locale_to_date22(void* self, const char* stringVal, int32_t param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDate)
///
/// @param self QLocale*
/// @param stringVal const char*
/// @param param2 enum QLocale__FormatType
/// @param baseYear int
QDate* q_locale_to_date32(void* self, const char* stringVal, int32_t param2, int baseYear);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDate)
///
/// @param self QLocale*
/// @param stringVal const char*
/// @param format const char*
/// @param baseYear int
QDate* q_locale_to_date33(void* self, const char* stringVal, const char* format, int baseYear);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDateTime)
///
/// @param self QLocale*
/// @param stringVal const char*
/// @param format enum QLocale__FormatType
QDateTime* q_locale_to_date_time22(void* self, const char* stringVal, int32_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDateTime)
///
/// @param self QLocale*
/// @param stringVal const char*
/// @param format enum QLocale__FormatType
/// @param baseYear int
QDateTime* q_locale_to_date_time32(void* self, const char* stringVal, int32_t format, int baseYear);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDateTime)
///
/// @param self QLocale*
/// @param stringVal const char*
/// @param format const char*
/// @param baseYear int
QDateTime* q_locale_to_date_time33(void* self, const char* stringVal, const char* format, int baseYear);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDate)
///
/// @param self QLocale*
/// @param stringVal const char*
/// @param format enum QLocale__FormatType
/// @param cal QCalendar*
/// @param baseYear int
QDate* q_locale_to_date42(void* self, const char* stringVal, int32_t format, void* cal, int baseYear);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDate)
///
/// @param self QLocale*
/// @param stringVal const char*
/// @param format const char*
/// @param cal QCalendar*
/// @param baseYear int
QDate* q_locale_to_date43(void* self, const char* stringVal, const char* format, void* cal, int baseYear);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDateTime)
///
/// @param self QLocale*
/// @param stringVal const char*
/// @param format enum QLocale__FormatType
/// @param cal QCalendar*
/// @param baseYear int
QDateTime* q_locale_to_date_time42(void* self, const char* stringVal, int32_t format, void* cal, int baseYear);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toDateTime)
///
/// @param self QLocale*
/// @param stringVal const char*
/// @param format const char*
/// @param cal QCalendar*
/// @param baseYear int
QDateTime* q_locale_to_date_time43(void* self, const char* stringVal, const char* format, void* cal, int baseYear);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#monthName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param param1 int
/// @param format enum QLocale__FormatType
const char* q_locale_month_name2(void* self, int param1, int32_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#standaloneMonthName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param param1 int
/// @param format enum QLocale__FormatType
const char* q_locale_standalone_month_name2(void* self, int param1, int32_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#dayName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param param1 int
/// @param format enum QLocale__FormatType
const char* q_locale_day_name2(void* self, int param1, int32_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#standaloneDayName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param param1 int
/// @param format enum QLocale__FormatType
const char* q_locale_standalone_day_name2(void* self, int param1, int32_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#currencySymbol)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param param1 enum QLocale__CurrencySymbolFormat
const char* q_locale_currency_symbol1(void* self, int32_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param param1 long long
/// @param symbol const char*
const char* q_locale_to_currency_string22(void* self, long long param1, const char* symbol);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param param1 uint64_t
/// @param symbol const char*
const char* q_locale_to_currency_string23(void* self, uint64_t param1, const char* symbol);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param i short
/// @param symbol const char*
const char* q_locale_to_currency_string24(void* self, short i, const char* symbol);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param i unsigned short
/// @param symbol const char*
const char* q_locale_to_currency_string25(void* self, unsigned short i, const char* symbol);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param i int
/// @param symbol const char*
const char* q_locale_to_currency_string26(void* self, int i, const char* symbol);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param i uint32_t
/// @param symbol const char*
const char* q_locale_to_currency_string27(void* self, uint32_t i, const char* symbol);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param param1 double
/// @param symbol const char*
const char* q_locale_to_currency_string28(void* self, double param1, const char* symbol);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param param1 double
/// @param symbol const char*
/// @param precision int
const char* q_locale_to_currency_string32(void* self, double param1, const char* symbol, int precision);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param i float
/// @param symbol const char*
const char* q_locale_to_currency_string29(void* self, float i, const char* symbol);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#toCurrencyString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param i float
/// @param symbol const char*
/// @param precision int
const char* q_locale_to_currency_string33(void* self, float i, const char* symbol, int precision);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#formattedDataSize)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param bytes long long
/// @param precision int
const char* q_locale_formatted_data_size2(void* self, long long bytes, int precision);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#formattedDataSize)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param bytes long long
/// @param precision int
/// @param format flag of enum QLocale__DataSizeFormat
const char* q_locale_formatted_data_size3(void* self, long long bytes, int precision, int32_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#uiLanguages)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param separator enum QLocale__TagSeparator
const char** q_locale_ui_languages1(void* self, int8_t separator);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#languageToCode)
///
/// Caller is responsible for freeing the returned memory
///
/// @param language enum QLocale__Language
/// @param codeTypes flag of enum QLocale__LanguageCodeType
const char* q_locale_language_to_code2(uint16_t language, int32_t codeTypes);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#quoteString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocale*
/// @param str const char*
/// @param style enum QLocale__QuotationStyle
const char* q_locale_quote_string22(void* self, const char* str, int32_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocale.html#dtor.QLocale)
///
/// Delete this object from C++ memory.
///
/// @param self QLocale*
void q_locale_delete(void* self);

/// https://doc.qt.io/qt-6/qlocale.html#types

typedef enum {
    QLOCALE_LANGUAGE_ANYLANGUAGE = 0,
    QLOCALE_LANGUAGE_C = 1,
    QLOCALE_LANGUAGE_ABKHAZIAN = 2,
    QLOCALE_LANGUAGE_AFAR = 3,
    QLOCALE_LANGUAGE_AFRIKAANS = 4,
    QLOCALE_LANGUAGE_AGHEM = 5,
    QLOCALE_LANGUAGE_AKAN = 6,
    QLOCALE_LANGUAGE_AKKADIAN = 7,
    QLOCALE_LANGUAGE_AKOOSE = 8,
    QLOCALE_LANGUAGE_ALBANIAN = 9,
    QLOCALE_LANGUAGE_AMERICANSIGNLANGUAGE = 10,
    QLOCALE_LANGUAGE_AMHARIC = 11,
    QLOCALE_LANGUAGE_ANCIENTEGYPTIAN = 12,
    QLOCALE_LANGUAGE_ANCIENTGREEK = 13,
    QLOCALE_LANGUAGE_ARABIC = 14,
    QLOCALE_LANGUAGE_ARAGONESE = 15,
    QLOCALE_LANGUAGE_ARAMAIC = 16,
    QLOCALE_LANGUAGE_ARMENIAN = 17,
    QLOCALE_LANGUAGE_ASSAMESE = 18,
    QLOCALE_LANGUAGE_ASTURIAN = 19,
    QLOCALE_LANGUAGE_ASU = 20,
    QLOCALE_LANGUAGE_ATSAM = 21,
    QLOCALE_LANGUAGE_AVARIC = 22,
    QLOCALE_LANGUAGE_AVESTAN = 23,
    QLOCALE_LANGUAGE_AYMARA = 24,
    QLOCALE_LANGUAGE_AZERBAIJANI = 25,
    QLOCALE_LANGUAGE_BAFIA = 26,
    QLOCALE_LANGUAGE_BALINESE = 27,
    QLOCALE_LANGUAGE_BAMBARA = 28,
    QLOCALE_LANGUAGE_BAMUN = 29,
    QLOCALE_LANGUAGE_BANGLA = 30,
    QLOCALE_LANGUAGE_BASAA = 31,
    QLOCALE_LANGUAGE_BASHKIR = 32,
    QLOCALE_LANGUAGE_BASQUE = 33,
    QLOCALE_LANGUAGE_BATAKTOBA = 34,
    QLOCALE_LANGUAGE_BELARUSIAN = 35,
    QLOCALE_LANGUAGE_BEMBA = 36,
    QLOCALE_LANGUAGE_BENA = 37,
    QLOCALE_LANGUAGE_BHOJPURI = 38,
    QLOCALE_LANGUAGE_BISLAMA = 39,
    QLOCALE_LANGUAGE_BLIN = 40,
    QLOCALE_LANGUAGE_BODO = 41,
    QLOCALE_LANGUAGE_BOSNIAN = 42,
    QLOCALE_LANGUAGE_BRETON = 43,
    QLOCALE_LANGUAGE_BUGINESE = 44,
    QLOCALE_LANGUAGE_BULGARIAN = 45,
    QLOCALE_LANGUAGE_BURMESE = 46,
    QLOCALE_LANGUAGE_CANTONESE = 47,
    QLOCALE_LANGUAGE_CATALAN = 48,
    QLOCALE_LANGUAGE_CEBUANO = 49,
    QLOCALE_LANGUAGE_CENTRALATLASTAMAZIGHT = 50,
    QLOCALE_LANGUAGE_CENTRALKURDISH = 51,
    QLOCALE_LANGUAGE_CHAKMA = 52,
    QLOCALE_LANGUAGE_CHAMORRO = 53,
    QLOCALE_LANGUAGE_CHECHEN = 54,
    QLOCALE_LANGUAGE_CHEROKEE = 55,
    QLOCALE_LANGUAGE_CHICKASAW = 56,
    QLOCALE_LANGUAGE_CHIGA = 57,
    QLOCALE_LANGUAGE_CHINESE = 58,
    QLOCALE_LANGUAGE_CHURCH = 59,
    QLOCALE_LANGUAGE_CHUVASH = 60,
    QLOCALE_LANGUAGE_COLOGNIAN = 61,
    QLOCALE_LANGUAGE_COPTIC = 62,
    QLOCALE_LANGUAGE_CORNISH = 63,
    QLOCALE_LANGUAGE_CORSICAN = 64,
    QLOCALE_LANGUAGE_CREE = 65,
    QLOCALE_LANGUAGE_CROATIAN = 66,
    QLOCALE_LANGUAGE_CZECH = 67,
    QLOCALE_LANGUAGE_DANISH = 68,
    QLOCALE_LANGUAGE_DIVEHI = 69,
    QLOCALE_LANGUAGE_DOGRI = 70,
    QLOCALE_LANGUAGE_DUALA = 71,
    QLOCALE_LANGUAGE_DUTCH = 72,
    QLOCALE_LANGUAGE_DZONGKHA = 73,
    QLOCALE_LANGUAGE_EMBU = 74,
    QLOCALE_LANGUAGE_ENGLISH = 75,
    QLOCALE_LANGUAGE_ERZYA = 76,
    QLOCALE_LANGUAGE_ESPERANTO = 77,
    QLOCALE_LANGUAGE_ESTONIAN = 78,
    QLOCALE_LANGUAGE_EWE = 79,
    QLOCALE_LANGUAGE_EWONDO = 80,
    QLOCALE_LANGUAGE_FAROESE = 81,
    QLOCALE_LANGUAGE_FIJIAN = 82,
    QLOCALE_LANGUAGE_FILIPINO = 83,
    QLOCALE_LANGUAGE_FINNISH = 84,
    QLOCALE_LANGUAGE_FRENCH = 85,
    QLOCALE_LANGUAGE_FRIULIAN = 86,
    QLOCALE_LANGUAGE_FULAH = 87,
    QLOCALE_LANGUAGE_GAELIC = 88,
    QLOCALE_LANGUAGE_GA = 89,
    QLOCALE_LANGUAGE_GALICIAN = 90,
    QLOCALE_LANGUAGE_GANDA = 91,
    QLOCALE_LANGUAGE_GEEZ = 92,
    QLOCALE_LANGUAGE_GEORGIAN = 93,
    QLOCALE_LANGUAGE_GERMAN = 94,
    QLOCALE_LANGUAGE_GOTHIC = 95,
    QLOCALE_LANGUAGE_GREEK = 96,
    QLOCALE_LANGUAGE_GUARANI = 97,
    QLOCALE_LANGUAGE_GUJARATI = 98,
    QLOCALE_LANGUAGE_GUSII = 99,
    QLOCALE_LANGUAGE_HAITIAN = 100,
    QLOCALE_LANGUAGE_HAUSA = 101,
    QLOCALE_LANGUAGE_HAWAIIAN = 102,
    QLOCALE_LANGUAGE_HEBREW = 103,
    QLOCALE_LANGUAGE_HERERO = 104,
    QLOCALE_LANGUAGE_HINDI = 105,
    QLOCALE_LANGUAGE_HIRIMOTU = 106,
    QLOCALE_LANGUAGE_HUNGARIAN = 107,
    QLOCALE_LANGUAGE_ICELANDIC = 108,
    QLOCALE_LANGUAGE_IDO = 109,
    QLOCALE_LANGUAGE_IGBO = 110,
    QLOCALE_LANGUAGE_INARISAMI = 111,
    QLOCALE_LANGUAGE_INDONESIAN = 112,
    QLOCALE_LANGUAGE_INGUSH = 113,
    QLOCALE_LANGUAGE_INTERLINGUA = 114,
    QLOCALE_LANGUAGE_INTERLINGUE = 115,
    QLOCALE_LANGUAGE_INUKTITUT = 116,
    QLOCALE_LANGUAGE_INUPIAQ = 117,
    QLOCALE_LANGUAGE_IRISH = 118,
    QLOCALE_LANGUAGE_ITALIAN = 119,
    QLOCALE_LANGUAGE_JAPANESE = 120,
    QLOCALE_LANGUAGE_JAVANESE = 121,
    QLOCALE_LANGUAGE_JJU = 122,
    QLOCALE_LANGUAGE_JOLAFONYI = 123,
    QLOCALE_LANGUAGE_KABUVERDIANU = 124,
    QLOCALE_LANGUAGE_KABYLE = 125,
    QLOCALE_LANGUAGE_KAKO = 126,
    QLOCALE_LANGUAGE_KALAALLISUT = 127,
    QLOCALE_LANGUAGE_KALENJIN = 128,
    QLOCALE_LANGUAGE_KAMBA = 129,
    QLOCALE_LANGUAGE_KANNADA = 130,
    QLOCALE_LANGUAGE_KANURI = 131,
    QLOCALE_LANGUAGE_KASHMIRI = 132,
    QLOCALE_LANGUAGE_KAZAKH = 133,
    QLOCALE_LANGUAGE_KENYANG = 134,
    QLOCALE_LANGUAGE_KHMER = 135,
    QLOCALE_LANGUAGE_KICHE = 136,
    QLOCALE_LANGUAGE_KIKUYU = 137,
    QLOCALE_LANGUAGE_KINYARWANDA = 138,
    QLOCALE_LANGUAGE_KOMI = 139,
    QLOCALE_LANGUAGE_KONGO = 140,
    QLOCALE_LANGUAGE_KONKANI = 141,
    QLOCALE_LANGUAGE_KOREAN = 142,
    QLOCALE_LANGUAGE_KORO = 143,
    QLOCALE_LANGUAGE_KOYRABOROSENNI = 144,
    QLOCALE_LANGUAGE_KOYRACHIINI = 145,
    QLOCALE_LANGUAGE_KPELLE = 146,
    QLOCALE_LANGUAGE_KUANYAMA = 147,
    QLOCALE_LANGUAGE_KURDISH = 148,
    QLOCALE_LANGUAGE_KWASIO = 149,
    QLOCALE_LANGUAGE_KYRGYZ = 150,
    QLOCALE_LANGUAGE_LAKOTA = 151,
    QLOCALE_LANGUAGE_LANGI = 152,
    QLOCALE_LANGUAGE_LAO = 153,
    QLOCALE_LANGUAGE_LATIN = 154,
    QLOCALE_LANGUAGE_LATVIAN = 155,
    QLOCALE_LANGUAGE_LEZGHIAN = 156,
    QLOCALE_LANGUAGE_LIMBURGISH = 157,
    QLOCALE_LANGUAGE_LINGALA = 158,
    QLOCALE_LANGUAGE_LITERARYCHINESE = 159,
    QLOCALE_LANGUAGE_LITHUANIAN = 160,
    QLOCALE_LANGUAGE_LOJBAN = 161,
    QLOCALE_LANGUAGE_LOWERSORBIAN = 162,
    QLOCALE_LANGUAGE_LOWGERMAN = 163,
    QLOCALE_LANGUAGE_LUBAKATANGA = 164,
    QLOCALE_LANGUAGE_LULESAMI = 165,
    QLOCALE_LANGUAGE_LUO = 166,
    QLOCALE_LANGUAGE_LUXEMBOURGISH = 167,
    QLOCALE_LANGUAGE_LUYIA = 168,
    QLOCALE_LANGUAGE_MACEDONIAN = 169,
    QLOCALE_LANGUAGE_MACHAME = 170,
    QLOCALE_LANGUAGE_MAITHILI = 171,
    QLOCALE_LANGUAGE_MAKHUWAMEETTO = 172,
    QLOCALE_LANGUAGE_MAKONDE = 173,
    QLOCALE_LANGUAGE_MALAGASY = 174,
    QLOCALE_LANGUAGE_MALAYALAM = 175,
    QLOCALE_LANGUAGE_MALAY = 176,
    QLOCALE_LANGUAGE_MALTESE = 177,
    QLOCALE_LANGUAGE_MANDINGO = 178,
    QLOCALE_LANGUAGE_MANIPURI = 179,
    QLOCALE_LANGUAGE_MANX = 180,
    QLOCALE_LANGUAGE_MAORI = 181,
    QLOCALE_LANGUAGE_MAPUCHE = 182,
    QLOCALE_LANGUAGE_MARATHI = 183,
    QLOCALE_LANGUAGE_MARSHALLESE = 184,
    QLOCALE_LANGUAGE_MASAI = 185,
    QLOCALE_LANGUAGE_MAZANDERANI = 186,
    QLOCALE_LANGUAGE_MENDE = 187,
    QLOCALE_LANGUAGE_MERU = 188,
    QLOCALE_LANGUAGE_META = 189,
    QLOCALE_LANGUAGE_MOHAWK = 190,
    QLOCALE_LANGUAGE_MONGOLIAN = 191,
    QLOCALE_LANGUAGE_MORISYEN = 192,
    QLOCALE_LANGUAGE_MUNDANG = 193,
    QLOCALE_LANGUAGE_MUSCOGEE = 194,
    QLOCALE_LANGUAGE_NAMA = 195,
    QLOCALE_LANGUAGE_NAURULANGUAGE = 196,
    QLOCALE_LANGUAGE_NAVAJO = 197,
    QLOCALE_LANGUAGE_NDONGA = 198,
    QLOCALE_LANGUAGE_NEPALI = 199,
    QLOCALE_LANGUAGE_NEWARI = 200,
    QLOCALE_LANGUAGE_NGIEMBOON = 201,
    QLOCALE_LANGUAGE_NGOMBA = 202,
    QLOCALE_LANGUAGE_NIGERIANPIDGIN = 203,
    QLOCALE_LANGUAGE_NKO = 204,
    QLOCALE_LANGUAGE_NORTHERNLURI = 205,
    QLOCALE_LANGUAGE_NORTHERNSAMI = 206,
    QLOCALE_LANGUAGE_NORTHERNSOTHO = 207,
    QLOCALE_LANGUAGE_NORTHNDEBELE = 208,
    QLOCALE_LANGUAGE_NORWEGIANBOKMAL = 209,
    QLOCALE_LANGUAGE_NORWEGIANNYNORSK = 210,
    QLOCALE_LANGUAGE_NUER = 211,
    QLOCALE_LANGUAGE_NYANJA = 212,
    QLOCALE_LANGUAGE_NYANKOLE = 213,
    QLOCALE_LANGUAGE_OCCITAN = 214,
    QLOCALE_LANGUAGE_ODIA = 215,
    QLOCALE_LANGUAGE_OJIBWA = 216,
    QLOCALE_LANGUAGE_OLDIRISH = 217,
    QLOCALE_LANGUAGE_OLDNORSE = 218,
    QLOCALE_LANGUAGE_OLDPERSIAN = 219,
    QLOCALE_LANGUAGE_OROMO = 220,
    QLOCALE_LANGUAGE_OSAGE = 221,
    QLOCALE_LANGUAGE_OSSETIC = 222,
    QLOCALE_LANGUAGE_PAHLAVI = 223,
    QLOCALE_LANGUAGE_PALAUAN = 224,
    QLOCALE_LANGUAGE_PALI = 225,
    QLOCALE_LANGUAGE_PAPIAMENTO = 226,
    QLOCALE_LANGUAGE_PASHTO = 227,
    QLOCALE_LANGUAGE_PERSIAN = 228,
    QLOCALE_LANGUAGE_PHOENICIAN = 229,
    QLOCALE_LANGUAGE_POLISH = 230,
    QLOCALE_LANGUAGE_PORTUGUESE = 231,
    QLOCALE_LANGUAGE_PRUSSIAN = 232,
    QLOCALE_LANGUAGE_PUNJABI = 233,
    QLOCALE_LANGUAGE_QUECHUA = 234,
    QLOCALE_LANGUAGE_ROMANIAN = 235,
    QLOCALE_LANGUAGE_ROMANSH = 236,
    QLOCALE_LANGUAGE_ROMBO = 237,
    QLOCALE_LANGUAGE_RUNDI = 238,
    QLOCALE_LANGUAGE_RUSSIAN = 239,
    QLOCALE_LANGUAGE_RWA = 240,
    QLOCALE_LANGUAGE_SAHO = 241,
    QLOCALE_LANGUAGE_SAKHA = 242,
    QLOCALE_LANGUAGE_SAMBURU = 243,
    QLOCALE_LANGUAGE_SAMOAN = 244,
    QLOCALE_LANGUAGE_SANGO = 245,
    QLOCALE_LANGUAGE_SANGU = 246,
    QLOCALE_LANGUAGE_SANSKRIT = 247,
    QLOCALE_LANGUAGE_SANTALI = 248,
    QLOCALE_LANGUAGE_SARDINIAN = 249,
    QLOCALE_LANGUAGE_SAURASHTRA = 250,
    QLOCALE_LANGUAGE_SENA = 251,
    QLOCALE_LANGUAGE_SERBIAN = 252,
    QLOCALE_LANGUAGE_SHAMBALA = 253,
    QLOCALE_LANGUAGE_SHONA = 254,
    QLOCALE_LANGUAGE_SICHUANYI = 255,
    QLOCALE_LANGUAGE_SICILIAN = 256,
    QLOCALE_LANGUAGE_SIDAMO = 257,
    QLOCALE_LANGUAGE_SILESIAN = 258,
    QLOCALE_LANGUAGE_SINDHI = 259,
    QLOCALE_LANGUAGE_SINHALA = 260,
    QLOCALE_LANGUAGE_SKOLTSAMI = 261,
    QLOCALE_LANGUAGE_SLOVAK = 262,
    QLOCALE_LANGUAGE_SLOVENIAN = 263,
    QLOCALE_LANGUAGE_SOGA = 264,
    QLOCALE_LANGUAGE_SOMALI = 265,
    QLOCALE_LANGUAGE_SOUTHERNKURDISH = 266,
    QLOCALE_LANGUAGE_SOUTHERNSAMI = 267,
    QLOCALE_LANGUAGE_SOUTHERNSOTHO = 268,
    QLOCALE_LANGUAGE_SOUTHNDEBELE = 269,
    QLOCALE_LANGUAGE_SPANISH = 270,
    QLOCALE_LANGUAGE_STANDARDMOROCCANTAMAZIGHT = 271,
    QLOCALE_LANGUAGE_SUNDANESE = 272,
    QLOCALE_LANGUAGE_SWAHILI = 273,
    QLOCALE_LANGUAGE_SWATI = 274,
    QLOCALE_LANGUAGE_SWEDISH = 275,
    QLOCALE_LANGUAGE_SWISSGERMAN = 276,
    QLOCALE_LANGUAGE_SYRIAC = 277,
    QLOCALE_LANGUAGE_TACHELHIT = 278,
    QLOCALE_LANGUAGE_TAHITIAN = 279,
    QLOCALE_LANGUAGE_TAIDAM = 280,
    QLOCALE_LANGUAGE_TAITA = 281,
    QLOCALE_LANGUAGE_TAJIK = 282,
    QLOCALE_LANGUAGE_TAMIL = 283,
    QLOCALE_LANGUAGE_TAROKO = 284,
    QLOCALE_LANGUAGE_TASAWAQ = 285,
    QLOCALE_LANGUAGE_TATAR = 286,
    QLOCALE_LANGUAGE_TELUGU = 287,
    QLOCALE_LANGUAGE_TESO = 288,
    QLOCALE_LANGUAGE_THAI = 289,
    QLOCALE_LANGUAGE_TIBETAN = 290,
    QLOCALE_LANGUAGE_TIGRE = 291,
    QLOCALE_LANGUAGE_TIGRINYA = 292,
    QLOCALE_LANGUAGE_TOKELAULANGUAGE = 293,
    QLOCALE_LANGUAGE_TOKPISIN = 294,
    QLOCALE_LANGUAGE_TONGAN = 295,
    QLOCALE_LANGUAGE_TSONGA = 296,
    QLOCALE_LANGUAGE_TSWANA = 297,
    QLOCALE_LANGUAGE_TURKISH = 298,
    QLOCALE_LANGUAGE_TURKMEN = 299,
    QLOCALE_LANGUAGE_TUVALULANGUAGE = 300,
    QLOCALE_LANGUAGE_TYAP = 301,
    QLOCALE_LANGUAGE_UGARITIC = 302,
    QLOCALE_LANGUAGE_UKRAINIAN = 303,
    QLOCALE_LANGUAGE_UPPERSORBIAN = 304,
    QLOCALE_LANGUAGE_URDU = 305,
    QLOCALE_LANGUAGE_UYGHUR = 306,
    QLOCALE_LANGUAGE_UZBEK = 307,
    QLOCALE_LANGUAGE_VAI = 308,
    QLOCALE_LANGUAGE_VENDA = 309,
    QLOCALE_LANGUAGE_VIETNAMESE = 310,
    QLOCALE_LANGUAGE_VOLAPUK = 311,
    QLOCALE_LANGUAGE_VUNJO = 312,
    QLOCALE_LANGUAGE_WALLOON = 313,
    QLOCALE_LANGUAGE_WALSER = 314,
    QLOCALE_LANGUAGE_WARLPIRI = 315,
    QLOCALE_LANGUAGE_WELSH = 316,
    QLOCALE_LANGUAGE_WESTERNBALOCHI = 317,
    QLOCALE_LANGUAGE_WESTERNFRISIAN = 318,
    QLOCALE_LANGUAGE_WOLAYTTA = 319,
    QLOCALE_LANGUAGE_WOLOF = 320,
    QLOCALE_LANGUAGE_XHOSA = 321,
    QLOCALE_LANGUAGE_YANGBEN = 322,
    QLOCALE_LANGUAGE_YIDDISH = 323,
    QLOCALE_LANGUAGE_YORUBA = 324,
    QLOCALE_LANGUAGE_ZARMA = 325,
    QLOCALE_LANGUAGE_ZHUANG = 326,
    QLOCALE_LANGUAGE_ZULU = 327,
    QLOCALE_LANGUAGE_KAINGANG = 328,
    QLOCALE_LANGUAGE_NHEENGATU = 329,
    QLOCALE_LANGUAGE_HARYANVI = 330,
    QLOCALE_LANGUAGE_NORTHERNFRISIAN = 331,
    QLOCALE_LANGUAGE_RAJASTHANI = 332,
    QLOCALE_LANGUAGE_MOKSHA = 333,
    QLOCALE_LANGUAGE_TOKIPONA = 334,
    QLOCALE_LANGUAGE_PIJIN = 335,
    QLOCALE_LANGUAGE_OBOLO = 336,
    QLOCALE_LANGUAGE_BALUCHI = 337,
    QLOCALE_LANGUAGE_LIGURIAN = 338,
    QLOCALE_LANGUAGE_ROHINGYA = 339,
    QLOCALE_LANGUAGE_TORWALI = 340,
    QLOCALE_LANGUAGE_ANII = 341,
    QLOCALE_LANGUAGE_KANGRI = 342,
    QLOCALE_LANGUAGE_VENETIAN = 343,
    QLOCALE_LANGUAGE_KUVI = 344,
    QLOCALE_LANGUAGE_KARAKALPAK = 345,
    QLOCALE_LANGUAGE_SWAMPYCREE = 346,
    QLOCALE_LANGUAGE_AFAN = 220,
    QLOCALE_LANGUAGE_BENGALI = 30,
    QLOCALE_LANGUAGE_BHUTANI = 73,
    QLOCALE_LANGUAGE_BYELORUSSIAN = 35,
    QLOCALE_LANGUAGE_CAMBODIAN = 135,
    QLOCALE_LANGUAGE_CENTRALMOROCCOTAMAZIGHT = 50,
    QLOCALE_LANGUAGE_CHEWA = 212,
    QLOCALE_LANGUAGE_FRISIAN = 318,
    QLOCALE_LANGUAGE_GREENLANDIC = 127,
    QLOCALE_LANGUAGE_INUPIAK = 117,
    QLOCALE_LANGUAGE_KIRGHIZ = 150,
    QLOCALE_LANGUAGE_KURUNDI = 238,
    QLOCALE_LANGUAGE_KWANYAMA = 147,
    QLOCALE_LANGUAGE_NAVAHO = 197,
    QLOCALE_LANGUAGE_ORIYA = 215,
    QLOCALE_LANGUAGE_RHAETOROMANCE = 236,
    QLOCALE_LANGUAGE_UIGHUR = 306,
    QLOCALE_LANGUAGE_UIGUR = 306,
    QLOCALE_LANGUAGE_WALAMO = 319,
    QLOCALE_LANGUAGE_LASTLANGUAGE = 346
} QLocale__Language;

typedef enum {
    QLOCALE_SCRIPT_ANYSCRIPT = 0,
    QLOCALE_SCRIPT_ADLAMSCRIPT = 1,
    QLOCALE_SCRIPT_AHOMSCRIPT = 2,
    QLOCALE_SCRIPT_ANATOLIANHIEROGLYPHSSCRIPT = 3,
    QLOCALE_SCRIPT_ARABICSCRIPT = 4,
    QLOCALE_SCRIPT_ARMENIANSCRIPT = 5,
    QLOCALE_SCRIPT_AVESTANSCRIPT = 6,
    QLOCALE_SCRIPT_BALINESESCRIPT = 7,
    QLOCALE_SCRIPT_BAMUMSCRIPT = 8,
    QLOCALE_SCRIPT_BANGLASCRIPT = 9,
    QLOCALE_SCRIPT_BASSAVAHSCRIPT = 10,
    QLOCALE_SCRIPT_BATAKSCRIPT = 11,
    QLOCALE_SCRIPT_BHAIKSUKISCRIPT = 12,
    QLOCALE_SCRIPT_BOPOMOFOSCRIPT = 13,
    QLOCALE_SCRIPT_BRAHMISCRIPT = 14,
    QLOCALE_SCRIPT_BRAILLESCRIPT = 15,
    QLOCALE_SCRIPT_BUGINESESCRIPT = 16,
    QLOCALE_SCRIPT_BUHIDSCRIPT = 17,
    QLOCALE_SCRIPT_CANADIANABORIGINALSCRIPT = 18,
    QLOCALE_SCRIPT_CARIANSCRIPT = 19,
    QLOCALE_SCRIPT_CAUCASIANALBANIANSCRIPT = 20,
    QLOCALE_SCRIPT_CHAKMASCRIPT = 21,
    QLOCALE_SCRIPT_CHAMSCRIPT = 22,
    QLOCALE_SCRIPT_CHEROKEESCRIPT = 23,
    QLOCALE_SCRIPT_COPTICSCRIPT = 24,
    QLOCALE_SCRIPT_CUNEIFORMSCRIPT = 25,
    QLOCALE_SCRIPT_CYPRIOTSCRIPT = 26,
    QLOCALE_SCRIPT_CYRILLICSCRIPT = 27,
    QLOCALE_SCRIPT_DESERETSCRIPT = 28,
    QLOCALE_SCRIPT_DEVANAGARISCRIPT = 29,
    QLOCALE_SCRIPT_DUPLOYANSCRIPT = 30,
    QLOCALE_SCRIPT_EGYPTIANHIEROGLYPHSSCRIPT = 31,
    QLOCALE_SCRIPT_ELBASANSCRIPT = 32,
    QLOCALE_SCRIPT_ETHIOPICSCRIPT = 33,
    QLOCALE_SCRIPT_FRASERSCRIPT = 34,
    QLOCALE_SCRIPT_GEORGIANSCRIPT = 35,
    QLOCALE_SCRIPT_GLAGOLITICSCRIPT = 36,
    QLOCALE_SCRIPT_GOTHICSCRIPT = 37,
    QLOCALE_SCRIPT_GRANTHASCRIPT = 38,
    QLOCALE_SCRIPT_GREEKSCRIPT = 39,
    QLOCALE_SCRIPT_GUJARATISCRIPT = 40,
    QLOCALE_SCRIPT_GURMUKHISCRIPT = 41,
    QLOCALE_SCRIPT_HANGULSCRIPT = 42,
    QLOCALE_SCRIPT_HANSCRIPT = 43,
    QLOCALE_SCRIPT_HANUNOOSCRIPT = 44,
    QLOCALE_SCRIPT_HANWITHBOPOMOFOSCRIPT = 45,
    QLOCALE_SCRIPT_HATRANSCRIPT = 46,
    QLOCALE_SCRIPT_HEBREWSCRIPT = 47,
    QLOCALE_SCRIPT_HIRAGANASCRIPT = 48,
    QLOCALE_SCRIPT_IMPERIALARAMAICSCRIPT = 49,
    QLOCALE_SCRIPT_INSCRIPTIONALPAHLAVISCRIPT = 50,
    QLOCALE_SCRIPT_INSCRIPTIONALPARTHIANSCRIPT = 51,
    QLOCALE_SCRIPT_JAMOSCRIPT = 52,
    QLOCALE_SCRIPT_JAPANESESCRIPT = 53,
    QLOCALE_SCRIPT_JAVANESESCRIPT = 54,
    QLOCALE_SCRIPT_KAITHISCRIPT = 55,
    QLOCALE_SCRIPT_KANNADASCRIPT = 56,
    QLOCALE_SCRIPT_KATAKANASCRIPT = 57,
    QLOCALE_SCRIPT_KAYAHLISCRIPT = 58,
    QLOCALE_SCRIPT_KHAROSHTHISCRIPT = 59,
    QLOCALE_SCRIPT_KHMERSCRIPT = 60,
    QLOCALE_SCRIPT_KHOJKISCRIPT = 61,
    QLOCALE_SCRIPT_KHUDAWADISCRIPT = 62,
    QLOCALE_SCRIPT_KOREANSCRIPT = 63,
    QLOCALE_SCRIPT_LANNASCRIPT = 64,
    QLOCALE_SCRIPT_LAOSCRIPT = 65,
    QLOCALE_SCRIPT_LATINSCRIPT = 66,
    QLOCALE_SCRIPT_LEPCHASCRIPT = 67,
    QLOCALE_SCRIPT_LIMBUSCRIPT = 68,
    QLOCALE_SCRIPT_LINEARASCRIPT = 69,
    QLOCALE_SCRIPT_LINEARBSCRIPT = 70,
    QLOCALE_SCRIPT_LYCIANSCRIPT = 71,
    QLOCALE_SCRIPT_LYDIANSCRIPT = 72,
    QLOCALE_SCRIPT_MAHAJANISCRIPT = 73,
    QLOCALE_SCRIPT_MALAYALAMSCRIPT = 74,
    QLOCALE_SCRIPT_MANDAEANSCRIPT = 75,
    QLOCALE_SCRIPT_MANICHAEANSCRIPT = 76,
    QLOCALE_SCRIPT_MARCHENSCRIPT = 77,
    QLOCALE_SCRIPT_MEITEIMAYEKSCRIPT = 78,
    QLOCALE_SCRIPT_MENDESCRIPT = 79,
    QLOCALE_SCRIPT_MEROITICCURSIVESCRIPT = 80,
    QLOCALE_SCRIPT_MEROITICSCRIPT = 81,
    QLOCALE_SCRIPT_MODISCRIPT = 82,
    QLOCALE_SCRIPT_MONGOLIANSCRIPT = 83,
    QLOCALE_SCRIPT_MROSCRIPT = 84,
    QLOCALE_SCRIPT_MULTANISCRIPT = 85,
    QLOCALE_SCRIPT_MYANMARSCRIPT = 86,
    QLOCALE_SCRIPT_NABATAEANSCRIPT = 87,
    QLOCALE_SCRIPT_NEWASCRIPT = 88,
    QLOCALE_SCRIPT_NEWTAILUESCRIPT = 89,
    QLOCALE_SCRIPT_NKOSCRIPT = 90,
    QLOCALE_SCRIPT_ODIASCRIPT = 91,
    QLOCALE_SCRIPT_OGHAMSCRIPT = 92,
    QLOCALE_SCRIPT_OLCHIKISCRIPT = 93,
    QLOCALE_SCRIPT_OLDHUNGARIANSCRIPT = 94,
    QLOCALE_SCRIPT_OLDITALICSCRIPT = 95,
    QLOCALE_SCRIPT_OLDNORTHARABIANSCRIPT = 96,
    QLOCALE_SCRIPT_OLDPERMICSCRIPT = 97,
    QLOCALE_SCRIPT_OLDPERSIANSCRIPT = 98,
    QLOCALE_SCRIPT_OLDSOUTHARABIANSCRIPT = 99,
    QLOCALE_SCRIPT_ORKHONSCRIPT = 100,
    QLOCALE_SCRIPT_OSAGESCRIPT = 101,
    QLOCALE_SCRIPT_OSMANYASCRIPT = 102,
    QLOCALE_SCRIPT_PAHAWHHMONGSCRIPT = 103,
    QLOCALE_SCRIPT_PALMYRENESCRIPT = 104,
    QLOCALE_SCRIPT_PAUCINHAUSCRIPT = 105,
    QLOCALE_SCRIPT_PHAGSPASCRIPT = 106,
    QLOCALE_SCRIPT_PHOENICIANSCRIPT = 107,
    QLOCALE_SCRIPT_POLLARDPHONETICSCRIPT = 108,
    QLOCALE_SCRIPT_PSALTERPAHLAVISCRIPT = 109,
    QLOCALE_SCRIPT_REJANGSCRIPT = 110,
    QLOCALE_SCRIPT_RUNICSCRIPT = 111,
    QLOCALE_SCRIPT_SAMARITANSCRIPT = 112,
    QLOCALE_SCRIPT_SAURASHTRASCRIPT = 113,
    QLOCALE_SCRIPT_SHARADASCRIPT = 114,
    QLOCALE_SCRIPT_SHAVIANSCRIPT = 115,
    QLOCALE_SCRIPT_SIDDHAMSCRIPT = 116,
    QLOCALE_SCRIPT_SIGNWRITINGSCRIPT = 117,
    QLOCALE_SCRIPT_SIMPLIFIEDHANSCRIPT = 118,
    QLOCALE_SCRIPT_SINHALASCRIPT = 119,
    QLOCALE_SCRIPT_SORASOMPENGSCRIPT = 120,
    QLOCALE_SCRIPT_SUNDANESESCRIPT = 121,
    QLOCALE_SCRIPT_SYLOTINAGRISCRIPT = 122,
    QLOCALE_SCRIPT_SYRIACSCRIPT = 123,
    QLOCALE_SCRIPT_TAGALOGSCRIPT = 124,
    QLOCALE_SCRIPT_TAGBANWASCRIPT = 125,
    QLOCALE_SCRIPT_TAILESCRIPT = 126,
    QLOCALE_SCRIPT_TAIVIETSCRIPT = 127,
    QLOCALE_SCRIPT_TAKRISCRIPT = 128,
    QLOCALE_SCRIPT_TAMILSCRIPT = 129,
    QLOCALE_SCRIPT_TANGUTSCRIPT = 130,
    QLOCALE_SCRIPT_TELUGUSCRIPT = 131,
    QLOCALE_SCRIPT_THAANASCRIPT = 132,
    QLOCALE_SCRIPT_THAISCRIPT = 133,
    QLOCALE_SCRIPT_TIBETANSCRIPT = 134,
    QLOCALE_SCRIPT_TIFINAGHSCRIPT = 135,
    QLOCALE_SCRIPT_TIRHUTASCRIPT = 136,
    QLOCALE_SCRIPT_TRADITIONALHANSCRIPT = 137,
    QLOCALE_SCRIPT_UGARITICSCRIPT = 138,
    QLOCALE_SCRIPT_VAISCRIPT = 139,
    QLOCALE_SCRIPT_VARANGKSHITISCRIPT = 140,
    QLOCALE_SCRIPT_YISCRIPT = 141,
    QLOCALE_SCRIPT_HANIFISCRIPT = 142,
    QLOCALE_SCRIPT_BENGALISCRIPT = 9,
    QLOCALE_SCRIPT_MENDEKIKAKUISCRIPT = 79,
    QLOCALE_SCRIPT_ORIYASCRIPT = 91,
    QLOCALE_SCRIPT_SIMPLIFIEDCHINESESCRIPT = 118,
    QLOCALE_SCRIPT_TRADITIONALCHINESESCRIPT = 137,
    QLOCALE_SCRIPT_LASTSCRIPT = 142
} QLocale__Script;

typedef enum {
    QLOCALE_COUNTRY_ANYTERRITORY = 0,
    QLOCALE_COUNTRY_AFGHANISTAN = 1,
    QLOCALE_COUNTRY_ALANDISLANDS = 2,
    QLOCALE_COUNTRY_ALBANIA = 3,
    QLOCALE_COUNTRY_ALGERIA = 4,
    QLOCALE_COUNTRY_AMERICANSAMOA = 5,
    QLOCALE_COUNTRY_ANDORRA = 6,
    QLOCALE_COUNTRY_ANGOLA = 7,
    QLOCALE_COUNTRY_ANGUILLA = 8,
    QLOCALE_COUNTRY_ANTARCTICA = 9,
    QLOCALE_COUNTRY_ANTIGUAANDBARBUDA = 10,
    QLOCALE_COUNTRY_ARGENTINA = 11,
    QLOCALE_COUNTRY_ARMENIA = 12,
    QLOCALE_COUNTRY_ARUBA = 13,
    QLOCALE_COUNTRY_ASCENSIONISLAND = 14,
    QLOCALE_COUNTRY_AUSTRALIA = 15,
    QLOCALE_COUNTRY_AUSTRIA = 16,
    QLOCALE_COUNTRY_AZERBAIJAN = 17,
    QLOCALE_COUNTRY_BAHAMAS = 18,
    QLOCALE_COUNTRY_BAHRAIN = 19,
    QLOCALE_COUNTRY_BANGLADESH = 20,
    QLOCALE_COUNTRY_BARBADOS = 21,
    QLOCALE_COUNTRY_BELARUS = 22,
    QLOCALE_COUNTRY_BELGIUM = 23,
    QLOCALE_COUNTRY_BELIZE = 24,
    QLOCALE_COUNTRY_BENIN = 25,
    QLOCALE_COUNTRY_BERMUDA = 26,
    QLOCALE_COUNTRY_BHUTAN = 27,
    QLOCALE_COUNTRY_BOLIVIA = 28,
    QLOCALE_COUNTRY_BOSNIAANDHERZEGOVINA = 29,
    QLOCALE_COUNTRY_BOTSWANA = 30,
    QLOCALE_COUNTRY_BOUVETISLAND = 31,
    QLOCALE_COUNTRY_BRAZIL = 32,
    QLOCALE_COUNTRY_BRITISHINDIANOCEANTERRITORY = 33,
    QLOCALE_COUNTRY_BRITISHVIRGINISLANDS = 34,
    QLOCALE_COUNTRY_BRUNEI = 35,
    QLOCALE_COUNTRY_BULGARIA = 36,
    QLOCALE_COUNTRY_BURKINAFASO = 37,
    QLOCALE_COUNTRY_BURUNDI = 38,
    QLOCALE_COUNTRY_CAMBODIA = 39,
    QLOCALE_COUNTRY_CAMEROON = 40,
    QLOCALE_COUNTRY_CANADA = 41,
    QLOCALE_COUNTRY_CANARYISLANDS = 42,
    QLOCALE_COUNTRY_CAPEVERDE = 43,
    QLOCALE_COUNTRY_CARIBBEANNETHERLANDS = 44,
    QLOCALE_COUNTRY_CAYMANISLANDS = 45,
    QLOCALE_COUNTRY_CENTRALAFRICANREPUBLIC = 46,
    QLOCALE_COUNTRY_CEUTAANDMELILLA = 47,
    QLOCALE_COUNTRY_CHAD = 48,
    QLOCALE_COUNTRY_CHILE = 49,
    QLOCALE_COUNTRY_CHINA = 50,
    QLOCALE_COUNTRY_CHRISTMASISLAND = 51,
    QLOCALE_COUNTRY_CLIPPERTONISLAND = 52,
    QLOCALE_COUNTRY_COCOSISLANDS = 53,
    QLOCALE_COUNTRY_COLOMBIA = 54,
    QLOCALE_COUNTRY_COMOROS = 55,
    QLOCALE_COUNTRY_CONGOBRAZZAVILLE = 56,
    QLOCALE_COUNTRY_CONGOKINSHASA = 57,
    QLOCALE_COUNTRY_COOKISLANDS = 58,
    QLOCALE_COUNTRY_COSTARICA = 59,
    QLOCALE_COUNTRY_CROATIA = 60,
    QLOCALE_COUNTRY_CUBA = 61,
    QLOCALE_COUNTRY_CURACAO = 62,
    QLOCALE_COUNTRY_CYPRUS = 63,
    QLOCALE_COUNTRY_CZECHIA = 64,
    QLOCALE_COUNTRY_DENMARK = 65,
    QLOCALE_COUNTRY_DIEGOGARCIA = 66,
    QLOCALE_COUNTRY_DJIBOUTI = 67,
    QLOCALE_COUNTRY_DOMINICA = 68,
    QLOCALE_COUNTRY_DOMINICANREPUBLIC = 69,
    QLOCALE_COUNTRY_ECUADOR = 70,
    QLOCALE_COUNTRY_EGYPT = 71,
    QLOCALE_COUNTRY_ELSALVADOR = 72,
    QLOCALE_COUNTRY_EQUATORIALGUINEA = 73,
    QLOCALE_COUNTRY_ERITREA = 74,
    QLOCALE_COUNTRY_ESTONIA = 75,
    QLOCALE_COUNTRY_ESWATINI = 76,
    QLOCALE_COUNTRY_ETHIOPIA = 77,
    QLOCALE_COUNTRY_EUROPE = 78,
    QLOCALE_COUNTRY_EUROPEANUNION = 79,
    QLOCALE_COUNTRY_FALKLANDISLANDS = 80,
    QLOCALE_COUNTRY_FAROEISLANDS = 81,
    QLOCALE_COUNTRY_FIJI = 82,
    QLOCALE_COUNTRY_FINLAND = 83,
    QLOCALE_COUNTRY_FRANCE = 84,
    QLOCALE_COUNTRY_FRENCHGUIANA = 85,
    QLOCALE_COUNTRY_FRENCHPOLYNESIA = 86,
    QLOCALE_COUNTRY_FRENCHSOUTHERNTERRITORIES = 87,
    QLOCALE_COUNTRY_GABON = 88,
    QLOCALE_COUNTRY_GAMBIA = 89,
    QLOCALE_COUNTRY_GEORGIA = 90,
    QLOCALE_COUNTRY_GERMANY = 91,
    QLOCALE_COUNTRY_GHANA = 92,
    QLOCALE_COUNTRY_GIBRALTAR = 93,
    QLOCALE_COUNTRY_GREECE = 94,
    QLOCALE_COUNTRY_GREENLAND = 95,
    QLOCALE_COUNTRY_GRENADA = 96,
    QLOCALE_COUNTRY_GUADELOUPE = 97,
    QLOCALE_COUNTRY_GUAM = 98,
    QLOCALE_COUNTRY_GUATEMALA = 99,
    QLOCALE_COUNTRY_GUERNSEY = 100,
    QLOCALE_COUNTRY_GUINEABISSAU = 101,
    QLOCALE_COUNTRY_GUINEA = 102,
    QLOCALE_COUNTRY_GUYANA = 103,
    QLOCALE_COUNTRY_HAITI = 104,
    QLOCALE_COUNTRY_HEARDANDMCDONALDISLANDS = 105,
    QLOCALE_COUNTRY_HONDURAS = 106,
    QLOCALE_COUNTRY_HONGKONG = 107,
    QLOCALE_COUNTRY_HUNGARY = 108,
    QLOCALE_COUNTRY_ICELAND = 109,
    QLOCALE_COUNTRY_INDIA = 110,
    QLOCALE_COUNTRY_INDONESIA = 111,
    QLOCALE_COUNTRY_IRAN = 112,
    QLOCALE_COUNTRY_IRAQ = 113,
    QLOCALE_COUNTRY_IRELAND = 114,
    QLOCALE_COUNTRY_ISLEOFMAN = 115,
    QLOCALE_COUNTRY_ISRAEL = 116,
    QLOCALE_COUNTRY_ITALY = 117,
    QLOCALE_COUNTRY_IVORYCOAST = 118,
    QLOCALE_COUNTRY_JAMAICA = 119,
    QLOCALE_COUNTRY_JAPAN = 120,
    QLOCALE_COUNTRY_JERSEY = 121,
    QLOCALE_COUNTRY_JORDAN = 122,
    QLOCALE_COUNTRY_KAZAKHSTAN = 123,
    QLOCALE_COUNTRY_KENYA = 124,
    QLOCALE_COUNTRY_KIRIBATI = 125,
    QLOCALE_COUNTRY_KOSOVO = 126,
    QLOCALE_COUNTRY_KUWAIT = 127,
    QLOCALE_COUNTRY_KYRGYZSTAN = 128,
    QLOCALE_COUNTRY_LAOS = 129,
    QLOCALE_COUNTRY_LATINAMERICA = 130,
    QLOCALE_COUNTRY_LATVIA = 131,
    QLOCALE_COUNTRY_LEBANON = 132,
    QLOCALE_COUNTRY_LESOTHO = 133,
    QLOCALE_COUNTRY_LIBERIA = 134,
    QLOCALE_COUNTRY_LIBYA = 135,
    QLOCALE_COUNTRY_LIECHTENSTEIN = 136,
    QLOCALE_COUNTRY_LITHUANIA = 137,
    QLOCALE_COUNTRY_LUXEMBOURG = 138,
    QLOCALE_COUNTRY_MACAO = 139,
    QLOCALE_COUNTRY_MACEDONIA = 140,
    QLOCALE_COUNTRY_MADAGASCAR = 141,
    QLOCALE_COUNTRY_MALAWI = 142,
    QLOCALE_COUNTRY_MALAYSIA = 143,
    QLOCALE_COUNTRY_MALDIVES = 144,
    QLOCALE_COUNTRY_MALI = 145,
    QLOCALE_COUNTRY_MALTA = 146,
    QLOCALE_COUNTRY_MARSHALLISLANDS = 147,
    QLOCALE_COUNTRY_MARTINIQUE = 148,
    QLOCALE_COUNTRY_MAURITANIA = 149,
    QLOCALE_COUNTRY_MAURITIUS = 150,
    QLOCALE_COUNTRY_MAYOTTE = 151,
    QLOCALE_COUNTRY_MEXICO = 152,
    QLOCALE_COUNTRY_MICRONESIA = 153,
    QLOCALE_COUNTRY_MOLDOVA = 154,
    QLOCALE_COUNTRY_MONACO = 155,
    QLOCALE_COUNTRY_MONGOLIA = 156,
    QLOCALE_COUNTRY_MONTENEGRO = 157,
    QLOCALE_COUNTRY_MONTSERRAT = 158,
    QLOCALE_COUNTRY_MOROCCO = 159,
    QLOCALE_COUNTRY_MOZAMBIQUE = 160,
    QLOCALE_COUNTRY_MYANMAR = 161,
    QLOCALE_COUNTRY_NAMIBIA = 162,
    QLOCALE_COUNTRY_NAURUTERRITORY = 163,
    QLOCALE_COUNTRY_NEPAL = 164,
    QLOCALE_COUNTRY_NETHERLANDS = 165,
    QLOCALE_COUNTRY_NEWCALEDONIA = 166,
    QLOCALE_COUNTRY_NEWZEALAND = 167,
    QLOCALE_COUNTRY_NICARAGUA = 168,
    QLOCALE_COUNTRY_NIGERIA = 169,
    QLOCALE_COUNTRY_NIGER = 170,
    QLOCALE_COUNTRY_NIUE = 171,
    QLOCALE_COUNTRY_NORFOLKISLAND = 172,
    QLOCALE_COUNTRY_NORTHERNMARIANAISLANDS = 173,
    QLOCALE_COUNTRY_NORTHKOREA = 174,
    QLOCALE_COUNTRY_NORWAY = 175,
    QLOCALE_COUNTRY_OMAN = 176,
    QLOCALE_COUNTRY_OUTLYINGOCEANIA = 177,
    QLOCALE_COUNTRY_PAKISTAN = 178,
    QLOCALE_COUNTRY_PALAU = 179,
    QLOCALE_COUNTRY_PALESTINIANTERRITORIES = 180,
    QLOCALE_COUNTRY_PANAMA = 181,
    QLOCALE_COUNTRY_PAPUANEWGUINEA = 182,
    QLOCALE_COUNTRY_PARAGUAY = 183,
    QLOCALE_COUNTRY_PERU = 184,
    QLOCALE_COUNTRY_PHILIPPINES = 185,
    QLOCALE_COUNTRY_PITCAIRN = 186,
    QLOCALE_COUNTRY_POLAND = 187,
    QLOCALE_COUNTRY_PORTUGAL = 188,
    QLOCALE_COUNTRY_PUERTORICO = 189,
    QLOCALE_COUNTRY_QATAR = 190,
    QLOCALE_COUNTRY_REUNION = 191,
    QLOCALE_COUNTRY_ROMANIA = 192,
    QLOCALE_COUNTRY_RUSSIA = 193,
    QLOCALE_COUNTRY_RWANDA = 194,
    QLOCALE_COUNTRY_SAINTBARTHELEMY = 195,
    QLOCALE_COUNTRY_SAINTHELENA = 196,
    QLOCALE_COUNTRY_SAINTKITTSANDNEVIS = 197,
    QLOCALE_COUNTRY_SAINTLUCIA = 198,
    QLOCALE_COUNTRY_SAINTMARTIN = 199,
    QLOCALE_COUNTRY_SAINTPIERREANDMIQUELON = 200,
    QLOCALE_COUNTRY_SAINTVINCENTANDGRENADINES = 201,
    QLOCALE_COUNTRY_SAMOA = 202,
    QLOCALE_COUNTRY_SANMARINO = 203,
    QLOCALE_COUNTRY_SAOTOMEANDPRINCIPE = 204,
    QLOCALE_COUNTRY_SAUDIARABIA = 205,
    QLOCALE_COUNTRY_SENEGAL = 206,
    QLOCALE_COUNTRY_SERBIA = 207,
    QLOCALE_COUNTRY_SEYCHELLES = 208,
    QLOCALE_COUNTRY_SIERRALEONE = 209,
    QLOCALE_COUNTRY_SINGAPORE = 210,
    QLOCALE_COUNTRY_SINTMAARTEN = 211,
    QLOCALE_COUNTRY_SLOVAKIA = 212,
    QLOCALE_COUNTRY_SLOVENIA = 213,
    QLOCALE_COUNTRY_SOLOMONISLANDS = 214,
    QLOCALE_COUNTRY_SOMALIA = 215,
    QLOCALE_COUNTRY_SOUTHAFRICA = 216,
    QLOCALE_COUNTRY_SOUTHGEORGIAANDSOUTHSANDWICHISLANDS = 217,
    QLOCALE_COUNTRY_SOUTHKOREA = 218,
    QLOCALE_COUNTRY_SOUTHSUDAN = 219,
    QLOCALE_COUNTRY_SPAIN = 220,
    QLOCALE_COUNTRY_SRILANKA = 221,
    QLOCALE_COUNTRY_SUDAN = 222,
    QLOCALE_COUNTRY_SURINAME = 223,
    QLOCALE_COUNTRY_SVALBARDANDJANMAYEN = 224,
    QLOCALE_COUNTRY_SWEDEN = 225,
    QLOCALE_COUNTRY_SWITZERLAND = 226,
    QLOCALE_COUNTRY_SYRIA = 227,
    QLOCALE_COUNTRY_TAIWAN = 228,
    QLOCALE_COUNTRY_TAJIKISTAN = 229,
    QLOCALE_COUNTRY_TANZANIA = 230,
    QLOCALE_COUNTRY_THAILAND = 231,
    QLOCALE_COUNTRY_TIMORLESTE = 232,
    QLOCALE_COUNTRY_TOGO = 233,
    QLOCALE_COUNTRY_TOKELAUTERRITORY = 234,
    QLOCALE_COUNTRY_TONGA = 235,
    QLOCALE_COUNTRY_TRINIDADANDTOBAGO = 236,
    QLOCALE_COUNTRY_TRISTANDACUNHA = 237,
    QLOCALE_COUNTRY_TUNISIA = 238,
    QLOCALE_COUNTRY_TURKEY = 239,
    QLOCALE_COUNTRY_TURKMENISTAN = 240,
    QLOCALE_COUNTRY_TURKSANDCAICOSISLANDS = 241,
    QLOCALE_COUNTRY_TUVALUTERRITORY = 242,
    QLOCALE_COUNTRY_UGANDA = 243,
    QLOCALE_COUNTRY_UKRAINE = 244,
    QLOCALE_COUNTRY_UNITEDARABEMIRATES = 245,
    QLOCALE_COUNTRY_UNITEDKINGDOM = 246,
    QLOCALE_COUNTRY_UNITEDSTATESOUTLYINGISLANDS = 247,
    QLOCALE_COUNTRY_UNITEDSTATES = 248,
    QLOCALE_COUNTRY_UNITEDSTATESVIRGINISLANDS = 249,
    QLOCALE_COUNTRY_URUGUAY = 250,
    QLOCALE_COUNTRY_UZBEKISTAN = 251,
    QLOCALE_COUNTRY_VANUATU = 252,
    QLOCALE_COUNTRY_VATICANCITY = 253,
    QLOCALE_COUNTRY_VENEZUELA = 254,
    QLOCALE_COUNTRY_VIETNAM = 255,
    QLOCALE_COUNTRY_WALLISANDFUTUNA = 256,
    QLOCALE_COUNTRY_WESTERNSAHARA = 257,
    QLOCALE_COUNTRY_WORLD = 258,
    QLOCALE_COUNTRY_YEMEN = 259,
    QLOCALE_COUNTRY_ZAMBIA = 260,
    QLOCALE_COUNTRY_ZIMBABWE = 261,
    QLOCALE_COUNTRY_ANYCOUNTRY = 0,
    QLOCALE_COUNTRY_BONAIRE = 44,
    QLOCALE_COUNTRY_BOSNIAANDHERZEGOWINA = 29,
    QLOCALE_COUNTRY_CURASAO = 62,
    QLOCALE_COUNTRY_CZECHREPUBLIC = 64,
    QLOCALE_COUNTRY_DEMOCRATICREPUBLICOFCONGO = 57,
    QLOCALE_COUNTRY_DEMOCRATICREPUBLICOFKOREA = 174,
    QLOCALE_COUNTRY_EASTTIMOR = 232,
    QLOCALE_COUNTRY_LATINAMERICAANDTHECARIBBEAN = 130,
    QLOCALE_COUNTRY_MACAU = 139,
    QLOCALE_COUNTRY_NAURUCOUNTRY = 163,
    QLOCALE_COUNTRY_PEOPLESREPUBLICOFCONGO = 56,
    QLOCALE_COUNTRY_REPUBLICOFKOREA = 218,
    QLOCALE_COUNTRY_RUSSIANFEDERATION = 193,
    QLOCALE_COUNTRY_SAINTVINCENTANDTHEGRENADINES = 201,
    QLOCALE_COUNTRY_SOUTHGEORGIAANDTHESOUTHSANDWICHISLANDS = 217,
    QLOCALE_COUNTRY_SVALBARDANDJANMAYENISLANDS = 224,
    QLOCALE_COUNTRY_SWAZILAND = 76,
    QLOCALE_COUNTRY_SYRIANARABREPUBLIC = 227,
    QLOCALE_COUNTRY_TOKELAUCOUNTRY = 234,
    QLOCALE_COUNTRY_TUVALUCOUNTRY = 242,
    QLOCALE_COUNTRY_UNITEDSTATESMINOROUTLYINGISLANDS = 247,
    QLOCALE_COUNTRY_VATICANCITYSTATE = 253,
    QLOCALE_COUNTRY_WALLISANDFUTUNAISLANDS = 256,
    QLOCALE_COUNTRY_LASTTERRITORY = 261,
    QLOCALE_COUNTRY_LASTCOUNTRY = 261
} QLocale__Country;

typedef enum {
    QLOCALE_MEASUREMENTSYSTEM_METRICSYSTEM = 0,
    QLOCALE_MEASUREMENTSYSTEM_IMPERIALUSSYSTEM = 1,
    QLOCALE_MEASUREMENTSYSTEM_IMPERIALUKSYSTEM = 2,
    QLOCALE_MEASUREMENTSYSTEM_IMPERIALSYSTEM = 1
} QLocale__MeasurementSystem;

typedef enum {
    QLOCALE_FORMATTYPE_LONGFORMAT = 0,
    QLOCALE_FORMATTYPE_SHORTFORMAT = 1,
    QLOCALE_FORMATTYPE_NARROWFORMAT = 2
} QLocale__FormatType;

typedef enum {
    QLOCALE_NUMBEROPTION_DEFAULTNUMBEROPTIONS = 0,
    QLOCALE_NUMBEROPTION_OMITGROUPSEPARATOR = 1,
    QLOCALE_NUMBEROPTION_REJECTGROUPSEPARATOR = 2,
    QLOCALE_NUMBEROPTION_OMITLEADINGZEROINEXPONENT = 4,
    QLOCALE_NUMBEROPTION_REJECTLEADINGZEROINEXPONENT = 8,
    QLOCALE_NUMBEROPTION_INCLUDETRAILINGZEROESAFTERDOT = 16,
    QLOCALE_NUMBEROPTION_REJECTTRAILINGZEROESAFTERDOT = 32
} QLocale__NumberOption;

typedef enum {
    QLOCALE_FLOATINGPOINTPRECISIONOPTION_FLOATINGPOINTSHORTEST = -128
} QLocale__FloatingPointPrecisionOption;

typedef enum {
    QLOCALE_TAGSEPARATOR_DASH = 45,
    QLOCALE_TAGSEPARATOR_UNDERSCORE = 95
} QLocale__TagSeparator;

typedef enum {
    QLOCALE_CURRENCYSYMBOLFORMAT_CURRENCYISOCODE = 0,
    QLOCALE_CURRENCYSYMBOLFORMAT_CURRENCYSYMBOL = 1,
    QLOCALE_CURRENCYSYMBOLFORMAT_CURRENCYDISPLAYNAME = 2
} QLocale__CurrencySymbolFormat;

typedef enum {
    QLOCALE_DATASIZEFORMAT_DATASIZEBASE1000 = 1,
    QLOCALE_DATASIZEFORMAT_DATASIZESIQUANTIFIERS = 2,
    QLOCALE_DATASIZEFORMAT_DATASIZEIECFORMAT = 0,
    QLOCALE_DATASIZEFORMAT_DATASIZETRADITIONALFORMAT = 2,
    QLOCALE_DATASIZEFORMAT_DATASIZESIFORMAT = 3
} QLocale__DataSizeFormat;

typedef enum {
    QLOCALE_LANGUAGECODETYPE_ISO639PART1 = 1,
    QLOCALE_LANGUAGECODETYPE_ISO639PART2B = 2,
    QLOCALE_LANGUAGECODETYPE_ISO639PART2T = 4,
    QLOCALE_LANGUAGECODETYPE_ISO639PART3 = 8,
    QLOCALE_LANGUAGECODETYPE_LEGACYLANGUAGECODE = 32768,
    QLOCALE_LANGUAGECODETYPE_ISO639PART2 = 6,
    QLOCALE_LANGUAGECODETYPE_ISO639ALPHA2 = 1,
    QLOCALE_LANGUAGECODETYPE_ISO639ALPHA3 = 14,
    QLOCALE_LANGUAGECODETYPE_ISO639 = 15,
    QLOCALE_LANGUAGECODETYPE_ANYLANGUAGECODE = -1
} QLocale__LanguageCodeType;

typedef enum {
    QLOCALE_QUOTATIONSTYLE_STANDARDQUOTATION = 0,
    QLOCALE_QUOTATIONSTYLE_ALTERNATEQUOTATION = 1
} QLocale__QuotationStyle;

#endif
