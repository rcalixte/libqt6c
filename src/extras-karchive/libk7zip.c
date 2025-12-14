#include "libkarchive.hpp"
#include "libkarchivedirectory.hpp"
#include "../libqdatetime.hpp"
#include "../libqiodevice.hpp"
#include "../libqobject.hpp"
#include "libk7zip.hpp"
#include "libk7zip.h"

K7Zip* k_7zip_new(const char* filename) {
    return K7Zip_new(qstring(filename));
}

K7Zip* k_7zip_new2(void* dev) {
    return K7Zip_new2((QIODevice*)dev);
}

K7Zip* k_7zip_new3(void* param1) {
    return K7Zip_new3((K7Zip*)param1);
}

const char* k_7zip_tr(const char* sourceText) {
    libqt_string _str = QObject_Tr(sourceText);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_7zip_set_password(void* self, const char* password) {
    K7Zip_SetPassword((K7Zip*)self, qstring(password));
}

bool k_7zip_password_needed(void* self) {
    return K7Zip_PasswordNeeded((K7Zip*)self);
}

bool k_7zip_do_write_sym_link(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime) {
    return K7Zip_DoWriteSymLink((K7Zip*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

void k_7zip_on_do_write_sym_link(void* self, bool (*callback)(void*, const char*, const char*, const char*, const char*, mode_t, void*, void*, void*)) {
    K7Zip_OnDoWriteSymLink((K7Zip*)self, (intptr_t)callback);
}

bool k_7zip_qbase_do_write_sym_link(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime) {
    return K7Zip_QBaseDoWriteSymLink((K7Zip*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_7zip_do_write_dir(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime) {
    return K7Zip_DoWriteDir((K7Zip*)self, qstring(name), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

void k_7zip_on_do_write_dir(void* self, bool (*callback)(void*, const char*, const char*, const char*, mode_t, void*, void*, void*)) {
    K7Zip_OnDoWriteDir((K7Zip*)self, (intptr_t)callback);
}

bool k_7zip_qbase_do_write_dir(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime) {
    return K7Zip_QBaseDoWriteDir((K7Zip*)self, qstring(name), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_7zip_do_prepare_writing(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime, void* mtime, void* ctime) {
    return K7Zip_DoPrepareWriting((K7Zip*)self, qstring(name), qstring(user), qstring(group), size, perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

void k_7zip_on_do_prepare_writing(void* self, bool (*callback)(void*, const char*, const char*, const char*, long long, mode_t, void*, void*, void*)) {
    K7Zip_OnDoPrepareWriting((K7Zip*)self, (intptr_t)callback);
}

bool k_7zip_qbase_do_prepare_writing(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime, void* mtime, void* ctime) {
    return K7Zip_QBaseDoPrepareWriting((K7Zip*)self, qstring(name), qstring(user), qstring(group), size, perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_7zip_do_finish_writing(void* self, long long size) {
    return K7Zip_DoFinishWriting((K7Zip*)self, size);
}

void k_7zip_on_do_finish_writing(void* self, bool (*callback)(void*, long long)) {
    K7Zip_OnDoFinishWriting((K7Zip*)self, (intptr_t)callback);
}

bool k_7zip_qbase_do_finish_writing(void* self, long long size) {
    return K7Zip_QBaseDoFinishWriting((K7Zip*)self, size);
}

bool k_7zip_do_write_data(void* self, const char* data, long long size) {
    return K7Zip_DoWriteData((K7Zip*)self, data, size);
}

void k_7zip_on_do_write_data(void* self, bool (*callback)(void*, const char*, long long)) {
    K7Zip_OnDoWriteData((K7Zip*)self, (intptr_t)callback);
}

bool k_7zip_qbase_do_write_data(void* self, const char* data, long long size) {
    return K7Zip_QBaseDoWriteData((K7Zip*)self, data, size);
}

bool k_7zip_open_archive(void* self, int32_t mode) {
    return K7Zip_OpenArchive((K7Zip*)self, mode);
}

void k_7zip_on_open_archive(void* self, bool (*callback)(void*, int32_t)) {
    K7Zip_OnOpenArchive((K7Zip*)self, (intptr_t)callback);
}

bool k_7zip_qbase_open_archive(void* self, int32_t mode) {
    return K7Zip_QBaseOpenArchive((K7Zip*)self, mode);
}

bool k_7zip_close_archive(void* self) {
    return K7Zip_CloseArchive((K7Zip*)self);
}

void k_7zip_on_close_archive(void* self, bool (*callback)()) {
    K7Zip_OnCloseArchive((K7Zip*)self, (intptr_t)callback);
}

bool k_7zip_qbase_close_archive(void* self) {
    return K7Zip_QBaseCloseArchive((K7Zip*)self);
}

void k_7zip_virtual_hook(void* self, int id, void* data) {
    K7Zip_VirtualHook((K7Zip*)self, id, data);
}

void k_7zip_on_virtual_hook(void* self, void (*callback)(void*, int, void*)) {
    K7Zip_OnVirtualHook((K7Zip*)self, (intptr_t)callback);
}

void k_7zip_qbase_virtual_hook(void* self, int id, void* data) {
    K7Zip_QBaseVirtualHook((K7Zip*)self, id, data);
}

const char* k_7zip_tr2(const char* sourceText, const char* disambiguation) {
    libqt_string _str = QObject_Tr2(sourceText, disambiguation);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_7zip_tr3(const char* sourceText, const char* disambiguation, int n) {
    libqt_string _str = QObject_Tr3(sourceText, disambiguation, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_7zip_error_string(void* self) {
    libqt_string _str = KArchive_ErrorString((KArchive*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_7zip_is_open(void* self) {
    return KArchive_IsOpen((KArchive*)self);
}

int32_t k_7zip_mode(void* self) {
    return KArchive_Mode((KArchive*)self);
}

QIODevice* k_7zip_device(void* self) {
    return KArchive_Device((KArchive*)self);
}

const char* k_7zip_file_name(void* self) {
    libqt_string _str = KArchive_FileName((KArchive*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const KArchiveDirectory* k_7zip_directory(void* self) {
    return KArchive_Directory((KArchive*)self);
}

bool k_7zip_add_local_file(void* self, const char* fileName, const char* destName) {
    return KArchive_AddLocalFile((KArchive*)self, qstring(fileName), qstring(destName));
}

bool k_7zip_add_local_directory(void* self, const char* path, const char* destName) {
    return KArchive_AddLocalDirectory((KArchive*)self, qstring(path), qstring(destName));
}

bool k_7zip_write_dir(void* self, const char* name) {
    return KArchive_WriteDir((KArchive*)self, qstring(name));
}

bool k_7zip_write_sym_link(void* self, const char* name, const char* target) {
    return KArchive_WriteSymLink((KArchive*)self, qstring(name), qstring(target));
}

bool k_7zip_write_file(void* self, const char* name, const char* data) {
    return KArchive_WriteFile((KArchive*)self, qstring(name), qstring(data));
}

bool k_7zip_prepare_writing(void* self, const char* name, const char* user, const char* group, long long size) {
    return KArchive_PrepareWriting((KArchive*)self, qstring(name), qstring(user), qstring(group), size);
}

bool k_7zip_write_data(void* self, const char* data, long long size) {
    return KArchive_WriteData((KArchive*)self, data, size);
}

bool k_7zip_write_data2(void* self, const char* data) {
    return KArchive_WriteData2((KArchive*)self, qstring(data));
}

bool k_7zip_finish_writing(void* self, long long size) {
    return KArchive_FinishWriting((KArchive*)self, size);
}

bool k_7zip_write_dir2(void* self, const char* name, const char* user) {
    return KArchive_WriteDir2((KArchive*)self, qstring(name), qstring(user));
}

bool k_7zip_write_dir3(void* self, const char* name, const char* user, const char* group) {
    return KArchive_WriteDir3((KArchive*)self, qstring(name), qstring(user), qstring(group));
}

bool k_7zip_write_dir4(void* self, const char* name, const char* user, const char* group, mode_t perm) {
    return KArchive_WriteDir4((KArchive*)self, qstring(name), qstring(user), qstring(group), perm);
}

bool k_7zip_write_dir5(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime) {
    return KArchive_WriteDir5((KArchive*)self, qstring(name), qstring(user), qstring(group), perm, (QDateTime*)atime);
}

bool k_7zip_write_dir6(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime, void* mtime) {
    return KArchive_WriteDir6((KArchive*)self, qstring(name), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime);
}

bool k_7zip_write_dir7(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KArchive_WriteDir7((KArchive*)self, qstring(name), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_7zip_write_sym_link3(void* self, const char* name, const char* target, const char* user) {
    return KArchive_WriteSymLink3((KArchive*)self, qstring(name), qstring(target), qstring(user));
}

bool k_7zip_write_sym_link4(void* self, const char* name, const char* target, const char* user, const char* group) {
    return KArchive_WriteSymLink4((KArchive*)self, qstring(name), qstring(target), qstring(user), qstring(group));
}

bool k_7zip_write_sym_link5(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm) {
    return KArchive_WriteSymLink5((KArchive*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm);
}

bool k_7zip_write_sym_link6(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime) {
    return KArchive_WriteSymLink6((KArchive*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm, (QDateTime*)atime);
}

bool k_7zip_write_sym_link7(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime, void* mtime) {
    return KArchive_WriteSymLink7((KArchive*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime);
}

bool k_7zip_write_sym_link8(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KArchive_WriteSymLink8((KArchive*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_7zip_write_file3(void* self, const char* name, const char* data, mode_t perm) {
    return KArchive_WriteFile3((KArchive*)self, qstring(name), qstring(data), perm);
}

bool k_7zip_write_file4(void* self, const char* name, const char* data, mode_t perm, const char* user) {
    return KArchive_WriteFile4((KArchive*)self, qstring(name), qstring(data), perm, qstring(user));
}

bool k_7zip_write_file5(void* self, const char* name, const char* data, mode_t perm, const char* user, const char* group) {
    return KArchive_WriteFile5((KArchive*)self, qstring(name), qstring(data), perm, qstring(user), qstring(group));
}

bool k_7zip_write_file6(void* self, const char* name, const char* data, mode_t perm, const char* user, const char* group, void* atime) {
    return KArchive_WriteFile6((KArchive*)self, qstring(name), qstring(data), perm, qstring(user), qstring(group), (QDateTime*)atime);
}

bool k_7zip_write_file7(void* self, const char* name, const char* data, mode_t perm, const char* user, const char* group, void* atime, void* mtime) {
    return KArchive_WriteFile7((KArchive*)self, qstring(name), qstring(data), perm, qstring(user), qstring(group), (QDateTime*)atime, (QDateTime*)mtime);
}

bool k_7zip_write_file8(void* self, const char* name, const char* data, mode_t perm, const char* user, const char* group, void* atime, void* mtime, void* ctime) {
    return KArchive_WriteFile8((KArchive*)self, qstring(name), qstring(data), perm, qstring(user), qstring(group), (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_7zip_prepare_writing5(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm) {
    return KArchive_PrepareWriting5((KArchive*)self, qstring(name), qstring(user), qstring(group), size, perm);
}

bool k_7zip_prepare_writing6(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime) {
    return KArchive_PrepareWriting6((KArchive*)self, qstring(name), qstring(user), qstring(group), size, perm, (QDateTime*)atime);
}

bool k_7zip_prepare_writing7(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime, void* mtime) {
    return KArchive_PrepareWriting7((KArchive*)self, qstring(name), qstring(user), qstring(group), size, perm, (QDateTime*)atime, (QDateTime*)mtime);
}

bool k_7zip_prepare_writing8(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KArchive_PrepareWriting8((KArchive*)self, qstring(name), qstring(user), qstring(group), size, perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_7zip_open(void* self, int32_t mode) {
    return K7Zip_Open((K7Zip*)self, mode);
}

bool k_7zip_qbase_open(void* self, int32_t mode) {
    return K7Zip_QBaseOpen((K7Zip*)self, mode);
}

void k_7zip_on_open(void* self, bool (*callback)(void*, int32_t)) {
    K7Zip_OnOpen((K7Zip*)self, (intptr_t)callback);
}

bool k_7zip_close(void* self) {
    return K7Zip_Close((K7Zip*)self);
}

bool k_7zip_qbase_close(void* self) {
    return K7Zip_QBaseClose((K7Zip*)self);
}

void k_7zip_on_close(void* self, bool (*callback)()) {
    K7Zip_OnClose((K7Zip*)self, (intptr_t)callback);
}

KArchiveDirectory* k_7zip_root_dir(void* self) {
    return K7Zip_RootDir((K7Zip*)self);
}

KArchiveDirectory* k_7zip_qbase_root_dir(void* self) {
    return K7Zip_QBaseRootDir((K7Zip*)self);
}

void k_7zip_on_root_dir(void* self, KArchiveDirectory* (*callback)()) {
    K7Zip_OnRootDir((K7Zip*)self, (intptr_t)callback);
}

bool k_7zip_create_device(void* self, int32_t mode) {
    return K7Zip_CreateDevice((K7Zip*)self, mode);
}

bool k_7zip_qbase_create_device(void* self, int32_t mode) {
    return K7Zip_QBaseCreateDevice((K7Zip*)self, mode);
}

void k_7zip_on_create_device(void* self, bool (*callback)(void*, int32_t)) {
    K7Zip_OnCreateDevice((K7Zip*)self, (intptr_t)callback);
}

void k_7zip_set_error_string(void* self, const char* errorStr) {
    K7Zip_SetErrorString((K7Zip*)self, qstring(errorStr));
}

void k_7zip_qbase_set_error_string(void* self, const char* errorStr) {
    K7Zip_QBaseSetErrorString((K7Zip*)self, qstring(errorStr));
}

void k_7zip_on_set_error_string(void* self, void (*callback)(void*, const char*)) {
    K7Zip_OnSetErrorString((K7Zip*)self, (intptr_t)callback);
}

KArchiveDirectory* k_7zip_find_or_create(void* self, const char* path) {
    return K7Zip_FindOrCreate((K7Zip*)self, qstring(path));
}

KArchiveDirectory* k_7zip_qbase_find_or_create(void* self, const char* path) {
    return K7Zip_QBaseFindOrCreate((K7Zip*)self, qstring(path));
}

void k_7zip_on_find_or_create(void* self, KArchiveDirectory* (*callback)(void*, const char*)) {
    K7Zip_OnFindOrCreate((K7Zip*)self, (intptr_t)callback);
}

void k_7zip_set_device(void* self, void* dev) {
    K7Zip_SetDevice((K7Zip*)self, (QIODevice*)dev);
}

void k_7zip_qbase_set_device(void* self, void* dev) {
    K7Zip_QBaseSetDevice((K7Zip*)self, (QIODevice*)dev);
}

void k_7zip_on_set_device(void* self, void (*callback)(void*, void*)) {
    K7Zip_OnSetDevice((K7Zip*)self, (intptr_t)callback);
}

void k_7zip_set_root_dir(void* self, void* rootDir) {
    K7Zip_SetRootDir((K7Zip*)self, (KArchiveDirectory*)rootDir);
}

void k_7zip_qbase_set_root_dir(void* self, void* rootDir) {
    K7Zip_QBaseSetRootDir((K7Zip*)self, (KArchiveDirectory*)rootDir);
}

void k_7zip_on_set_root_dir(void* self, void (*callback)(void*, void*)) {
    K7Zip_OnSetRootDir((K7Zip*)self, (intptr_t)callback);
}

void k_7zip_delete(void* self) {
    K7Zip_Delete((K7Zip*)(self));
}
