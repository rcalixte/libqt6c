#include "libkarchivedirectory.hpp"
#include "../libqbytearrayview.hpp"
#include "../libqdatetime.hpp"
#include "../libqiodevice.hpp"
#include "../libqobject.hpp"
#include "libkarchive.hpp"
#include "libkarchive.h"

const char* k_archive_tr(const char* sourceText) {
    libqt_string _str = QObject_Tr(sourceText);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_archive_open(void* self, int32_t mode) {
    return KArchive_Open((KArchive*)self, mode);
}

bool k_archive_close(void* self) {
    return KArchive_Close((KArchive*)self);
}

const char* k_archive_error_string(void* self) {
    libqt_string _str = KArchive_ErrorString((KArchive*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_archive_is_open(void* self) {
    return KArchive_IsOpen((KArchive*)self);
}

int32_t k_archive_mode(void* self) {
    return KArchive_Mode((KArchive*)self);
}

QIODevice* k_archive_device(void* self) {
    return KArchive_Device((KArchive*)self);
}

const char* k_archive_file_name(void* self) {
    libqt_string _str = KArchive_FileName((KArchive*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const KArchiveDirectory* k_archive_directory(void* self) {
    return KArchive_Directory((KArchive*)self);
}

bool k_archive_add_local_file(void* self, const char* fileName, const char* destName) {
    return KArchive_AddLocalFile((KArchive*)self, qstring(fileName), qstring(destName));
}

bool k_archive_add_local_directory(void* self, const char* path, const char* destName) {
    return KArchive_AddLocalDirectory((KArchive*)self, qstring(path), qstring(destName));
}

bool k_archive_write_dir(void* self, const char* name) {
    return KArchive_WriteDir((KArchive*)self, qstring(name));
}

bool k_archive_write_sym_link(void* self, const char* name, const char* target) {
    return KArchive_WriteSymLink((KArchive*)self, qstring(name), qstring(target));
}

bool k_archive_write_file(void* self, const char* name, const char* data) {
    return KArchive_WriteFile((KArchive*)self, qstring(name), qstring(data));
}

bool k_archive_prepare_writing(void* self, const char* name, const char* user, const char* group, long long size) {
    return KArchive_PrepareWriting((KArchive*)self, qstring(name), qstring(user), qstring(group), size);
}

bool k_archive_write_data(void* self, const char* data, long long size) {
    return KArchive_WriteData((KArchive*)self, data, size);
}

bool k_archive_write_data2(void* self, const char* data) {
    return KArchive_WriteData2((KArchive*)self, qstring(data));
}

bool k_archive_finish_writing(void* self, long long size) {
    return KArchive_FinishWriting((KArchive*)self, size);
}

const char* k_archive_tr2(const char* sourceText, const char* disambiguation) {
    libqt_string _str = QObject_Tr2(sourceText, disambiguation);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_archive_tr3(const char* sourceText, const char* disambiguation, int n) {
    libqt_string _str = QObject_Tr3(sourceText, disambiguation, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_archive_write_dir2(void* self, const char* name, const char* user) {
    return KArchive_WriteDir2((KArchive*)self, qstring(name), qstring(user));
}

bool k_archive_write_dir3(void* self, const char* name, const char* user, const char* group) {
    return KArchive_WriteDir3((KArchive*)self, qstring(name), qstring(user), qstring(group));
}

bool k_archive_write_dir4(void* self, const char* name, const char* user, const char* group, mode_t perm) {
    return KArchive_WriteDir4((KArchive*)self, qstring(name), qstring(user), qstring(group), perm);
}

bool k_archive_write_dir5(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime) {
    return KArchive_WriteDir5((KArchive*)self, qstring(name), qstring(user), qstring(group), perm, (QDateTime*)atime);
}

bool k_archive_write_dir6(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime, void* mtime) {
    return KArchive_WriteDir6((KArchive*)self, qstring(name), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime);
}

bool k_archive_write_dir7(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KArchive_WriteDir7((KArchive*)self, qstring(name), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_archive_write_sym_link3(void* self, const char* name, const char* target, const char* user) {
    return KArchive_WriteSymLink3((KArchive*)self, qstring(name), qstring(target), qstring(user));
}

bool k_archive_write_sym_link4(void* self, const char* name, const char* target, const char* user, const char* group) {
    return KArchive_WriteSymLink4((KArchive*)self, qstring(name), qstring(target), qstring(user), qstring(group));
}

bool k_archive_write_sym_link5(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm) {
    return KArchive_WriteSymLink5((KArchive*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm);
}

bool k_archive_write_sym_link6(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime) {
    return KArchive_WriteSymLink6((KArchive*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm, (QDateTime*)atime);
}

bool k_archive_write_sym_link7(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime, void* mtime) {
    return KArchive_WriteSymLink7((KArchive*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime);
}

bool k_archive_write_sym_link8(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KArchive_WriteSymLink8((KArchive*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_archive_write_file3(void* self, const char* name, const char* data, mode_t perm) {
    return KArchive_WriteFile3((KArchive*)self, qstring(name), qstring(data), perm);
}

bool k_archive_write_file4(void* self, const char* name, const char* data, mode_t perm, const char* user) {
    return KArchive_WriteFile4((KArchive*)self, qstring(name), qstring(data), perm, qstring(user));
}

bool k_archive_write_file5(void* self, const char* name, const char* data, mode_t perm, const char* user, const char* group) {
    return KArchive_WriteFile5((KArchive*)self, qstring(name), qstring(data), perm, qstring(user), qstring(group));
}

bool k_archive_write_file6(void* self, const char* name, const char* data, mode_t perm, const char* user, const char* group, void* atime) {
    return KArchive_WriteFile6((KArchive*)self, qstring(name), qstring(data), perm, qstring(user), qstring(group), (QDateTime*)atime);
}

bool k_archive_write_file7(void* self, const char* name, const char* data, mode_t perm, const char* user, const char* group, void* atime, void* mtime) {
    return KArchive_WriteFile7((KArchive*)self, qstring(name), qstring(data), perm, qstring(user), qstring(group), (QDateTime*)atime, (QDateTime*)mtime);
}

bool k_archive_write_file8(void* self, const char* name, const char* data, mode_t perm, const char* user, const char* group, void* atime, void* mtime, void* ctime) {
    return KArchive_WriteFile8((KArchive*)self, qstring(name), qstring(data), perm, qstring(user), qstring(group), (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_archive_prepare_writing5(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm) {
    return KArchive_PrepareWriting5((KArchive*)self, qstring(name), qstring(user), qstring(group), size, perm);
}

bool k_archive_prepare_writing6(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime) {
    return KArchive_PrepareWriting6((KArchive*)self, qstring(name), qstring(user), qstring(group), size, perm, (QDateTime*)atime);
}

bool k_archive_prepare_writing7(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime, void* mtime) {
    return KArchive_PrepareWriting7((KArchive*)self, qstring(name), qstring(user), qstring(group), size, perm, (QDateTime*)atime, (QDateTime*)mtime);
}

bool k_archive_prepare_writing8(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KArchive_PrepareWriting8((KArchive*)self, qstring(name), qstring(user), qstring(group), size, perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

void k_archive_delete(void* self) {
    KArchive_Delete((KArchive*)(self));
}
