#pragma once
#ifndef SRC_EXTRAS_ATTICAQT6C_LIBCATEGORY_H
#define SRC_EXTRAS_ATTICAQT6C_LIBCATEGORY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/attica-category.html

/// k_attica__category_new constructs a new Attica::Category object.
///
Attica__Category* k_attica__category_new();

/// k_attica__category_new2 constructs a new Attica::Category object.
///
/// @param other Attica__Category*
Attica__Category* k_attica__category_new2(void* other);

/// [Qt documentation](https://api.kde.org/attica-category.html#operator-eq)
///
/// @param self Attica__Category*
/// @param other Attica__Category*
void k_attica__category_operator_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/attica-category.html#setId)
///
/// @param self Attica__Category*
/// @param id const char*
void k_attica__category_set_id(void* self, const char* id);

/// [Qt documentation](https://api.kde.org/attica-category.html#id)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Category*
const char* k_attica__category_id(void* self);

/// [Qt documentation](https://api.kde.org/attica-category.html#setName)
///
/// @param self Attica__Category*
/// @param name const char*
void k_attica__category_set_name(void* self, const char* name);

/// [Qt documentation](https://api.kde.org/attica-category.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Category*
const char* k_attica__category_name(void* self);

/// [Qt documentation](https://api.kde.org/attica-category.html#isValid)
///
/// @param self Attica__Category*
bool k_attica__category_is_valid(void* self);

/// [Qt documentation](https://api.kde.org/attica-category.html#setDisplayName)
///
/// @param self Attica__Category*
/// @param name const char*
void k_attica__category_set_display_name(void* self, const char* name);

/// [Qt documentation](https://api.kde.org/attica-category.html#displayName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Category*
const char* k_attica__category_display_name(void* self);

/// Delete this object from C++ memory.
///
/// @param self Attica__Category*
void k_attica__category_delete(void* self);

#endif
