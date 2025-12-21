#pragma once
#ifndef SRC_EXTRAS_ATTICA_QT6C_LIBPUBLISHER_H
#define SRC_EXTRAS_ATTICA_QT6C_LIBPUBLISHER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/attica-field.html)

/// k_attica__field_new constructs a new Attica::Field object.
///
/// @param param1 Attica__Field*
///
Attica__Field* k_attica__field_new(void* param1);

/// [Upstream resources](https://api.kde.org/attica-field.html#type-var)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Attica__Field*
///
const char* k_attica__field_type(void* self);

/// [Upstream resources](https://api.kde.org/attica-field.html#type-var)
///
/// @param self Attica__Field*
/// @param type const char*
///
void k_attica__field_set_type(void* self, const char* type);

/// [Upstream resources](https://api.kde.org/attica-field.html#name-var)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Attica__Field*
///
const char* k_attica__field_name(void* self);

/// [Upstream resources](https://api.kde.org/attica-field.html#name-var)
///
/// @param self Attica__Field*
/// @param name const char*
///
void k_attica__field_set_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/attica-field.html#fieldsize-var)
///
/// @param self Attica__Field*
///
int32_t k_attica__field_fieldsize(void* self);

/// [Upstream resources](https://api.kde.org/attica-field.html#fieldsize-var)
///
/// @param self Attica__Field*
/// @param fieldsize int
///
void k_attica__field_set_fieldsize(void* self, int fieldsize);

/// [Upstream resources](https://api.kde.org/attica-field.html#required-var)
///
/// @param self Attica__Field*
///
bool k_attica__field_required(void* self);

/// [Upstream resources](https://api.kde.org/attica-field.html#required-var)
///
/// @param self Attica__Field*
/// @param required bool
///
void k_attica__field_set_required(void* self, bool required);

/// [Upstream resources](https://api.kde.org/attica-field.html#options-var)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Attica__Field*
///
const char** k_attica__field_options(void* self);

/// [Upstream resources](https://api.kde.org/attica-field.html#options-var)
///
/// @param self Attica__Field*
/// @param options const char**
///
void k_attica__field_set_options(void* self, const char* options[static 1]);

/// [Upstream resources](https://api.kde.org/attica-field.html#operator-eq)
///
/// @param self Attica__Field*
/// @param param1 Attica__Field*
///
void k_attica__field_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self Attica__Field*
///
void k_attica__field_delete(void* self);

/// [Upstream resources](https://api.kde.org/attica-publisher.html)

/// k_attica__publisher_new constructs a new Attica::Publisher object.
///
Attica__Publisher* k_attica__publisher_new();

/// [Upstream resources](https://api.kde.org/attica-publisher.html)

/// k_attica__publisher_new2 constructs a new Attica::Publisher object.
///
/// @param other Attica__Publisher*
///
Attica__Publisher* k_attica__publisher_new2(void* other);

/// [Upstream resources](https://api.kde.org/attica-publisher.html#operator-eq)
///
/// @param self Attica__Publisher*
/// @param other Attica__Publisher*
///
void k_attica__publisher_operator_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/attica-publisher.html#setId)
///
/// @param self Attica__Publisher*
/// @param id const char*
///
void k_attica__publisher_set_id(void* self, const char* id);

/// [Upstream resources](https://api.kde.org/attica-publisher.html#id)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Attica__Publisher*
///
const char* k_attica__publisher_id(void* self);

/// [Upstream resources](https://api.kde.org/attica-publisher.html#setName)
///
/// @param self Attica__Publisher*
/// @param name const char*
///
void k_attica__publisher_set_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/attica-publisher.html#name)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Attica__Publisher*
///
const char* k_attica__publisher_name(void* self);

/// [Upstream resources](https://api.kde.org/attica-publisher.html#setUrl)
///
/// @param self Attica__Publisher*
/// @param url const char*
///
void k_attica__publisher_set_url(void* self, const char* url);

/// [Upstream resources](https://api.kde.org/attica-publisher.html#url)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Attica__Publisher*
///
const char* k_attica__publisher_url(void* self);

/// [Upstream resources](https://api.kde.org/attica-publisher.html#addField)
///
/// @param self Attica__Publisher*
/// @param param1 Attica__Field*
///
void k_attica__publisher_add_field(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/attica-publisher.html#fields)
///
/// @param self Attica__Publisher*
///
libqt_list /* of Attica__Field* */ k_attica__publisher_fields(void* self);

/// [Upstream resources](https://api.kde.org/attica-publisher.html#addTarget)
///
/// @param self Attica__Publisher*
/// @param param1 Attica__Target*
///
void k_attica__publisher_add_target(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/attica-publisher.html#targets)
///
/// @param self Attica__Publisher*
///
libqt_list /* of Attica__Target* */ k_attica__publisher_targets(void* self);

/// [Upstream resources](https://api.kde.org/attica-publisher.html#isValid)
///
/// @param self Attica__Publisher*
///
bool k_attica__publisher_is_valid(void* self);

/// Delete this object from C++ memory.
///
/// @param self Attica__Publisher*
///
void k_attica__publisher_delete(void* self);

#endif
