#include "libqdatetime.hpp"
#include "libqlocale.hpp"
#include <string.h>
#include "libqtimezone.hpp"
#include "libqtimezone.h"

QTimeZone* q_timezone_new() {
    return QTimeZone_new();
}

QTimeZone* q_timezone_new2(const char* ianaId) {
    return QTimeZone_new2(qstring(ianaId));
}

QTimeZone* q_timezone_new3(int offsetSeconds) {
    return QTimeZone_new3(offsetSeconds);
}

QTimeZone* q_timezone_new4(const char* zoneId, int offsetSeconds, const char* name, const char* abbreviation) {
    return QTimeZone_new4(qstring(zoneId), offsetSeconds, qstring(name), qstring(abbreviation));
}

QTimeZone* q_timezone_new5(void* other) {
    return QTimeZone_new5((QTimeZone*)other);
}

QTimeZone* q_timezone_new6(const char* zoneId, int offsetSeconds, const char* name, const char* abbreviation, int64_t territory) {
    return QTimeZone_new6(qstring(zoneId), offsetSeconds, qstring(name), qstring(abbreviation), territory);
}

QTimeZone* q_timezone_new7(const char* zoneId, int offsetSeconds, const char* name, const char* abbreviation, int64_t territory, const char* comment) {
    return QTimeZone_new7(qstring(zoneId), offsetSeconds, qstring(name), qstring(abbreviation), territory, qstring(comment));
}

void q_timezone_operator_assign(void* self, void* other) {
    QTimeZone_OperatorAssign((QTimeZone*)self, (QTimeZone*)other);
}

void q_timezone_swap(void* self, void* other) {
    QTimeZone_Swap((QTimeZone*)self, (QTimeZone*)other);
}

bool q_timezone_is_valid(void* self) {
    return QTimeZone_IsValid((QTimeZone*)self);
}

