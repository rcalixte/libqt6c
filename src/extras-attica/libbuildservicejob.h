#pragma once
#ifndef EXTRAS_ATTICA_LIBBUILDSERVICEJOB_H
#define EXTRAS_ATTICA_LIBBUILDSERVICEJOB_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/attica-buildservicejob.html)

/// k_attica__buildservicejob_new constructs a new Attica::BuildServiceJob object.
///
Attica__BuildServiceJob* k_attica__buildservicejob_new();

/// [Upstream resources](https://api.kde.org/attica-buildservicejob.html)

/// k_attica__buildservicejob_new2 constructs a new Attica::BuildServiceJob object.
///
/// @param other Attica__BuildServiceJob*
///
Attica__BuildServiceJob* k_attica__buildservicejob_new2(const void* other);

/// [Upstream resources](https://api.kde.org/attica-buildservicejob.html#operator-eq)
///
/// @param self Attica__BuildServiceJob*
/// @param other Attica__BuildServiceJob*
///
void k_attica__buildservicejob_operator_assign(void* self, const void* other);

/// [Upstream resources](https://api.kde.org/attica-buildservicejob.html#setId)
///
/// @param self Attica__BuildServiceJob*
/// @param id const char*
///
void k_attica__buildservicejob_set_id(void* self, const char* id);

/// [Upstream resources](https://api.kde.org/attica-buildservicejob.html#id)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__BuildServiceJob*
///
const char* k_attica__buildservicejob_id(const void* self);

/// [Upstream resources](https://api.kde.org/attica-buildservicejob.html#setName)
///
/// @param self Attica__BuildServiceJob*
/// @param name const char*
///
void k_attica__buildservicejob_set_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/attica-buildservicejob.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__BuildServiceJob*
///
const char* k_attica__buildservicejob_name(const void* self);

/// [Upstream resources](https://api.kde.org/attica-buildservicejob.html#setUrl)
///
/// @param self Attica__BuildServiceJob*
/// @param url const char*
///
void k_attica__buildservicejob_set_url(void* self, const char* url);

/// [Upstream resources](https://api.kde.org/attica-buildservicejob.html#url)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__BuildServiceJob*
///
const char* k_attica__buildservicejob_url(const void* self);

/// [Upstream resources](https://api.kde.org/attica-buildservicejob.html#setProjectId)
///
/// @param self Attica__BuildServiceJob*
/// @param projectId const char*
///
void k_attica__buildservicejob_set_project_id(void* self, const char* projectId);

/// [Upstream resources](https://api.kde.org/attica-buildservicejob.html#projectId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__BuildServiceJob*
///
const char* k_attica__buildservicejob_project_id(const void* self);

/// [Upstream resources](https://api.kde.org/attica-buildservicejob.html#setBuildServiceId)
///
/// @param self Attica__BuildServiceJob*
/// @param buildServiceId const char*
///
void k_attica__buildservicejob_set_build_service_id(void* self, const char* buildServiceId);

/// [Upstream resources](https://api.kde.org/attica-buildservicejob.html#buildServiceId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__BuildServiceJob*
///
const char* k_attica__buildservicejob_build_service_id(const void* self);

/// [Upstream resources](https://api.kde.org/attica-buildservicejob.html#setMessage)
///
/// @param self Attica__BuildServiceJob*
/// @param message const char*
///
void k_attica__buildservicejob_set_message(void* self, const char* message);

/// [Upstream resources](https://api.kde.org/attica-buildservicejob.html#message)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__BuildServiceJob*
///
const char* k_attica__buildservicejob_message(const void* self);

/// [Upstream resources](https://api.kde.org/attica-buildservicejob.html#setTarget)
///
/// @param self Attica__BuildServiceJob*
/// @param target const char*
///
void k_attica__buildservicejob_set_target(void* self, const char* target);

/// [Upstream resources](https://api.kde.org/attica-buildservicejob.html#target)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__BuildServiceJob*
///
const char* k_attica__buildservicejob_target(const void* self);

/// [Upstream resources](https://api.kde.org/attica-buildservicejob.html#setProgress)
///
/// @param self Attica__BuildServiceJob*
/// @param progress const double
///
void k_attica__buildservicejob_set_progress(void* self, const double progress);

/// [Upstream resources](https://api.kde.org/attica-buildservicejob.html#progress)
///
/// @param self const Attica__BuildServiceJob*
///
double k_attica__buildservicejob_progress(const void* self);

/// [Upstream resources](https://api.kde.org/attica-buildservicejob.html#setStatus)
///
/// @param self Attica__BuildServiceJob*
/// @param status int
///
void k_attica__buildservicejob_set_status(void* self, int status);

/// [Upstream resources](https://api.kde.org/attica-buildservicejob.html#isRunning)
///
/// @param self const Attica__BuildServiceJob*
///
bool k_attica__buildservicejob_is_running(const void* self);

/// [Upstream resources](https://api.kde.org/attica-buildservicejob.html#isCompleted)
///
/// @param self const Attica__BuildServiceJob*
///
bool k_attica__buildservicejob_is_completed(const void* self);

/// [Upstream resources](https://api.kde.org/attica-buildservicejob.html#isFailed)
///
/// @param self const Attica__BuildServiceJob*
///
bool k_attica__buildservicejob_is_failed(const void* self);

/// [Upstream resources](https://api.kde.org/attica-buildservicejob.html#isValid)
///
/// @param self const Attica__BuildServiceJob*
///
bool k_attica__buildservicejob_is_valid(const void* self);

/// Delete this object from C++ memory.
///
/// @param self Attica__BuildServiceJob*
///
void k_attica__buildservicejob_delete(void* self);

#endif
