#pragma once
#ifndef EXTRAS_KARCHIVE_LIBKARCHIVEFILE_H
#define EXTRAS_KARCHIVE_LIBKARCHIVEFILE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/karchivefile.html)

/// k_archivefile_new constructs a new KArchiveFile object.
///
/// @param archive KArchive*
/// @param name const char*
/// @param access int
/// @param date QDateTime*
/// @param user const char*
/// @param group const char*
/// @param symlink const char*
/// @param pos int64_t
/// @param size int64_t
///
KArchiveFile* k_archivefile_new(void* archive, const char* name, int access, const void* date, const char* user, const char* group, const char* symlink, int64_t pos, int64_t size);

/// [Upstream resources](https://api.kde.org/karchivefile.html)

/// k_archivefile_new2 constructs a new KArchiveFile object.
///
/// @param param1 KArchiveFile*
///
KArchiveFile* k_archivefile_new2(const void* param1);

/// [Upstream resources](https://api.kde.org/karchivefile.html#position)
///
/// @param self const KArchiveFile*
///
int64_t k_archivefile_position(const void* self);

/// [Upstream resources](https://api.kde.org/karchivefile.html#size)
///
/// @param self const KArchiveFile*
///
int64_t k_archivefile_size(const void* self);

/// [Upstream resources](https://api.kde.org/karchivefile.html#setSize)
///
/// @param self KArchiveFile*
/// @param s int64_t
///
void k_archivefile_set_size(void* self, int64_t s);

/// [Upstream resources](https://api.kde.org/karchivefile.html#data)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KArchiveFile*
///
char* k_archivefile_data(const void* self);

/// [Upstream resources](https://api.kde.org/karchivefile.html#data)
///
/// Allows for overriding the related default method
///
/// @param self const KArchiveFile*
/// @param callback libqt_string func(const KArchiveFile* self)
///
void k_archivefile_on_data(const void* self, libqt_string (*callback)(const void*));

/// [Upstream resources](https://api.kde.org/karchivefile.html#data)
///
/// Base class method implementation
///
/// @param self const KArchiveFile*
///
char* k_archivefile_super_data(const void* self);

/// [Upstream resources](https://api.kde.org/karchivefile.html#createDevice)
///
/// @param self const KArchiveFile*
///
QIODevice* k_archivefile_create_device(const void* self);

/// [Upstream resources](https://api.kde.org/karchivefile.html#createDevice)
///
/// Allows for overriding the related default method
///
/// @param self const KArchiveFile*
/// @param callback QIODevice* func(const KArchiveFile* self)
///
void k_archivefile_on_create_device(const void* self, QIODevice* (*callback)(const void*));

/// [Upstream resources](https://api.kde.org/karchivefile.html#createDevice)
///
/// Base class method implementation
///
/// @param self const KArchiveFile*
///
QIODevice* k_archivefile_super_create_device(const void* self);

/// [Upstream resources](https://api.kde.org/karchivefile.html#isFile)
///
/// @param self const KArchiveFile*
///
bool k_archivefile_is_file(const void* self);

/// [Upstream resources](https://api.kde.org/karchivefile.html#isFile)
///
/// Allows for overriding the related default method
///
/// @param self const KArchiveFile*
/// @param callback bool func(const KArchiveFile* self)
///
void k_archivefile_on_is_file(const void* self, bool (*callback)(const void*));

/// [Upstream resources](https://api.kde.org/karchivefile.html#isFile)
///
/// Base class method implementation
///
/// @param self const KArchiveFile*
///
bool k_archivefile_super_is_file(const void* self);

/// [Upstream resources](https://api.kde.org/karchivefile.html#copyTo)
///
/// @param self const KArchiveFile*
/// @param dest const char*
///
bool k_archivefile_copy_to(const void* self, const char* dest);

/// [Upstream resources](https://api.kde.org/karchivefile.html#virtual_hook)
///
/// @param self KArchiveFile*
/// @param id int
/// @param data void*
///
void k_archivefile_virtual_hook(void* self, int id, void* data);

/// [Upstream resources](https://api.kde.org/karchivefile.html#virtual_hook)
///
/// Allows for overriding the related default method
///
/// @param self KArchiveFile*
/// @param callback void func(KArchiveFile* self, int id, void* data)
///
void k_archivefile_on_virtual_hook(void* self, void (*callback)(void*, int, void*));

/// [Upstream resources](https://api.kde.org/karchivefile.html#virtual_hook)
///
/// Base class method implementation
///
/// @param self KArchiveFile*
/// @param id int
/// @param data void*
///
void k_archivefile_super_virtual_hook(void* self, int id, void* data);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#date)
///
/// @param self const KArchiveFile*
///
QDateTime* k_archivefile_date(const void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KArchiveFile*
///
const char* k_archivefile_name(const void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#permissions)
///
/// @param self const KArchiveFile*
///
mode_t k_archivefile_permissions(const void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#user)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KArchiveFile*
///
const char* k_archivefile_user(const void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#group)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KArchiveFile*
///
const char* k_archivefile_group(const void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#symLinkTarget)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KArchiveFile*
///
const char* k_archivefile_sym_link_target(const void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#isDirectory)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KArchiveFile*
///
bool k_archivefile_is_directory(const void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#isDirectory)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KArchiveFile*
///
bool k_archivefile_super_is_directory(const void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#isDirectory)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KArchiveFile*
/// @param callback bool func(KArchiveFile* self)
///
void k_archivefile_on_is_directory(const void* self, bool (*callback)(const void*));

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KArchiveFile*
///
KArchive* k_archivefile_archive(const void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KArchiveFile*
///
KArchive* k_archivefile_super_archive(const void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KArchiveFile*
/// @param callback KArchive* func(KArchiveFile* self)
///
void k_archivefile_on_archive(const void* self, KArchive* (*callback)(const void*));

/// [Upstream resources](https://api.kde.org/karchivefile.html#dtor.KArchiveFile)
///
/// Delete this object from C++ memory.
///
/// @param self KArchiveFile*
///
void k_archivefile_delete(void* self);

#endif
