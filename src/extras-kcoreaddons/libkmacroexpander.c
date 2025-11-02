#include "../libqchar.hpp"
#include "libkmacroexpander.hpp"
#include "libkmacroexpander.h"

KMacroExpanderBase* k_macroexpanderbase_new() {
    return KMacroExpanderBase_new();
}

KMacroExpanderBase* k_macroexpanderbase_new2(void* c) {
    return KMacroExpanderBase_new2((QChar*)c);
}

void k_macroexpanderbase_expand_macros(void* self, const char* str) {
    KMacroExpanderBase_ExpandMacros((KMacroExpanderBase*)self, qstring(str));
}

bool k_macroexpanderbase_expand_macros_shell_quote(void* self, const char* str, int* pos) {
    return KMacroExpanderBase_ExpandMacrosShellQuote((KMacroExpanderBase*)self, qstring(str), pos);
}

bool k_macroexpanderbase_expand_macros_shell_quote2(void* self, const char* str) {
    return KMacroExpanderBase_ExpandMacrosShellQuote2((KMacroExpanderBase*)self, qstring(str));
}

void k_macroexpanderbase_set_escape_char(void* self, void* c) {
    KMacroExpanderBase_SetEscapeChar((KMacroExpanderBase*)self, (QChar*)c);
}

QChar* k_macroexpanderbase_escape_char(void* self) {
    return KMacroExpanderBase_EscapeChar((KMacroExpanderBase*)self);
}

int32_t k_macroexpanderbase_expand_plain_macro(void* self, const char* str, int pos, const char* retVal[static 1]) {
    size_t retVal_len = libqt_strv_length(retVal);
    libqt_string* retVal_qstr = (libqt_string*)malloc(retVal_len * sizeof(libqt_string));
    if (retVal_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_macroexpanderbase_expand_plain_macro");
        abort();
    }
    for (size_t i = 0; i < retVal_len; ++i) {
        retVal_qstr[i] = qstring(retVal[i]);
    }
    libqt_list retVal_list = qlist(retVal_qstr, retVal_len);
    int32_t _out = KMacroExpanderBase_ExpandPlainMacro((KMacroExpanderBase*)self, qstring(str), pos, retVal_list);
    free(retVal_qstr);
    return _out;
}

void k_macroexpanderbase_on_expand_plain_macro(void* self, int32_t (*callback)(void*, const char*, int, const char**)) {
    KMacroExpanderBase_OnExpandPlainMacro((KMacroExpanderBase*)self, (intptr_t)callback);
}

int32_t k_macroexpanderbase_qbase_expand_plain_macro(void* self, const char* str, int pos, const char* retVal[static 1]) {
    size_t retVal_len = libqt_strv_length(retVal);
    libqt_string* retVal_qstr = (libqt_string*)malloc(retVal_len * sizeof(libqt_string));
    if (retVal_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_macroexpanderbase_expand_plain_macro");
        abort();
    }
    for (size_t i = 0; i < retVal_len; ++i) {
        retVal_qstr[i] = qstring(retVal[i]);
    }
    libqt_list retVal_list = qlist(retVal_qstr, retVal_len);
    return KMacroExpanderBase_QBaseExpandPlainMacro((KMacroExpanderBase*)self, qstring(str), pos, retVal_list);
}

int32_t k_macroexpanderbase_expand_escaped_macro(void* self, const char* str, int pos, const char* retVal[static 1]) {
    size_t retVal_len = libqt_strv_length(retVal);
    libqt_string* retVal_qstr = (libqt_string*)malloc(retVal_len * sizeof(libqt_string));
    if (retVal_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_macroexpanderbase_expand_escaped_macro");
        abort();
    }
    for (size_t i = 0; i < retVal_len; ++i) {
        retVal_qstr[i] = qstring(retVal[i]);
    }
    libqt_list retVal_list = qlist(retVal_qstr, retVal_len);
    int32_t _out = KMacroExpanderBase_ExpandEscapedMacro((KMacroExpanderBase*)self, qstring(str), pos, retVal_list);
    free(retVal_qstr);
    return _out;
}

