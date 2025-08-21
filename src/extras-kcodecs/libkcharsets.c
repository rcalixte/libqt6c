#include "../libqchar.hpp"
#include "libkcharsets.hpp"
#include "libkcharsets.h"

const char* k_charsets_tr(const char* sourceText) {
    libqt_string _str = KCharsets_Tr(sourceText);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KCharsets* k_charsets_charsets() {
    return KCharsets_Charsets();
}

const char* k_charsets_to_entity(void* ch) {
    libqt_string _str = KCharsets_ToEntity((QChar*)ch);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_charsets_resolve_entities(const char* text) {
    libqt_string _str = KCharsets_ResolveEntities(qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_charsets_available_encoding_names(void* self) {
    libqt_list _arr = KCharsets_AvailableEncodingNames((KCharsets*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_charsets_available_encoding_names");
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

const char** k_charsets_descriptive_encoding_names(void* self) {
    libqt_list _arr = KCharsets_DescriptiveEncodingNames((KCharsets*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_charsets_descriptive_encoding_names");
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

libqt_list /* of const char** */ k_charsets_encodings_by_script(void* self) {
    libqt_list _arr = KCharsets_EncodingsByScript((KCharsets*)self);
    return _arr;
}

const char* k_charsets_encoding_for_name(void* self, const char* descriptiveName) {
    libqt_string _str = KCharsets_EncodingForName((KCharsets*)self, qstring(descriptiveName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_charsets_tr2(const char* sourceText, const char* disambiguation) {
    libqt_string _str = KCharsets_Tr2(sourceText, disambiguation);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_charsets_tr3(const char* sourceText, const char* disambiguation, int n) {
    libqt_string _str = KCharsets_Tr3(sourceText, disambiguation, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_charsets_delete(void* self) {
    KCharsets_Delete((KCharsets*)(self));
}
