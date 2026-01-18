#pragma once
#ifndef SRC_EXTRAS_ATTICA_QT6C_LIBPERSON_H
#define SRC_EXTRAS_ATTICA_QT6C_LIBPERSON_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/attica-person.html)

/// k_attica__person_new constructs a new Attica::Person object.
///
Attica__Person* k_attica__person_new();

/// [Upstream resources](https://api.kde.org/attica-person.html)

/// k_attica__person_new2 constructs a new Attica::Person object.
///
/// @param other Attica__Person*
///
Attica__Person* k_attica__person_new2(void* other);

/// [Upstream resources](https://api.kde.org/attica-person.html#operator-eq)
///
/// @param self Attica__Person*
/// @param other Attica__Person*
///
void k_attica__person_operator_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/attica-person.html#setId)
///
/// @param self Attica__Person*
/// @param id const char*
///
void k_attica__person_set_id(void* self, const char* id);

/// [Upstream resources](https://api.kde.org/attica-person.html#id)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__Person*
///
const char* k_attica__person_id(void* self);

/// [Upstream resources](https://api.kde.org/attica-person.html#setFirstName)
///
/// @param self Attica__Person*
/// @param firstName const char*
///
void k_attica__person_set_first_name(void* self, const char* firstName);

/// [Upstream resources](https://api.kde.org/attica-person.html#firstName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__Person*
///
const char* k_attica__person_first_name(void* self);

/// [Upstream resources](https://api.kde.org/attica-person.html#setLastName)
///
/// @param self Attica__Person*
/// @param lastName const char*
///
void k_attica__person_set_last_name(void* self, const char* lastName);

/// [Upstream resources](https://api.kde.org/attica-person.html#lastName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__Person*
///
const char* k_attica__person_last_name(void* self);

/// [Upstream resources](https://api.kde.org/attica-person.html#setBirthday)
///
/// @param self Attica__Person*
/// @param birthday QDate*
///
void k_attica__person_set_birthday(void* self, void* birthday);

/// [Upstream resources](https://api.kde.org/attica-person.html#birthday)
///
/// @param self Attica__Person*
///
QDate* k_attica__person_birthday(void* self);

/// [Upstream resources](https://api.kde.org/attica-person.html#setCountry)
///
/// @param self Attica__Person*
/// @param country const char*
///
void k_attica__person_set_country(void* self, const char* country);

/// [Upstream resources](https://api.kde.org/attica-person.html#country)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__Person*
///
const char* k_attica__person_country(void* self);

/// [Upstream resources](https://api.kde.org/attica-person.html#setLatitude)
///
/// @param self Attica__Person*
/// @param latitude double
///
void k_attica__person_set_latitude(void* self, double latitude);

/// [Upstream resources](https://api.kde.org/attica-person.html#latitude)
///
/// @param self Attica__Person*
///
double k_attica__person_latitude(void* self);

/// [Upstream resources](https://api.kde.org/attica-person.html#setLongitude)
///
/// @param self Attica__Person*
/// @param longitude double
///
void k_attica__person_set_longitude(void* self, double longitude);

/// [Upstream resources](https://api.kde.org/attica-person.html#longitude)
///
/// @param self Attica__Person*
///
double k_attica__person_longitude(void* self);

/// [Upstream resources](https://api.kde.org/attica-person.html#setAvatarUrl)
///
/// @param self Attica__Person*
/// @param avatarUrl QUrl*
///
void k_attica__person_set_avatar_url(void* self, void* avatarUrl);

/// [Upstream resources](https://api.kde.org/attica-person.html#avatarUrl)
///
/// @param self Attica__Person*
///
QUrl* k_attica__person_avatar_url(void* self);

/// [Upstream resources](https://api.kde.org/attica-person.html#setHomepage)
///
/// @param self Attica__Person*
/// @param homepage const char*
///
void k_attica__person_set_homepage(void* self, const char* homepage);

/// [Upstream resources](https://api.kde.org/attica-person.html#homepage)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__Person*
///
const char* k_attica__person_homepage(void* self);

/// [Upstream resources](https://api.kde.org/attica-person.html#setCity)
///
/// @param self Attica__Person*
/// @param city const char*
///
void k_attica__person_set_city(void* self, const char* city);

/// [Upstream resources](https://api.kde.org/attica-person.html#city)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__Person*
///
const char* k_attica__person_city(void* self);

/// [Upstream resources](https://api.kde.org/attica-person.html#addExtendedAttribute)
///
/// @param self Attica__Person*
/// @param key const char*
/// @param value const char*
///
void k_attica__person_add_extended_attribute(void* self, const char* key, const char* value);

/// [Upstream resources](https://api.kde.org/attica-person.html#extendedAttribute)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__Person*
/// @param key const char*
///
const char* k_attica__person_extended_attribute(void* self, const char* key);

/// [Upstream resources](https://api.kde.org/attica-person.html#extendedAttributes)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of const char* to const char*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.keys[i]);
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self Attica__Person*
///
/// @return libqt_map of const char* to const char*
///
libqt_map k_attica__person_extended_attributes(void* self);

/// [Upstream resources](https://api.kde.org/attica-person.html#isValid)
///
/// @param self Attica__Person*
///
bool k_attica__person_is_valid(void* self);

/// Delete this object from C++ memory.
///
/// @param self Attica__Person*
///
void k_attica__person_delete(void* self);

#endif
