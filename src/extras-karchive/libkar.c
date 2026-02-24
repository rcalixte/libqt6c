#include "libkarchive.hpp"
#include "libkarchivedirectory.hpp"
#include "../libqdatetime.hpp"
#include "../libqiodevice.hpp"
#include "../libqobject.hpp"
#include "libkar.hpp"
#include "libkar.h"

KAr* k_ar_new(const char* filename) {
    return KAr_new(qstring(filename));
}

KAr* k_ar_new2(void* dev) {
    return KAr_new2((QIODevice*)dev);
}

KAr* k_ar_new3(void* param1) {
    return KAr_new3((KAr*)param1);
}

const char* k_ar_tr(const char* sourceText) {
    libqt_string _str = QObject_Tr(sourceText);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_ar_do_prepare_writing(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KAr_DoPrepareWriting((KAr*)self, qstring(name), qstring(user), qstring(group), size, perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

void k_ar_on_do_prepare_writing(void* self, bool (*callback)(void*, const char*, const char*, const char*, long long, mode_t, void*, void*, void*)) {
    KAr_OnDoPrepareWriting((KAr*)self, (intptr_t)callback);
}

bool k_ar_super_do_prepare_writing(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KAr_SuperDoPrepareWriting((KAr*)self, qstring(name), qstring(user), qstring(group), size, perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_ar_do_finish_writing(void* self, long long size) {
    return KAr_DoFinishWriting((KAr*)self, size);
}

void k_ar_on_do_finish_writing(void* self, bool (*callback)(void*, long long)) {
    KAr_OnDoFinishWriting((KAr*)self, (intptr_t)callback);
}

bool k_ar_super_do_finish_writing(void* self, long long size) {
    return KAr_SuperDoFinishWriting((KAr*)self, size);
}

bool k_ar_do_write_dir(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KAr_DoWriteDir((KAr*)self, qstring(name), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

void k_ar_on_do_write_dir(void* self, bool (*callback)(void*, const char*, const char*, const char*, mode_t, void*, void*, void*)) {
    KAr_OnDoWriteDir((KAr*)self, (intptr_t)callback);
}

bool k_ar_super_do_write_dir(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KAr_SuperDoWriteDir((KAr*)self, qstring(name), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_ar_do_write_sym_link(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KAr_DoWriteSymLink((KAr*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

void k_ar_on_do_write_sym_link(void* self, bool (*callback)(void*, const char*, const char*, const char*, const char*, mode_t, void*, void*, void*)) {
    KAr_OnDoWriteSymLink((KAr*)self, (intptr_t)callback);
}

bool k_ar_super_do_write_sym_link(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KAr_SuperDoWriteSymLink((KAr*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_ar_open_archive(void* self, int32_t mode) {
    return KAr_OpenArchive((KAr*)self, mode);
}

void k_ar_on_open_archive(void* self, bool (*callback)(void*, int32_t)) {
    KAr_OnOpenArchive((KAr*)self, (intptr_t)callback);
}

bool k_ar_super_open_archive(void* self, int32_t mode) {
    return KAr_SuperOpenArchive((KAr*)self, mode);
}

bool k_ar_close_archive(void* self) {
    return KAr_CloseArchive((KAr*)self);
}

void k_ar_on_close_archive(void* self, bool (*callback)()) {
    KAr_OnCloseArchive((KAr*)self, (intptr_t)callback);
}

bool k_ar_super_close_archive(void* self) {
    return KAr_SuperCloseArchive((KAr*)self);
}

void k_ar_virtual_hook(void* self, int id, void* data) {
    KAr_VirtualHook((KAr*)self, id, data);
}

void k_ar_on_virtual_hook(void* self, void (*callback)(void*, int, void*)) {
    KAr_OnVirtualHook((KAr*)self, (intptr_t)callback);
}

void k_ar_super_virtual_hook(void* self, int id, void* data) {
    KAr_SuperVirtualHook((KAr*)self, id, data);
}

const char* k_ar_tr2(const char* sourceText, const char* disambiguation) {
    libqt_string _str = QObject_Tr2(sourceText, disambiguation);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_ar_tr3(const char* sourceText, const char* disambiguation, int n) {
    libqt_string _str = QObject_Tr3(sourceText, disambiguation, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_ar_error_string(void* self) {
    libqt_string _str = KArchive_ErrorString((KArchive*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_ar_is_open(void* self) {
    return KArchive_IsOpen((KArchive*)self);
}

int32_t k_ar_mode(void* self) {
    return KArchive_Mode((KArchive*)self);
}

QIODevice* k_ar_device(void* self) {
    return KArchive_Device((KArchive*)self);
}

const char* k_ar_file_name(void* self) {
    libqt_string _str = KArchive_FileName((KArchive*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const KArchiveDirectory* k_ar_directory(void* self) {
    return KArchive_Directory((KArchive*)self);
}

bool k_ar_add_local_file(void* self, const char* fileName, const char* destName) {
    return KArchive_AddLocalFile((KArchive*)self, qstring(fileName), qstring(destName));
}

bool k_ar_add_local_directory(void* self, const char* path, const char* destName) {
    return KArchive_AddLocalDirectory((KArchive*)self, qstring(path), qstring(destName));
}

bool k_ar_write_dir(void* self, const char* name) {
    return KArchive_WriteDir((KArchive*)self, qstring(name));
}

bool k_ar_write_sym_link(void* self, const char* name, const char* target) {
    return KArchive_WriteSymLink((KArchive*)self, qstring(name), qstring(target));
}

bool k_ar_write_file(void* self, const char* name, char* data) {
    return KArchive_WriteFile((KArchive*)self, qstring(name), qstring(data));
}

bool k_ar_prepare_writing(void* self, const char* name, const char* user, const char* group, long long size) {
    return KArchive_PrepareWriting((KArchive*)self, qstring(name), qstring(user), qstring(group), size);
}

bool k_ar_write_data(void* self, const char* data, long long size) {
    return KArchive_WriteData((KArchive*)self, data, size);
}

bool k_ar_write_data2(void* self, char* data) {
    return KArchive_WriteData2((KArchive*)self, qstring(data));
}

bool k_ar_finish_writing(void* self, long long size) {
    return KArchive_FinishWriting((KArchive*)self, size);
}

bool k_ar_write_dir2(void* self, const char* name, const char* user) {
    return KArchive_WriteDir2((KArchive*)self, qstring(name), qstring(user));
}

bool k_ar_write_dir3(void* self, const char* name, const char* user, const char* group) {
    return KArchive_WriteDir3((KArchive*)self, qstring(name), qstring(user), qstring(group));
}

bool k_ar_write_dir4(void* self, const char* name, const char* user, const char* group, mode_t perm) {
    return KArchive_WriteDir4((KArchive*)self, qstring(name), qstring(user), qstring(group), perm);
}

bool k_ar_write_dir5(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime) {
    return KArchive_WriteDir5((KArchive*)self, qstring(name), qstring(user), qstring(group), perm, (QDateTime*)atime);
}

bool k_ar_write_dir6(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime, void* mtime) {
    return KArchive_WriteDir6((KArchive*)self, qstring(name), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime);
}

bool k_ar_write_dir7(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KArchive_WriteDir7((KArchive*)self, qstring(name), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_ar_write_sym_link3(void* self, const char* name, const char* target, const char* user) {
    return KArchive_WriteSymLink3((KArchive*)self, qstring(name), qstring(target), qstring(user));
}

bool k_ar_write_sym_link4(void* self, const char* name, const char* target, const char* user, const char* group) {
    return KArchive_WriteSymLink4((KArchive*)self, qstring(name), qstring(target), qstring(user), qstring(group));
}

bool k_ar_write_sym_link5(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm) {
    return KArchive_WriteSymLink5((KArchive*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm);
}

bool k_ar_write_sym_link6(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime) {
    return KArchive_WriteSymLink6((KArchive*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm, (QDateTime*)atime);
}

bool k_ar_write_sym_link7(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime, void* mtime) {
    return KArchive_WriteSymLink7((KArchive*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime);
}

bool k_ar_write_sym_link8(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KArchive_WriteSymLink8((KArchive*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_ar_write_file3(void* self, const char* name, char* data, mode_t perm) {
    return KArchive_WriteFile3((KArchive*)self, qstring(name), qstring(data), perm);
}

bool k_ar_write_file4(void* self, const char* name, char* data, mode_t perm, const char* user) {
    return KArchive_WriteFile4((KArchive*)self, qstring(name), qstring(data), perm, qstring(user));
}

bool k_ar_write_file5(void* self, const char* name, char* data, mode_t perm, const char* user, const char* group) {
    return KArchive_WriteFile5((KArchive*)self, qstring(name), qstring(data), perm, qstring(user), qstring(group));
}

bool k_ar_write_file6(void* self, const char* name, char* data, mode_t perm, const char* user, const char* group, void* atime) {
    return KArchive_WriteFile6((KArchive*)self, qstring(name), qstring(data), perm, qstring(user), qstring(group), (QDateTime*)atime);
}

bool k_ar_write_file7(void* self, const char* name, char* data, mode_t perm, const char* user, const char* group, void* atime, void* mtime) {
    return KArchive_WriteFile7((KArchive*)self, qstring(name), qstring(data), perm, qstring(user), qstring(group), (QDateTime*)atime, (QDateTime*)mtime);
}

bool k_ar_write_file8(void* self, const char* name, char* data, mode_t perm, const char* user, const char* group, void* atime, void* mtime, void* ctime) {
    return KArchive_WriteFile8((KArchive*)self, qstring(name), qstring(data), perm, qstring(user), qstring(group), (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_ar_prepare_writing5(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm) {
    return KArchive_PrepareWriting5((KArchive*)self, qstring(name), qstring(user), qstring(group), size, perm);
}

bool k_ar_prepare_writing6(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime) {
    return KArchive_PrepareWriting6((KArchive*)self, qstring(name), qstring(user), qstring(group), size, perm, (QDateTime*)atime);
}

bool k_ar_prepare_writing7(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime, void* mtime) {
    return KArchive_PrepareWriting7((KArchive*)self, qstring(name), qstring(user), qstring(group), size, perm, (QDateTime*)atime, (QDateTime*)mtime);
}

bool k_ar_prepare_writing8(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KArchive_PrepareWriting8((KArchive*)self, qstring(name), qstring(user), qstring(group), size, perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_ar_open(void* self, int32_t mode) {
    return KAr_Open((KAr*)self, mode);
}

bool k_ar_super_open(void* self, int32_t mode) {
    return KAr_SuperOpen((KAr*)self, mode);
}

void k_ar_on_open(void* self, bool (*callback)(void*, int32_t)) {
    KAr_OnOpen((KAr*)self, (intptr_t)callback);
}

bool k_ar_close(void* self) {
    return KAr_Close((KAr*)self);
}

bool k_ar_super_close(void* self) {
    return KAr_SuperClose((KAr*)self);
}

void k_ar_on_close(void* self, bool (*callback)()) {
    KAr_OnClose((KAr*)self, (intptr_t)callback);
}

KArchiveDirectory* k_ar_root_dir(void* self) {
    return KAr_RootDir((KAr*)self);
}

KArchiveDirectory* k_ar_super_root_dir(void* self) {
    return KAr_SuperRootDir((KAr*)self);
}

void k_ar_on_root_dir(void* self, KArchiveDirectory* (*callback)()) {
    KAr_OnRootDir((KAr*)self, (intptr_t)callback);
}

bool k_ar_do_write_data(void* self, const char* data, long long size) {
    return KAr_DoWriteData((KAr*)self, data, size);
}

bool k_ar_super_do_write_data(void* self, const char* data, long long size) {
    return KAr_SuperDoWriteData((KAr*)self, data, size);
}

void k_ar_on_do_write_data(void* self, bool (*callback)(void*, const char*, long long)) {
    KAr_OnDoWriteData((KAr*)self, (intptr_t)callback);
}

bool k_ar_create_device(void* self, int32_t mode) {
    return KAr_CreateDevice((KAr*)self, mode);
}

bool k_ar_super_create_device(void* self, int32_t mode) {
    return KAr_SuperCreateDevice((KAr*)self, mode);
}

void k_ar_on_create_device(void* self, bool (*callback)(void*, int32_t)) {
    KAr_OnCreateDevice((KAr*)self, (intptr_t)callback);
}

void k_ar_set_error_string(void* self, const char* errorStr) {
    KAr_SetErrorString((KAr*)self, qstring(errorStr));
}

void k_ar_super_set_error_string(void* self, const char* errorStr) {
    KAr_SuperSetErrorString((KAr*)self, qstring(errorStr));
}

void k_ar_on_set_error_string(void* self, void (*callback)(void*, const char*)) {
    KAr_OnSetErrorString((KAr*)self, (intptr_t)callback);
}

KArchiveDirectory* k_ar_find_or_create(void* self, const char* path) {
    return KAr_FindOrCreate((KAr*)self, qstring(path));
}

KArchiveDirectory* k_ar_super_find_or_create(void* self, const char* path) {
    return KAr_SuperFindOrCreate((KAr*)self, qstring(path));
}

void k_ar_on_find_or_create(void* self, KArchiveDirectory* (*callback)(void*, const char*)) {
    KAr_OnFindOrCreate((KAr*)self, (intptr_t)callback);
}

void k_ar_set_device(void* self, void* dev) {
    KAr_SetDevice((KAr*)self, (QIODevice*)dev);
}

void k_ar_super_set_device(void* self, void* dev) {
    KAr_SuperSetDevice((KAr*)self, (QIODevice*)dev);
}

void k_ar_on_set_device(void* self, void (*callback)(void*, void*)) {
    KAr_OnSetDevice((KAr*)self, (intptr_t)callback);
}

void k_ar_set_root_dir(void* self, void* rootDir) {
    KAr_SetRootDir((KAr*)self, (KArchiveDirectory*)rootDir);
}

void k_ar_super_set_root_dir(void* self, void* rootDir) {
    KAr_SuperSetRootDir((KAr*)self, (KArchiveDirectory*)rootDir);
}

void k_ar_on_set_root_dir(void* self, void (*callback)(void*, void*)) {
    KAr_OnSetRootDir((KAr*)self, (intptr_t)callback);
}

void k_ar_delete(void* self) {
    KAr_Delete((KAr*)(self));
}
