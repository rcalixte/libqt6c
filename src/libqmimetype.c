#include "libqmimetype.hpp"
#include "libqmimetype.h"

QMimeType* q_mimetype_new() {
    return QMimeType_new();
}

QMimeType* q_mimetype_new2(void* other) {
    return QMimeType_new2((QMimeType*)other);
}

void q_mimetype_operator_assign(void* self, void* other) {
    QMimeType_OperatorAssign((QMimeType*)self, (QMimeType*)other);
}

void q_mimetype_swap(void* self, void* other) {
    QMimeType_Swap((QMimeType*)self, (QMimeType*)other);
}

bool q_mimetype_is_valid(void* self) {
    return QMimeType_IsValid((QMimeType*)self);
}

bool q_mimetype_is_default(void* self) {
    return QMimeType_IsDefault((QMimeType*)self);
}

const char* q_mimetype_name(void* self) {
    libqt_string _str = QMimeType_Name((QMimeType*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_mimetype_comment(void* self) {
    libqt_string _str = QMimeType_Comment((QMimeType*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_mimetype_generic_icon_name(void* self) {
    libqt_string _str = QMimeType_GenericIconName((QMimeType*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_mimetype_icon_name(void* self) {
    libqt_string _str = QMimeType_IconName((QMimeType*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_mimetype_glob_patterns(void* self) {
    libqt_list _arr = QMimeType_GlobPatterns((QMimeType*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_mimetype_glob_patterns\n");
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

const char** q_mimetype_parent_mime_types(void* self) {
    libqt_list _arr = QMimeType_ParentMimeTypes((QMimeType*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_mimetype_parent_mime_types\n");
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

const char** q_mimetype_all_ancestors(void* self) {
    libqt_list _arr = QMimeType_AllAncestors((QMimeType*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_mimetype_all_ancestors\n");
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

const char** q_mimetype_aliases(void* self) {
    libqt_list _arr = QMimeType_Aliases((QMimeType*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_mimetype_aliases\n");
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

const char** q_mimetype_suffixes(void* self) {
    libqt_list _arr = QMimeType_Suffixes((QMimeType*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_mimetype_suffixes\n");
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

const char* q_mimetype_preferred_suffix(void* self) {
    libqt_string _str = QMimeType_PreferredSuffix((QMimeType*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_mimetype_inherits(void* self, const char* mimeTypeName) {
    return QMimeType_Inherits((QMimeType*)self, qstring(mimeTypeName));
}

const char* q_mimetype_filter_string(void* self) {
    libqt_string _str = QMimeType_FilterString((QMimeType*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_mimetype_delete(void* self) {
    QMimeType_Delete((QMimeType*)(self));
}
