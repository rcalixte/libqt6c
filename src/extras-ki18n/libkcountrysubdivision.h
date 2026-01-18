#pragma once
#ifndef SRC_EXTRAS_KI18N_QT6C_LIBKCOUNTRYSUBDIVISION_H
#define SRC_EXTRAS_KI18N_QT6C_LIBKCOUNTRYSUBDIVISION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
KCountrySubdivision* k_countrysubdivision_new2(void* param1);

/// [Upstream resources](https://api.kde.org/kcountrysubdivision.html#operator-eq)
///
/// @param self KCountrySubdivision*
/// @param param1 KCountrySubdivision*
///
void k_countrysubdivision_operator_assign(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kcountrysubdivision.html#operator-eq-eq)
///
/// @param self KCountrySubdivision*
/// @param other KCountrySubdivision*
///
bool k_countrysubdivision_operator_equal(void* self, void* other);

/// [Upstream resources](https://api.kde.org/kcountrysubdivision.html#operator-not-eq)
///
/// @param self KCountrySubdivision*
/// @param other KCountrySubdivision*
///
bool k_countrysubdivision_operator_not_equal(void* self, void* other);

/// [Upstream resources](https://api.kde.org/kcountrysubdivision.html#isValid)
///
/// @param self KCountrySubdivision*
///
bool k_countrysubdivision_is_valid(void* self);

/// [Upstream resources](https://api.kde.org/kcountrysubdivision.html#code)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KCountrySubdivision*
///
const char* k_countrysubdivision_code(void* self);

/// [Upstream resources](https://api.kde.org/kcountrysubdivision.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KCountrySubdivision*
///
const char* k_countrysubdivision_name(void* self);

/// [Upstream resources](https://api.kde.org/kcountrysubdivision.html#country)
///
/// @param self KCountrySubdivision*
///
KCountry* k_countrysubdivision_country(void* self);

/// [Upstream resources](https://api.kde.org/kcountrysubdivision.html#parent)
///
/// @param self KCountrySubdivision*
///
KCountrySubdivision* k_countrysubdivision_parent(void* self);

/// [Upstream resources](https://api.kde.org/kcountrysubdivision.html#timeZoneIds)
///
/// @param self KCountrySubdivision*
///
/// @return libqt_list of const char*
///
libqt_list k_countrysubdivision_time_zone_ids(void* self);

/// [Upstream resources](https://api.kde.org/kcountrysubdivision.html#subdivisions)
///
/// @param self KCountrySubdivision*
///
/// @return libqt_list of KCountrySubdivision*
///
libqt_list k_countrysubdivision_subdivisions(void* self);

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
