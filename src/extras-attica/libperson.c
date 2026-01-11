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
    // Convert QMap<QString,QString> to libqt_map
    libqt_map _out = Attica__Person_ExtendedAttributes((Attica__Person*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    char** _ret_keys = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string keys in k_attica__person_extended_attributes");
        abort();
    }
    libqt_string* _out_values = (libqt_string*)_out.values;
    const char** _ret_values = (const char**)malloc(_ret.len * sizeof(const char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_attica__person_extended_attributes");
        free(_out.keys);
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = (char*)malloc(_out_keys[i].len + 1);
        if (_ret_keys[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
            }
            free(_ret_keys);
            fprintf(stderr, "Failed to allocate memory for map keys in k_attica__person_extended_attributes");
            abort();
        }
        memcpy(_ret_keys[i], _out_keys[i].data, _out_keys[i].len);
        _ret_keys[i][_out_keys[i].len] = '\0';
        _ret_values[i] = (const char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
                libqt_free(_ret_values[j]);
            }
            free(_ret_keys);
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_attica__person_extended_attributes");
            abort();
        }
    }
    _ret.keys = (void*)_ret_keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_keys[i].data);
        libqt_free(_out_values[i].data);
    }
    free(_out.keys);
    free(_out.values);
    return _ret;
}

bool k_attica__person_is_valid(void* self) {
    return Attica__Person_IsValid((Attica__Person*)self);
}

void k_attica__person_delete(void* self) {
    Attica__Person_Delete((Attica__Person*)(self));
}
