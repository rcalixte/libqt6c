#pragma once
#ifndef POSIX_EXTRAS_ACCOUNTS_LIBSERVICE_TYPE_H
#define POSIX_EXTRAS_ACCOUNTS_LIBSERVICE_TYPE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)

/// q_accounts__servicetype_new constructs a new Accounts::ServiceType object.
///
Accounts__ServiceType* q_accounts__servicetype_new();

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)

/// q_accounts__servicetype_new2 constructs a new Accounts::ServiceType object.
///
/// @param other Accounts__ServiceType*
///
Accounts__ServiceType* q_accounts__servicetype_new2(const void* other);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
///
/// @param self Accounts__ServiceType*
/// @param other Accounts__ServiceType*
///
void q_accounts__servicetype_operator_assign(void* self, const void* other);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
///
/// @param self const Accounts__ServiceType*
///
bool q_accounts__servicetype_is_valid(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Accounts__ServiceType*
///
const char* q_accounts__servicetype_name(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Accounts__ServiceType*
///
const char* q_accounts__servicetype_description(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Accounts__ServiceType*
///
const char* q_accounts__servicetype_display_name(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Accounts__ServiceType*
///
const char* q_accounts__servicetype_tr_catalog(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Accounts__ServiceType*
///
const char* q_accounts__servicetype_icon_name(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
///
/// @param self const Accounts__ServiceType*
/// @param tag const char*
///
bool q_accounts__servicetype_has_tag(const void* self, const char* tag);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
///
/// @param self const Accounts__ServiceType*
///
/// @return libqt_list set of const char*
///
libqt_list q_accounts__servicetype_tags(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
///
/// @param self const Accounts__ServiceType*
///
const QDomDocument* q_accounts__servicetype_dom_document(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
///
/// Delete this object from C++ memory.
///
/// @param self Accounts__ServiceType*
///
void q_accounts__servicetype_delete(void* self);

#endif
