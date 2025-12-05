#pragma once
#ifndef SRC_EXTRAS_KCOREADDONS_QT6C_LIBKFORMAT_H
#define SRC_EXTRAS_KCOREADDONS_QT6C_LIBKFORMAT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kformat.html)

/// k_format_new constructs a new KFormat object.
///
KFormat* k_format_new();

/// [Upstream resources](https://api.kde.org/kformat.html)

/// k_format_new2 constructs a new KFormat object.
///
/// @param other KFormat*
///
KFormat* k_format_new2(void* other);

/// [Upstream resources](https://api.kde.org/kformat.html)

/// k_format_new3 constructs a new KFormat object.
///
/// @param locale QLocale*
///
KFormat* k_format_new3(void* locale);

/// [Upstream resources](https://api.kde.org/kformat.html#operator-eq)
///
/// @param self KFormat*
/// @param other KFormat*
///
void k_format_operator_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/kformat.html#formatByteSize)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFormat*
/// @param size double
///
const char* k_format_format_byte_size(void* self, double size);

/// [Upstream resources](https://api.kde.org/kformat.html#formatDuration)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFormat*
/// @param msecs uint64_t
///
const char* k_format_format_duration(void* self, uint64_t msecs);

/// [Upstream resources](https://api.kde.org/kformat.html#formatDecimalDuration)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFormat*
/// @param msecs uint64_t
///
const char* k_format_format_decimal_duration(void* self, uint64_t msecs);

/// [Upstream resources](https://api.kde.org/kformat.html#formatSpelloutDuration)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFormat*
/// @param msecs uint64_t
///
const char* k_format_format_spellout_duration(void* self, uint64_t msecs);

/// [Upstream resources](https://api.kde.org/kformat.html#formatRelativeDate)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFormat*
/// @param date QDate*
/// @param format enum QLocale__FormatType
///
const char* k_format_format_relative_date(void* self, void* date, int32_t format);

/// [Upstream resources](https://api.kde.org/kformat.html#formatRelativeDateTime)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFormat*
/// @param dateTime QDateTime*
/// @param format enum QLocale__FormatType
///
const char* k_format_format_relative_date_time(void* self, void* dateTime, int32_t format);

/// [Upstream resources](https://api.kde.org/kformat.html#formatValue)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFormat*
/// @param value double
/// @param unit enum KFormat__Unit
///
const char* k_format_format_value(void* self, double value, int32_t unit);

/// [Upstream resources](https://api.kde.org/kformat.html#formatValue)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFormat*
/// @param value double
/// @param unit const char*
///
const char* k_format_format_value2(void* self, double value, const char* unit);

/// [Upstream resources](https://api.kde.org/kformat.html#formatValue)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFormat*
/// @param value double
/// @param unit const char*
/// @param precision int
/// @param prefix enum KFormat__UnitPrefix
/// @param dialect enum KFormat__BinaryUnitDialect
///
const char* k_format_format_value3(void* self, double value, const char* unit, int precision, int32_t prefix, int32_t dialect);

/// [Upstream resources](https://api.kde.org/kformat.html#formatDistance)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFormat*
/// @param distance double
///
const char* k_format_format_distance(void* self, double distance);

/// [Upstream resources](https://api.kde.org/kformat.html#formatByteSize)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFormat*
/// @param size double
/// @param precision int
///
const char* k_format_format_byte_size2(void* self, double size, int precision);

/// [Upstream resources](https://api.kde.org/kformat.html#formatByteSize)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFormat*
/// @param size double
/// @param precision int
/// @param dialect enum KFormat__BinaryUnitDialect
///
const char* k_format_format_byte_size3(void* self, double size, int precision, int32_t dialect);

/// [Upstream resources](https://api.kde.org/kformat.html#formatByteSize)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFormat*
/// @param size double
/// @param precision int
/// @param dialect enum KFormat__BinaryUnitDialect
/// @param units enum KFormat__BinarySizeUnits
///
const char* k_format_format_byte_size4(void* self, double size, int precision, int32_t dialect, int32_t units);

/// [Upstream resources](https://api.kde.org/kformat.html#formatDuration)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFormat*
/// @param msecs uint64_t
/// @param options flag of enum KFormat__DurationFormatOption
///
const char* k_format_format_duration2(void* self, uint64_t msecs, int32_t options);

/// [Upstream resources](https://api.kde.org/kformat.html#formatDecimalDuration)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFormat*
/// @param msecs uint64_t
/// @param decimalPlaces int
///
const char* k_format_format_decimal_duration2(void* self, uint64_t msecs, int decimalPlaces);

/// [Upstream resources](https://api.kde.org/kformat.html#formatValue)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFormat*
/// @param value double
/// @param unit enum KFormat__Unit
/// @param precision int
///
const char* k_format_format_value32(void* self, double value, int32_t unit, int precision);

/// [Upstream resources](https://api.kde.org/kformat.html#formatValue)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFormat*
/// @param value double
/// @param unit enum KFormat__Unit
/// @param precision int
/// @param prefix enum KFormat__UnitPrefix
///
const char* k_format_format_value4(void* self, double value, int32_t unit, int precision, int32_t prefix);

/// [Upstream resources](https://api.kde.org/kformat.html#formatValue)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFormat*
/// @param value double
/// @param unit enum KFormat__Unit
/// @param precision int
/// @param prefix enum KFormat__UnitPrefix
/// @param dialect enum KFormat__BinaryUnitDialect
///
const char* k_format_format_value5(void* self, double value, int32_t unit, int precision, int32_t prefix, int32_t dialect);

