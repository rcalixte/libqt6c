#pragma once
#ifndef SRC_EXTRAS_ATTICA_QT6C_LIBPUBLISHERFIELD_H
#define SRC_EXTRAS_ATTICA_QT6C_LIBPUBLISHERFIELD_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/attica-publisherfield.html)

/// k_attica__publisherfield_new constructs a new Attica::PublisherField object.
///
Attica__PublisherField* k_attica__publisherfield_new();

/// [Upstream resources](https://api.kde.org/attica-publisherfield.html)

/// k_attica__publisherfield_new2 constructs a new Attica::PublisherField object.
///
/// @param other Attica__PublisherField*
///
Attica__PublisherField* k_attica__publisherfield_new2(void* other);

/// [Upstream resources](https://api.kde.org/attica-publisherfield.html#operator-eq)
///
/// @param self Attica__PublisherField*
/// @param other Attica__PublisherField*
///
void k_attica__publisherfield_operator_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/attica-publisherfield.html#setName)
///
/// @param self Attica__PublisherField*
/// @param value const char*
///
void k_attica__publisherfield_set_name(void* self, const char* value);

/// [Upstream resources](https://api.kde.org/attica-publisherfield.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__PublisherField*
///
const char* k_attica__publisherfield_name(void* self);

/// [Upstream resources](https://api.kde.org/attica-publisherfield.html#setType)
///
/// @param self Attica__PublisherField*
/// @param value const char*
///
void k_attica__publisherfield_set_type(void* self, const char* value);

/// [Upstream resources](https://api.kde.org/attica-publisherfield.html#type)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__PublisherField*
///
const char* k_attica__publisherfield_type(void* self);

/// [Upstream resources](https://api.kde.org/attica-publisherfield.html#setData)
///
/// @param self Attica__PublisherField*
/// @param value const char*
///
void k_attica__publisherfield_set_data(void* self, const char* value);

/// [Upstream resources](https://api.kde.org/attica-publisherfield.html#data)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__PublisherField*
///
const char* k_attica__publisherfield_data(void* self);

/// [Upstream resources](https://api.kde.org/attica-publisherfield.html#isValid)
///
/// @param self Attica__PublisherField*
///
bool k_attica__publisherfield_is_valid(void* self);

/// Delete this object from C++ memory.
///
/// @param self Attica__PublisherField*
///
void k_attica__publisherfield_delete(void* self);

#endif
