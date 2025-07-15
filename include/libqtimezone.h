#pragma once
#ifndef SRCQT6C_LIBQTIMEZONE_H
#define SRCQT6C_LIBQTIMEZONE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qtimezone.html

/// q_timezone_new constructs a new QTimeZone object.
///
///
QTimeZone* q_timezone_new();

/// q_timezone_new2 constructs a new QTimeZone object.
///
/// ``` enum QTimeZone__Initialization spec ```
QTimeZone* q_timezone_new2(int64_t spec);

/// q_timezone_new3 constructs a new QTimeZone object.
///
/// ``` int offsetSeconds ```
QTimeZone* q_timezone_new3(int offsetSeconds);

/// q_timezone_new4 constructs a new QTimeZone object.
///
/// ``` const char* ianaId ```
QTimeZone* q_timezone_new4(const char* ianaId);

/// q_timezone_new5 constructs a new QTimeZone object.
///
/// ``` const char* zoneId, int offsetSeconds, const char* name, const char* abbreviation ```
QTimeZone* q_timezone_new5(const char* zoneId, int offsetSeconds, const char* name, const char* abbreviation);

/// q_timezone_new6 constructs a new QTimeZone object.
///
/// ``` QTimeZone* other ```
QTimeZone* q_timezone_new6(void* other);

/// q_timezone_new7 constructs a new QTimeZone object.
///
/// ``` const char* zoneId, int offsetSeconds, const char* name, const char* abbreviation, enum QLocale__Country territory ```
QTimeZone* q_timezone_new7(const char* zoneId, int offsetSeconds, const char* name, const char* abbreviation, int64_t territory);

