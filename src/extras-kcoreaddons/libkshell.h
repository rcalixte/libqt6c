#pragma once
#ifndef SRC_EXTRAS_KCOREADDONS_QT6C_LIBKSHELL_H
#define SRC_EXTRAS_KCOREADDONS_QT6C_LIBKSHELL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kshell.html)

/// [Upstream resources](https://api.kde.org/kshell.html#splitArgs)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 const char*
/// @param param2 flag of enum KShell__Option
/// @param param3 enum KShell__Errors*
///
const char** k_shell_split_args(const char* param1, int32_t param2, int32_t* param3);

/// [Upstream resources](https://api.kde.org/kshell.html#joinArgs)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 const char**
///
const char* k_shell_join_args(const char* param1[static 1]);

/// [Upstream resources](https://api.kde.org/kshell.html#quoteArg)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 const char*
///
const char* k_shell_quote_arg(const char* param1);

/// [Upstream resources](https://api.kde.org/kshell.html#tildeExpand)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 const char*
///
const char* k_shell_tilde_expand(const char* param1);

/// [Upstream resources](https://api.kde.org/kshell.html#tildeCollapse)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 const char*
///
const char* k_shell_tilde_collapse(const char* param1);

/// [Upstream resources](https://api.kde.org/kshell.html#public-types)

typedef enum {
    KSHELL_OPTION_NOOPTIONS = 0,
    KSHELL_OPTION_TILDEEXPAND = 1,
    KSHELL_OPTION_ABORTONMETA = 2
} KShell__Option;

/// [Upstream resources](https://api.kde.org/kshell.html#public-types)

typedef enum {
    KSHELL_ERRORS_NOERROR = 0,
    KSHELL_ERRORS_BADQUOTING = 1,
    KSHELL_ERRORS_FOUNDMETA = 2
} KShell__Errors;

#endif
