#pragma once
#ifndef SRC_EXTRAS_ATTICA_QT6C_LIBPERSON_H
#define SRC_EXTRAS_ATTICA_QT6C_LIBPERSON_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/attica-person.html

/// k_attica__person_new constructs a new Attica::Person object.
///
Attica__Person* k_attica__person_new();

/// k_attica__person_new2 constructs a new Attica::Person object.
///
/// @param other Attica__Person*
Attica__Person* k_attica__person_new2(void* other);

/// [Qt documentation](https://api.kde.org/attica-person.html#operator-eq)
///
/// @param self Attica__Person*
/// @param other Attica__Person*
void k_attica__person_operator_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/attica-person.html#setId)
///
/// @param self Attica__Person*
/// @param id const char*
void k_attica__person_set_id(void* self, const char* id);

/// [Qt documentation](https://api.kde.org/attica-person.html#id)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Person*
const char* k_attica__person_id(void* self);

/// [Qt documentation](https://api.kde.org/attica-person.html#setFirstName)
///
/// @param self Attica__Person*
/// @param firstName const char*
void k_attica__person_set_first_name(void* self, const char* firstName);

/// [Qt documentation](https://api.kde.org/attica-person.html#firstName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Person*
const char* k_attica__person_first_name(void* self);

/// [Qt documentation](https://api.kde.org/attica-person.html#setLastName)
///
/// @param self Attica__Person*
/// @param lastName const char*
void k_attica__person_set_last_name(void* self, const char* lastName);

/// [Qt documentation](https://api.kde.org/attica-person.html#lastName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Person*
const char* k_attica__person_last_name(void* self);

/// [Qt documentation](https://api.kde.org/attica-person.html#setBirthday)
///
/// @param self Attica__Person*
/// @param birthday QDate*
void k_attica__person_set_birthday(void* self, void* birthday);

/// [Qt documentation](https://api.kde.org/attica-person.html#birthday)
///
/// @param self Attica__Person*
QDate* k_attica__person_birthday(void* self);

/// [Qt documentation](https://api.kde.org/attica-person.html#setCountry)
///
/// @param self Attica__Person*
/// @param country const char*
void k_attica__person_set_country(void* self, const char* country);

/// [Qt documentation](https://api.kde.org/attica-person.html#country)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Person*
const char* k_attica__person_country(void* self);

/// [Qt documentation](https://api.kde.org/attica-person.html#setLatitude)
///
/// @param self Attica__Person*
/// @param latitude double
void k_attica__person_set_latitude(void* self, double latitude);

/// [Qt documentation](https://api.kde.org/attica-person.html#latitude)
///
/// @param self Attica__Person*
double k_attica__person_latitude(void* self);

/// [Qt documentation](https://api.kde.org/attica-person.html#setLongitude)
///
/// @param self Attica__Person*
/// @param longitude double
void k_attica__person_set_longitude(void* self, double longitude);

/// [Qt documentation](https://api.kde.org/attica-person.html#longitude)
///
/// @param self Attica__Person*
double k_attica__person_longitude(void* self);

/// [Qt documentation](https://api.kde.org/attica-person.html#setAvatarUrl)
///
/// @param self Attica__Person*
/// @param avatarUrl QUrl*
void k_attica__person_set_avatar_url(void* self, void* avatarUrl);

/// [Qt documentation](https://api.kde.org/attica-person.html#avatarUrl)
///
/// @param self Attica__Person*
QUrl* k_attica__person_avatar_url(void* self);

/// [Qt documentation](https://api.kde.org/attica-person.html#setHomepage)
///
/// @param self Attica__Person*
/// @param homepage const char*
void k_attica__person_set_homepage(void* self, const char* homepage);

/// [Qt documentation](https://api.kde.org/attica-person.html#homepage)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Person*
const char* k_attica__person_homepage(void* self);

/// [Qt documentation](https://api.kde.org/attica-person.html#setCity)
///
/// @param self Attica__Person*
/// @param city const char*
void k_attica__person_set_city(void* self, const char* city);

/// [Qt documentation](https://api.kde.org/attica-person.html#city)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Person*
const char* k_attica__person_city(void* self);

/// [Qt documentation](https://api.kde.org/attica-person.html#addExtendedAttribute)
///
/// @param self Attica__Person*
/// @param key const char*
/// @param value const char*
void k_attica__person_add_extended_attribute(void* self, const char* key, const char* value);

/// [Qt documentation](https://api.kde.org/attica-person.html#extendedAttribute)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Person*
/// @param key const char*
const char* k_attica__person_extended_attribute(void* self, const char* key);

/// [Qt documentation](https://api.kde.org/attica-person.html#extendedAttributes)
///
/// @param self Attica__Person*
libqt_map /* of const char* to const char* */ k_attica__person_extended_attributes(void* self);

/// [Qt documentation](https://api.kde.org/attica-person.html#isValid)
///
/// @param self Attica__Person*
bool k_attica__person_is_valid(void* self);

/// Delete this object from C++ memory.
///
/// @param self Attica__Person*
void k_attica__person_delete(void* self);

#endif
