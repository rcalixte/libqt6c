#include "../libqchar.hpp"
#include "libautocorrectionutils.hpp"
#include "libautocorrectionsettings.hpp"
#include "libautocorrectionsettings.h"

TextAutoCorrectionCore__AutoCorrectionSettings* k_textautocorrectioncore__autocorrectionsettings_new() {
    return TextAutoCorrectionCore__AutoCorrectionSettings_new();
}

bool k_textautocorrectioncore__autocorrectionsettings_is_enabled_auto_correction(void* self) {
    return TextAutoCorrectionCore__AutoCorrectionSettings_IsEnabledAutoCorrection((TextAutoCorrectionCore__AutoCorrectionSettings*)self);
}

bool k_textautocorrectioncore__autocorrectionsettings_is_uppercase_first_char_of_sentence(void* self) {
    return TextAutoCorrectionCore__AutoCorrectionSettings_IsUppercaseFirstCharOfSentence((TextAutoCorrectionCore__AutoCorrectionSettings*)self);
}

bool k_textautocorrectioncore__autocorrectionsettings_is_fix_two_uppercase_chars(void* self) {
    return TextAutoCorrectionCore__AutoCorrectionSettings_IsFixTwoUppercaseChars((TextAutoCorrectionCore__AutoCorrectionSettings*)self);
}

bool k_textautocorrectioncore__autocorrectionsettings_is_single_spaces(void* self) {
    return TextAutoCorrectionCore__AutoCorrectionSettings_IsSingleSpaces((TextAutoCorrectionCore__AutoCorrectionSettings*)self);
}

bool k_textautocorrectioncore__autocorrectionsettings_is_auto_fractions(void* self) {
    return TextAutoCorrectionCore__AutoCorrectionSettings_IsAutoFractions((TextAutoCorrectionCore__AutoCorrectionSettings*)self);
}

bool k_textautocorrectioncore__autocorrectionsettings_is_capitalize_week_days(void* self) {
    return TextAutoCorrectionCore__AutoCorrectionSettings_IsCapitalizeWeekDays((TextAutoCorrectionCore__AutoCorrectionSettings*)self);
}

bool k_textautocorrectioncore__autocorrectionsettings_is_replace_double_quotes(void* self) {
    return TextAutoCorrectionCore__AutoCorrectionSettings_IsReplaceDoubleQuotes((TextAutoCorrectionCore__AutoCorrectionSettings*)self);
}

bool k_textautocorrectioncore__autocorrectionsettings_is_replace_single_quotes(void* self) {
    return TextAutoCorrectionCore__AutoCorrectionSettings_IsReplaceSingleQuotes((TextAutoCorrectionCore__AutoCorrectionSettings*)self);
}

bool k_textautocorrectioncore__autocorrectionsettings_is_advanced_autocorrect(void* self) {
    return TextAutoCorrectionCore__AutoCorrectionSettings_IsAdvancedAutocorrect((TextAutoCorrectionCore__AutoCorrectionSettings*)self);
}

bool k_textautocorrectioncore__autocorrectionsettings_is_auto_format_url(void* self) {
    return TextAutoCorrectionCore__AutoCorrectionSettings_IsAutoFormatUrl((TextAutoCorrectionCore__AutoCorrectionSettings*)self);
}

bool k_textautocorrectioncore__autocorrectionsettings_is_auto_bold_underline(void* self) {
    return TextAutoCorrectionCore__AutoCorrectionSettings_IsAutoBoldUnderline((TextAutoCorrectionCore__AutoCorrectionSettings*)self);
}

bool k_textautocorrectioncore__autocorrectionsettings_is_super_script(void* self) {
    return TextAutoCorrectionCore__AutoCorrectionSettings_IsSuperScript((TextAutoCorrectionCore__AutoCorrectionSettings*)self);
}

bool k_textautocorrectioncore__autocorrectionsettings_is_add_non_breaking_space(void* self) {
    return TextAutoCorrectionCore__AutoCorrectionSettings_IsAddNonBreakingSpace((TextAutoCorrectionCore__AutoCorrectionSettings*)self);
}

