#pragma once
#ifndef EXTRAS_KICONTHEMES_LIBKICONTHEME_H
#define EXTRAS_KICONTHEMES_LIBKICONTHEME_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kicontheme.html)

/// k_icontheme_new constructs a new KIconTheme object.
///
/// @param name const char*
///
KIconTheme* k_icontheme_new(const char* name);

/// [Upstream resources](https://api.kde.org/kicontheme.html)

/// k_icontheme_new2 constructs a new KIconTheme object.
///
/// @param name const char*
/// @param appName const char*
///
KIconTheme* k_icontheme_new2(const char* name, const char* appName);

/// [Upstream resources](https://api.kde.org/kicontheme.html)

/// k_icontheme_new3 constructs a new KIconTheme object.
///
/// @param name const char*
/// @param appName const char*
/// @param basePathHint const char*
///
KIconTheme* k_icontheme_new3(const char* name, const char* appName, const char* basePathHint);

/// [Upstream resources](https://api.kde.org/kicontheme.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KIconTheme*
///
const char* k_icontheme_name(const void* self);

/// [Upstream resources](https://api.kde.org/kicontheme.html#internalName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KIconTheme*
///
const char* k_icontheme_internal_name(const void* self);

/// [Upstream resources](https://api.kde.org/kicontheme.html#description)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KIconTheme*
///
const char* k_icontheme_description(const void* self);

/// [Upstream resources](https://api.kde.org/kicontheme.html#example)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KIconTheme*
///
const char* k_icontheme_example(const void* self);

/// [Upstream resources](https://api.kde.org/kicontheme.html#screenshot)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KIconTheme*
///
const char* k_icontheme_screenshot(const void* self);

/// [Upstream resources](https://api.kde.org/kicontheme.html#dir)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KIconTheme*
///
const char* k_icontheme_dir(const void* self);

/// [Upstream resources](https://api.kde.org/kicontheme.html#inherits)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KIconTheme*
///
const char** k_icontheme_inherits(const void* self);

/// [Upstream resources](https://api.kde.org/kicontheme.html#isValid)
///
/// @param self const KIconTheme*
///
bool k_icontheme_is_valid(const void* self);

/// [Upstream resources](https://api.kde.org/kicontheme.html#isHidden)
///
/// @param self const KIconTheme*
///
bool k_icontheme_is_hidden(const void* self);

/// [Upstream resources](https://api.kde.org/kicontheme.html#depth)
///
/// @param self const KIconTheme*
///
int32_t k_icontheme_depth(const void* self);

/// [Upstream resources](https://api.kde.org/kicontheme.html#defaultSize)
///
/// @param self const KIconTheme*
/// @param group enum KIconLoader__Group
///
int32_t k_icontheme_default_size(const void* self, int32_t group);

/// [Upstream resources](https://api.kde.org/kicontheme.html#querySizes)
///
/// @param self const KIconTheme*
/// @param group enum KIconLoader__Group
///
/// @return libqt_list of int
///
libqt_list k_icontheme_query_sizes(const void* self, int32_t group);

/// [Upstream resources](https://api.kde.org/kicontheme.html#queryIcons)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KIconTheme*
///
const char** k_icontheme_query_icons(const void* self);

/// [Upstream resources](https://api.kde.org/kicontheme.html#queryIcons)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KIconTheme*
/// @param size int
///
const char** k_icontheme_query_icons2(const void* self, int size);

/// [Upstream resources](https://api.kde.org/kicontheme.html#queryIconsByContext)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KIconTheme*
/// @param size int
///
const char** k_icontheme_query_icons_by_context(const void* self, int size);

/// [Upstream resources](https://api.kde.org/kicontheme.html#iconPath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KIconTheme*
/// @param name const char*
/// @param size int
/// @param match enum KIconLoader__MatchType
///
const char* k_icontheme_icon_path(const void* self, const char* name, int size, int32_t match);

/// [Upstream resources](https://api.kde.org/kicontheme.html#iconPath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KIconTheme*
/// @param name const char*
/// @param size int
/// @param match enum KIconLoader__MatchType
/// @param scale double
///
const char* k_icontheme_icon_path2(const void* self, const char* name, int size, int32_t match, double scale);

/// [Upstream resources](https://api.kde.org/kicontheme.html#iconPathByName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KIconTheme*
/// @param name const char*
/// @param size int
/// @param match enum KIconLoader__MatchType
///
const char* k_icontheme_icon_path_by_name(const void* self, const char* name, int size, int32_t match);

/// [Upstream resources](https://api.kde.org/kicontheme.html#iconPathByName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KIconTheme*
/// @param name const char*
/// @param size int
/// @param match enum KIconLoader__MatchType
/// @param scale double
///
const char* k_icontheme_icon_path_by_name2(const void* self, const char* name, int size, int32_t match, double scale);

/// [Upstream resources](https://api.kde.org/kicontheme.html#hasContext)
///
/// @param self const KIconTheme*
/// @param context enum KIconLoader__Context
///
bool k_icontheme_has_context(const void* self, int32_t context);

/// [Upstream resources](https://api.kde.org/kicontheme.html#followsColorScheme)
///
/// @param self const KIconTheme*
///
bool k_icontheme_follows_color_scheme(const void* self);

/// [Upstream resources](https://api.kde.org/kicontheme.html#list)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** k_icontheme_list();

/// [Upstream resources](https://api.kde.org/kicontheme.html#current)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* k_icontheme_current();

/// [Upstream resources](https://api.kde.org/kicontheme.html#forceThemeForTests)
///
/// @param themeName const char*
///
void k_icontheme_force_theme_for_tests(const char* themeName);

/// [Upstream resources](https://api.kde.org/kicontheme.html#reconfigure)
///
void k_icontheme_reconfigure();

/// [Upstream resources](https://api.kde.org/kicontheme.html#defaultThemeName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* k_icontheme_default_theme_name();

/// [Upstream resources](https://api.kde.org/kicontheme.html#initTheme)
///
void k_icontheme_init_theme();

/// [Upstream resources](https://api.kde.org/kicontheme.html#queryIcons)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KIconTheme*
/// @param size int
/// @param context enum KIconLoader__Context
///
const char** k_icontheme_query_icons22(const void* self, int size, int32_t context);

/// [Upstream resources](https://api.kde.org/kicontheme.html#queryIconsByContext)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KIconTheme*
/// @param size int
/// @param context enum KIconLoader__Context
///
const char** k_icontheme_query_icons_by_context2(const void* self, int size, int32_t context);

/// [Upstream resources](https://api.kde.org/kicontheme.html#dtor.KIconTheme)
///
/// Delete this object from C++ memory.
///
/// @param self KIconTheme*
///
void k_icontheme_delete(void* self);

#endif
