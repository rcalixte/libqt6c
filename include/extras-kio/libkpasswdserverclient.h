#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKPASSWDSERVERCLIENT_H
#define SRC_EXTRAS_KIO_QT6C_LIBKPASSWDSERVERCLIENT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kpasswdserverclient.html

/// k_passwdserverclient_new constructs a new KPasswdServerClient object.
///
KPasswdServerClient* k_passwdserverclient_new();

/// [Upstream resources](https://api.kde.org/kpasswdserverclient.html#checkAuthInfo)
///
/// @param self KPasswdServerClient*
/// @param info KIO__AuthInfo*
/// @param windowId long long
/// @param usertime long long
bool k_passwdserverclient_check_auth_info(void* self, void* info, long long windowId, long long usertime);

/// [Upstream resources](https://api.kde.org/kpasswdserverclient.html#queryAuthInfo)
///
/// @param self KPasswdServerClient*
/// @param info KIO__AuthInfo*
/// @param errorMsg const char*
/// @param windowId long long
/// @param usertime long long
int32_t k_passwdserverclient_query_auth_info(void* self, void* info, const char* errorMsg, long long windowId, long long usertime);

/// [Upstream resources](https://api.kde.org/kpasswdserverclient.html#addAuthInfo)
///
/// @param self KPasswdServerClient*
/// @param info KIO__AuthInfo*
/// @param windowId long long
void k_passwdserverclient_add_auth_info(void* self, void* info, long long windowId);

/// [Upstream resources](https://api.kde.org/kpasswdserverclient.html#removeAuthInfo)
///
/// @param self KPasswdServerClient*
/// @param host const char*
/// @param protocol const char*
/// @param user const char*
void k_passwdserverclient_remove_auth_info(void* self, const char* host, const char* protocol, const char* user);

/// [Upstream resources](https://api.kde.org/kpasswdserverclient.html#dtor.KPasswdServerClient)
///
/// Delete this object from C++ memory.
///
/// @param self KPasswdServerClient*
void k_passwdserverclient_delete(void* self);

#endif
