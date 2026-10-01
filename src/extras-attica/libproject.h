#pragma once
#ifndef EXTRAS_ATTICA_LIBPROJECT_H
#define EXTRAS_ATTICA_LIBPROJECT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/attica-project.html)

/// k_attica__project_new constructs a new Attica::Project object.
///
Attica__Project* k_attica__project_new();

/// [Upstream resources](https://api.kde.org/attica-project.html)

/// k_attica__project_new2 constructs a new Attica::Project object.
///
/// @param other Attica__Project*
///
Attica__Project* k_attica__project_new2(const void* other);

/// [Upstream resources](https://api.kde.org/attica-project.html#operator-eq)
///
/// @param self Attica__Project*
/// @param other Attica__Project*
///
void k_attica__project_operator_assign(void* self, const void* other);

/// [Upstream resources](https://api.kde.org/attica-project.html#setId)
///
/// @param self Attica__Project*
/// @param id const char*
///
void k_attica__project_set_id(void* self, const char* id);

/// [Upstream resources](https://api.kde.org/attica-project.html#id)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__Project*
///
const char* k_attica__project_id(const void* self);

/// [Upstream resources](https://api.kde.org/attica-project.html#setName)
///
/// @param self Attica__Project*
/// @param name const char*
///
void k_attica__project_set_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/attica-project.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__Project*
///
const char* k_attica__project_name(const void* self);

/// [Upstream resources](https://api.kde.org/attica-project.html#setVersion)
///
/// @param self Attica__Project*
/// @param version const char*
///
void k_attica__project_set_version(void* self, const char* version);

/// [Upstream resources](https://api.kde.org/attica-project.html#version)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__Project*
///
const char* k_attica__project_version(const void* self);

/// [Upstream resources](https://api.kde.org/attica-project.html#setUrl)
///
/// @param self Attica__Project*
/// @param url const char*
///
void k_attica__project_set_url(void* self, const char* url);

/// [Upstream resources](https://api.kde.org/attica-project.html#url)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__Project*
///
const char* k_attica__project_url(const void* self);

/// [Upstream resources](https://api.kde.org/attica-project.html#setLicense)
///
/// @param self Attica__Project*
/// @param license const char*
///
void k_attica__project_set_license(void* self, const char* license);

/// [Upstream resources](https://api.kde.org/attica-project.html#license)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__Project*
///
const char* k_attica__project_license(const void* self);

/// [Upstream resources](https://api.kde.org/attica-project.html#setSummary)
///
/// @param self Attica__Project*
/// @param summary const char*
///
void k_attica__project_set_summary(void* self, const char* summary);

/// [Upstream resources](https://api.kde.org/attica-project.html#summary)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__Project*
///
const char* k_attica__project_summary(const void* self);

/// [Upstream resources](https://api.kde.org/attica-project.html#setDescription)
///
/// @param self Attica__Project*
/// @param description const char*
///
void k_attica__project_set_description(void* self, const char* description);

/// [Upstream resources](https://api.kde.org/attica-project.html#description)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__Project*
///
const char* k_attica__project_description(const void* self);

/// [Upstream resources](https://api.kde.org/attica-project.html#setDevelopers)
///
/// @param self Attica__Project*
/// @param developers const char**
///
void k_attica__project_set_developers(void* self, const char* developers[static 1]);

/// [Upstream resources](https://api.kde.org/attica-project.html#developers)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const Attica__Project*
///
const char** k_attica__project_developers(const void* self);

/// [Upstream resources](https://api.kde.org/attica-project.html#setRequirements)
///
/// @param self Attica__Project*
/// @param requirements const char*
///
void k_attica__project_set_requirements(void* self, const char* requirements);

/// [Upstream resources](https://api.kde.org/attica-project.html#requirements)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__Project*
///
const char* k_attica__project_requirements(const void* self);

/// [Upstream resources](https://api.kde.org/attica-project.html#setSpecFile)
///
/// @param self Attica__Project*
/// @param specFile const char*
///
void k_attica__project_set_spec_file(void* self, const char* specFile);

/// [Upstream resources](https://api.kde.org/attica-project.html#specFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__Project*
///
const char* k_attica__project_spec_file(const void* self);

/// [Upstream resources](https://api.kde.org/attica-project.html#addExtendedAttribute)
///
/// @param self Attica__Project*
/// @param key const char*
/// @param value const char*
///
void k_attica__project_add_extended_attribute(void* self, const char* key, const char* value);

/// [Upstream resources](https://api.kde.org/attica-project.html#extendedAttribute)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__Project*
/// @param key const char*
///
const char* k_attica__project_extended_attribute(const void* self, const char* key);

/// [Upstream resources](https://api.kde.org/attica-project.html#extendedAttributes)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of const char* to const char*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.keys[i]);
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self const Attica__Project*
///
/// @return libqt_map of const char* to const char*
///
libqt_map k_attica__project_extended_attributes(const void* self);

/// [Upstream resources](https://api.kde.org/attica-project.html#isValid)
///
/// @param self const Attica__Project*
///
bool k_attica__project_is_valid(const void* self);

/// Delete this object from C++ memory.
///
/// @param self Attica__Project*
///
void k_attica__project_delete(void* self);

#endif
