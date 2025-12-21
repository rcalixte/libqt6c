#pragma once
#ifndef SRC_EXTRAS_KI18N_QT6C_LIBKCOUNTRY_H
#define SRC_EXTRAS_KI18N_QT6C_LIBKCOUNTRY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ktimezone.html)

/// [Upstream resources](https://api.kde.org/ktimezone.html#country)
///
/// @param param1 const char*
///
KCountry* k_timezone_country(const char* param1);

/// [Upstream resources](https://api.kde.org/kcountry.html)

/// k_country_new constructs a new KCountry object.
///
KCountry* k_country_new();

/// [Upstream resources](https://api.kde.org/kcountry.html)

/// k_country_new2 constructs a new KCountry object.
///
/// @param param1 KCountry*
///
KCountry* k_country_new2(void* param1);

/// [Upstream resources](https://api.kde.org/kcountry.html#operator-eq)
///
/// @param self KCountry*
/// @param param1 KCountry*
///
void k_country_operator_assign(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kcountry.html#operator-eq-eq)
///
/// @param self KCountry*
/// @param other KCountry*
///
bool k_country_operator_equal(void* self, void* other);

/// [Upstream resources](https://api.kde.org/kcountry.html#operator-not-eq)
///
/// @param self KCountry*
/// @param other KCountry*
///
bool k_country_operator_not_equal(void* self, void* other);

/// [Upstream resources](https://api.kde.org/kcountry.html#isValid)
///
/// @param self KCountry*
///
bool k_country_is_valid(void* self);

/// [Upstream resources](https://api.kde.org/kcountry.html#alpha2)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KCountry*
///
const char* k_country_alpha2(void* self);

/// [Upstream resources](https://api.kde.org/kcountry.html#alpha3)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KCountry*
///
const char* k_country_alpha3(void* self);

/// [Upstream resources](https://api.kde.org/kcountry.html#name)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KCountry*
///
const char* k_country_name(void* self);

/// [Upstream resources](https://api.kde.org/kcountry.html#emojiFlag)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KCountry*
///
const char* k_country_emoji_flag(void* self);

/// [Upstream resources](https://api.kde.org/kcountry.html#country)
///
/// @param self KCountry*
///
/// @return enum QLocale__Country
///
uint16_t k_country_country(void* self);

/// [Upstream resources](https://api.kde.org/kcountry.html#timeZoneIds)
///
/// @param self KCountry*
///
libqt_list /* of const char* */ k_country_time_zone_ids(void* self);

/// [Upstream resources](https://api.kde.org/kcountry.html#currencyCode)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KCountry*
///
const char* k_country_currency_code(void* self);

/// [Upstream resources](https://api.kde.org/kcountry.html#subdivisions)
///
/// @param self KCountry*
///
libqt_list /* of KCountrySubdivision* */ k_country_subdivisions(void* self);

/// [Upstream resources](https://api.kde.org/kcountry.html#fromAlpha2)
///
/// @param alpha2Code const char*
///
KCountry* k_country_from_alpha22(const char* alpha2Code);

/// [Upstream resources](https://api.kde.org/kcountry.html#fromAlpha3)
///
/// @param alpha3Code const char*
///
KCountry* k_country_from_alpha32(const char* alpha3Code);

/// [Upstream resources](https://api.kde.org/kcountry.html#fromLocation)
///
/// @param latitude float
/// @param longitude float
///
KCountry* k_country_from_location(float latitude, float longitude);

/// [Upstream resources](https://api.kde.org/kcountry.html#fromQLocale)
///
/// @param country enum QLocale__Country
///
KCountry* k_country_from_q_locale(uint16_t country);

/// [Upstream resources](https://api.kde.org/kcountry.html#allCountries)
///
libqt_list /* of KCountry* */ k_country_all_countries();

/// [Upstream resources](https://api.kde.org/kcountry.html#dtor.KCountry)
///
/// Delete this object from C++ memory.
///
/// @param self KCountry*
///
void k_country_delete(void* self);

#endif
