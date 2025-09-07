#pragma once
#ifndef SRC_EXTRAS_KI18NQT6C_LIBKCOUNTRY_H
#define SRC_EXTRAS_KI18NQT6C_LIBKCOUNTRY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/ktimezone.html

/// [Qt documentation](https://api.kde.org/ktimezone.html#country)
///
/// @param param1 const char*
KCountry* k_timezone_country(const char* param1);

/// https://api.kde.org/kcountry.html

/// k_country_new constructs a new KCountry object.
///
KCountry* k_country_new();

/// k_country_new2 constructs a new KCountry object.
///
/// @param param1 KCountry*
KCountry* k_country_new2(void* param1);

/// [Qt documentation](https://api.kde.org/kcountry.html#operator-eq)
///
/// @param self KCountry*
/// @param param1 KCountry*
void k_country_operator_assign(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/kcountry.html#operator-eq-eq)
///
/// @param self KCountry*
/// @param other KCountry*
bool k_country_operator_equal(void* self, void* other);

/// [Qt documentation](https://api.kde.org/kcountry.html#operator-not-eq)
///
/// @param self KCountry*
/// @param other KCountry*
bool k_country_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://api.kde.org/kcountry.html#isValid)
///
/// @param self KCountry*
bool k_country_is_valid(void* self);

/// [Qt documentation](https://api.kde.org/kcountry.html#alpha2)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCountry*
const char* k_country_alpha2(void* self);

/// [Qt documentation](https://api.kde.org/kcountry.html#alpha3)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCountry*
const char* k_country_alpha3(void* self);

/// [Qt documentation](https://api.kde.org/kcountry.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCountry*
const char* k_country_name(void* self);

/// [Qt documentation](https://api.kde.org/kcountry.html#emojiFlag)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCountry*
const char* k_country_emoji_flag(void* self);

/// [Qt documentation](https://api.kde.org/kcountry.html#country)
///
/// @param self KCountry*
///
/// @return enum QLocale__Country
uint16_t k_country_country(void* self);

/// [Qt documentation](https://api.kde.org/kcountry.html#timeZoneIds)
///
/// @param self KCountry*
libqt_list /* of const char* */ k_country_time_zone_ids(void* self);

/// [Qt documentation](https://api.kde.org/kcountry.html#currencyCode)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCountry*
const char* k_country_currency_code(void* self);

/// [Qt documentation](https://api.kde.org/kcountry.html#subdivisions)
///
/// @param self KCountry*
libqt_list /* of KCountrySubdivision* */ k_country_subdivisions(void* self);

/// [Qt documentation](https://api.kde.org/kcountry.html#fromAlpha2)
///
/// @param alpha2Code const char*
KCountry* k_country_from_alpha22(const char* alpha2Code);

/// [Qt documentation](https://api.kde.org/kcountry.html#fromAlpha3)
///
/// @param alpha3Code const char*
KCountry* k_country_from_alpha32(const char* alpha3Code);

/// [Qt documentation](https://api.kde.org/kcountry.html#fromLocation)
///
/// @param latitude float
/// @param longitude float
KCountry* k_country_from_location(float latitude, float longitude);

/// [Qt documentation](https://api.kde.org/kcountry.html#fromQLocale)
///
/// @param country enum QLocale__Country
KCountry* k_country_from_q_locale(uint16_t country);

/// [Qt documentation](https://api.kde.org/kcountry.html#allCountries)
///
libqt_list /* of KCountry* */ k_country_all_countries();

/// [Qt documentation](https://api.kde.org/kcountry.html#dtor.KCountry)
///
/// Delete this object from C++ memory.
///
/// @param self KCountry*
void k_country_delete(void* self);

#endif
