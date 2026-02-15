#include "libkarchive.hpp"
#include "libkarchivedirectory.hpp"
#include "../libqdatetime.hpp"
#include "../libqiodevice.hpp"
#include "../libqobject.hpp"
#include "libkrcc.hpp"
#include "libkrcc.h"

KRcc* k_rcc_new(const char* filename) {
    return KRcc_new(qstring(filename));
}

KRcc* k_rcc_new2(void* param1) {
    return KRcc_new2((KRcc*)param1);
}

const char* k_rcc_tr(const char* sourceText) {
    libqt_string _str = QObject_Tr(sourceText);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_rcc_do_prepare_writing(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KRcc_DoPrepareWriting((KRcc*)self, qstring(name), qstring(user), qstring(group), size, perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

void k_rcc_on_do_prepare_writing(void* self, bool (*callback)(void*, const char*, const char*, const char*, long long, mode_t, void*, void*, void*)) {
    KRcc_OnDoPrepareWriting((KRcc*)self, (intptr_t)callback);
}

bool k_rcc_qbase_do_prepare_writing(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KRcc_QBaseDoPrepareWriting((KRcc*)self, qstring(name), qstring(user), qstring(group), size, perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_rcc_do_finish_writing(void* self, long long size) {
    return KRcc_DoFinishWriting((KRcc*)self, size);
}

void k_rcc_on_do_finish_writing(void* self, bool (*callback)(void*, long long)) {
    KRcc_OnDoFinishWriting((KRcc*)self, (intptr_t)callback);
}

bool k_rcc_qbase_do_finish_writing(void* self, long long size) {
    return KRcc_QBaseDoFinishWriting((KRcc*)self, size);
}

bool k_rcc_do_write_dir(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KRcc_DoWriteDir((KRcc*)self, qstring(name), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

void k_rcc_on_do_write_dir(void* self, bool (*callback)(void*, const char*, const char*, const char*, mode_t, void*, void*, void*)) {
    KRcc_OnDoWriteDir((KRcc*)self, (intptr_t)callback);
}

bool k_rcc_qbase_do_write_dir(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KRcc_QBaseDoWriteDir((KRcc*)self, qstring(name), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_rcc_do_write_sym_link(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KRcc_DoWriteSymLink((KRcc*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

void k_rcc_on_do_write_sym_link(void* self, bool (*callback)(void*, const char*, const char*, const char*, const char*, mode_t, void*, void*, void*)) {
    KRcc_OnDoWriteSymLink((KRcc*)self, (intptr_t)callback);
}

bool k_rcc_qbase_do_write_sym_link(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KRcc_QBaseDoWriteSymLink((KRcc*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_rcc_open_archive(void* self, int32_t mode) {
    return KRcc_OpenArchive((KRcc*)self, mode);
}

void k_rcc_on_open_archive(void* self, bool (*callback)(void*, int32_t)) {
    KRcc_OnOpenArchive((KRcc*)self, (intptr_t)callback);
}

bool k_rcc_qbase_open_archive(void* self, int32_t mode) {
    return KRcc_QBaseOpenArchive((KRcc*)self, mode);
}

bool k_rcc_close_archive(void* self) {
    return KRcc_CloseArchive((KRcc*)self);
}

void k_rcc_on_close_archive(void* self, bool (*callback)()) {
    KRcc_OnCloseArchive((KRcc*)self, (intptr_t)callback);
}

bool k_rcc_qbase_close_archive(void* self) {
    return KRcc_QBaseCloseArchive((KRcc*)self);
}

void k_rcc_virtual_hook(void* self, int id, void* data) {
    KRcc_VirtualHook((KRcc*)self, id, data);
}

void k_rcc_on_virtual_hook(void* self, void (*callback)(void*, int, void*)) {
    KRcc_OnVirtualHook((KRcc*)self, (intptr_t)callback);
}

void k_rcc_qbase_virtual_hook(void* self, int id, void* data) {
    KRcc_QBaseVirtualHook((KRcc*)self, id, data);
}

const char* k_rcc_tr2(const char* sourceText, const char* disambiguation) {
    libqt_string _str = QObject_Tr2(sourceText, disambiguation);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_rcc_tr3(const char* sourceText, const char* disambiguation, int n) {
    libqt_string _str = QObject_Tr3(sourceText, disambiguation, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_rcc_error_string(void* self) {
    libqt_string _str = KArchive_ErrorString((KArchive*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_rcc_is_open(void* self) {
    return KArchive_IsOpen((KArchive*)self);
}

int32_t k_rcc_mode(void* self) {
    return KArchive_Mode((KArchive*)self);
}

QIODevice* k_rcc_device(void* self) {
    return KArchive_Device((KArchive*)self);
}

const char* k_rcc_file_name(void* self) {
    libqt_string _str = KArchive_FileName((KArchive*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const KArchiveDirectory* k_rcc_directory(void* self) {
    return KArchive_Directory((KArchive*)self);
}

bool k_rcc_add_local_file(void* self, const char* fileName, const char* destName) {
    return KArchive_AddLocalFile((KArchive*)self, qstring(fileName), qstring(destName));
}

bool k_rcc_add_local_directory(void* self, const char* path, const char* destName) {
    return KArchive_AddLocalDirectory((KArchive*)self, qstring(path), qstring(destName));
}

bool k_rcc_write_dir(void* self, const char* name) {
    return KArchive_WriteDir((KArchive*)self, qstring(name));
}

bool k_rcc_write_sym_link(void* self, const char* name, const char* target) {
    return KArchive_WriteSymLink((KArchive*)self, qstring(name), qstring(target));
}

bool k_rcc_write_file(void* self, const char* name, char* data) {
    return KArchive_WriteFile((KArchive*)self, qstring(name), qstring(data));
}

bool k_rcc_prepare_writing(void* self, const char* name, const char* user, const char* group, long long size) {
    return KArchive_PrepareWriting((KArchive*)self, qstring(name), qstring(user), qstring(group), size);
}

bool k_rcc_write_data(void* self, const char* data, long long size) {
    return KArchive_WriteData((KArchive*)self, data, size);
}

bool k_rcc_write_data2(void* self, char* data) {
    return KArchive_WriteData2((KArchive*)self, qstring(data));
}

bool k_rcc_finish_writing(void* self, long long size) {
    return KArchive_FinishWriting((KArchive*)self, size);
}

bool k_rcc_write_dir2(void* self, const char* name, const char* user) {
    return KArchive_WriteDir2((KArchive*)self, qstring(name), qstring(user));
}

bool k_rcc_write_dir3(void* self, const char* name, const char* user, const char* group) {
    return KArchive_WriteDir3((KArchive*)self, qstring(name), qstring(user), qstring(group));
}

bool k_rcc_write_dir4(void* self, const char* name, const char* user, const char* group, mode_t perm) {
    return KArchive_WriteDir4((KArchive*)self, qstring(name), qstring(user), qstring(group), perm);
}

bool k_rcc_write_dir5(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime) {
    return KArchive_WriteDir5((KArchive*)self, qstring(name), qstring(user), qstring(group), perm, (QDateTime*)atime);
}

bool k_rcc_write_dir6(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime, void* mtime) {
    return KArchive_WriteDir6((KArchive*)self, qstring(name), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime);
}

bool k_rcc_write_dir7(void* self, const char* name, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KArchive_WriteDir7((KArchive*)self, qstring(name), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_rcc_write_sym_link3(void* self, const char* name, const char* target, const char* user) {
    return KArchive_WriteSymLink3((KArchive*)self, qstring(name), qstring(target), qstring(user));
}

bool k_rcc_write_sym_link4(void* self, const char* name, const char* target, const char* user, const char* group) {
    return KArchive_WriteSymLink4((KArchive*)self, qstring(name), qstring(target), qstring(user), qstring(group));
}

bool k_rcc_write_sym_link5(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm) {
    return KArchive_WriteSymLink5((KArchive*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm);
}

bool k_rcc_write_sym_link6(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime) {
    return KArchive_WriteSymLink6((KArchive*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm, (QDateTime*)atime);
}

bool k_rcc_write_sym_link7(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime, void* mtime) {
    return KArchive_WriteSymLink7((KArchive*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime);
}

bool k_rcc_write_sym_link8(void* self, const char* name, const char* target, const char* user, const char* group, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KArchive_WriteSymLink8((KArchive*)self, qstring(name), qstring(target), qstring(user), qstring(group), perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_rcc_write_file3(void* self, const char* name, char* data, mode_t perm) {
    return KArchive_WriteFile3((KArchive*)self, qstring(name), qstring(data), perm);
}

bool k_rcc_write_file4(void* self, const char* name, char* data, mode_t perm, const char* user) {
    return KArchive_WriteFile4((KArchive*)self, qstring(name), qstring(data), perm, qstring(user));
}

bool k_rcc_write_file5(void* self, const char* name, char* data, mode_t perm, const char* user, const char* group) {
    return KArchive_WriteFile5((KArchive*)self, qstring(name), qstring(data), perm, qstring(user), qstring(group));
}

bool k_rcc_write_file6(void* self, const char* name, char* data, mode_t perm, const char* user, const char* group, void* atime) {
    return KArchive_WriteFile6((KArchive*)self, qstring(name), qstring(data), perm, qstring(user), qstring(group), (QDateTime*)atime);
}

bool k_rcc_write_file7(void* self, const char* name, char* data, mode_t perm, const char* user, const char* group, void* atime, void* mtime) {
    return KArchive_WriteFile7((KArchive*)self, qstring(name), qstring(data), perm, qstring(user), qstring(group), (QDateTime*)atime, (QDateTime*)mtime);
}

bool k_rcc_write_file8(void* self, const char* name, char* data, mode_t perm, const char* user, const char* group, void* atime, void* mtime, void* ctime) {
    return KArchive_WriteFile8((KArchive*)self, qstring(name), qstring(data), perm, qstring(user), qstring(group), (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_rcc_prepare_writing5(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm) {
    return KArchive_PrepareWriting5((KArchive*)self, qstring(name), qstring(user), qstring(group), size, perm);
}

bool k_rcc_prepare_writing6(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime) {
    return KArchive_PrepareWriting6((KArchive*)self, qstring(name), qstring(user), qstring(group), size, perm, (QDateTime*)atime);
}

bool k_rcc_prepare_writing7(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime, void* mtime) {
    return KArchive_PrepareWriting7((KArchive*)self, qstring(name), qstring(user), qstring(group), size, perm, (QDateTime*)atime, (QDateTime*)mtime);
}

bool k_rcc_prepare_writing8(void* self, const char* name, const char* user, const char* group, long long size, mode_t perm, void* atime, void* mtime, void* ctime) {
    return KArchive_PrepareWriting8((KArchive*)self, qstring(name), qstring(user), qstring(group), size, perm, (QDateTime*)atime, (QDateTime*)mtime, (QDateTime*)ctime);
}

bool k_rcc_open(void* self, int32_t mode) {
    return KRcc_Open((KRcc*)self, mode);
}

bool k_rcc_qbase_open(void* self, int32_t mode) {
    return KRcc_QBaseOpen((KRcc*)self, mode);
}

void k_rcc_on_open(void* self, bool (*callback)(void*, int32_t)) {
    KRcc_OnOpen((KRcc*)self, (intptr_t)callback);
}

bool k_rcc_close(void* self) {
    return KRcc_Close((KRcc*)self);
}

bool k_rcc_qbase_close(void* self) {
    return KRcc_QBaseClose((KRcc*)self);
}

void k_rcc_on_close(void* self, bool (*callback)()) {
    KRcc_OnClose((KRcc*)self, (intptr_t)callback);
}

KArchiveDirectory* k_rcc_root_dir(void* self) {
    return KRcc_RootDir((KRcc*)self);
}

KArchiveDirectory* k_rcc_qbase_root_dir(void* self) {
    return KRcc_QBaseRootDir((KRcc*)self);
}

void k_rcc_on_root_dir(void* self, KArchiveDirectory* (*callback)()) {
    KRcc_OnRootDir((KRcc*)self, (intptr_t)callback);
}

bool k_rcc_do_write_data(void* self, const char* data, long long size) {
    return KRcc_DoWriteData((KRcc*)self, data, size);
}

bool k_rcc_qbase_do_write_data(void* self, const char* data, long long size) {
    return KRcc_QBaseDoWriteData((KRcc*)self, data, size);
}

void k_rcc_on_do_write_data(void* self, bool (*callback)(void*, const char*, long long)) {
    KRcc_OnDoWriteData((KRcc*)self, (intptr_t)callback);
}

bool k_rcc_create_device(void* self, int32_t mode) {
    return KRcc_CreateDevice((KRcc*)self, mode);
}

bool k_rcc_qbase_create_device(void* self, int32_t mode) {
    return KRcc_QBaseCreateDevice((KRcc*)self, mode);
}

void k_rcc_on_create_device(void* self, bool (*callback)(void*, int32_t)) {
    KRcc_OnCreateDevice((KRcc*)self, (intptr_t)callback);
}

void k_rcc_set_error_string(void* self, const char* errorStr) {
    KRcc_SetErrorString((KRcc*)self, qstring(errorStr));
}

void k_rcc_qbase_set_error_string(void* self, const char* errorStr) {
    KRcc_QBaseSetErrorString((KRcc*)self, qstring(errorStr));
}

void k_rcc_on_set_error_string(void* self, void (*callback)(void*, const char*)) {
    KRcc_OnSetErrorString((KRcc*)self, (intptr_t)callback);
}

KArchiveDirectory* k_rcc_find_or_create(void* self, const char* path) {
    return KRcc_FindOrCreate((KRcc*)self, qstring(path));
}

KArchiveDirectory* k_rcc_qbase_find_or_create(void* self, const char* path) {
    return KRcc_QBaseFindOrCreate((KRcc*)self, qstring(path));
}

void k_rcc_on_find_or_create(void* self, KArchiveDirectory* (*callback)(void*, const char*)) {
    KRcc_OnFindOrCreate((KRcc*)self, (intptr_t)callback);
}

void k_rcc_set_device(void* self, void* dev) {
    KRcc_SetDevice((KRcc*)self, (QIODevice*)dev);
}

void k_rcc_qbase_set_device(void* self, void* dev) {
    KRcc_QBaseSetDevice((KRcc*)self, (QIODevice*)dev);
}

void k_rcc_on_set_device(void* self, void (*callback)(void*, void*)) {
    KRcc_OnSetDevice((KRcc*)self, (intptr_t)callback);
}

void k_rcc_set_root_dir(void* self, void* rootDir) {
    KRcc_SetRootDir((KRcc*)self, (KArchiveDirectory*)rootDir);
}

void k_rcc_qbase_set_root_dir(void* self, void* rootDir) {
    KRcc_QBaseSetRootDir((KRcc*)self, (KArchiveDirectory*)rootDir);
}

void k_rcc_on_set_root_dir(void* self, void (*callback)(void*, void*)) {
    KRcc_OnSetRootDir((KRcc*)self, (intptr_t)callback);
}

void k_rcc_delete(void* self) {
    KRcc_Delete((KRcc*)(self));
}
