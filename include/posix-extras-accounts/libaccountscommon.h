#pragma once
#ifndef SRC_POSIX_EXTRAS_ACCOUNTSQT6C_LIBACCOUNTSCOMMON_H
#define SRC_POSIX_EXTRAS_ACCOUNTSQT6C_LIBACCOUNTSCOMMON_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Accountscommon.html

typedef enum {
    ACCOUNTS_REFERENCEMODE_ADDREFERENCE = 0,
    ACCOUNTS_REFERENCEMODE_STEALREFERENCE = 1
} Accounts__ReferenceMode;

#endif
