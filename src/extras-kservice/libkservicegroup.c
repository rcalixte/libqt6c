#include "libksycocaentry.hpp"
#include "../libqshareddata.hpp"
#include "libkservicegroup.hpp"
#include "libkservicegroup.h"

KServiceGroup* k_servicegroup_new(const char* name) {
    return KServiceGroup_new(qstring(name));
}

KServiceGroup* k_servicegroup_new2(const char* _fullpath, const char* _relpath) {
    return KServiceGroup_new2(qstring(_fullpath), qstring(_relpath));
}

const char* k_servicegroup_rel_path(void* self) {
    libqt_string _str = KServiceGroup_RelPath((KServiceGroup*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_servicegroup_caption(void* self) {
    libqt_string _str = KServiceGroup_Caption((KServiceGroup*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_servicegroup_icon(void* self) {
    libqt_string _str = KServiceGroup_Icon((KServiceGroup*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_servicegroup_comment(void* self) {
    libqt_string _str = KServiceGroup_Comment((KServiceGroup*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_servicegroup_child_count(void* self) {
    return KServiceGroup_ChildCount((KServiceGroup*)self);
}

bool k_servicegroup_no_display(void* self) {
    return KServiceGroup_NoDisplay((KServiceGroup*)self);
}

bool k_servicegroup_show_empty_menu(void* self) {
    return KServiceGroup_ShowEmptyMenu((KServiceGroup*)self);
}

void k_servicegroup_set_show_empty_menu(void* self, bool b) {
    KServiceGroup_SetShowEmptyMenu((KServiceGroup*)self, b);
}

bool k_servicegroup_show_inline_header(void* self) {
    return KServiceGroup_ShowInlineHeader((KServiceGroup*)self);
}

void k_servicegroup_set_show_inline_header(void* self, bool _b) {
    KServiceGroup_SetShowInlineHeader((KServiceGroup*)self, _b);
}

bool k_servicegroup_inline_alias(void* self) {
    return KServiceGroup_InlineAlias((KServiceGroup*)self);
}

void k_servicegroup_set_inline_alias(void* self, bool _b) {
    KServiceGroup_SetInlineAlias((KServiceGroup*)self, _b);
}

bool k_servicegroup_allow_inline(void* self) {
    return KServiceGroup_AllowInline((KServiceGroup*)self);
}

void k_servicegroup_set_allow_inline(void* self, bool _b) {
    KServiceGroup_SetAllowInline((KServiceGroup*)self, _b);
}

int32_t k_servicegroup_inline_value(void* self) {
    return KServiceGroup_InlineValue((KServiceGroup*)self);
}

void k_servicegroup_set_inline_value(void* self, int _val) {
    KServiceGroup_SetInlineValue((KServiceGroup*)self, _val);
}

const char** k_servicegroup_suppress_generic_names(void* self) {
    libqt_list _arr = KServiceGroup_SuppressGenericNames((KServiceGroup*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_servicegroup_suppress_generic_names");
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

void k_servicegroup_set_layout_info(void* self, const char* layout[static 1]) {
    size_t layout_len = libqt_strv_length(layout);
    libqt_string* layout_qstr = (libqt_string*)malloc(layout_len * sizeof(libqt_string));
    if (layout_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_servicegroup_set_layout_info");
        abort();
    }
    for (size_t i = 0; i < layout_len; ++i) {
        layout_qstr[i] = qstring(layout[i]);
    }
    libqt_list layout_list = qlist(layout_qstr, layout_len);
    KServiceGroup_SetLayoutInfo((KServiceGroup*)self, layout_list);
    free(layout_qstr);
}

const char** k_servicegroup_layout_info(void* self) {
    libqt_list _arr = KServiceGroup_LayoutInfo((KServiceGroup*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_servicegroup_layout_info");
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

const char* k_servicegroup_base_group_name(void* self) {
    libqt_string _str = KServiceGroup_BaseGroupName((KServiceGroup*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_servicegroup_directory_entry_path(void* self) {
    libqt_string _str = KServiceGroup_DirectoryEntryPath((KServiceGroup*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_servicegroup_is_type(void* self, int32_t t) {
    return KSycocaEntry_IsType((KSycocaEntry*)self, t);
}

int32_t k_servicegroup_sycoca_type(void* self) {
    return KSycocaEntry_SycocaType((KSycocaEntry*)self);
}

const char* k_servicegroup_name(void* self) {
    libqt_string _str = KSycocaEntry_Name((KSycocaEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_servicegroup_entry_path(void* self) {
    libqt_string _str = KSycocaEntry_EntryPath((KSycocaEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_servicegroup_storage_id(void* self) {
    libqt_string _str = KSycocaEntry_StorageId((KSycocaEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_servicegroup_is_valid(void* self) {
    return KSycocaEntry_IsValid((KSycocaEntry*)self);
}

bool k_servicegroup_is_deleted(void* self) {
    return KSycocaEntry_IsDeleted((KSycocaEntry*)self);
}

void k_servicegroup_set_deleted(void* self, bool deleted) {
    KSycocaEntry_SetDeleted((KSycocaEntry*)self, deleted);
}

bool k_servicegroup_is_separator(void* self) {
    return KSycocaEntry_IsSeparator((KSycocaEntry*)self);
}

void k_servicegroup_delete(void* self) {
    KServiceGroup_Delete((KServiceGroup*)(self));
}
