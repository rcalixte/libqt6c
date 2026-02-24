#include "libkarchive.hpp"
#include "libkarchiveentry.hpp"
#include "../libqdatetime.hpp"
#include "../libqiodevice.hpp"
#include "libkarchivefile.hpp"
#include "libkarchivefile.h"

KArchiveFile* k_archivefile_new(void* archive, const char* name, int access, void* date, const char* user, const char* group, const char* symlink, long long pos, long long size) {
    return KArchiveFile_new((KArchive*)archive, qstring(name), access, (QDateTime*)date, qstring(user), qstring(group), qstring(symlink), pos, size);
}

KArchiveFile* k_archivefile_new2(void* param1) {
    return KArchiveFile_new2((KArchiveFile*)param1);
}

long long k_archivefile_position(void* self) {
    return KArchiveFile_Position((KArchiveFile*)self);
}

long long k_archivefile_size(void* self) {
    return KArchiveFile_Size((KArchiveFile*)self);
}

void k_archivefile_set_size(void* self, long long s) {
    KArchiveFile_SetSize((KArchiveFile*)self, s);
}

char* k_archivefile_data(void* self) {
    libqt_string _str = KArchiveFile_Data((KArchiveFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_archivefile_on_data(void* self, libqt_string (*callback)()) {
    KArchiveFile_OnData((KArchiveFile*)self, (intptr_t)callback);
}

char* k_archivefile_super_data(void* self) {
    libqt_string _str = KArchiveFile_SuperData((KArchiveFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QIODevice* k_archivefile_create_device(void* self) {
    return KArchiveFile_CreateDevice((KArchiveFile*)self);
}

void k_archivefile_on_create_device(void* self, QIODevice* (*callback)()) {
    KArchiveFile_OnCreateDevice((KArchiveFile*)self, (intptr_t)callback);
}

QIODevice* k_archivefile_super_create_device(void* self) {
    return KArchiveFile_SuperCreateDevice((KArchiveFile*)self);
}

bool k_archivefile_is_file(void* self) {
    return KArchiveFile_IsFile((KArchiveFile*)self);
}

void k_archivefile_on_is_file(void* self, bool (*callback)()) {
    KArchiveFile_OnIsFile((KArchiveFile*)self, (intptr_t)callback);
}

bool k_archivefile_super_is_file(void* self) {
    return KArchiveFile_SuperIsFile((KArchiveFile*)self);
}

bool k_archivefile_copy_to(void* self, const char* dest) {
    return KArchiveFile_CopyTo((KArchiveFile*)self, qstring(dest));
}

void k_archivefile_virtual_hook(void* self, int id, void* data) {
    KArchiveFile_VirtualHook((KArchiveFile*)self, id, data);
}

void k_archivefile_on_virtual_hook(void* self, void (*callback)(void*, int, void*)) {
    KArchiveFile_OnVirtualHook((KArchiveFile*)self, (intptr_t)callback);
}

void k_archivefile_super_virtual_hook(void* self, int id, void* data) {
    KArchiveFile_SuperVirtualHook((KArchiveFile*)self, id, data);
}

QDateTime* k_archivefile_date(void* self) {
    return KArchiveEntry_Date((KArchiveEntry*)self);
}

const char* k_archivefile_name(void* self) {
    libqt_string _str = KArchiveEntry_Name((KArchiveEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

mode_t k_archivefile_permissions(void* self) {
    return (int)KArchiveEntry_Permissions((KArchiveEntry*)self);
}

const char* k_archivefile_user(void* self) {
    libqt_string _str = KArchiveEntry_User((KArchiveEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_archivefile_group(void* self) {
    libqt_string _str = KArchiveEntry_Group((KArchiveEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_archivefile_sym_link_target(void* self) {
    libqt_string _str = KArchiveEntry_SymLinkTarget((KArchiveEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_archivefile_is_directory(void* self) {
    return KArchiveFile_IsDirectory((KArchiveFile*)self);
}

bool k_archivefile_super_is_directory(void* self) {
    return KArchiveFile_SuperIsDirectory((KArchiveFile*)self);
}

void k_archivefile_on_is_directory(void* self, bool (*callback)()) {
    KArchiveFile_OnIsDirectory((KArchiveFile*)self, (intptr_t)callback);
}

KArchive* k_archivefile_archive(void* self) {
    return KArchiveFile_Archive((KArchiveFile*)self);
}

KArchive* k_archivefile_super_archive(void* self) {
    return KArchiveFile_SuperArchive((KArchiveFile*)self);
}

void k_archivefile_on_archive(void* self, KArchive* (*callback)()) {
    KArchiveFile_OnArchive((KArchiveFile*)self, (intptr_t)callback);
}

void k_archivefile_delete(void* self) {
    KArchiveFile_Delete((KArchiveFile*)(self));
}
