#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSQT6C_LIBKSHELL_H
#define SRC_EXTRAS_KCOREADDONSQT6C_LIBKSHELL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kshell.html

/// [Qt documentation](https://api.kde.org/kshell.html#splitArgs)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
/// @param param2 flag of enum KShell__Option
/// @param param3 enum KShell__Errors*
const char** k_shell_split_args(const char* param1, int32_t param2, int32_t* param3);

/// [Qt documentation](https://api.kde.org/kshell.html#joinArgs)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char**
const char* k_shell_join_args(const char* param1[]);

/// [Qt documentation](https://api.kde.org/kshell.html#quoteArg)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
const char* k_shell_quote_arg(const char* param1);

/// [Qt documentation](https://api.kde.org/kshell.html#tildeExpand)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
const char* k_shell_tilde_expand(const char* param1);

/// [Qt documentation](https://api.kde.org/kshell.html#tildeCollapse)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
const char* k_shell_tilde_collapse(const char* param1);

/// https://api.kde.org/kshell.html#types

typedef enum {
    KSHELL_OPTION_NOOPTIONS = 0,
    KSHELL_OPTION_TILDEEXPAND = 1,
    KSHELL_OPTION_ABORTONMETA = 2
} KShell__Option;

typedef enum {
    KSHELL_ERRORS_NOERROR = 0,
    KSHELL_ERRORS_BADQUOTING = 1,
    KSHELL_ERRORS_FOUNDMETA = 2
} KShell__Errors;

#endif
