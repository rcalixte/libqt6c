#pragma once
#ifndef SRC_POSIX_EXTRAS_ACCOUNTS_QT6C_LIBPROVIDER_H
#define SRC_POSIX_EXTRAS_ACCOUNTS_QT6C_LIBPROVIDER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html

/// q_accounts__provider_new constructs a new Accounts::Provider object.
///
Accounts__Provider* q_accounts__provider_new();

/// q_accounts__provider_new2 constructs a new Accounts::Provider object.
///
/// @param other Accounts__Provider*
Accounts__Provider* q_accounts__provider_new2(void* other);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
///
/// @param self Accounts__Provider*
/// @param other Accounts__Provider*
void q_accounts__provider_operator_assign(void* self, void* other);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
///
/// @param self Accounts__Provider*
bool q_accounts__provider_is_valid(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Provider*
const char* q_accounts__provider_name(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Provider*
const char* q_accounts__provider_display_name(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Provider*
const char* q_accounts__provider_description(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Provider*
const char* q_accounts__provider_plugin_name(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Provider*
const char* q_accounts__provider_tr_catalog(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Provider*
const char* q_accounts__provider_icon_name(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Provider*
const char* q_accounts__provider_domains_reg_exp(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
///
/// @param self Accounts__Provider*
bool q_accounts__provider_is_single_account(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
///
/// @param self Accounts__Provider*
/// @param tag const char*
bool q_accounts__provider_has_tag(void* self, const char* tag);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
///
/// @param self Accounts__Provider*
libqt_list /* of const char* */ q_accounts__provider_tags(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
///
/// @param self Accounts__Provider*
const QDomDocument* q_accounts__provider_dom_document(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
///
/// Delete this object from C++ memory.
///
/// @param self Accounts__Provider*
void q_accounts__provider_delete(void* self);

#endif
