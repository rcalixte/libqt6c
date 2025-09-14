#include "../extras-kconfig/libkdesktopfile.hpp"
#include "libkserviceaction.hpp"
#include "libksycocaentry.hpp"
#include "../libqshareddata.hpp"
#include "libkservice.hpp"
#include "libkservice.h"

KService* k_service_new(const char* name, const char* exec, const char* icon) {
    return KService_new(qstring(name), qstring(exec), qstring(icon));
}

KService* k_service_new2(const char* fullpath) {
    return KService_new2(qstring(fullpath));
}

KService* k_service_new3(void* config) {
    return KService_new3((KDesktopFile*)config);
}

KService* k_service_new4(void* other) {
    return KService_new4((KService*)other);
}

KService* k_service_new5(void* config, const char* entryPath) {
    return KService_new5((KDesktopFile*)config, qstring(entryPath));
}

bool k_service_is_application(void* self) {
    return KService_IsApplication((KService*)self);
}

const char* k_service_exec(void* self) {
    libqt_string _str = KService_Exec((KService*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_service_icon(void* self) {
    libqt_string _str = KService_Icon((KService*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_service_terminal(void* self) {
    return KService_Terminal((KService*)self);
}

const char* k_service_terminal_options(void* self) {
    libqt_string _str = KService_TerminalOptions((KService*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_service_run_on_discrete_gpu(void* self) {
    return KService_RunOnDiscreteGpu((KService*)self);
}

bool k_service_substitute_uid(void* self) {
    return KService_SubstituteUid((KService*)self);
}

const char* k_service_username(void* self) {
    libqt_string _str = KService_Username((KService*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_service_desktop_entry_name(void* self) {
    libqt_string _str = KService_DesktopEntryName((KService*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_service_menu_id(void* self) {
    libqt_string _str = KService_MenuId((KService*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_service_storage_id(void* self) {
    libqt_string _str = KService_StorageId((KService*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_service_working_directory(void* self) {
    libqt_string _str = KService_WorkingDirectory((KService*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_service_comment(void* self) {
    libqt_string _str = KService_Comment((KService*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_service_generic_name(void* self) {
    libqt_string _str = KService_GenericName((KService*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_service_untranslated_generic_name(void* self) {
    libqt_string _str = KService_UntranslatedGenericName((KService*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_service_untranslated_name(void* self) {
    libqt_string _str = KService_UntranslatedName((KService*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_service_keywords(void* self) {
    libqt_list _arr = KService_Keywords((KService*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_service_keywords");
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

const char** k_service_categories(void* self) {
    libqt_list _arr = KService_Categories((KService*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_service_categories");
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

const char** k_service_mime_types(void* self) {
    libqt_list _arr = KService_MimeTypes((KService*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_service_mime_types");
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

const char** k_service_scheme_handlers(void* self) {
    libqt_list _arr = KService_SchemeHandlers((KService*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_service_scheme_handlers");
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

const char** k_service_supported_protocols(void* self) {
    libqt_list _arr = KService_SupportedProtocols((KService*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_service_supported_protocols");
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

bool k_service_has_mime_type(void* self, const char* mimeType) {
    return KService_HasMimeType((KService*)self, qstring(mimeType));
}

libqt_list /* of KServiceAction* */ k_service_actions(void* self) {
    libqt_list _arr = KService_Actions((KService*)self);
    return _arr;
}

bool k_service_allow_multiple_files(void* self) {
    return KService_AllowMultipleFiles((KService*)self);
}

bool k_service_no_display(void* self) {
    return KService_NoDisplay((KService*)self);
}

bool k_service_show_in_current_desktop(void* self) {
    return KService_ShowInCurrentDesktop((KService*)self);
}

bool k_service_show_on_current_platform(void* self) {
    return KService_ShowOnCurrentPlatform((KService*)self);
}

const char* k_service_doc_path(void* self) {
    libqt_string _str = KService_DocPath((KService*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_service_locate_local(void* self) {
    libqt_string _str = KService_LocateLocal((KService*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_service_set_menu_id(void* self, const char* menuId) {
    KService_SetMenuId((KService*)self, qstring(menuId));
}

void k_service_set_terminal(void* self, bool b) {
    KService_SetTerminal((KService*)self, b);
}

void k_service_set_terminal_options(void* self, const char* options) {
    KService_SetTerminalOptions((KService*)self, qstring(options));
}

void k_service_set_exec(void* self, const char* exec) {
    KService_SetExec((KService*)self, qstring(exec));
}

void k_service_set_working_directory(void* self, const char* workingDir) {
    KService_SetWorkingDirectory((KService*)self, qstring(workingDir));
}

const char* k_service_new_service_path(bool showInMenu, const char* suggestedName) {
    libqt_string _str = KService_NewServicePath(showInMenu, qstring(suggestedName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_service_alias_for(void* self) {
    libqt_string _str = KService_AliasFor((KService*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_service_is_type(void* self, int32_t t) {
    return KSycocaEntry_IsType((KSycocaEntry*)self, t);
}

int32_t k_service_sycoca_type(void* self) {
    return KSycocaEntry_SycocaType((KSycocaEntry*)self);
}

const char* k_service_name(void* self) {
    libqt_string _str = KSycocaEntry_Name((KSycocaEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_service_entry_path(void* self) {
    libqt_string _str = KSycocaEntry_EntryPath((KSycocaEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_service_is_valid(void* self) {
    return KSycocaEntry_IsValid((KSycocaEntry*)self);
}

bool k_service_is_deleted(void* self) {
    return KSycocaEntry_IsDeleted((KSycocaEntry*)self);
}

void k_service_set_deleted(void* self, bool deleted) {
    KSycocaEntry_SetDeleted((KSycocaEntry*)self, deleted);
}

bool k_service_is_separator(void* self) {
    return KSycocaEntry_IsSeparator((KSycocaEntry*)self);
}

void k_service_delete(void* self) {
    KService_Delete((KService*)(self));
}