char* q_timezone_id(void* self) {
    libqt_string _str = QTimeZone_Id((QTimeZone*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_timezone_territory(void* self) {
    return QTimeZone_Territory((QTimeZone*)self);
}

int64_t q_timezone_country(void* self) {
    return QTimeZone_Country((QTimeZone*)self);
}

const char* q_timezone_comment(void* self) {
    libqt_string _str = QTimeZone_Comment((QTimeZone*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_timezone_display_name(void* self, void* atDateTime) {
    libqt_string _str = QTimeZone_DisplayName((QTimeZone*)self, (QDateTime*)atDateTime);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_timezone_display_name_with_time_type(void* self, int64_t timeType) {
    libqt_string _str = QTimeZone_DisplayNameWithTimeType((QTimeZone*)self, timeType);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_timezone_abbreviation(void* self, void* atDateTime) {
    libqt_string _str = QTimeZone_Abbreviation((QTimeZone*)self, (QDateTime*)atDateTime);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_timezone_offset_from_utc(void* self, void* atDateTime) {
    return QTimeZone_OffsetFromUtc((QTimeZone*)self, (QDateTime*)atDateTime);
}

int32_t q_timezone_standard_time_offset(void* self, void* atDateTime) {
    return QTimeZone_StandardTimeOffset((QTimeZone*)self, (QDateTime*)atDateTime);
}

int32_t q_timezone_daylight_time_offset(void* self, void* atDateTime) {
    return QTimeZone_DaylightTimeOffset((QTimeZone*)self, (QDateTime*)atDateTime);
}

bool q_timezone_has_daylight_time(void* self) {
    return QTimeZone_HasDaylightTime((QTimeZone*)self);
}

bool q_timezone_is_daylight_time(void* self, void* atDateTime) {
    return QTimeZone_IsDaylightTime((QTimeZone*)self, (QDateTime*)atDateTime);
}

QTimeZone__OffsetData* q_timezone_offset_data(void* self, void* forDateTime) {
    return QTimeZone_OffsetData((QTimeZone*)self, (QDateTime*)forDateTime);
}

bool q_timezone_has_transitions(void* self) {
    return QTimeZone_HasTransitions((QTimeZone*)self);
}

QTimeZone__OffsetData* q_timezone_next_transition(void* self, void* afterDateTime) {
    return QTimeZone_NextTransition((QTimeZone*)self, (QDateTime*)afterDateTime);
}

QTimeZone__OffsetData* q_timezone_previous_transition(void* self, void* beforeDateTime) {
    return QTimeZone_PreviousTransition((QTimeZone*)self, (QDateTime*)beforeDateTime);
}

libqt_list /* of QTimeZone__OffsetData* */ q_timezone_transitions(void* self, void* fromDateTime, void* toDateTime) {
    libqt_list _arr = QTimeZone_Transitions((QTimeZone*)self, (QDateTime*)fromDateTime, (QDateTime*)toDateTime);
    return _arr;
}

char* q_timezone_system_time_zone_id() {
    libqt_string _str = QTimeZone_SystemTimeZoneId();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QTimeZone* q_timezone_system_time_zone() {
    return QTimeZone_SystemTimeZone();
}

QTimeZone* q_timezone_utc() {
    return QTimeZone_Utc();
}

bool q_timezone_is_time_zone_id_available(const char* ianaId) {
    return QTimeZone_IsTimeZoneIdAvailable(qstring(ianaId));
}

const char** q_timezone_available_time_zone_ids() {
    libqt_list _arr = QTimeZone_AvailableTimeZoneIds();
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

const char** q_timezone_available_time_zone_ids_with_territory(int64_t territory) {
    libqt_list _arr = QTimeZone_AvailableTimeZoneIdsWithTerritory(territory);
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

const char** q_timezone_available_time_zone_ids_with_offset_seconds(int offsetSeconds) {
    libqt_list _arr = QTimeZone_AvailableTimeZoneIdsWithOffsetSeconds(offsetSeconds);
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

char* q_timezone_iana_id_to_windows_id(const char* ianaId) {
    libqt_string _str = QTimeZone_IanaIdToWindowsId(qstring(ianaId));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_timezone_windows_id_to_default_iana_id(const char* windowsId) {
    libqt_string _str = QTimeZone_WindowsIdToDefaultIanaId(qstring(windowsId));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_timezone_windows_id_to_default_iana_id2(const char* windowsId, int64_t territory) {
    libqt_string _str = QTimeZone_WindowsIdToDefaultIanaId2(qstring(windowsId), territory);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_timezone_windows_id_to_iana_ids(const char* windowsId) {
    libqt_list _arr = QTimeZone_WindowsIdToIanaIds(qstring(windowsId));
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

const char** q_timezone_windows_id_to_iana_ids2(const char* windowsId, int64_t territory) {
    libqt_list _arr = QTimeZone_WindowsIdToIanaIds2(qstring(windowsId), territory);
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

const char* q_timezone_display_name2(void* self, void* atDateTime, int64_t nameType) {
    libqt_string _str = QTimeZone_DisplayName2((QTimeZone*)self, (QDateTime*)atDateTime, nameType);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_timezone_display_name3(void* self, void* atDateTime, int64_t nameType, void* locale) {
    libqt_string _str = QTimeZone_DisplayName3((QTimeZone*)self, (QDateTime*)atDateTime, nameType, (QLocale*)locale);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_timezone_display_name22(void* self, int64_t timeType, int64_t nameType) {
    libqt_string _str = QTimeZone_DisplayName22((QTimeZone*)self, timeType, nameType);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_timezone_display_name32(void* self, int64_t timeType, int64_t nameType, void* locale) {
    libqt_string _str = QTimeZone_DisplayName32((QTimeZone*)self, timeType, nameType, (QLocale*)locale);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_timezone_delete(void* self) {
    QTimeZone_Delete((QTimeZone*)(self));
}

QTimeZone__OffsetData* q_timezone__offsetdata_new(void* param1) {
    return QTimeZone__OffsetData_new((QTimeZone__OffsetData*)param1);
}

void q_timezone__offsetdata_operator_assign(void* self, void* param1) {
    QTimeZone__OffsetData_OperatorAssign((QTimeZone__OffsetData*)self, (QTimeZone__OffsetData*)param1);
}

void q_timezone__offsetdata_delete(void* self) {
    QTimeZone__OffsetData_Delete((QTimeZone__OffsetData*)(self));
}
