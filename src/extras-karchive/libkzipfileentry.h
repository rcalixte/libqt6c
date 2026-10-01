#pragma once
#ifndef EXTRAS_KARCHIVE_LIBKZIPFILEENTRY_H
#define EXTRAS_KARCHIVE_LIBKZIPFILEENTRY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kzipfileentry.html)

/// k_zipfileentry_new constructs a new KZipFileEntry object.
///
/// @param zip KZip*
/// @param name const char*
/// @param access int
/// @param date QDateTime*
/// @param user const char*
/// @param group const char*
/// @param symlink const char*
/// @param path const char*
/// @param start int64_t
/// @param uncompressedSize int64_t
/// @param encoding int
/// @param compressedSize int64_t
///
KZipFileEntry* k_zipfileentry_new(void* zip, const char* name, int access, const void* date, const char* user, const char* group, const char* symlink, const char* path, int64_t start, int64_t uncompressedSize, int encoding, int64_t compressedSize);

/// [Upstream resources](https://api.kde.org/kzipfileentry.html)

/// k_zipfileentry_new2 constructs a new KZipFileEntry object.
///
/// @param param1 KZipFileEntry*
///
KZipFileEntry* k_zipfileentry_new2(const void* param1);

/// [Upstream resources](https://api.kde.org/kzipfileentry.html#encoding)
///
/// @param self const KZipFileEntry*
///
int32_t k_zipfileentry_encoding(const void* self);

/// [Upstream resources](https://api.kde.org/kzipfileentry.html#compressedSize)
///
/// @param self const KZipFileEntry*
///
int64_t k_zipfileentry_compressed_size(const void* self);

/// [Upstream resources](https://api.kde.org/kzipfileentry.html#setCompressedSize)
///
/// @param self KZipFileEntry*
/// @param compressedSize int64_t
///
void k_zipfileentry_set_compressed_size(void* self, int64_t compressedSize);

/// [Upstream resources](https://api.kde.org/kzipfileentry.html#setHeaderStart)
///
/// @param self KZipFileEntry*
/// @param headerstart int64_t
///
void k_zipfileentry_set_header_start(void* self, int64_t headerstart);

/// [Upstream resources](https://api.kde.org/kzipfileentry.html#headerStart)
///
/// @param self const KZipFileEntry*
///
int64_t k_zipfileentry_header_start(const void* self);

/// [Upstream resources](https://api.kde.org/kzipfileentry.html#crc32)
///
/// @param self const KZipFileEntry*
///
uintptr_t k_zipfileentry_crc32(const void* self);

/// [Upstream resources](https://api.kde.org/kzipfileentry.html#setCRC32)
///
/// @param self KZipFileEntry*
/// @param crc32 uintptr_t
///
void k_zipfileentry_set_c_r_c32(void* self, uintptr_t crc32);

/// [Upstream resources](https://api.kde.org/kzipfileentry.html#path)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KZipFileEntry*
///
const char* k_zipfileentry_path(const void* self);

/// [Upstream resources](https://api.kde.org/kzipfileentry.html#data)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KZipFileEntry*
///
char* k_zipfileentry_data(const void* self);

/// [Upstream resources](https://api.kde.org/kzipfileentry.html#data)
///
/// Allows for overriding the related default method
///
/// @param self KZipFileEntry*
/// @param callback libqt_string func(const KZipFileEntry* self)
///
void k_zipfileentry_on_data(void* self, libqt_string (*callback)(const void*));

/// [Upstream resources](https://api.kde.org/kzipfileentry.html#data)
///
/// Base class method implementation
///
/// @param self const KZipFileEntry*
///
char* k_zipfileentry_super_data(const void* self);

/// [Upstream resources](https://api.kde.org/kzipfileentry.html#createDevice)
///
/// @param self const KZipFileEntry*
///
QIODevice* k_zipfileentry_create_device(const void* self);

/// [Upstream resources](https://api.kde.org/kzipfileentry.html#createDevice)
///
/// Allows for overriding the related default method
///
/// @param self KZipFileEntry*
/// @param callback QIODevice* func(const KZipFileEntry* self)
///
void k_zipfileentry_on_create_device(void* self, QIODevice* (*callback)(const void*));

