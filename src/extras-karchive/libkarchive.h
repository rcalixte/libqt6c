#pragma once
#ifndef SRC_EXTRAS_KARCHIVE_QT6C_LIBKARCHIVE_H
#define SRC_EXTRAS_KARCHIVE_QT6C_LIBKARCHIVE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/karchive.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param sourceText const char*
///
const char* k_archive_tr(const char* sourceText);

/// [Upstream resources](https://api.kde.org/karchive.html#open)
///
/// @param self KArchive*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
bool k_archive_open(void* self, int32_t mode);

/// [Upstream resources](https://api.kde.org/karchive.html#close)
///
/// @param self KArchive*
///
bool k_archive_close(void* self);

/// [Upstream resources](https://api.kde.org/karchive.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KArchive*
///
const char* k_archive_error_string(void* self);

/// [Upstream resources](https://api.kde.org/karchive.html#isOpen)
///
/// @param self KArchive*
///
bool k_archive_is_open(void* self);

/// [Upstream resources](https://api.kde.org/karchive.html#mode)
///
/// @param self KArchive*
///
/// @return flag of enum QIODeviceBase__OpenModeFlag
///
int32_t k_archive_mode(void* self);

/// [Upstream resources](https://api.kde.org/karchive.html#device)
///
/// @param self KArchive*
///
QIODevice* k_archive_device(void* self);

/// [Upstream resources](https://api.kde.org/karchive.html#fileName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KArchive*
///
const char* k_archive_file_name(void* self);

/// [Upstream resources](https://api.kde.org/karchive.html#directory)
///
/// @param self KArchive*
///
const KArchiveDirectory* k_archive_directory(void* self);

/// [Upstream resources](https://api.kde.org/karchive.html#addLocalFile)
///
/// @param self KArchive*
/// @param fileName const char*
/// @param destName const char*
///
bool k_archive_add_local_file(void* self, const char* fileName, const char* destName);

/// [Upstream resources](https://api.kde.org/karchive.html#addLocalDirectory)
///
/// @param self KArchive*
/// @param path const char*
/// @param destName const char*
///
bool k_archive_add_local_directory(void* self, const char* path, const char* destName);

