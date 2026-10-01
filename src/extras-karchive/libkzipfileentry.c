#include "libkarchive.hpp"
#include "libkarchiveentry.hpp"
#include "libkarchivefile.hpp"
#include "libkzip.hpp"
#include "../libqdatetime.hpp"
#include "../libqiodevice.hpp"
#include "libkzipfileentry.hpp"
#include "libkzipfileentry.h"

KZipFileEntry* k_zipfileentry_new(void* zip, const char* name, int access, const void* date, const char* user, const char* group, const char* symlink, const char* path, int64_t start, int64_t uncompressedSize, int encoding, int64_t compressedSize) {
    return KZipFileEntry_New((KZip*)zip, qstring(name), access, (QDateTime*)date, qstring(user), qstring(group), qstring(symlink), qstring(path), start, uncompressedSize, encoding, compressedSize);
}

KZipFileEntry* k_zipfileentry_new2(const void* param1) {
    return KZipFileEntry_New2((KZipFileEntry*)param1);
}

int32_t k_zipfileentry_encoding(const void* self) {
    return KZipFileEntry_Encoding((KZipFileEntry*)self);
}

int64_t k_zipfileentry_compressed_size(const void* self) {
    return KZipFileEntry_CompressedSize((KZipFileEntry*)self);
}

void k_zipfileentry_set_compressed_size(void* self, int64_t compressedSize) {
    KZipFileEntry_SetCompressedSize((KZipFileEntry*)self, compressedSize);
}

void k_zipfileentry_set_header_start(void* self, int64_t headerstart) {
    KZipFileEntry_SetHeaderStart((KZipFileEntry*)self, headerstart);
}

int64_t k_zipfileentry_header_start(const void* self) {
    return KZipFileEntry_HeaderStart((KZipFileEntry*)self);
}

uintptr_t k_zipfileentry_crc32(const void* self) {
    return KZipFileEntry_Crc32((KZipFileEntry*)self);
}

void k_zipfileentry_set_c_r_c32(void* self, uintptr_t crc32) {
    KZipFileEntry_SetCRC32((KZipFileEntry*)self, crc32);
}

const char* k_zipfileentry_path(const void* self) {
    libqt_string _str = KZipFileEntry_Path((KZipFileEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_zipfileentry_data(const void* self) {
    libqt_string _str = KZipFileEntry_Data((KZipFileEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_zipfileentry_on_data(const void* self, libqt_string (*callback)(const void*)) {
    KZipFileEntry_OnData((KZipFileEntry*)self, (intptr_t)callback);
}

char* k_zipfileentry_super_data(const void* self) {
    libqt_string _str = KZipFileEntry_SuperData((KZipFileEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QIODevice* k_zipfileentry_create_device(const void* self) {
    return KZipFileEntry_CreateDevice((KZipFileEntry*)self);
}

void k_zipfileentry_on_create_device(const void* self, QIODevice* (*callback)(const void*)) {
    KZipFileEntry_OnCreateDevice((KZipFileEntry*)self, (intptr_t)callback);
}

QIODevice* k_zipfileentry_super_create_device(const void* self) {
    return KZipFileEntry_SuperCreateDevice((KZipFileEntry*)self);
}

int64_t k_zipfileentry_position(const void* self) {
    return KArchiveFile_Position((KArchiveFile*)self);
}

int64_t k_zipfileentry_size(const void* self) {
    return KArchiveFile_Size((KArchiveFile*)self);
}

void k_zipfileentry_set_size(void* self, int64_t s) {
    KArchiveFile_SetSize((KArchiveFile*)self, s);
}

bool k_zipfileentry_copy_to(const void* self, const char* dest) {
    return KArchiveFile_CopyTo((KArchiveFile*)self, qstring(dest));
}

QDateTime* k_zipfileentry_date(const void* self) {
    return KArchiveEntry_Date((KArchiveEntry*)self);
}

const char* k_zipfileentry_name(const void* self) {
    libqt_string _str = KArchiveEntry_Name((KArchiveEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

mode_t k_zipfileentry_permissions(const void* self) {
    return (int)KArchiveEntry_Permissions((KArchiveEntry*)self);
}

const char* k_zipfileentry_user(const void* self) {
    libqt_string _str = KArchiveEntry_User((KArchiveEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_zipfileentry_group(const void* self) {
    libqt_string _str = KArchiveEntry_Group((KArchiveEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_zipfileentry_sym_link_target(const void* self) {
    libqt_string _str = KArchiveEntry_SymLinkTarget((KArchiveEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_zipfileentry_is_file(const void* self) {
    return KZipFileEntry_IsFile((KZipFileEntry*)self);
}

bool k_zipfileentry_super_is_file(const void* self) {
    return KZipFileEntry_SuperIsFile((KZipFileEntry*)self);
}

void k_zipfileentry_on_is_file(const void* self, bool (*callback)(const void*)) {
    KZipFileEntry_OnIsFile((const KZipFileEntry*)self, (intptr_t)callback);
}

void k_zipfileentry_virtual_hook(void* self, int id, void* data) {
    KZipFileEntry_VirtualHook((KZipFileEntry*)self, id, data);
}

void k_zipfileentry_super_virtual_hook(void* self, int id, void* data) {
    KZipFileEntry_SuperVirtualHook((KZipFileEntry*)self, id, data);
}

void k_zipfileentry_on_virtual_hook(void* self, void (*callback)(void*, int, void*)) {
    KZipFileEntry_OnVirtualHook((KZipFileEntry*)self, (intptr_t)callback);
}

bool k_zipfileentry_is_directory(const void* self) {
    return KZipFileEntry_IsDirectory((KZipFileEntry*)self);
}

bool k_zipfileentry_super_is_directory(const void* self) {
    return KZipFileEntry_SuperIsDirectory((KZipFileEntry*)self);
}

void k_zipfileentry_on_is_directory(const void* self, bool (*callback)(const void*)) {
    KZipFileEntry_OnIsDirectory((const KZipFileEntry*)self, (intptr_t)callback);
}

KArchive* k_zipfileentry_archive(const void* self) {
    return KZipFileEntry_Archive((KZipFileEntry*)self);
}

void k_zipfileentry_delete(void* self) {
    KZipFileEntry_Delete((KZipFileEntry*)(self));
}
