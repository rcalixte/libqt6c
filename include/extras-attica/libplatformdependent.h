#pragma once
#ifndef SRC_EXTRAS_ATTICA_QT6C_LIBPLATFORMDEPENDENT_H
#define SRC_EXTRAS_ATTICA_QT6C_LIBPLATFORMDEPENDENT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/attica-platformdependent.html)

/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#getDefaultProviderFiles)
///
/// @param self Attica__PlatformDependent*
///
libqt_list /* of QUrl* */ k_attica__platformdependent_get_default_provider_files(void* self);

/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#addDefaultProviderFile)
///
/// @param self Attica__PlatformDependent*
/// @param url QUrl*
///
void k_attica__platformdependent_add_default_provider_file(void* self, void* url);

/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#removeDefaultProviderFile)
///
/// @param self Attica__PlatformDependent*
/// @param url QUrl*
///
void k_attica__platformdependent_remove_default_provider_file(void* self, void* url);

/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#enableProvider)
///
/// @param self Attica__PlatformDependent*
/// @param baseUrl QUrl*
/// @param enabled bool
///
void k_attica__platformdependent_enable_provider(void* self, void* baseUrl, bool enabled);

/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#isEnabled)
///
/// @param self Attica__PlatformDependent*
/// @param baseUrl QUrl*
///
bool k_attica__platformdependent_is_enabled(void* self, void* baseUrl);

/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#hasCredentials)
///
/// @param self Attica__PlatformDependent*
/// @param baseUrl QUrl*
///
bool k_attica__platformdependent_has_credentials(void* self, void* baseUrl);

/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#loadCredentials)
///
/// @param self Attica__PlatformDependent*
/// @param baseUrl QUrl*
/// @param user const char*
/// @param password const char*
///
bool k_attica__platformdependent_load_credentials(void* self, void* baseUrl, const char* user, const char* password);

/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#askForCredentials)
///
/// @param self Attica__PlatformDependent*
/// @param baseUrl QUrl*
/// @param user const char*
/// @param password const char*
///
bool k_attica__platformdependent_ask_for_credentials(void* self, void* baseUrl, const char* user, const char* password);

/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#saveCredentials)
///
/// @param self Attica__PlatformDependent*
/// @param baseUrl QUrl*
/// @param user const char*
/// @param password const char*
///
bool k_attica__platformdependent_save_credentials(void* self, void* baseUrl, const char* user, const char* password);

/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#get)
///
/// @param self Attica__PlatformDependent*
/// @param request QNetworkRequest*
///
QNetworkReply* k_attica__platformdependent_get(void* self, void* request);

/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#post)
///
/// @param self Attica__PlatformDependent*
/// @param request QNetworkRequest*
/// @param data QIODevice*
///
QNetworkReply* k_attica__platformdependent_post(void* self, void* request, void* data);

/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#post)
///
/// @param self Attica__PlatformDependent*
/// @param request QNetworkRequest*
/// @param data const char*
///
QNetworkReply* k_attica__platformdependent_post2(void* self, void* request, const char* data);

/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#setNam)
///
/// @param self Attica__PlatformDependent*
/// @param nam QNetworkAccessManager*
///
void k_attica__platformdependent_set_nam(void* self, void* nam);

/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#nam)
///
/// @param self Attica__PlatformDependent*
///
QNetworkAccessManager* k_attica__platformdependent_nam(void* self);

/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#operator-eq)
///
/// @param self Attica__PlatformDependent*
/// @param param1 Attica__PlatformDependent*
///
void k_attica__platformdependent_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self Attica__PlatformDependent*
///
void k_attica__platformdependent_delete(void* self);

#endif
