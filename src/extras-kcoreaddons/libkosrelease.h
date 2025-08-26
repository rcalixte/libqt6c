#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSQT6C_LIBKOSRELEASE_H
#define SRC_EXTRAS_KCOREADDONSQT6C_LIBKOSRELEASE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kosrelease.html

/// k_osrelease_new constructs a new KOSRelease object.
///
KOSRelease* k_osrelease_new();

/// k_osrelease_new2 constructs a new KOSRelease object.
///
/// @param filePath const char*
KOSRelease* k_osrelease_new2(const char* filePath);

/// [Qt documentation](https://api-staging.kde.org/kosrelease.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KOSRelease*
const char* k_osrelease_name(void* self);

/// [Qt documentation](https://api-staging.kde.org/kosrelease.html#version)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KOSRelease*
const char* k_osrelease_version(void* self);

/// [Qt documentation](https://api-staging.kde.org/kosrelease.html#id)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KOSRelease*
const char* k_osrelease_id(void* self);

/// [Qt documentation](https://api-staging.kde.org/kosrelease.html#idLike)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KOSRelease*
const char** k_osrelease_id_like(void* self);

/// [Qt documentation](https://api-staging.kde.org/kosrelease.html#versionCodename)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KOSRelease*
const char* k_osrelease_version_codename(void* self);

/// [Qt documentation](https://api-staging.kde.org/kosrelease.html#versionId)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KOSRelease*
const char* k_osrelease_version_id(void* self);

/// [Qt documentation](https://api-staging.kde.org/kosrelease.html#prettyName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KOSRelease*
const char* k_osrelease_pretty_name(void* self);

/// [Qt documentation](https://api-staging.kde.org/kosrelease.html#ansiColor)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KOSRelease*
const char* k_osrelease_ansi_color(void* self);

/// [Qt documentation](https://api-staging.kde.org/kosrelease.html#cpeName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KOSRelease*
const char* k_osrelease_cpe_name(void* self);

/// [Qt documentation](https://api-staging.kde.org/kosrelease.html#homeUrl)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KOSRelease*
const char* k_osrelease_home_url(void* self);

/// [Qt documentation](https://api-staging.kde.org/kosrelease.html#documentationUrl)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KOSRelease*
const char* k_osrelease_documentation_url(void* self);

/// [Qt documentation](https://api-staging.kde.org/kosrelease.html#supportUrl)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KOSRelease*
const char* k_osrelease_support_url(void* self);

/// [Qt documentation](https://api-staging.kde.org/kosrelease.html#bugReportUrl)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KOSRelease*
const char* k_osrelease_bug_report_url(void* self);

/// [Qt documentation](https://api-staging.kde.org/kosrelease.html#privacyPolicyUrl)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KOSRelease*
const char* k_osrelease_privacy_policy_url(void* self);

/// [Qt documentation](https://api-staging.kde.org/kosrelease.html#buildId)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KOSRelease*
const char* k_osrelease_build_id(void* self);

/// [Qt documentation](https://api-staging.kde.org/kosrelease.html#variant)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KOSRelease*
const char* k_osrelease_variant(void* self);

/// [Qt documentation](https://api-staging.kde.org/kosrelease.html#variantId)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KOSRelease*
const char* k_osrelease_variant_id(void* self);

/// [Qt documentation](https://api-staging.kde.org/kosrelease.html#logo)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KOSRelease*
const char* k_osrelease_logo(void* self);

/// [Qt documentation](https://api-staging.kde.org/kosrelease.html#extraKeys)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KOSRelease*
const char** k_osrelease_extra_keys(void* self);

/// [Qt documentation](https://api-staging.kde.org/kosrelease.html#extraValue)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KOSRelease*
/// @param key const char*
const char* k_osrelease_extra_value(void* self, const char* key);

/// [Qt documentation](https://api-staging.kde.org/kosrelease.html#dtor.KOSRelease)
///
/// Delete this object from C++ memory.
///
/// @param self KOSRelease*
void k_osrelease_delete(void* self);

#endif