/// [Upstream resources](https://api.kde.org/kformat.html#formatValue)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFormat*
/// @param value double
/// @param unit const char*
/// @param precision int
///
const char* k_format_format_value33(void* self, double value, const char* unit, int precision);

/// [Upstream resources](https://api.kde.org/kformat.html#formatValue)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFormat*
/// @param value double
/// @param unit const char*
/// @param precision int
/// @param prefix enum KFormat__UnitPrefix
///
const char* k_format_format_value42(void* self, double value, const char* unit, int precision, int32_t prefix);

/// [Upstream resources](https://api.kde.org/kformat.html#formatDistance)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFormat*
/// @param distance double
/// @param param2 flag of enum KFormat__DistanceFormatOption
///
const char* k_format_format_distance2(void* self, double distance, int32_t param2);

/// [Upstream resources](https://api.kde.org/kformat.html#dtor.KFormat)
///
/// Delete this object from C++ memory.
///
/// @param self KFormat*
///
void k_format_delete(void* self);

/// [Upstream resources](https://api.kde.org/kformat.html#public-types)

typedef enum {
    KFORMAT_BINARYSIZEUNITS_DEFAULTBINARYUNITS = -1,
    KFORMAT_BINARYSIZEUNITS_UNITBYTE = 0,
    KFORMAT_BINARYSIZEUNITS_UNITKILOBYTE = 1,
    KFORMAT_BINARYSIZEUNITS_UNITMEGABYTE = 2,
    KFORMAT_BINARYSIZEUNITS_UNITGIGABYTE = 3,
    KFORMAT_BINARYSIZEUNITS_UNITTERABYTE = 4,
    KFORMAT_BINARYSIZEUNITS_UNITPETABYTE = 5,
    KFORMAT_BINARYSIZEUNITS_UNITEXABYTE = 6,
    KFORMAT_BINARYSIZEUNITS_UNITZETTABYTE = 7,
    KFORMAT_BINARYSIZEUNITS_UNITYOTTABYTE = 8,
    KFORMAT_BINARYSIZEUNITS_UNITLASTUNIT = 8
} KFormat__BinarySizeUnits;

/// [Upstream resources](https://api.kde.org/kformat.html#public-types)

typedef enum {
    KFORMAT_UNIT_OTHER = 0,
    KFORMAT_UNIT_BIT = 1,
    KFORMAT_UNIT_BYTE = 2,
    KFORMAT_UNIT_METER = 3,
    KFORMAT_UNIT_HERTZ = 4
} KFormat__Unit;

/// [Upstream resources](https://api.kde.org/kformat.html#public-types)

typedef enum {
    KFORMAT_UNITPREFIX_AUTOADJUST = -128,
    KFORMAT_UNITPREFIX_YOCTO = 0,
    KFORMAT_UNITPREFIX_ZEPTO = 1,
    KFORMAT_UNITPREFIX_ATTO = 2,
    KFORMAT_UNITPREFIX_FEMTO = 3,
    KFORMAT_UNITPREFIX_PICO = 4,
    KFORMAT_UNITPREFIX_NANO = 5,
    KFORMAT_UNITPREFIX_MICRO = 6,
    KFORMAT_UNITPREFIX_MILLI = 7,
    KFORMAT_UNITPREFIX_CENTI = 8,
    KFORMAT_UNITPREFIX_DECI = 9,
    KFORMAT_UNITPREFIX_UNITY = 10,
    KFORMAT_UNITPREFIX_DECA = 11,
    KFORMAT_UNITPREFIX_HECTO = 12,
    KFORMAT_UNITPREFIX_KILO = 13,
    KFORMAT_UNITPREFIX_MEGA = 14,
    KFORMAT_UNITPREFIX_GIGA = 15,
    KFORMAT_UNITPREFIX_TERA = 16,
    KFORMAT_UNITPREFIX_PETA = 17,
    KFORMAT_UNITPREFIX_EXA = 18,
    KFORMAT_UNITPREFIX_ZETTA = 19,
    KFORMAT_UNITPREFIX_YOTTA = 20
} KFormat__UnitPrefix;

/// [Upstream resources](https://api.kde.org/kformat.html#public-types)

typedef enum {
    KFORMAT_BINARYUNITDIALECT_DEFAULTBINARYDIALECT = -1,
    KFORMAT_BINARYUNITDIALECT_IECBINARYDIALECT = 0,
    KFORMAT_BINARYUNITDIALECT_JEDECBINARYDIALECT = 1,
    KFORMAT_BINARYUNITDIALECT_METRICBINARYDIALECT = 2,
    KFORMAT_BINARYUNITDIALECT_LASTBINARYDIALECT = 2
} KFormat__BinaryUnitDialect;

/// [Upstream resources](https://api.kde.org/kformat.html#public-types)

typedef enum {
    KFORMAT_DURATIONFORMATOPTION_DEFAULTDURATION = 0,
    KFORMAT_DURATIONFORMATOPTION_INITIALDURATION = 1,
    KFORMAT_DURATIONFORMATOPTION_SHOWMILLISECONDS = 2,
    KFORMAT_DURATIONFORMATOPTION_HIDESECONDS = 4,
    KFORMAT_DURATIONFORMATOPTION_FOLDHOURS = 8,
    KFORMAT_DURATIONFORMATOPTION_ABBREVIATEDDURATION = 16
} KFormat__DurationFormatOption;

/// [Upstream resources](https://api.kde.org/kformat.html#public-types)

typedef enum {
    KFORMAT_DISTANCEFORMATOPTION_LOCALEDISTANCEUNITS = 0,
    KFORMAT_DISTANCEFORMATOPTION_METRICDISTANCEUNITS = 1
} KFormat__DistanceFormatOption;

#endif
