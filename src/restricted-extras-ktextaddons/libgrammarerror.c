#include "../libqcolor.hpp"
#include "../libqjsonobject.hpp"
#include "libgrammarerror.hpp"
#include "libgrammarerror.h"

TextGrammarCheck__GrammarError* k_textgrammarcheck__grammarerror_new() {
    return TextGrammarCheck__GrammarError_new();
}

TextGrammarCheck__GrammarError* k_textgrammarcheck__grammarerror_new2(void* param1) {
    return TextGrammarCheck__GrammarError_new2((TextGrammarCheck__GrammarError*)param1);
}

QColor* k_textgrammarcheck__grammarerror_color(void* self) {
    return TextGrammarCheck__GrammarError_Color((TextGrammarCheck__GrammarError*)self);
}

void k_textgrammarcheck__grammarerror_set_color(void* self, void* color) {
    TextGrammarCheck__GrammarError_SetColor((TextGrammarCheck__GrammarError*)self, (QColor*)color);
}

const char* k_textgrammarcheck__grammarerror_error(void* self) {
    libqt_string _str = TextGrammarCheck__GrammarError_Error((TextGrammarCheck__GrammarError*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammarerror_set_error(void* self, const char* error) {
    TextGrammarCheck__GrammarError_SetError((TextGrammarCheck__GrammarError*)self, qstring(error));
}

int32_t k_textgrammarcheck__grammarerror_block_id(void* self) {
    return TextGrammarCheck__GrammarError_BlockId((TextGrammarCheck__GrammarError*)self);
}

void k_textgrammarcheck__grammarerror_set_block_id(void* self, int blockId) {
    TextGrammarCheck__GrammarError_SetBlockId((TextGrammarCheck__GrammarError*)self, blockId);
}

int32_t k_textgrammarcheck__grammarerror_start(void* self) {
    return TextGrammarCheck__GrammarError_Start((TextGrammarCheck__GrammarError*)self);
}

void k_textgrammarcheck__grammarerror_set_start(void* self, int start) {
    TextGrammarCheck__GrammarError_SetStart((TextGrammarCheck__GrammarError*)self, start);
}

int32_t k_textgrammarcheck__grammarerror_length(void* self) {
    return TextGrammarCheck__GrammarError_Length((TextGrammarCheck__GrammarError*)self);
}

void k_textgrammarcheck__grammarerror_set_length(void* self, int length) {
    TextGrammarCheck__GrammarError_SetLength((TextGrammarCheck__GrammarError*)self, length);
}

const char** k_textgrammarcheck__grammarerror_suggestions(void* self) {
    libqt_list _arr = TextGrammarCheck__GrammarError_Suggestions((TextGrammarCheck__GrammarError*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textgrammarcheck__grammarerror_suggestions\n");
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

void k_textgrammarcheck__grammarerror_set_suggestions(void* self, const char* suggestions[static 1]) {
    size_t suggestions_len = libqt_strv_length(suggestions);
    libqt_string* suggestions_qstr = (libqt_string*)malloc(suggestions_len * sizeof(libqt_string));
    if (suggestions_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textgrammarcheck__grammarerror_set_suggestions\n");
        abort();
    }
    for (size_t i = 0; i < suggestions_len; ++i) {
        suggestions_qstr[i] = qstring(suggestions[i]);
    }
    libqt_list suggestions_list = qlist(suggestions_qstr, suggestions_len);
    TextGrammarCheck__GrammarError_SetSuggestions((TextGrammarCheck__GrammarError*)self, suggestions_list);
    free(suggestions_qstr);
}

bool k_textgrammarcheck__grammarerror_is_valid(void* self) {
    return TextGrammarCheck__GrammarError_IsValid((TextGrammarCheck__GrammarError*)self);
}

void k_textgrammarcheck__grammarerror_parse(void* self, void* obj, int blockindex) {
    TextGrammarCheck__GrammarError_Parse((TextGrammarCheck__GrammarError*)self, (QJsonObject*)obj, blockindex);
}

void k_textgrammarcheck__grammarerror_on_parse(void* self, void (*callback)(void*, void*, int)) {
    TextGrammarCheck__GrammarError_OnParse((TextGrammarCheck__GrammarError*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarerror_super_parse(void* self, void* obj, int blockindex) {
    TextGrammarCheck__GrammarError_SuperParse((TextGrammarCheck__GrammarError*)self, (QJsonObject*)obj, blockindex);
}

bool k_textgrammarcheck__grammarerror_operator_equal(void* self, void* other) {
    return TextGrammarCheck__GrammarError_OperatorEqual((TextGrammarCheck__GrammarError*)self, (TextGrammarCheck__GrammarError*)other);
}

const char* k_textgrammarcheck__grammarerror_option(void* self) {
    libqt_string _str = TextGrammarCheck__GrammarError_Option((TextGrammarCheck__GrammarError*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammarerror_set_option(void* self, const char* option) {
    TextGrammarCheck__GrammarError_SetOption((TextGrammarCheck__GrammarError*)self, qstring(option));
}

const char* k_textgrammarcheck__grammarerror_rule(void* self) {
    libqt_string _str = TextGrammarCheck__GrammarError_Rule((TextGrammarCheck__GrammarError*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammarerror_set_rule(void* self, const char* rule) {
    TextGrammarCheck__GrammarError_SetRule((TextGrammarCheck__GrammarError*)self, qstring(rule));
}

const char* k_textgrammarcheck__grammarerror_url(void* self) {
    libqt_string _str = TextGrammarCheck__GrammarError_Url((TextGrammarCheck__GrammarError*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammarerror_set_url(void* self, const char* url) {
    TextGrammarCheck__GrammarError_SetUrl((TextGrammarCheck__GrammarError*)self, qstring(url));
}

void k_textgrammarcheck__grammarerror_operator_assign(void* self, void* param1) {
    TextGrammarCheck__GrammarError_OperatorAssign((TextGrammarCheck__GrammarError*)self, (TextGrammarCheck__GrammarError*)param1);
}

void k_textgrammarcheck__grammarerror_on_operator_assign(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammarError_OnOperatorAssign((TextGrammarCheck__GrammarError*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammarerror_super_operator_assign(void* self, void* param1) {
    TextGrammarCheck__GrammarError_SuperOperatorAssign((TextGrammarCheck__GrammarError*)self, (TextGrammarCheck__GrammarError*)param1);
}

void k_textgrammarcheck__grammarerror_delete(void* self) {
    TextGrammarCheck__GrammarError_Delete((TextGrammarCheck__GrammarError*)(self));
}
