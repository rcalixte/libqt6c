#pragma once
#ifndef SRC_QT6C_LIBQTIMEZONE_H
#define SRC_QT6C_LIBQTIMEZONE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
/// @param ianaId const char*
///
QTimeZone* q_timezone_new4(const char* ianaId);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html)

/// q_timezone_new5 constructs a new QTimeZone object.
///
/// @param zoneId const char*
/// @param offsetSeconds int
/// @param name const char*
/// @param abbreviation const char*
///
QTimeZone* q_timezone_new5(const char* zoneId, int offsetSeconds, const char* name, const char* abbreviation);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html)

/// q_timezone_new6 constructs a new QTimeZone object.
///
/// @param other QTimeZone*
///
QTimeZone* q_timezone_new6(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html)

/// q_timezone_new7 constructs a new QTimeZone object.
///
/// @param zoneId const char*
/// @param offsetSeconds int
/// @param name const char*
/// @param abbreviation const char*
/// @param territory enum QLocale__Country
///
QTimeZone* q_timezone_new7(const char* zoneId, int offsetSeconds, const char* name, const char* abbreviation, uint16_t territory);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html)

/// q_timezone_new8 constructs a new QTimeZone object.
///
/// @param zoneId const char*
/// @param offsetSeconds int
/// @param name const char*
/// @param abbreviation const char*
/// @param territory enum QLocale__Country
/// @param comment const char*
///
QTimeZone* q_timezone_new8(const char* zoneId, int offsetSeconds, const char* name, const char* abbreviation, uint16_t territory, const char* comment);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#operator-eq)
///
/// @param self QTimeZone*
/// @param other QTimeZone*
///
void q_timezone_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#swap)
///
/// @param self QTimeZone*
/// @param other QTimeZone*
///
void q_timezone_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#isValid)
///
/// @param self QTimeZone*
///
bool q_timezone_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#fromSecondsAheadOfUtc)
///
/// @param offset int
///
QTimeZone* q_timezone_from_seconds_ahead_of_utc(int offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#timeSpec)
///
/// @param self QTimeZone*
///
/// @return enum Qt__TimeSpec
///
int32_t q_timezone_time_spec(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#fixedSecondsAheadOfUtc)
///
/// @param self QTimeZone*
///
int32_t q_timezone_fixed_seconds_ahead_of_utc(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#isUtcOrFixedOffset)
///
/// @param spec enum Qt__TimeSpec
///
bool q_timezone_is_utc_or_fixed_offset(int32_t spec);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#isUtcOrFixedOffset)
///
/// @param self QTimeZone*
///
bool q_timezone_is_utc_or_fixed_offset2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#asBackendZone)
///
/// @param self QTimeZone*
///
QTimeZone* q_timezone_as_backend_zone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#hasAlternativeName)
///
/// @param self QTimeZone*
/// @param alias const char*
///
bool q_timezone_has_alternative_name(void* self, const char* alias);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#id)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QTimeZone*
///
char* q_timezone_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#territory)
///
/// @param self QTimeZone*
///
/// @return enum QLocale__Country
///
uint16_t q_timezone_territory(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#country)
///
/// @param self QTimeZone*
///
/// @return enum QLocale__Country
///
uint16_t q_timezone_country(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#comment)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTimeZone*
///
const char* q_timezone_comment(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#displayName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTimeZone*
/// @param atDateTime QDateTime*
///
const char* q_timezone_display_name(void* self, void* atDateTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#displayName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTimeZone*
/// @param timeType enum QTimeZone__TimeType
///
const char* q_timezone_display_name2(void* self, int32_t timeType);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#abbreviation)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTimeZone*
/// @param atDateTime QDateTime*
///
const char* q_timezone_abbreviation(void* self, void* atDateTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#offsetFromUtc)
///
/// @param self QTimeZone*
/// @param atDateTime QDateTime*
///
int32_t q_timezone_offset_from_utc(void* self, void* atDateTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#standardTimeOffset)
///
/// @param self QTimeZone*
/// @param atDateTime QDateTime*
///
int32_t q_timezone_standard_time_offset(void* self, void* atDateTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#daylightTimeOffset)
///
/// @param self QTimeZone*
/// @param atDateTime QDateTime*
///
int32_t q_timezone_daylight_time_offset(void* self, void* atDateTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#hasDaylightTime)
///
/// @param self QTimeZone*
///
bool q_timezone_has_daylight_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#isDaylightTime)
///
/// @param self QTimeZone*
/// @param atDateTime QDateTime*
///
bool q_timezone_is_daylight_time(void* self, void* atDateTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#offsetData)
///
/// @param self QTimeZone*
/// @param forDateTime QDateTime*
///
QTimeZone__OffsetData* q_timezone_offset_data(void* self, void* forDateTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#hasTransitions)
///
/// @param self QTimeZone*
///
bool q_timezone_has_transitions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#nextTransition)
///
/// @param self QTimeZone*
/// @param afterDateTime QDateTime*
///
QTimeZone__OffsetData* q_timezone_next_transition(void* self, void* afterDateTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#previousTransition)
///
/// @param self QTimeZone*
/// @param beforeDateTime QDateTime*
///
QTimeZone__OffsetData* q_timezone_previous_transition(void* self, void* beforeDateTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#transitions)
///
/// @param self QTimeZone*
/// @param fromDateTime QDateTime*
/// @param toDateTime QDateTime*
///
libqt_list /* of QTimeZone__OffsetData* */ q_timezone_transitions(void* self, void* fromDateTime, void* toDateTime);

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
/// @param ianaId const char*
///
bool q_timezone_is_time_zone_id_available(const char* ianaId);

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
/// @param ianaId const char*
///
char* q_timezone_iana_id_to_windows_id(const char* ianaId);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#windowsIdToDefaultIanaId)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param windowsId const char*
///
char* q_timezone_windows_id_to_default_iana_id(const char* windowsId);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#windowsIdToDefaultIanaId)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param windowsId const char*
/// @param territory enum QLocale__Country
///
char* q_timezone_windows_id_to_default_iana_id2(const char* windowsId, uint16_t territory);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#windowsIdToIanaIds)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param windowsId const char*
///
const char** q_timezone_windows_id_to_iana_ids(const char* windowsId);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#windowsIdToIanaIds)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param windowsId const char*
/// @param territory enum QLocale__Country
///
const char** q_timezone_windows_id_to_iana_ids2(const char* windowsId, uint16_t territory);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#displayName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTimeZone*
/// @param atDateTime QDateTime*
/// @param nameType enum QTimeZone__NameType
///
const char* q_timezone_display_name22(void* self, void* atDateTime, int32_t nameType);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#displayName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTimeZone*
/// @param atDateTime QDateTime*
/// @param nameType enum QTimeZone__NameType
/// @param locale QLocale*
///
const char* q_timezone_display_name3(void* self, void* atDateTime, int32_t nameType, void* locale);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#displayName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTimeZone*
/// @param timeType enum QTimeZone__TimeType
/// @param nameType enum QTimeZone__NameType
///
const char* q_timezone_display_name23(void* self, int32_t timeType, int32_t nameType);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone.html#displayName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTimeZone*
/// @param timeType enum QTimeZone__TimeType
/// @param nameType enum QTimeZone__NameType
/// @param locale QLocale*
///
const char* q_timezone_display_name32(void* self, int32_t timeType, int32_t nameType, void* locale);

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
/// @param param1 QTimeZone__OffsetData*
///
QTimeZone__OffsetData* q_timezone__offsetdata_new(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html)

/// q_timezone__offsetdata_new2 constructs a new QTimeZone::OffsetData object.
///
QTimeZone__OffsetData* q_timezone__offsetdata_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#abbreviation-var)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTimeZone__OffsetData*
///
const char* q_timezone__offsetdata_abbreviation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#abbreviation-var)
///
/// @param self QTimeZone__OffsetData*
/// @param abbreviation const char*
///
void q_timezone__offsetdata_set_abbreviation(void* self, const char* abbreviation);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#atUtc-var)
///
/// @param self QTimeZone__OffsetData*
///
QDateTime* q_timezone__offsetdata_at_utc(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#atUtc-var)
///
/// @param self QTimeZone__OffsetData*
/// @param atUtc QDateTime*
///
void q_timezone__offsetdata_set_at_utc(void* self, void* atUtc);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#offsetFromUtc-var)
///
/// @param self QTimeZone__OffsetData*
///
int32_t q_timezone__offsetdata_offset_from_utc(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#offsetFromUtc-var)
///
/// @param self QTimeZone__OffsetData*
/// @param offsetFromUtc int
///
void q_timezone__offsetdata_set_offset_from_utc(void* self, int offsetFromUtc);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#standardTimeOffset-var)
///
/// @param self QTimeZone__OffsetData*
///
int32_t q_timezone__offsetdata_standard_time_offset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#standardTimeOffset-var)
///
/// @param self QTimeZone__OffsetData*
/// @param standardTimeOffset int
///
void q_timezone__offsetdata_set_standard_time_offset(void* self, int standardTimeOffset);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimezone-offsetdata.html#daylightTimeOffset-var)
///
/// @param self QTimeZone__OffsetData*
///
int32_t q_timezone__offsetdata_daylight_time_offset(void* self);

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
void q_timezone__offsetdata_operator_assign(void* self, void* param1);

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
