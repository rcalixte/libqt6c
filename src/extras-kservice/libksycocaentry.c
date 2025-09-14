#include "../libqshareddata.hpp"
#include "libksycocaentry.hpp"
#include "libksycocaentry.h"

KSycocaEntry* k_sycocaentry_new() {
    return KSycocaEntry_new();
}

bool k_sycocaentry_is_type(void* self, int32_t t) {
    return KSycocaEntry_IsType((KSycocaEntry*)self, t);
}

int32_t k_sycocaentry_sycoca_type(void* self) {
    return KSycocaEntry_SycocaType((KSycocaEntry*)self);
}

const char* k_sycocaentry_name(void* self) {
    libqt_string _str = KSycocaEntry_Name((KSycocaEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_sycocaentry_entry_path(void* self) {
    libqt_string _str = KSycocaEntry_EntryPath((KSycocaEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_sycocaentry_storage_id(void* self) {
    libqt_string _str = KSycocaEntry_StorageId((KSycocaEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_sycocaentry_is_valid(void* self) {
    return KSycocaEntry_IsValid((KSycocaEntry*)self);
}

bool k_sycocaentry_is_deleted(void* self) {
    return KSycocaEntry_IsDeleted((KSycocaEntry*)self);
}

void k_sycocaentry_set_deleted(void* self, bool deleted) {
    KSycocaEntry_SetDeleted((KSycocaEntry*)self, deleted);
}

bool k_sycocaentry_is_separator(void* self) {
    return KSycocaEntry_IsSeparator((KSycocaEntry*)self);
}

void k_sycocaentry_delete(void* self) {
    KSycocaEntry_Delete((KSycocaEntry*)(self));
}
