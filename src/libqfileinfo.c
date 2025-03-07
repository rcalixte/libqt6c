#include "libqdatetime.hpp"
#include "libqdir.hpp"
#include "libqfiledevice.hpp"
#include <string.h>
#include "libqfileinfo.hpp"
#include "libqfileinfo.h"

/// https://doc.qt.io/qt-6/qfileinfo.html

/// q_fileinfo_new constructs a new QFileInfo object.
///
///
QFileInfo* q_fileinfo_new() {
    return QFileInfo_new();
}

/// q_fileinfo_new2 constructs a new QFileInfo object.
///
/// ``` const char* file ```
QFileInfo* q_fileinfo_new2(const char* file) {
    return QFileInfo_new2(qstring(file));
}

/// q_fileinfo_new3 constructs a new QFileInfo object.
///
/// ``` QFileDevice* file ```
QFileInfo* q_fileinfo_new3(void* file) {
    return QFileInfo_new3((QFileDevice*)file);
}

/// q_fileinfo_new4 constructs a new QFileInfo object.
///
/// ``` QDir* dir, const char* file ```
QFileInfo* q_fileinfo_new4(void* dir, const char* file) {
    return QFileInfo_new4((QDir*)dir, qstring(file));
}

/// q_fileinfo_new5 constructs a new QFileInfo object.
///
/// ``` QFileInfo* fileinfo ```
QFileInfo* q_fileinfo_new5(void* fileinfo) {
    return QFileInfo_new5((QFileInfo*)fileinfo);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#operator=)
///
/// ``` QFileInfo* self, QFileInfo* fileinfo ```
void q_fileinfo_operator_assign(void* self, void* fileinfo) {
    QFileInfo_OperatorAssign((QFileInfo*)self, (QFileInfo*)fileinfo);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#swap)
///
/// ``` QFileInfo* self, QFileInfo* other ```
void q_fileinfo_swap(void* self, void* other) {
    QFileInfo_Swap((QFileInfo*)self, (QFileInfo*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#operator==)
///
/// ``` QFileInfo* self, QFileInfo* fileinfo ```
bool q_fileinfo_operator_equal(void* self, void* fileinfo) {
    return QFileInfo_OperatorEqual((QFileInfo*)self, (QFileInfo*)fileinfo);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#operator!=)
///
/// ``` QFileInfo* self, QFileInfo* fileinfo ```
bool q_fileinfo_operator_not_equal(void* self, void* fileinfo) {
    return QFileInfo_OperatorNotEqual((QFileInfo*)self, (QFileInfo*)fileinfo);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#setFile)
///
/// ``` QFileInfo* self, const char* file ```
void q_fileinfo_set_file(void* self, const char* file) {
    QFileInfo_SetFile((QFileInfo*)self, qstring(file));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#setFile)
///
/// ``` QFileInfo* self, QFileDevice* file ```
void q_fileinfo_set_file_with_file(void* self, void* file) {
    QFileInfo_SetFileWithFile((QFileInfo*)self, (QFileDevice*)file);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#setFile)
///
/// ``` QFileInfo* self, QDir* dir, const char* file ```
void q_fileinfo_set_file2(void* self, void* dir, const char* file) {
    QFileInfo_SetFile2((QFileInfo*)self, (QDir*)dir, qstring(file));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#exists)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_exists(void* self) {
    return QFileInfo_Exists((QFileInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#exists)
///
/// ``` const char* file ```
bool q_fileinfo_exists_with_file(const char* file) {
    return QFileInfo_ExistsWithFile(qstring(file));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#refresh)
///
/// ``` QFileInfo* self ```
void q_fileinfo_refresh(void* self) {
    QFileInfo_Refresh((QFileInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#filePath)
///
/// ``` QFileInfo* self ```
const char* q_fileinfo_file_path(void* self) {
    libqt_string _str = QFileInfo_FilePath((QFileInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#absoluteFilePath)
///
/// ``` QFileInfo* self ```
const char* q_fileinfo_absolute_file_path(void* self) {
    libqt_string _str = QFileInfo_AbsoluteFilePath((QFileInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#canonicalFilePath)
///
/// ``` QFileInfo* self ```
const char* q_fileinfo_canonical_file_path(void* self) {
    libqt_string _str = QFileInfo_CanonicalFilePath((QFileInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#fileName)
///
/// ``` QFileInfo* self ```
const char* q_fileinfo_file_name(void* self) {
    libqt_string _str = QFileInfo_FileName((QFileInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#baseName)
///
/// ``` QFileInfo* self ```
const char* q_fileinfo_base_name(void* self) {
    libqt_string _str = QFileInfo_BaseName((QFileInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#completeBaseName)
///
/// ``` QFileInfo* self ```
const char* q_fileinfo_complete_base_name(void* self) {
    libqt_string _str = QFileInfo_CompleteBaseName((QFileInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#suffix)
///
/// ``` QFileInfo* self ```
const char* q_fileinfo_suffix(void* self) {
    libqt_string _str = QFileInfo_Suffix((QFileInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#bundleName)
///
/// ``` QFileInfo* self ```
const char* q_fileinfo_bundle_name(void* self) {
    libqt_string _str = QFileInfo_BundleName((QFileInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#completeSuffix)
///
/// ``` QFileInfo* self ```
const char* q_fileinfo_complete_suffix(void* self) {
    libqt_string _str = QFileInfo_CompleteSuffix((QFileInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#path)
///
/// ``` QFileInfo* self ```
const char* q_fileinfo_path(void* self) {
    libqt_string _str = QFileInfo_Path((QFileInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#absolutePath)
///
/// ``` QFileInfo* self ```
const char* q_fileinfo_absolute_path(void* self) {
    libqt_string _str = QFileInfo_AbsolutePath((QFileInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#canonicalPath)
///
/// ``` QFileInfo* self ```
const char* q_fileinfo_canonical_path(void* self) {
    libqt_string _str = QFileInfo_CanonicalPath((QFileInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#dir)
///
/// ``` QFileInfo* self ```
QDir* q_fileinfo_dir(void* self) {
    return QFileInfo_Dir((QFileInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#absoluteDir)
///
/// ``` QFileInfo* self ```
QDir* q_fileinfo_absolute_dir(void* self) {
    return QFileInfo_AbsoluteDir((QFileInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isReadable)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_is_readable(void* self) {
    return QFileInfo_IsReadable((QFileInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isWritable)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_is_writable(void* self) {
    return QFileInfo_IsWritable((QFileInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isExecutable)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_is_executable(void* self) {
    return QFileInfo_IsExecutable((QFileInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isHidden)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_is_hidden(void* self) {
    return QFileInfo_IsHidden((QFileInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isNativePath)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_is_native_path(void* self) {
    return QFileInfo_IsNativePath((QFileInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isRelative)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_is_relative(void* self) {
    return QFileInfo_IsRelative((QFileInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isAbsolute)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_is_absolute(void* self) {
    return QFileInfo_IsAbsolute((QFileInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#makeAbsolute)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_make_absolute(void* self) {
    return QFileInfo_MakeAbsolute((QFileInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isFile)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_is_file(void* self) {
    return QFileInfo_IsFile((QFileInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isDir)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_is_dir(void* self) {
    return QFileInfo_IsDir((QFileInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isSymLink)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_is_sym_link(void* self) {
    return QFileInfo_IsSymLink((QFileInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isSymbolicLink)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_is_symbolic_link(void* self) {
    return QFileInfo_IsSymbolicLink((QFileInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isShortcut)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_is_shortcut(void* self) {
    return QFileInfo_IsShortcut((QFileInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isAlias)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_is_alias(void* self) {
    return QFileInfo_IsAlias((QFileInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isJunction)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_is_junction(void* self) {
    return QFileInfo_IsJunction((QFileInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isRoot)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_is_root(void* self) {
    return QFileInfo_IsRoot((QFileInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isBundle)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_is_bundle(void* self) {
    return QFileInfo_IsBundle((QFileInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#symLinkTarget)
///
/// ``` QFileInfo* self ```
const char* q_fileinfo_sym_link_target(void* self) {
    libqt_string _str = QFileInfo_SymLinkTarget((QFileInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#junctionTarget)
///
/// ``` QFileInfo* self ```
const char* q_fileinfo_junction_target(void* self) {
    libqt_string _str = QFileInfo_JunctionTarget((QFileInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#owner)
///
/// ``` QFileInfo* self ```
const char* q_fileinfo_owner(void* self) {
    libqt_string _str = QFileInfo_Owner((QFileInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#ownerId)
///
/// ``` QFileInfo* self ```
uint32_t q_fileinfo_owner_id(void* self) {
    return QFileInfo_OwnerId((QFileInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#group)
///
/// ``` QFileInfo* self ```
const char* q_fileinfo_group(void* self) {
    libqt_string _str = QFileInfo_Group((QFileInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#groupId)
///
/// ``` QFileInfo* self ```
uint32_t q_fileinfo_group_id(void* self) {
    return QFileInfo_GroupId((QFileInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#permission)
///
/// ``` QFileInfo* self, int permissions ```
bool q_fileinfo_permission(void* self, int64_t permissions) {
    return QFileInfo_Permission((QFileInfo*)self, permissions);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#permissions)
///
/// ``` QFileInfo* self ```
int64_t q_fileinfo_permissions(void* self) {
    return QFileInfo_Permissions((QFileInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#size)
///
/// ``` QFileInfo* self ```
long long q_fileinfo_size(void* self) {
    return QFileInfo_Size((QFileInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#birthTime)
///
/// ``` QFileInfo* self ```
QDateTime* q_fileinfo_birth_time(void* self) {
    return QFileInfo_BirthTime((QFileInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#metadataChangeTime)
///
/// ``` QFileInfo* self ```
QDateTime* q_fileinfo_metadata_change_time(void* self) {
    return QFileInfo_MetadataChangeTime((QFileInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#lastModified)
///
/// ``` QFileInfo* self ```
QDateTime* q_fileinfo_last_modified(void* self) {
    return QFileInfo_LastModified((QFileInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#lastRead)
///
/// ``` QFileInfo* self ```
QDateTime* q_fileinfo_last_read(void* self) {
    return QFileInfo_LastRead((QFileInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#fileTime)
///
/// ``` QFileInfo* self, enum QFileDevice__FileTime time ```
QDateTime* q_fileinfo_file_time(void* self, int64_t time) {
    return QFileInfo_FileTime((QFileInfo*)self, time);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#caching)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_caching(void* self) {
    return QFileInfo_Caching((QFileInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#setCaching)
///
/// ``` QFileInfo* self, bool on ```
void q_fileinfo_set_caching(void* self, bool on) {
    QFileInfo_SetCaching((QFileInfo*)self, on);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#stat)
///
/// ``` QFileInfo* self ```
void q_fileinfo_stat(void* self) {
    QFileInfo_Stat((QFileInfo*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QFileInfo* self ```
void q_fileinfo_delete(void* self) {
    QFileInfo_Delete((QFileInfo*)(self));
}