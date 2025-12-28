#include "libspeller.hpp"
#include "libspeller.h"

Sonnet__Speller* k_sonnet__speller_new() {
    return Sonnet__Speller_new();
}

Sonnet__Speller* k_sonnet__speller_new2(void* speller) {
    return Sonnet__Speller_new2((Sonnet__Speller*)speller);
}

Sonnet__Speller* k_sonnet__speller_new3(const char* lang) {
    return Sonnet__Speller_new3(qstring(lang));
}

void k_sonnet__speller_operator_assign(void* self, void* speller) {
    Sonnet__Speller_OperatorAssign((Sonnet__Speller*)self, (Sonnet__Speller*)speller);
}

bool k_sonnet__speller_is_valid(void* self) {
    return Sonnet__Speller_IsValid((Sonnet__Speller*)self);
}

void k_sonnet__speller_set_language(void* self, const char* lang) {
    Sonnet__Speller_SetLanguage((Sonnet__Speller*)self, qstring(lang));
}

const char* k_sonnet__speller_language(void* self) {
    libqt_string _str = Sonnet__Speller_Language((Sonnet__Speller*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_sonnet__speller_is_correct(void* self, const char* word) {
    return Sonnet__Speller_IsCorrect((Sonnet__Speller*)self, qstring(word));
}

bool k_sonnet__speller_is_misspelled(void* self, const char* word) {
    return Sonnet__Speller_IsMisspelled((Sonnet__Speller*)self, qstring(word));
}

const char** k_sonnet__speller_suggest(void* self, const char* word) {
    libqt_list _arr = Sonnet__Speller_Suggest((Sonnet__Speller*)self, qstring(word));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_sonnet__speller_suggest");
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

bool k_sonnet__speller_check_and_suggest(void* self, const char* word, const char* suggestions[static 1]) {
    size_t suggestions_len = libqt_strv_length(suggestions);
    libqt_string* suggestions_qstr = (libqt_string*)malloc(suggestions_len * sizeof(libqt_string));
    if (suggestions_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_sonnet__speller_check_and_suggest");
        abort();
    }
    for (size_t i = 0; i < suggestions_len; ++i) {
        suggestions_qstr[i] = qstring(suggestions[i]);
    }
    libqt_list suggestions_list = qlist(suggestions_qstr, suggestions_len);
    bool _out = Sonnet__Speller_CheckAndSuggest((Sonnet__Speller*)self, qstring(word), suggestions_list);
    free(suggestions_qstr);
    return _out;
}

bool k_sonnet__speller_store_replacement(void* self, const char* bad, const char* good) {
    return Sonnet__Speller_StoreReplacement((Sonnet__Speller*)self, qstring(bad), qstring(good));
}

bool k_sonnet__speller_add_to_personal(void* self, const char* word) {
    return Sonnet__Speller_AddToPersonal((Sonnet__Speller*)self, qstring(word));
}

bool k_sonnet__speller_add_to_session(void* self, const char* word) {
    return Sonnet__Speller_AddToSession((Sonnet__Speller*)self, qstring(word));
}

void k_sonnet__speller_save(void* self) {
    Sonnet__Speller_Save((Sonnet__Speller*)self);
}

void k_sonnet__speller_restore(void* self) {
    Sonnet__Speller_Restore((Sonnet__Speller*)self);
}

const char** k_sonnet__speller_available_backends(void* self) {
    libqt_list _arr = Sonnet__Speller_AvailableBackends((Sonnet__Speller*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_sonnet__speller_available_backends");
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

const char** k_sonnet__speller_available_languages(void* self) {
    libqt_list _arr = Sonnet__Speller_AvailableLanguages((Sonnet__Speller*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_sonnet__speller_available_languages");
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

const char** k_sonnet__speller_available_language_names(void* self) {
    libqt_list _arr = Sonnet__Speller_AvailableLanguageNames((Sonnet__Speller*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_sonnet__speller_available_language_names");
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

libqt_map /* of const char* to const char* */ k_sonnet__speller_available_dictionaries(void* self) {
    // Convert QMap<QString,QString> to libqt_map
    libqt_map _out = Sonnet__Speller_AvailableDictionaries((Sonnet__Speller*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    const char** _ret_keys = (const char**)malloc(_ret.len * sizeof(const char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Memory allocation failed in k_sonnet__speller_available_dictionaries");
        abort();
    }
    libqt_string* _out_values = (libqt_string*)_out.values;
    const char** _ret_values = (const char**)malloc(_ret.len * sizeof(const char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Memory allocation failed in k_sonnet__speller_available_dictionaries");
        free(_out_keys);
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = _out_keys[i].data;
        _ret_values[i] = _out_values[i].data;
    }
    _ret.keys = (void*)_ret_keys;
    _ret.values = (void*)_ret_values;
    free(_out_keys);
    free(_out_values);
    return _ret;
}

libqt_map /* of const char* to const char* */ k_sonnet__speller_preferred_dictionaries(void* self) {
    // Convert QMap<QString,QString> to libqt_map
    libqt_map _out = Sonnet__Speller_PreferredDictionaries((Sonnet__Speller*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    const char** _ret_keys = (const char**)malloc(_ret.len * sizeof(const char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Memory allocation failed in k_sonnet__speller_preferred_dictionaries");
        abort();
    }
    libqt_string* _out_values = (libqt_string*)_out.values;
    const char** _ret_values = (const char**)malloc(_ret.len * sizeof(const char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Memory allocation failed in k_sonnet__speller_preferred_dictionaries");
        free(_out_keys);
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = _out_keys[i].data;
        _ret_values[i] = _out_values[i].data;
    }
    _ret.keys = (void*)_ret_keys;
    _ret.values = (void*)_ret_values;
    free(_out_keys);
    free(_out_values);
    return _ret;
}

void k_sonnet__speller_set_default_language(void* self, const char* lang) {
    Sonnet__Speller_SetDefaultLanguage((Sonnet__Speller*)self, qstring(lang));
}

const char* k_sonnet__speller_default_language(void* self) {
    libqt_string _str = Sonnet__Speller_DefaultLanguage((Sonnet__Speller*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__speller_set_default_client(void* self, const char* client) {
    Sonnet__Speller_SetDefaultClient((Sonnet__Speller*)self, qstring(client));
}

const char* k_sonnet__speller_default_client(void* self) {
    libqt_string _str = Sonnet__Speller_DefaultClient((Sonnet__Speller*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__speller_set_attribute(void* self, int32_t attr) {
    Sonnet__Speller_SetAttribute((Sonnet__Speller*)self, attr);
}

bool k_sonnet__speller_test_attribute(void* self, int32_t attr) {
    return Sonnet__Speller_TestAttribute((Sonnet__Speller*)self, attr);
}

void k_sonnet__speller_set_attribute2(void* self, int32_t attr, bool b) {
    Sonnet__Speller_SetAttribute2((Sonnet__Speller*)self, attr, b);
}

void k_sonnet__speller_delete(void* self) {
    Sonnet__Speller_Delete((Sonnet__Speller*)(self));
}
