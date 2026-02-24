#include "libkarchive.hpp"
#include "libkarchivedirectory.hpp"
#include "../libqdatetime.hpp"
#include "../libqiodevice.hpp"
#include "../libqobject.hpp"
#include "libktar.hpp"
#include "libktar.h"

KTar* k_tar_new(const char* filename) {
    return KTar_new(qstring(filename));
}

KTar* k_tar_new2(void* dev) {
    return KTar_new2((QIODevice*)dev);
}

KTar* k_tar_new3(void* param1) {
    return KTar_new3((KTar*)param1);
}

KTar* k_tar_new4(const char* filename, const char* mimetype) {
    return KTar_new4(qstring(filename), qstring(mimetype));
}

const char* k_tar_tr(const char* sourceText) {
    libqt_string _str = QObject_Tr(sourceText);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_tar_set_orig_file_name(void* self, char* fileName) {
    KTar_SetOrigFileName((KTar*)self, qstring(fileName));
}

bool k_tar_do_write_sym_link(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KTar_DoWriteSymLink((KTar*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

void k_tar_on_do_write_sym_link(void* self, bool (*callback)(void*, const char*, const char*, const char*, const char*, mode_t, void*, void*, void*)) {
    KTar_OnDoWriteSymLink((KTar*)self, (intptr_t)callback);
}

bool k_tar_super_do_write_sym_link(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KTar_SuperDoWriteSymLink((KTar*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_tar_do_write_dir(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KTar_DoWriteDir((KTar*)self, qstring(name), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

void k_tar_on_do_write_dir(void* self, bool (*callback)(void*, const char*, const char*, const char*, mode_t, void*, void*, void*)) {
    KTar_OnDoWriteDir((KTar*)self, (intptr_t)callback);
}

bool k_tar_super_do_write_dir(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KTar_SuperDoWriteDir((KTar*)self, qstring(name), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_tar_do_prepare_writing(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KTar_DoPrepareWriting((KTar*)self, qstring(name), qstring(user), qstring(group), size, perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

void k_tar_on_do_prepare_writing(void* self, bool (*callback)(void*, const char*, const char*, const char*, long long, mode_t, void*, void*, void*)) {
    KTar_OnDoPrepareWriting((KTar*)self, (intptr_t)callback);
}

bool k_tar_super_do_prepare_writing(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KTar_SuperDoPrepareWriting((KTar*)self, qstring(name), qstring(user), qstring(group), size, perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_tar_do_finish_writing(void* self, long long size) {
    return KTar_DoFinishWriting((KTar*)self, size);
}

void k_tar_on_do_finish_writing(void* self, bool (*callback)(void*, long long)) {
    KTar_OnDoFinishWriting((KTar*)self, (intptr_t)callback);
}

bool k_tar_super_do_finish_writing(void* self, long long size) {
    return KTar_SuperDoFinishWriting((KTar*)self, size);
}

bool k_tar_open_archive(void* self, int32_t mode) {
    return KTar_OpenArchive((KTar*)self, mode);
}

void k_tar_on_open_archive(void* self, bool (*callback)(void*, int32_t)) {
    KTar_OnOpenArchive((KTar*)self, (intptr_t)callback);
}

bool k_tar_super_open_archive(void* self, int32_t mode) {
    return KTar_SuperOpenArchive((KTar*)self, mode);
}

bool k_tar_close_archive(void* self) {
    return KTar_CloseArchive((KTar*)self);
}

void k_tar_on_close_archive(void* self, bool (*callback)()) {
    KTar_OnCloseArchive((KTar*)self, (intptr_t)callback);
}

bool k_tar_super_close_archive(void* self) {
    return KTar_SuperCloseArchive((KTar*)self);
}

bool k_tar_create_device(void* self, int32_t mode) {
    return KTar_CreateDevice((KTar*)self, mode);
}

void k_tar_on_create_device(void* self, bool (*callback)(void*, int32_t)) {
    KTar_OnCreateDevice((KTar*)self, (intptr_t)callback);
}

bool k_tar_super_create_device(void* self, int32_t mode) {
    return KTar_SuperCreateDevice((KTar*)self, mode);
}

void k_tar_virtual_hook(void* self, int id, void* data) {
    KTar_VirtualHook((KTar*)self, id, data);
}

void k_tar_on_virtual_hook(void* self, void (*callback)(void*, int, void*)) {
    KTar_OnVirtualHook((KTar*)self, (intptr_t)callback);
}

void k_tar_super_virtual_hook(void* self, int id, void* data) {
    KTar_SuperVirtualHook((KTar*)self, id, data);
}

const char* k_tar_tr2(const char* sourceText, const char* disambiguation) {
    libqt_string _str = QObject_Tr2(sourceText, disambiguation);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_tar_tr3(const char* sourceText, const char* disambiguation, int n) {
    libqt_string _str = QObject_Tr3(sourceText, disambiguation, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_tar_error_string(void* self) {
    libqt_string _str = KArchive_ErrorString((KArchive*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_tar_is_open(void* self) {
    return KArchive_IsOpen((KArchive*)self);
}

int32_t k_tar_mode(void* self) {
    return KArchive_Mode((KArchive*)self);
}

QIODevice* k_tar_device(void* self) {
    return KArchive_Device((KArchive*)self);
}

const char* k_tar_file_name(void* self) {
    libqt_string _str = KArchive_FileName((KArchive*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const KArchiveDirectory* k_tar_directory(void* self) {
    return KArchive_Directory((KArchive*)self);
}

bool k_tar_add_local_file(void* self, const char* fileName, const char* destName) {
    return KArchive_AddLocalFile((KArchive*)self, qstring(fileName), qstring(destName));
}

bool k_tar_add_local_directory(void* self, const char* path, const char* destName) {
    return KArchive_AddLocalDirectory((KArchive*)self, qstring(path), qstring(destName));
}

bool k_tar_write_dir(void* self, const char* name) {
    return KArchive_WriteDir((KArchive*)self, qstring(name));
}

bool k_tar_write_sym_link(void* self, const char* name, const char* target) {
    return KArchive_WriteSymLink((KArchive*)self, qstring(name), qstring(target));
}

bool k_tar_write_file(void* self, const char* name, char* data) {
    return KArchive_WriteFile((KArchive*)self, qstring(name), qstring(data));
}

bool k_tar_prepare_writing(void* self, const char* name, const char* user, const char* group, long long size) {
    return KArchive_PrepareWriting((KArchive*)self, qstring(name), qstring(user), qstring(group), size);
}

bool k_tar_write_data(void* self, const char* data, long long size) {
    return KArchive_WriteData((KArchive*)self, data, size);
}

bool k_tar_write_data2(void* self, char* data) {
    return KArchive_WriteData2((KArchive*)self, qstring(data));
}

bool k_tar_finish_writing(void* self, long long size) {
    return KArchive_FinishWriting((KArchive*)self, size);
}

bool k_tar_write_dir2(void* self, const char* name, const char* user) {
    return KArchive_WriteDir2((KArchive*)self, qstring(name), qstring(user));
}

bool k_tar_write_dir3(void* self, const char* name, const char* user, const char* group) {
    return KArchive_WriteDir3((KArchive*)self, qstring(name), qstring(user), qstring(group));
}

bool k_tar_write_dir4(void* self, const char* name, const char* user, const char* group, mode_t perm) {
    return KArchive_WriteDir4((KArchive*)self, qstring(name), qstring(user), qstring(group), perm);
}

bool k_tar_write_dir5(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime) {
    return KArchive_WriteDir5((KArchive*)self, qstring(name), qstring(user), qstring(group), perm, (QDateTime*)atime);
}

bool k_tar_write_dir6(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime, void* mtime) {
    return KArchive_WriteDir6((KArchive*)self, qstring(name), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime);
}

bool k_tar_write_dir7(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KArchive_WriteDir7((KArchive*)self, qstring(name), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_tar_write_sym_link3(void* self, const char* name, const char* target, const char* user) {
    return KArchive_WriteSymLink3((KArchive*)self, qstring(name), qstring(target), qstring(user));
}

bool k_tar_write_sym_link4(void* self, const char* name, const char* target, const char* user, const char* group) {
    return KArchive_WriteSymLink4((KArchive*)self, qstring(name), qstring(target), qstring(user), qstring(group));
}

bool k_tar_write_sym_link5(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm) {
    return KArchive_WriteSymLink5((KArchive*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm);
}

bool k_tar_write_sym_link6(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime) {
    return KArchive_WriteSymLink6((KArchive*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm, (QDateTime*)atime);
}

bool k_tar_write_sym_link7(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime, void* mtime) {
    return KArchive_WriteSymLink7((KArchive*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime);
}

bool k_tar_write_sym_link8(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KArchive_WriteSymLink8((KArchive*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_tar_write_file3(void* self, const char* name, char* data, mode_t perm) {
    return KArchive_WriteFile3((KArchive*)self, qstring(name), qstring(data), perm);
}

bool k_tar_write_file4(void* self, const char* name, char* data, mode_t perm, const char* user) {
    return KArchive_WriteFile4((KArchive*)self, qstring(name), qstring(data), perm, qstring(user));
}

bool k_tar_write_file5(void* self, const char* name, char* data, mode_t perm, const char* user, const char* group) {
    return KArchive_WriteFile5((KArchive*)self, qstring(name), qstring(data), perm, qstring(user), qstring(group));
}

bool k_tar_write_file6(void* self, const char* name, char* data, mode_t perm, const char* user, const char* group, void* atime) {
    return KArchive_WriteFile6((KArchive*)self, qstring(name), qstring(data), perm, qstring(user), qstring(group), (QDateTime*)atime);
}

bool k_tar_write_file7(void* self, const char* name, char* data, mode_t perm, const char* user, const char* group, void* atime, void* mtime) {
    return KArchive_WriteFile7((KArchive*)self, qstring(name), qstring(data), perm, qstring(user), qstring(group), (QDateTime*)atime, (QDateTime*)mtime);
}

bool k_tar_write_file8(void* self, const char* name, char* data, mode_t perm, const char* user, const char* group, void* atime, void* mtime, void* ctime) {
    return KArchive_WriteFile8((KArchive*)self, qstring(name), qstring(data), perm, qstring(user), qstring(group), (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_tar_prepare_writing5(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm) {
    return KArchive_PrepareWriting5((KArchive*)self, qstring(name), qstring(user), qstring(group), size, perm);
}

bool k_tar_prepare_writing6(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime) {
    return KArchive_PrepareWriting6((KArchive*)self, qstring(name), qstring(user), qstring(group), size, perm, (QDateTime*)atime);
}

bool k_tar_prepare_writing7(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime, void* mtime) {
    return KArchive_PrepareWriting7((KArchive*)self, qstring(name), qstring(user), qstring(group), size, perm, (QDateTime*)atime, (QDateTime*)mtime);
}

bool k_tar_prepare_writing8(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KArchive_PrepareWriting8((KArchive*)self, qstring(name), qstring(user), qstring(group), size, perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_tar_open(void* self, int32_t mode) {
    return KTar_Open((KTar*)self, mode);
}

bool k_tar_super_open(void* self, int32_t mode) {
    return KTar_SuperOpen((KTar*)self, mode);
}

void k_tar_on_open(void* self, bool (*callback)(void*, int32_t)) {
    KTar_OnOpen((KTar*)self, (intptr_t)callback);
}

bool k_tar_close(void* self) {
    return KTar_Close((KTar*)self);
}

bool k_tar_super_close(void* self) {
    return KTar_SuperClose((KTar*)self);
}

void k_tar_on_close(void* self, bool (*callback)()) {
    KTar_OnClose((KTar*)self, (intptr_t)callback);
}

KArchiveDirectory* k_tar_root_dir(void* self) {
    return KTar_RootDir((KTar*)self);
}

KArchiveDirectory* k_tar_super_root_dir(void* self) {
    return KTar_SuperRootDir((KTar*)self);
}

void k_tar_on_root_dir(void* self, KArchiveDirectory* (*callback)()) {
    KTar_OnRootDir((KTar*)self, (intptr_t)callback);
}

bool k_tar_do_write_data(void* self, const char* data, long long size) {
    return KTar_DoWriteData((KTar*)self, data, size);
}

bool k_tar_super_do_write_data(void* self, const char* data, long long size) {
    return KTar_SuperDoWriteData((KTar*)self, data, size);
}

void k_tar_on_do_write_data(void* self, bool (*callback)(void*, const char*, long long)) {
    KTar_OnDoWriteData((KTar*)self, (intptr_t)callback);
}

void k_tar_set_error_string(void* self, const char* errorStr) {
    KTar_SetErrorString((KTar*)self, qstring(errorStr));
}

void k_tar_super_set_error_string(void* self, const char* errorStr) {
    KTar_SuperSetErrorString((KTar*)self, qstring(errorStr));
}

void k_tar_on_set_error_string(void* self, void (*callback)(void*, const char*)) {
    KTar_OnSetErrorString((KTar*)self, (intptr_t)callback);
}

KArchiveDirectory* k_tar_find_or_create(void* self, const char* path) {
    return KTar_FindOrCreate((KTar*)self, qstring(path));
}

KArchiveDirectory* k_tar_super_find_or_create(void* self, const char* path) {
    return KTar_SuperFindOrCreate((KTar*)self, qstring(path));
}

void k_tar_on_find_or_create(void* self, KArchiveDirectory* (*callback)(void*, const char*)) {
    KTar_OnFindOrCreate((KTar*)self, (intptr_t)callback);
}

void k_tar_set_device(void* self, void* dev) {
    KTar_SetDevice((KTar*)self, (QIODevice*)dev);
}

void k_tar_super_set_device(void* self, void* dev) {
    KTar_SuperSetDevice((KTar*)self, (QIODevice*)dev);
}

void k_tar_on_set_device(void* self, void (*callback)(void*, void*)) {
    KTar_OnSetDevice((KTar*)self, (intptr_t)callback);
}

void k_tar_set_root_dir(void* self, void* rootDir) {
    KTar_SetRootDir((KTar*)self, (KArchiveDirectory*)rootDir);
}

void k_tar_super_set_root_dir(void* self, void* rootDir) {
    KTar_SuperSetRootDir((KTar*)self, (KArchiveDirectory*)rootDir);
}

void k_tar_on_set_root_dir(void* self, void (*callback)(void*, void*)) {
    KTar_OnSetRootDir((KTar*)self, (intptr_t)callback);
}

void k_tar_delete(void* self) {
    KTar_Delete((KTar*)(self));
}
