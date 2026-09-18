#pragma once
#ifndef EXTRAS_KIRIGAMI_LIBSTYLESELECTOR_H
#define EXTRAS_KIRIGAMI_LIBSTYLESELECTOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kirigami-platform-styleselector.html)

/// k_kirigami__platform__styleselector_new constructs a new Kirigami::Platform::StyleSelector object.
///
/// @param other Kirigami__Platform__StyleSelector*
///
Kirigami__Platform__StyleSelector* k_kirigami__platform__styleselector_new(void* other);

/// [Upstream resources](https://api.kde.org/kirigami-platform-styleselector.html)

/// k_kirigami__platform__styleselector_new2 constructs a new Kirigami::Platform::StyleSelector object and invalidates the source Kirigami::Platform::StyleSelector object.
///
/// @param other Kirigami__Platform__StyleSelector*
///
Kirigami__Platform__StyleSelector* k_kirigami__platform__styleselector_new2(void* other);

/// k_kirigami__platform__styleselector_copy_assign shallow copies `other` into `self`.
///
/// @param self Kirigami__Platform__StyleSelector*
/// @param other Kirigami__Platform__StyleSelector*
///
void k_kirigami__platform__styleselector_copy_assign(void* self, void* other);

/// k_kirigami__platform__styleselector_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self Kirigami__Platform__StyleSelector*
/// @param other Kirigami__Platform__StyleSelector*
///
void k_kirigami__platform__styleselector_move_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/kirigami-platform-styleselector.html#style)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* k_kirigami__platform__styleselector_style();

/// [Upstream resources](https://api.kde.org/kirigami-platform-styleselector.html#styleChain)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** k_kirigami__platform__styleselector_style_chain();

/// [Upstream resources](https://api.kde.org/kirigami-platform-styleselector.html#componentUrl)
///
/// @param fileName const char*
///
QUrl* k_kirigami__platform__styleselector_component_url(const char* fileName);

/// [Upstream resources](https://api.kde.org/kirigami-platform-styleselector.html#setBaseUrl)
///
/// @param baseUrl QUrl*
///
void k_kirigami__platform__styleselector_set_base_url(void* baseUrl);

/// [Upstream resources](https://api.kde.org/kirigami-platform-styleselector.html#resolveFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param path const char*
///
const char* k_kirigami__platform__styleselector_resolve_file_path(const char* path);

/// [Upstream resources](https://api.kde.org/kirigami-platform-styleselector.html#resolveFileUrl)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param path const char*
///
const char* k_kirigami__platform__styleselector_resolve_file_url(const char* path);

/// Delete this object from C++ memory.
///
/// @param self Kirigami__Platform__StyleSelector*
///
void k_kirigami__platform__styleselector_delete(void* self);

#endif
