#pragma once
#ifndef SRC_EXTRAS_KCOREADDONS_QT6C_LIBKPROCESSLIST_H
#define SRC_EXTRAS_KCOREADDONS_QT6C_LIBKPROCESSLIST_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kprocesslist-kprocessinfo.html

/// k_processlist__kprocessinfo_new constructs a new KProcessList::KProcessInfo object.
///
KProcessList__KProcessInfo* k_processlist__kprocessinfo_new();

/// k_processlist__kprocessinfo_new2 constructs a new KProcessList::KProcessInfo object.
///
/// @param pid long long
/// @param command const char*
/// @param user const char*
KProcessList__KProcessInfo* k_processlist__kprocessinfo_new2(long long pid, const char* command, const char* user);

/// k_processlist__kprocessinfo_new3 constructs a new KProcessList::KProcessInfo object.
///
/// @param pid long long
/// @param command const char*
/// @param name const char*
/// @param user const char*
KProcessList__KProcessInfo* k_processlist__kprocessinfo_new3(long long pid, const char* command, const char* name, const char* user);

/// k_processlist__kprocessinfo_new4 constructs a new KProcessList::KProcessInfo object.
///
/// @param other KProcessList__KProcessInfo*
KProcessList__KProcessInfo* k_processlist__kprocessinfo_new4(void* other);

/// [Upstream resources](https://api.kde.org/kprocesslist-kprocessinfo.html#operator-eq)
///
/// @param self KProcessList__KProcessInfo*
/// @param other KProcessList__KProcessInfo*
void k_processlist__kprocessinfo_operator_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/kprocesslist-kprocessinfo.html#isValid)
///
/// @param self KProcessList__KProcessInfo*
bool k_processlist__kprocessinfo_is_valid(void* self);

/// [Upstream resources](https://api.kde.org/kprocesslist-kprocessinfo.html#pid)
///
/// @param self KProcessList__KProcessInfo*
long long k_processlist__kprocessinfo_pid(void* self);

/// [Upstream resources](https://api.kde.org/kprocesslist-kprocessinfo.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KProcessList__KProcessInfo*
const char* k_processlist__kprocessinfo_name(void* self);

/// [Upstream resources](https://api.kde.org/kprocesslist-kprocessinfo.html#user)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KProcessList__KProcessInfo*
const char* k_processlist__kprocessinfo_user(void* self);

/// [Upstream resources](https://api.kde.org/kprocesslist-kprocessinfo.html#command)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KProcessList__KProcessInfo*
const char* k_processlist__kprocessinfo_command(void* self);

/// Delete this object from C++ memory.
///
/// @param self KProcessList__KProcessInfo*
void k_processlist__kprocessinfo_delete(void* self);

/// https://api.kde.org/kprocesslist.html

/// [Upstream resources](https://api.kde.org/kprocesslist.html#processInfoList)
///
libqt_list /* of KProcessList__KProcessInfo* */ k_processlist_process_info_list();

/// [Upstream resources](https://api.kde.org/kprocesslist.html#processInfo)
///
/// @param param1 long long
KProcessList__KProcessInfo* k_processlist_process_info(long long param1);
#endif
