#pragma once
#ifndef SRC_EXTRAS_ATTICA_QT6C_LIBHOMEPAGEENTRY_H
#define SRC_EXTRAS_ATTICA_QT6C_LIBHOMEPAGEENTRY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/attica-homepageentry.html)

/// k_attica__homepageentry_new constructs a new Attica::HomePageEntry object.
///
Attica__HomePageEntry* k_attica__homepageentry_new();

/// [Upstream resources](https://api.kde.org/attica-homepageentry.html)

/// k_attica__homepageentry_new2 constructs a new Attica::HomePageEntry object.
///
/// @param other Attica__HomePageEntry*
///
Attica__HomePageEntry* k_attica__homepageentry_new2(void* other);

/// [Upstream resources](https://api.kde.org/attica-homepageentry.html#operator-eq)
///
/// @param self Attica__HomePageEntry*
/// @param other Attica__HomePageEntry*
///
void k_attica__homepageentry_operator_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/attica-homepageentry.html#type)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__HomePageEntry*
///
const char* k_attica__homepageentry_type(void* self);

/// [Upstream resources](https://api.kde.org/attica-homepageentry.html#setType)
///
/// @param self Attica__HomePageEntry*
/// @param type const char*
///
void k_attica__homepageentry_set_type(void* self, const char* type);

/// [Upstream resources](https://api.kde.org/attica-homepageentry.html#url)
///
/// @param self Attica__HomePageEntry*
///
QUrl* k_attica__homepageentry_url(void* self);

/// [Upstream resources](https://api.kde.org/attica-homepageentry.html#setUrl)
///
/// @param self Attica__HomePageEntry*
/// @param url QUrl*
///
void k_attica__homepageentry_set_url(void* self, void* url);

/// Delete this object from C++ memory.
///
/// @param self Attica__HomePageEntry*
///
void k_attica__homepageentry_delete(void* self);

#endif