void k_macroexpanderbase_on_expand_escaped_macro(void* self, int32_t (*callback)(void*, const char*, int, const char**)) {
    KMacroExpanderBase_OnExpandEscapedMacro((KMacroExpanderBase*)self, (intptr_t)callback);
}

int32_t k_macroexpanderbase_qbase_expand_escaped_macro(void* self, const char* str, int pos, const char* retVal[static 1]) {
    size_t retVal_len = libqt_strv_length(retVal);
    libqt_string* retVal_qstr = (libqt_string*)malloc(retVal_len * sizeof(libqt_string));
    if (retVal_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_macroexpanderbase_expand_escaped_macro");
        abort();
    }
    for (size_t i = 0; i < retVal_len; ++i) {
        retVal_qstr[i] = qstring(retVal[i]);
    }
    libqt_list retVal_list = qlist(retVal_qstr, retVal_len);
    return KMacroExpanderBase_QBaseExpandEscapedMacro((KMacroExpanderBase*)self, qstring(str), pos, retVal_list);
}

void k_macroexpanderbase_delete(void* self) {
    KMacroExpanderBase_Delete((KMacroExpanderBase*)(self));
}

KWordMacroExpander* k_wordmacroexpander_new() {
    return KWordMacroExpander_new();
}

KWordMacroExpander* k_wordmacroexpander_new2(void* c) {
    return KWordMacroExpander_new2((QChar*)c);
}

int32_t k_wordmacroexpander_expand_plain_macro(void* self, const char* str, int pos, const char* retVal[static 1]) {
    size_t retVal_len = libqt_strv_length(retVal);
    libqt_string* retVal_qstr = (libqt_string*)malloc(retVal_len * sizeof(libqt_string));
    if (retVal_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_wordmacroexpander_expand_plain_macro");
        abort();
    }
    for (size_t i = 0; i < retVal_len; ++i) {
        retVal_qstr[i] = qstring(retVal[i]);
    }
    libqt_list retVal_list = qlist(retVal_qstr, retVal_len);
    int32_t _out = KWordMacroExpander_ExpandPlainMacro((KWordMacroExpander*)self, qstring(str), pos, retVal_list);
    free(retVal_qstr);
    return _out;
}

void k_wordmacroexpander_on_expand_plain_macro(void* self, int32_t (*callback)(void*, const char*, int, const char**)) {
    KWordMacroExpander_OnExpandPlainMacro((KWordMacroExpander*)self, (intptr_t)callback);
}

int32_t k_wordmacroexpander_qbase_expand_plain_macro(void* self, const char* str, int pos, const char* retVal[static 1]) {
    size_t retVal_len = libqt_strv_length(retVal);
    libqt_string* retVal_qstr = (libqt_string*)malloc(retVal_len * sizeof(libqt_string));
    if (retVal_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_wordmacroexpander_expand_plain_macro");
        abort();
    }
    for (size_t i = 0; i < retVal_len; ++i) {
        retVal_qstr[i] = qstring(retVal[i]);
    }
    libqt_list retVal_list = qlist(retVal_qstr, retVal_len);
    return KWordMacroExpander_QBaseExpandPlainMacro((KWordMacroExpander*)self, qstring(str), pos, retVal_list);
}

int32_t k_wordmacroexpander_expand_escaped_macro(void* self, const char* str, int pos, const char* retVal[static 1]) {
    size_t retVal_len = libqt_strv_length(retVal);
    libqt_string* retVal_qstr = (libqt_string*)malloc(retVal_len * sizeof(libqt_string));
    if (retVal_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_wordmacroexpander_expand_escaped_macro");
        abort();
    }
    for (size_t i = 0; i < retVal_len; ++i) {
        retVal_qstr[i] = qstring(retVal[i]);
    }
    libqt_list retVal_list = qlist(retVal_qstr, retVal_len);
    int32_t _out = KWordMacroExpander_ExpandEscapedMacro((KWordMacroExpander*)self, qstring(str), pos, retVal_list);
    free(retVal_qstr);
    return _out;
}

