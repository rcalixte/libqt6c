#pragma once
#ifndef EXTRAS_KI18N_LIBKCOUNTRYSUBDIVISION_H
#define EXTRAS_KI18N_LIBKCOUNTRYSUBDIVISION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kcountrysubdivision.html)

/// k_countrysubdivision_new constructs a new KCountrySubdivision object.
///
KCountrySubdivision* k_countrysubdivision_new();

/// [Upstream resources](https://api.kde.org/kcountrysubdivision.html)

/// k_countrysubdivision_new2 constructs a new KCountrySubdivision object.
///
/// @param param1 KCountrySubdivision*
///
KCountrySubdivision* k_countrysubdivision_new2(const void* param1);

/// [Upstream resources](https://api.kde.org/kcountrysubdivision.html#operator-eq)
///
/// @param self KCountrySubdivision*
/// @param param1 KCountrySubdivision*
///
void k_countrysubdivision_operator_assign(void* self, const void* param1);

/// [Upstream resources](https://api.kde.org/kcountrysubdivision.html#operator-eq-eq)
///
/// @param self const KCountrySubdivision*
/// @param other KCountrySubdivision*
///
bool k_countrysubdivision_operator_equal(const void* self, const void* other);

/// [Upstream resources](https://api.kde.org/kcountrysubdivision.html#operator-not-eq)
///
/// @param self const KCountrySubdivision*
/// @param other KCountrySubdivision*
///
bool k_countrysubdivision_operator_not_equal(const void* self, const void* other);

/// [Upstream resources](https://api.kde.org/kcountrysubdivision.html#isValid)
///
/// @param self const KCountrySubdivision*
///
bool k_countrysubdivision_is_valid(const void* self);

/// [Upstream resources](https://api.kde.org/kcountrysubdivision.html#code)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KCountrySubdivision*
///
const char* k_countrysubdivision_code(const void* self);

/// [Upstream resources](https://api.kde.org/kcountrysubdivision.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KCountrySubdivision*
///
const char* k_countrysubdivision_name(const void* self);

/// [Upstream resources](https://api.kde.org/kcountrysubdivision.html#country)
///
/// @param self const KCountrySubdivision*
///
KCountry* k_countrysubdivision_country(const void* self);

/// [Upstream resources](https://api.kde.org/kcountrysubdivision.html#parent)
///
/// @param self const KCountrySubdivision*
///
KCountrySubdivision* k_countrysubdivision_parent(const void* self);

/// [Upstream resources](https://api.kde.org/kcountrysubdivision.html#timeZoneIds)
///
/// @param self const KCountrySubdivision*
///
/// @return libqt_list of const char*
///
libqt_list k_countrysubdivision_time_zone_ids(const void* self);

/// [Upstream resources](https://api.kde.org/kcountrysubdivision.html#subdivisions)
///
/// @param self const KCountrySubdivision*
///
/// @return libqt_list of KCountrySubdivision*
///
libqt_list k_countrysubdivision_subdivisions(const void* self);

/// [Upstream resources](https://api.kde.org/kcountrysubdivision.html#fromCode)
///
/// @param code const char*
///
KCountrySubdivision* k_countrysubdivision_from_code(const char* code);

/// [Upstream resources](https://api.kde.org/kcountrysubdivision.html#fromCode)
///
/// @param code const char*
///
KCountrySubdivision* k_countrysubdivision_from_code2(const char* code);

/// [Upstream resources](https://api.kde.org/kcountrysubdivision.html#fromLocation)
///
/// @param latitude float
/// @param longitude float
///
KCountrySubdivision* k_countrysubdivision_from_location(float latitude, float longitude);

/// [Upstream resources](https://api.kde.org/kcountrysubdivision.html#dtor.KCountrySubdivision)
///
/// Delete this object from C++ memory.
///
/// @param self KCountrySubdivision*
///
void k_countrysubdivision_delete(void* self);

#endif
