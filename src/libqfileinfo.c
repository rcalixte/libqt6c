#include "libqdatetime.hpp"
#include "libqdir.hpp"
#include "libqfiledevice.hpp"
#include "libqtimezone.hpp"
#include "libqfileinfo.hpp"
#include "libqfileinfo.h"

QFileInfo* q_fileinfo_new() {
    return QFileInfo_New();
}

QFileInfo* q_fileinfo_new2(const char* file) {
    return QFileInfo_New2(qstring(file));
}

QFileInfo* q_fileinfo_new3(const void* file) {
    return QFileInfo_New3((QFileDevice*)file);
}

QFileInfo* q_fileinfo_new4(const void* dir, const char* file) {
    return QFileInfo_New4((QDir*)dir, qstring(file));
}

QFileInfo* q_fileinfo_new5(const void* fileinfo) {
    return QFileInfo_New5((QFileInfo*)fileinfo);
}

void q_fileinfo_operator_assign(void* self, const void* fileinfo) {
    QFileInfo_OperatorAssign((QFileInfo*)self, (QFileInfo*)fileinfo);
}

void q_fileinfo_swap(void* self, void* other) {
    QFileInfo_Swap((QFileInfo*)self, (QFileInfo*)other);
}

void q_fileinfo_set_file(void* self, const char* file) {
    QFileInfo_SetFile((QFileInfo*)self, qstring(file));
}

void q_fileinfo_set_file2(void* self, const void* file) {
    QFileInfo_SetFile2((QFileInfo*)self, (QFileDevice*)file);
}

void q_fileinfo_set_file3(void* self, const void* dir, const char* file) {
    QFileInfo_SetFile3((QFileInfo*)self, (QDir*)dir, qstring(file));
}

bool q_fileinfo_exists(const void* self) {
    return QFileInfo_Exists((QFileInfo*)self);
}

bool q_fileinfo_exists2(const char* file) {
    return QFileInfo_Exists2(qstring(file));
}

void q_fileinfo_refresh(void* self) {
    QFileInfo_Refresh((QFileInfo*)self);
}

