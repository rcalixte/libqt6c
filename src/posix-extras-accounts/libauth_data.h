#pragma once
#ifndef SRC_POSIX_EXTRAS_ACCOUNTS_QT6C_LIBAUTH_DATA_H
#define SRC_POSIX_EXTRAS_ACCOUNTS_QT6C_LIBAUTH_DATA_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AuthData.html)

/// q_accounts__authdata_new constructs a new Accounts::AuthData object.
///
/// @param other Accounts__AuthData*
///
Accounts__AuthData* q_accounts__authdata_new(void* other);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AuthData.html)
///
/// @param self Accounts__AuthData*
///
uint32_t q_accounts__authdata_credentials_id(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AuthData.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Accounts__AuthData*
///
const char* q_accounts__authdata_method(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AuthData.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Accounts__AuthData*
///
const char* q_accounts__authdata_mechanism(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AuthData.html)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of const char* to QVariant*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.keys[i]);
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self Accounts__AuthData*
///
/// @return libqt_map of const char* to QVariant*
///
libqt_map q_accounts__authdata_parameters(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AuthData.html)
///
/// Delete this object from C++ memory.
///
/// @param self Accounts__AuthData*
///
void q_accounts__authdata_delete(void* self);

#endif
