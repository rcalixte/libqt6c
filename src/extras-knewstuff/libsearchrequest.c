#include "../libqobjectdefs.hpp"
#include "libsearchrequest.hpp"
#include "libsearchrequest.h"

const QMetaObject* k_nscore_get_enum_meta_object(int32_t param1) {
    return KNSCore_GetEnumMetaObject(param1);
}

const char* k_nscore_get_enum_name(int32_t param1) {
    return KNSCore_GetEnumName(param1);
}

const QMetaObject* k_nscore_get_enum_meta_object2(int32_t param1) {
    return KNSCore_GetEnumMetaObject2(param1);
}

const char* k_nscore_get_enum_name2(int32_t param1) {
    return KNSCore_GetEnumName2(param1);
}

KNSCore__SearchRequest* k_nscore__searchrequest_new() {
    return KNSCore__SearchRequest_new();
}

KNSCore__SearchRequest* k_nscore__searchrequest_new2(void* param1) {
    return KNSCore__SearchRequest_new2((KNSCore__SearchRequest*)param1);
}

KNSCore__SearchRequest* k_nscore__searchrequest_new3(int32_t sortMode_) {
    return KNSCore__SearchRequest_new3(sortMode_);
}

KNSCore__SearchRequest* k_nscore__searchrequest_new4(int32_t sortMode_, int32_t filter_) {
    return KNSCore__SearchRequest_new4(sortMode_, filter_);
}

KNSCore__SearchRequest* k_nscore__searchrequest_new5(int32_t sortMode_, int32_t filter_, const char* searchTerm_) {
    return KNSCore__SearchRequest_new5(sortMode_, filter_, qstring(searchTerm_));
}

KNSCore__SearchRequest* k_nscore__searchrequest_new6(int32_t sortMode_, int32_t filter_, const char* searchTerm_, const char* categories_[]) {
    size_t categories__len = libqt_strv_length(categories_);
    libqt_string* categories__qstr = (libqt_string*)malloc(categories__len * sizeof(libqt_string));
    if (categories__qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_nscore__searchrequest_new6");
        abort();
    }
    for (size_t i = 0; i < categories__len; ++i) {
        categories__qstr[i] = qstring(categories_[i]);
    }
    libqt_list categories__list = qlist(categories__qstr, categories__len);

    KNSCore__SearchRequest* _out = KNSCore__SearchRequest_new6(sortMode_, filter_, qstring(searchTerm_), categories__list);
    free(categories__qstr);
    return _out;
}

KNSCore__SearchRequest* k_nscore__searchrequest_new7(int32_t sortMode_, int32_t filter_, const char* searchTerm_, const char* categories_[], int page_) {
    size_t categories__len = libqt_strv_length(categories_);
    libqt_string* categories__qstr = (libqt_string*)malloc(categories__len * sizeof(libqt_string));
    if (categories__qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_nscore__searchrequest_new7");
        abort();
    }
    for (size_t i = 0; i < categories__len; ++i) {
        categories__qstr[i] = qstring(categories_[i]);
    }
    libqt_list categories__list = qlist(categories__qstr, categories__len);

    KNSCore__SearchRequest* _out = KNSCore__SearchRequest_new7(sortMode_, filter_, qstring(searchTerm_), categories__list, page_);
    free(categories__qstr);
    return _out;
}

KNSCore__SearchRequest* k_nscore__searchrequest_new8(int32_t sortMode_, int32_t filter_, const char* searchTerm_, const char* categories_[], int page_, int pageSize_) {
    size_t categories__len = libqt_strv_length(categories_);
    libqt_string* categories__qstr = (libqt_string*)malloc(categories__len * sizeof(libqt_string));
    if (categories__qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_nscore__searchrequest_new8");
        abort();
    }
    for (size_t i = 0; i < categories__len; ++i) {
        categories__qstr[i] = qstring(categories_[i]);
    }
    libqt_list categories__list = qlist(categories__qstr, categories__len);

    KNSCore__SearchRequest* _out = KNSCore__SearchRequest_new8(sortMode_, filter_, qstring(searchTerm_), categories__list, page_, pageSize_);
    free(categories__qstr);
    return _out;
}

int32_t k_nscore__searchrequest_sort_mode(void* self) {
    return KNSCore__SearchRequest_SortMode((KNSCore__SearchRequest*)self);
}

int32_t k_nscore__searchrequest_filter(void* self) {
    return KNSCore__SearchRequest_Filter((KNSCore__SearchRequest*)self);
}

const char* k_nscore__searchrequest_search_term(void* self) {
    libqt_string _str = KNSCore__SearchRequest_SearchTerm((KNSCore__SearchRequest*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_nscore__searchrequest_categories(void* self) {
    libqt_list _arr = KNSCore__SearchRequest_Categories((KNSCore__SearchRequest*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_nscore__searchrequest_categories");
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

int32_t k_nscore__searchrequest_page(void* self) {
    return KNSCore__SearchRequest_Page((KNSCore__SearchRequest*)self);
}

int32_t k_nscore__searchrequest_page_size(void* self) {
    return KNSCore__SearchRequest_PageSize((KNSCore__SearchRequest*)self);
}

KNSCore__SearchRequest* k_nscore__searchrequest_next_page(void* self) {
    return KNSCore__SearchRequest_NextPage((KNSCore__SearchRequest*)self);
}

void k_nscore__searchrequest_delete(void* self) {
    KNSCore__SearchRequest_Delete((KNSCore__SearchRequest*)(self));
}
