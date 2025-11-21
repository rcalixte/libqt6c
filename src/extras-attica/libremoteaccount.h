#pragma once
#ifndef SRC_EXTRAS_ATTICA_QT6C_LIBREMOTEACCOUNT_H
#define SRC_EXTRAS_ATTICA_QT6C_LIBREMOTEACCOUNT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/attica-remoteaccount.html

/// k_attica__remoteaccount_new constructs a new Attica::RemoteAccount object.
///
Attica__RemoteAccount* k_attica__remoteaccount_new();

/// k_attica__remoteaccount_new2 constructs a new Attica::RemoteAccount object.
///
/// @param other Attica__RemoteAccount*
Attica__RemoteAccount* k_attica__remoteaccount_new2(void* other);

/// [Qt documentation](https://api.kde.org/attica-remoteaccount.html#operator-eq)
///
/// @param self Attica__RemoteAccount*
/// @param other Attica__RemoteAccount*
void k_attica__remoteaccount_operator_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/attica-remoteaccount.html#setId)
///
/// @param self Attica__RemoteAccount*
/// @param id const char*
void k_attica__remoteaccount_set_id(void* self, const char* id);

/// [Qt documentation](https://api.kde.org/attica-remoteaccount.html#id)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__RemoteAccount*
const char* k_attica__remoteaccount_id(void* self);

/// [Qt documentation](https://api.kde.org/attica-remoteaccount.html#setType)
///
/// @param self Attica__RemoteAccount*
/// @param type const char*
void k_attica__remoteaccount_set_type(void* self, const char* type);

/// [Qt documentation](https://api.kde.org/attica-remoteaccount.html#type)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__RemoteAccount*
const char* k_attica__remoteaccount_type(void* self);

/// [Qt documentation](https://api.kde.org/attica-remoteaccount.html#setRemoteServiceId)
///
/// @param self Attica__RemoteAccount*
/// @param remoteServiceId const char*
void k_attica__remoteaccount_set_remote_service_id(void* self, const char* remoteServiceId);

/// [Qt documentation](https://api.kde.org/attica-remoteaccount.html#remoteServiceId)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__RemoteAccount*
const char* k_attica__remoteaccount_remote_service_id(void* self);

/// [Qt documentation](https://api.kde.org/attica-remoteaccount.html#setData)
///
/// @param self Attica__RemoteAccount*
/// @param data const char*
void k_attica__remoteaccount_set_data(void* self, const char* data);

/// [Qt documentation](https://api.kde.org/attica-remoteaccount.html#data)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__RemoteAccount*
const char* k_attica__remoteaccount_data(void* self);

/// [Qt documentation](https://api.kde.org/attica-remoteaccount.html#setLogin)
///
/// @param self Attica__RemoteAccount*
/// @param login const char*
void k_attica__remoteaccount_set_login(void* self, const char* login);

/// [Qt documentation](https://api.kde.org/attica-remoteaccount.html#login)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__RemoteAccount*
const char* k_attica__remoteaccount_login(void* self);

/// [Qt documentation](https://api.kde.org/attica-remoteaccount.html#setPassword)
///
/// @param self Attica__RemoteAccount*
/// @param password const char*
void k_attica__remoteaccount_set_password(void* self, const char* password);

/// [Qt documentation](https://api.kde.org/attica-remoteaccount.html#password)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__RemoteAccount*
const char* k_attica__remoteaccount_password(void* self);

/// [Qt documentation](https://api.kde.org/attica-remoteaccount.html#isValid)
///
/// @param self Attica__RemoteAccount*
bool k_attica__remoteaccount_is_valid(void* self);

/// Delete this object from C++ memory.
///
/// @param self Attica__RemoteAccount*
void k_attica__remoteaccount_delete(void* self);

#endif
