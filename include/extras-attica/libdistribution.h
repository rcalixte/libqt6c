#pragma once
#ifndef SRC_EXTRAS_ATTICA_QT6C_LIBDISTRIBUTION_H
#define SRC_EXTRAS_ATTICA_QT6C_LIBDISTRIBUTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/attica-distribution.html

/// k_attica__distribution_new constructs a new Attica::Distribution object.
///
Attica__Distribution* k_attica__distribution_new();

/// k_attica__distribution_new2 constructs a new Attica::Distribution object.
///
/// @param other Attica__Distribution*
Attica__Distribution* k_attica__distribution_new2(void* other);

/// [Qt documentation](https://api.kde.org/attica-distribution.html#operator-eq)
///
/// @param self Attica__Distribution*
/// @param other Attica__Distribution*
void k_attica__distribution_operator_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/attica-distribution.html#id)
///
/// @param self Attica__Distribution*
uint32_t k_attica__distribution_id(void* self);

/// [Qt documentation](https://api.kde.org/attica-distribution.html#setId)
///
/// @param self Attica__Distribution*
/// @param id uint32_t
void k_attica__distribution_set_id(void* self, uint32_t id);

/// [Qt documentation](https://api.kde.org/attica-distribution.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Distribution*
const char* k_attica__distribution_name(void* self);

/// [Qt documentation](https://api.kde.org/attica-distribution.html#setName)
///
/// @param self Attica__Distribution*
/// @param name const char*
void k_attica__distribution_set_name(void* self, const char* name);

/// Delete this object from C++ memory.
///
/// @param self Attica__Distribution*
void k_attica__distribution_delete(void* self);

#endif
