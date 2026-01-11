#include "libqcalendar.hpp"
#include "libqdatetime.hpp"
#include "libqlocale.hpp"
#include "libqlocale.h"

QLocale* q_locale_new() {
    return QLocale_new();
}

QLocale* q_locale_new2(const char* name) {
    return QLocale_new2(qstring(name));
}

QLocale* q_locale_new3(uint16_t language, uint16_t territory) {
    return QLocale_new3(language, territory);
}

QLocale* q_locale_new4(uint16_t language) {
    return QLocale_new4(language);
}

QLocale* q_locale_new5(void* other) {
    return QLocale_new5((QLocale*)other);
}

QLocale* q_locale_new6(uint16_t language, uint16_t script) {
    return QLocale_new6(language, script);
}

QLocale* q_locale_new7(uint16_t language, uint16_t script, uint16_t territory) {
    return QLocale_new7(language, script, territory);
}

void q_locale_operator_assign(void* self, void* other) {
    QLocale_OperatorAssign((QLocale*)self, (QLocale*)other);
}

void q_locale_swap(void* self, void* other) {
    QLocale_Swap((QLocale*)self, (QLocale*)other);
}

uint16_t q_locale_language(void* self) {
    return QLocale_Language((QLocale*)self);
}

uint16_t q_locale_script(void* self) {
    return QLocale_Script((QLocale*)self);
}

uint16_t q_locale_territory(void* self) {
    return QLocale_Territory((QLocale*)self);
}

uint16_t q_locale_country(void* self) {
    return QLocale_Country((QLocale*)self);
}