/// [Upstream resources](https://api.kde.org/karchive.html#writeDir)
///
/// @param self KArchive*
/// @param name const char*
///
bool k_archive_write_dir(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
///
/// @param self KArchive*
/// @param name const char*
/// @param target const char*
///
bool k_archive_write_sym_link(void* self, const char* name, const char* target);

/// [Upstream resources](https://api.kde.org/karchive.html#writeFile)
///
/// @param self KArchive*
/// @param name const char*
/// @param data char*
///
bool k_archive_write_file(void* self, const char* name, char* data);

/// [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
///
/// @param self KArchive*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param size long long
///
bool k_archive_prepare_writing(void* self, const char* name, const char* user, const char* group, long long size);

/// [Upstream resources](https://api.kde.org/karchive.html#writeData)
///
/// @param self KArchive*
/// @param data const char*
/// @param size long long
///
bool k_archive_write_data(void* self, const char* data, long long size);

/// [Upstream resources](https://api.kde.org/karchive.html#writeData)
///
/// @param self KArchive*
/// @param data char*
///
bool k_archive_write_data2(void* self, char* data);

/// [Upstream resources](https://api.kde.org/karchive.html#finishWriting)
///
/// @param self KArchive*
/// @param size long long
///
bool k_archive_finish_writing(void* self, long long size);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param sourceText const char*
/// @param disambiguation const char*
///
const char* k_archive_tr2(const char* sourceText, const char* disambiguation);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param sourceText const char*
/// @param disambiguation const char*
/// @param n int
///
const char* k_archive_tr3(const char* sourceText, const char* disambiguation, int n);

/// [Upstream resources](https://api.kde.org/karchive.html#writeDir)
///
/// @param self KArchive*
/// @param name const char*
/// @param user const char*
///
bool k_archive_write_dir2(void* self, const char* name, const char* user);

/// [Upstream resources](https://api.kde.org/karchive.html#writeDir)
///
/// @param self KArchive*
/// @param name const char*
/// @param user const char*
/// @param group const char*
///
bool k_archive_write_dir3(void* self, const char* name, const char* user, const char* group);

/// [Upstream resources](https://api.kde.org/karchive.html#writeDir)
///
/// @param self KArchive*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param perm mode_t
///
bool k_archive_write_dir4(void* self, const char* name, const char* user, const char* group, mode_t perm);

/// [Upstream resources](https://api.kde.org/karchive.html#writeDir)
///
/// @param self KArchive*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param perm mode_t
/// @param atime QDateTime*
///
bool k_archive_write_dir5(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime);

/// [Upstream resources](https://api.kde.org/karchive.html#writeDir)
///
/// @param self KArchive*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param perm mode_t
/// @param atime QDateTime*
/// @param mtime QDateTime*
///
bool k_archive_write_dir6(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime, void* mtime);

/// [Upstream resources](https://api.kde.org/karchive.html#writeDir)
///
/// @param self KArchive*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param perm mode_t
/// @param atime QDateTime*
/// @param mtime QDateTime*
/// @param ctime QDateTime*
///
bool k_archive_write_dir7(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime);

/// [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
///
/// @param self KArchive*
/// @param name const char*
/// @param target const char*
/// @param user const char*
///
bool k_archive_write_sym_link3(void* self, const char* name, const char* target, const char* user);

/// [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
///
/// @param self KArchive*
/// @param name const char*
/// @param target const char*
/// @param user const char*
/// @param group const char*
///
bool k_archive_write_sym_link4(void* self, const char* name, const char* target, const char* user, const char* group);

/// [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
///
/// @param self KArchive*
/// @param name const char*
/// @param target const char*
/// @param user const char*
/// @param group const char*
/// @param perm mode_t
///
bool k_archive_write_sym_link5(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm);

/// [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
///
/// @param self KArchive*
/// @param name const char*
/// @param target const char*
/// @param user const char*
/// @param group const char*
/// @param perm mode_t
/// @param atime QDateTime*
///
bool k_archive_write_sym_link6(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime);

/// [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
///
/// @param self KArchive*
/// @param name const char*
/// @param target const char*
/// @param user const char*
/// @param group const char*
/// @param perm mode_t
/// @param atime QDateTime*
/// @param mtime QDateTime*
///
bool k_archive_write_sym_link7(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime, void* mtime);

/// [Upstream resources](https://api.kde.org/karchive.html#writeSymLink)
///
/// @param self KArchive*
/// @param name const char*
/// @param target const char*
/// @param user const char*
/// @param group const char*
/// @param perm mode_t
/// @param atime QDateTime*
/// @param mtime QDateTime*
/// @param ctime QDateTime*
///
bool k_archive_write_sym_link8(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime);

/// [Upstream resources](https://api.kde.org/karchive.html#writeFile)
///
/// @param self KArchive*
/// @param name const char*
/// @param data char*
/// @param perm mode_t
///
bool k_archive_write_file3(void* self, const char* name, char* data, mode_t perm);

/// [Upstream resources](https://api.kde.org/karchive.html#writeFile)
///
/// @param self KArchive*
/// @param name const char*
/// @param data char*
/// @param perm mode_t
/// @param user const char*
///
bool k_archive_write_file4(void* self, const char* name, char* data, mode_t perm, const char* user);

/// [Upstream resources](https://api.kde.org/karchive.html#writeFile)
///
/// @param self KArchive*
/// @param name const char*
/// @param data char*
/// @param perm mode_t
/// @param user const char*
/// @param group const char*
///
bool k_archive_write_file5(void* self, const char* name, char* data, mode_t perm, const char* user, const char* group);

/// [Upstream resources](https://api.kde.org/karchive.html#writeFile)
///
/// @param self KArchive*
/// @param name const char*
/// @param data char*
/// @param perm mode_t
/// @param user const char*
/// @param group const char*
/// @param atime QDateTime*
///
bool k_archive_write_file6(void* self, const char* name, char* data, mode_t perm, const char* user, const char* group, void* atime);

/// [Upstream resources](https://api.kde.org/karchive.html#writeFile)
///
/// @param self KArchive*
/// @param name const char*
/// @param data char*
/// @param perm mode_t
/// @param user const char*
/// @param group const char*
/// @param atime QDateTime*
/// @param mtime QDateTime*
///
bool k_archive_write_file7(void* self, const char* name, char* data, mode_t perm, const char* user, const char* group, void* atime, void* mtime);

/// [Upstream resources](https://api.kde.org/karchive.html#writeFile)
///
/// @param self KArchive*
/// @param name const char*
/// @param data char*
/// @param perm mode_t
/// @param user const char*
/// @param group const char*
/// @param atime QDateTime*
/// @param mtime QDateTime*
/// @param ctime QDateTime*
///
bool k_archive_write_file8(void* self, const char* name, char* data, mode_t perm, const char* user, const char* group, void* atime, void* mtime, void* ctime);

/// [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
///
/// @param self KArchive*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param size long long
/// @param perm mode_t
///
bool k_archive_prepare_writing5(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm);

/// [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
///
/// @param self KArchive*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param size long long
/// @param perm mode_t
/// @param atime QDateTime*
///
bool k_archive_prepare_writing6(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime);

/// [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
///
/// @param self KArchive*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param size long long
/// @param perm mode_t
/// @param atime QDateTime*
/// @param mtime QDateTime*
///
bool k_archive_prepare_writing7(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime, void* mtime);

/// [Upstream resources](https://api.kde.org/karchive.html#prepareWriting)
///
/// @param self KArchive*
/// @param name const char*
/// @param user const char*
/// @param group const char*
/// @param size long long
/// @param perm mode_t
/// @param atime QDateTime*
/// @param mtime QDateTime*
/// @param ctime QDateTime*
///
bool k_archive_prepare_writing8(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime, void* mtime, void* ctime);

/// [Upstream resources](https://api.kde.org/karchive.html#dtor.KArchive)
///
/// Delete this object from C++ memory.
///
/// @param self KArchive*
///
void k_archive_delete(void* self);

#endif
