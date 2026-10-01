#pragma once
#ifndef LIBQTIMEZONE_H
#define LIBQTIMEZONE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html)

/// q_timezone_new constructs a new QTimeZone object.
///
QTimeZone* q_timezone_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html)

/// q_timezone_new2 constructs a new QTimeZone object.
///
/// @param spec enum QTimeZone__Initialization
///
QTimeZone* q_timezone_new2(int32_t spec);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html)

/// q_timezone_new3 constructs a new QTimeZone object.
///
/// @param offsetSeconds int
///
QTimeZone* q_timezone_new3(int offsetSeconds);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html)

/// q_timezone_new4 constructs a new QTimeZone object.
///
/// @param ianaId char*
///
QTimeZone* q_timezone_new4(char* ianaId);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html)

/// q_timezone_new5 constructs a new QTimeZone object.
///
/// @param zoneId char*
/// @param offsetSeconds int
/// @param name const char*
/// @param abbreviation const char*
///
QTimeZone* q_timezone_new5(char* zoneId, int offsetSeconds, const char* name, const char* abbreviation);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html)

/// q_timezone_new6 constructs a new QTimeZone object.
///
/// @param other QTimeZone*
///
QTimeZone* q_timezone_new6(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html)

/// q_timezone_new7 constructs a new QTimeZone object.
///
/// @param zoneId char*
/// @param offsetSeconds int
/// @param name const char*
/// @param abbreviation const char*
/// @param territory enum QLocale__Country
///
QTimeZone* q_timezone_new7(char* zoneId, int offsetSeconds, const char* name, const char* abbreviation, uint16_t territory);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html)

