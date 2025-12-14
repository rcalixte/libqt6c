#include "libkarchive.hpp"
#include "../libqdatetime.hpp"
#include "libkarchiveentry.hpp"
#include "libkarchiveentry.h"

KArchiveEntry* k_archiveentry_new(void* archive, const char* name, int access, void* date, const char* user, const char* group, const char* symlink) {
    return KArchiveEntry_new((KArchive*)archive, qstring(name), access, (QDateTime*)date, qstring(user), qstring(group), qstring(symlink));
}

QDateTime* k_archiveentry_date(void* self) {
    return KArchiveEntry_Date((KArchiveEntry*)self);
}

const char* k_archiveentry_name(void* self) {
    libqt_string _str = KArchiveEntry_Name((KArchiveEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

mode_t k_archiveentry_permissions(void* self) {
    return (int)KArchiveEntry_Permissions((KArchiveEntry*)self);
}

const char* k_archiveentry_user(void* self) {
    libqt_string _str = KArchiveEntry_User((KArchiveEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_archiveentry_group(void* self) {
    libqt_string _str = KArchiveEntry_Group((KArchiveEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_archiveentry_sym_link_target(void* self) {
    libqt_string _str = KArchiveEntry_SymLinkTarget((KArchiveEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_archiveentry_is_file(void* self) {
    return KArchiveEntry_IsFile((KArchiveEntry*)self);
}

void k_archiveentry_on_is_file(void* self, bool (*callback)()) {
    KArchiveEntry_OnIsFile((KArchiveEntry*)self, (intptr_t)callback);
}

bool k_archiveentry_qbase_is_file(void* self) {
    return KArchiveEntry_QBaseIsFile((KArchiveEntry*)self);
}

bool k_archiveentry_is_directory(void* self) {
    return KArchiveEntry_IsDirectory((KArchiveEntry*)self);
}

void k_archiveentry_on_is_directory(void* self, bool (*callback)()) {
    KArchiveEntry_OnIsDirectory((KArchiveEntry*)self, (intptr_t)callback);
}

bool k_archiveentry_qbase_is_directory(void* self) {
    return KArchiveEntry_QBaseIsDirectory((KArchiveEntry*)self);
}

KArchive* k_archiveentry_archive(void* self) {
    return KArchiveEntry_Archive((KArchiveEntry*)self);
}

void k_archiveentry_on_archive(void* self, KArchive* (*callback)()) {
    KArchiveEntry_OnArchive((KArchiveEntry*)self, (intptr_t)callback);
}

KArchive* k_archiveentry_qbase_archive(void* self) {
    return KArchiveEntry_QBaseArchive((KArchiveEntry*)self);
}

void k_archiveentry_virtual_hook(void* self, int id, void* data) {
    KArchiveEntry_VirtualHook((KArchiveEntry*)self, id, data);
}

void k_archiveentry_on_virtual_hook(void* self, void (*callback)(void*, int, void*)) {
    KArchiveEntry_OnVirtualHook((KArchiveEntry*)self, (intptr_t)callback);
}

void k_archiveentry_qbase_virtual_hook(void* self, int id, void* data) {
    KArchiveEntry_QBaseVirtualHook((KArchiveEntry*)self, id, data);
}

void k_archiveentry_delete(void* self) {
    KArchiveEntry_Delete((KArchiveEntry*)(self));
}
