#pragma once
#ifndef EXTRAS_ATTICA_LIBPLATFORMDEPENDENT_H
#define EXTRAS_ATTICA_LIBPLATFORMDEPENDENT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/attica-platformdependent.html)

/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#getDefaultProviderFiles)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const Attica__PlatformDependent*
///
/// @return libqt_list of QUrl*
///
libqt_list k_attica__platformdependent_get_default_provider_files(const void* self);

/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#addDefaultProviderFile)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self Attica__PlatformDependent*
/// @param url QUrl*
///
void k_attica__platformdependent_add_default_provider_file(void* self, const void* url);

/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#removeDefaultProviderFile)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self Attica__PlatformDependent*
/// @param url QUrl*
///
void k_attica__platformdependent_remove_default_provider_file(void* self, const void* url);

/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#enableProvider)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const Attica__PlatformDependent*
/// @param baseUrl QUrl*
/// @param enabled bool
///
void k_attica__platformdependent_enable_provider(const void* self, const void* baseUrl, bool enabled);

/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#isEnabled)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const Attica__PlatformDependent*
/// @param baseUrl QUrl*
///
bool k_attica__platformdependent_is_enabled(const void* self, const void* baseUrl);

/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#hasCredentials)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const Attica__PlatformDependent*
/// @param baseUrl QUrl*
///
bool k_attica__platformdependent_has_credentials(const void* self, const void* baseUrl);

/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#loadCredentials)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self Attica__PlatformDependent*
/// @param baseUrl QUrl*
/// @param user const char*
/// @param password const char*
///
bool k_attica__platformdependent_load_credentials(void* self, const void* baseUrl, const char* user, const char* password);

/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#askForCredentials)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self Attica__PlatformDependent*
/// @param baseUrl QUrl*
/// @param user const char*
/// @param password const char*
///
bool k_attica__platformdependent_ask_for_credentials(void* self, const void* baseUrl, const char* user, const char* password);

/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#saveCredentials)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self Attica__PlatformDependent*
/// @param baseUrl QUrl*
/// @param user const char*
/// @param password const char*
///
bool k_attica__platformdependent_save_credentials(void* self, const void* baseUrl, const char* user, const char* password);

/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#get)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self Attica__PlatformDependent*
/// @param request QNetworkRequest*
///
QNetworkReply* k_attica__platformdependent_get(void* self, const void* request);

/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#post)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self Attica__PlatformDependent*
/// @param request QNetworkRequest*
/// @param data QIODevice*
///
QNetworkReply* k_attica__platformdependent_post(void* self, const void* request, void* data);

/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#post)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self Attica__PlatformDependent*
/// @param request QNetworkRequest*
/// @param data const char*
///
QNetworkReply* k_attica__platformdependent_post2(void* self, const void* request, const char* data);

/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#setNam)
///
/// @param self Attica__PlatformDependent*
/// @param nam QNetworkAccessManager*
///
void k_attica__platformdependent_set_nam(void* self, void* nam);

/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#nam)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self Attica__PlatformDependent*
///
QNetworkAccessManager* k_attica__platformdependent_nam(void* self);

/// Delete this object from C++ memory.
///
/// @param self Attica__PlatformDependent*
///
void k_attica__platformdependent_delete(void* self);

#endif
