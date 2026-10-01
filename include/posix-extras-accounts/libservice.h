#pragma once
#ifndef POSIX_EXTRAS_ACCOUNTS_LIBSERVICE_H
#define POSIX_EXTRAS_ACCOUNTS_LIBSERVICE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)

/// q_accounts__service_new constructs a new Accounts::Service object.
///
Accounts__Service* q_accounts__service_new();

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)

/// q_accounts__service_new2 constructs a new Accounts::Service object.
///
/// @param other Accounts__Service*
///
Accounts__Service* q_accounts__service_new2(const void* other);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
///
/// @param self Accounts__Service*
/// @param other Accounts__Service*
///
void q_accounts__service_operator_assign(void* self, const void* other);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
///
/// @param self const Accounts__Service*
///
bool q_accounts__service_is_valid(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Accounts__Service*
///
const char* q_accounts__service_name(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Accounts__Service*
///
const char* q_accounts__service_description(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Accounts__Service*
///
const char* q_accounts__service_display_name(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Accounts__Service*
///
const char* q_accounts__service_tr_catalog(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Accounts__Service*
///
const char* q_accounts__service_service_type(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Accounts__Service*
///
const char* q_accounts__service_provider(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Accounts__Service*
///
const char* q_accounts__service_icon_name(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
///
/// @param self const Accounts__Service*
/// @param tag const char*
///
bool q_accounts__service_has_tag(const void* self, const char* tag);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
///
/// @param self const Accounts__Service*
///
/// @return libqt_list set of const char*
///
libqt_list q_accounts__service_tags(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
///
/// @param self const Accounts__Service*
///
const QDomDocument* q_accounts__service_dom_document(const void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
///
/// Delete this object from C++ memory.
///
/// @param self Accounts__Service*
///
void q_accounts__service_delete(void* self);

#endif