bool k_textautocorrectioncore__autocorrectionsettings_is_replace_double_quotes_by_french_quotes(void* self) {
    return TextAutoCorrectionCore__AutoCorrectionSettings_IsReplaceDoubleQuotesByFrenchQuotes((TextAutoCorrectionCore__AutoCorrectionSettings*)self);
}

TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* k_textautocorrectioncore__autocorrectionsettings_typographic_single_quotes(void* self) {
    return TextAutoCorrectionCore__AutoCorrectionSettings_TypographicSingleQuotes((TextAutoCorrectionCore__AutoCorrectionSettings*)self);
}

TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* k_textautocorrectioncore__autocorrectionsettings_typographic_double_quotes(void* self) {
    return TextAutoCorrectionCore__AutoCorrectionSettings_TypographicDoubleQuotes((TextAutoCorrectionCore__AutoCorrectionSettings*)self);
}

void k_textautocorrectioncore__autocorrectionsettings_set_typographic_single_quotes(void* self, void* singleQuote) {
    TextAutoCorrectionCore__AutoCorrectionSettings_SetTypographicSingleQuotes((TextAutoCorrectionCore__AutoCorrectionSettings*)self, (TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes*)singleQuote);
}

void k_textautocorrectioncore__autocorrectionsettings_set_typographic_double_quotes(void* self, void* doubleQuote) {
    TextAutoCorrectionCore__AutoCorrectionSettings_SetTypographicDoubleQuotes((TextAutoCorrectionCore__AutoCorrectionSettings*)self, (TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes*)doubleQuote);
}

void k_textautocorrectioncore__autocorrectionsettings_set_auto_format_url(void* self, bool b) {
    TextAutoCorrectionCore__AutoCorrectionSettings_SetAutoFormatUrl((TextAutoCorrectionCore__AutoCorrectionSettings*)self, b);
}

void k_textautocorrectioncore__autocorrectionsettings_set_auto_bold_underline(void* self, bool b) {
    TextAutoCorrectionCore__AutoCorrectionSettings_SetAutoBoldUnderline((TextAutoCorrectionCore__AutoCorrectionSettings*)self, b);
}

void k_textautocorrectioncore__autocorrectionsettings_set_super_script(void* self, bool b) {
    TextAutoCorrectionCore__AutoCorrectionSettings_SetSuperScript((TextAutoCorrectionCore__AutoCorrectionSettings*)self, b);
}

void k_textautocorrectioncore__autocorrectionsettings_set_add_non_breaking_space(void* self, bool b) {
    TextAutoCorrectionCore__AutoCorrectionSettings_SetAddNonBreakingSpace((TextAutoCorrectionCore__AutoCorrectionSettings*)self, b);
}

void k_textautocorrectioncore__autocorrectionsettings_set_capitalize_week_days(void* self, bool b) {
    TextAutoCorrectionCore__AutoCorrectionSettings_SetCapitalizeWeekDays((TextAutoCorrectionCore__AutoCorrectionSettings*)self, b);
}

void k_textautocorrectioncore__autocorrectionsettings_set_replace_double_quotes(void* self, bool b) {
    TextAutoCorrectionCore__AutoCorrectionSettings_SetReplaceDoubleQuotes((TextAutoCorrectionCore__AutoCorrectionSettings*)self, b);
}

void k_textautocorrectioncore__autocorrectionsettings_set_replace_single_quotes(void* self, bool b) {
    TextAutoCorrectionCore__AutoCorrectionSettings_SetReplaceSingleQuotes((TextAutoCorrectionCore__AutoCorrectionSettings*)self, b);
}

void k_textautocorrectioncore__autocorrectionsettings_set_advanced_autocorrect(void* self, bool b) {
    TextAutoCorrectionCore__AutoCorrectionSettings_SetAdvancedAutocorrect((TextAutoCorrectionCore__AutoCorrectionSettings*)self, b);
}

