#include "libformat.hpp"
#include "../libqchar.hpp"
#include "libdefinition.hpp"
#include "libdefinition.h"

KSyntaxHighlighting__Definition* k_syntaxhighlighting__definition_new() {
    return KSyntaxHighlighting__Definition_New();
}

KSyntaxHighlighting__Definition* k_syntaxhighlighting__definition_new2(const void* other) {
    return KSyntaxHighlighting__Definition_New2((KSyntaxHighlighting__Definition*)other);
}

void k_syntaxhighlighting__definition_operator_assign(void* self, const void* rhs) {
    KSyntaxHighlighting__Definition_OperatorAssign((KSyntaxHighlighting__Definition*)self, (KSyntaxHighlighting__Definition*)rhs);
}

bool k_syntaxhighlighting__definition_operator_equal(const void* self, const void* other) {
    return KSyntaxHighlighting__Definition_OperatorEqual((KSyntaxHighlighting__Definition*)self, (KSyntaxHighlighting__Definition*)other);
}

bool k_syntaxhighlighting__definition_operator_not_equal(const void* self, const void* other) {
    return KSyntaxHighlighting__Definition_OperatorNotEqual((KSyntaxHighlighting__Definition*)self, (KSyntaxHighlighting__Definition*)other);
}

bool k_syntaxhighlighting__definition_is_valid(const void* self) {
    return KSyntaxHighlighting__Definition_IsValid((KSyntaxHighlighting__Definition*)self);
}

