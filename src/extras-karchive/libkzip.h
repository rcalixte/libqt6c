#pragma once
#ifndef SRC_EXTRAS_KARCHIVE_QT6C_LIBKZIP_H
#define SRC_EXTRAS_KARCHIVE_QT6C_LIBKZIP_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kzip.html)

/// k_zip_new constructs a new KZip object.
///
/// @param filename const char*
///
KZip* k_zip_new(const char* filename);

/// [Upstream resources](https://api.kde.org/kzip.html)

/// k_zip_new2 constructs a new KZip object.
///
/// @param dev QIODevice*
///
KZip* k_zip_new2(void* dev);

/// [Upstream resources](https://api.kde.org/kzip.html)

/// k_zip_new3 constructs a new KZip object.
///
/// @param param1 KZip*
///
KZip* k_zip_new3(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param sourceText const char*
///
const char* k_zip_tr(const char* sourceText);

/// [Upstream resources](https://api.kde.org/kzip.html#setExtraField)
///
/// @param self KZip*
/// @param ef enum KZip__ExtraField
///
void k_zip_set_extra_field(void* self, int32_t ef);

/// [Upstream resources](https://api.kde.org/kzip.html#extraField)
///
/// @param self KZip*
///
/// @return enum KZip__ExtraField
///
int32_t k_zip_extra_field(void* self);

/// [Upstream resources](https://api.kde.org/kzip.html#setCompression)
///
/// @param self KZip*
/// @param c enum KZip__Compression
///
void k_zip_set_compression(void* self, int32_t c);

/// [Upstream resources](https://api.kde.org/kzip.html#compression)
///
/// @param self KZip*
///
/// @return enum KZip__Compression
///
int32_t k_zip_compression(void* self);

/// [Upstream resources](https://api.kde.org/kzip.html#doWriteSymLink)
///
/// @param self KZip*
/// @param name const char*
/// @param target const char*
/// @param user const char*
/// @param group const char*
/// @param perm mode_t
/// @param atime QDateTime*
/// @param mtime QDateTime*
/// @param ctime QDateTime*
///
bool k_zip_do_write_sym_link(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime);

/// [Upstream resources](https://api.kde.org/kzip.html#doWriteSymLink)
///
/// Allows for overriding the related default method
///
/// @param self KZip*
/// @param callback bool func(KZip* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, QDateTime* atime, QDateTime* mtime, QDateTime* ctime)
///
void k_zip_on_do_write_sym_link(void* self, bool (*callback)(void*, const char*, const char*, const char*, const char*, mode_t, void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kzip.html#doWriteSymLink)
///
/// Base class method implementation
///
/// @param self KZip*
/// @param name const char*
/// @param target const char*
/// @param user const char*
/// @param group const char*
/// @param perm mode_t
/// @param atime QDateTime*
/// @param mtime QDateTime*
/// @param ctime QDateTime*
///
bool k_zip_qbase_do_write_sym_link(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime);

/// [Upstream resources](https://api.kde.org/kzip.html#doPrepareWriting)
///
/// @param self KZip*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param size long long
/// @param perm mode_t
/// @param atime QDateTime*
/// @param mtime QDateTime*
/// @param creationTime QDateTime*
///
bool k_zip_do_prepare_writing(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime, void* mtime, void* creationTime);

/// [Upstream resources](https://api.kde.org/kzip.html#doPrepareWriting)
///
/// Allows for overriding the related default method
///
/// @param self KZip*
/// @param callback bool func(KZip* self, const char* name, const char* user, const char* group, long long size, mode_t perm, QDateTime* atime, QDateTime* mtime, QDateTime* creationTime)
///
void k_zip_on_do_prepare_writing(void* self, bool (*callback)(void*, const char*, const char*, const char*, long long, mode_t, void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kzip.html#doPrepareWriting)
///
/// Base class method implementation
///
/// @param self KZip*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param size long long
/// @param perm mode_t
/// @param atime QDateTime*
/// @param mtime QDateTime*
/// @param creationTime QDateTime*
///
bool k_zip_qbase_do_prepare_writing(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime, void* mtime, void* creationTime);

/// [Upstream resources](https://api.kde.org/kzip.html#doFinishWriting)
///
/// @param self KZip*
/// @param size long long
///
bool k_zip_do_finish_writing(void* self, long long size);

/// [Upstream resources](https://api.kde.org/kzip.html#doFinishWriting)
///
/// Allows for overriding the related default method
///
/// @param self KZip*
/// @param callback bool func(KZip* self, long long size)
///
void k_zip_on_do_finish_writing(void* self, bool (*callback)(void*, long long));

/// [Upstream resources](https://api.kde.org/kzip.html#doFinishWriting)
///
/// Base class method implementation
///
/// @param self KZip*
/// @param size long long
///
bool k_zip_qbase_do_finish_writing(void* self, long long size);

/// [Upstream resources](https://api.kde.org/kzip.html#doWriteData)
///
/// @param self KZip*
/// @param data const char*
/// @param size long long
///
bool k_zip_do_write_data(void* self, const char* data, long long size);

/// [Upstream resources](https://api.kde.org/kzip.html#doWriteData)
///
/// Allows for overriding the related default method
///
/// @param self KZip*
/// @param callback bool func(KZip* self, const char* data, long long size)
///
void k_zip_on_do_write_data(void* self, bool (*callback)(void*, const char*, long long));

/// [Upstream resources](https://api.kde.org/kzip.html#doWriteData)
///
/// Base class method implementation
///
/// @param self KZip*
/// @param data const char*
/// @param size long long
///
bool k_zip_qbase_do_write_data(void* self, const char* data, long long size);

/// [Upstream resources](https://api.kde.org/kzip.html#openArchive)
///
/// @param self KZip*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
bool k_zip_open_archive(void* self, int32_t mode);

/// [Upstream resources](https://api.kde.org/kzip.html#openArchive)
///
/// Allows for overriding the related default method
///
/// @param self KZip*
/// @param callback bool func(KZip* self, flag of enum QIODeviceBase__OpenModeFlag mode)
///
void k_zip_on_open_archive(void* self, bool (*callback)(void*, int32_t));

/// [Upstream resources](https://api.kde.org/kzip.html#openArchive)
///
/// Base class method implementation
///
/// @param self KZip*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
bool k_zip_qbase_open_archive(void* self, int32_t mode);

/// [Upstream resources](https://api.kde.org/kzip.html#closeArchive)
///
/// @param self KZip*
///
bool k_zip_close_archive(void* self);

/// [Upstream resources](https://api.kde.org/kzip.html#closeArchive)
///
/// Allows for overriding the related default method
///
/// @param self KZip*
/// @param callback bool func()
///
void k_zip_on_close_archive(void* self, bool (*callback)());

/// [Upstream resources](https://api.kde.org/kzip.html#closeArchive)
///
/// Base class method implementation
///
/// @param self KZip*
///
bool k_zip_qbase_close_archive(void* self);

/// [Upstream resources](https://api.kde.org/kzip.html#doWriteDir)
///
/// @param self KZip*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param perm mode_t
/// @param atime QDateTime*
/// @param mtime QDateTime*
/// @param ctime QDateTime*
///
bool k_zip_do_write_dir(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime);

/// [Upstream resources](https://api.kde.org/kzip.html#doWriteDir)
///
/// Allows for overriding the related default method
///
/// @param self KZip*
/// @param callback bool func(KZip* self, const char* name, const char* user, const char* group, mode_t perm, QDateTime* atime, QDateTime* mtime, QDateTime* ctime)
///
void k_zip_on_do_write_dir(void* self, bool (*callback)(void*, const char*, const char*, const char*, mode_t, void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kzip.html#doWriteDir)
///
/// Base class method implementation
///
/// @param self KZip*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param perm mode_t
/// @param atime QDateTime*
/// @param mtime QDateTime*
/// @param ctime QDateTime*
///
bool k_zip_qbase_do_write_dir(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime);

/// [Upstream resources](https://api.kde.org/kzip.html#virtual_hook)
///
/// @param self KZip*
/// @param id int
/// @param data void*
///
void k_zip_virtual_hook(void* self, int id, void* data);

/// [Upstream resources](https://api.kde.org/kzip.html#virtual_hook)
///
/// Allows for overriding the related default method
///
/// @param self KZip*
/// @param callback void func(KZip* self, int id, void* data)
///
void k_zip_on_virtual_hook(void* self, void (*callback)(void*, int, void*));

/// [Upstream resources](https://api.kde.org/kzip.html#virtual_hook)
///
/// Base class method implementation
///
/// @param self KZip*
/// @param id int
/// @param data void*
///
void k_zip_qbase_virtual_hook(void* self, int id, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param sourceText const char*
/// @param disambiguation const char*
///
const char* k_zip_tr2(const char* sourceText, const char* disambiguation);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param sourceText const char*
/// @param disambiguation const char*
/// @param n int
///
const char* k_zip_tr3(const char* sourceText, const char* disambiguation, int n);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KZip*
///
const char* k_zip_error_string(void* self);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#isOpen)
///
/// @param self KZip*
///
bool k_zip_is_open(void* self);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#mode)
///
/// @param self KZip*
///
/// @return flag of enum QIODeviceBase__OpenModeFlag
///
int32_t k_zip_mode(void* self);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#device)
///
/// @param self KZip*
///
QIODevice* k_zip_device(void* self);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#fileName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KZip*
///
const char* k_zip_file_name(void* self);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#directory)
///
/// @param self KZip*
///
const KArchiveDirectory* k_zip_directory(void* self);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#addLocalFile)
///
/// @param self KZip*
/// @param fileName const char*
/// @param destName const char*
///
bool k_zip_add_local_file(void* self, const char* fileName, const char* destName);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#addLocalDirectory)
///
/// @param self KZip*
/// @param path const char*
/// @param destName const char*
///
bool k_zip_add_local_directory(void* self, const char* path, const char* destName);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeDir)
///
/// @param self KZip*
/// @param name const char*
///
bool k_zip_write_dir(void* self, const char* name);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
///
/// @param self KZip*
/// @param name const char*
/// @param target const char*
///
bool k_zip_write_sym_link(void* self, const char* name, const char* target);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeFile)
///
/// @param self KZip*
/// @param name const char*
/// @param data const char*
///
bool k_zip_write_file(void* self, const char* name, const char* data);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
///
/// @param self KZip*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param size long long
///
bool k_zip_prepare_writing(void* self, const char* name, const char* user, const char* group, long long size);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeData)
///
/// @param self KZip*
/// @param data const char*
/// @param size long long
///
bool k_zip_write_data(void* self, const char* data, long long size);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeData)
///
/// @param self KZip*
/// @param data const char*
///
bool k_zip_write_data2(void* self, const char* data);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#finishWriting)
///
/// @param self KZip*
/// @param size long long
///
bool k_zip_finish_writing(void* self, long long size);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeDir)
///
/// @param self KZip*
/// @param name const char*
/// @param user const char*
///
bool k_zip_write_dir2(void* self, const char* name, const char* user);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeDir)
///
/// @param self KZip*
/// @param name const char*
/// @param user const char*
/// @param group const char*
///
bool k_zip_write_dir3(void* self, const char* name, const char* user, const char* group);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeDir)
///
/// @param self KZip*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param perm mode_t
///
bool k_zip_write_dir4(void* self, const char* name, const char* user, const char* group, mode_t perm);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeDir)
///
/// @param self KZip*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param perm mode_t
/// @param atime QDateTime*
///
bool k_zip_write_dir5(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeDir)
///
/// @param self KZip*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param perm mode_t
/// @param atime QDateTime*
/// @param mtime QDateTime*
///
bool k_zip_write_dir6(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime, void* mtime);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeDir)
///
/// @param self KZip*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param perm mode_t
/// @param atime QDateTime*
/// @param mtime QDateTime*
/// @param ctime QDateTime*
///
bool k_zip_write_dir7(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
///
/// @param self KZip*
/// @param name const char*
/// @param target const char*
/// @param user const char*
///
bool k_zip_write_sym_link3(void* self, const char* name, const char* target, const char* user);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
///
/// @param self KZip*
/// @param name const char*
/// @param target const char*
/// @param user const char*
/// @param group const char*
///
bool k_zip_write_sym_link4(void* self, const char* name, const char* target, const char* user, const char* group);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
///
/// @param self KZip*
/// @param name const char*
/// @param target const char*
/// @param user const char*
/// @param group const char*
/// @param perm mode_t
///
bool k_zip_write_sym_link5(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
///
/// @param self KZip*
/// @param name const char*
/// @param target const char*
/// @param user const char*
/// @param group const char*
/// @param perm mode_t
/// @param atime QDateTime*
///
bool k_zip_write_sym_link6(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
///
/// @param self KZip*
/// @param name const char*
/// @param target const char*
/// @param user const char*
/// @param group const char*
/// @param perm mode_t
/// @param atime QDateTime*
/// @param mtime QDateTime*
///
bool k_zip_write_sym_link7(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime, void* mtime);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
///
/// @param self KZip*
/// @param name const char*
/// @param target const char*
/// @param user const char*
/// @param group const char*
/// @param perm mode_t
/// @param atime QDateTime*
/// @param mtime QDateTime*
/// @param ctime QDateTime*
///
bool k_zip_write_sym_link8(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeFile)
///
/// @param self KZip*
/// @param name const char*
/// @param data const char*
/// @param perm mode_t
///
bool k_zip_write_file3(void* self, const char* name, const char* data, mode_t perm);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeFile)
///
/// @param self KZip*
/// @param name const char*
/// @param data const char*
/// @param perm mode_t
/// @param user const char*
///
bool k_zip_write_file4(void* self, const char* name, const char* data, mode_t perm, const char* user);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeFile)
///
/// @param self KZip*
/// @param name const char*
/// @param data const char*
/// @param perm mode_t
/// @param user const char*
/// @param group const char*
///
bool k_zip_write_file5(void* self, const char* name, const char* data, mode_t perm, const char* user, const char* group);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeFile)
///
/// @param self KZip*
/// @param name const char*
/// @param data const char*
/// @param perm mode_t
/// @param user const char*
/// @param group const char*
/// @param atime QDateTime*
///
bool k_zip_write_file6(void* self, const char* name, const char* data, mode_t perm, const char* user, const char* group, void* atime);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeFile)
///
/// @param self KZip*
/// @param name const char*
/// @param data const char*
/// @param perm mode_t
/// @param user const char*
/// @param group const char*
/// @param atime QDateTime*
/// @param mtime QDateTime*
///
bool k_zip_write_file7(void* self, const char* name, const char* data, mode_t perm, const char* user, const char* group, void* atime, void* mtime);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeFile)
///
/// @param self KZip*
/// @param name const char*
/// @param data const char*
/// @param perm mode_t
/// @param user const char*
/// @param group const char*
/// @param atime QDateTime*
/// @param mtime QDateTime*
/// @param ctime QDateTime*
///
bool k_zip_write_file8(void* self, const char* name, const char* data, mode_t perm, const char* user, const char* group, void* atime, void* mtime, void* ctime);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
///
/// @param self KZip*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param size long long
/// @param perm mode_t
///
bool k_zip_prepare_writing5(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
///
/// @param self KZip*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param size long long
/// @param perm mode_t
/// @param atime QDateTime*
///
bool k_zip_prepare_writing6(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
///
/// @param self KZip*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param size long long
/// @param perm mode_t
/// @param atime QDateTime*
/// @param mtime QDateTime*
///
bool k_zip_prepare_writing7(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime, void* mtime);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
///
/// @param self KZip*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param size long long
/// @param perm mode_t
/// @param atime QDateTime*
/// @param mtime QDateTime*
/// @param ctime QDateTime*
///
bool k_zip_prepare_writing8(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime, void* mtime, void* ctime);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KZip*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
bool k_zip_open(void* self, int32_t mode);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KZip*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
bool k_zip_qbase_open(void* self, int32_t mode);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KZip*
/// @param callback bool func(KZip* self, flag of enum QIODeviceBase__OpenModeFlag mode)
///
void k_zip_on_open(void* self, bool (*callback)(void*, int32_t));

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#close)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KZip*
///
bool k_zip_close(void* self);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#close)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KZip*
///
bool k_zip_qbase_close(void* self);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#close)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KZip*
/// @param callback bool func()
///
void k_zip_on_close(void* self, bool (*callback)());

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#rootDir)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KZip*
///
KArchiveDirectory* k_zip_root_dir(void* self);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#rootDir)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KZip*
///
KArchiveDirectory* k_zip_qbase_root_dir(void* self);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#rootDir)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KZip*
/// @param callback KArchiveDirectory* func()
///
void k_zip_on_root_dir(void* self, KArchiveDirectory* (*callback)());

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#createDevice)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KZip*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
bool k_zip_create_device(void* self, int32_t mode);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#createDevice)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KZip*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
bool k_zip_qbase_create_device(void* self, int32_t mode);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#createDevice)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KZip*
/// @param callback bool func(KZip* self, flag of enum QIODeviceBase__OpenModeFlag mode)
///
void k_zip_on_create_device(void* self, bool (*callback)(void*, int32_t));

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KZip*
/// @param errorStr const char*
///
void k_zip_set_error_string(void* self, const char* errorStr);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#setErrorString)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KZip*
/// @param errorStr const char*
///
void k_zip_qbase_set_error_string(void* self, const char* errorStr);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#setErrorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KZip*
/// @param callback void func(KZip* self, const char* errorStr)
///
void k_zip_on_set_error_string(void* self, void (*callback)(void*, const char*));

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#findOrCreate)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KZip*
/// @param path const char*
///
KArchiveDirectory* k_zip_find_or_create(void* self, const char* path);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#findOrCreate)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KZip*
/// @param path const char*
///
KArchiveDirectory* k_zip_qbase_find_or_create(void* self, const char* path);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#findOrCreate)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KZip*
/// @param callback KArchiveDirectory* func(KZip* self, const char* path)
///
void k_zip_on_find_or_create(void* self, KArchiveDirectory* (*callback)(void*, const char*));

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#setDevice)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KZip*
/// @param dev QIODevice*
///
void k_zip_set_device(void* self, void* dev);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#setDevice)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KZip*
/// @param dev QIODevice*
///
void k_zip_qbase_set_device(void* self, void* dev);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#setDevice)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KZip*
/// @param callback void func(KZip* self, QIODevice* dev)
///
void k_zip_on_set_device(void* self, void (*callback)(void*, void*));

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#setRootDir)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KZip*
/// @param rootDir KArchiveDirectory*
///
void k_zip_set_root_dir(void* self, void* rootDir);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#setRootDir)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KZip*
/// @param rootDir KArchiveDirectory*
///
void k_zip_qbase_set_root_dir(void* self, void* rootDir);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#setRootDir)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KZip*
/// @param callback void func(KZip* self, KArchiveDirectory* rootDir)
///
void k_zip_on_set_root_dir(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kzip.html#dtor.KZip)
///
/// Delete this object from C++ memory.
///
/// @param self KZip*
///
void k_zip_delete(void* self);

/// [Upstream resources](https://api.kde.org/kzip.html#public-types)

typedef enum {
    KZIP_EXTRAFIELD_NOEXTRAFIELD = 0,
    KZIP_EXTRAFIELD_MODIFICATIONTIME = 1,
    KZIP_EXTRAFIELD_DEFAULTEXTRAFIELD = 1
} KZip__ExtraField;

/// [Upstream resources](https://api.kde.org/kzip.html#public-types)

typedef enum {
    KZIP_COMPRESSION_NOCOMPRESSION = 0,
    KZIP_COMPRESSION_DEFLATECOMPRESSION = 1
} KZip__Compression;

#endif