void k_wordmacroexpander_on_expand_escaped_macro(void* self, int32_t (*callback)(void*, const char*, int, const char**)) {
    KWordMacroExpander_OnExpandEscapedMacro((KWordMacroExpander*)self, (intptr_t)callback);
}

int32_t k_wordmacroexpander_qbase_expand_escaped_macro(void* self, const char* str, int pos, const char* retVal[static 1]) {
    size_t retVal_len = libqt_strv_length(retVal);
    libqt_string* retVal_qstr = (libqt_string*)malloc(retVal_len * sizeof(libqt_string));
    if (retVal_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_wordmacroexpander_expand_escaped_macro");
        abort();
    }
    for (size_t i = 0; i < retVal_len; ++i) {
        retVal_qstr[i] = qstring(retVal[i]);
    }
    libqt_list retVal_list = qlist(retVal_qstr, retVal_len);
    return KWordMacroExpander_QBaseExpandEscapedMacro((KWordMacroExpander*)self, qstring(str), pos, retVal_list);
}

bool k_wordmacroexpander_expand_macro(void* self, const char* str, const char* retVal[static 1]) {
    size_t retVal_len = libqt_strv_length(retVal);
    libqt_string* retVal_qstr = (libqt_string*)malloc(retVal_len * sizeof(libqt_string));
    if (retVal_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_wordmacroexpander_expand_macro");
        abort();
    }
    for (size_t i = 0; i < retVal_len; ++i) {
        retVal_qstr[i] = qstring(retVal[i]);
    }
    libqt_list retVal_list = qlist(retVal_qstr, retVal_len);
    bool _out = KWordMacroExpander_ExpandMacro((KWordMacroExpander*)self, qstring(str), retVal_list);
    free(retVal_qstr);
    return _out;
}

void k_wordmacroexpander_on_expand_macro(void* self, bool (*callback)(void*, const char*, const char**)) {
    KWordMacroExpander_OnExpandMacro((KWordMacroExpander*)self, (intptr_t)callback);
}

bool k_wordmacroexpander_qbase_expand_macro(void* self, const char* str, const char* retVal[static 1]) {
    size_t retVal_len = libqt_strv_length(retVal);
    libqt_string* retVal_qstr = (libqt_string*)malloc(retVal_len * sizeof(libqt_string));
    if (retVal_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_wordmacroexpander_expand_macro");
        abort();
    }
    for (size_t i = 0; i < retVal_len; ++i) {
        retVal_qstr[i] = qstring(retVal[i]);
    }
    libqt_list retVal_list = qlist(retVal_qstr, retVal_len);
    return KWordMacroExpander_QBaseExpandMacro((KWordMacroExpander*)self, qstring(str), retVal_list);
}

void k_wordmacroexpander_expand_macros(void* self, const char* str) {
    KMacroExpanderBase_ExpandMacros((KMacroExpanderBase*)self, qstring(str));
}

bool k_wordmacroexpander_expand_macros_shell_quote(void* self, const char* str, int* pos) {
    return KMacroExpanderBase_ExpandMacrosShellQuote((KMacroExpanderBase*)self, qstring(str), pos);
}

bool k_wordmacroexpander_expand_macros_shell_quote2(void* self, const char* str) {
    return KMacroExpanderBase_ExpandMacrosShellQuote2((KMacroExpanderBase*)self, qstring(str));
}

void k_wordmacroexpander_set_escape_char(void* self, void* c) {
    KMacroExpanderBase_SetEscapeChar((KMacroExpanderBase*)self, (QChar*)c);
}

QChar* k_wordmacroexpander_escape_char(void* self) {
    return KMacroExpanderBase_EscapeChar((KMacroExpanderBase*)self);
}

void k_wordmacroexpander_delete(void* self) {
    KWordMacroExpander_Delete((KWordMacroExpander*)(self));
}

KCharMacroExpander* k_charmacroexpander_new() {
    return KCharMacroExpander_new();
}

KCharMacroExpander* k_charmacroexpander_new2(void* c) {
    return KCharMacroExpander_new2((QChar*)c);
}