const char* k_syntaxhighlighting__definition_file_path(const void* self) {
    libqt_string _str = KSyntaxHighlighting__Definition_FilePath((KSyntaxHighlighting__Definition*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_syntaxhighlighting__definition_name(const void* self) {
    libqt_string _str = KSyntaxHighlighting__Definition_Name((KSyntaxHighlighting__Definition*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_syntaxhighlighting__definition_alternative_names(const void* self) {
    libqt_list _arr = KSyntaxHighlighting__Definition_AlternativeNames((KSyntaxHighlighting__Definition*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_syntaxhighlighting__definition_alternative_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char* k_syntaxhighlighting__definition_translated_name(const void* self) {
    libqt_string _str = KSyntaxHighlighting__Definition_TranslatedName((KSyntaxHighlighting__Definition*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_syntaxhighlighting__definition_section(const void* self) {
    libqt_string _str = KSyntaxHighlighting__Definition_Section((KSyntaxHighlighting__Definition*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_syntaxhighlighting__definition_translated_section(const void* self) {
    libqt_string _str = KSyntaxHighlighting__Definition_TranslatedSection((KSyntaxHighlighting__Definition*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_syntaxhighlighting__definition_mime_types(const void* self) {
    libqt_list _arr = KSyntaxHighlighting__Definition_MimeTypes((KSyntaxHighlighting__Definition*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_syntaxhighlighting__definition_mime_types\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char** k_syntaxhighlighting__definition_extensions(const void* self) {
    libqt_list _arr = KSyntaxHighlighting__Definition_Extensions((KSyntaxHighlighting__Definition*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_syntaxhighlighting__definition_extensions\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

int32_t k_syntaxhighlighting__definition_version(const void* self) {
    return KSyntaxHighlighting__Definition_Version((KSyntaxHighlighting__Definition*)self);
}

int32_t k_syntaxhighlighting__definition_priority(const void* self) {
    return KSyntaxHighlighting__Definition_Priority((KSyntaxHighlighting__Definition*)self);
}

bool k_syntaxhighlighting__definition_is_hidden(const void* self) {
    return KSyntaxHighlighting__Definition_IsHidden((KSyntaxHighlighting__Definition*)self);
}

const char* k_syntaxhighlighting__definition_style(const void* self) {
    libqt_string _str = KSyntaxHighlighting__Definition_Style((KSyntaxHighlighting__Definition*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_syntaxhighlighting__definition_indenter(const void* self) {
    libqt_string _str = KSyntaxHighlighting__Definition_Indenter((KSyntaxHighlighting__Definition*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_syntaxhighlighting__definition_author(const void* self) {
    libqt_string _str = KSyntaxHighlighting__Definition_Author((KSyntaxHighlighting__Definition*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_syntaxhighlighting__definition_license(const void* self) {
    libqt_string _str = KSyntaxHighlighting__Definition_License((KSyntaxHighlighting__Definition*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_syntaxhighlighting__definition_is_word_delimiter(const void* self, void* c) {
    return KSyntaxHighlighting__Definition_IsWordDelimiter((KSyntaxHighlighting__Definition*)self, (QChar*)c);
}

bool k_syntaxhighlighting__definition_is_word_wrap_delimiter(const void* self, void* c) {
    return KSyntaxHighlighting__Definition_IsWordWrapDelimiter((KSyntaxHighlighting__Definition*)self, (QChar*)c);
}

bool k_syntaxhighlighting__definition_folding_enabled(const void* self) {
    return KSyntaxHighlighting__Definition_FoldingEnabled((KSyntaxHighlighting__Definition*)self);
}

bool k_syntaxhighlighting__definition_indentation_based_folding_enabled(const void* self) {
    return KSyntaxHighlighting__Definition_IndentationBasedFoldingEnabled((KSyntaxHighlighting__Definition*)self);
}

const char** k_syntaxhighlighting__definition_folding_ignore_list(const void* self) {
    libqt_list _arr = KSyntaxHighlighting__Definition_FoldingIgnoreList((KSyntaxHighlighting__Definition*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_syntaxhighlighting__definition_folding_ignore_list\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char** k_syntaxhighlighting__definition_keyword_lists(const void* self) {
    libqt_list _arr = KSyntaxHighlighting__Definition_KeywordLists((KSyntaxHighlighting__Definition*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_syntaxhighlighting__definition_keyword_lists\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char** k_syntaxhighlighting__definition_keyword_list(const void* self, const char* name) {
    libqt_list _arr = KSyntaxHighlighting__Definition_KeywordList((KSyntaxHighlighting__Definition*)self, qstring(name));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_syntaxhighlighting__definition_keyword_list\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

bool k_syntaxhighlighting__definition_set_keyword_list(void* self, const char* name, const char* content[static 1]) {
    size_t content_len = libqt_strv_length(content);
    libqt_string* content_qstr = (libqt_string*)malloc(content_len * sizeof(libqt_string));
    if (content_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_syntaxhighlighting__definition_set_keyword_list\n");
        abort();
    }
    for (size_t i = 0; i < content_len; ++i)
        content_qstr[i] = qstring(content[i]);
    libqt_list content_list = qlist(content_qstr, content_len);
    bool _out = KSyntaxHighlighting__Definition_SetKeywordList((KSyntaxHighlighting__Definition*)self, qstring(name), content_list);
    free(content_qstr);
    return _out;
}

libqt_list /* of KSyntaxHighlighting__Format* */ k_syntaxhighlighting__definition_formats(const void* self) {
    libqt_list _arr = KSyntaxHighlighting__Definition_Formats((KSyntaxHighlighting__Definition*)self);
    return _arr;
}

libqt_list /* of KSyntaxHighlighting__Definition* */ k_syntaxhighlighting__definition_included_definitions(const void* self) {
    libqt_list _arr = KSyntaxHighlighting__Definition_IncludedDefinitions((KSyntaxHighlighting__Definition*)self);
    return _arr;
}

const char* k_syntaxhighlighting__definition_single_line_comment_marker(const void* self) {
    libqt_string _str = KSyntaxHighlighting__Definition_SingleLineCommentMarker((KSyntaxHighlighting__Definition*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_syntaxhighlighting__definition_single_line_comment_position(const void* self) {
    return KSyntaxHighlighting__Definition_SingleLineCommentPosition((KSyntaxHighlighting__Definition*)self);
}

libqt_pair /* tuple of const char* and const char* */ k_syntaxhighlighting__definition_multi_line_comment_marker(const void* self) {
    libqt_pair _ret = KSyntaxHighlighting__Definition_MultiLineCommentMarker((KSyntaxHighlighting__Definition*)self);
    libqt_string* _first = (libqt_string*)_ret.first;
    libqt_string* _second = (libqt_string*)_ret.second;
    libqt_pair _out;
    _out.first = (void*)_first->data;
    _out.second = (void*)_second->data;
    free(_first);
    free(_second);
    return _out;
}

libqt_list /* of libqt_pair tuple of QChar* and const char* */ k_syntaxhighlighting__definition_character_encodings(const void* self) {
    libqt_list _arr = KSyntaxHighlighting__Definition_CharacterEncodings((KSyntaxHighlighting__Definition*)self);
    libqt_pair* _data = (libqt_pair*)_arr.data.ptr;
    for (size_t i = 0; i < _arr.len; ++i) {
        void** _first_ptr = (void**)_data[i].first;
        void* _first_data = *_first_ptr;
        libqt_string* _second_str = (libqt_string*)_data[i].second;
        const char* _second_str_data = _second_str->data;
        free(_first_ptr);
        free(_second_str);
        _data[i].first = _first_data;
        _data[i].second = (void*)_second_str_data;
    }
    return _arr;
}

void k_syntaxhighlighting__definition_delete(void* self) {
    KSyntaxHighlighting__Definition_Delete((KSyntaxHighlighting__Definition*)(self));
}
