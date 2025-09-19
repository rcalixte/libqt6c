#pragma once
#ifndef SRC_EXTRAS_ATTICAQT6C_LIBBUILDSERVICEJOB_H
#define SRC_EXTRAS_ATTICAQT6C_LIBBUILDSERVICEJOB_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/attica-buildservicejob.html

/// k_attica__buildservicejob_new constructs a new Attica::BuildServiceJob object.
///
Attica__BuildServiceJob* k_attica__buildservicejob_new();

/// k_attica__buildservicejob_new2 constructs a new Attica::BuildServiceJob object.
///
/// @param other Attica__BuildServiceJob*
Attica__BuildServiceJob* k_attica__buildservicejob_new2(void* other);

/// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#operator-eq)
///
/// @param self Attica__BuildServiceJob*
/// @param other Attica__BuildServiceJob*
void k_attica__buildservicejob_operator_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#setId)
///
/// @param self Attica__BuildServiceJob*
/// @param id const char*
void k_attica__buildservicejob_set_id(void* self, const char* id);

/// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#id)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__BuildServiceJob*
const char* k_attica__buildservicejob_id(void* self);

/// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#setName)
///
/// @param self Attica__BuildServiceJob*
/// @param name const char*
void k_attica__buildservicejob_set_name(void* self, const char* name);

/// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__BuildServiceJob*
const char* k_attica__buildservicejob_name(void* self);

/// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#setUrl)
///
/// @param self Attica__BuildServiceJob*
/// @param url const char*
void k_attica__buildservicejob_set_url(void* self, const char* url);

/// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#url)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__BuildServiceJob*
const char* k_attica__buildservicejob_url(void* self);

/// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#setProjectId)
///
/// @param self Attica__BuildServiceJob*
/// @param projectId const char*
void k_attica__buildservicejob_set_project_id(void* self, const char* projectId);

/// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#projectId)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__BuildServiceJob*
const char* k_attica__buildservicejob_project_id(void* self);

/// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#setBuildServiceId)
///
/// @param self Attica__BuildServiceJob*
/// @param buildServiceId const char*
void k_attica__buildservicejob_set_build_service_id(void* self, const char* buildServiceId);

/// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#buildServiceId)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__BuildServiceJob*
const char* k_attica__buildservicejob_build_service_id(void* self);

/// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#setMessage)
///
/// @param self Attica__BuildServiceJob*
/// @param message const char*
void k_attica__buildservicejob_set_message(void* self, const char* message);

/// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#message)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__BuildServiceJob*
const char* k_attica__buildservicejob_message(void* self);

/// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#setTarget)
///
/// @param self Attica__BuildServiceJob*
/// @param target const char*
void k_attica__buildservicejob_set_target(void* self, const char* target);

/// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#target)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__BuildServiceJob*
const char* k_attica__buildservicejob_target(void* self);

/// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#setProgress)
///
/// @param self Attica__BuildServiceJob*
/// @param progress const double
void k_attica__buildservicejob_set_progress(void* self, const double progress);

/// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#progress)
///
/// @param self Attica__BuildServiceJob*
double k_attica__buildservicejob_progress(void* self);

/// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#setStatus)
///
/// @param self Attica__BuildServiceJob*
/// @param status int
void k_attica__buildservicejob_set_status(void* self, int status);

/// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#isRunning)
///
/// @param self Attica__BuildServiceJob*
bool k_attica__buildservicejob_is_running(void* self);

/// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#isCompleted)
///
/// @param self Attica__BuildServiceJob*
bool k_attica__buildservicejob_is_completed(void* self);

/// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#isFailed)
///
/// @param self Attica__BuildServiceJob*
bool k_attica__buildservicejob_is_failed(void* self);

/// [Qt documentation](https://api.kde.org/attica-buildservicejob.html#isValid)
///
/// @param self Attica__BuildServiceJob*
bool k_attica__buildservicejob_is_valid(void* self);

/// Delete this object from C++ memory.
///
/// @param self Attica__BuildServiceJob*
void k_attica__buildservicejob_delete(void* self);

#endif
