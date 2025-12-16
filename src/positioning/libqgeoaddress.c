#include "libqgeoaddress.hpp"
#include "libqgeoaddress.h"

QGeoAddress* q_geoaddress_new() {
    return QGeoAddress_new();
}

QGeoAddress* q_geoaddress_new2(void* other) {
    return QGeoAddress_new2((QGeoAddress*)other);
}

void q_geoaddress_operator_assign(void* self, void* other) {
    QGeoAddress_OperatorAssign((QGeoAddress*)self, (QGeoAddress*)other);
}

void q_geoaddress_swap(void* self, void* other) {
    QGeoAddress_Swap((QGeoAddress*)self, (QGeoAddress*)other);
}

const char* q_geoaddress_text(void* self) {
    libqt_string _str = QGeoAddress_Text((QGeoAddress*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_geoaddress_set_text(void* self, const char* text) {
    QGeoAddress_SetText((QGeoAddress*)self, qstring(text));
}

const char* q_geoaddress_country(void* self) {
    libqt_string _str = QGeoAddress_Country((QGeoAddress*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_geoaddress_set_country(void* self, const char* country) {
    QGeoAddress_SetCountry((QGeoAddress*)self, qstring(country));
}

const char* q_geoaddress_country_code(void* self) {
    libqt_string _str = QGeoAddress_CountryCode((QGeoAddress*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_geoaddress_set_country_code(void* self, const char* countryCode) {
    QGeoAddress_SetCountryCode((QGeoAddress*)self, qstring(countryCode));
}

const char* q_geoaddress_state(void* self) {
    libqt_string _str = QGeoAddress_State((QGeoAddress*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_geoaddress_set_state(void* self, const char* state) {
    QGeoAddress_SetState((QGeoAddress*)self, qstring(state));
}

const char* q_geoaddress_county(void* self) {
    libqt_string _str = QGeoAddress_County((QGeoAddress*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_geoaddress_set_county(void* self, const char* county) {
    QGeoAddress_SetCounty((QGeoAddress*)self, qstring(county));
}

const char* q_geoaddress_city(void* self) {
    libqt_string _str = QGeoAddress_City((QGeoAddress*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_geoaddress_set_city(void* self, const char* city) {
    QGeoAddress_SetCity((QGeoAddress*)self, qstring(city));
}

const char* q_geoaddress_district(void* self) {
    libqt_string _str = QGeoAddress_District((QGeoAddress*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_geoaddress_set_district(void* self, const char* district) {
    QGeoAddress_SetDistrict((QGeoAddress*)self, qstring(district));
}

const char* q_geoaddress_postal_code(void* self) {
    libqt_string _str = QGeoAddress_PostalCode((QGeoAddress*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_geoaddress_set_postal_code(void* self, const char* postalCode) {
    QGeoAddress_SetPostalCode((QGeoAddress*)self, qstring(postalCode));
}

const char* q_geoaddress_street(void* self) {
    libqt_string _str = QGeoAddress_Street((QGeoAddress*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_geoaddress_set_street(void* self, const char* street) {
    QGeoAddress_SetStreet((QGeoAddress*)self, qstring(street));
}

const char* q_geoaddress_street_number(void* self) {
    libqt_string _str = QGeoAddress_StreetNumber((QGeoAddress*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_geoaddress_set_street_number(void* self, const char* streetNumber) {
    QGeoAddress_SetStreetNumber((QGeoAddress*)self, qstring(streetNumber));
}

bool q_geoaddress_is_empty(void* self) {
    return QGeoAddress_IsEmpty((QGeoAddress*)self);
}

void q_geoaddress_clear(void* self) {
    QGeoAddress_Clear((QGeoAddress*)self);
}

bool q_geoaddress_is_text_generated(void* self) {
    return QGeoAddress_IsTextGenerated((QGeoAddress*)self);
}

void q_geoaddress_delete(void* self) {
    QGeoAddress_Delete((QGeoAddress*)(self));
}
