#include "libkcountrysubdivision.hpp"
#include "libktimezone.hpp"
#include "libkcountry.hpp"
#include "libkcountry.h"

KCountry* k_timezone_country(const char* param1) {
    return KTimeZone_Country(param1);
}

KCountry* k_country_new() {
    return KCountry_new();
}

KCountry* k_country_new2(void* param1) {
    return KCountry_new2((KCountry*)param1);
}

void k_country_operator_assign(void* self, void* param1) {
    KCountry_OperatorAssign((KCountry*)self, (KCountry*)param1);
}

bool k_country_operator_equal(void* self, void* other) {
    return KCountry_OperatorEqual((KCountry*)self, (KCountry*)other);
}

bool k_country_operator_not_equal(void* self, void* other) {
    return KCountry_OperatorNotEqual((KCountry*)self, (KCountry*)other);
}

bool k_country_is_valid(void* self) {
    return KCountry_IsValid((KCountry*)self);
}

const char* k_country_alpha2(void* self) {
    libqt_string _str = KCountry_Alpha2((KCountry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_country_alpha3(void* self) {
    libqt_string _str = KCountry_Alpha3((KCountry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_country_name(void* self) {
    libqt_string _str = KCountry_Name((KCountry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_country_emoji_flag(void* self) {
    libqt_string _str = KCountry_EmojiFlag((KCountry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint16_t k_country_country(void* self) {
    return KCountry_Country((KCountry*)self);
}

libqt_list /* of const char* */ k_country_time_zone_ids(void* self) {
    libqt_list _arr = KCountry_TimeZoneIds((KCountry*)self);
    return _arr;
}

const char* k_country_currency_code(void* self) {
    libqt_string _str = KCountry_CurrencyCode((KCountry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of KCountrySubdivision* */ k_country_subdivisions(void* self) {
    libqt_list _arr = KCountry_Subdivisions((KCountry*)self);
    return _arr;
}

KCountry* k_country_from_alpha22(const char* alpha2Code) {
    return KCountry_FromAlpha22(alpha2Code);
}

KCountry* k_country_from_alpha32(const char* alpha3Code) {
    return KCountry_FromAlpha32(alpha3Code);
}

KCountry* k_country_from_location(float latitude, float longitude) {
    return KCountry_FromLocation(latitude, longitude);
}

KCountry* k_country_from_q_locale(uint16_t country) {
    return KCountry_FromQLocale(country);
}

libqt_list /* of KCountry* */ k_country_all_countries() {
    libqt_list _arr = KCountry_AllCountries();
    return _arr;
}

void k_country_delete(void* self) {
    KCountry_Delete((KCountry*)(self));
}
