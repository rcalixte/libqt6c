#pragma once
#ifndef SRC_EXTRAS_KARCHIVE_QT6C_LIBKZIPFILEENTRY_H
#define SRC_EXTRAS_KARCHIVE_QT6C_LIBKZIPFILEENTRY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
/// @param start long long
/// @param uncompressedSize long long
/// @param encoding int
/// @param compressedSize long long
///
KZipFileEntry* k_zipfileentry_new(void* zip, const char* name, int access, void* date, const char* user, const char* group, const char* symlink, const char* path, long long start, long long uncompressedSize, int encoding, long long compressedSize);

/// [Upstream resources](https://api.kde.org/kzipfileentry.html)

/// k_zipfileentry_new2 constructs a new KZipFileEntry object.
///
/// @param param1 KZipFileEntry*
///
KZipFileEntry* k_zipfileentry_new2(void* param1);

/// [Upstream resources](https://api.kde.org/kzipfileentry.html#encoding)
///
/// @param self KZipFileEntry*
///
int32_t k_zipfileentry_encoding(void* self);

/// [Upstream resources](https://api.kde.org/kzipfileentry.html#compressedSize)
///
/// @param self KZipFileEntry*
///
long long k_zipfileentry_compressed_size(void* self);

/// [Upstream resources](https://api.kde.org/kzipfileentry.html#setCompressedSize)
///
/// @param self KZipFileEntry*
/// @param compressedSize long long
///
void k_zipfileentry_set_compressed_size(void* self, long long compressedSize);

/// [Upstream resources](https://api.kde.org/kzipfileentry.html#setHeaderStart)
///
/// @param self KZipFileEntry*
/// @param headerstart long long
///
void k_zipfileentry_set_header_start(void* self, long long headerstart);

/// [Upstream resources](https://api.kde.org/kzipfileentry.html#headerStart)
///
/// @param self KZipFileEntry*
///
long long k_zipfileentry_header_start(void* self);

/// [Upstream resources](https://api.kde.org/kzipfileentry.html#crc32)
///
/// @param self KZipFileEntry*
///
uint64_t k_zipfileentry_crc32(void* self);

/// [Upstream resources](https://api.kde.org/kzipfileentry.html#setCRC32)
///
/// @param self KZipFileEntry*
/// @param crc32 uint64_t
///
void k_zipfileentry_set_c_r_c32(void* self, uint64_t crc32);

/// [Upstream resources](https://api.kde.org/kzipfileentry.html#path)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KZipFileEntry*
///
const char* k_zipfileentry_path(void* self);

/// [Upstream resources](https://api.kde.org/kzipfileentry.html#data)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KZipFileEntry*
///
char* k_zipfileentry_data(void* self);

/// [Upstream resources](https://api.kde.org/kzipfileentry.html#data)
///
/// Allows for overriding the related default method
///
/// @param self KZipFileEntry*
/// @param callback libqt_string func()
///
void k_zipfileentry_on_data(void* self, libqt_string (*callback)());

/// @warning DEPRECATED: Use `k_zipfileentry_super_data` instead
///
#define k_zipfileentry_qbase_data k_zipfileentry_super_data

/// [Upstream resources](https://api.kde.org/kzipfileentry.html#data)
///
/// Base class method implementation
///
/// @param self KZipFileEntry*
///
char* k_zipfileentry_super_data(void* self);

/// [Upstream resources](https://api.kde.org/kzipfileentry.html#createDevice)
///
/// @param self KZipFileEntry*
///
QIODevice* k_zipfileentry_create_device(void* self);

/// [Upstream resources](https://api.kde.org/kzipfileentry.html#createDevice)
///
/// Allows for overriding the related default method
///
/// @param self KZipFileEntry*
/// @param callback QIODevice* func()
///
void k_zipfileentry_on_create_device(void* self, QIODevice* (*callback)());

/// @warning DEPRECATED: Use `k_zipfileentry_super_create_device` instead
///
#define k_zipfileentry_qbase_create_device k_zipfileentry_super_create_device

