#include "../libqdatetime.hpp"
#include "../libqurl.hpp"
#include "libevent.hpp"
#include "libevent.h"

Attica__Event* k_attica__event_new() {
    return Attica__Event_new();
}

Attica__Event* k_attica__event_new2(void* other) {
    return Attica__Event_new2((Attica__Event*)other);
}

void k_attica__event_operator_assign(void* self, void* other) {
    Attica__Event_OperatorAssign((Attica__Event*)self, (Attica__Event*)other);
}

void k_attica__event_set_id(void* self, const char* id) {
    Attica__Event_SetId((Attica__Event*)self, qstring(id));
}

const char* k_attica__event_id(void* self) {
    libqt_string _str = Attica__Event_Id((Attica__Event*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__event_set_name(void* self, const char* name) {
    Attica__Event_SetName((Attica__Event*)self, qstring(name));
}

const char* k_attica__event_name(void* self) {
    libqt_string _str = Attica__Event_Name((Attica__Event*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__event_set_description(void* self, const char* description) {
    Attica__Event_SetDescription((Attica__Event*)self, qstring(description));
}

const char* k_attica__event_description(void* self) {
    libqt_string _str = Attica__Event_Description((Attica__Event*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__event_set_user(void* self, const char* user) {
    Attica__Event_SetUser((Attica__Event*)self, qstring(user));
}

const char* k_attica__event_user(void* self) {
    libqt_string _str = Attica__Event_User((Attica__Event*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__event_set_start_date(void* self, void* startDate) {
    Attica__Event_SetStartDate((Attica__Event*)self, (QDate*)startDate);
}

QDate* k_attica__event_start_date(void* self) {
    return Attica__Event_StartDate((Attica__Event*)self);
}

void k_attica__event_set_end_date(void* self, void* endDate) {
    Attica__Event_SetEndDate((Attica__Event*)self, (QDate*)endDate);
}

QDate* k_attica__event_end_date(void* self) {
    return Attica__Event_EndDate((Attica__Event*)self);
}

void k_attica__event_set_latitude(void* self, double latitude) {
    Attica__Event_SetLatitude((Attica__Event*)self, latitude);
}

double k_attica__event_latitude(void* self) {
    return Attica__Event_Latitude((Attica__Event*)self);
}

void k_attica__event_set_longitude(void* self, double longitude) {
    Attica__Event_SetLongitude((Attica__Event*)self, longitude);
}

double k_attica__event_longitude(void* self) {
    return Attica__Event_Longitude((Attica__Event*)self);
}

void k_attica__event_set_homepage(void* self, void* homepage) {
    Attica__Event_SetHomepage((Attica__Event*)self, (QUrl*)homepage);
}

QUrl* k_attica__event_homepage(void* self) {
    return Attica__Event_Homepage((Attica__Event*)self);
}

void k_attica__event_set_country(void* self, const char* country) {
    Attica__Event_SetCountry((Attica__Event*)self, qstring(country));
}

const char* k_attica__event_country(void* self) {
    libqt_string _str = Attica__Event_Country((Attica__Event*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__event_set_city(void* self, const char* city) {
    Attica__Event_SetCity((Attica__Event*)self, qstring(city));
}

const char* k_attica__event_city(void* self) {
    libqt_string _str = Attica__Event_City((Attica__Event*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__event_add_extended_attribute(void* self, const char* key, const char* value) {
    Attica__Event_AddExtendedAttribute((Attica__Event*)self, qstring(key), qstring(value));
}

const char* k_attica__event_extended_attribute(void* self, const char* key) {
    libqt_string _str = Attica__Event_ExtendedAttribute((Attica__Event*)self, qstring(key));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_map /* of const char* to const char* */ k_attica__event_extended_attributes(void* self) {
    // Convert QMap<QString,QString> to libqt_map
    libqt_map _out = Attica__Event_ExtendedAttributes((Attica__Event*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    const char** _ret_keys = (const char**)malloc(_ret.len * sizeof(const char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Memory allocation failed in k_attica__event_extended_attributes");
        abort();
    }
    libqt_string* _out_values = (libqt_string*)_out.values;
    const char** _ret_values = (const char**)malloc(_ret.len * sizeof(const char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Memory allocation failed in k_attica__event_extended_attributes");
        free(_out_keys);
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = _out_keys[i].data;
        _ret_values[i] = _out_values[i].data;
    }
    _ret.keys = (void*)_ret_keys;
    _ret.values = (void*)_ret_values;
    free(_out_keys);
    free(_out_values);
    return _ret;
}

bool k_attica__event_is_valid(void* self) {
    return Attica__Event_IsValid((Attica__Event*)self);
}

void k_attica__event_delete(void* self) {
    Attica__Event_Delete((Attica__Event*)(self));
}
