#include "../libqchar.hpp"
#include "libkmacroexpander.hpp"
#include "libkmacroexpander.h"

KMacroExpanderBase* k_macroexpanderbase_new() {
    return KMacroExpanderBase_New();
}

KMacroExpanderBase* k_macroexpanderbase_new2(void* c) {
    return KMacroExpanderBase_New2((QChar*)c);
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
        fprintf(stderr, "Failed to allocate memory for string list in k_macroexpanderbase_expand_plain_macro\n");
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

int32_t k_macroexpanderbase_super_expand_plain_macro(void* self, const char* str, int pos, const char* retVal[static 1]) {
    size_t retVal_len = libqt_strv_length(retVal);
    libqt_string* retVal_qstr = (libqt_string*)malloc(retVal_len * sizeof(libqt_string));
    if (retVal_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_macroexpanderbase_expand_plain_macro\n");
        abort();
    }
    for (size_t i = 0; i < retVal_len; ++i) {
        retVal_qstr[i] = qstring(retVal[i]);
    }
    libqt_list retVal_list = qlist(retVal_qstr, retVal_len);
    return KMacroExpanderBase_SuperExpandPlainMacro((KMacroExpanderBase*)self, qstring(str), pos, retVal_list);
}

int32_t k_macroexpanderbase_expand_escaped_macro(void* self, const char* str, int pos, const char* retVal[static 1]) {
    size_t retVal_len = libqt_strv_length(retVal);
    libqt_string* retVal_qstr = (libqt_string*)malloc(retVal_len * sizeof(libqt_string));
    if (retVal_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_macroexpanderbase_expand_escaped_macro\n");
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

int32_t k_macroexpanderbase_super_expand_escaped_macro(void* self, const char* str, int pos, const char* retVal[static 1]) {
    size_t retVal_len = libqt_strv_length(retVal);
    libqt_string* retVal_qstr = (libqt_string*)malloc(retVal_len * sizeof(libqt_string));
    if (retVal_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_macroexpanderbase_expand_escaped_macro\n");
        abort();
    }
    for (size_t i = 0; i < retVal_len; ++i) {
        retVal_qstr[i] = qstring(retVal[i]);
    }
    libqt_list retVal_list = qlist(retVal_qstr, retVal_len);
    return KMacroExpanderBase_SuperExpandEscapedMacro((KMacroExpanderBase*)self, qstring(str), pos, retVal_list);
}

void k_macroexpanderbase_delete(void* self) {
    KMacroExpanderBase_Delete((KMacroExpanderBase*)(self));
}

KWordMacroExpander* k_wordmacroexpander_new() {
    return KWordMacroExpander_New();
}

KWordMacroExpander* k_wordmacroexpander_new2(void* c) {
    return KWordMacroExpander_New2((QChar*)c);
}

int32_t k_wordmacroexpander_expand_plain_macro(void* self, const char* str, int pos, const char* retVal[static 1]) {
    size_t retVal_len = libqt_strv_length(retVal);
    libqt_string* retVal_qstr = (libqt_string*)malloc(retVal_len * sizeof(libqt_string));
    if (retVal_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_wordmacroexpander_expand_plain_macro\n");
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

int32_t k_wordmacroexpander_super_expand_plain_macro(void* self, const char* str, int pos, const char* retVal[static 1]) {
    size_t retVal_len = libqt_strv_length(retVal);
    libqt_string* retVal_qstr = (libqt_string*)malloc(retVal_len * sizeof(libqt_string));
    if (retVal_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_wordmacroexpander_expand_plain_macro\n");
        abort();
    }
    for (size_t i = 0; i < retVal_len; ++i) {
        retVal_qstr[i] = qstring(retVal[i]);
    }
    libqt_list retVal_list = qlist(retVal_qstr, retVal_len);
    return KWordMacroExpander_SuperExpandPlainMacro((KWordMacroExpander*)self, qstring(str), pos, retVal_list);
}

int32_t k_wordmacroexpander_expand_escaped_macro(void* self, const char* str, int pos, const char* retVal[static 1]) {
    size_t retVal_len = libqt_strv_length(retVal);
    libqt_string* retVal_qstr = (libqt_string*)malloc(retVal_len * sizeof(libqt_string));
    if (retVal_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_wordmacroexpander_expand_escaped_macro\n");
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

int32_t k_wordmacroexpander_super_expand_escaped_macro(void* self, const char* str, int pos, const char* retVal[static 1]) {
    size_t retVal_len = libqt_strv_length(retVal);
    libqt_string* retVal_qstr = (libqt_string*)malloc(retVal_len * sizeof(libqt_string));
    if (retVal_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_wordmacroexpander_expand_escaped_macro\n");
        abort();
    }
    for (size_t i = 0; i < retVal_len; ++i) {
        retVal_qstr[i] = qstring(retVal[i]);
    }
    libqt_list retVal_list = qlist(retVal_qstr, retVal_len);
    return KWordMacroExpander_SuperExpandEscapedMacro((KWordMacroExpander*)self, qstring(str), pos, retVal_list);
}

bool k_wordmacroexpander_expand_macro(void* self, const char* str, const char* retVal[static 1]) {
    size_t retVal_len = libqt_strv_length(retVal);
    libqt_string* retVal_qstr = (libqt_string*)malloc(retVal_len * sizeof(libqt_string));
    if (retVal_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_wordmacroexpander_expand_macro\n");
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

bool k_wordmacroexpander_super_expand_macro(void* self, const char* str, const char* retVal[static 1]) {
    size_t retVal_len = libqt_strv_length(retVal);
    libqt_string* retVal_qstr = (libqt_string*)malloc(retVal_len * sizeof(libqt_string));
    if (retVal_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_wordmacroexpander_expand_macro\n");
        abort();
    }
    for (size_t i = 0; i < retVal_len; ++i) {
        retVal_qstr[i] = qstring(retVal[i]);
    }
    libqt_list retVal_list = qlist(retVal_qstr, retVal_len);
    return KWordMacroExpander_SuperExpandMacro((KWordMacroExpander*)self, qstring(str), retVal_list);
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
    return KCharMacroExpander_New();
}

KCharMacroExpander* k_charmacroexpander_new2(void* c) {
    return KCharMacroExpander_New2((QChar*)c);
}

int32_t k_charmacroexpander_expand_plain_macro(void* self, const char* str, int pos, const char* retVal[static 1]) {
    size_t retVal_len = libqt_strv_length(retVal);
    libqt_string* retVal_qstr = (libqt_string*)malloc(retVal_len * sizeof(libqt_string));
    if (retVal_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_charmacroexpander_expand_plain_macro\n");
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

int32_t k_charmacroexpander_super_expand_plain_macro(void* self, const char* str, int pos, const char* retVal[static 1]) {
    size_t retVal_len = libqt_strv_length(retVal);
    libqt_string* retVal_qstr = (libqt_string*)malloc(retVal_len * sizeof(libqt_string));
    if (retVal_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_charmacroexpander_expand_plain_macro\n");
        abort();
    }
    for (size_t i = 0; i < retVal_len; ++i) {
        retVal_qstr[i] = qstring(retVal[i]);
    }
    libqt_list retVal_list = qlist(retVal_qstr, retVal_len);
    return KCharMacroExpander_SuperExpandPlainMacro((KCharMacroExpander*)self, qstring(str), pos, retVal_list);
}

int32_t k_charmacroexpander_expand_escaped_macro(void* self, const char* str, int pos, const char* retVal[static 1]) {
    size_t retVal_len = libqt_strv_length(retVal);
    libqt_string* retVal_qstr = (libqt_string*)malloc(retVal_len * sizeof(libqt_string));
    if (retVal_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_charmacroexpander_expand_escaped_macro\n");
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

int32_t k_charmacroexpander_super_expand_escaped_macro(void* self, const char* str, int pos, const char* retVal[static 1]) {
    size_t retVal_len = libqt_strv_length(retVal);
    libqt_string* retVal_qstr = (libqt_string*)malloc(retVal_len * sizeof(libqt_string));
    if (retVal_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_charmacroexpander_expand_escaped_macro\n");
        abort();
    }
    for (size_t i = 0; i < retVal_len; ++i) {
        retVal_qstr[i] = qstring(retVal[i]);
    }
    libqt_list retVal_list = qlist(retVal_qstr, retVal_len);
    return KCharMacroExpander_SuperExpandEscapedMacro((KCharMacroExpander*)self, qstring(str), pos, retVal_list);
}

bool k_charmacroexpander_expand_macro(void* self, void* chr, const char* retVal[static 1]) {
    size_t retVal_len = libqt_strv_length(retVal);
    libqt_string* retVal_qstr = (libqt_string*)malloc(retVal_len * sizeof(libqt_string));
    if (retVal_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_charmacroexpander_expand_macro\n");
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

bool k_charmacroexpander_super_expand_macro(void* self, void* chr, const char* retVal[static 1]) {
    size_t retVal_len = libqt_strv_length(retVal);
    libqt_string* retVal_qstr = (libqt_string*)malloc(retVal_len * sizeof(libqt_string));
    if (retVal_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_charmacroexpander_expand_macro\n");
        abort();
    }
    for (size_t i = 0; i < retVal_len; ++i) {
        retVal_qstr[i] = qstring(retVal[i]);
    }
    libqt_list retVal_list = qlist(retVal_qstr, retVal_len);
    return KCharMacroExpander_SuperExpandMacro((KCharMacroExpander*)self, (QChar*)chr, retVal_list);
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

const char* k_macroexpander_expand_macros(const char* str, libqt_map /* of QChar* to const char* */ map, void* c) {
    // Convert libqt_map to QHash<QChar,QString>
    libqt_map map_ret;
    map_ret.len = map.len;
    map_ret.keys = (QChar**)malloc(map_ret.len * sizeof(QChar*));
    if (map_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_macroexpander_expand_macros\n");
        abort();
    }
    map_ret.values = (libqt_string*)malloc(map_ret.len * sizeof(libqt_string));
    if (map_ret.values == NULL) {
        free(map_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_macroexpander_expand_macros\n");
        abort();
    }
    QChar** map_karr = (QChar**)map.keys;
    QChar** map_kdest = (QChar**)map_ret.keys;
    const char** map_varr = (const char**)map.values;
    libqt_string* map_vdest = (libqt_string*)map_ret.values;
    for (size_t i = 0; i < map_ret.len; ++i) {
        map_kdest[i] = map_karr[i];
        map_vdest[i] = qstring(map_varr[i]);
    }
    libqt_string _str = KMacroExpander_ExpandMacros(qstring(str), map_ret, (QChar*)c);
    free(map_ret.keys);
    free(map_ret.values);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_macroexpander_expand_macros_shell_quote(const char* str, libqt_map /* of QChar* to const char* */ map, void* c) {
    // Convert libqt_map to QHash<QChar,QString>
    libqt_map map_ret;
    map_ret.len = map.len;
    map_ret.keys = (QChar**)malloc(map_ret.len * sizeof(QChar*));
    if (map_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_macroexpander_expand_macros_shell_quote\n");
        abort();
    }
    map_ret.values = (libqt_string*)malloc(map_ret.len * sizeof(libqt_string));
    if (map_ret.values == NULL) {
        free(map_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_macroexpander_expand_macros_shell_quote\n");
        abort();
    }
    QChar** map_karr = (QChar**)map.keys;
    QChar** map_kdest = (QChar**)map_ret.keys;
    const char** map_varr = (const char**)map.values;
    libqt_string* map_vdest = (libqt_string*)map_ret.values;
    for (size_t i = 0; i < map_ret.len; ++i) {
        map_kdest[i] = map_karr[i];
        map_vdest[i] = qstring(map_varr[i]);
    }
    libqt_string _str = KMacroExpander_ExpandMacrosShellQuote(qstring(str), map_ret, (QChar*)c);
    free(map_ret.keys);
    free(map_ret.values);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_macroexpander_expand_macros2(const char* str, libqt_map /* of const char* to const char* */ map, void* c) {
    // Convert libqt_map to QHash<QString,QString>
    libqt_map map_ret;
    map_ret.len = map.len;
    map_ret.keys = (libqt_string*)malloc(map_ret.len * sizeof(libqt_string));
    if (map_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_macroexpander_expand_macros2\n");
        abort();
    }
    map_ret.values = (libqt_string*)malloc(map_ret.len * sizeof(libqt_string));
    if (map_ret.values == NULL) {
        free(map_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_macroexpander_expand_macros2\n");
        abort();
    }
    const char** map_karr = (const char**)map.keys;
    libqt_string* map_kdest = (libqt_string*)map_ret.keys;
    const char** map_varr = (const char**)map.values;
    libqt_string* map_vdest = (libqt_string*)map_ret.values;
    for (size_t i = 0; i < map_ret.len; ++i) {
        map_kdest[i] = qstring(map_karr[i]);
        map_vdest[i] = qstring(map_varr[i]);
    }
    libqt_string _str = KMacroExpander_ExpandMacros2(qstring(str), map_ret, (QChar*)c);
    free(map_ret.keys);
    free(map_ret.values);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_macroexpander_expand_macros_shell_quote2(const char* str, libqt_map /* of const char* to const char* */ map, void* c) {
    // Convert libqt_map to QHash<QString,QString>
    libqt_map map_ret;
    map_ret.len = map.len;
    map_ret.keys = (libqt_string*)malloc(map_ret.len * sizeof(libqt_string));
    if (map_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_macroexpander_expand_macros_shell_quote2\n");
        abort();
    }
    map_ret.values = (libqt_string*)malloc(map_ret.len * sizeof(libqt_string));
    if (map_ret.values == NULL) {
        free(map_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_macroexpander_expand_macros_shell_quote2\n");
        abort();
    }
    const char** map_karr = (const char**)map.keys;
    libqt_string* map_kdest = (libqt_string*)map_ret.keys;
    const char** map_varr = (const char**)map.values;
    libqt_string* map_vdest = (libqt_string*)map_ret.values;
    for (size_t i = 0; i < map_ret.len; ++i) {
        map_kdest[i] = qstring(map_karr[i]);
        map_vdest[i] = qstring(map_varr[i]);
    }
    libqt_string _str = KMacroExpander_ExpandMacrosShellQuote2(qstring(str), map_ret, (QChar*)c);
    free(map_ret.keys);
    free(map_ret.values);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_macroexpander_expand_macros3(const char* str, libqt_map /* of QChar* to const char** */ map, void* c) {
    // Convert libqt_map to QHash<QChar,QList<QString>>
    libqt_map map_ret;
    map_ret.len = map.len;
    map_ret.keys = (QChar**)malloc(map_ret.len * sizeof(QChar*));
    if (map_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_macroexpander_expand_macros3\n");
        abort();
    }
    map_ret.values = (libqt_list*)malloc(map_ret.len * sizeof(libqt_list));
    if (map_ret.values == NULL) {
        free(map_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_macroexpander_expand_macros3\n");
        abort();
    }
    QChar** map_karr = (QChar**)map.keys;
    QChar** map_kdest = (QChar**)map_ret.keys;
    const char*** map_varr = (const char***)map.values;
    libqt_list* map_vdest = (libqt_list*)map_ret.values;
    for (size_t i = 0; i < map_ret.len; ++i) {
        map_kdest[i] = map_karr[i];
        const char** map_array = map_varr[i];
        size_t map_value_count = libqt_strv_length((const char**)map_array);
        libqt_string* map_value_strings = (libqt_string*)malloc(map_value_count * sizeof(libqt_string));
        if (map_value_strings == NULL) {
            for (size_t j = 0; j < i; j++) {
                free(((libqt_list*)map_ret.values)[j].data.ptr);
            }
            free(map_ret.keys);
            free(map_ret.values);
            fprintf(stderr, "Failed to allocate memory for map string key in k_macroexpander_expand_macros3\n");
            abort();
        }
        for (size_t j = 0; j < map_value_count; j++) {
            map_value_strings[j] = qstring(map_array[j]);
        }
        map_vdest[i].len = map_value_count;
        map_vdest[i].data.ptr = map_value_strings;
    }
    libqt_string _str = KMacroExpander_ExpandMacros3(qstring(str), map_ret, (QChar*)c);
    for (size_t i = 0; i < map_ret.len; ++i) {
        free(((libqt_list*)map_ret.values)[i].data.ptr);
    }
    free(map_ret.keys);
    free(map_ret.values);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_macroexpander_expand_macros4(const char* str, libqt_map /* of const char* to const char** */ map, void* c) {
    // Convert libqt_map to QHash<QString,QList<QString>>
    libqt_map map_ret;
    map_ret.len = map.len;
    map_ret.keys = (libqt_string*)malloc(map_ret.len * sizeof(libqt_string));
    if (map_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_macroexpander_expand_macros4\n");
        abort();
    }
    map_ret.values = (libqt_list*)malloc(map_ret.len * sizeof(libqt_list));
    if (map_ret.values == NULL) {
        free(map_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_macroexpander_expand_macros4\n");
        abort();
    }
    const char** map_karr = (const char**)map.keys;
    libqt_string* map_kdest = (libqt_string*)map_ret.keys;
    const char*** map_varr = (const char***)map.values;
    libqt_list* map_vdest = (libqt_list*)map_ret.values;
    for (size_t i = 0; i < map_ret.len; ++i) {
        map_kdest[i] = qstring(map_karr[i]);
        const char** map_array = map_varr[i];
        size_t map_value_count = libqt_strv_length((const char**)map_array);
        libqt_string* map_value_strings = (libqt_string*)malloc(map_value_count * sizeof(libqt_string));
        if (map_value_strings == NULL) {
            for (size_t j = 0; j < i; j++) {
                free(((libqt_list*)map_ret.values)[j].data.ptr);
            }
            free(map_ret.keys);
            free(map_ret.values);
            fprintf(stderr, "Failed to allocate memory for map string key in k_macroexpander_expand_macros4\n");
            abort();
        }
        for (size_t j = 0; j < map_value_count; j++) {
            map_value_strings[j] = qstring(map_array[j]);
        }
        map_vdest[i].len = map_value_count;
        map_vdest[i].data.ptr = map_value_strings;
    }
    libqt_string _str = KMacroExpander_ExpandMacros4(qstring(str), map_ret, (QChar*)c);
    for (size_t i = 0; i < map_ret.len; ++i) {
        free(((libqt_list*)map_ret.values)[i].data.ptr);
    }
    free(map_ret.keys);
    free(map_ret.values);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_macroexpander_expand_macros_shell_quote3(const char* str, libqt_map /* of QChar* to const char** */ map, void* c) {
    // Convert libqt_map to QHash<QChar,QList<QString>>
    libqt_map map_ret;
    map_ret.len = map.len;
    map_ret.keys = (QChar**)malloc(map_ret.len * sizeof(QChar*));
    if (map_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_macroexpander_expand_macros_shell_quote3\n");
        abort();
    }
    map_ret.values = (libqt_list*)malloc(map_ret.len * sizeof(libqt_list));
    if (map_ret.values == NULL) {
        free(map_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_macroexpander_expand_macros_shell_quote3\n");
        abort();
    }
    QChar** map_karr = (QChar**)map.keys;
    QChar** map_kdest = (QChar**)map_ret.keys;
    const char*** map_varr = (const char***)map.values;
    libqt_list* map_vdest = (libqt_list*)map_ret.values;
    for (size_t i = 0; i < map_ret.len; ++i) {
        map_kdest[i] = map_karr[i];
        const char** map_array = map_varr[i];
        size_t map_value_count = libqt_strv_length((const char**)map_array);
        libqt_string* map_value_strings = (libqt_string*)malloc(map_value_count * sizeof(libqt_string));
        if (map_value_strings == NULL) {
            for (size_t j = 0; j < i; j++) {
                free(((libqt_list*)map_ret.values)[j].data.ptr);
            }
            free(map_ret.keys);
            free(map_ret.values);
            fprintf(stderr, "Failed to allocate memory for map string key in k_macroexpander_expand_macros_shell_quote3\n");
            abort();
        }
        for (size_t j = 0; j < map_value_count; j++) {
            map_value_strings[j] = qstring(map_array[j]);
        }
        map_vdest[i].len = map_value_count;
        map_vdest[i].data.ptr = map_value_strings;
    }
    libqt_string _str = KMacroExpander_ExpandMacrosShellQuote3(qstring(str), map_ret, (QChar*)c);
    for (size_t i = 0; i < map_ret.len; ++i) {
        free(((libqt_list*)map_ret.values)[i].data.ptr);
    }
    free(map_ret.keys);
    free(map_ret.values);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_macroexpander_expand_macros_shell_quote4(const char* str, libqt_map /* of const char* to const char** */ map, void* c) {
    // Convert libqt_map to QHash<QString,QList<QString>>
    libqt_map map_ret;
    map_ret.len = map.len;
    map_ret.keys = (libqt_string*)malloc(map_ret.len * sizeof(libqt_string));
    if (map_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_macroexpander_expand_macros_shell_quote4\n");
        abort();
    }
    map_ret.values = (libqt_list*)malloc(map_ret.len * sizeof(libqt_list));
    if (map_ret.values == NULL) {
        free(map_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_macroexpander_expand_macros_shell_quote4\n");
        abort();
    }
    const char** map_karr = (const char**)map.keys;
    libqt_string* map_kdest = (libqt_string*)map_ret.keys;
    const char*** map_varr = (const char***)map.values;
    libqt_list* map_vdest = (libqt_list*)map_ret.values;
    for (size_t i = 0; i < map_ret.len; ++i) {
        map_kdest[i] = qstring(map_karr[i]);
        const char** map_array = map_varr[i];
        size_t map_value_count = libqt_strv_length((const char**)map_array);
        libqt_string* map_value_strings = (libqt_string*)malloc(map_value_count * sizeof(libqt_string));
        if (map_value_strings == NULL) {
            for (size_t j = 0; j < i; j++) {
                free(((libqt_list*)map_ret.values)[j].data.ptr);
            }
            free(map_ret.keys);
            free(map_ret.values);
            fprintf(stderr, "Failed to allocate memory for map string key in k_macroexpander_expand_macros_shell_quote4\n");
            abort();
        }
        for (size_t j = 0; j < map_value_count; j++) {
            map_value_strings[j] = qstring(map_array[j]);
        }
        map_vdest[i].len = map_value_count;
        map_vdest[i].data.ptr = map_value_strings;
    }
    libqt_string _str = KMacroExpander_ExpandMacrosShellQuote4(qstring(str), map_ret, (QChar*)c);
    for (size_t i = 0; i < map_ret.len; ++i) {
        free(((libqt_list*)map_ret.values)[i].data.ptr);
    }
    free(map_ret.keys);
    free(map_ret.values);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}
