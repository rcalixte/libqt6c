#include "libkarchive.hpp"
#include "libkarchiveentry.hpp"
#include "libkarchivefile.hpp"
#include "../libqdatetime.hpp"
#include "libkarchivedirectory.hpp"
#include "libkarchivedirectory.h"

KArchiveDirectory* k_archivedirectory_new(void* archive, const char* name, int access, void* date, const char* user, const char* group, const char* symlink) {
    return KArchiveDirectory_new((KArchive*)archive, qstring(name), access, (QDateTime*)date, qstring(user), qstring(group), qstring(symlink));
}

KArchiveDirectory* k_archivedirectory_new2(void* param1) {
    return KArchiveDirectory_new2((KArchiveDirectory*)param1);
}

const char** k_archivedirectory_entries(void* self) {
    libqt_list _arr = KArchiveDirectory_Entries((KArchiveDirectory*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_archivedirectory_entries");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

const KArchiveEntry* k_archivedirectory_entry(void* self, const char* name) {
    return KArchiveDirectory_Entry((KArchiveDirectory*)self, qstring(name));
}

const KArchiveFile* k_archivedirectory_file(void* self, const char* name) {
    return KArchiveDirectory_File((KArchiveDirectory*)self, qstring(name));
}

void k_archivedirectory_add_entry(void* self, void* param1) {
    KArchiveDirectory_AddEntry((KArchiveDirectory*)self, (KArchiveEntry*)param1);
}

bool k_archivedirectory_add_entry_v2(void* self, void* param1) {
    return KArchiveDirectory_AddEntryV2((KArchiveDirectory*)self, (KArchiveEntry*)param1);
}

void k_archivedirectory_remove_entry(void* self, void* param1) {
    KArchiveDirectory_RemoveEntry((KArchiveDirectory*)self, (KArchiveEntry*)param1);
}

bool k_archivedirectory_remove_entry_v2(void* self, void* param1) {
    return KArchiveDirectory_RemoveEntryV2((KArchiveDirectory*)self, (KArchiveEntry*)param1);
}

bool k_archivedirectory_is_directory(void* self) {
    return KArchiveDirectory_IsDirectory((KArchiveDirectory*)self);
}

void k_archivedirectory_on_is_directory(void* self, bool (*callback)()) {
    KArchiveDirectory_OnIsDirectory((KArchiveDirectory*)self, (intptr_t)callback);
}

bool k_archivedirectory_qbase_is_directory(void* self) {
    return KArchiveDirectory_QBaseIsDirectory((KArchiveDirectory*)self);
}

bool k_archivedirectory_copy_to(void* self, const char* dest) {
    return KArchiveDirectory_CopyTo((KArchiveDirectory*)self, qstring(dest));
}

void k_archivedirectory_virtual_hook(void* self, int id, void* data) {
    KArchiveDirectory_VirtualHook((KArchiveDirectory*)self, id, data);
}

void k_archivedirectory_on_virtual_hook(void* self, void (*callback)(void*, int, void*)) {
    KArchiveDirectory_OnVirtualHook((KArchiveDirectory*)self, (intptr_t)callback);
}

void k_archivedirectory_qbase_virtual_hook(void* self, int id, void* data) {
    KArchiveDirectory_QBaseVirtualHook((KArchiveDirectory*)self, id, data);
}

bool k_archivedirectory_copy_to2(void* self, const char* dest, bool recursive) {
    return KArchiveDirectory_CopyTo2((KArchiveDirectory*)self, qstring(dest), recursive);
}

QDateTime* k_archivedirectory_date(void* self) {
    return KArchiveEntry_Date((KArchiveEntry*)self);
}

const char* k_archivedirectory_name(void* self) {
    libqt_string _str = KArchiveEntry_Name((KArchiveEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

mode_t k_archivedirectory_permissions(void* self) {
    return (int)KArchiveEntry_Permissions((KArchiveEntry*)self);
}

const char* k_archivedirectory_user(void* self) {
    libqt_string _str = KArchiveEntry_User((KArchiveEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_archivedirectory_group(void* self) {
    libqt_string _str = KArchiveEntry_Group((KArchiveEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_archivedirectory_sym_link_target(void* self) {
    libqt_string _str = KArchiveEntry_SymLinkTarget((KArchiveEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_archivedirectory_is_file(void* self) {
    return KArchiveDirectory_IsFile((KArchiveDirectory*)self);
}

bool k_archivedirectory_qbase_is_file(void* self) {
    return KArchiveDirectory_QBaseIsFile((KArchiveDirectory*)self);
}

void k_archivedirectory_on_is_file(void* self, bool (*callback)()) {
    KArchiveDirectory_OnIsFile((KArchiveDirectory*)self, (intptr_t)callback);
}

KArchive* k_archivedirectory_archive(void* self) {
    return KArchiveDirectory_Archive((KArchiveDirectory*)self);
}

KArchive* k_archivedirectory_qbase_archive(void* self) {
    return KArchiveDirectory_QBaseArchive((KArchiveDirectory*)self);
}

void k_archivedirectory_on_archive(void* self, KArchive* (*callback)()) {
    KArchiveDirectory_OnArchive((KArchiveDirectory*)self, (intptr_t)callback);
}

void k_archivedirectory_delete(void* self) {
    KArchiveDirectory_Delete((KArchiveDirectory*)(self));
}
