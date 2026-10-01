#pragma once
#ifndef EXTRAS_ATTICA_LIBDISTRIBUTION_H
#define EXTRAS_ATTICA_LIBDISTRIBUTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/attica-distribution.html)

/// k_attica__distribution_new constructs a new Attica::Distribution object.
///
Attica__Distribution* k_attica__distribution_new();

/// [Upstream resources](https://api.kde.org/attica-distribution.html)

/// k_attica__distribution_new2 constructs a new Attica::Distribution object.
///
/// @param other Attica__Distribution*
///
Attica__Distribution* k_attica__distribution_new2(const void* other);

/// [Upstream resources](https://api.kde.org/attica-distribution.html#operator-eq)
///
/// @param self Attica__Distribution*
/// @param other Attica__Distribution*
///
void k_attica__distribution_operator_assign(void* self, const void* other);

/// [Upstream resources](https://api.kde.org/attica-distribution.html#id)
///
/// @param self const Attica__Distribution*
///
uint32_t k_attica__distribution_id(const void* self);

/// [Upstream resources](https://api.kde.org/attica-distribution.html#setId)
///
/// @param self Attica__Distribution*
/// @param id uint32_t
///
void k_attica__distribution_set_id(void* self, uint32_t id);

/// [Upstream resources](https://api.kde.org/attica-distribution.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__Distribution*
///
const char* k_attica__distribution_name(const void* self);

/// [Upstream resources](https://api.kde.org/attica-distribution.html#setName)
///
/// @param self Attica__Distribution*
/// @param name const char*
///
void k_attica__distribution_set_name(void* self, const char* name);

/// Delete this object from C++ memory.
///
/// @param self Attica__Distribution*
///
void k_attica__distribution_delete(void* self);

#endif
