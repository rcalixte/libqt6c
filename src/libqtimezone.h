#pragma once
#ifndef SRCQT6C_LIBQTIMEZONE_H
#define SRCQT6C_LIBQTIMEZONE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqdatetime.h"
#include "libqlocale.h"
#include <string.h>

QTimeZone* q_timezone_new();
QTimeZone* q_timezone_new2(const char* ianaId);
QTimeZone* q_timezone_new3(int offsetSeconds);
QTimeZone* q_timezone_new4(const char* zoneId, int offsetSeconds, const char* name, const char* abbreviation);
QTimeZone* q_timezone_new5(void* other);
QTimeZone* q_timezone_new6(const char* zoneId, int offsetSeconds, const char* name, const char* abbreviation, int64_t territory);
QTimeZone* q_timezone_new7(const char* zoneId, int offsetSeconds, const char* name, const char* abbreviation, int64_t territory, const char* comment);
void q_timezone_operator_assign(void* self, void* other);
void q_timezone_swap(void* self, void* other);
bool q_timezone_is_valid(void* self);
char* q_timezone_id(void* self);
int64_t q_timezone_territory(void* self);
int64_t q_timezone_country(void* self);
const char* q_timezone_comment(void* self);
const char* q_timezone_display_name(void* self, void* atDateTime);
const char* q_timezone_display_name_with_time_type(void* self, int64_t timeType);
const char* q_timezone_abbreviation(void* self, void* atDateTime);
int32_t q_timezone_offset_from_utc(void* self, void* atDateTime);
int32_t q_timezone_standard_time_offset(void* self, void* atDateTime);
int32_t q_timezone_daylight_time_offset(void* self, void* atDateTime);
bool q_timezone_has_daylight_time(void* self);
bool q_timezone_is_daylight_time(void* self, void* atDateTime);
QTimeZone__OffsetData* q_timezone_offset_data(void* self, void* forDateTime);
bool q_timezone_has_transitions(void* self);
QTimeZone__OffsetData* q_timezone_next_transition(void* self, void* afterDateTime);
QTimeZone__OffsetData* q_timezone_previous_transition(void* self, void* beforeDateTime);
libqt_list /* of QTimeZone__OffsetData* */ q_timezone_transitions(void* self, void* fromDateTime, void* toDateTime);
char* q_timezone_system_time_zone_id();
QTimeZone* q_timezone_system_time_zone();
QTimeZone* q_timezone_utc();
bool q_timezone_is_time_zone_id_available(const char* ianaId);
const char** q_timezone_available_time_zone_ids();
const char** q_timezone_available_time_zone_ids_with_territory(int64_t territory);
const char** q_timezone_available_time_zone_ids_with_offset_seconds(int offsetSeconds);
char* q_timezone_iana_id_to_windows_id(const char* ianaId);
char* q_timezone_windows_id_to_default_iana_id(const char* windowsId);
char* q_timezone_windows_id_to_default_iana_id2(const char* windowsId, int64_t territory);
const char** q_timezone_windows_id_to_iana_ids(const char* windowsId);
const char** q_timezone_windows_id_to_iana_ids2(const char* windowsId, int64_t territory);
const char* q_timezone_display_name2(void* self, void* atDateTime, int64_t nameType);
const char* q_timezone_display_name3(void* self, void* atDateTime, int64_t nameType, void* locale);
const char* q_timezone_display_name22(void* self, int64_t timeType, int64_t nameType);
const char* q_timezone_display_name32(void* self, int64_t timeType, int64_t nameType, void* locale);
void q_timezone_delete(void* self);

QTimeZone__OffsetData* q_timezone__offsetdata_new(void* param1);
void q_timezone__offsetdata_operator_assign(void* self, void* param1);
void q_timezone__offsetdata_delete(void* self);

/// https://doc.qt.io/qt-6/qtimezone.html#types

typedef enum {
    QTIMEZONE__MINUTCOFFSETSECS = -50400,
    QTIMEZONE__MAXUTCOFFSETSECS = 50400
} QTimeZone__;

typedef enum {
    QTIMEZONE_TIMETYPE_STANDARDTIME = 0,
    QTIMEZONE_TIMETYPE_DAYLIGHTTIME = 1,
    QTIMEZONE_TIMETYPE_GENERICTIME = 2
} QTimeZone__TimeType;

typedef enum {
    QTIMEZONE_NAMETYPE_DEFAULTNAME = 0,
    QTIMEZONE_NAMETYPE_LONGNAME = 1,
    QTIMEZONE_NAMETYPE_SHORTNAME = 2,
    QTIMEZONE_NAMETYPE_OFFSETNAME = 3
} QTimeZone__NameType;

#endif