void k_textautocorrectioncore__autocorrectionsettings_set_enabled_auto_correction(void* self, bool b) {
    TextAutoCorrectionCore__AutoCorrectionSettings_SetEnabledAutoCorrection((TextAutoCorrectionCore__AutoCorrectionSettings*)self, b);
}

void k_textautocorrectioncore__autocorrectionsettings_set_replace_double_quotes_by_french_quotes(void* self, bool b) {
    TextAutoCorrectionCore__AutoCorrectionSettings_SetReplaceDoubleQuotesByFrenchQuotes((TextAutoCorrectionCore__AutoCorrectionSettings*)self, b);
}

void k_textautocorrectioncore__autocorrectionsettings_read_config(void* self) {
    TextAutoCorrectionCore__AutoCorrectionSettings_ReadConfig((TextAutoCorrectionCore__AutoCorrectionSettings*)self);
}

void k_textautocorrectioncore__autocorrectionsettings_write_config(void* self) {
    TextAutoCorrectionCore__AutoCorrectionSettings_WriteConfig((TextAutoCorrectionCore__AutoCorrectionSettings*)self);
}

void k_textautocorrectioncore__autocorrectionsettings_set_auto_fractions(void* self, bool newAutoFractions) {
    TextAutoCorrectionCore__AutoCorrectionSettings_SetAutoFractions((TextAutoCorrectionCore__AutoCorrectionSettings*)self, newAutoFractions);
}

void k_textautocorrectioncore__autocorrectionsettings_set_single_spaces(void* self, bool newSingleSpaces) {
    TextAutoCorrectionCore__AutoCorrectionSettings_SetSingleSpaces((TextAutoCorrectionCore__AutoCorrectionSettings*)self, newSingleSpaces);
}

void k_textautocorrectioncore__autocorrectionsettings_set_fix_two_uppercase_chars(void* self, bool newFixTwoUppercaseChars) {
    TextAutoCorrectionCore__AutoCorrectionSettings_SetFixTwoUppercaseChars((TextAutoCorrectionCore__AutoCorrectionSettings*)self, newFixTwoUppercaseChars);
}

void k_textautocorrectioncore__autocorrectionsettings_set_uppercase_first_char_of_sentence(void* self, bool newUppercaseFirstCharOfSentence) {
    TextAutoCorrectionCore__AutoCorrectionSettings_SetUppercaseFirstCharOfSentence((TextAutoCorrectionCore__AutoCorrectionSettings*)self, newUppercaseFirstCharOfSentence);
}

void k_textautocorrectioncore__autocorrectionsettings_set_upper_case_exceptions(void* self, libqt_list /* set of const char* */ exceptions) {
    TextAutoCorrectionCore__AutoCorrectionSettings_SetUpperCaseExceptions((TextAutoCorrectionCore__AutoCorrectionSettings*)self, exceptions);
}

void k_textautocorrectioncore__autocorrectionsettings_set_two_upper_letter_exceptions(void* self, libqt_list /* set of const char* */ exceptions) {
    TextAutoCorrectionCore__AutoCorrectionSettings_SetTwoUpperLetterExceptions((TextAutoCorrectionCore__AutoCorrectionSettings*)self, exceptions);
}

libqt_list /* set of const char* */ k_textautocorrectioncore__autocorrectionsettings_upper_case_exceptions(void* self) {
    return TextAutoCorrectionCore__AutoCorrectionSettings_UpperCaseExceptions((TextAutoCorrectionCore__AutoCorrectionSettings*)self);
}

libqt_list /* set of const char* */ k_textautocorrectioncore__autocorrectionsettings_two_upper_letter_exceptions(void* self) {
    return TextAutoCorrectionCore__AutoCorrectionSettings_TwoUpperLetterExceptions((TextAutoCorrectionCore__AutoCorrectionSettings*)self);
}

void k_textautocorrectioncore__autocorrectionsettings_set_language(void* self, const char* lang) {
    TextAutoCorrectionCore__AutoCorrectionSettings_SetLanguage((TextAutoCorrectionCore__AutoCorrectionSettings*)self, qstring(lang));
}

