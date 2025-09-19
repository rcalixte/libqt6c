#pragma once
#ifndef SRC_EXTRAS_ATTICAQT6C_LIBHOMEPAGETYPE_H
#define SRC_EXTRAS_ATTICAQT6C_LIBHOMEPAGETYPE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/attica-homepagetype.html

/// k_attica__homepagetype_new constructs a new Attica::HomePageType object.
///
Attica__HomePageType* k_attica__homepagetype_new();

/// k_attica__homepagetype_new2 constructs a new Attica::HomePageType object.
///
/// @param other Attica__HomePageType*
Attica__HomePageType* k_attica__homepagetype_new2(void* other);

/// [Qt documentation](https://api.kde.org/attica-homepagetype.html#operator-eq)
///
/// @param self Attica__HomePageType*
/// @param other Attica__HomePageType*
void k_attica__homepagetype_operator_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/attica-homepagetype.html#id)
///
/// @param self Attica__HomePageType*
uint32_t k_attica__homepagetype_id(void* self);

/// [Qt documentation](https://api.kde.org/attica-homepagetype.html#setId)
///
/// @param self Attica__HomePageType*
/// @param id uint32_t
void k_attica__homepagetype_set_id(void* self, uint32_t id);

/// [Qt documentation](https://api.kde.org/attica-homepagetype.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__HomePageType*
const char* k_attica__homepagetype_name(void* self);

/// [Qt documentation](https://api.kde.org/attica-homepagetype.html#setName)
///
/// @param self Attica__HomePageType*
/// @param name const char*
void k_attica__homepagetype_set_name(void* self, const char* name);

/// Delete this object from C++ memory.
///
/// @param self Attica__HomePageType*
void k_attica__homepagetype_delete(void* self);

#endif
