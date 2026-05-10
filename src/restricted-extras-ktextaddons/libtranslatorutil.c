#include "../libqcombobox.hpp"
#include "libtranslatorutil.hpp"
#include "libtranslatorutil.h"

TextTranslator__TranslatorUtil* k_texttranslator__translatorutil_new(void* other) {
    return TextTranslator__TranslatorUtil_new((TextTranslator__TranslatorUtil*)other);
}

TextTranslator__TranslatorUtil* k_texttranslator__translatorutil_new2(void* other) {
    return TextTranslator__TranslatorUtil_new2((TextTranslator__TranslatorUtil*)other);
}

TextTranslator__TranslatorUtil* k_texttranslator__translatorutil_new3() {
    return TextTranslator__TranslatorUtil_new3();
}

void k_texttranslator__translatorutil_copy_assign(void* self, void* other) {
    TextTranslator__TranslatorUtil_CopyAssign((TextTranslator__TranslatorUtil*)self, (TextTranslator__TranslatorUtil*)other);
}

void k_texttranslator__translatorutil_move_assign(void* self, void* other) {
    TextTranslator__TranslatorUtil_MoveAssign((TextTranslator__TranslatorUtil*)self, (TextTranslator__TranslatorUtil*)other);
}

void k_texttranslator__translatorutil_add_item_to_from_combo_box(void* self, void* combo, const char* languageCode, const char* translatedStr) {
    TextTranslator__TranslatorUtil_AddItemToFromComboBox((TextTranslator__TranslatorUtil*)self, (QComboBox*)combo, qstring(languageCode), qstring(translatedStr));
}

libqt_map /* of enum TextTranslator__TranslatorUtil__Language to const char* */ k_texttranslator__translatorutil_translated_languages() {
    // Convert QMap<TextTranslator::TranslatorUtil::Language,QString> to libqt_map
    libqt_map _out = TextTranslator__TranslatorUtil_TranslatedLanguages();
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_texttranslator__translatorutil_translated_languages\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_texttranslator__translatorutil_translated_languages\n");
            abort();
        }
        memcpy(_ret_values[i], _out_values[i].data, _out_values[i].len);
        _ret_values[i][_out_values[i].len] = '\0';
    }
    _ret.keys = _out.keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_values[i].data);
    }
    free(_out.values);
    return _ret;
}

const char* k_texttranslator__translatorutil_load_engine() {
    libqt_string _str = TextTranslator__TranslatorUtil_LoadEngine();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorutil_save_engine_settings(const char* engineName) {
    TextTranslator__TranslatorUtil_SaveEngineSettings(qstring(engineName));
}

const char* k_texttranslator__translatorutil_group_translate_name() {
    libqt_string _str = TextTranslator__TranslatorUtil_GroupTranslateName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texttranslator__translatorutil_engine_translate_name() {
    libqt_string _str = TextTranslator__TranslatorUtil_EngineTranslateName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texttranslator__translatorutil_default_engine_name() {
    libqt_string _str = TextTranslator__TranslatorUtil_DefaultEngineName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texttranslator__translatorutil_translated_language(int32_t lang) {
    libqt_string _str = TextTranslator__TranslatorUtil_TranslatedLanguage(lang);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texttranslator__translatorutil_language_code(int32_t lang) {
    libqt_string _str = TextTranslator__TranslatorUtil_LanguageCode(lang);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texttranslator__translatorutil_search_i18n_from_language(const char* langCode) {
    libqt_string _str = TextTranslator__TranslatorUtil_SearchI18nFromLanguage(qstring(langCode));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_texttranslator__translatorutil_string_to_language(const char* str) {
    return TextTranslator__TranslatorUtil_StringToLanguage(qstring(str));
}

void k_texttranslator__translatorutil_delete(void* self) {
    TextTranslator__TranslatorUtil_Delete((TextTranslator__TranslatorUtil*)(self));
}

TextTranslator__TranslatorUtil__TranslatorSettings* k_texttranslator__translatorutil__translatorsettings_new(void* param1) {
    return TextTranslator__TranslatorUtil__TranslatorSettings_new((TextTranslator__TranslatorUtil__TranslatorSettings*)param1);
}

const char* k_texttranslator__translatorutil__translatorsettings_engine(void* self) {
    libqt_string engine_str = TextTranslator__TranslatorUtil__TranslatorSettings_Engine((TextTranslator__TranslatorUtil__TranslatorSettings*)self);
    char* engine_ret = qstring_to_char(engine_str);
    libqt_string_free(&engine_str);
    return engine_ret;
}

void k_texttranslator__translatorutil__translatorsettings_set_engine(void* self, const char* engine) {
    TextTranslator__TranslatorUtil__TranslatorSettings_SetEngine((TextTranslator__TranslatorUtil__TranslatorSettings*)self, qstring(engine));
}

const char* k_texttranslator__translatorutil__translatorsettings_from(void* self) {
    libqt_string from_str = TextTranslator__TranslatorUtil__TranslatorSettings_From((TextTranslator__TranslatorUtil__TranslatorSettings*)self);
    char* from_ret = qstring_to_char(from_str);
    libqt_string_free(&from_str);
    return from_ret;
}

void k_texttranslator__translatorutil__translatorsettings_set_from(void* self, const char* from) {
    TextTranslator__TranslatorUtil__TranslatorSettings_SetFrom((TextTranslator__TranslatorUtil__TranslatorSettings*)self, qstring(from));
}

const char* k_texttranslator__translatorutil__translatorsettings_to(void* self) {
    libqt_string to_str = TextTranslator__TranslatorUtil__TranslatorSettings_To((TextTranslator__TranslatorUtil__TranslatorSettings*)self);
    char* to_ret = qstring_to_char(to_str);
    libqt_string_free(&to_str);
    return to_ret;
}

void k_texttranslator__translatorutil__translatorsettings_set_to(void* self, const char* to) {
    TextTranslator__TranslatorUtil__TranslatorSettings_SetTo((TextTranslator__TranslatorUtil__TranslatorSettings*)self, qstring(to));
}

void k_texttranslator__translatorutil__translatorsettings_operator_assign(void* self, void* param1) {
    TextTranslator__TranslatorUtil__TranslatorSettings_OperatorAssign((TextTranslator__TranslatorUtil__TranslatorSettings*)self, (TextTranslator__TranslatorUtil__TranslatorSettings*)param1);
}

void k_texttranslator__translatorutil__translatorsettings_delete(void* self) {
    TextTranslator__TranslatorUtil__TranslatorSettings_Delete((TextTranslator__TranslatorUtil__TranslatorSettings*)(self));
}
