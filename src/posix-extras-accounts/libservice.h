#pragma once
#ifndef SRC_POSIX_EXTRAS_ACCOUNTS_QT6C_LIBSERVICE_H
#define SRC_POSIX_EXTRAS_ACCOUNTS_QT6C_LIBSERVICE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html

/// q_accounts__service_new constructs a new Accounts::Service object.
///
Accounts__Service* q_accounts__service_new();

/// q_accounts__service_new2 constructs a new Accounts::Service object.
///
/// @param other Accounts__Service*
Accounts__Service* q_accounts__service_new2(void* other);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
///
/// @param self Accounts__Service*
/// @param other Accounts__Service*
void q_accounts__service_operator_assign(void* self, void* other);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
///
/// @param self Accounts__Service*
bool q_accounts__service_is_valid(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Service*
const char* q_accounts__service_name(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Service*
const char* q_accounts__service_description(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Service*
const char* q_accounts__service_display_name(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Service*
const char* q_accounts__service_tr_catalog(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Service*
const char* q_accounts__service_service_type(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Service*
const char* q_accounts__service_provider(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Service*
const char* q_accounts__service_icon_name(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
///
/// @param self Accounts__Service*
/// @param tag const char*
bool q_accounts__service_has_tag(void* self, const char* tag);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
///
/// @param self Accounts__Service*
libqt_list /* of const char* */ q_accounts__service_tags(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
///
/// @param self Accounts__Service*
const QDomDocument* q_accounts__service_dom_document(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
///
/// Delete this object from C++ memory.
///
/// @param self Accounts__Service*
void q_accounts__service_delete(void* self);

#endif
