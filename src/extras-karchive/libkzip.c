#include "libkarchive.hpp"
#include "libkarchivedirectory.hpp"
#include "../libqdatetime.hpp"
#include "../libqiodevice.hpp"
#include "../libqobject.hpp"
#include "libkzip.hpp"
#include "libkzip.h"

KZip* k_zip_new(const char* filename) {
    return KZip_new(qstring(filename));
}

KZip* k_zip_new2(void* dev) {
    return KZip_new2((QIODevice*)dev);
}

KZip* k_zip_new3(void* param1) {
    return KZip_new3((KZip*)param1);
}

const char* k_zip_tr(const char* sourceText) {
    libqt_string _str = QObject_Tr(sourceText);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_zip_set_extra_field(void* self, int32_t ef) {
    KZip_SetExtraField((KZip*)self, ef);
}

int32_t k_zip_extra_field(void* self) {
    return KZip_ExtraField((KZip*)self);
}

void k_zip_set_compression(void* self, int32_t c) {
    KZip_SetCompression((KZip*)self, c);
}

int32_t k_zip_compression(void* self) {
    return KZip_Compression((KZip*)self);
}

bool k_zip_do_write_sym_link(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KZip_DoWriteSymLink((KZip*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

void k_zip_on_do_write_sym_link(void* self, bool (*callback)(void*, const char*, const char*, const char*, const char*, mode_t, void*, void*, void*)) {
    KZip_OnDoWriteSymLink((KZip*)self, (intptr_t)callback);
}

bool k_zip_super_do_write_sym_link(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KZip_SuperDoWriteSymLink((KZip*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_zip_do_prepare_writing(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime, void* mtime, void* creationTime) {
    return KZip_DoPrepareWriting((KZip*)self, qstring(name), qstring(user), qstring(group), size, perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)creationTime);
}

void k_zip_on_do_prepare_writing(void* self, bool (*callback)(void*, const char*, const char*, const char*, long long, mode_t, void*, void*, void*)) {
    KZip_OnDoPrepareWriting((KZip*)self, (intptr_t)callback);
}

bool k_zip_super_do_prepare_writing(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime, void* mtime, void* creationTime) {
    return KZip_SuperDoPrepareWriting((KZip*)self, qstring(name), qstring(user), qstring(group), size, perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)creationTime);
}

bool k_zip_do_finish_writing(void* self, long long size) {
    return KZip_DoFinishWriting((KZip*)self, size);
}

void k_zip_on_do_finish_writing(void* self, bool (*callback)(void*, long long)) {
    KZip_OnDoFinishWriting((KZip*)self, (intptr_t)callback);
}

bool k_zip_super_do_finish_writing(void* self, long long size) {
    return KZip_SuperDoFinishWriting((KZip*)self, size);
}

bool k_zip_do_write_data(void* self, const char* data, long long size) {
    return KZip_DoWriteData((KZip*)self, data, size);
}

void k_zip_on_do_write_data(void* self, bool (*callback)(void*, const char*, long long)) {
    KZip_OnDoWriteData((KZip*)self, (intptr_t)callback);
}

bool k_zip_super_do_write_data(void* self, const char* data, long long size) {
    return KZip_SuperDoWriteData((KZip*)self, data, size);
}

bool k_zip_open_archive(void* self, int32_t mode) {
    return KZip_OpenArchive((KZip*)self, mode);
}

void k_zip_on_open_archive(void* self, bool (*callback)(void*, int32_t)) {
    KZip_OnOpenArchive((KZip*)self, (intptr_t)callback);
}

bool k_zip_super_open_archive(void* self, int32_t mode) {
    return KZip_SuperOpenArchive((KZip*)self, mode);
}

bool k_zip_close_archive(void* self) {
    return KZip_CloseArchive((KZip*)self);
}

void k_zip_on_close_archive(void* self, bool (*callback)()) {
    KZip_OnCloseArchive((KZip*)self, (intptr_t)callback);
}

bool k_zip_super_close_archive(void* self) {
    return KZip_SuperCloseArchive((KZip*)self);
}

bool k_zip_do_write_dir(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KZip_DoWriteDir((KZip*)self, qstring(name), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

void k_zip_on_do_write_dir(void* self, bool (*callback)(void*, const char*, const char*, const char*, mode_t, void*, void*, void*)) {
    KZip_OnDoWriteDir((KZip*)self, (intptr_t)callback);
}

bool k_zip_super_do_write_dir(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KZip_SuperDoWriteDir((KZip*)self, qstring(name), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

void k_zip_virtual_hook(void* self, int id, void* data) {
    KZip_VirtualHook((KZip*)self, id, data);
}

void k_zip_on_virtual_hook(void* self, void (*callback)(void*, int, void*)) {
    KZip_OnVirtualHook((KZip*)self, (intptr_t)callback);
}

void k_zip_super_virtual_hook(void* self, int id, void* data) {
    KZip_SuperVirtualHook((KZip*)self, id, data);
}

const char* k_zip_tr2(const char* sourceText, const char* disambiguation) {
    libqt_string _str = QObject_Tr2(sourceText, disambiguation);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_zip_tr3(const char* sourceText, const char* disambiguation, int n) {
    libqt_string _str = QObject_Tr3(sourceText, disambiguation, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_zip_error_string(void* self) {
    libqt_string _str = KArchive_ErrorString((KArchive*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_zip_is_open(void* self) {
    return KArchive_IsOpen((KArchive*)self);
}

int32_t k_zip_mode(void* self) {
    return KArchive_Mode((KArchive*)self);
}

QIODevice* k_zip_device(void* self) {
    return KArchive_Device((KArchive*)self);
}

const char* k_zip_file_name(void* self) {
    libqt_string _str = KArchive_FileName((KArchive*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const KArchiveDirectory* k_zip_directory(void* self) {
    return KArchive_Directory((KArchive*)self);
}

bool k_zip_add_local_file(void* self, const char* fileName, const char* destName) {
    return KArchive_AddLocalFile((KArchive*)self, qstring(fileName), qstring(destName));
}

bool k_zip_add_local_directory(void* self, const char* path, const char* destName) {
    return KArchive_AddLocalDirectory((KArchive*)self, qstring(path), qstring(destName));
}

bool k_zip_write_dir(void* self, const char* name) {
    return KArchive_WriteDir((KArchive*)self, qstring(name));
}

bool k_zip_write_sym_link(void* self, const char* name, const char* target) {
    return KArchive_WriteSymLink((KArchive*)self, qstring(name), qstring(target));
}

bool k_zip_write_file(void* self, const char* name, char* data) {
    return KArchive_WriteFile((KArchive*)self, qstring(name), qstring(data));
}

bool k_zip_prepare_writing(void* self, const char* name, const char* user, const char* group, long long size) {
    return KArchive_PrepareWriting((KArchive*)self, qstring(name), qstring(user), qstring(group), size);
}

bool k_zip_write_data(void* self, const char* data, long long size) {
    return KArchive_WriteData((KArchive*)self, data, size);
}

bool k_zip_write_data2(void* self, char* data) {
    return KArchive_WriteData2((KArchive*)self, qstring(data));
}

bool k_zip_finish_writing(void* self, long long size) {
    return KArchive_FinishWriting((KArchive*)self, size);
}

bool k_zip_write_dir2(void* self, const char* name, const char* user) {
    return KArchive_WriteDir2((KArchive*)self, qstring(name), qstring(user));
}

bool k_zip_write_dir3(void* self, const char* name, const char* user, const char* group) {
    return KArchive_WriteDir3((KArchive*)self, qstring(name), qstring(user), qstring(group));
}

bool k_zip_write_dir4(void* self, const char* name, const char* user, const char* group, mode_t perm) {
    return KArchive_WriteDir4((KArchive*)self, qstring(name), qstring(user), qstring(group), perm);
}

bool k_zip_write_dir5(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime) {
    return KArchive_WriteDir5((KArchive*)self, qstring(name), qstring(user), qstring(group), perm, (QDateTime*)atime);
}

bool k_zip_write_dir6(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime, void* mtime) {
    return KArchive_WriteDir6((KArchive*)self, qstring(name), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime);
}

bool k_zip_write_dir7(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KArchive_WriteDir7((KArchive*)self, qstring(name), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_zip_write_sym_link3(void* self, const char* name, const char* target, const char* user) {
    return KArchive_WriteSymLink3((KArchive*)self, qstring(name), qstring(target), qstring(user));
}

bool k_zip_write_sym_link4(void* self, const char* name, const char* target, const char* user, const char* group) {
    return KArchive_WriteSymLink4((KArchive*)self, qstring(name), qstring(target), qstring(user), qstring(group));
}

bool k_zip_write_sym_link5(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm) {
    return KArchive_WriteSymLink5((KArchive*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm);
}

bool k_zip_write_sym_link6(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime) {
    return KArchive_WriteSymLink6((KArchive*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm, (QDateTime*)atime);
}

bool k_zip_write_sym_link7(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime, void* mtime) {
    return KArchive_WriteSymLink7((KArchive*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime);
}

bool k_zip_write_sym_link8(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KArchive_WriteSymLink8((KArchive*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_zip_write_file3(void* self, const char* name, char* data, mode_t perm) {
    return KArchive_WriteFile3((KArchive*)self, qstring(name), qstring(data), perm);
}

bool k_zip_write_file4(void* self, const char* name, char* data, mode_t perm, const char* user) {
    return KArchive_WriteFile4((KArchive*)self, qstring(name), qstring(data), perm, qstring(user));
}

bool k_zip_write_file5(void* self, const char* name, char* data, mode_t perm, const char* user, const char* group) {
    return KArchive_WriteFile5((KArchive*)self, qstring(name), qstring(data), perm, qstring(user), qstring(group));
}

bool k_zip_write_file6(void* self, const char* name, char* data, mode_t perm, const char* user, const char* group, void* atime) {
    return KArchive_WriteFile6((KArchive*)self, qstring(name), qstring(data), perm, qstring(user), qstring(group), (QDateTime*)atime);
}

bool k_zip_write_file7(void* self, const char* name, char* data, mode_t perm, const char* user, const char* group, void* atime, void* mtime) {
    return KArchive_WriteFile7((KArchive*)self, qstring(name), qstring(data), perm, qstring(user), qstring(group), (QDateTime*)atime, (QDateTime*)mtime);
}

bool k_zip_write_file8(void* self, const char* name, char* data, mode_t perm, const char* user, const char* group, void* atime, void* mtime, void* ctime) {
    return KArchive_WriteFile8((KArchive*)self, qstring(name), qstring(data), perm, qstring(user), qstring(group), (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_zip_prepare_writing5(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm) {
    return KArchive_PrepareWriting5((KArchive*)self, qstring(name), qstring(user), qstring(group), size, perm);
}

bool k_zip_prepare_writing6(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime) {
    return KArchive_PrepareWriting6((KArchive*)self, qstring(name), qstring(user), qstring(group), size, perm, (QDateTime*)atime);
}

bool k_zip_prepare_writing7(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime, void* mtime) {
    return KArchive_PrepareWriting7((KArchive*)self, qstring(name), qstring(user), qstring(group), size, perm, (QDateTime*)atime, (QDateTime*)mtime);
}

bool k_zip_prepare_writing8(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KArchive_PrepareWriting8((KArchive*)self, qstring(name), qstring(user), qstring(group), size, perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_zip_open(void* self, int32_t mode) {
    return KZip_Open((KZip*)self, mode);
}

bool k_zip_super_open(void* self, int32_t mode) {
    return KZip_SuperOpen((KZip*)self, mode);
}

void k_zip_on_open(void* self, bool (*callback)(void*, int32_t)) {
    KZip_OnOpen((KZip*)self, (intptr_t)callback);
}

bool k_zip_close(void* self) {
    return KZip_Close((KZip*)self);
}

bool k_zip_super_close(void* self) {
    return KZip_SuperClose((KZip*)self);
}

void k_zip_on_close(void* self, bool (*callback)()) {
    KZip_OnClose((KZip*)self, (intptr_t)callback);
}

KArchiveDirectory* k_zip_root_dir(void* self) {
    return KZip_RootDir((KZip*)self);
}

KArchiveDirectory* k_zip_super_root_dir(void* self) {
    return KZip_SuperRootDir((KZip*)self);
}

void k_zip_on_root_dir(void* self, KArchiveDirectory* (*callback)()) {
    KZip_OnRootDir((KZip*)self, (intptr_t)callback);
}

bool k_zip_create_device(void* self, int32_t mode) {
    return KZip_CreateDevice((KZip*)self, mode);
}

bool k_zip_super_create_device(void* self, int32_t mode) {
    return KZip_SuperCreateDevice((KZip*)self, mode);
}

void k_zip_on_create_device(void* self, bool (*callback)(void*, int32_t)) {
    KZip_OnCreateDevice((KZip*)self, (intptr_t)callback);
}

void k_zip_set_error_string(void* self, const char* errorStr) {
    KZip_SetErrorString((KZip*)self, qstring(errorStr));
}

void k_zip_super_set_error_string(void* self, const char* errorStr) {
    KZip_SuperSetErrorString((KZip*)self, qstring(errorStr));
}

void k_zip_on_set_error_string(void* self, void (*callback)(void*, const char*)) {
    KZip_OnSetErrorString((KZip*)self, (intptr_t)callback);
}

KArchiveDirectory* k_zip_find_or_create(void* self, const char* path) {
    return KZip_FindOrCreate((KZip*)self, qstring(path));
}

KArchiveDirectory* k_zip_super_find_or_create(void* self, const char* path) {
    return KZip_SuperFindOrCreate((KZip*)self, qstring(path));
}

void k_zip_on_find_or_create(void* self, KArchiveDirectory* (*callback)(void*, const char*)) {
    KZip_OnFindOrCreate((KZip*)self, (intptr_t)callback);
}

void k_zip_set_device(void* self, void* dev) {
    KZip_SetDevice((KZip*)self, (QIODevice*)dev);
}

void k_zip_super_set_device(void* self, void* dev) {
    KZip_SuperSetDevice((KZip*)self, (QIODevice*)dev);
}

void k_zip_on_set_device(void* self, void (*callback)(void*, void*)) {
    KZip_OnSetDevice((KZip*)self, (intptr_t)callback);
}

void k_zip_set_root_dir(void* self, void* rootDir) {
    KZip_SetRootDir((KZip*)self, (KArchiveDirectory*)rootDir);
}

void k_zip_super_set_root_dir(void* self, void* rootDir) {
    KZip_SuperSetRootDir((KZip*)self, (KArchiveDirectory*)rootDir);
}

void k_zip_on_set_root_dir(void* self, void (*callback)(void*, void*)) {
    KZip_OnSetRootDir((KZip*)self, (intptr_t)callback);
}

void k_zip_delete(void* self) {
    KZip_Delete((KZip*)(self));
}
