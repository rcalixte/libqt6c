#pragma once
#ifndef POSIX_EXTRAS_ACCOUNTS_LIBAPPLICATION_H
#define POSIX_EXTRAS_ACCOUNTS_LIBAPPLICATION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)

/// q_accounts__application_new constructs a new Accounts::Application object.
///
Accounts__Application* q_accounts__application_new();

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)

/// q_accounts__application_new2 constructs a new Accounts::Application object.
///
/// @param other Accounts__Application*
///
Accounts__Application* q_accounts__application_new2(const void* other);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
///
/// @param self Accounts__Application*
/// @param other Accounts__Application*
///
void q_accounts__application_operator_assign(void* self, const void* other);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
///
/// @param self const Accounts__Application*
///
bool q_accounts__application_is_valid(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Accounts__Application*
///
const char* q_accounts__application_name(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Accounts__Application*
///
const char* q_accounts__application_display_name(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Accounts__Application*
///
const char* q_accounts__application_description(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Accounts__Application*
///
const char* q_accounts__application_icon_name(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Accounts__Application*
///
const char* q_accounts__application_desktop_file_path(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Accounts__Application*
///
const char* q_accounts__application_tr_catalog(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
///
/// @param self const Accounts__Application*
/// @param service Accounts__Service*
///
bool q_accounts__application_supports_service(const void* self, const void* service);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Accounts__Application*
/// @param service Accounts__Service*
///
const char* q_accounts__application_service_usage(const void* self, const void* service);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
///
/// Delete this object from C++ memory.
///
/// @param self Accounts__Application*
///
void q_accounts__application_delete(void* self);

#endif