const char* k_textautocorrectioncore__autocorrectionsettings_language(void* self) {
    libqt_string _str = TextAutoCorrectionCore__AutoCorrectionSettings_Language((TextAutoCorrectionCore__AutoCorrectionSettings*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textautocorrectioncore__autocorrectionsettings_is_french_language(void* self) {
    return TextAutoCorrectionCore__AutoCorrectionSettings_IsFrenchLanguage((TextAutoCorrectionCore__AutoCorrectionSettings*)self);
}

void k_textautocorrectioncore__autocorrectionsettings_set_autocorrect_entries(void* self, libqt_map /* of const char* to const char* */ entries) {
    // Convert libqt_map to QHash<QString,QString>
    libqt_map entries_ret;
    entries_ret.len = entries.len;
    entries_ret.keys = (libqt_string*)malloc(entries_ret.len * sizeof(libqt_string));
    if (entries_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_textautocorrectioncore__autocorrectionsettings_set_autocorrect_entries\n");
        abort();
    }
    entries_ret.values = (libqt_string*)malloc(entries_ret.len * sizeof(libqt_string));
    if (entries_ret.values == NULL) {
        free(entries_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_textautocorrectioncore__autocorrectionsettings_set_autocorrect_entries\n");
        abort();
    }
    const char** entries_karr = (const char**)entries.keys;
    libqt_string* entries_kdest = (libqt_string*)entries_ret.keys;
    const char** entries_varr = (const char**)entries.values;
    libqt_string* entries_vdest = (libqt_string*)entries_ret.values;
    for (size_t i = 0; i < entries_ret.len; ++i) {
        entries_kdest[i] = qstring(entries_karr[i]);
        entries_vdest[i] = qstring(entries_varr[i]);
    }
    TextAutoCorrectionCore__AutoCorrectionSettings_SetAutocorrectEntries((TextAutoCorrectionCore__AutoCorrectionSettings*)self, entries_ret);
    free(entries_ret.keys);
    free(entries_ret.values);
}

libqt_map /* of const char* to const char* */ k_textautocorrectioncore__autocorrectionsettings_autocorrect_entries(void* self) {
    // Convert QHash<QString,QString> to libqt_map
    libqt_map _out = TextAutoCorrectionCore__AutoCorrectionSettings_AutocorrectEntries((TextAutoCorrectionCore__AutoCorrectionSettings*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    char** _ret_keys = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string keys in k_textautocorrectioncore__autocorrectionsettings_autocorrect_entries\n");
        abort();
    }
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_textautocorrectioncore__autocorrectionsettings_autocorrect_entries\n");
        free(_out.keys);
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = (char*)malloc(_out_keys[i].len + 1);
        if (_ret_keys[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
            }
            free(_ret_keys);
            fprintf(stderr, "Failed to allocate memory for map keys in k_textautocorrectioncore__autocorrectionsettings_autocorrect_entries\n");
            abort();
        }
        memcpy(_ret_keys[i], _out_keys[i].data, _out_keys[i].len);
        _ret_keys[i][_out_keys[i].len] = '\0';
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
                libqt_free(_ret_values[j]);
            }
            free(_ret_keys);
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_textautocorrectioncore__autocorrectionsettings_autocorrect_entries\n");
            abort();
        }
        memcpy(_ret_values[i], _out_values[i].data, _out_values[i].len);
        _ret_values[i][_out_values[i].len] = '\0';
    }
    _ret.keys = (void*)_ret_keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_keys[i].data);
        libqt_free(_out_values[i].data);
    }
    free(_out.keys);
    free(_out.values);
    return _ret;
}

bool k_textautocorrectioncore__autocorrectionsettings_add_auto_correct(void* self, const char* currentWord, const char* replaceWord) {
    return TextAutoCorrectionCore__AutoCorrectionSettings_AddAutoCorrect((TextAutoCorrectionCore__AutoCorrectionSettings*)self, qstring(currentWord), qstring(replaceWord));
}

QChar* k_textautocorrectioncore__autocorrectionsettings_non_breaking_space(void* self) {
    return TextAutoCorrectionCore__AutoCorrectionSettings_NonBreakingSpace((TextAutoCorrectionCore__AutoCorrectionSettings*)self);
}

