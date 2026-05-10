#include "libgrammaraction.hpp"
#include "libgrammaraction.h"

TextGrammarCheck__GrammarAction* k_textgrammarcheck__grammaraction_new() {
    return TextGrammarCheck__GrammarAction_new();
}

TextGrammarCheck__GrammarAction* k_textgrammarcheck__grammaraction_new2(void* param1) {
    return TextGrammarCheck__GrammarAction_new2((TextGrammarCheck__GrammarAction*)param1);
}

const char* k_textgrammarcheck__grammaraction_replacement(void* self) {
    libqt_string _str = TextGrammarCheck__GrammarAction_Replacement((TextGrammarCheck__GrammarAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammaraction_set_replacement(void* self, const char* replacement) {
    TextGrammarCheck__GrammarAction_SetReplacement((TextGrammarCheck__GrammarAction*)self, qstring(replacement));
}

int32_t k_textgrammarcheck__grammaraction_start(void* self) {
    return TextGrammarCheck__GrammarAction_Start((TextGrammarCheck__GrammarAction*)self);
}

void k_textgrammarcheck__grammaraction_set_start(void* self, int start) {
    TextGrammarCheck__GrammarAction_SetStart((TextGrammarCheck__GrammarAction*)self, start);
}

int32_t k_textgrammarcheck__grammaraction_length(void* self) {
    return TextGrammarCheck__GrammarAction_Length((TextGrammarCheck__GrammarAction*)self);
}

void k_textgrammarcheck__grammaraction_set_length(void* self, int length) {
    TextGrammarCheck__GrammarAction_SetLength((TextGrammarCheck__GrammarAction*)self, length);
}

const char** k_textgrammarcheck__grammaraction_suggestions(void* self) {
    libqt_list _arr = TextGrammarCheck__GrammarAction_Suggestions((TextGrammarCheck__GrammarAction*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textgrammarcheck__grammaraction_suggestions\n");
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

void k_textgrammarcheck__grammaraction_set_suggestions(void* self, const char* suggestions[static 1]) {
    size_t suggestions_len = libqt_strv_length(suggestions);
    libqt_string* suggestions_qstr = (libqt_string*)malloc(suggestions_len * sizeof(libqt_string));
    if (suggestions_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textgrammarcheck__grammaraction_set_suggestions\n");
        abort();
    }
    for (size_t i = 0; i < suggestions_len; ++i) {
        suggestions_qstr[i] = qstring(suggestions[i]);
    }
    libqt_list suggestions_list = qlist(suggestions_qstr, suggestions_len);
    TextGrammarCheck__GrammarAction_SetSuggestions((TextGrammarCheck__GrammarAction*)self, suggestions_list);
    free(suggestions_qstr);
}

int32_t k_textgrammarcheck__grammaraction_block_id(void* self) {
    return TextGrammarCheck__GrammarAction_BlockId((TextGrammarCheck__GrammarAction*)self);
}

void k_textgrammarcheck__grammaraction_set_block_id(void* self, int blockId) {
    TextGrammarCheck__GrammarAction_SetBlockId((TextGrammarCheck__GrammarAction*)self, blockId);
}

const char** k_textgrammarcheck__grammaraction_info_urls(void* self) {
    libqt_list _arr = TextGrammarCheck__GrammarAction_InfoUrls((TextGrammarCheck__GrammarAction*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textgrammarcheck__grammaraction_info_urls\n");
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

void k_textgrammarcheck__grammaraction_set_info_urls(void* self, const char* urls[static 1]) {
    size_t urls_len = libqt_strv_length(urls);
    libqt_string* urls_qstr = (libqt_string*)malloc(urls_len * sizeof(libqt_string));
    if (urls_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textgrammarcheck__grammaraction_set_info_urls\n");
        abort();
    }
    for (size_t i = 0; i < urls_len; ++i) {
        urls_qstr[i] = qstring(urls[i]);
    }
    libqt_list urls_list = qlist(urls_qstr, urls_len);
    TextGrammarCheck__GrammarAction_SetInfoUrls((TextGrammarCheck__GrammarAction*)self, urls_list);
    free(urls_qstr);
}

void k_textgrammarcheck__grammaraction_delete(void* self) {
    TextGrammarCheck__GrammarAction_Delete((TextGrammarCheck__GrammarAction*)(self));
}
