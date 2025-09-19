#include "../libqdatetime.hpp"
#include "../libqurl.hpp"
#include "libperson.hpp"
#include "libperson.h"

Attica__Person* k_attica__person_new() {
    return Attica__Person_new();
}

Attica__Person* k_attica__person_new2(void* other) {
    return Attica__Person_new2((Attica__Person*)other);
}

void k_attica__person_operator_assign(void* self, void* other) {
    Attica__Person_OperatorAssign((Attica__Person*)self, (Attica__Person*)other);
}

void k_attica__person_set_id(void* self, const char* id) {
    Attica__Person_SetId((Attica__Person*)self, qstring(id));
}

const char* k_attica__person_id(void* self) {
    libqt_string _str = Attica__Person_Id((Attica__Person*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__person_set_first_name(void* self, const char* firstName) {
    Attica__Person_SetFirstName((Attica__Person*)self, qstring(firstName));
}

const char* k_attica__person_first_name(void* self) {
    libqt_string _str = Attica__Person_FirstName((Attica__Person*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__person_set_last_name(void* self, const char* lastName) {
    Attica__Person_SetLastName((Attica__Person*)self, qstring(lastName));
}

const char* k_attica__person_last_name(void* self) {
    libqt_string _str = Attica__Person_LastName((Attica__Person*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__person_set_birthday(void* self, void* birthday) {
    Attica__Person_SetBirthday((Attica__Person*)self, (QDate*)birthday);
}

QDate* k_attica__person_birthday(void* self) {
    return Attica__Person_Birthday((Attica__Person*)self);
}

void k_attica__person_set_country(void* self, const char* country) {
    Attica__Person_SetCountry((Attica__Person*)self, qstring(country));
}

const char* k_attica__person_country(void* self) {
    libqt_string _str = Attica__Person_Country((Attica__Person*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__person_set_latitude(void* self, double latitude) {
    Attica__Person_SetLatitude((Attica__Person*)self, latitude);
}

double k_attica__person_latitude(void* self) {
    return Attica__Person_Latitude((Attica__Person*)self);
}

void k_attica__person_set_longitude(void* self, double longitude) {
    Attica__Person_SetLongitude((Attica__Person*)self, longitude);
}

double k_attica__person_longitude(void* self) {
    return Attica__Person_Longitude((Attica__Person*)self);
}

void k_attica__person_set_avatar_url(void* self, void* avatarUrl) {
    Attica__Person_SetAvatarUrl((Attica__Person*)self, (QUrl*)avatarUrl);
}

QUrl* k_attica__person_avatar_url(void* self) {
    return Attica__Person_AvatarUrl((Attica__Person*)self);
}

void k_attica__person_set_homepage(void* self, const char* homepage) {
    Attica__Person_SetHomepage((Attica__Person*)self, qstring(homepage));
}

const char* k_attica__person_homepage(void* self) {
    libqt_string _str = Attica__Person_Homepage((Attica__Person*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__person_set_city(void* self, const char* city) {
    Attica__Person_SetCity((Attica__Person*)self, qstring(city));
}

const char* k_attica__person_city(void* self) {
    libqt_string _str = Attica__Person_City((Attica__Person*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__person_add_extended_attribute(void* self, const char* key, const char* value) {
    Attica__Person_AddExtendedAttribute((Attica__Person*)self, qstring(key), qstring(value));
}

const char* k_attica__person_extended_attribute(void* self, const char* key) {
    libqt_string _str = Attica__Person_ExtendedAttribute((Attica__Person*)self, qstring(key));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_map /* of const char* to const char* */ k_attica__person_extended_attributes(void* self) {
    return Attica__Person_ExtendedAttributes((Attica__Person*)self);
}

bool k_attica__person_is_valid(void* self) {
    return Attica__Person_IsValid((Attica__Person*)self);
}

void k_attica__person_delete(void* self) {
    Attica__Person_Delete((Attica__Person*)(self));
}