void k_textautocorrectioncore__autocorrectionsettings_set_non_breaking_space(void* self, void* newNonBreakingSpace) {
    TextAutoCorrectionCore__AutoCorrectionSettings_SetNonBreakingSpace((TextAutoCorrectionCore__AutoCorrectionSettings*)self, (QChar*)newNonBreakingSpace);
}

libqt_map /* of const char* to const char* */ k_textautocorrectioncore__autocorrectionsettings_super_script_entries(void* self) {
    // Convert QHash<QString,QString> to libqt_map
    libqt_map _out = TextAutoCorrectionCore__AutoCorrectionSettings_SuperScriptEntries((TextAutoCorrectionCore__AutoCorrectionSettings*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    char** _ret_keys = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string keys in k_textautocorrectioncore__autocorrectionsettings_super_script_entries\n");
        abort();
    }
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_textautocorrectioncore__autocorrectionsettings_super_script_entries\n");
        free(_out.keys);
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = (char*)malloc(_out_keys[i].len + 1);
        if (_ret_keys[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
            }
            free(_ret_keys);
            fprintf(stderr, "Failed to allocate memory for map keys in k_textautocorrectioncore__autocorrectionsettings_super_script_entries\n");
            abort();
        }
        memcpy(_ret_keys[i], _out_keys[i].data, _out_keys[i].len);
        _ret_keys[i][_out_keys[i].len] = '\0';
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
                libqt_free(_ret_values[j]);
            }
            free(_ret_keys);
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_textautocorrectioncore__autocorrectionsettings_super_script_entries\n");
            abort();
        }
        memcpy(_ret_values[i], _out_values[i].data, _out_values[i].len);
        _ret_values[i][_out_values[i].len] = '\0';
    }
    _ret.keys = (void*)_ret_keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_keys[i].data);
        libqt_free(_out_values[i].data);
    }
    free(_out.keys);
    free(_out.values);
    return _ret;
}

