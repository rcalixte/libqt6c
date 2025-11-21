#pragma once
#ifndef SRC_EXTRAS_ATTICA_QT6C_LIBBUILDSERVICE_H
#define SRC_EXTRAS_ATTICA_QT6C_LIBBUILDSERVICE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/attica-target.html

/// k_attica__target_new constructs a new Attica::Target object.
///
/// @param param1 Attica__Target*
Attica__Target* k_attica__target_new(void* param1);

/// [Qt documentation](https://api.kde.org/attica-target.html#id-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Target*
const char* k_attica__target_id(void* self);

/// [Qt documentation](https://api.kde.org/attica-target.html#id-var)
///
/// @param self Attica__Target*
/// @param id const char*
void k_attica__target_set_id(void* self, const char* id);

/// [Qt documentation](https://api.kde.org/attica-target.html#name-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Target*
const char* k_attica__target_name(void* self);

/// [Qt documentation](https://api.kde.org/attica-target.html#name-var)
///
/// @param self Attica__Target*
/// @param name const char*
void k_attica__target_set_name(void* self, const char* name);

/// [Qt documentation](https://api.kde.org/attica-target.html#operator-eq)
///
/// @param self Attica__Target*
/// @param param1 Attica__Target*
void k_attica__target_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self Attica__Target*
void k_attica__target_delete(void* self);

/// https://api.kde.org/attica-buildservice.html

/// k_attica__buildservice_new constructs a new Attica::BuildService object.
///
Attica__BuildService* k_attica__buildservice_new();

/// k_attica__buildservice_new2 constructs a new Attica::BuildService object.
///
/// @param other Attica__BuildService*
Attica__BuildService* k_attica__buildservice_new2(void* other);

/// [Qt documentation](https://api.kde.org/attica-buildservice.html#operator-eq)
///
/// @param self Attica__BuildService*
/// @param other Attica__BuildService*
void k_attica__buildservice_operator_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/attica-buildservice.html#setId)
///
/// @param self Attica__BuildService*
/// @param id const char*
void k_attica__buildservice_set_id(void* self, const char* id);

/// [Qt documentation](https://api.kde.org/attica-buildservice.html#id)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__BuildService*
const char* k_attica__buildservice_id(void* self);

/// [Qt documentation](https://api.kde.org/attica-buildservice.html#setName)
///
/// @param self Attica__BuildService*
/// @param name const char*
void k_attica__buildservice_set_name(void* self, const char* name);

/// [Qt documentation](https://api.kde.org/attica-buildservice.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__BuildService*
const char* k_attica__buildservice_name(void* self);

/// [Qt documentation](https://api.kde.org/attica-buildservice.html#setUrl)
///
/// @param self Attica__BuildService*
/// @param url const char*
void k_attica__buildservice_set_url(void* self, const char* url);

/// [Qt documentation](https://api.kde.org/attica-buildservice.html#url)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__BuildService*
const char* k_attica__buildservice_url(void* self);

/// [Qt documentation](https://api.kde.org/attica-buildservice.html#addTarget)
///
/// @param self Attica__BuildService*
/// @param param1 Attica__Target*
void k_attica__buildservice_add_target(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/attica-buildservice.html#targets)
///
/// @param self Attica__BuildService*
libqt_list /* of Attica__Target* */ k_attica__buildservice_targets(void* self);

/// [Qt documentation](https://api.kde.org/attica-buildservice.html#isValid)
///
/// @param self Attica__BuildService*
bool k_attica__buildservice_is_valid(void* self);

/// Delete this object from C++ memory.
///
/// @param self Attica__BuildService*
void k_attica__buildservice_delete(void* self);

#endif