/// q_timezone_new8 constructs a new QTimeZone object.
///
/// @param zoneId char*
/// @param offsetSeconds int
/// @param name const char*
/// @param abbreviation const char*
/// @param territory enum QLocale__Country
/// @param comment const char*
///
QTimeZone* q_timezone_new8(char* zoneId, int offsetSeconds, const char* name, const char* abbreviation, uint16_t territory, const char* comment);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#operator-eq)
///
/// @param self QTimeZone*
/// @param other QTimeZone*
///
void q_timezone_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#swap)
///
/// @param self QTimeZone*
/// @param other QTimeZone*
///
void q_timezone_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#isValid)
///
/// @param self const QTimeZone*
///
bool q_timezone_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#fromDurationAheadOfUtc)
///
/// @param offset int64_t of seconds
///
QTimeZone* q_timezone_from_duration_ahead_of_utc(int64_t offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#fromSecondsAheadOfUtc)
///
/// @param offset int
///
QTimeZone* q_timezone_from_seconds_ahead_of_utc(int offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#timeSpec)
///
/// @param self const QTimeZone*
///
/// @return enum Qt__TimeSpec
///
int32_t q_timezone_time_spec(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#fixedSecondsAheadOfUtc)
///
/// @param self const QTimeZone*
///
int32_t q_timezone_fixed_seconds_ahead_of_utc(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#isUtcOrFixedOffset)
///
/// @param spec enum Qt__TimeSpec
///
bool q_timezone_is_utc_or_fixed_offset(int32_t spec);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#isUtcOrFixedOffset)
///
/// @param self const QTimeZone*
///
bool q_timezone_is_utc_or_fixed_offset2(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#asBackendZone)
///
/// @param self const QTimeZone*
///
QTimeZone* q_timezone_as_backend_zone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#hasAlternativeName)
///
/// @param self const QTimeZone*
/// @param alias char*
///
bool q_timezone_has_alternative_name(const void* self, char* alias);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#id)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QTimeZone*
///
char* q_timezone_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#territory)
///
/// @param self const QTimeZone*
///
/// @return enum QLocale__Country
///
uint16_t q_timezone_territory(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#country)
///
/// @param self const QTimeZone*
///
/// @return enum QLocale__Country
///
uint16_t q_timezone_country(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#comment)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTimeZone*
///
const char* q_timezone_comment(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#displayName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTimeZone*
/// @param atDateTime QDateTime*
///
const char* q_timezone_display_name(const void* self, const void* atDateTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#displayName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTimeZone*
/// @param timeType enum QTimeZone__TimeType
///
const char* q_timezone_display_name2(const void* self, int32_t timeType);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#abbreviation)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTimeZone*
/// @param atDateTime QDateTime*
///
const char* q_timezone_abbreviation(const void* self, const void* atDateTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#offsetFromUtc)
///
/// @param self const QTimeZone*
/// @param atDateTime QDateTime*
///
int32_t q_timezone_offset_from_utc(const void* self, const void* atDateTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#standardTimeOffset)
///
/// @param self const QTimeZone*
/// @param atDateTime QDateTime*
///
int32_t q_timezone_standard_time_offset(const void* self, const void* atDateTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#daylightTimeOffset)
///
/// @param self const QTimeZone*
/// @param atDateTime QDateTime*
///
int32_t q_timezone_daylight_time_offset(const void* self, const void* atDateTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#hasDaylightTime)
///
/// @param self const QTimeZone*
///
bool q_timezone_has_daylight_time(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#isDaylightTime)
///
/// @param self const QTimeZone*
/// @param atDateTime QDateTime*
///
bool q_timezone_is_daylight_time(const void* self, const void* atDateTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#offsetData)
///
/// @param self const QTimeZone*
/// @param forDateTime QDateTime*
///
QTimeZone__OffsetData* q_timezone_offset_data(const void* self, const void* forDateTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#hasTransitions)
///
/// @param self const QTimeZone*
///
bool q_timezone_has_transitions(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#nextTransition)
///
/// @param self const QTimeZone*
/// @param afterDateTime QDateTime*
///
QTimeZone__OffsetData* q_timezone_next_transition(const void* self, const void* afterDateTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#previousTransition)
///
/// @param self const QTimeZone*
/// @param beforeDateTime QDateTime*
///
QTimeZone__OffsetData* q_timezone_previous_transition(const void* self, const void* beforeDateTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#transitions)
///
/// @param self const QTimeZone*
/// @param fromDateTime QDateTime*
/// @param toDateTime QDateTime*
///
/// @return libqt_list of QTimeZone__OffsetData*
///
libqt_list q_timezone_transitions(const void* self, const void* fromDateTime, const void* toDateTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#systemTimeZoneId)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
char* q_timezone_system_time_zone_id();

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#systemTimeZone)
///
QTimeZone* q_timezone_system_time_zone();

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#utc)
///
QTimeZone* q_timezone_utc();

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#isTimeZoneIdAvailable)
///
/// @param ianaId char*
///
bool q_timezone_is_time_zone_id_available(char* ianaId);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#availableTimeZoneIds)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** q_timezone_available_time_zone_ids();

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#availableTimeZoneIds)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param territory enum QLocale__Country
///
const char** q_timezone_available_time_zone_ids2(uint16_t territory);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#availableTimeZoneIds)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param offsetSeconds int
///
const char** q_timezone_available_time_zone_ids3(int offsetSeconds);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#ianaIdToWindowsId)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param ianaId char*
///
char* q_timezone_iana_id_to_windows_id(char* ianaId);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#windowsIdToDefaultIanaId)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param windowsId char*
///
char* q_timezone_windows_id_to_default_iana_id(char* windowsId);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#windowsIdToDefaultIanaId)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param windowsId char*
/// @param territory enum QLocale__Country
///
char* q_timezone_windows_id_to_default_iana_id2(char* windowsId, uint16_t territory);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#windowsIdToIanaIds)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param windowsId char*
///
const char** q_timezone_windows_id_to_iana_ids(char* windowsId);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#windowsIdToIanaIds)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param windowsId char*
/// @param territory enum QLocale__Country
///
const char** q_timezone_windows_id_to_iana_ids2(char* windowsId, uint16_t territory);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#displayName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTimeZone*
/// @param atDateTime QDateTime*
/// @param nameType enum QTimeZone__NameType
///
const char* q_timezone_display_name22(const void* self, const void* atDateTime, int32_t nameType);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#displayName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTimeZone*
/// @param atDateTime QDateTime*
/// @param nameType enum QTimeZone__NameType
/// @param locale QLocale*
///
const char* q_timezone_display_name3(const void* self, const void* atDateTime, int32_t nameType, const void* locale);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#displayName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTimeZone*
/// @param timeType enum QTimeZone__TimeType
/// @param nameType enum QTimeZone__NameType
///
const char* q_timezone_display_name23(const void* self, int32_t timeType, int32_t nameType);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#displayName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTimeZone*
/// @param timeType enum QTimeZone__TimeType
/// @param nameType enum QTimeZone__NameType
/// @param locale QLocale*
///
const char* q_timezone_display_name32(const void* self, int32_t timeType, int32_t nameType, const void* locale);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#dtor.QTimeZone)
///
/// Delete this object from C++ memory.
///
/// @param self QTimeZone*
///
void q_timezone_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html)

/// q_timezone__offsetdata_new constructs a new QTimeZone::OffsetData object.
///
QTimeZone__OffsetData* q_timezone__offsetdata_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html)

/// q_timezone__offsetdata_new2 constructs a new QTimeZone::OffsetData object.
///
/// @param param1 QTimeZone__OffsetData*
///
QTimeZone__OffsetData* q_timezone__offsetdata_new2(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#abbreviation-var)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTimeZone__OffsetData*
///
const char* q_timezone__offsetdata_abbreviation(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#abbreviation-var)
///
/// @param self QTimeZone__OffsetData*
/// @param abbreviation const char*
///
void q_timezone__offsetdata_set_abbreviation(void* self, const char* abbreviation);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#atUtc-var)
///
/// @param self const QTimeZone__OffsetData*
///
QDateTime* q_timezone__offsetdata_at_utc(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#atUtc-var)
///
/// @param self QTimeZone__OffsetData*
/// @param atUtc QDateTime*
///
void q_timezone__offsetdata_set_at_utc(void* self, void* atUtc);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#offsetFromUtc-var)
///
/// @param self const QTimeZone__OffsetData*
///
int32_t q_timezone__offsetdata_offset_from_utc(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#offsetFromUtc-var)
///
/// @param self QTimeZone__OffsetData*
/// @param offsetFromUtc int
///
void q_timezone__offsetdata_set_offset_from_utc(void* self, int offsetFromUtc);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#standardTimeOffset-var)
///
/// @param self const QTimeZone__OffsetData*
///
int32_t q_timezone__offsetdata_standard_time_offset(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#standardTimeOffset-var)
///
/// @param self QTimeZone__OffsetData*
/// @param standardTimeOffset int
///
void q_timezone__offsetdata_set_standard_time_offset(void* self, int standardTimeOffset);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#daylightTimeOffset-var)
///
/// @param self const QTimeZone__OffsetData*
///
int32_t q_timezone__offsetdata_daylight_time_offset(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#daylightTimeOffset-var)
///
/// @param self QTimeZone__OffsetData*
/// @param daylightTimeOffset int
///
void q_timezone__offsetdata_set_daylight_time_offset(void* self, int daylightTimeOffset);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#operator-eq)
///
/// @param self QTimeZone__OffsetData*
/// @param param1 QTimeZone__OffsetData*
///
void q_timezone__offsetdata_operator_assign(void* self, const void* param1);

/// Delete this object from C++ memory.
///
/// @param self QTimeZone__OffsetData*
///
void q_timezone__offsetdata_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#public-types)

typedef enum {
    QTIMEZONE_INITIALIZATION_LOCALTIME = 0,
    QTIMEZONE_INITIALIZATION_UTC = 1
} QTimeZone__Initialization;

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#public-types)

typedef enum {
    QTIMEZONE_TIMETYPE_STANDARDTIME = 0,
    QTIMEZONE_TIMETYPE_DAYLIGHTTIME = 1,
    QTIMEZONE_TIMETYPE_GENERICTIME = 2
} QTimeZone__TimeType;

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#public-types)

typedef enum {
    QTIMEZONE_NAMETYPE_DEFAULTNAME = 0,
    QTIMEZONE_NAMETYPE_LONGNAME = 1,
    QTIMEZONE_NAMETYPE_SHORTNAME = 2,
    QTIMEZONE_NAMETYPE_OFFSETNAME = 3
} QTimeZone__NameType;

#endif
