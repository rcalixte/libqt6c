#pragma once
#ifndef SRC_EXTRAS_KCOREADDONS_QT6C_LIBKSHELL_H
#define SRC_EXTRAS_KCOREADDONS_QT6C_LIBKSHELL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kshell.html)

/// [Upstream resources](https://api.kde.org/kshell.html#splitArgs)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param cmd const char*
/// @param flags flag of enum KShell__Option
/// @param err enum KShell__Errors*
///
const char** k_shell_split_args(const char* cmd, int32_t flags, int32_t* err);

/// [Upstream resources](https://api.kde.org/kshell.html#joinArgs)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param args const char**
///
const char* k_shell_join_args(const char* args[static 1]);

/// [Upstream resources](https://api.kde.org/kshell.html#quoteArg)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param arg const char*
///
const char* k_shell_quote_arg(const char* arg);

/// [Upstream resources](https://api.kde.org/kshell.html#tildeExpand)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param path const char*
///
const char* k_shell_tilde_expand(const char* path);

/// [Upstream resources](https://api.kde.org/kshell.html#tildeCollapse)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param path const char*
///
const char* k_shell_tilde_collapse(const char* path);

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
