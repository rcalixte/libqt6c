#pragma once
#ifndef SRC_EXTRAS_KARCHIVE_QT6C_LIBKARCHIVEDIRECTORY_H
#define SRC_EXTRAS_KARCHIVE_QT6C_LIBKARCHIVEDIRECTORY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/karchivedirectory.html)

/// k_archivedirectory_new constructs a new KArchiveDirectory object.
///
/// @param archive KArchive*
/// @param name const char*
/// @param access int
/// @param date QDateTime*
/// @param user const char*
/// @param group const char*
/// @param symlink const char*
///
KArchiveDirectory* k_archivedirectory_new(void* archive, const char* name, int access, void* date, const char* user, const char* group, const char* symlink);

/// [Upstream resources](https://api.kde.org/karchivedirectory.html)

/// k_archivedirectory_new2 constructs a new KArchiveDirectory object.
///
/// @param param1 KArchiveDirectory*
///
KArchiveDirectory* k_archivedirectory_new2(void* param1);

/// [Upstream resources](https://api.kde.org/karchivedirectory.html#entries)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KArchiveDirectory*
///
const char** k_archivedirectory_entries(void* self);

/// [Upstream resources](https://api.kde.org/karchivedirectory.html#entry)
///
/// @param self KArchiveDirectory*
/// @param name const char*
///
const KArchiveEntry* k_archivedirectory_entry(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/karchivedirectory.html#file)
///
/// @param self KArchiveDirectory*
/// @param name const char*
///
const KArchiveFile* k_archivedirectory_file(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/karchivedirectory.html#addEntry)
///
/// @param self KArchiveDirectory*
/// @param param1 KArchiveEntry*
///
void k_archivedirectory_add_entry(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/karchivedirectory.html#addEntryV2)
///
/// @param self KArchiveDirectory*
/// @param param1 KArchiveEntry*
///
bool k_archivedirectory_add_entry_v2(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/karchivedirectory.html#removeEntry)
///
/// @param self KArchiveDirectory*
/// @param param1 KArchiveEntry*
///
void k_archivedirectory_remove_entry(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/karchivedirectory.html#removeEntryV2)
///
/// @param self KArchiveDirectory*
/// @param param1 KArchiveEntry*
///
bool k_archivedirectory_remove_entry_v2(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/karchivedirectory.html#isDirectory)
///
/// @param self KArchiveDirectory*
///
bool k_archivedirectory_is_directory(void* self);

/// [Upstream resources](https://api.kde.org/karchivedirectory.html#isDirectory)
///
/// Allows for overriding the related default method
///
/// @param self KArchiveDirectory*
/// @param callback bool func()
///
void k_archivedirectory_on_is_directory(void* self, bool (*callback)());

/// [Upstream resources](https://api.kde.org/karchivedirectory.html#isDirectory)
///
/// Base class method implementation
///
/// @param self KArchiveDirectory*
///
bool k_archivedirectory_qbase_is_directory(void* self);

/// [Upstream resources](https://api.kde.org/karchivedirectory.html#copyTo)
///
/// @param self KArchiveDirectory*
/// @param dest const char*
///
bool k_archivedirectory_copy_to(void* self, const char* dest);

/// [Upstream resources](https://api.kde.org/karchivedirectory.html#virtual_hook)
///
/// @param self KArchiveDirectory*
/// @param id int
/// @param data void*
///
void k_archivedirectory_virtual_hook(void* self, int id, void* data);

/// [Upstream resources](https://api.kde.org/karchivedirectory.html#virtual_hook)
///
/// Allows for overriding the related default method
///
/// @param self KArchiveDirectory*
/// @param callback void func(KArchiveDirectory* self, int id, void* data)
///
void k_archivedirectory_on_virtual_hook(void* self, void (*callback)(void*, int, void*));

/// [Upstream resources](https://api.kde.org/karchivedirectory.html#virtual_hook)
///
/// Base class method implementation
///
/// @param self KArchiveDirectory*
/// @param id int
/// @param data void*
///
void k_archivedirectory_qbase_virtual_hook(void* self, int id, void* data);

/// [Upstream resources](https://api.kde.org/karchivedirectory.html#copyTo)
///
/// @param self KArchiveDirectory*
/// @param dest const char*
/// @param recursive bool
///
bool k_archivedirectory_copy_to2(void* self, const char* dest, bool recursive);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#date)
///
/// @param self KArchiveDirectory*
///
QDateTime* k_archivedirectory_date(void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KArchiveDirectory*
///
const char* k_archivedirectory_name(void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#permissions)
///
/// @param self KArchiveDirectory*
///
mode_t k_archivedirectory_permissions(void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#user)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KArchiveDirectory*
///
const char* k_archivedirectory_user(void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#group)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KArchiveDirectory*
///
const char* k_archivedirectory_group(void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#symLinkTarget)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KArchiveDirectory*
///
const char* k_archivedirectory_sym_link_target(void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#isFile)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KArchiveDirectory*
///
bool k_archivedirectory_is_file(void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#isFile)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KArchiveDirectory*
///
bool k_archivedirectory_qbase_is_file(void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#isFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KArchiveDirectory*
/// @param callback bool func()
///
void k_archivedirectory_on_is_file(void* self, bool (*callback)());

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KArchiveDirectory*
///
KArchive* k_archivedirectory_archive(void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KArchiveDirectory*
///
KArchive* k_archivedirectory_qbase_archive(void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KArchiveDirectory*
/// @param callback KArchive* func()
///
void k_archivedirectory_on_archive(void* self, KArchive* (*callback)());

/// [Upstream resources](https://api.kde.org/karchivedirectory.html#dtor.KArchiveDirectory)
///
/// Delete this object from C++ memory.
///
/// @param self KArchiveDirectory*
///
void k_archivedirectory_delete(void* self);

#endif