int32_t k_charmacroexpander_expand_plain_macro(void* self, const char* str, int pos, const char* retVal[static 1]) {
    size_t retVal_len = libqt_strv_length(retVal);
    libqt_string* retVal_qstr = (libqt_string*)malloc(retVal_len * sizeof(libqt_string));
    if (retVal_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_charmacroexpander_expand_plain_macro");
        abort();
    }
    for (size_t i = 0; i < retVal_len; ++i) {
        retVal_qstr[i] = qstring(retVal[i]);
    }
    libqt_list retVal_list = qlist(retVal_qstr, retVal_len);
    int32_t _out = KCharMacroExpander_ExpandPlainMacro((KCharMacroExpander*)self, qstring(str), pos, retVal_list);
    free(retVal_qstr);
    return _out;
}

void k_charmacroexpander_on_expand_plain_macro(void* self, int32_t (*callback)(void*, const char*, int, const char**)) {
    KCharMacroExpander_OnExpandPlainMacro((KCharMacroExpander*)self, (intptr_t)callback);
}

int32_t k_charmacroexpander_qbase_expand_plain_macro(void* self, const char* str, int pos, const char* retVal[static 1]) {
    size_t retVal_len = libqt_strv_length(retVal);
    libqt_string* retVal_qstr = (libqt_string*)malloc(retVal_len * sizeof(libqt_string));
    if (retVal_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_charmacroexpander_expand_plain_macro");
        abort();
    }
    for (size_t i = 0; i < retVal_len; ++i) {
        retVal_qstr[i] = qstring(retVal[i]);
    }
    libqt_list retVal_list = qlist(retVal_qstr, retVal_len);
    return KCharMacroExpander_QBaseExpandPlainMacro((KCharMacroExpander*)self, qstring(str), pos, retVal_list);
}

int32_t k_charmacroexpander_expand_escaped_macro(void* self, const char* str, int pos, const char* retVal[static 1]) {
    size_t retVal_len = libqt_strv_length(retVal);
    libqt_string* retVal_qstr = (libqt_string*)malloc(retVal_len * sizeof(libqt_string));
    if (retVal_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_charmacroexpander_expand_escaped_macro");
        abort();
    }
    for (size_t i = 0; i < retVal_len; ++i) {
        retVal_qstr[i] = qstring(retVal[i]);
    }
    libqt_list retVal_list = qlist(retVal_qstr, retVal_len);
    int32_t _out = KCharMacroExpander_ExpandEscapedMacro((KCharMacroExpander*)self, qstring(str), pos, retVal_list);
    free(retVal_qstr);
    return _out;
}

void k_charmacroexpander_on_expand_escaped_macro(void* self, int32_t (*callback)(void*, const char*, int, const char**)) {
    KCharMacroExpander_OnExpandEscapedMacro((KCharMacroExpander*)self, (intptr_t)callback);
}

int32_t k_charmacroexpander_qbase_expand_escaped_macro(void* self, const char* str, int pos, const char* retVal[static 1]) {
    size_t retVal_len = libqt_strv_length(retVal);
    libqt_string* retVal_qstr = (libqt_string*)malloc(retVal_len * sizeof(libqt_string));
    if (retVal_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_charmacroexpander_expand_escaped_macro");
        abort();
    }
    for (size_t i = 0; i < retVal_len; ++i) {
        retVal_qstr[i] = qstring(retVal[i]);
    }
    libqt_list retVal_list = qlist(retVal_qstr, retVal_len);
    return KCharMacroExpander_QBaseExpandEscapedMacro((KCharMacroExpander*)self, qstring(str), pos, retVal_list);
}

bool k_charmacroexpander_expand_macro(void* self, void* chr, const char* retVal[static 1]) {
    size_t retVal_len = libqt_strv_length(retVal);
    libqt_string* retVal_qstr = (libqt_string*)malloc(retVal_len * sizeof(libqt_string));
    if (retVal_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_charmacroexpander_expand_macro");
        abort();
    }
    for (size_t i = 0; i < retVal_len; ++i) {
        retVal_qstr[i] = qstring(retVal[i]);
    }
    libqt_list retVal_list = qlist(retVal_qstr, retVal_len);
    bool _out = KCharMacroExpander_ExpandMacro((KCharMacroExpander*)self, (QChar*)chr, retVal_list);
    free(retVal_qstr);
    return _out;
}