/// [Upstream resources](https://api.kde.org/kzipfileentry.html#createDevice)
///
/// Base class method implementation
///
/// @param self KZipFileEntry*
///
QIODevice* k_zipfileentry_super_create_device(void* self);

/// Inherited from KArchiveFile
///
/// [Upstream resources](https://api.kde.org/karchivefile.html#position)
///
/// @param self KZipFileEntry*
///
long long k_zipfileentry_position(void* self);

/// Inherited from KArchiveFile
///
/// [Upstream resources](https://api.kde.org/karchivefile.html#size)
///
/// @param self KZipFileEntry*
///
long long k_zipfileentry_size(void* self);

/// Inherited from KArchiveFile
///
/// [Upstream resources](https://api.kde.org/karchivefile.html#setSize)
///
/// @param self KZipFileEntry*
/// @param s long long
///
void k_zipfileentry_set_size(void* self, long long s);

/// Inherited from KArchiveFile
///
/// [Upstream resources](https://api.kde.org/karchivefile.html#copyTo)
///
/// @param self KZipFileEntry*
/// @param dest const char*
///
bool k_zipfileentry_copy_to(void* self, const char* dest);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#date)
///
/// @param self KZipFileEntry*
///
QDateTime* k_zipfileentry_date(void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KZipFileEntry*
///
const char* k_zipfileentry_name(void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#permissions)
///
/// @param self KZipFileEntry*
///
mode_t k_zipfileentry_permissions(void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#user)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KZipFileEntry*
///
const char* k_zipfileentry_user(void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#group)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KZipFileEntry*
///
const char* k_zipfileentry_group(void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#symLinkTarget)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KZipFileEntry*
///
const char* k_zipfileentry_sym_link_target(void* self);

/// Inherited from KArchiveFile
///
/// [Upstream resources](https://api.kde.org/karchivefile.html#isFile)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KZipFileEntry*
///
bool k_zipfileentry_is_file(void* self);

/// @warning DEPRECATED: Use `k_zipfileentry_super_is_file` instead
///
#define k_zipfileentry_qbase_is_file k_zipfileentry_super_is_file

/// Inherited from KArchiveFile
///
/// [Upstream resources](https://api.kde.org/karchivefile.html#isFile)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KZipFileEntry*
///
bool k_zipfileentry_super_is_file(void* self);

/// Inherited from KArchiveFile
///
/// [Upstream resources](https://api.kde.org/karchivefile.html#isFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KZipFileEntry*
/// @param callback bool func()
///
void k_zipfileentry_on_is_file(void* self, bool (*callback)());

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

/// @warning DEPRECATED: Use `k_zipfileentry_super_virtual_hook` instead
///
#define k_zipfileentry_qbase_virtual_hook k_zipfileentry_super_virtual_hook

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
/// @param self KZipFileEntry*
///
bool k_zipfileentry_is_directory(void* self);

/// @warning DEPRECATED: Use `k_zipfileentry_super_is_directory` instead
///
#define k_zipfileentry_qbase_is_directory k_zipfileentry_super_is_directory

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#isDirectory)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KZipFileEntry*
///
bool k_zipfileentry_super_is_directory(void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#isDirectory)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KZipFileEntry*
/// @param callback bool func()
///
void k_zipfileentry_on_is_directory(void* self, bool (*callback)());

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KZipFileEntry*
///
KArchive* k_zipfileentry_archive(void* self);

/// @warning DEPRECATED: Use `k_zipfileentry_super_archive` instead
///
#define k_zipfileentry_qbase_archive k_zipfileentry_super_archive

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KZipFileEntry*
///
KArchive* k_zipfileentry_super_archive(void* self);

/// Inherited from KArchiveEntry
///
/// [Upstream resources](https://api.kde.org/karchiveentry.html#archive)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KZipFileEntry*
/// @param callback KArchive* func()
///
void k_zipfileentry_on_archive(void* self, KArchive* (*callback)());

/// [Upstream resources](https://api.kde.org/kzipfileentry.html#dtor.KZipFileEntry)
///
/// Delete this object from C++ memory.
///
/// @param self KZipFileEntry*
///
void k_zipfileentry_delete(void* self);

#endif
