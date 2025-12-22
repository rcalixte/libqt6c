#pragma once
#ifndef SRC_EXTRAS_KCOREADDONS_QT6C_LIBKOSRELEASE_H
#define SRC_EXTRAS_KCOREADDONS_QT6C_LIBKOSRELEASE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kosrelease.html)

/// k_osrelease_new constructs a new KOSRelease object.
///
KOSRelease* k_osrelease_new();

/// [Upstream resources](https://api.kde.org/kosrelease.html)

/// k_osrelease_new2 constructs a new KOSRelease object.
///
/// @param filePath const char*
///
KOSRelease* k_osrelease_new2(const char* filePath);

/// [Upstream resources](https://api.kde.org/kosrelease.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KOSRelease*
///
const char* k_osrelease_name(void* self);

/// [Upstream resources](https://api.kde.org/kosrelease.html#version)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KOSRelease*
///
const char* k_osrelease_version(void* self);

/// [Upstream resources](https://api.kde.org/kosrelease.html#id)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KOSRelease*
///
const char* k_osrelease_id(void* self);

/// [Upstream resources](https://api.kde.org/kosrelease.html#idLike)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KOSRelease*
///
const char** k_osrelease_id_like(void* self);

/// [Upstream resources](https://api.kde.org/kosrelease.html#versionCodename)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KOSRelease*
///
const char* k_osrelease_version_codename(void* self);

/// [Upstream resources](https://api.kde.org/kosrelease.html#versionId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KOSRelease*
///
const char* k_osrelease_version_id(void* self);

/// [Upstream resources](https://api.kde.org/kosrelease.html#prettyName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KOSRelease*
///
const char* k_osrelease_pretty_name(void* self);

/// [Upstream resources](https://api.kde.org/kosrelease.html#ansiColor)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KOSRelease*
///
const char* k_osrelease_ansi_color(void* self);

/// [Upstream resources](https://api.kde.org/kosrelease.html#cpeName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KOSRelease*
///
const char* k_osrelease_cpe_name(void* self);

/// [Upstream resources](https://api.kde.org/kosrelease.html#homeUrl)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KOSRelease*
///
const char* k_osrelease_home_url(void* self);

/// [Upstream resources](https://api.kde.org/kosrelease.html#documentationUrl)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KOSRelease*
///
const char* k_osrelease_documentation_url(void* self);

/// [Upstream resources](https://api.kde.org/kosrelease.html#supportUrl)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KOSRelease*
///
const char* k_osrelease_support_url(void* self);

/// [Upstream resources](https://api.kde.org/kosrelease.html#bugReportUrl)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KOSRelease*
///
const char* k_osrelease_bug_report_url(void* self);

/// [Upstream resources](https://api.kde.org/kosrelease.html#privacyPolicyUrl)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KOSRelease*
///
const char* k_osrelease_privacy_policy_url(void* self);

/// [Upstream resources](https://api.kde.org/kosrelease.html#buildId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KOSRelease*
///
const char* k_osrelease_build_id(void* self);

/// [Upstream resources](https://api.kde.org/kosrelease.html#variant)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KOSRelease*
///
const char* k_osrelease_variant(void* self);

/// [Upstream resources](https://api.kde.org/kosrelease.html#variantId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KOSRelease*
///
const char* k_osrelease_variant_id(void* self);

/// [Upstream resources](https://api.kde.org/kosrelease.html#logo)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KOSRelease*
///
const char* k_osrelease_logo(void* self);

/// [Upstream resources](https://api.kde.org/kosrelease.html#extraKeys)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KOSRelease*
///
const char** k_osrelease_extra_keys(void* self);

/// [Upstream resources](https://api.kde.org/kosrelease.html#extraValue)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KOSRelease*
/// @param key const char*
///
const char* k_osrelease_extra_value(void* self, const char* key);

/// [Upstream resources](https://api.kde.org/kosrelease.html#dtor.KOSRelease)
///
/// Delete this object from C++ memory.
///
/// @param self KOSRelease*
///
void k_osrelease_delete(void* self);

#endif