void k_charmacroexpander_on_expand_macro(void* self, bool (*callback)(void*, void*, const char**)) {
    KCharMacroExpander_OnExpandMacro((KCharMacroExpander*)self, (intptr_t)callback);
}

bool k_charmacroexpander_qbase_expand_macro(void* self, void* chr, const char* retVal[static 1]) {
    size_t retVal_len = libqt_strv_length(retVal);
    libqt_string* retVal_qstr = (libqt_string*)malloc(retVal_len * sizeof(libqt_string));
    if (retVal_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_charmacroexpander_expand_macro");
        abort();
    }
    for (size_t i = 0; i < retVal_len; ++i) {
        retVal_qstr[i] = qstring(retVal[i]);
    }
    libqt_list retVal_list = qlist(retVal_qstr, retVal_len);
    return KCharMacroExpander_QBaseExpandMacro((KCharMacroExpander*)self, (QChar*)chr, retVal_list);
}

void k_charmacroexpander_expand_macros(void* self, const char* str) {
    KMacroExpanderBase_ExpandMacros((KMacroExpanderBase*)self, qstring(str));
}

bool k_charmacroexpander_expand_macros_shell_quote(void* self, const char* str, int* pos) {
    return KMacroExpanderBase_ExpandMacrosShellQuote((KMacroExpanderBase*)self, qstring(str), pos);
}

bool k_charmacroexpander_expand_macros_shell_quote2(void* self, const char* str) {
    return KMacroExpanderBase_ExpandMacrosShellQuote2((KMacroExpanderBase*)self, qstring(str));
}

void k_charmacroexpander_set_escape_char(void* self, void* c) {
    KMacroExpanderBase_SetEscapeChar((KMacroExpanderBase*)self, (QChar*)c);
}

QChar* k_charmacroexpander_escape_char(void* self) {
    return KMacroExpanderBase_EscapeChar((KMacroExpanderBase*)self);
}

void k_charmacroexpander_delete(void* self) {
    KCharMacroExpander_Delete((KCharMacroExpander*)(self));
}

const char* k_macroexpander_expand_macros(const char* param1, libqt_map /* of QChar* to const char* */ param2, void* param3) {
    libqt_string _str = KMacroExpander_ExpandMacros(qstring(param1), param2, (QChar*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_macroexpander_expand_macros_shell_quote(const char* param1, libqt_map /* of QChar* to const char* */ param2, void* param3) {
    libqt_string _str = KMacroExpander_ExpandMacrosShellQuote(qstring(param1), param2, (QChar*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_macroexpander_expand_macros2(const char* param1, libqt_map /* of const char* to const char* */ param2, void* param3) {
    libqt_string _str = KMacroExpander_ExpandMacros2(qstring(param1), param2, (QChar*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_macroexpander_expand_macros_shell_quote2(const char* param1, libqt_map /* of const char* to const char* */ param2, void* param3) {
    libqt_string _str = KMacroExpander_ExpandMacrosShellQuote2(qstring(param1), param2, (QChar*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_macroexpander_expand_macros3(const char* param1, libqt_map /* of QChar* to const char* */ param2, void* param3) {
    libqt_string _str = KMacroExpander_ExpandMacros3(qstring(param1), param2, (QChar*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_macroexpander_expand_macros4(const char* param1, libqt_map /* of const char* to const char* */ param2, void* param3) {
    libqt_string _str = KMacroExpander_ExpandMacros4(qstring(param1), param2, (QChar*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_macroexpander_expand_macros_shell_quote3(const char* param1, libqt_map /* of QChar* to const char* */ param2, void* param3) {
    libqt_string _str = KMacroExpander_ExpandMacrosShellQuote3(qstring(param1), param2, (QChar*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_macroexpander_expand_macros_shell_quote4(const char* param1, libqt_map /* of const char* to const char* */ param2, void* param3) {
    libqt_string _str = KMacroExpander_ExpandMacrosShellQuote4(qstring(param1), param2, (QChar*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}
