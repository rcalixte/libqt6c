#pragma once
#ifndef SRC_EXTRAS_ATTICAQT6C_LIBPLATFORMDEPENDENT_V2_H
#define SRC_EXTRAS_ATTICAQT6C_LIBPLATFORMDEPENDENT_V2_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/attica-platformdependentv2.html

/// [Qt documentation](https://api.kde.org/attica-platformdependentv2.html#deleteResource)
///
/// @param self Attica__PlatformDependentV2*
/// @param request QNetworkRequest*
QNetworkReply* k_attica__platformdependentv2_delete_resource(void* self, void* request);

/// [Qt documentation](https://api.kde.org/attica-platformdependentv2.html#put)
///
/// @param self Attica__PlatformDependentV2*
/// @param request QNetworkRequest*
/// @param data QIODevice*
QNetworkReply* k_attica__platformdependentv2_put(void* self, void* request, void* data);

/// [Qt documentation](https://api.kde.org/attica-platformdependentv2.html#put)
///
/// @param self Attica__PlatformDependentV2*
/// @param request QNetworkRequest*
/// @param data const char*
QNetworkReply* k_attica__platformdependentv2_put2(void* self, void* request, const char* data);

/// [Qt documentation](https://api.kde.org/attica-platformdependentv2.html#operator-eq)
///
/// @param self Attica__PlatformDependentV2*
/// @param param1 Attica__PlatformDependentV2*
void k_attica__platformdependentv2_operator_assign(void* self, void* param1);

/// Inherited from Attica::PlatformDependent
///
/// [Qt documentation](https://api.kde.org/attica-platformdependent.html#getDefaultProviderFiles)
///
/// @param self Attica__PlatformDependentV2*
libqt_list /* of QUrl* */ k_attica__platformdependentv2_get_default_provider_files(void* self);

/// Inherited from Attica::PlatformDependent
///
/// [Qt documentation](https://api.kde.org/attica-platformdependent.html#addDefaultProviderFile)
///
/// @param self Attica__PlatformDependentV2*
/// @param url QUrl*
void k_attica__platformdependentv2_add_default_provider_file(void* self, void* url);

/// Inherited from Attica::PlatformDependent
///
/// [Qt documentation](https://api.kde.org/attica-platformdependent.html#removeDefaultProviderFile)
///
/// @param self Attica__PlatformDependentV2*
/// @param url QUrl*
void k_attica__platformdependentv2_remove_default_provider_file(void* self, void* url);

/// Inherited from Attica::PlatformDependent
///
/// [Qt documentation](https://api.kde.org/attica-platformdependent.html#enableProvider)
///
/// @param self Attica__PlatformDependentV2*
/// @param baseUrl QUrl*
/// @param enabled bool
void k_attica__platformdependentv2_enable_provider(void* self, void* baseUrl, bool enabled);

/// Inherited from Attica::PlatformDependent
///
/// [Qt documentation](https://api.kde.org/attica-platformdependent.html#isEnabled)
///
/// @param self Attica__PlatformDependentV2*
/// @param baseUrl QUrl*
bool k_attica__platformdependentv2_is_enabled(void* self, void* baseUrl);

/// Inherited from Attica::PlatformDependent
///
/// [Qt documentation](https://api.kde.org/attica-platformdependent.html#hasCredentials)
///
/// @param self Attica__PlatformDependentV2*
/// @param baseUrl QUrl*
bool k_attica__platformdependentv2_has_credentials(void* self, void* baseUrl);

/// Inherited from Attica::PlatformDependent
///
/// [Qt documentation](https://api.kde.org/attica-platformdependent.html#loadCredentials)
///
/// @param self Attica__PlatformDependentV2*
/// @param baseUrl QUrl*
/// @param user const char*
/// @param password const char*
bool k_attica__platformdependentv2_load_credentials(void* self, void* baseUrl, const char* user, const char* password);

/// Inherited from Attica::PlatformDependent
///
/// [Qt documentation](https://api.kde.org/attica-platformdependent.html#askForCredentials)
///
/// @param self Attica__PlatformDependentV2*
/// @param baseUrl QUrl*
/// @param user const char*
/// @param password const char*
bool k_attica__platformdependentv2_ask_for_credentials(void* self, void* baseUrl, const char* user, const char* password);

/// Inherited from Attica::PlatformDependent
///
/// [Qt documentation](https://api.kde.org/attica-platformdependent.html#saveCredentials)
///
/// @param self Attica__PlatformDependentV2*
/// @param baseUrl QUrl*
/// @param user const char*
/// @param password const char*
bool k_attica__platformdependentv2_save_credentials(void* self, void* baseUrl, const char* user, const char* password);

/// Inherited from Attica::PlatformDependent
///
/// [Qt documentation](https://api.kde.org/attica-platformdependent.html#get)
///
/// @param self Attica__PlatformDependentV2*
/// @param request QNetworkRequest*
QNetworkReply* k_attica__platformdependentv2_get(void* self, void* request);

/// Inherited from Attica::PlatformDependent
///
/// [Qt documentation](https://api.kde.org/attica-platformdependent.html#post)
///
/// @param self Attica__PlatformDependentV2*
/// @param request QNetworkRequest*
/// @param data QIODevice*
QNetworkReply* k_attica__platformdependentv2_post(void* self, void* request, void* data);

/// Inherited from Attica::PlatformDependent
///
/// [Qt documentation](https://api.kde.org/attica-platformdependent.html#post)
///
/// @param self Attica__PlatformDependentV2*
/// @param request QNetworkRequest*
/// @param data const char*
QNetworkReply* k_attica__platformdependentv2_post2(void* self, void* request, const char* data);

/// Inherited from Attica::PlatformDependent
///
/// [Qt documentation](https://api.kde.org/attica-platformdependent.html#setNam)
///
/// @param self Attica__PlatformDependentV2*
/// @param nam QNetworkAccessManager*
void k_attica__platformdependentv2_set_nam(void* self, void* nam);

/// Inherited from Attica::PlatformDependent
///
/// [Qt documentation](https://api.kde.org/attica-platformdependent.html#nam)
///
/// @param self Attica__PlatformDependentV2*
QNetworkAccessManager* k_attica__platformdependentv2_nam(void* self);

/// Delete this object from C++ memory.
///
/// @param self Attica__PlatformDependentV2*
void k_attica__platformdependentv2_delete(void* self);

#endif
