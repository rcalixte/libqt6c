#pragma once
#ifndef EXTRAS_ATTICA_LIBPUBLISHERFIELD_H
#define EXTRAS_ATTICA_LIBPUBLISHERFIELD_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
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
Attica__PublisherField* k_attica__publisherfield_new2(const void* other);

/// [Upstream resources](https://api.kde.org/attica-publisherfield.html#operator-eq)
///
/// @param self Attica__PublisherField*
/// @param other Attica__PublisherField*
///
void k_attica__publisherfield_operator_assign(void* self, const void* other);

/// [Upstream resources](https://api.kde.org/attica-publisherfield.html#setName)
///
/// @param self Attica__PublisherField*
/// @param value const char*
///
void k_attica__publisherfield_set_name(void* self, const char* value);

/// [Upstream resources](https://api.kde.org/attica-publisherfield.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__PublisherField*
///
const char* k_attica__publisherfield_name(const void* self);

/// [Upstream resources](https://api.kde.org/attica-publisherfield.html#setType)
///
/// @param self Attica__PublisherField*
/// @param value const char*
///
void k_attica__publisherfield_set_type(void* self, const char* value);

/// [Upstream resources](https://api.kde.org/attica-publisherfield.html#type)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__PublisherField*
///
const char* k_attica__publisherfield_type(const void* self);

/// [Upstream resources](https://api.kde.org/attica-publisherfield.html#setData)
///
/// @param self Attica__PublisherField*
/// @param value const char*
///
void k_attica__publisherfield_set_data(void* self, const char* value);

/// [Upstream resources](https://api.kde.org/attica-publisherfield.html#data)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__PublisherField*
///
const char* k_attica__publisherfield_data(const void* self);

/// [Upstream resources](https://api.kde.org/attica-publisherfield.html#isValid)
///
/// @param self const Attica__PublisherField*
///
bool k_attica__publisherfield_is_valid(const void* self);

/// Delete this object from C++ memory.
///
/// @param self Attica__PublisherField*
///
void k_attica__publisherfield_delete(void* self);

#endif
