#include "../libqchar.hpp"
#include "../libqurl.hpp"
#include "libkurifilter.hpp"
#include "libkurifilter.h"

KUriFilterSearchProvider* k_urifiltersearchprovider_new() {
    return KUriFilterSearchProvider_new();
}

KUriFilterSearchProvider* k_urifiltersearchprovider_new2(void* param1) {
    return KUriFilterSearchProvider_new2((KUriFilterSearchProvider*)param1);
}

const char* k_urifiltersearchprovider_desktop_entry_name(void* self) {
    libqt_string _str = KUriFilterSearchProvider_DesktopEntryName((KUriFilterSearchProvider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_urifiltersearchprovider_name(void* self) {
    libqt_string _str = KUriFilterSearchProvider_Name((KUriFilterSearchProvider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_urifiltersearchprovider_icon_name(void* self) {
    libqt_string _str = KUriFilterSearchProvider_IconName((KUriFilterSearchProvider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urifiltersearchprovider_on_icon_name(void* self, const char* (*callback)()) {
    KUriFilterSearchProvider_OnIconName((KUriFilterSearchProvider*)self, (intptr_t)callback);
}

const char* k_urifiltersearchprovider_qbase_icon_name(void* self) {
    libqt_string _str = KUriFilterSearchProvider_QBaseIconName((KUriFilterSearchProvider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_urifiltersearchprovider_keys(void* self) {
    libqt_list _arr = KUriFilterSearchProvider_Keys((KUriFilterSearchProvider*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urifiltersearchprovider_keys");
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

const char* k_urifiltersearchprovider_default_key(void* self) {
    libqt_string _str = KUriFilterSearchProvider_DefaultKey((KUriFilterSearchProvider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urifiltersearchprovider_operator_assign(void* self, void* param1) {
    KUriFilterSearchProvider_OperatorAssign((KUriFilterSearchProvider*)self, (KUriFilterSearchProvider*)param1);
}

void k_urifiltersearchprovider_set_desktop_entry_name(void* self, const char* desktopEntryName) {
    KUriFilterSearchProvider_SetDesktopEntryName((KUriFilterSearchProvider*)self, qstring(desktopEntryName));
}

void k_urifiltersearchprovider_on_set_desktop_entry_name(void* self, void (*callback)(void*, const char*)) {
    KUriFilterSearchProvider_OnSetDesktopEntryName((KUriFilterSearchProvider*)self, (intptr_t)callback);
}

void k_urifiltersearchprovider_qbase_set_desktop_entry_name(void* self, const char* desktopEntryName) {
    KUriFilterSearchProvider_QBaseSetDesktopEntryName((KUriFilterSearchProvider*)self, qstring(desktopEntryName));
}

void k_urifiltersearchprovider_set_icon_name(void* self, const char* iconName) {
    KUriFilterSearchProvider_SetIconName((KUriFilterSearchProvider*)self, qstring(iconName));
}

void k_urifiltersearchprovider_on_set_icon_name(void* self, void (*callback)(void*, const char*)) {
    KUriFilterSearchProvider_OnSetIconName((KUriFilterSearchProvider*)self, (intptr_t)callback);
}

void k_urifiltersearchprovider_qbase_set_icon_name(void* self, const char* iconName) {
    KUriFilterSearchProvider_QBaseSetIconName((KUriFilterSearchProvider*)self, qstring(iconName));
}

void k_urifiltersearchprovider_set_keys(void* self, const char* keys[static 1]) {
    size_t keys_len = libqt_strv_length(keys);
    libqt_string* keys_qstr = (libqt_string*)malloc(keys_len * sizeof(libqt_string));
    if (keys_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urifiltersearchprovider_set_keys");
        abort();
    }
    for (size_t i = 0; i < keys_len; ++i) {
        keys_qstr[i] = qstring(keys[i]);
    }
    libqt_list keys_list = qlist(keys_qstr, keys_len);
    KUriFilterSearchProvider_SetKeys((KUriFilterSearchProvider*)self, keys_list);
    free(keys_qstr);
}

void k_urifiltersearchprovider_on_set_keys(void* self, void (*callback)(void*, const char**)) {
    KUriFilterSearchProvider_OnSetKeys((KUriFilterSearchProvider*)self, (intptr_t)callback);
}

void k_urifiltersearchprovider_qbase_set_keys(void* self, const char* keys[static 1]) {
    size_t keys_len = libqt_strv_length(keys);
    libqt_string* keys_qstr = (libqt_string*)malloc(keys_len * sizeof(libqt_string));
    if (keys_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urifiltersearchprovider_set_keys");
        abort();
    }
    for (size_t i = 0; i < keys_len; ++i) {
        keys_qstr[i] = qstring(keys[i]);
    }
    libqt_list keys_list = qlist(keys_qstr, keys_len);
    KUriFilterSearchProvider_QBaseSetKeys((KUriFilterSearchProvider*)self, keys_list);
}

void k_urifiltersearchprovider_set_name(void* self, const char* name) {
    KUriFilterSearchProvider_SetName((KUriFilterSearchProvider*)self, qstring(name));
}

void k_urifiltersearchprovider_on_set_name(void* self, void (*callback)(void*, const char*)) {
    KUriFilterSearchProvider_OnSetName((KUriFilterSearchProvider*)self, (intptr_t)callback);
}

void k_urifiltersearchprovider_qbase_set_name(void* self, const char* name) {
    KUriFilterSearchProvider_QBaseSetName((KUriFilterSearchProvider*)self, qstring(name));
}

void k_urifiltersearchprovider_delete(void* self) {
    KUriFilterSearchProvider_Delete((KUriFilterSearchProvider*)(self));
}

KUriFilterData* k_urifilterdata_new() {
    return KUriFilterData_new();
}

KUriFilterData* k_urifilterdata_new2(void* url) {
    return KUriFilterData_new2((QUrl*)url);
}

KUriFilterData* k_urifilterdata_new3(const char* url) {
    return KUriFilterData_new3(qstring(url));
}

KUriFilterData* k_urifilterdata_new4(void* other) {
    return KUriFilterData_new4((KUriFilterData*)other);
}

QUrl* k_urifilterdata_uri(void* self) {
    return KUriFilterData_Uri((KUriFilterData*)self);
}

const char* k_urifilterdata_error_msg(void* self) {
    libqt_string _str = KUriFilterData_ErrorMsg((KUriFilterData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_urifilterdata_uri_type(void* self) {
    return KUriFilterData_UriType((KUriFilterData*)self);
}

const char* k_urifilterdata_absolute_path(void* self) {
    libqt_string _str = KUriFilterData_AbsolutePath((KUriFilterData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_urifilterdata_has_absolute_path(void* self) {
    return KUriFilterData_HasAbsolutePath((KUriFilterData*)self);
}

const char* k_urifilterdata_args_and_options(void* self) {
    libqt_string _str = KUriFilterData_ArgsAndOptions((KUriFilterData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_urifilterdata_has_args_and_options(void* self) {
    return KUriFilterData_HasArgsAndOptions((KUriFilterData*)self);
}

bool k_urifilterdata_check_for_executables(void* self) {
    return KUriFilterData_CheckForExecutables((KUriFilterData*)self);
}

const char* k_urifilterdata_typed_string(void* self) {
    libqt_string _str = KUriFilterData_TypedString((KUriFilterData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_urifilterdata_search_term(void* self) {
    libqt_string _str = KUriFilterData_SearchTerm((KUriFilterData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QChar* k_urifilterdata_search_term_separator(void* self) {
    return KUriFilterData_SearchTermSeparator((KUriFilterData*)self);
}

const char* k_urifilterdata_search_provider(void* self) {
    libqt_string _str = KUriFilterData_SearchProvider((KUriFilterData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_urifilterdata_preferred_search_providers(void* self) {
    libqt_list _arr = KUriFilterData_PreferredSearchProviders((KUriFilterData*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urifilterdata_preferred_search_providers");
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

KUriFilterSearchProvider* k_urifilterdata_query_for_search_provider(void* self, const char* provider) {
    return KUriFilterData_QueryForSearchProvider((KUriFilterData*)self, qstring(provider));
}

const char* k_urifilterdata_query_for_preferred_search_provider(void* self, const char* provider) {
    libqt_string _str = KUriFilterData_QueryForPreferredSearchProvider((KUriFilterData*)self, qstring(provider));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_urifilterdata_all_queries_for_search_provider(void* self, const char* provider) {
    libqt_list _arr = KUriFilterData_AllQueriesForSearchProvider((KUriFilterData*)self, qstring(provider));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urifilterdata_all_queries_for_search_provider");
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

const char* k_urifilterdata_icon_name_for_preferred_search_provider(void* self, const char* provider) {
    libqt_string _str = KUriFilterData_IconNameForPreferredSearchProvider((KUriFilterData*)self, qstring(provider));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_urifilterdata_alternate_search_providers(void* self) {
    libqt_list _arr = KUriFilterData_AlternateSearchProviders((KUriFilterData*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urifilterdata_alternate_search_providers");
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

const char* k_urifilterdata_alternate_default_search_provider(void* self) {
    libqt_string _str = KUriFilterData_AlternateDefaultSearchProvider((KUriFilterData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_urifilterdata_default_url_scheme(void* self) {
    libqt_string _str = KUriFilterData_DefaultUrlScheme((KUriFilterData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_urifilterdata_search_filtering_options(void* self) {
    return KUriFilterData_SearchFilteringOptions((KUriFilterData*)self);
}

const char* k_urifilterdata_icon_name(void* self) {
    libqt_string _str = KUriFilterData_IconName((KUriFilterData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urifilterdata_set_check_for_executables(void* self, bool check) {
    KUriFilterData_SetCheckForExecutables((KUriFilterData*)self, check);
}

void k_urifilterdata_set_data(void* self, void* url) {
    KUriFilterData_SetData((KUriFilterData*)self, (QUrl*)url);
}

void k_urifilterdata_set_data2(void* self, const char* url) {
    KUriFilterData_SetData2((KUriFilterData*)self, qstring(url));
}

bool k_urifilterdata_set_absolute_path(void* self, const char* abs_path) {
    return KUriFilterData_SetAbsolutePath((KUriFilterData*)self, qstring(abs_path));
}

void k_urifilterdata_set_alternate_search_providers(void* self, const char* providers[static 1]) {
    size_t providers_len = libqt_strv_length(providers);
    libqt_string* providers_qstr = (libqt_string*)malloc(providers_len * sizeof(libqt_string));
    if (providers_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urifilterdata_set_alternate_search_providers");
        abort();
    }
    for (size_t i = 0; i < providers_len; ++i) {
        providers_qstr[i] = qstring(providers[i]);
    }
    libqt_list providers_list = qlist(providers_qstr, providers_len);
    KUriFilterData_SetAlternateSearchProviders((KUriFilterData*)self, providers_list);
    free(providers_qstr);
}

void k_urifilterdata_set_alternate_default_search_provider(void* self, const char* provider) {
    KUriFilterData_SetAlternateDefaultSearchProvider((KUriFilterData*)self, qstring(provider));
}

void k_urifilterdata_set_default_url_scheme(void* self, const char* defaultUrlScheme) {
    KUriFilterData_SetDefaultUrlScheme((KUriFilterData*)self, qstring(defaultUrlScheme));
}

void k_urifilterdata_set_search_filtering_options(void* self, int32_t options) {
    KUriFilterData_SetSearchFilteringOptions((KUriFilterData*)self, options);
}

void k_urifilterdata_operator_assign(void* self, void* url) {
    KUriFilterData_OperatorAssign((KUriFilterData*)self, (QUrl*)url);
}

void k_urifilterdata_operator_assign2(void* self, const char* url) {
    KUriFilterData_OperatorAssign2((KUriFilterData*)self, qstring(url));
}

void k_urifilterdata_delete(void* self) {
    KUriFilterData_Delete((KUriFilterData*)(self));
}

KUriFilter* k_urifilter_self() {
    return KUriFilter_Self();
}

bool k_urifilter_filter_uri(void* self, void* data) {
    return KUriFilter_FilterUri((KUriFilter*)self, (KUriFilterData*)data);
}

bool k_urifilter_filter_uri2(void* self, void* uri) {
    return KUriFilter_FilterUri2((KUriFilter*)self, (QUrl*)uri);
}

bool k_urifilter_filter_uri3(void* self, const char* uri) {
    return KUriFilter_FilterUri3((KUriFilter*)self, qstring(uri));
}

QUrl* k_urifilter_filtered_uri(void* self, void* uri) {
    return KUriFilter_FilteredUri((KUriFilter*)self, (QUrl*)uri);
}

const char* k_urifilter_filtered_uri2(void* self, const char* uri) {
    libqt_string _str = KUriFilter_FilteredUri2((KUriFilter*)self, qstring(uri));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_urifilter_filter_search_uri(void* self, void* data, int32_t types) {
    return KUriFilter_FilterSearchUri((KUriFilter*)self, (KUriFilterData*)data, types);
}

const char** k_urifilter_plugin_names(void* self) {
    libqt_list _arr = KUriFilter_PluginNames((KUriFilter*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urifilter_plugin_names");
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

bool k_urifilter_filter_uri22(void* self, void* data, const char* filters[static 1]) {
    size_t filters_len = libqt_strv_length(filters);
    libqt_string* filters_qstr = (libqt_string*)malloc(filters_len * sizeof(libqt_string));
    if (filters_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urifilter_filter_uri22");
        abort();
    }
    for (size_t i = 0; i < filters_len; ++i) {
        filters_qstr[i] = qstring(filters[i]);
    }
    libqt_list filters_list = qlist(filters_qstr, filters_len);
    bool _out = KUriFilter_FilterUri22((KUriFilter*)self, (KUriFilterData*)data, filters_list);
    free(filters_qstr);
    return _out;
}

bool k_urifilter_filter_uri23(void* self, void* uri, const char* filters[static 1]) {
    size_t filters_len = libqt_strv_length(filters);
    libqt_string* filters_qstr = (libqt_string*)malloc(filters_len * sizeof(libqt_string));
    if (filters_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urifilter_filter_uri23");
        abort();
    }
    for (size_t i = 0; i < filters_len; ++i) {
        filters_qstr[i] = qstring(filters[i]);
    }
    libqt_list filters_list = qlist(filters_qstr, filters_len);
    bool _out = KUriFilter_FilterUri23((KUriFilter*)self, (QUrl*)uri, filters_list);
    free(filters_qstr);
    return _out;
}

bool k_urifilter_filter_uri24(void* self, const char* uri, const char* filters[static 1]) {
    size_t filters_len = libqt_strv_length(filters);
    libqt_string* filters_qstr = (libqt_string*)malloc(filters_len * sizeof(libqt_string));
    if (filters_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urifilter_filter_uri24");
        abort();
    }
    for (size_t i = 0; i < filters_len; ++i) {
        filters_qstr[i] = qstring(filters[i]);
    }
    libqt_list filters_list = qlist(filters_qstr, filters_len);
    bool _out = KUriFilter_FilterUri24((KUriFilter*)self, qstring(uri), filters_list);
    free(filters_qstr);
    return _out;
}

QUrl* k_urifilter_filtered_uri22(void* self, void* uri, const char* filters[static 1]) {
    size_t filters_len = libqt_strv_length(filters);
    libqt_string* filters_qstr = (libqt_string*)malloc(filters_len * sizeof(libqt_string));
    if (filters_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urifilter_filtered_uri22");
        abort();
    }
    for (size_t i = 0; i < filters_len; ++i) {
        filters_qstr[i] = qstring(filters[i]);
    }
    libqt_list filters_list = qlist(filters_qstr, filters_len);
    QUrl* _out = KUriFilter_FilteredUri22((KUriFilter*)self, (QUrl*)uri, filters_list);
    free(filters_qstr);
    return _out;
}

const char* k_urifilter_filtered_uri23(void* self, const char* uri, const char* filters[static 1]) {
    size_t filters_len = libqt_strv_length(filters);
    libqt_string* filters_qstr = (libqt_string*)malloc(filters_len * sizeof(libqt_string));
    if (filters_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urifilter_filtered_uri23");
        abort();
    }
    for (size_t i = 0; i < filters_len; ++i) {
        filters_qstr[i] = qstring(filters[i]);
    }
    libqt_list filters_list = qlist(filters_qstr, filters_len);
    libqt_string _str = KUriFilter_FilteredUri23((KUriFilter*)self, qstring(uri), filters_list);
    free(filters_qstr);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urifilter_delete(void* self) {
    KUriFilter_Delete((KUriFilter*)(self));
}