/// q_timezone_new8 constructs a new QTimeZone object.
///
/// ``` const char* zoneId, int offsetSeconds, const char* name, const char* abbreviation, enum QLocale__Country territory, const char* comment ```
QTimeZone* q_timezone_new8(const char* zoneId, int offsetSeconds, const char* name, const char* abbreviation, int64_t territory, const char* comment);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#operator=)
///
/// ``` QTimeZone* self, QTimeZone* other ```
void q_timezone_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#swap)
///
/// ``` QTimeZone* self, QTimeZone* other ```
void q_timezone_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#isValid)
///
/// ``` QTimeZone* self ```
bool q_timezone_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#fromSecondsAheadOfUtc)
///
/// ``` int offset ```
QTimeZone* q_timezone_from_seconds_ahead_of_utc(int offset);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#timeSpec)
///
/// ``` QTimeZone* self ```
int64_t q_timezone_time_spec(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#fixedSecondsAheadOfUtc)
///
/// ``` QTimeZone* self ```
int32_t q_timezone_fixed_seconds_ahead_of_utc(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#isUtcOrFixedOffset)
///
/// ``` enum Qt__TimeSpec spec ```
bool q_timezone_is_utc_or_fixed_offset(int64_t spec);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#isUtcOrFixedOffset)
///
/// ``` QTimeZone* self ```
bool q_timezone_is_utc_or_fixed_offset2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#asBackendZone)
///
/// ``` QTimeZone* self ```
QTimeZone* q_timezone_as_backend_zone(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#hasAlternativeName)
///
/// ``` QTimeZone* self, const char* alias ```
bool q_timezone_has_alternative_name(void* self, const char* alias);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#id)
///
/// ``` QTimeZone* self ```
char* q_timezone_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#territory)
///
/// ``` QTimeZone* self ```
int64_t q_timezone_territory(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#country)
///
/// ``` QTimeZone* self ```
int64_t q_timezone_country(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#comment)
///
/// ``` QTimeZone* self ```
const char* q_timezone_comment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#displayName)
///
/// ``` QTimeZone* self, QDateTime* atDateTime ```
const char* q_timezone_display_name(void* self, void* atDateTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#displayName)
///
/// ``` QTimeZone* self, enum QTimeZone__TimeType timeType ```
const char* q_timezone_display_name2(void* self, int64_t timeType);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#abbreviation)
///
/// ``` QTimeZone* self, QDateTime* atDateTime ```
const char* q_timezone_abbreviation(void* self, void* atDateTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#offsetFromUtc)
///
/// ``` QTimeZone* self, QDateTime* atDateTime ```
int32_t q_timezone_offset_from_utc(void* self, void* atDateTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#standardTimeOffset)
///
/// ``` QTimeZone* self, QDateTime* atDateTime ```
int32_t q_timezone_standard_time_offset(void* self, void* atDateTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#daylightTimeOffset)
///
/// ``` QTimeZone* self, QDateTime* atDateTime ```
int32_t q_timezone_daylight_time_offset(void* self, void* atDateTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#hasDaylightTime)
///
/// ``` QTimeZone* self ```
bool q_timezone_has_daylight_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#isDaylightTime)
///
/// ``` QTimeZone* self, QDateTime* atDateTime ```
bool q_timezone_is_daylight_time(void* self, void* atDateTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#offsetData)
///
/// ``` QTimeZone* self, QDateTime* forDateTime ```
QTimeZone__OffsetData* q_timezone_offset_data(void* self, void* forDateTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#hasTransitions)
///
/// ``` QTimeZone* self ```
bool q_timezone_has_transitions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#nextTransition)
///
/// ``` QTimeZone* self, QDateTime* afterDateTime ```
QTimeZone__OffsetData* q_timezone_next_transition(void* self, void* afterDateTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#previousTransition)
///
/// ``` QTimeZone* self, QDateTime* beforeDateTime ```
QTimeZone__OffsetData* q_timezone_previous_transition(void* self, void* beforeDateTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#transitions)
///
/// ``` QTimeZone* self, QDateTime* fromDateTime, QDateTime* toDateTime ```
libqt_list /* of QTimeZone__OffsetData* */ q_timezone_transitions(void* self, void* fromDateTime, void* toDateTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#systemTimeZoneId)
///
///
char* q_timezone_system_time_zone_id();

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#systemTimeZone)
///
///
QTimeZone* q_timezone_system_time_zone();

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#utc)
///
///
QTimeZone* q_timezone_utc();

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#isTimeZoneIdAvailable)
///
/// ``` const char* ianaId ```
bool q_timezone_is_time_zone_id_available(const char* ianaId);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#availableTimeZoneIds)
///
///
const char** q_timezone_available_time_zone_ids();

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#availableTimeZoneIds)
///
/// ``` enum QLocale__Country territory ```
const char** q_timezone_available_time_zone_ids2(int64_t territory);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#availableTimeZoneIds)
///
/// ``` int offsetSeconds ```
const char** q_timezone_available_time_zone_ids3(int offsetSeconds);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#ianaIdToWindowsId)
///
/// ``` const char* ianaId ```
char* q_timezone_iana_id_to_windows_id(const char* ianaId);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#windowsIdToDefaultIanaId)
///
/// ``` const char* windowsId ```
char* q_timezone_windows_id_to_default_iana_id(const char* windowsId);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#windowsIdToDefaultIanaId)
///
/// ``` const char* windowsId, enum QLocale__Country territory ```
char* q_timezone_windows_id_to_default_iana_id2(const char* windowsId, int64_t territory);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#windowsIdToIanaIds)
///
/// ``` const char* windowsId ```
const char** q_timezone_windows_id_to_iana_ids(const char* windowsId);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#windowsIdToIanaIds)
///
/// ``` const char* windowsId, enum QLocale__Country territory ```
const char** q_timezone_windows_id_to_iana_ids2(const char* windowsId, int64_t territory);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#displayName)
///
/// ``` QTimeZone* self, QDateTime* atDateTime, enum QTimeZone__NameType nameType ```
const char* q_timezone_display_name22(void* self, void* atDateTime, int64_t nameType);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#displayName)
///
/// ``` QTimeZone* self, QDateTime* atDateTime, enum QTimeZone__NameType nameType, QLocale* locale ```
const char* q_timezone_display_name3(void* self, void* atDateTime, int64_t nameType, void* locale);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#displayName)
///
/// ``` QTimeZone* self, enum QTimeZone__TimeType timeType, enum QTimeZone__NameType nameType ```
const char* q_timezone_display_name23(void* self, int64_t timeType, int64_t nameType);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#displayName)
///
/// ``` QTimeZone* self, enum QTimeZone__TimeType timeType, enum QTimeZone__NameType nameType, QLocale* locale ```
const char* q_timezone_display_name32(void* self, int64_t timeType, int64_t nameType, void* locale);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone.html#dtor.QTimeZone)
///
/// Delete this object from C++ memory.
///
/// ``` QTimeZone* self ```
void q_timezone_delete(void* self);

/// https://doc.qt.io/qt-6/qtimezone-offsetdata.html

/// q_timezone__offsetdata_new constructs a new QTimeZone::OffsetData object.
///
/// ``` QTimeZone__OffsetData* param1 ```
QTimeZone__OffsetData* q_timezone__offsetdata_new(void* param1);

/// q_timezone__offsetdata_new2 constructs a new QTimeZone::OffsetData object.
///
///
QTimeZone__OffsetData* q_timezone__offsetdata_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone__offsetdata.html#operator=)
///
/// ``` QTimeZone__OffsetData* self, QTimeZone__OffsetData* param1 ```
void q_timezone__offsetdata_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimezone::offsetdata.html#dtor.QTimeZone::OffsetData)
///
/// Delete this object from C++ memory.
///
/// ``` QTimeZone__OffsetData* self ```
void q_timezone__offsetdata_delete(void* self);

/// https://doc.qt.io/qt-6/qtimezone.html#types

typedef enum {
    QTIMEZONE_INITIALIZATION_LOCALTIME = 0,
    QTIMEZONE_INITIALIZATION_UTC = 1
} QTimeZone__Initialization;

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
