#pragma once
#ifndef SRC_EXTRAS_ATTICA_QT6C_LIBPROJECT_H
#define SRC_EXTRAS_ATTICA_QT6C_LIBPROJECT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/attica-project.html

/// k_attica__project_new constructs a new Attica::Project object.
///
Attica__Project* k_attica__project_new();

/// k_attica__project_new2 constructs a new Attica::Project object.
///
/// @param other Attica__Project*
Attica__Project* k_attica__project_new2(void* other);

/// [Upstream resources](https://api.kde.org/attica-project.html#operator-eq)
///
/// @param self Attica__Project*
/// @param other Attica__Project*
void k_attica__project_operator_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/attica-project.html#setId)
///
/// @param self Attica__Project*
/// @param id const char*
void k_attica__project_set_id(void* self, const char* id);

/// [Upstream resources](https://api.kde.org/attica-project.html#id)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Project*
const char* k_attica__project_id(void* self);

/// [Upstream resources](https://api.kde.org/attica-project.html#setName)
///
/// @param self Attica__Project*
/// @param name const char*
void k_attica__project_set_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/attica-project.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Project*
const char* k_attica__project_name(void* self);

/// [Upstream resources](https://api.kde.org/attica-project.html#setVersion)
///
/// @param self Attica__Project*
/// @param version const char*
void k_attica__project_set_version(void* self, const char* version);

/// [Upstream resources](https://api.kde.org/attica-project.html#version)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Project*
const char* k_attica__project_version(void* self);

/// [Upstream resources](https://api.kde.org/attica-project.html#setUrl)
///
/// @param self Attica__Project*
/// @param url const char*
void k_attica__project_set_url(void* self, const char* url);

/// [Upstream resources](https://api.kde.org/attica-project.html#url)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Project*
const char* k_attica__project_url(void* self);

/// [Upstream resources](https://api.kde.org/attica-project.html#setLicense)
///
/// @param self Attica__Project*
/// @param license const char*
void k_attica__project_set_license(void* self, const char* license);

/// [Upstream resources](https://api.kde.org/attica-project.html#license)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Project*
const char* k_attica__project_license(void* self);

/// [Upstream resources](https://api.kde.org/attica-project.html#setSummary)
///
/// @param self Attica__Project*
/// @param summary const char*
void k_attica__project_set_summary(void* self, const char* summary);

/// [Upstream resources](https://api.kde.org/attica-project.html#summary)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Project*
const char* k_attica__project_summary(void* self);

/// [Upstream resources](https://api.kde.org/attica-project.html#setDescription)
///
/// @param self Attica__Project*
/// @param description const char*
void k_attica__project_set_description(void* self, const char* description);

/// [Upstream resources](https://api.kde.org/attica-project.html#description)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Project*
const char* k_attica__project_description(void* self);

/// [Upstream resources](https://api.kde.org/attica-project.html#setDevelopers)
///
/// @param self Attica__Project*
/// @param developers const char**
void k_attica__project_set_developers(void* self, const char* developers[static 1]);

/// [Upstream resources](https://api.kde.org/attica-project.html#developers)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Project*
const char** k_attica__project_developers(void* self);

/// [Upstream resources](https://api.kde.org/attica-project.html#setRequirements)
///
/// @param self Attica__Project*
/// @param requirements const char*
void k_attica__project_set_requirements(void* self, const char* requirements);

/// [Upstream resources](https://api.kde.org/attica-project.html#requirements)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Project*
const char* k_attica__project_requirements(void* self);

/// [Upstream resources](https://api.kde.org/attica-project.html#setSpecFile)
///
/// @param self Attica__Project*
/// @param specFile const char*
void k_attica__project_set_spec_file(void* self, const char* specFile);

/// [Upstream resources](https://api.kde.org/attica-project.html#specFile)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Project*
const char* k_attica__project_spec_file(void* self);

/// [Upstream resources](https://api.kde.org/attica-project.html#addExtendedAttribute)
///
/// @param self Attica__Project*
/// @param key const char*
/// @param value const char*
void k_attica__project_add_extended_attribute(void* self, const char* key, const char* value);

/// [Upstream resources](https://api.kde.org/attica-project.html#extendedAttribute)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Project*
/// @param key const char*
const char* k_attica__project_extended_attribute(void* self, const char* key);

/// [Upstream resources](https://api.kde.org/attica-project.html#extendedAttributes)
///
/// @param self Attica__Project*
libqt_map /* of const char* to const char* */ k_attica__project_extended_attributes(void* self);

/// [Upstream resources](https://api.kde.org/attica-project.html#isValid)
///
/// @param self Attica__Project*
bool k_attica__project_is_valid(void* self);

/// Delete this object from C++ memory.
///
/// @param self Attica__Project*
void k_attica__project_delete(void* self);

#endif
