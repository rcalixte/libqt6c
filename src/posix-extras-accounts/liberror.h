#pragma once
#ifndef SRC_POSIX_EXTRAS_ACCOUNTS_QT6C_LIBERROR_H
#define SRC_POSIX_EXTRAS_ACCOUNTS_QT6C_LIBERROR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Error.html)

/// q_accounts__error_new constructs a new Accounts::Error object.
///
Accounts__Error* q_accounts__error_new();

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Error.html)

/// q_accounts__error_new2 constructs a new Accounts::Error object.
///
/// @param src Accounts__Error*
///
Accounts__Error* q_accounts__error_new2(void* src);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Error.html)

/// q_accounts__error_new3 constructs a new Accounts::Error object.
///
/// @param type enum Accounts__Error__ErrorType
///
Accounts__Error* q_accounts__error_new3(int32_t type);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Error.html)

/// q_accounts__error_new4 constructs a new Accounts::Error object.
///
/// @param type enum Accounts__Error__ErrorType
/// @param message const char*
///
Accounts__Error* q_accounts__error_new4(int32_t type, const char* message);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Error.html)
///
/// @param self Accounts__Error*
/// @param src Accounts__Error*
///
void q_accounts__error_operator_assign(void* self, void* src);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Error.html)
///
/// @param self Accounts__Error*
///
/// @return enum Accounts__Error__ErrorType
///
int32_t q_accounts__error_type(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Error.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Accounts__Error*
///
const char* q_accounts__error_message(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Error.html)
///
/// Delete this object from C++ memory.
///
/// @param self Accounts__Error*
///
void q_accounts__error_delete(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Error.html)

typedef enum {
    ACCOUNTS_ERROR_ERRORTYPE_NOERROR = 0,
    ACCOUNTS_ERROR_ERRORTYPE_UNKNOWN = 1,
    ACCOUNTS_ERROR_ERRORTYPE_DATABASE = 2,
    ACCOUNTS_ERROR_ERRORTYPE_DELETED = 3,
    ACCOUNTS_ERROR_ERRORTYPE_DATABASELOCKED = 4,
    ACCOUNTS_ERROR_ERRORTYPE_ACCOUNTNOTFOUND = 5
} Accounts__Error__ErrorType;

#endif