const char* q_locale_name(void* self) {
    libqt_string _str = QLocale_Name((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_bcp47_name(void* self) {
    libqt_string _str = QLocale_Bcp47Name((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_native_language_name(void* self) {
    libqt_string _str = QLocale_NativeLanguageName((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_native_territory_name(void* self) {
    libqt_string _str = QLocale_NativeTerritoryName((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_native_country_name(void* self) {
    libqt_string _str = QLocale_NativeCountryName((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

short q_locale_to_short(void* self, const char* s) {
    return QLocale_ToShort((QLocale*)self, qstring(s));
}

unsigned short q_locale_to_u_short(void* self, const char* s) {
    return QLocale_ToUShort((QLocale*)self, qstring(s));
}

int32_t q_locale_to_int(void* self, const char* s) {
    return QLocale_ToInt((QLocale*)self, qstring(s));
}

uint32_t q_locale_to_u_int(void* self, const char* s) {
    return QLocale_ToUInt((QLocale*)self, qstring(s));
}

int64_t q_locale_to_long(void* self, const char* s) {
    return QLocale_ToLong((QLocale*)self, qstring(s));
}

uint64_t q_locale_to_u_long(void* self, const char* s) {
    return QLocale_ToULong((QLocale*)self, qstring(s));
}

long long q_locale_to_long_long(void* self, const char* s) {
    return QLocale_ToLongLong((QLocale*)self, qstring(s));
}

uint64_t q_locale_to_u_long_long(void* self, const char* s) {
    return QLocale_ToULongLong((QLocale*)self, qstring(s));
}

float q_locale_to_float(void* self, const char* s) {
    return QLocale_ToFloat((QLocale*)self, qstring(s));
}

double q_locale_to_double(void* self, const char* s) {
    return QLocale_ToDouble((QLocale*)self, qstring(s));
}

const char* q_locale_to_string(void* self, long long i) {
    libqt_string _str = QLocale_ToString((QLocale*)self, i);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_string2(void* self, uint64_t i) {
    libqt_string _str = QLocale_ToString2((QLocale*)self, i);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_string3(void* self, int64_t i) {
    libqt_string _str = QLocale_ToString3((QLocale*)self, i);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_string4(void* self, uint64_t i) {
    libqt_string _str = QLocale_ToString4((QLocale*)self, i);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_string5(void* self, short i) {
    libqt_string _str = QLocale_ToString5((QLocale*)self, i);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_string6(void* self, unsigned short i) {
    libqt_string _str = QLocale_ToString6((QLocale*)self, i);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_string7(void* self, int i) {
    libqt_string _str = QLocale_ToString7((QLocale*)self, i);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_string8(void* self, uint32_t i) {
    libqt_string _str = QLocale_ToString8((QLocale*)self, i);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_string9(void* self, double f) {
    libqt_string _str = QLocale_ToString9((QLocale*)self, f);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_string10(void* self, float f) {
    libqt_string _str = QLocale_ToString10((QLocale*)self, f);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_string11(void* self, void* date, const char* format) {
    libqt_string _str = QLocale_ToString11((QLocale*)self, (QDate*)date, qstring(format));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_string12(void* self, void* time, const char* format) {
    libqt_string _str = QLocale_ToString12((QLocale*)self, (QTime*)time, qstring(format));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_string13(void* self, void* dateTime, const char* format) {
    libqt_string _str = QLocale_ToString13((QLocale*)self, (QDateTime*)dateTime, qstring(format));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_string17(void* self, void* date) {
    libqt_string _str = QLocale_ToString17((QLocale*)self, (QDate*)date);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_string18(void* self, void* time) {
    libqt_string _str = QLocale_ToString18((QLocale*)self, (QTime*)time);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_string19(void* self, void* dateTime) {
    libqt_string _str = QLocale_ToString19((QLocale*)self, (QDateTime*)dateTime);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_string21(void* self, void* date, int32_t format, void* cal) {
    libqt_string _str = QLocale_ToString21((QLocale*)self, (QDate*)date, format, (QCalendar*)cal);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_string22(void* self, void* dateTime, int32_t format, void* cal) {
    libqt_string _str = QLocale_ToString22((QLocale*)self, (QDateTime*)dateTime, format, (QCalendar*)cal);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_date_format(void* self) {
    libqt_string _str = QLocale_DateFormat((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_time_format(void* self) {
    libqt_string _str = QLocale_TimeFormat((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_date_time_format(void* self) {
    libqt_string _str = QLocale_DateTimeFormat((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QTime* q_locale_to_time(void* self, const char* stringVal) {
    return QLocale_ToTime((QLocale*)self, qstring(stringVal));
}

QTime* q_locale_to_time2(void* self, const char* stringVal, const char* format) {
    return QLocale_ToTime2((QLocale*)self, qstring(stringVal), qstring(format));
}

QDate* q_locale_to_date(void* self, const char* stringVal) {
    return QLocale_ToDate((QLocale*)self, qstring(stringVal));
}

QDate* q_locale_to_date2(void* self, const char* stringVal, const char* format) {
    return QLocale_ToDate2((QLocale*)self, qstring(stringVal), qstring(format));
}

QDateTime* q_locale_to_date_time(void* self, const char* stringVal) {
    return QLocale_ToDateTime((QLocale*)self, qstring(stringVal));
}

QDateTime* q_locale_to_date_time2(void* self, const char* stringVal, const char* format) {
    return QLocale_ToDateTime2((QLocale*)self, qstring(stringVal), qstring(format));
}

QDate* q_locale_to_date3(void* self, const char* stringVal, int32_t format, void* cal) {
    return QLocale_ToDate3((QLocale*)self, qstring(stringVal), format, (QCalendar*)cal);
}

QDate* q_locale_to_date4(void* self, const char* stringVal, const char* format, void* cal) {
    return QLocale_ToDate4((QLocale*)self, qstring(stringVal), qstring(format), (QCalendar*)cal);
}

QDateTime* q_locale_to_date_time3(void* self, const char* stringVal, int32_t format, void* cal) {
    return QLocale_ToDateTime3((QLocale*)self, qstring(stringVal), format, (QCalendar*)cal);
}

QDateTime* q_locale_to_date_time4(void* self, const char* stringVal, const char* format, void* cal) {
    return QLocale_ToDateTime4((QLocale*)self, qstring(stringVal), qstring(format), (QCalendar*)cal);
}

const char* q_locale_decimal_point(void* self) {
    libqt_string _str = QLocale_DecimalPoint((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_group_separator(void* self) {
    libqt_string _str = QLocale_GroupSeparator((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_percent(void* self) {
    libqt_string _str = QLocale_Percent((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_zero_digit(void* self) {
    libqt_string _str = QLocale_ZeroDigit((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_negative_sign(void* self) {
    libqt_string _str = QLocale_NegativeSign((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_positive_sign(void* self) {
    libqt_string _str = QLocale_PositiveSign((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_exponential(void* self) {
    libqt_string _str = QLocale_Exponential((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_month_name(void* self, int param1) {
    libqt_string _str = QLocale_MonthName((QLocale*)self, param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_standalone_month_name(void* self, int param1) {
    libqt_string _str = QLocale_StandaloneMonthName((QLocale*)self, param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_day_name(void* self, int param1) {
    libqt_string _str = QLocale_DayName((QLocale*)self, param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_standalone_day_name(void* self, int param1) {
    libqt_string _str = QLocale_StandaloneDayName((QLocale*)self, param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_locale_first_day_of_week(void* self) {
    return QLocale_FirstDayOfWeek((QLocale*)self);
}

libqt_list /* of enum Qt__DayOfWeek */ q_locale_weekdays(void* self) {
    libqt_list _arr = QLocale_Weekdays((QLocale*)self);
    return _arr;
}

const char* q_locale_am_text(void* self) {
    libqt_string _str = QLocale_AmText((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_pm_text(void* self) {
    libqt_string _str = QLocale_PmText((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_locale_measurement_system(void* self) {
    return QLocale_MeasurementSystem((QLocale*)self);
}

QLocale* q_locale_collation(void* self) {
    return QLocale_Collation((QLocale*)self);
}

int32_t q_locale_text_direction(void* self) {
    return QLocale_TextDirection((QLocale*)self);
}

const char* q_locale_to_upper(void* self, const char* str) {
    libqt_string _str = QLocale_ToUpper((QLocale*)self, qstring(str));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_lower(void* self, const char* str) {
    libqt_string _str = QLocale_ToLower((QLocale*)self, qstring(str));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_currency_symbol(void* self) {
    libqt_string _str = QLocale_CurrencySymbol((QLocale*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_currency_string(void* self, long long param1) {
    libqt_string _str = QLocale_ToCurrencyString((QLocale*)self, param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_currency_string2(void* self, uint64_t param1) {
    libqt_string _str = QLocale_ToCurrencyString2((QLocale*)self, param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_currency_string3(void* self, short i) {
    libqt_string _str = QLocale_ToCurrencyString3((QLocale*)self, i);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_currency_string4(void* self, unsigned short i) {
    libqt_string _str = QLocale_ToCurrencyString4((QLocale*)self, i);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_currency_string5(void* self, int i) {
    libqt_string _str = QLocale_ToCurrencyString5((QLocale*)self, i);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_currency_string6(void* self, uint32_t i) {
    libqt_string _str = QLocale_ToCurrencyString6((QLocale*)self, i);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_currency_string7(void* self, double param1) {
    libqt_string _str = QLocale_ToCurrencyString7((QLocale*)self, param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_currency_string8(void* self, float i) {
    libqt_string _str = QLocale_ToCurrencyString8((QLocale*)self, i);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_formatted_data_size(void* self, long long bytes) {
    libqt_string _str = QLocale_FormattedDataSize((QLocale*)self, bytes);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_locale_ui_languages(void* self) {
    libqt_list _arr = QLocale_UiLanguages((QLocale*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_locale_ui_languages");
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

const char* q_locale_language_to_code(uint16_t language) {
    libqt_string _str = QLocale_LanguageToCode(language);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_territory_to_code(uint16_t territory) {
    libqt_string _str = QLocale_TerritoryToCode(territory);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_country_to_code(uint16_t country) {
    libqt_string _str = QLocale_CountryToCode(country);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_script_to_code(uint16_t script) {
    libqt_string _str = QLocale_ScriptToCode(script);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_language_to_string(uint16_t language) {
    libqt_string _str = QLocale_LanguageToString(language);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_territory_to_string(uint16_t territory) {
    libqt_string _str = QLocale_TerritoryToString(territory);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_country_to_string(uint16_t country) {
    libqt_string _str = QLocale_CountryToString(country);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_script_to_string(uint16_t script) {
    libqt_string _str = QLocale_ScriptToString(script);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_locale_set_default(void* locale) {
    QLocale_SetDefault((QLocale*)locale);
}

QLocale* q_locale_c() {
    return QLocale_C();
}

QLocale* q_locale_system() {
    return QLocale_System();
}

libqt_list /* of QLocale* */ q_locale_matching_locales(uint16_t language, uint16_t script, uint16_t territory) {
    libqt_list _arr = QLocale_MatchingLocales(language, script, territory);
    return _arr;
}

libqt_list /* of enum QLocale__Country */ q_locale_countries_for_language(uint16_t lang) {
    libqt_list _arr = QLocale_CountriesForLanguage(lang);
    return _arr;
}

void q_locale_set_number_options(void* self, int32_t options) {
    QLocale_SetNumberOptions((QLocale*)self, options);
}

int32_t q_locale_number_options(void* self) {
    return QLocale_NumberOptions((QLocale*)self);
}

const char* q_locale_quote_string(void* self, const char* str) {
    libqt_string _str = QLocale_QuoteString((QLocale*)self, qstring(str));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_create_separated_list(void* self, const char* strl[static 1]) {
    size_t strl_len = libqt_strv_length(strl);
    libqt_string* strl_qstr = (libqt_string*)malloc(strl_len * sizeof(libqt_string));
    if (strl_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_locale_create_separated_list");
        abort();
    }
    for (size_t i = 0; i < strl_len; ++i) {
        strl_qstr[i] = qstring(strl[i]);
    }
    libqt_list strl_list = qlist(strl_qstr, strl_len);
    libqt_string _str = QLocale_CreateSeparatedList((QLocale*)self, strl_list);
    free(strl_qstr);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_name1(void* self, int8_t separator) {
    libqt_string _str = QLocale_Name1((QLocale*)self, separator);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_bcp47_name1(void* self, int8_t separator) {
    libqt_string _str = QLocale_Bcp47Name1((QLocale*)self, separator);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

short q_locale_to_short22(void* self, const char* s, bool* ok) {
    return QLocale_ToShort22((QLocale*)self, qstring(s), (bool*)ok);
}

unsigned short q_locale_to_u_short22(void* self, const char* s, bool* ok) {
    return QLocale_ToUShort22((QLocale*)self, qstring(s), (bool*)ok);
}

int32_t q_locale_to_int22(void* self, const char* s, bool* ok) {
    return QLocale_ToInt22((QLocale*)self, qstring(s), (bool*)ok);
}

uint32_t q_locale_to_u_int22(void* self, const char* s, bool* ok) {
    return QLocale_ToUInt22((QLocale*)self, qstring(s), (bool*)ok);
}

int64_t q_locale_to_long22(void* self, const char* s, bool* ok) {
    return QLocale_ToLong22((QLocale*)self, qstring(s), (bool*)ok);
}

uint64_t q_locale_to_u_long22(void* self, const char* s, bool* ok) {
    return QLocale_ToULong22((QLocale*)self, qstring(s), (bool*)ok);
}

long long q_locale_to_long_long22(void* self, const char* s, bool* ok) {
    return QLocale_ToLongLong22((QLocale*)self, qstring(s), (bool*)ok);
}

uint64_t q_locale_to_u_long_long22(void* self, const char* s, bool* ok) {
    return QLocale_ToULongLong22((QLocale*)self, qstring(s), (bool*)ok);
}

float q_locale_to_float22(void* self, const char* s, bool* ok) {
    return QLocale_ToFloat22((QLocale*)self, qstring(s), (bool*)ok);
}

double q_locale_to_double22(void* self, const char* s, bool* ok) {
    return QLocale_ToDouble22((QLocale*)self, qstring(s), (bool*)ok);
}

const char* q_locale_to_string24(void* self, double f, char format) {
    libqt_string _str = QLocale_ToString24((QLocale*)self, f, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_string32(void* self, double f, char format, int precision) {
    libqt_string _str = QLocale_ToString32((QLocale*)self, f, format, precision);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_string25(void* self, float f, char format) {
    libqt_string _str = QLocale_ToString25((QLocale*)self, f, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_string33(void* self, float f, char format, int precision) {
    libqt_string _str = QLocale_ToString33((QLocale*)self, f, format, precision);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_string26(void* self, void* date, int32_t format) {
    libqt_string _str = QLocale_ToString26((QLocale*)self, (QDate*)date, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_string27(void* self, void* time, int32_t format) {
    libqt_string _str = QLocale_ToString27((QLocale*)self, (QTime*)time, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_string28(void* self, void* dateTime, int32_t format) {
    libqt_string _str = QLocale_ToString28((QLocale*)self, (QDateTime*)dateTime, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_date_format1(void* self, int32_t format) {
    libqt_string _str = QLocale_DateFormat1((QLocale*)self, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_time_format1(void* self, int32_t format) {
    libqt_string _str = QLocale_TimeFormat1((QLocale*)self, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_date_time_format1(void* self, int32_t format) {
    libqt_string _str = QLocale_DateTimeFormat1((QLocale*)self, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QTime* q_locale_to_time22(void* self, const char* stringVal, int32_t param2) {
    return QLocale_ToTime22((QLocale*)self, qstring(stringVal), param2);
}

QDate* q_locale_to_date22(void* self, const char* stringVal, int32_t param2) {
    return QLocale_ToDate22((QLocale*)self, qstring(stringVal), param2);
}

QDate* q_locale_to_date32(void* self, const char* stringVal, int32_t param2, int baseYear) {
    return QLocale_ToDate32((QLocale*)self, qstring(stringVal), param2, baseYear);
}

QDate* q_locale_to_date33(void* self, const char* stringVal, const char* format, int baseYear) {
    return QLocale_ToDate33((QLocale*)self, qstring(stringVal), qstring(format), baseYear);
}

QDateTime* q_locale_to_date_time22(void* self, const char* stringVal, int32_t format) {
    return QLocale_ToDateTime22((QLocale*)self, qstring(stringVal), format);
}

QDateTime* q_locale_to_date_time32(void* self, const char* stringVal, int32_t format, int baseYear) {
    return QLocale_ToDateTime32((QLocale*)self, qstring(stringVal), format, baseYear);
}

QDateTime* q_locale_to_date_time33(void* self, const char* stringVal, const char* format, int baseYear) {
    return QLocale_ToDateTime33((QLocale*)self, qstring(stringVal), qstring(format), baseYear);
}

QDate* q_locale_to_date42(void* self, const char* stringVal, int32_t format, void* cal, int baseYear) {
    return QLocale_ToDate42((QLocale*)self, qstring(stringVal), format, (QCalendar*)cal, baseYear);
}

QDate* q_locale_to_date43(void* self, const char* stringVal, const char* format, void* cal, int baseYear) {
    return QLocale_ToDate43((QLocale*)self, qstring(stringVal), qstring(format), (QCalendar*)cal, baseYear);
}

QDateTime* q_locale_to_date_time42(void* self, const char* stringVal, int32_t format, void* cal, int baseYear) {
    return QLocale_ToDateTime42((QLocale*)self, qstring(stringVal), format, (QCalendar*)cal, baseYear);
}

QDateTime* q_locale_to_date_time43(void* self, const char* stringVal, const char* format, void* cal, int baseYear) {
    return QLocale_ToDateTime43((QLocale*)self, qstring(stringVal), qstring(format), (QCalendar*)cal, baseYear);
}

const char* q_locale_month_name2(void* self, int param1, int32_t format) {
    libqt_string _str = QLocale_MonthName2((QLocale*)self, param1, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_standalone_month_name2(void* self, int param1, int32_t format) {
    libqt_string _str = QLocale_StandaloneMonthName2((QLocale*)self, param1, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_day_name2(void* self, int param1, int32_t format) {
    libqt_string _str = QLocale_DayName2((QLocale*)self, param1, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_standalone_day_name2(void* self, int param1, int32_t format) {
    libqt_string _str = QLocale_StandaloneDayName2((QLocale*)self, param1, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_currency_symbol1(void* self, int32_t param1) {
    libqt_string _str = QLocale_CurrencySymbol1((QLocale*)self, param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_currency_string22(void* self, long long param1, const char* symbol) {
    libqt_string _str = QLocale_ToCurrencyString22((QLocale*)self, param1, qstring(symbol));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_currency_string23(void* self, uint64_t param1, const char* symbol) {
    libqt_string _str = QLocale_ToCurrencyString23((QLocale*)self, param1, qstring(symbol));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_currency_string24(void* self, short i, const char* symbol) {
    libqt_string _str = QLocale_ToCurrencyString24((QLocale*)self, i, qstring(symbol));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_currency_string25(void* self, unsigned short i, const char* symbol) {
    libqt_string _str = QLocale_ToCurrencyString25((QLocale*)self, i, qstring(symbol));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_currency_string26(void* self, int i, const char* symbol) {
    libqt_string _str = QLocale_ToCurrencyString26((QLocale*)self, i, qstring(symbol));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_currency_string27(void* self, uint32_t i, const char* symbol) {
    libqt_string _str = QLocale_ToCurrencyString27((QLocale*)self, i, qstring(symbol));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_currency_string28(void* self, double param1, const char* symbol) {
    libqt_string _str = QLocale_ToCurrencyString28((QLocale*)self, param1, qstring(symbol));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_currency_string32(void* self, double param1, const char* symbol, int precision) {
    libqt_string _str = QLocale_ToCurrencyString32((QLocale*)self, param1, qstring(symbol), precision);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_currency_string29(void* self, float i, const char* symbol) {
    libqt_string _str = QLocale_ToCurrencyString29((QLocale*)self, i, qstring(symbol));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_to_currency_string33(void* self, float i, const char* symbol, int precision) {
    libqt_string _str = QLocale_ToCurrencyString33((QLocale*)self, i, qstring(symbol), precision);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_formatted_data_size2(void* self, long long bytes, int precision) {
    libqt_string _str = QLocale_FormattedDataSize2((QLocale*)self, bytes, precision);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_formatted_data_size3(void* self, long long bytes, int precision, int32_t format) {
    libqt_string _str = QLocale_FormattedDataSize3((QLocale*)self, bytes, precision, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_locale_ui_languages1(void* self, int8_t separator) {
    libqt_list _arr = QLocale_UiLanguages1((QLocale*)self, separator);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_locale_ui_languages1");
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

const char* q_locale_language_to_code2(uint16_t language, int32_t codeTypes) {
    libqt_string _str = QLocale_LanguageToCode2(language, codeTypes);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_locale_quote_string22(void* self, const char* str, int32_t style) {
    libqt_string _str = QLocale_QuoteString22((QLocale*)self, qstring(str), style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_locale_delete(void* self) {
    QLocale_Delete((QLocale*)(self));
}
