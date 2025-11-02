#include "libkfilefilter.hpp"
#include "libkfilefilter.h"

KFileFilter* k_filefilter_new() {
    return KFileFilter_new();
}

KFileFilter* k_filefilter_new2(const char* label, const char* filePatterns[static 1], const char* mimePatterns[static 1]) {
    size_t filePatterns_len = libqt_strv_length(filePatterns);
    libqt_string* filePatterns_qstr = (libqt_string*)malloc(filePatterns_len * sizeof(libqt_string));
    if (filePatterns_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_filefilter_new2");
        abort();
    }
    for (size_t i = 0; i < filePatterns_len; ++i) {
        filePatterns_qstr[i] = qstring(filePatterns[i]);
    }
    libqt_list filePatterns_list = qlist(filePatterns_qstr, filePatterns_len);
    size_t mimePatterns_len = libqt_strv_length(mimePatterns);
    libqt_string* mimePatterns_qstr = (libqt_string*)malloc(mimePatterns_len * sizeof(libqt_string));
    if (mimePatterns_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_filefilter_new2");
        abort();
    }
    for (size_t i = 0; i < mimePatterns_len; ++i) {
        mimePatterns_qstr[i] = qstring(mimePatterns[i]);
    }
    libqt_list mimePatterns_list = qlist(mimePatterns_qstr, mimePatterns_len);

    KFileFilter* _out = KFileFilter_new2(qstring(label), filePatterns_list, mimePatterns_list);
    free(filePatterns_qstr);
    free(mimePatterns_qstr);
    return _out;
}

KFileFilter* k_filefilter_new3(void* other) {
    return KFileFilter_new3((KFileFilter*)other);
}

void k_filefilter_operator_assign(void* self, void* other) {
    KFileFilter_OperatorAssign((KFileFilter*)self, (KFileFilter*)other);
}

bool k_filefilter_operator_equal(void* self, void* other) {
    return KFileFilter_OperatorEqual((KFileFilter*)self, (KFileFilter*)other);
}

const char* k_filefilter_label(void* self) {
    libqt_string _str = KFileFilter_Label((KFileFilter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_filefilter_file_patterns(void* self) {
    libqt_list _arr = KFileFilter_FilePatterns((KFileFilter*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_filefilter_file_patterns");
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

const char** k_filefilter_mime_patterns(void* self) {
    libqt_list _arr = KFileFilter_MimePatterns((KFileFilter*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_filefilter_mime_patterns");
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

const char* k_filefilter_to_filter_string(void* self) {
    libqt_string _str = KFileFilter_ToFilterString((KFileFilter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_filefilter_is_empty(void* self) {
    return KFileFilter_IsEmpty((KFileFilter*)self);
}

bool k_filefilter_is_valid(void* self) {
    return KFileFilter_IsValid((KFileFilter*)self);
}

KFileFilter* k_filefilter_from_mime_type(const char* mimeType) {
    return KFileFilter_FromMimeType(qstring(mimeType));
}

libqt_list /* of KFileFilter* */ k_filefilter_from_mime_types(const char* mimeTypes[static 1]) {
    size_t mimeTypes_len = libqt_strv_length(mimeTypes);
    libqt_string* mimeTypes_qstr = (libqt_string*)malloc(mimeTypes_len * sizeof(libqt_string));
    if (mimeTypes_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_filefilter_from_mime_types");
        abort();
    }
    for (size_t i = 0; i < mimeTypes_len; ++i) {
        mimeTypes_qstr[i] = qstring(mimeTypes[i]);
    }
    libqt_list mimeTypes_list = qlist(mimeTypes_qstr, mimeTypes_len);
    libqt_list _arr = KFileFilter_FromMimeTypes(mimeTypes_list);
    free(mimeTypes_qstr);
    return _arr;
}

void k_filefilter_delete(void* self) {
    KFileFilter_Delete((KFileFilter*)(self));
}
