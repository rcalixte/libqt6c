#pragma once
#ifndef SRC_EXTRAS_ATTICA_QT6C_LIBPRIVATEDATA_H
#define SRC_EXTRAS_ATTICA_QT6C_LIBPRIVATEDATA_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/attica-privatedata.html

/// k_attica__privatedata_new constructs a new Attica::PrivateData object.
///
Attica__PrivateData* k_attica__privatedata_new();

/// k_attica__privatedata_new2 constructs a new Attica::PrivateData object.
///
/// @param other Attica__PrivateData*
Attica__PrivateData* k_attica__privatedata_new2(void* other);

/// [Qt documentation](https://api.kde.org/attica-privatedata.html#operator-eq)
///
/// @param self Attica__PrivateData*
/// @param other Attica__PrivateData*
void k_attica__privatedata_operator_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/attica-privatedata.html#setAttribute)
///
/// @param self Attica__PrivateData*
/// @param key const char*
/// @param value const char*
void k_attica__privatedata_set_attribute(void* self, const char* key, const char* value);

/// [Qt documentation](https://api.kde.org/attica-privatedata.html#attribute)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__PrivateData*
/// @param key const char*
const char* k_attica__privatedata_attribute(void* self, const char* key);

/// [Qt documentation](https://api.kde.org/attica-privatedata.html#setTimestamp)
///
/// @param self Attica__PrivateData*
/// @param key const char*
/// @param when QDateTime*
void k_attica__privatedata_set_timestamp(void* self, const char* key, void* when);

/// [Qt documentation](https://api.kde.org/attica-privatedata.html#timestamp)
///
/// @param self Attica__PrivateData*
/// @param key const char*
QDateTime* k_attica__privatedata_timestamp(void* self, const char* key);

/// [Qt documentation](https://api.kde.org/attica-privatedata.html#keys)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__PrivateData*
const char** k_attica__privatedata_keys(void* self);

/// Delete this object from C++ memory.
///
/// @param self Attica__PrivateData*
void k_attica__privatedata_delete(void* self);

#endif
