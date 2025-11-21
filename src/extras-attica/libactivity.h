#pragma once
#ifndef SRC_EXTRAS_ATTICA_QT6C_LIBACTIVITY_H
#define SRC_EXTRAS_ATTICA_QT6C_LIBACTIVITY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/attica-activity.html

/// k_attica__activity_new constructs a new Attica::Activity object.
///
Attica__Activity* k_attica__activity_new();

/// k_attica__activity_new2 constructs a new Attica::Activity object.
///
/// @param other Attica__Activity*
Attica__Activity* k_attica__activity_new2(void* other);

/// [Qt documentation](https://api.kde.org/attica-activity.html#operator-eq)
///
/// @param self Attica__Activity*
/// @param other Attica__Activity*
void k_attica__activity_operator_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/attica-activity.html#setId)
///
/// @param self Attica__Activity*
/// @param id const char*
void k_attica__activity_set_id(void* self, const char* id);

/// [Qt documentation](https://api.kde.org/attica-activity.html#id)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Activity*
const char* k_attica__activity_id(void* self);

/// [Qt documentation](https://api.kde.org/attica-activity.html#setAssociatedPerson)
///
/// @param self Attica__Activity*
/// @param associatedPerson Attica__Person*
void k_attica__activity_set_associated_person(void* self, void* associatedPerson);

/// [Qt documentation](https://api.kde.org/attica-activity.html#associatedPerson)
///
/// @param self Attica__Activity*
Attica__Person* k_attica__activity_associated_person(void* self);

/// [Qt documentation](https://api.kde.org/attica-activity.html#setTimestamp)
///
/// @param self Attica__Activity*
/// @param timestamp QDateTime*
void k_attica__activity_set_timestamp(void* self, void* timestamp);

/// [Qt documentation](https://api.kde.org/attica-activity.html#timestamp)
///
/// @param self Attica__Activity*
QDateTime* k_attica__activity_timestamp(void* self);

/// [Qt documentation](https://api.kde.org/attica-activity.html#setMessage)
///
/// @param self Attica__Activity*
/// @param message const char*
void k_attica__activity_set_message(void* self, const char* message);

/// [Qt documentation](https://api.kde.org/attica-activity.html#message)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Activity*
const char* k_attica__activity_message(void* self);

/// [Qt documentation](https://api.kde.org/attica-activity.html#setLink)
///
/// @param self Attica__Activity*
/// @param link QUrl*
void k_attica__activity_set_link(void* self, void* link);

/// [Qt documentation](https://api.kde.org/attica-activity.html#link)
///
/// @param self Attica__Activity*
QUrl* k_attica__activity_link(void* self);

/// [Qt documentation](https://api.kde.org/attica-activity.html#isValid)
///
/// @param self Attica__Activity*
bool k_attica__activity_is_valid(void* self);

/// Delete this object from C++ memory.
///
/// @param self Attica__Activity*
void k_attica__activity_delete(void* self);

#endif
