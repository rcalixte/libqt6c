#pragma once
#ifndef POSIX_EXTRAS_ACCOUNTS_LIBACCOUNTSCOMMON_H
#define POSIX_EXTRAS_ACCOUNTS_LIBACCOUNTSCOMMON_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Accountscommon.html)

typedef enum {
    ACCOUNTS_REFERENCEMODE_ADDREFERENCE = 0,
    ACCOUNTS_REFERENCEMODE_STEALREFERENCE = 1
} Accounts__ReferenceMode;

#endif
