#pragma once
#ifndef SRC_EXTRAS_KICONTHEMES_QT6C_LIBKICONTHEME_H
#define SRC_EXTRAS_KICONTHEMES_QT6C_LIBKICONTHEME_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
/// @param self KIconTheme*
///
const char* k_icontheme_name(void* self);

/// [Upstream resources](https://api.kde.org/kicontheme.html#internalName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIconTheme*
///
const char* k_icontheme_internal_name(void* self);

/// [Upstream resources](https://api.kde.org/kicontheme.html#description)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIconTheme*
///
const char* k_icontheme_description(void* self);

/// [Upstream resources](https://api.kde.org/kicontheme.html#example)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIconTheme*
///
const char* k_icontheme_example(void* self);

/// [Upstream resources](https://api.kde.org/kicontheme.html#screenshot)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIconTheme*
///
const char* k_icontheme_screenshot(void* self);

/// [Upstream resources](https://api.kde.org/kicontheme.html#dir)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIconTheme*
///
const char* k_icontheme_dir(void* self);

/// [Upstream resources](https://api.kde.org/kicontheme.html#inherits)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KIconTheme*
///
const char** k_icontheme_inherits(void* self);

/// [Upstream resources](https://api.kde.org/kicontheme.html#isValid)
///
/// @param self KIconTheme*
///
bool k_icontheme_is_valid(void* self);

/// [Upstream resources](https://api.kde.org/kicontheme.html#isHidden)
///
/// @param self KIconTheme*
///
bool k_icontheme_is_hidden(void* self);

/// [Upstream resources](https://api.kde.org/kicontheme.html#depth)
///
/// @param self KIconTheme*
///
int32_t k_icontheme_depth(void* self);

/// [Upstream resources](https://api.kde.org/kicontheme.html#defaultSize)
///
/// @param self KIconTheme*
/// @param group enum KIconLoader__Group
///
int32_t k_icontheme_default_size(void* self, int32_t group);

/// [Upstream resources](https://api.kde.org/kicontheme.html#querySizes)
///
/// @param self KIconTheme*
/// @param group enum KIconLoader__Group
///
libqt_list /* of int */ k_icontheme_query_sizes(void* self, int32_t group);

/// [Upstream resources](https://api.kde.org/kicontheme.html#queryIcons)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KIconTheme*
///
const char** k_icontheme_query_icons(void* self);

/// [Upstream resources](https://api.kde.org/kicontheme.html#queryIcons)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KIconTheme*
/// @param size int
///
const char** k_icontheme_query_icons2(void* self, int size);

/// [Upstream resources](https://api.kde.org/kicontheme.html#queryIconsByContext)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KIconTheme*
/// @param size int
///
const char** k_icontheme_query_icons_by_context(void* self, int size);

/// [Upstream resources](https://api.kde.org/kicontheme.html#iconPath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIconTheme*
/// @param name const char*
/// @param size int
/// @param match enum KIconLoader__MatchType
///
const char* k_icontheme_icon_path(void* self, const char* name, int size, int32_t match);

/// [Upstream resources](https://api.kde.org/kicontheme.html#iconPath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIconTheme*
/// @param name const char*
/// @param size int
/// @param match enum KIconLoader__MatchType
/// @param scale double
///
const char* k_icontheme_icon_path2(void* self, const char* name, int size, int32_t match, double scale);

/// [Upstream resources](https://api.kde.org/kicontheme.html#iconPathByName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIconTheme*
/// @param name const char*
/// @param size int
/// @param match enum KIconLoader__MatchType
///
const char* k_icontheme_icon_path_by_name(void* self, const char* name, int size, int32_t match);

/// [Upstream resources](https://api.kde.org/kicontheme.html#iconPathByName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIconTheme*
/// @param name const char*
/// @param size int
/// @param match enum KIconLoader__MatchType
/// @param scale double
///
const char* k_icontheme_icon_path_by_name2(void* self, const char* name, int size, int32_t match, double scale);

/// [Upstream resources](https://api.kde.org/kicontheme.html#hasContext)
///
/// @param self KIconTheme*
/// @param context enum KIconLoader__Context
///
bool k_icontheme_has_context(void* self, int32_t context);

/// [Upstream resources](https://api.kde.org/kicontheme.html#followsColorScheme)
///
/// @param self KIconTheme*
///
bool k_icontheme_follows_color_scheme(void* self);

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
/// @param self KIconTheme*
/// @param size int
/// @param context enum KIconLoader__Context
///
const char** k_icontheme_query_icons22(void* self, int size, int32_t context);

/// [Upstream resources](https://api.kde.org/kicontheme.html#queryIconsByContext)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KIconTheme*
/// @param size int
/// @param context enum KIconLoader__Context
///
const char** k_icontheme_query_icons_by_context2(void* self, int size, int32_t context);

/// [Upstream resources](https://api.kde.org/kicontheme.html#dtor.KIconTheme)
///
/// Delete this object from C++ memory.
///
/// @param self KIconTheme*
///
void k_icontheme_delete(void* self);

#endif
