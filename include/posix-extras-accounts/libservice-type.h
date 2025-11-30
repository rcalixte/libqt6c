#pragma once
#ifndef SRC_POSIX_EXTRAS_ACCOUNTS_QT6C_LIBSERVICE_TYPE_H
#define SRC_POSIX_EXTRAS_ACCOUNTS_QT6C_LIBSERVICE_TYPE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html

/// q_accounts__servicetype_new constructs a new Accounts::ServiceType object.
///
Accounts__ServiceType* q_accounts__servicetype_new();

/// q_accounts__servicetype_new2 constructs a new Accounts::ServiceType object.
///
/// @param other Accounts__ServiceType*
Accounts__ServiceType* q_accounts__servicetype_new2(void* other);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
///
/// @param self Accounts__ServiceType*
/// @param other Accounts__ServiceType*
void q_accounts__servicetype_operator_assign(void* self, void* other);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
///
/// @param self Accounts__ServiceType*
bool q_accounts__servicetype_is_valid(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__ServiceType*
const char* q_accounts__servicetype_name(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__ServiceType*
const char* q_accounts__servicetype_description(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__ServiceType*
const char* q_accounts__servicetype_display_name(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__ServiceType*
const char* q_accounts__servicetype_tr_catalog(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__ServiceType*
const char* q_accounts__servicetype_icon_name(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
///
/// @param self Accounts__ServiceType*
/// @param tag const char*
bool q_accounts__servicetype_has_tag(void* self, const char* tag);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
///
/// @param self Accounts__ServiceType*
libqt_list /* of const char* */ q_accounts__servicetype_tags(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
///
/// @param self Accounts__ServiceType*
const QDomDocument* q_accounts__servicetype_dom_document(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
///
/// Delete this object from C++ memory.
///
/// @param self Accounts__ServiceType*
void q_accounts__servicetype_delete(void* self);

#endif
