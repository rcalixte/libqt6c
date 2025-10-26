#pragma once
#ifndef SRC_POSIX_EXTRAS_ACCOUNTSQT6C_LIBAPPLICATION_H
#define SRC_POSIX_EXTRAS_ACCOUNTSQT6C_LIBAPPLICATION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html

/// q_accounts__application_new constructs a new Accounts::Application object.
///
Accounts__Application* q_accounts__application_new();

/// q_accounts__application_new2 constructs a new Accounts::Application object.
///
/// @param other Accounts__Application*
Accounts__Application* q_accounts__application_new2(void* other);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
///
/// @param self Accounts__Application*
/// @param other Accounts__Application*
void q_accounts__application_operator_assign(void* self, void* other);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
///
/// @param self Accounts__Application*
bool q_accounts__application_is_valid(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Application*
const char* q_accounts__application_name(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Application*
const char* q_accounts__application_display_name(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Application*
const char* q_accounts__application_description(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Application*
const char* q_accounts__application_icon_name(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Application*
const char* q_accounts__application_desktop_file_path(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Application*
const char* q_accounts__application_tr_catalog(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
///
/// @param self Accounts__Application*
/// @param service Accounts__Service*
bool q_accounts__application_supports_service(void* self, void* service);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Application*
/// @param service Accounts__Service*
const char* q_accounts__application_service_usage(void* self, void* service);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
///
/// Delete this object from C++ memory.
///
/// @param self Accounts__Application*
void q_accounts__application_delete(void* self);

#endif
