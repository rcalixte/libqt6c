#pragma once
#ifndef POSIX_EXTRAS_ACCOUNTS_LIBPROVIDER_H
#define POSIX_EXTRAS_ACCOUNTS_LIBPROVIDER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)

/// q_accounts__provider_new constructs a new Accounts::Provider object.
///
Accounts__Provider* q_accounts__provider_new();

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)

/// q_accounts__provider_new2 constructs a new Accounts::Provider object.
///
/// @param other Accounts__Provider*
///
Accounts__Provider* q_accounts__provider_new2(const void* other);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
///
/// @param self Accounts__Provider*
/// @param other Accounts__Provider*
///
void q_accounts__provider_operator_assign(void* self, const void* other);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
///
/// @param self const Accounts__Provider*
///
bool q_accounts__provider_is_valid(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Accounts__Provider*
///
const char* q_accounts__provider_name(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Accounts__Provider*
///
const char* q_accounts__provider_display_name(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Accounts__Provider*
///
const char* q_accounts__provider_description(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Accounts__Provider*
///
const char* q_accounts__provider_plugin_name(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Accounts__Provider*
///
const char* q_accounts__provider_tr_catalog(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Accounts__Provider*
///
const char* q_accounts__provider_icon_name(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Accounts__Provider*
///
const char* q_accounts__provider_domains_reg_exp(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
///
/// @param self const Accounts__Provider*
///
bool q_accounts__provider_is_single_account(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
///
/// @param self const Accounts__Provider*
/// @param tag const char*
///
bool q_accounts__provider_has_tag(const void* self, const char* tag);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
///
/// @param self const Accounts__Provider*
///
/// @return libqt_list set of const char*
///
libqt_list q_accounts__provider_tags(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
///
/// @param self const Accounts__Provider*
///
const QDomDocument* q_accounts__provider_dom_document(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
///
/// Delete this object from C++ memory.
///
/// @param self Accounts__Provider*
///
void q_accounts__provider_delete(void* self);

#endif
