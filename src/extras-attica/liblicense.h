#pragma once
#ifndef SRC_EXTRAS_ATTICA_QT6C_LIBLICENSE_H
#define SRC_EXTRAS_ATTICA_QT6C_LIBLICENSE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/attica-license.html)

/// k_attica__license_new constructs a new Attica::License object.
///
Attica__License* k_attica__license_new();

/// [Upstream resources](https://api.kde.org/attica-license.html)

/// k_attica__license_new2 constructs a new Attica::License object.
///
/// @param other Attica__License*
///
Attica__License* k_attica__license_new2(void* other);

/// [Upstream resources](https://api.kde.org/attica-license.html#operator-eq)
///
/// @param self Attica__License*
/// @param other Attica__License*
///
void k_attica__license_operator_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/attica-license.html#id)
///
/// @param self Attica__License*
///
uint32_t k_attica__license_id(void* self);

/// [Upstream resources](https://api.kde.org/attica-license.html#setId)
///
/// @param self Attica__License*
/// @param id uint32_t
///
void k_attica__license_set_id(void* self, uint32_t id);

/// [Upstream resources](https://api.kde.org/attica-license.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__License*
///
const char* k_attica__license_name(void* self);

/// [Upstream resources](https://api.kde.org/attica-license.html#setName)
///
/// @param self Attica__License*
/// @param name const char*
///
void k_attica__license_set_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/attica-license.html#url)
///
/// @param self Attica__License*
///
QUrl* k_attica__license_url(void* self);

/// [Upstream resources](https://api.kde.org/attica-license.html#setUrl)
///
/// @param self Attica__License*
/// @param url QUrl*
///
void k_attica__license_set_url(void* self, void* url);

/// Delete this object from C++ memory.
///
/// @param self Attica__License*
///
void k_attica__license_delete(void* self);

#endif
