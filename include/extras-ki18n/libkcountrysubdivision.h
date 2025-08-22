#pragma once
#ifndef SRC_EXTRAS_KI18NQT6C_LIBKCOUNTRYSUBDIVISION_H
#define SRC_EXTRAS_KI18NQT6C_LIBKCOUNTRYSUBDIVISION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kcountrysubdivision.html

/// k_countrysubdivision_new constructs a new KCountrySubdivision object.
///
KCountrySubdivision* k_countrysubdivision_new();

/// k_countrysubdivision_new2 constructs a new KCountrySubdivision object.
///
/// @param param1 KCountrySubdivision*
KCountrySubdivision* k_countrysubdivision_new2(void* param1);

/// [Qt documentation](https://api-staging.kde.org/kcountrysubdivision.html#operator-eq)
///
/// @param self KCountrySubdivision*
/// @param param1 KCountrySubdivision*
void k_countrysubdivision_operator_assign(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kcountrysubdivision.html#operator-eq-eq)
///
/// @param self KCountrySubdivision*
/// @param other KCountrySubdivision*
bool k_countrysubdivision_operator_equal(void* self, void* other);

/// [Qt documentation](https://api-staging.kde.org/kcountrysubdivision.html#operator-not-eq)
///
/// @param self KCountrySubdivision*
/// @param other KCountrySubdivision*
bool k_countrysubdivision_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://api-staging.kde.org/kcountrysubdivision.html#isValid)
///
/// @param self KCountrySubdivision*
bool k_countrysubdivision_is_valid(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcountrysubdivision.html#code)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCountrySubdivision*
const char* k_countrysubdivision_code(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcountrysubdivision.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCountrySubdivision*
const char* k_countrysubdivision_name(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcountrysubdivision.html#country)
///
/// @param self KCountrySubdivision*
KCountry* k_countrysubdivision_country(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcountrysubdivision.html#parent)
///
/// @param self KCountrySubdivision*
KCountrySubdivision* k_countrysubdivision_parent(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcountrysubdivision.html#timeZoneIds)
///
/// @param self KCountrySubdivision*
libqt_list /* of const char* */ k_countrysubdivision_time_zone_ids(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcountrysubdivision.html#subdivisions)
///
/// @param self KCountrySubdivision*
libqt_list /* of KCountrySubdivision* */ k_countrysubdivision_subdivisions(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcountrysubdivision.html#fromCode)
///
/// @param code const char*
KCountrySubdivision* k_countrysubdivision_from_code2(const char* code);

/// [Qt documentation](https://api-staging.kde.org/kcountrysubdivision.html#fromLocation)
///
/// @param latitude float
/// @param longitude float
KCountrySubdivision* k_countrysubdivision_from_location(float latitude, float longitude);

/// [Qt documentation](https://api-staging.kde.org/kcountrysubdivision.html#dtor.KCountrySubdivision)
///
/// Delete this object from C++ memory.
///
/// @param self KCountrySubdivision*
void k_countrysubdivision_delete(void* self);

#endif
