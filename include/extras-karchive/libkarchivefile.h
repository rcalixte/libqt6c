#pragma once
#ifndef SRC_EXTRAS_KARCHIVE_QT6C_LIBKARCHIVEFILE_H
#define SRC_EXTRAS_KARCHIVE_QT6C_LIBKARCHIVEFILE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
/// @param pos long long
/// @param size long long
///
KArchiveFile* k_archivefile_new(void* archive, const char* name, int access, void* date, const char* user, const char* group, const char* symlink, long long pos, long long size);

/// [Upstream resources](https://api.kde.org/karchivefile.html)

/// k_archivefile_new2 constructs a new KArchiveFile object.
///
/// @param param1 KArchiveFile*
///
KArchiveFile* k_archivefile_new2(void* param1);

/// [Upstream resources](https://api.kde.org/karchivefile.html#position)
///
/// @param self KArchiveFile*
///
long long k_archivefile_position(void* self);

/// [Upstream resources](https://api.kde.org/karchivefile.html#size)
///
/// @param self KArchiveFile*
///
long long k_archivefile_size(void* self);

/// [Upstream resources](https://api.kde.org/karchivefile.html#setSize)
///
/// @param self KArchiveFile*
/// @param s long long
///
void k_archivefile_set_size(void* self, long long s);

/// [Upstream resources](https://api.kde.org/karchivefile.html#data)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KArchiveFile*
///
char* k_archivefile_data(void* self);

/// [Upstream resources](https://api.kde.org/karchivefile.html#data)
///
/// Allows for overriding the related default method
///
/// @param self KArchiveFile*
/// @param callback libqt_string func()
///
void k_archivefile_on_data(void* self, libqt_string (*callback)());

/// [Upstream resources](https://api.kde.org/karchivefile.html#data)
///
/// Base class method implementation
///
/// @param self KArchiveFile*
///
char* k_archivefile_qbase_data(void* self);

/// [Upstream resources](https://api.kde.org/karchivefile.html#createDevice)
///
/// @param self KArchiveFile*
///
QIODevice* k_archivefile_create_device(void* self);

/// [Upstream resources](https://api.kde.org/karchivefile.html#createDevice)
///
/// Allows for overriding the related default method
///
/// @param self KArchiveFile*
/// @param callback QIODevice* func()
///
void k_archivefile_on_create_device(void* self, QIODevice* (*callback)());

/// [Upstream resources](https://api.kde.org/karchivefile.html#createDevice)
///
/// Base class method implementation
///
/// @param self KArchiveFile*
///
QIODevice* k_archivefile_qbase_create_device(void* self);

/// [Upstream resources](https://api.kde.org/karchivefile.html#isFile)
///
/// @param self KArchiveFile*
///
bool k_archivefile_is_file(void* self);

/// [Upstream resources](https://api.kde.org/karchivefile.html#isFile)
///
/// Allows for overriding the related default method
///
/// @param self KArchiveFile*
/// @param callback bool func()
///
void k_archivefile_on_is_file(void* self, bool (*callback)());

/// [Upstream resources](https://api.kde.org/karchivefile.html#isFile)
///
/// Base class method implementation
///
/// @param self KArchiveFile*
///
bool k_archivefile_qbase_is_file(void* self);

/// [Upstream resources](https://api.kde.org/karchivefile.html#copyTo)
///
/// @param self KArchiveFile*
/// @param dest const char*
///
bool k_archivefile_copy_to(void* self, const char* dest);

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
void k_archivefile_qbase_virtual_hook(void* self, int id, void* data);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#date)
///
/// @param self KArchiveFile*
///
QDateTime* k_archivefile_date(void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KArchiveFile*
///
const char* k_archivefile_name(void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#permissions)
///
/// @param self KArchiveFile*
///
mode_t k_archivefile_permissions(void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#user)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KArchiveFile*
///
const char* k_archivefile_user(void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#group)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KArchiveFile*
///
const char* k_archivefile_group(void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#symLinkTarget)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KArchiveFile*
///
const char* k_archivefile_sym_link_target(void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#isDirectory)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KArchiveFile*
///
bool k_archivefile_is_directory(void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#isDirectory)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KArchiveFile*
///
bool k_archivefile_qbase_is_directory(void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#isDirectory)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KArchiveFile*
/// @param callback bool func()
///
void k_archivefile_on_is_directory(void* self, bool (*callback)());

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KArchiveFile*
///
KArchive* k_archivefile_archive(void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KArchiveFile*
///
KArchive* k_archivefile_qbase_archive(void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KArchiveFile*
/// @param callback KArchive* func()
///
void k_archivefile_on_archive(void* self, KArchive* (*callback)());

/// [Upstream resources](https://api.kde.org/karchivefile.html#dtor.KArchiveFile)
///
/// Delete this object from C++ memory.
///
/// @param self KArchiveFile*
///
void k_archivefile_delete(void* self);

#endif
