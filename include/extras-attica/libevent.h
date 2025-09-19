#pragma once
#ifndef SRC_EXTRAS_ATTICAQT6C_LIBEVENT_H
#define SRC_EXTRAS_ATTICAQT6C_LIBEVENT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/attica-event.html

/// k_attica__event_new constructs a new Attica::Event object.
///
Attica__Event* k_attica__event_new();

/// k_attica__event_new2 constructs a new Attica::Event object.
///
/// @param other Attica__Event*
Attica__Event* k_attica__event_new2(void* other);

/// [Qt documentation](https://api.kde.org/attica-event.html#operator-eq)
///
/// @param self Attica__Event*
/// @param other Attica__Event*
void k_attica__event_operator_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/attica-event.html#setId)
///
/// @param self Attica__Event*
/// @param id const char*
void k_attica__event_set_id(void* self, const char* id);

/// [Qt documentation](https://api.kde.org/attica-event.html#id)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Event*
const char* k_attica__event_id(void* self);

/// [Qt documentation](https://api.kde.org/attica-event.html#setName)
///
/// @param self Attica__Event*
/// @param name const char*
void k_attica__event_set_name(void* self, const char* name);

/// [Qt documentation](https://api.kde.org/attica-event.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Event*
const char* k_attica__event_name(void* self);

/// [Qt documentation](https://api.kde.org/attica-event.html#setDescription)
///
/// @param self Attica__Event*
/// @param description const char*
void k_attica__event_set_description(void* self, const char* description);

/// [Qt documentation](https://api.kde.org/attica-event.html#description)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Event*
const char* k_attica__event_description(void* self);

/// [Qt documentation](https://api.kde.org/attica-event.html#setUser)
///
/// @param self Attica__Event*
/// @param user const char*
void k_attica__event_set_user(void* self, const char* user);

/// [Qt documentation](https://api.kde.org/attica-event.html#user)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Event*
const char* k_attica__event_user(void* self);

/// [Qt documentation](https://api.kde.org/attica-event.html#setStartDate)
///
/// @param self Attica__Event*
/// @param startDate QDate*
void k_attica__event_set_start_date(void* self, void* startDate);

/// [Qt documentation](https://api.kde.org/attica-event.html#startDate)
///
/// @param self Attica__Event*
QDate* k_attica__event_start_date(void* self);

/// [Qt documentation](https://api.kde.org/attica-event.html#setEndDate)
///
/// @param self Attica__Event*
/// @param endDate QDate*
void k_attica__event_set_end_date(void* self, void* endDate);

/// [Qt documentation](https://api.kde.org/attica-event.html#endDate)
///
/// @param self Attica__Event*
QDate* k_attica__event_end_date(void* self);

/// [Qt documentation](https://api.kde.org/attica-event.html#setLatitude)
///
/// @param self Attica__Event*
/// @param latitude double
void k_attica__event_set_latitude(void* self, double latitude);

/// [Qt documentation](https://api.kde.org/attica-event.html#latitude)
///
/// @param self Attica__Event*
double k_attica__event_latitude(void* self);

/// [Qt documentation](https://api.kde.org/attica-event.html#setLongitude)
///
/// @param self Attica__Event*
/// @param longitude double
void k_attica__event_set_longitude(void* self, double longitude);

/// [Qt documentation](https://api.kde.org/attica-event.html#longitude)
///
/// @param self Attica__Event*
double k_attica__event_longitude(void* self);

/// [Qt documentation](https://api.kde.org/attica-event.html#setHomepage)
///
/// @param self Attica__Event*
/// @param homepage QUrl*
void k_attica__event_set_homepage(void* self, void* homepage);

/// [Qt documentation](https://api.kde.org/attica-event.html#homepage)
///
/// @param self Attica__Event*
QUrl* k_attica__event_homepage(void* self);

/// [Qt documentation](https://api.kde.org/attica-event.html#setCountry)
///
/// @param self Attica__Event*
/// @param country const char*
void k_attica__event_set_country(void* self, const char* country);

/// [Qt documentation](https://api.kde.org/attica-event.html#country)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Event*
const char* k_attica__event_country(void* self);

/// [Qt documentation](https://api.kde.org/attica-event.html#setCity)
///
/// @param self Attica__Event*
/// @param city const char*
void k_attica__event_set_city(void* self, const char* city);

/// [Qt documentation](https://api.kde.org/attica-event.html#city)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Event*
const char* k_attica__event_city(void* self);

/// [Qt documentation](https://api.kde.org/attica-event.html#addExtendedAttribute)
///
/// @param self Attica__Event*
/// @param key const char*
/// @param value const char*
void k_attica__event_add_extended_attribute(void* self, const char* key, const char* value);

/// [Qt documentation](https://api.kde.org/attica-event.html#extendedAttribute)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Event*
/// @param key const char*
const char* k_attica__event_extended_attribute(void* self, const char* key);

/// [Qt documentation](https://api.kde.org/attica-event.html#extendedAttributes)
///
/// @param self Attica__Event*
libqt_map /* of const char* to const char* */ k_attica__event_extended_attributes(void* self);

/// [Qt documentation](https://api.kde.org/attica-event.html#isValid)
///
/// @param self Attica__Event*
bool k_attica__event_is_valid(void* self);

/// Delete this object from C++ memory.
///
/// @param self Attica__Event*
void k_attica__event_delete(void* self);

#endif
