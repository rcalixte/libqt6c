#pragma once
#ifndef SRC_EXTRAS_KARCHIVE_QT6C_LIBKRCC_H
#define SRC_EXTRAS_KARCHIVE_QT6C_LIBKRCC_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/krcc.html)

/// k_rcc_new constructs a new KRcc object.
///
/// @param filename const char*
///
KRcc* k_rcc_new(const char* filename);

/// [Upstream resources](https://api.kde.org/krcc.html)

/// k_rcc_new2 constructs a new KRcc object.
///
/// @param param1 KRcc*
///
KRcc* k_rcc_new2(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param sourceText const char*
///
const char* k_rcc_tr(const char* sourceText);

/// [Upstream resources](https://api.kde.org/krcc.html#doPrepareWriting)
///
/// @param self KRcc*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param size long long
/// @param perm mode_t
/// @param atime QDateTime*
/// @param mtime QDateTime*
/// @param ctime QDateTime*
///
bool k_rcc_do_prepare_writing(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime, void* mtime, void* ctime);

/// [Upstream resources](https://api.kde.org/krcc.html#doPrepareWriting)
///
/// Allows for overriding the related default method
///
/// @param self KRcc*
/// @param callback bool func(KRcc* self, const char* name, const char* user, const char* group, long long size, mode_t perm, QDateTime* atime, QDateTime* mtime, QDateTime* ctime)
///
void k_rcc_on_do_prepare_writing(void* self, bool (*callback)(void*, const char*, const char*, const char*, long long, mode_t, void*, void*, void*));

/// [Upstream resources](https://api.kde.org/krcc.html#doPrepareWriting)
///
/// Base class method implementation
///
/// @param self KRcc*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param size long long
/// @param perm mode_t
/// @param atime QDateTime*
/// @param mtime QDateTime*
/// @param ctime QDateTime*
///
bool k_rcc_qbase_do_prepare_writing(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime, void* mtime, void* ctime);

/// [Upstream resources](https://api.kde.org/krcc.html#doFinishWriting)
///
/// @param self KRcc*
/// @param size long long
///
bool k_rcc_do_finish_writing(void* self, long long size);

/// [Upstream resources](https://api.kde.org/krcc.html#doFinishWriting)
///
/// Allows for overriding the related default method
///
/// @param self KRcc*
/// @param callback bool func(KRcc* self, long long size)
///
void k_rcc_on_do_finish_writing(void* self, bool (*callback)(void*, long long));

/// [Upstream resources](https://api.kde.org/krcc.html#doFinishWriting)
///
/// Base class method implementation
///
/// @param self KRcc*
/// @param size long long
///
bool k_rcc_qbase_do_finish_writing(void* self, long long size);

/// [Upstream resources](https://api.kde.org/krcc.html#doWriteDir)
///
/// @param self KRcc*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param perm mode_t
/// @param atime QDateTime*
/// @param mtime QDateTime*
/// @param ctime QDateTime*
///
bool k_rcc_do_write_dir(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime);

/// [Upstream resources](https://api.kde.org/krcc.html#doWriteDir)
///
/// Allows for overriding the related default method
///
/// @param self KRcc*
/// @param callback bool func(KRcc* self, const char* name, const char* user, const char* group, mode_t perm, QDateTime* atime, QDateTime* mtime, QDateTime* ctime)
///
void k_rcc_on_do_write_dir(void* self, bool (*callback)(void*, const char*, const char*, const char*, mode_t, void*, void*, void*));

/// [Upstream resources](https://api.kde.org/krcc.html#doWriteDir)
///
/// Base class method implementation
///
/// @param self KRcc*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param perm mode_t
/// @param atime QDateTime*
/// @param mtime QDateTime*
/// @param ctime QDateTime*
///
bool k_rcc_qbase_do_write_dir(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime);

/// [Upstream resources](https://api.kde.org/krcc.html#doWriteSymLink)
///
/// @param self KRcc*
/// @param name const char*
/// @param target const char*
/// @param user const char*
/// @param group const char*
/// @param perm mode_t
/// @param atime QDateTime*
/// @param mtime QDateTime*
/// @param ctime QDateTime*
///
bool k_rcc_do_write_sym_link(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime);

/// [Upstream resources](https://api.kde.org/krcc.html#doWriteSymLink)
///
/// Allows for overriding the related default method
///
/// @param self KRcc*
/// @param callback bool func(KRcc* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, QDateTime* atime, QDateTime* mtime, QDateTime* ctime)
///
void k_rcc_on_do_write_sym_link(void* self, bool (*callback)(void*, const char*, const char*, const char*, const char*, mode_t, void*, void*, void*));

/// [Upstream resources](https://api.kde.org/krcc.html#doWriteSymLink)
///
/// Base class method implementation
///
/// @param self KRcc*
/// @param name const char*
/// @param target const char*
/// @param user const char*
/// @param group const char*
/// @param perm mode_t
/// @param atime QDateTime*
/// @param mtime QDateTime*
/// @param ctime QDateTime*
///
bool k_rcc_qbase_do_write_sym_link(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime);

/// [Upstream resources](https://api.kde.org/krcc.html#openArchive)
///
/// @param self KRcc*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
bool k_rcc_open_archive(void* self, int32_t mode);

/// [Upstream resources](https://api.kde.org/krcc.html#openArchive)
///
/// Allows for overriding the related default method
///
/// @param self KRcc*
/// @param callback bool func(KRcc* self, flag of enum QIODeviceBase__OpenModeFlag mode)
///
void k_rcc_on_open_archive(void* self, bool (*callback)(void*, int32_t));

/// [Upstream resources](https://api.kde.org/krcc.html#openArchive)
///
/// Base class method implementation
///
/// @param self KRcc*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
bool k_rcc_qbase_open_archive(void* self, int32_t mode);

/// [Upstream resources](https://api.kde.org/krcc.html#closeArchive)
///
/// @param self KRcc*
///
bool k_rcc_close_archive(void* self);

/// [Upstream resources](https://api.kde.org/krcc.html#closeArchive)
///
/// Allows for overriding the related default method
///
/// @param self KRcc*
/// @param callback bool func()
///
void k_rcc_on_close_archive(void* self, bool (*callback)());

/// [Upstream resources](https://api.kde.org/krcc.html#closeArchive)
///
/// Base class method implementation
///
/// @param self KRcc*
///
bool k_rcc_qbase_close_archive(void* self);

/// [Upstream resources](https://api.kde.org/krcc.html#virtual_hook)
///
/// @param self KRcc*
/// @param id int
/// @param data void*
///
void k_rcc_virtual_hook(void* self, int id, void* data);

/// [Upstream resources](https://api.kde.org/krcc.html#virtual_hook)
///
/// Allows for overriding the related default method
///
/// @param self KRcc*
/// @param callback void func(KRcc* self, int id, void* data)
///
void k_rcc_on_virtual_hook(void* self, void (*callback)(void*, int, void*));

/// [Upstream resources](https://api.kde.org/krcc.html#virtual_hook)
///
/// Base class method implementation
///
/// @param self KRcc*
/// @param id int
/// @param data void*
///
void k_rcc_qbase_virtual_hook(void* self, int id, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param sourceText const char*
/// @param disambiguation const char*
///
const char* k_rcc_tr2(const char* sourceText, const char* disambiguation);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param sourceText const char*
/// @param disambiguation const char*
/// @param n int
///
const char* k_rcc_tr3(const char* sourceText, const char* disambiguation, int n);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KRcc*
///
const char* k_rcc_error_string(void* self);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#isOpen)
///
/// @param self KRcc*
///
bool k_rcc_is_open(void* self);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#mode)
///
/// @param self KRcc*
///
/// @return flag of enum QIODeviceBase__OpenModeFlag
///
int32_t k_rcc_mode(void* self);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#device)
///
/// @param self KRcc*
///
QIODevice* k_rcc_device(void* self);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#fileName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KRcc*
///
const char* k_rcc_file_name(void* self);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#directory)
///
/// @param self KRcc*
///
const KArchiveDirectory* k_rcc_directory(void* self);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#addLocalFile)
///
/// @param self KRcc*
/// @param fileName const char*
/// @param destName const char*
///
bool k_rcc_add_local_file(void* self, const char* fileName, const char* destName);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#addLocalDirectory)
///
/// @param self KRcc*
/// @param path const char*
/// @param destName const char*
///
bool k_rcc_add_local_directory(void* self, const char* path, const char* destName);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeDir)
///
/// @param self KRcc*
/// @param name const char*
///
bool k_rcc_write_dir(void* self, const char* name);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
///
/// @param self KRcc*
/// @param name const char*
/// @param target const char*
///
bool k_rcc_write_sym_link(void* self, const char* name, const char* target);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeFile)
///
/// @param self KRcc*
/// @param name const char*
/// @param data char*
///
bool k_rcc_write_file(void* self, const char* name, char* data);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
///
/// @param self KRcc*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param size long long
///
bool k_rcc_prepare_writing(void* self, const char* name, const char* user, const char* group, long long size);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeData)
///
/// @param self KRcc*
/// @param data const char*
/// @param size long long
///
bool k_rcc_write_data(void* self, const char* data, long long size);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeData)
///
/// @param self KRcc*
/// @param data char*
///
bool k_rcc_write_data2(void* self, char* data);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#finishWriting)
///
/// @param self KRcc*
/// @param size long long
///
bool k_rcc_finish_writing(void* self, long long size);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeDir)
///
/// @param self KRcc*
/// @param name const char*
/// @param user const char*
///
bool k_rcc_write_dir2(void* self, const char* name, const char* user);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeDir)
///
/// @param self KRcc*
/// @param name const char*
/// @param user const char*
/// @param group const char*
///
bool k_rcc_write_dir3(void* self, const char* name, const char* user, const char* group);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeDir)
///
/// @param self KRcc*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param perm mode_t
///
bool k_rcc_write_dir4(void* self, const char* name, const char* user, const char* group, mode_t perm);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeDir)
///
/// @param self KRcc*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param perm mode_t
/// @param atime QDateTime*
///
bool k_rcc_write_dir5(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeDir)
///
/// @param self KRcc*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param perm mode_t
/// @param atime QDateTime*
/// @param mtime QDateTime*
///
bool k_rcc_write_dir6(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime, void* mtime);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeDir)
///
/// @param self KRcc*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param perm mode_t
/// @param atime QDateTime*
/// @param mtime QDateTime*
/// @param ctime QDateTime*
///
bool k_rcc_write_dir7(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
///
/// @param self KRcc*
/// @param name const char*
/// @param target const char*
/// @param user const char*
///
bool k_rcc_write_sym_link3(void* self, const char* name, const char* target, const char* user);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
///
/// @param self KRcc*
/// @param name const char*
/// @param target const char*
/// @param user const char*
/// @param group const char*
///
bool k_rcc_write_sym_link4(void* self, const char* name, const char* target, const char* user, const char* group);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
///
/// @param self KRcc*
/// @param name const char*
/// @param target const char*
/// @param user const char*
/// @param group const char*
/// @param perm mode_t
///
bool k_rcc_write_sym_link5(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
///
/// @param self KRcc*
/// @param name const char*
/// @param target const char*
/// @param user const char*
/// @param group const char*
/// @param perm mode_t
/// @param atime QDateTime*
///
bool k_rcc_write_sym_link6(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
///
/// @param self KRcc*
/// @param name const char*
/// @param target const char*
/// @param user const char*
/// @param group const char*
/// @param perm mode_t
/// @param atime QDateTime*
/// @param mtime QDateTime*
///
bool k_rcc_write_sym_link7(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime, void* mtime);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
///
/// @param self KRcc*
/// @param name const char*
/// @param target const char*
/// @param user const char*
/// @param group const char*
/// @param perm mode_t
/// @param atime QDateTime*
/// @param mtime QDateTime*
/// @param ctime QDateTime*
///
bool k_rcc_write_sym_link8(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeFile)
///
/// @param self KRcc*
/// @param name const char*
/// @param data char*
/// @param perm mode_t
///
bool k_rcc_write_file3(void* self, const char* name, char* data, mode_t perm);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeFile)
///
/// @param self KRcc*
/// @param name const char*
/// @param data char*
/// @param perm mode_t
/// @param user const char*
///
bool k_rcc_write_file4(void* self, const char* name, char* data, mode_t perm, const char* user);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeFile)
///
/// @param self KRcc*
/// @param name const char*
/// @param data char*
/// @param perm mode_t
/// @param user const char*
/// @param group const char*
///
bool k_rcc_write_file5(void* self, const char* name, char* data, mode_t perm, const char* user, const char* group);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeFile)
///
/// @param self KRcc*
/// @param name const char*
/// @param data char*
/// @param perm mode_t
/// @param user const char*
/// @param group const char*
/// @param atime QDateTime*
///
bool k_rcc_write_file6(void* self, const char* name, char* data, mode_t perm, const char* user, const char* group, void* atime);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeFile)
///
/// @param self KRcc*
/// @param name const char*
/// @param data char*
/// @param perm mode_t
/// @param user const char*
/// @param group const char*
/// @param atime QDateTime*
/// @param mtime QDateTime*
///
bool k_rcc_write_file7(void* self, const char* name, char* data, mode_t perm, const char* user, const char* group, void* atime, void* mtime);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#writeFile)
///
/// @param self KRcc*
/// @param name const char*
/// @param data char*
/// @param perm mode_t
/// @param user const char*
/// @param group const char*
/// @param atime QDateTime*
/// @param mtime QDateTime*
/// @param ctime QDateTime*
///
bool k_rcc_write_file8(void* self, const char* name, char* data, mode_t perm, const char* user, const char* group, void* atime, void* mtime, void* ctime);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
///
/// @param self KRcc*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param size long long
/// @param perm mode_t
///
bool k_rcc_prepare_writing5(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
///
/// @param self KRcc*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param size long long
/// @param perm mode_t
/// @param atime QDateTime*
///
bool k_rcc_prepare_writing6(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
///
/// @param self KRcc*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param size long long
/// @param perm mode_t
/// @param atime QDateTime*
/// @param mtime QDateTime*
///
bool k_rcc_prepare_writing7(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime, void* mtime);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
///
/// @param self KRcc*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param size long long
/// @param perm mode_t
/// @param atime QDateTime*
/// @param mtime QDateTime*
/// @param ctime QDateTime*
///
bool k_rcc_prepare_writing8(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime, void* mtime, void* ctime);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRcc*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
bool k_rcc_open(void* self, int32_t mode);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRcc*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
bool k_rcc_qbase_open(void* self, int32_t mode);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRcc*
/// @param callback bool func(KRcc* self, flag of enum QIODeviceBase__OpenModeFlag mode)
///
void k_rcc_on_open(void* self, bool (*callback)(void*, int32_t));

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#close)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRcc*
///
bool k_rcc_close(void* self);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#close)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRcc*
///
bool k_rcc_qbase_close(void* self);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#close)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRcc*
/// @param callback bool func()
///
void k_rcc_on_close(void* self, bool (*callback)());

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#rootDir)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRcc*
///
KArchiveDirectory* k_rcc_root_dir(void* self);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#rootDir)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRcc*
///
KArchiveDirectory* k_rcc_qbase_root_dir(void* self);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#rootDir)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRcc*
/// @param callback KArchiveDirectory* func()
///
void k_rcc_on_root_dir(void* self, KArchiveDirectory* (*callback)());

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#doWriteData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRcc*
/// @param data const char*
/// @param size long long
///
bool k_rcc_do_write_data(void* self, const char* data, long long size);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#doWriteData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRcc*
/// @param data const char*
/// @param size long long
///
bool k_rcc_qbase_do_write_data(void* self, const char* data, long long size);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#doWriteData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRcc*
/// @param callback bool func(KRcc* self, const char* data, long long size)
///
void k_rcc_on_do_write_data(void* self, bool (*callback)(void*, const char*, long long));

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#createDevice)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRcc*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
bool k_rcc_create_device(void* self, int32_t mode);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#createDevice)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRcc*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
bool k_rcc_qbase_create_device(void* self, int32_t mode);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#createDevice)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRcc*
/// @param callback bool func(KRcc* self, flag of enum QIODeviceBase__OpenModeFlag mode)
///
void k_rcc_on_create_device(void* self, bool (*callback)(void*, int32_t));

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRcc*
/// @param errorStr const char*
///
void k_rcc_set_error_string(void* self, const char* errorStr);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#setErrorString)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRcc*
/// @param errorStr const char*
///
void k_rcc_qbase_set_error_string(void* self, const char* errorStr);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#setErrorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRcc*
/// @param callback void func(KRcc* self, const char* errorStr)
///
void k_rcc_on_set_error_string(void* self, void (*callback)(void*, const char*));

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#findOrCreate)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRcc*
/// @param path const char*
///
KArchiveDirectory* k_rcc_find_or_create(void* self, const char* path);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#findOrCreate)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRcc*
/// @param path const char*
///
KArchiveDirectory* k_rcc_qbase_find_or_create(void* self, const char* path);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#findOrCreate)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRcc*
/// @param callback KArchiveDirectory* func(KRcc* self, const char* path)
///
void k_rcc_on_find_or_create(void* self, KArchiveDirectory* (*callback)(void*, const char*));

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#setDevice)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRcc*
/// @param dev QIODevice*
///
void k_rcc_set_device(void* self, void* dev);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#setDevice)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRcc*
/// @param dev QIODevice*
///
void k_rcc_qbase_set_device(void* self, void* dev);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#setDevice)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRcc*
/// @param callback void func(KRcc* self, QIODevice* dev)
///
void k_rcc_on_set_device(void* self, void (*callback)(void*, void*));

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#setRootDir)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRcc*
/// @param rootDir KArchiveDirectory*
///
void k_rcc_set_root_dir(void* self, void* rootDir);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#setRootDir)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRcc*
/// @param rootDir KArchiveDirectory*
///
void k_rcc_qbase_set_root_dir(void* self, void* rootDir);

/// Inherited from KArchive
///
/// [Upstream resources](https://api.kde.org/karchive.html#setRootDir)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRcc*
/// @param callback void func(KRcc* self, KArchiveDirectory* rootDir)
///
void k_rcc_on_set_root_dir(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/krcc.html#dtor.KRcc)
///
/// Delete this object from C++ memory.
///
/// @param self KRcc*
///
void k_rcc_delete(void* self);

#endif