const char* q_fileinfo_file_path(const void* self) {
    libqt_string _str = QFileInfo_FilePath((QFileInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_fileinfo_absolute_file_path(const void* self) {
    libqt_string _str = QFileInfo_AbsoluteFilePath((QFileInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_fileinfo_canonical_file_path(const void* self) {
    libqt_string _str = QFileInfo_CanonicalFilePath((QFileInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_fileinfo_file_name(const void* self) {
    libqt_string _str = QFileInfo_FileName((QFileInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_fileinfo_base_name(const void* self) {
    libqt_string _str = QFileInfo_BaseName((QFileInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_fileinfo_complete_base_name(const void* self) {
    libqt_string _str = QFileInfo_CompleteBaseName((QFileInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_fileinfo_suffix(const void* self) {
    libqt_string _str = QFileInfo_Suffix((QFileInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_fileinfo_bundle_name(const void* self) {
    libqt_string _str = QFileInfo_BundleName((QFileInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_fileinfo_complete_suffix(const void* self) {
    libqt_string _str = QFileInfo_CompleteSuffix((QFileInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_fileinfo_path(const void* self) {
    libqt_string _str = QFileInfo_Path((QFileInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_fileinfo_absolute_path(const void* self) {
    libqt_string _str = QFileInfo_AbsolutePath((QFileInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_fileinfo_canonical_path(const void* self) {
    libqt_string _str = QFileInfo_CanonicalPath((QFileInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDir* q_fileinfo_dir(const void* self) {
    return QFileInfo_Dir((QFileInfo*)self);
}

QDir* q_fileinfo_absolute_dir(const void* self) {
    return QFileInfo_AbsoluteDir((QFileInfo*)self);
}

bool q_fileinfo_is_readable(const void* self) {
    return QFileInfo_IsReadable((QFileInfo*)self);
}

bool q_fileinfo_is_writable(const void* self) {
    return QFileInfo_IsWritable((QFileInfo*)self);
}

bool q_fileinfo_is_executable(const void* self) {
    return QFileInfo_IsExecutable((QFileInfo*)self);
}

bool q_fileinfo_is_hidden(const void* self) {
    return QFileInfo_IsHidden((QFileInfo*)self);
}

bool q_fileinfo_is_native_path(const void* self) {
    return QFileInfo_IsNativePath((QFileInfo*)self);
}

bool q_fileinfo_is_relative(const void* self) {
    return QFileInfo_IsRelative((QFileInfo*)self);
}

bool q_fileinfo_is_absolute(const void* self) {
    return QFileInfo_IsAbsolute((QFileInfo*)self);
}

bool q_fileinfo_make_absolute(void* self) {
    return QFileInfo_MakeAbsolute((QFileInfo*)self);
}

bool q_fileinfo_is_file(const void* self) {
    return QFileInfo_IsFile((QFileInfo*)self);
}

bool q_fileinfo_is_dir(const void* self) {
    return QFileInfo_IsDir((QFileInfo*)self);
}

bool q_fileinfo_is_sym_link(const void* self) {
    return QFileInfo_IsSymLink((QFileInfo*)self);
}

bool q_fileinfo_is_symbolic_link(const void* self) {
    return QFileInfo_IsSymbolicLink((QFileInfo*)self);
}

bool q_fileinfo_is_shortcut(const void* self) {
    return QFileInfo_IsShortcut((QFileInfo*)self);
}

bool q_fileinfo_is_alias(const void* self) {
    return QFileInfo_IsAlias((QFileInfo*)self);
}

bool q_fileinfo_is_junction(const void* self) {
    return QFileInfo_IsJunction((QFileInfo*)self);
}

bool q_fileinfo_is_root(const void* self) {
    return QFileInfo_IsRoot((QFileInfo*)self);
}

bool q_fileinfo_is_bundle(const void* self) {
    return QFileInfo_IsBundle((QFileInfo*)self);
}

const char* q_fileinfo_sym_link_target(const void* self) {
    libqt_string _str = QFileInfo_SymLinkTarget((QFileInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_fileinfo_read_sym_link(const void* self) {
    libqt_string _str = QFileInfo_ReadSymLink((QFileInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_fileinfo_junction_target(const void* self) {
    libqt_string _str = QFileInfo_JunctionTarget((QFileInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_fileinfo_owner(const void* self) {
    libqt_string _str = QFileInfo_Owner((QFileInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint32_t q_fileinfo_owner_id(const void* self) {
    return QFileInfo_OwnerId((QFileInfo*)self);
}

const char* q_fileinfo_group(const void* self) {
    libqt_string _str = QFileInfo_Group((QFileInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint32_t q_fileinfo_group_id(const void* self) {
    return QFileInfo_GroupId((QFileInfo*)self);
}

bool q_fileinfo_permission(const void* self, int32_t permissions) {
    return QFileInfo_Permission((QFileInfo*)self, permissions);
}

int32_t q_fileinfo_permissions(const void* self) {
    return QFileInfo_Permissions((QFileInfo*)self);
}

int64_t q_fileinfo_size(const void* self) {
    return QFileInfo_Size((QFileInfo*)self);
}

QDateTime* q_fileinfo_birth_time(const void* self) {
    return QFileInfo_BirthTime((QFileInfo*)self);
}

QDateTime* q_fileinfo_metadata_change_time(const void* self) {
    return QFileInfo_MetadataChangeTime((QFileInfo*)self);
}

QDateTime* q_fileinfo_last_modified(const void* self) {
    return QFileInfo_LastModified((QFileInfo*)self);
}

QDateTime* q_fileinfo_last_read(const void* self) {
    return QFileInfo_LastRead((QFileInfo*)self);
}

QDateTime* q_fileinfo_file_time(const void* self, int32_t time) {
    return QFileInfo_FileTime((QFileInfo*)self, time);
}

QDateTime* q_fileinfo_birth_time2(const void* self, const void* tz) {
    return QFileInfo_BirthTime2((QFileInfo*)self, (QTimeZone*)tz);
}

QDateTime* q_fileinfo_metadata_change_time2(const void* self, const void* tz) {
    return QFileInfo_MetadataChangeTime2((QFileInfo*)self, (QTimeZone*)tz);
}

QDateTime* q_fileinfo_last_modified2(const void* self, const void* tz) {
    return QFileInfo_LastModified2((QFileInfo*)self, (QTimeZone*)tz);
}

QDateTime* q_fileinfo_last_read2(const void* self, const void* tz) {
    return QFileInfo_LastRead2((QFileInfo*)self, (QTimeZone*)tz);
}

QDateTime* q_fileinfo_file_time2(const void* self, int32_t time, const void* tz) {
    return QFileInfo_FileTime2((QFileInfo*)self, time, (QTimeZone*)tz);
}

bool q_fileinfo_caching(const void* self) {
    return QFileInfo_Caching((QFileInfo*)self);
}

void q_fileinfo_set_caching(void* self, bool on) {
    QFileInfo_SetCaching((QFileInfo*)self, on);
}

void q_fileinfo_stat(void* self) {
    QFileInfo_Stat((QFileInfo*)self);
}

void q_fileinfo_delete(void* self) {
    QFileInfo_Delete((QFileInfo*)(self));
}
