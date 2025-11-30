#pragma once
#ifndef SRC_EXTRAS_ATTICA_QT6C_LIBCONFIG_H
#define SRC_EXTRAS_ATTICA_QT6C_LIBCONFIG_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/attica-config.html

/// k_attica__config_new constructs a new Attica::Config object.
///
Attica__Config* k_attica__config_new();

/// k_attica__config_new2 constructs a new Attica::Config object.
///
/// @param other Attica__Config*
Attica__Config* k_attica__config_new2(void* other);

/// [Upstream resources](https://api.kde.org/attica-config.html#operator-eq)
///
/// @param self Attica__Config*
/// @param other Attica__Config*
void k_attica__config_operator_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/attica-config.html#contact)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Config*
const char* k_attica__config_contact(void* self);

/// [Upstream resources](https://api.kde.org/attica-config.html#host)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Config*
const char* k_attica__config_host(void* self);

/// [Upstream resources](https://api.kde.org/attica-config.html#version)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Config*
const char* k_attica__config_version(void* self);

/// [Upstream resources](https://api.kde.org/attica-config.html#ssl)
///
/// @param self Attica__Config*
bool k_attica__config_ssl(void* self);

/// [Upstream resources](https://api.kde.org/attica-config.html#website)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Config*
const char* k_attica__config_website(void* self);

/// [Upstream resources](https://api.kde.org/attica-config.html#setContact)
///
/// @param self Attica__Config*
/// @param contact const char*
void k_attica__config_set_contact(void* self, const char* contact);

/// [Upstream resources](https://api.kde.org/attica-config.html#setHost)
///
/// @param self Attica__Config*
/// @param host const char*
void k_attica__config_set_host(void* self, const char* host);

/// [Upstream resources](https://api.kde.org/attica-config.html#setSsl)
///
/// @param self Attica__Config*
/// @param ssl bool
void k_attica__config_set_ssl(void* self, bool ssl);

/// [Upstream resources](https://api.kde.org/attica-config.html#setVersion)
///
/// @param self Attica__Config*
/// @param version const char*
void k_attica__config_set_version(void* self, const char* version);

/// [Upstream resources](https://api.kde.org/attica-config.html#setWebsite)
///
/// @param self Attica__Config*
/// @param website const char*
void k_attica__config_set_website(void* self, const char* website);

/// [Upstream resources](https://api.kde.org/attica-config.html#isValid)
///
/// @param self Attica__Config*
bool k_attica__config_is_valid(void* self);

/// Delete this object from C++ memory.
///
/// @param self Attica__Config*
void k_attica__config_delete(void* self);

#endif
