#pragma once
#ifndef SRC_EXTRAS_KCONFIG_QT6C_LIBKEMAILSETTINGS_H
#define SRC_EXTRAS_KCONFIG_QT6C_LIBKEMAILSETTINGS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kemailsettings.html)

/// k_emailsettings_new constructs a new KEMailSettings object.
///
KEMailSettings* k_emailsettings_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param sourceText const char*
///
const char* k_emailsettings_tr(const char* sourceText);

/// [Upstream resources](https://api.kde.org/kemailsettings.html#profiles)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KEMailSettings*
///
const char** k_emailsettings_profiles(void* self);

/// [Upstream resources](https://api.kde.org/kemailsettings.html#setProfile)
///
/// @param self KEMailSettings*
/// @param s const char*
///
void k_emailsettings_set_profile(void* self, const char* s);

/// [Upstream resources](https://api.kde.org/kemailsettings.html#defaultProfileName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KEMailSettings*
///
const char* k_emailsettings_default_profile_name(void* self);

/// [Upstream resources](https://api.kde.org/kemailsettings.html#setDefault)
///
/// @param self KEMailSettings*
/// @param def const char*
///
void k_emailsettings_set_default(void* self, const char* def);

/// [Upstream resources](https://api.kde.org/kemailsettings.html#getSetting)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KEMailSettings*
/// @param s enum KEMailSettings__Setting
///
const char* k_emailsettings_get_setting(void* self, int32_t s);

/// [Upstream resources](https://api.kde.org/kemailsettings.html#setSetting)
///
/// @param self KEMailSettings*
/// @param s enum KEMailSettings__Setting
/// @param v const char*
///
void k_emailsettings_set_setting(void* self, int32_t s, const char* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param sourceText const char*
/// @param disambiguation const char*
///
const char* k_emailsettings_tr2(const char* sourceText, const char* disambiguation);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param sourceText const char*
/// @param disambiguation const char*
/// @param n int
///
const char* k_emailsettings_tr3(const char* sourceText, const char* disambiguation, int n);

/// [Upstream resources](https://api.kde.org/kemailsettings.html#dtor.KEMailSettings)
///
/// Delete this object from C++ memory.
///
/// @param self KEMailSettings*
///
void k_emailsettings_delete(void* self);

/// [Upstream resources](https://api.kde.org/kemailsettings.html#public-types)

typedef enum {
    KEMAILSETTINGS_SETTING_CLIENTPROGRAM = 0,
    KEMAILSETTINGS_SETTING_CLIENTTERMINAL = 1,
    KEMAILSETTINGS_SETTING_REALNAME = 2,
    KEMAILSETTINGS_SETTING_EMAILADDRESS = 3,
    KEMAILSETTINGS_SETTING_REPLYTOADDRESS = 4,
    KEMAILSETTINGS_SETTING_ORGANIZATION = 5
} KEMailSettings__Setting;

#endif
