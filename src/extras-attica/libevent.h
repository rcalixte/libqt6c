#pragma once
#ifndef SRC_EXTRAS_ATTICA_QT6C_LIBEVENT_H
#define SRC_EXTRAS_ATTICA_QT6C_LIBEVENT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/attica-event.html)

/// k_attica__event_new constructs a new Attica::Event object.
///
Attica__Event* k_attica__event_new();

/// [Upstream resources](https://api.kde.org/attica-event.html)

/// k_attica__event_new2 constructs a new Attica::Event object.
///
/// @param other Attica__Event*
///
Attica__Event* k_attica__event_new2(void* other);

/// [Upstream resources](https://api.kde.org/attica-event.html#operator-eq)
///
/// @param self Attica__Event*
/// @param other Attica__Event*
///
void k_attica__event_operator_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/attica-event.html#setId)
///
/// @param self Attica__Event*
/// @param id const char*
///
void k_attica__event_set_id(void* self, const char* id);

/// [Upstream resources](https://api.kde.org/attica-event.html#id)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Attica__Event*
///
const char* k_attica__event_id(void* self);

/// [Upstream resources](https://api.kde.org/attica-event.html#setName)
///
/// @param self Attica__Event*
/// @param name const char*
///
void k_attica__event_set_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/attica-event.html#name)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Attica__Event*
///
const char* k_attica__event_name(void* self);

/// [Upstream resources](https://api.kde.org/attica-event.html#setDescription)
///
/// @param self Attica__Event*
/// @param description const char*
///
void k_attica__event_set_description(void* self, const char* description);

/// [Upstream resources](https://api.kde.org/attica-event.html#description)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Attica__Event*
///
const char* k_attica__event_description(void* self);

/// [Upstream resources](https://api.kde.org/attica-event.html#setUser)
///
/// @param self Attica__Event*
/// @param user const char*
///
void k_attica__event_set_user(void* self, const char* user);

/// [Upstream resources](https://api.kde.org/attica-event.html#user)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Attica__Event*
///
const char* k_attica__event_user(void* self);

/// [Upstream resources](https://api.kde.org/attica-event.html#setStartDate)
///
/// @param self Attica__Event*
/// @param startDate QDate*
///
void k_attica__event_set_start_date(void* self, void* startDate);

/// [Upstream resources](https://api.kde.org/attica-event.html#startDate)
///
/// @param self Attica__Event*
///
QDate* k_attica__event_start_date(void* self);

/// [Upstream resources](https://api.kde.org/attica-event.html#setEndDate)
///
/// @param self Attica__Event*
/// @param endDate QDate*
///
void k_attica__event_set_end_date(void* self, void* endDate);

/// [Upstream resources](https://api.kde.org/attica-event.html#endDate)
///
/// @param self Attica__Event*
///
QDate* k_attica__event_end_date(void* self);

/// [Upstream resources](https://api.kde.org/attica-event.html#setLatitude)
///
/// @param self Attica__Event*
/// @param latitude double
///
void k_attica__event_set_latitude(void* self, double latitude);

/// [Upstream resources](https://api.kde.org/attica-event.html#latitude)
///
/// @param self Attica__Event*
///
double k_attica__event_latitude(void* self);

/// [Upstream resources](https://api.kde.org/attica-event.html#setLongitude)
///
/// @param self Attica__Event*
/// @param longitude double
///
void k_attica__event_set_longitude(void* self, double longitude);

/// [Upstream resources](https://api.kde.org/attica-event.html#longitude)
///
/// @param self Attica__Event*
///
double k_attica__event_longitude(void* self);

/// [Upstream resources](https://api.kde.org/attica-event.html#setHomepage)
///
/// @param self Attica__Event*
/// @param homepage QUrl*
///
void k_attica__event_set_homepage(void* self, void* homepage);

/// [Upstream resources](https://api.kde.org/attica-event.html#homepage)
///
/// @param self Attica__Event*
///
QUrl* k_attica__event_homepage(void* self);

/// [Upstream resources](https://api.kde.org/attica-event.html#setCountry)
///
/// @param self Attica__Event*
/// @param country const char*
///
void k_attica__event_set_country(void* self, const char* country);

/// [Upstream resources](https://api.kde.org/attica-event.html#country)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Attica__Event*
///
const char* k_attica__event_country(void* self);

/// [Upstream resources](https://api.kde.org/attica-event.html#setCity)
///
/// @param self Attica__Event*
/// @param city const char*
///
void k_attica__event_set_city(void* self, const char* city);

/// [Upstream resources](https://api.kde.org/attica-event.html#city)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Attica__Event*
///
const char* k_attica__event_city(void* self);

/// [Upstream resources](https://api.kde.org/attica-event.html#addExtendedAttribute)
///
/// @param self Attica__Event*
/// @param key const char*
/// @param value const char*
///
void k_attica__event_add_extended_attribute(void* self, const char* key, const char* value);

/// [Upstream resources](https://api.kde.org/attica-event.html#extendedAttribute)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Attica__Event*
/// @param key const char*
///
const char* k_attica__event_extended_attribute(void* self, const char* key);

/// [Upstream resources](https://api.kde.org/attica-event.html#extendedAttributes)
///
/// @param self Attica__Event*
///
libqt_map /* of const char* to const char* */ k_attica__event_extended_attributes(void* self);

/// [Upstream resources](https://api.kde.org/attica-event.html#isValid)
///
/// @param self Attica__Event*
///
bool k_attica__event_is_valid(void* self);

/// Delete this object from C++ memory.
///
/// @param self Attica__Event*
///
void k_attica__event_delete(void* self);

#endif