void k_textautocorrectioncore__autocorrectionsettings_set_super_script_entries(void* self, libqt_map /* of const char* to const char* */ newSuperScriptEntries) {
    // Convert libqt_map to QHash<QString,QString>
    libqt_map newSuperScriptEntries_ret;
    newSuperScriptEntries_ret.len = newSuperScriptEntries.len;
    newSuperScriptEntries_ret.keys = (libqt_string*)malloc(newSuperScriptEntries_ret.len * sizeof(libqt_string));
    if (newSuperScriptEntries_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_textautocorrectioncore__autocorrectionsettings_set_super_script_entries\n");
        abort();
    }
    newSuperScriptEntries_ret.values = (libqt_string*)malloc(newSuperScriptEntries_ret.len * sizeof(libqt_string));
    if (newSuperScriptEntries_ret.values == NULL) {
        free(newSuperScriptEntries_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_textautocorrectioncore__autocorrectionsettings_set_super_script_entries\n");
        abort();
    }
    const char** newSuperScriptEntries_karr = (const char**)newSuperScriptEntries.keys;
    libqt_string* newSuperScriptEntries_kdest = (libqt_string*)newSuperScriptEntries_ret.keys;
    const char** newSuperScriptEntries_varr = (const char**)newSuperScriptEntries.values;
    libqt_string* newSuperScriptEntries_vdest = (libqt_string*)newSuperScriptEntries_ret.values;
    for (size_t i = 0; i < newSuperScriptEntries_ret.len; ++i) {
        newSuperScriptEntries_kdest[i] = qstring(newSuperScriptEntries_karr[i]);
        newSuperScriptEntries_vdest[i] = qstring(newSuperScriptEntries_varr[i]);
    }
    TextAutoCorrectionCore__AutoCorrectionSettings_SetSuperScriptEntries((TextAutoCorrectionCore__AutoCorrectionSettings*)self, newSuperScriptEntries_ret);
    free(newSuperScriptEntries_ret.keys);
    free(newSuperScriptEntries_ret.values);
}

void k_textautocorrectioncore__autocorrectionsettings_write_auto_correction_file(void* self) {
    TextAutoCorrectionCore__AutoCorrectionSettings_WriteAutoCorrectionFile((TextAutoCorrectionCore__AutoCorrectionSettings*)self);
}

int32_t k_textautocorrectioncore__autocorrectionsettings_max_find_string_length(void* self) {
    return TextAutoCorrectionCore__AutoCorrectionSettings_MaxFindStringLength((TextAutoCorrectionCore__AutoCorrectionSettings*)self);
}

int32_t k_textautocorrectioncore__autocorrectionsettings_min_find_string_length(void* self) {
    return TextAutoCorrectionCore__AutoCorrectionSettings_MinFindStringLength((TextAutoCorrectionCore__AutoCorrectionSettings*)self);
}

void k_textautocorrectioncore__autocorrectionsettings_load_local_file_name(void* self, const char* localFileName, const char* fname) {
    TextAutoCorrectionCore__AutoCorrectionSettings_LoadLocalFileName((TextAutoCorrectionCore__AutoCorrectionSettings*)self, qstring(localFileName), qstring(fname));
}

void k_textautocorrectioncore__autocorrectionsettings_load_global_file_name(void* self, const char* fname) {
    TextAutoCorrectionCore__AutoCorrectionSettings_LoadGlobalFileName((TextAutoCorrectionCore__AutoCorrectionSettings*)self, qstring(fname));
}

TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* k_textautocorrectioncore__autocorrectionsettings_double_french_quotes(void* self) {
    return TextAutoCorrectionCore__AutoCorrectionSettings_DoubleFrenchQuotes((TextAutoCorrectionCore__AutoCorrectionSettings*)self);
}

void k_textautocorrectioncore__autocorrectionsettings_set_double_french_quotes(void* self, void* newDoubleFrenchQuotes) {
    TextAutoCorrectionCore__AutoCorrectionSettings_SetDoubleFrenchQuotes((TextAutoCorrectionCore__AutoCorrectionSettings*)self, (TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes*)newDoubleFrenchQuotes);
}

const char* k_textautocorrectioncore__autocorrectionsettings_custom_writable_path(void* self) {
    libqt_string _str = TextAutoCorrectionCore__AutoCorrectionSettings_CustomWritablePath((TextAutoCorrectionCore__AutoCorrectionSettings*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textautocorrectioncore__autocorrectionsettings_set_custom_writable_path(void* self, const char* path) {
    TextAutoCorrectionCore__AutoCorrectionSettings_SetCustomWritablePath((TextAutoCorrectionCore__AutoCorrectionSettings*)self, qstring(path));
}

const char* k_textautocorrectioncore__autocorrectionsettings_custom_system_path(void* self) {
    libqt_string _str = TextAutoCorrectionCore__AutoCorrectionSettings_CustomSystemPath((TextAutoCorrectionCore__AutoCorrectionSettings*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textautocorrectioncore__autocorrectionsettings_set_custom_system_path(void* self, const char* path) {
    TextAutoCorrectionCore__AutoCorrectionSettings_SetCustomSystemPath((TextAutoCorrectionCore__AutoCorrectionSettings*)self, qstring(path));
}

void k_textautocorrectioncore__autocorrectionsettings_set_language2(void* self, const char* lang, bool forceGlobal) {
    TextAutoCorrectionCore__AutoCorrectionSettings_SetLanguage2((TextAutoCorrectionCore__AutoCorrectionSettings*)self, qstring(lang), forceGlobal);
}

void k_textautocorrectioncore__autocorrectionsettings_write_auto_correction_file1(void* self, const char* filename) {
    TextAutoCorrectionCore__AutoCorrectionSettings_WriteAutoCorrectionFile1((TextAutoCorrectionCore__AutoCorrectionSettings*)self, qstring(filename));
}

void k_textautocorrectioncore__autocorrectionsettings_delete(void* self) {
    TextAutoCorrectionCore__AutoCorrectionSettings_Delete((TextAutoCorrectionCore__AutoCorrectionSettings*)(self));
}
