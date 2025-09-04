#pragma once
#ifndef SRC_EXTRAS_KICONTHEMESQT6C_LIBKICONTHEME_H
#define SRC_EXTRAS_KICONTHEMESQT6C_LIBKICONTHEME_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kicontheme.html

/// k_icontheme_new constructs a new KIconTheme object.
///
/// @param name const char*
KIconTheme* k_icontheme_new(const char* name);

/// k_icontheme_new2 constructs a new KIconTheme object.
///
/// @param name const char*
/// @param appName const char*
KIconTheme* k_icontheme_new2(const char* name, const char* appName);

/// k_icontheme_new3 constructs a new KIconTheme object.
///
/// @param name const char*
/// @param appName const char*
/// @param basePathHint const char*
KIconTheme* k_icontheme_new3(const char* name, const char* appName, const char* basePathHint);

/// [Qt documentation](https://api-staging.kde.org/kicontheme.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconTheme*
const char* k_icontheme_name(void* self);

/// [Qt documentation](https://api-staging.kde.org/kicontheme.html#internalName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconTheme*
const char* k_icontheme_internal_name(void* self);

/// [Qt documentation](https://api-staging.kde.org/kicontheme.html#description)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconTheme*
const char* k_icontheme_description(void* self);

/// [Qt documentation](https://api-staging.kde.org/kicontheme.html#example)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconTheme*
const char* k_icontheme_example(void* self);

/// [Qt documentation](https://api-staging.kde.org/kicontheme.html#screenshot)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconTheme*
const char* k_icontheme_screenshot(void* self);

/// [Qt documentation](https://api-staging.kde.org/kicontheme.html#dir)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconTheme*
const char* k_icontheme_dir(void* self);

/// [Qt documentation](https://api-staging.kde.org/kicontheme.html#inherits)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconTheme*
const char** k_icontheme_inherits(void* self);

/// [Qt documentation](https://api-staging.kde.org/kicontheme.html#isValid)
///
/// @param self KIconTheme*
bool k_icontheme_is_valid(void* self);

/// [Qt documentation](https://api-staging.kde.org/kicontheme.html#isHidden)
///
/// @param self KIconTheme*
bool k_icontheme_is_hidden(void* self);

/// [Qt documentation](https://api-staging.kde.org/kicontheme.html#depth)
///
/// @param self KIconTheme*
int32_t k_icontheme_depth(void* self);

/// [Qt documentation](https://api-staging.kde.org/kicontheme.html#defaultSize)
///
/// @param self KIconTheme*
/// @param group enum KIconLoader__Group
int32_t k_icontheme_default_size(void* self, int32_t group);

/// [Qt documentation](https://api-staging.kde.org/kicontheme.html#querySizes)
///
/// @param self KIconTheme*
/// @param group enum KIconLoader__Group
libqt_list /* of int */ k_icontheme_query_sizes(void* self, int32_t group);

/// [Qt documentation](https://api-staging.kde.org/kicontheme.html#queryIcons)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconTheme*
const char** k_icontheme_query_icons(void* self);

/// [Qt documentation](https://api-staging.kde.org/kicontheme.html#queryIcons)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconTheme*
/// @param size int
const char** k_icontheme_query_icons2(void* self, int size);

/// [Qt documentation](https://api-staging.kde.org/kicontheme.html#queryIconsByContext)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconTheme*
/// @param size int
const char** k_icontheme_query_icons_by_context(void* self, int size);

/// [Qt documentation](https://api-staging.kde.org/kicontheme.html#iconPath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconTheme*
/// @param name const char*
/// @param size int
/// @param match enum KIconLoader__MatchType
const char* k_icontheme_icon_path(void* self, const char* name, int size, int32_t match);

/// [Qt documentation](https://api-staging.kde.org/kicontheme.html#iconPath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconTheme*
/// @param name const char*
/// @param size int
/// @param match enum KIconLoader__MatchType
/// @param scale double
const char* k_icontheme_icon_path2(void* self, const char* name, int size, int32_t match, double scale);

/// [Qt documentation](https://api-staging.kde.org/kicontheme.html#iconPathByName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconTheme*
/// @param name const char*
/// @param size int
/// @param match enum KIconLoader__MatchType
const char* k_icontheme_icon_path_by_name(void* self, const char* name, int size, int32_t match);

/// [Qt documentation](https://api-staging.kde.org/kicontheme.html#iconPathByName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconTheme*
/// @param name const char*
/// @param size int
/// @param match enum KIconLoader__MatchType
/// @param scale double
const char* k_icontheme_icon_path_by_name2(void* self, const char* name, int size, int32_t match, double scale);

/// [Qt documentation](https://api-staging.kde.org/kicontheme.html#hasContext)
///
/// @param self KIconTheme*
/// @param context enum KIconLoader__Context
bool k_icontheme_has_context(void* self, int32_t context);

/// [Qt documentation](https://api-staging.kde.org/kicontheme.html#followsColorScheme)
///
/// @param self KIconTheme*
bool k_icontheme_follows_color_scheme(void* self);

/// [Qt documentation](https://api-staging.kde.org/kicontheme.html#list)
///
/// Caller is responsible for freeing the returned memory
///
const char** k_icontheme_list();

/// [Qt documentation](https://api-staging.kde.org/kicontheme.html#current)
///
/// Caller is responsible for freeing the returned memory
///
const char* k_icontheme_current();

/// [Qt documentation](https://api-staging.kde.org/kicontheme.html#forceThemeForTests)
///
/// @param themeName const char*
void k_icontheme_force_theme_for_tests(const char* themeName);

/// [Qt documentation](https://api-staging.kde.org/kicontheme.html#reconfigure)
///
void k_icontheme_reconfigure();

/// [Qt documentation](https://api-staging.kde.org/kicontheme.html#defaultThemeName)
///
/// Caller is responsible for freeing the returned memory
///
const char* k_icontheme_default_theme_name();

/// [Qt documentation](https://api-staging.kde.org/kicontheme.html#initTheme)
///
void k_icontheme_init_theme();

/// [Qt documentation](https://api-staging.kde.org/kicontheme.html#queryIcons)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconTheme*
/// @param size int
/// @param context enum KIconLoader__Context
const char** k_icontheme_query_icons22(void* self, int size, int32_t context);

/// [Qt documentation](https://api-staging.kde.org/kicontheme.html#queryIconsByContext)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconTheme*
/// @param size int
/// @param context enum KIconLoader__Context
const char** k_icontheme_query_icons_by_context2(void* self, int size, int32_t context);

/// [Qt documentation](https://api-staging.kde.org/kicontheme.html#dtor.KIconTheme)
///
/// Delete this object from C++ memory.
///
/// @param self KIconTheme*
void k_icontheme_delete(void* self);

#endif