/// [Upstream resources](https://api.kde.org/kzipfileentry.html#createDevice)
///
/// Base class method implementation
///
/// @param self const KZipFileEntry*
///
QIODevice* k_zipfileentry_super_create_device(const void* self);

/// Inherited from KArchiveFile
///
/// [Upstream resources](https://api.kde.org/karchivefile.html#position)
///
/// @param self const KZipFileEntry*
///
int64_t k_zipfileentry_position(const void* self);

/// Inherited from KArchiveFile
///
/// [Upstream resources](https://api.kde.org/karchivefile.html#size)
///
/// @param self const KZipFileEntry*
///
int64_t k_zipfileentry_size(const void* self);

/// Inherited from KArchiveFile
///
/// [Upstream resources](https://api.kde.org/karchivefile.html#setSize)
///
/// @param self KZipFileEntry*
/// @param s int64_t
///
void k_zipfileentry_set_size(void* self, int64_t s);

/// Inherited from KArchiveFile
///
/// [Upstream resources](https://api.kde.org/karchivefile.html#copyTo)
///
/// @param self const KZipFileEntry*
/// @param dest const char*
///
bool k_zipfileentry_copy_to(const void* self, const char* dest);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#date)
///
/// @param self const KZipFileEntry*
///
QDateTime* k_zipfileentry_date(const void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KZipFileEntry*
///
const char* k_zipfileentry_name(const void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#permissions)
///
/// @param self const KZipFileEntry*
///
mode_t k_zipfileentry_permissions(const void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#user)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KZipFileEntry*
///
const char* k_zipfileentry_user(const void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#group)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KZipFileEntry*
///
const char* k_zipfileentry_group(const void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#symLinkTarget)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KZipFileEntry*
///
const char* k_zipfileentry_sym_link_target(const void* self);

/// Inherited from KArchiveFile
///
/// [Upstream resources](https://api.kde.org/karchivefile.html#isFile)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KZipFileEntry*
///
bool k_zipfileentry_is_file(const void* self);

/// Inherited from KArchiveFile
///
/// [Upstream resources](https://api.kde.org/karchivefile.html#isFile)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KZipFileEntry*
///
bool k_zipfileentry_super_is_file(const void* self);

/// Inherited from KArchiveFile
///
/// [Upstream resources](https://api.kde.org/karchivefile.html#isFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KZipFileEntry*
/// @param callback bool func(KZipFileEntry* self)
///
void k_zipfileentry_on_is_file(void* self, bool (*callback)(const void*));

/// Inherited from KArchiveFile
///
/// [Upstream resources](https://api.kde.org/karchivefile.html#virtual_hook)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KZipFileEntry*
/// @param id int
/// @param data void*
///
void k_zipfileentry_virtual_hook(void* self, int id, void* data);

/// Inherited from KArchiveFile
///
/// [Upstream resources](https://api.kde.org/karchivefile.html#virtual_hook)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KZipFileEntry*
/// @param id int
/// @param data void*
///
void k_zipfileentry_super_virtual_hook(void* self, int id, void* data);

/// Inherited from KArchiveFile
///
/// [Upstream resources](https://api.kde.org/karchivefile.html#virtual_hook)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KZipFileEntry*
/// @param callback void func(KZipFileEntry* self, int id, void* data)
///
void k_zipfileentry_on_virtual_hook(void* self, void (*callback)(void*, int, void*));

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#isDirectory)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KZipFileEntry*
///
bool k_zipfileentry_is_directory(const void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#isDirectory)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KZipFileEntry*
///
bool k_zipfileentry_super_is_directory(const void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#isDirectory)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KZipFileEntry*
/// @param callback bool func(KZipFileEntry* self)
///
void k_zipfileentry_on_is_directory(void* self, bool (*callback)(const void*));

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KZipFileEntry*
///
KArchive* k_zipfileentry_archive(const void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KZipFileEntry*
///
KArchive* k_zipfileentry_super_archive(const void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KZipFileEntry*
/// @param callback KArchive* func(KZipFileEntry* self)
///
void k_zipfileentry_on_archive(void* self, KArchive* (*callback)(const void*));

/// [Upstream resources](https://api.kde.org/kzipfileentry.html#dtor.KZipFileEntry)
///
/// Delete this object from C++ memory.
///
/// @param self KZipFileEntry*
///
void k_zipfileentry_delete(void* self);

#endif
