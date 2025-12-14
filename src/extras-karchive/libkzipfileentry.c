#include "libkarchive.hpp"
#include "libkarchiveentry.hpp"
#include "libkarchivefile.hpp"
#include "libkzip.hpp"
#include "../libqdatetime.hpp"
#include "../libqiodevice.hpp"
#include "libkzipfileentry.hpp"
#include "libkzipfileentry.h"

KZipFileEntry* k_zipfileentry_new(void* zip, const char* name, int access, void* date, const char* user, const char* group, const char* symlink, const char* path, long long start, long long uncompressedSize, int encoding, long long compressedSize) {
    return KZipFileEntry_new((KZip*)zip, qstring(name), access, (QDateTime*)date, qstring(user), qstring(group), qstring(symlink), qstring(path), start, uncompressedSize, encoding, compressedSize);
}

KZipFileEntry* k_zipfileentry_new2(void* param1) {
    return KZipFileEntry_new2((KZipFileEntry*)param1);
}

int32_t k_zipfileentry_encoding(void* self) {
    return KZipFileEntry_Encoding((KZipFileEntry*)self);
}

long long k_zipfileentry_compressed_size(void* self) {
    return KZipFileEntry_CompressedSize((KZipFileEntry*)self);
}

void k_zipfileentry_set_compressed_size(void* self, long long compressedSize) {
    KZipFileEntry_SetCompressedSize((KZipFileEntry*)self, compressedSize);
}

void k_zipfileentry_set_header_start(void* self, long long headerstart) {
    KZipFileEntry_SetHeaderStart((KZipFileEntry*)self, headerstart);
}

long long k_zipfileentry_header_start(void* self) {
    return KZipFileEntry_HeaderStart((KZipFileEntry*)self);
}

uint64_t k_zipfileentry_crc32(void* self) {
    return KZipFileEntry_Crc32((KZipFileEntry*)self);
}

void k_zipfileentry_set_c_r_c32(void* self, uint64_t crc32) {
    KZipFileEntry_SetCRC32((KZipFileEntry*)self, crc32);
}

const char* k_zipfileentry_path(void* self) {
    libqt_string _str = KZipFileEntry_Path((KZipFileEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_zipfileentry_data(void* self) {
    libqt_string _str = KZipFileEntry_Data((KZipFileEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_zipfileentry_on_data(void* self, char* (*callback)()) {
    KZipFileEntry_OnData((KZipFileEntry*)self, (intptr_t)callback);
}

char* k_zipfileentry_qbase_data(void* self) {
    libqt_string _str = KZipFileEntry_QBaseData((KZipFileEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QIODevice* k_zipfileentry_create_device(void* self) {
    return KZipFileEntry_CreateDevice((KZipFileEntry*)self);
}

void k_zipfileentry_on_create_device(void* self, QIODevice* (*callback)()) {
    KZipFileEntry_OnCreateDevice((KZipFileEntry*)self, (intptr_t)callback);
}

QIODevice* k_zipfileentry_qbase_create_device(void* self) {
    return KZipFileEntry_QBaseCreateDevice((KZipFileEntry*)self);
}

long long k_zipfileentry_position(void* self) {
    return KArchiveFile_Position((KArchiveFile*)self);
}

long long k_zipfileentry_size(void* self) {
    return KArchiveFile_Size((KArchiveFile*)self);
}

void k_zipfileentry_set_size(void* self, long long s) {
    KArchiveFile_SetSize((KArchiveFile*)self, s);
}

bool k_zipfileentry_copy_to(void* self, const char* dest) {
    return KArchiveFile_CopyTo((KArchiveFile*)self, qstring(dest));
}

QDateTime* k_zipfileentry_date(void* self) {
    return KArchiveEntry_Date((KArchiveEntry*)self);
}

const char* k_zipfileentry_name(void* self) {
    libqt_string _str = KArchiveEntry_Name((KArchiveEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

mode_t k_zipfileentry_permissions(void* self) {
    return (int)KArchiveEntry_Permissions((KArchiveEntry*)self);
}

const char* k_zipfileentry_user(void* self) {
    libqt_string _str = KArchiveEntry_User((KArchiveEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_zipfileentry_group(void* self) {
    libqt_string _str = KArchiveEntry_Group((KArchiveEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_zipfileentry_sym_link_target(void* self) {
    libqt_string _str = KArchiveEntry_SymLinkTarget((KArchiveEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_zipfileentry_is_file(void* self) {
    return KZipFileEntry_IsFile((KZipFileEntry*)self);
}

bool k_zipfileentry_qbase_is_file(void* self) {
    return KZipFileEntry_QBaseIsFile((KZipFileEntry*)self);
}

void k_zipfileentry_on_is_file(void* self, bool (*callback)()) {
    KZipFileEntry_OnIsFile((KZipFileEntry*)self, (intptr_t)callback);
}

void k_zipfileentry_virtual_hook(void* self, int id, void* data) {
    KZipFileEntry_VirtualHook((KZipFileEntry*)self, id, data);
}

void k_zipfileentry_qbase_virtual_hook(void* self, int id, void* data) {
    KZipFileEntry_QBaseVirtualHook((KZipFileEntry*)self, id, data);
}

void k_zipfileentry_on_virtual_hook(void* self, void (*callback)(void*, int, void*)) {
    KZipFileEntry_OnVirtualHook((KZipFileEntry*)self, (intptr_t)callback);
}

bool k_zipfileentry_is_directory(void* self) {
    return KZipFileEntry_IsDirectory((KZipFileEntry*)self);
}

bool k_zipfileentry_qbase_is_directory(void* self) {
    return KZipFileEntry_QBaseIsDirectory((KZipFileEntry*)self);
}

void k_zipfileentry_on_is_directory(void* self, bool (*callback)()) {
    KZipFileEntry_OnIsDirectory((KZipFileEntry*)self, (intptr_t)callback);
}

KArchive* k_zipfileentry_archive(void* self) {
    return KZipFileEntry_Archive((KZipFileEntry*)self);
}

KArchive* k_zipfileentry_qbase_archive(void* self) {
    return KZipFileEntry_QBaseArchive((KZipFileEntry*)self);
}

void k_zipfileentry_on_archive(void* self, KArchive* (*callback)()) {
    KZipFileEntry_OnArchive((KZipFileEntry*)self, (intptr_t)callback);
}

void k_zipfileentry_delete(void* self) {
    KZipFileEntry_Delete((KZipFileEntry*)(self));
}
