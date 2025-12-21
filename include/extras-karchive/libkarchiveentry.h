#pragma once
#ifndef SRC_EXTRAS_KARCHIVE_QT6C_LIBKARCHIVEENTRY_H
#define SRC_EXTRAS_KARCHIVE_QT6C_LIBKARCHIVEENTRY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/karchiveentry.html)

/// k_archiveentry_new constructs a new KArchiveEntry object.
///
/// @param archive KArchive*
/// @param name const char*
/// @param access int
/// @param date QDateTime*
/// @param user const char*
/// @param group const char*
/// @param symlink const char*
///
KArchiveEntry* k_archiveentry_new(void* archive, const char* name, int access, void* date, const char* user, const char* group, const char* symlink);

/// [Upstream resources](https://api.kde.org/karchiveentry.html#date)
///
/// @param self KArchiveEntry*
///
QDateTime* k_archiveentry_date(void* self);

/// [Upstream resources](https://api.kde.org/karchiveentry.html#name)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KArchiveEntry*
///
const char* k_archiveentry_name(void* self);

/// [Upstream resources](https://api.kde.org/karchiveentry.html#permissions)
///
/// @param self KArchiveEntry*
///
mode_t k_archiveentry_permissions(void* self);

/// [Upstream resources](https://api.kde.org/karchiveentry.html#user)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KArchiveEntry*
///
const char* k_archiveentry_user(void* self);

/// [Upstream resources](https://api.kde.org/karchiveentry.html#group)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KArchiveEntry*
///
const char* k_archiveentry_group(void* self);

/// [Upstream resources](https://api.kde.org/karchiveentry.html#symLinkTarget)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KArchiveEntry*
///
const char* k_archiveentry_sym_link_target(void* self);

/// [Upstream resources](https://api.kde.org/karchiveentry.html#isFile)
///
/// @param self KArchiveEntry*
///
bool k_archiveentry_is_file(void* self);

/// [Upstream resources](https://api.kde.org/karchiveentry.html#isFile)
///
/// Allows for overriding the related default method
///
/// @param self KArchiveEntry*
/// @param callback bool func()
///
void k_archiveentry_on_is_file(void* self, bool (*callback)());

/// [Upstream resources](https://api.kde.org/karchiveentry.html#isFile)
///
/// Base class method implementation
///
/// @param self KArchiveEntry*
///
bool k_archiveentry_qbase_is_file(void* self);

/// [Upstream resources](https://api.kde.org/karchiveentry.html#isDirectory)
///
/// @param self KArchiveEntry*
///
bool k_archiveentry_is_directory(void* self);

/// [Upstream resources](https://api.kde.org/karchiveentry.html#isDirectory)
///
/// Allows for overriding the related default method
///
/// @param self KArchiveEntry*
/// @param callback bool func()
///
void k_archiveentry_on_is_directory(void* self, bool (*callback)());

/// [Upstream resources](https://api.kde.org/karchiveentry.html#isDirectory)
///
/// Base class method implementation
///
/// @param self KArchiveEntry*
///
bool k_archiveentry_qbase_is_directory(void* self);

/// [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
///
/// @param self KArchiveEntry*
///
KArchive* k_archiveentry_archive(void* self);

/// [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
///
/// Allows for overriding the related default method
///
/// @param self KArchiveEntry*
/// @param callback KArchive* func()
///
void k_archiveentry_on_archive(void* self, KArchive* (*callback)());

/// [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
///
/// Base class method implementation
///
/// @param self KArchiveEntry*
///
KArchive* k_archiveentry_qbase_archive(void* self);

/// [Upstream resources](https://api.kde.org/karchiveentry.html#virtual_hook)
///
/// @param self KArchiveEntry*
/// @param id int
/// @param data void*
///
void k_archiveentry_virtual_hook(void* self, int id, void* data);

/// [Upstream resources](https://api.kde.org/karchiveentry.html#virtual_hook)
///
/// Allows for overriding the related default method
///
/// @param self KArchiveEntry*
/// @param callback void func(KArchiveEntry* self, int id, void* data)
///
void k_archiveentry_on_virtual_hook(void* self, void (*callback)(void*, int, void*));

/// [Upstream resources](https://api.kde.org/karchiveentry.html#virtual_hook)
///
/// Base class method implementation
///
/// @param self KArchiveEntry*
/// @param id int
/// @param data void*
///
void k_archiveentry_qbase_virtual_hook(void* self, int id, void* data);

/// [Upstream resources](https://api.kde.org/karchiveentry.html#dtor.KArchiveEntry)
///
/// Delete this object from C++ memory.
///
/// @param self KArchiveEntry*
///
void k_archiveentry_delete(void* self);

#endif
