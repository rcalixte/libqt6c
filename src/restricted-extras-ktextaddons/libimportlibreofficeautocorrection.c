#include "libimportabstractautocorrection.hpp"
#include "libimportlibreofficeautocorrection.hpp"
#include "libimportlibreofficeautocorrection.h"

TextAutoCorrectionCore__ImportLibreOfficeAutocorrection* k_textautocorrectioncore__importlibreofficeautocorrection_new() {
    return TextAutoCorrectionCore__ImportLibreOfficeAutocorrection_new();
}

TextAutoCorrectionCore__ImportLibreOfficeAutocorrection* k_textautocorrectioncore__importlibreofficeautocorrection_new2(void* param1) {
    return TextAutoCorrectionCore__ImportLibreOfficeAutocorrection_new2((TextAutoCorrectionCore__ImportLibreOfficeAutocorrection*)param1);
}

bool k_textautocorrectioncore__importlibreofficeautocorrection_import(void* self, const char* fileName, const char* errorMessage, int32_t loadAttribute) {
    return TextAutoCorrectionCore__ImportLibreOfficeAutocorrection_Import((TextAutoCorrectionCore__ImportLibreOfficeAutocorrection*)self, qstring(fileName), qstring(errorMessage), loadAttribute);
}

void k_textautocorrectioncore__importlibreofficeautocorrection_on_import(void* self, bool (*callback)(void*, const char*, const char*, int32_t)) {
    TextAutoCorrectionCore__ImportLibreOfficeAutocorrection_OnImport((TextAutoCorrectionCore__ImportLibreOfficeAutocorrection*)self, (intptr_t)callback);
}

bool k_textautocorrectioncore__importlibreofficeautocorrection_super_import(void* self, const char* fileName, const char* errorMessage, int32_t loadAttribute) {
    return TextAutoCorrectionCore__ImportLibreOfficeAutocorrection_SuperImport((TextAutoCorrectionCore__ImportLibreOfficeAutocorrection*)self, qstring(fileName), qstring(errorMessage), loadAttribute);
}

libqt_list /* set of const char* */ k_textautocorrectioncore__importlibreofficeautocorrection_upper_case_exceptions(void* self) {
    return TextAutoCorrectionCore__ImportAbstractAutocorrection_UpperCaseExceptions((TextAutoCorrectionCore__ImportAbstractAutocorrection*)self);
}

libqt_list /* set of const char* */ k_textautocorrectioncore__importlibreofficeautocorrection_two_upper_letter_exceptions(void* self) {
    return TextAutoCorrectionCore__ImportAbstractAutocorrection_TwoUpperLetterExceptions((TextAutoCorrectionCore__ImportAbstractAutocorrection*)self);
}

libqt_map /* of const char* to const char* */ k_textautocorrectioncore__importlibreofficeautocorrection_autocorrect_entries(void* self) {
    // Convert QHash<QString,QString> to libqt_map
    libqt_map _out = TextAutoCorrectionCore__ImportAbstractAutocorrection_AutocorrectEntries((TextAutoCorrectionCore__ImportAbstractAutocorrection*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    char** _ret_keys = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string keys in k_textautocorrectioncore__importlibreofficeautocorrection_autocorrect_entries\n");
        abort();
    }
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_textautocorrectioncore__importlibreofficeautocorrection_autocorrect_entries\n");
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
            fprintf(stderr, "Failed to allocate memory for map keys in k_textautocorrectioncore__importlibreofficeautocorrection_autocorrect_entries\n");
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
            fprintf(stderr, "Failed to allocate memory for map string values in k_textautocorrectioncore__importlibreofficeautocorrection_autocorrect_entries\n");
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

libqt_map /* of const char* to const char* */ k_textautocorrectioncore__importlibreofficeautocorrection_super_script_entries(void* self) {
    // Convert QHash<QString,QString> to libqt_map
    libqt_map _out = TextAutoCorrectionCore__ImportAbstractAutocorrection_SuperScriptEntries((TextAutoCorrectionCore__ImportAbstractAutocorrection*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    char** _ret_keys = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string keys in k_textautocorrectioncore__importlibreofficeautocorrection_super_script_entries\n");
        abort();
    }
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_textautocorrectioncore__importlibreofficeautocorrection_super_script_entries\n");
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
            fprintf(stderr, "Failed to allocate memory for map keys in k_textautocorrectioncore__importlibreofficeautocorrection_super_script_entries\n");
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
            fprintf(stderr, "Failed to allocate memory for map string values in k_textautocorrectioncore__importlibreofficeautocorrection_super_script_entries\n");
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

TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* k_textautocorrectioncore__importlibreofficeautocorrection_typographic_single_quotes(void* self) {
    return TextAutoCorrectionCore__ImportAbstractAutocorrection_TypographicSingleQuotes((TextAutoCorrectionCore__ImportAbstractAutocorrection*)self);
}

TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* k_textautocorrectioncore__importlibreofficeautocorrection_typographic_double_quotes(void* self) {
    return TextAutoCorrectionCore__ImportAbstractAutocorrection_TypographicDoubleQuotes((TextAutoCorrectionCore__ImportAbstractAutocorrection*)self);
}

int32_t k_textautocorrectioncore__importlibreofficeautocorrection_max_find_string_lenght(void* self) {
    return TextAutoCorrectionCore__ImportAbstractAutocorrection_MaxFindStringLenght((TextAutoCorrectionCore__ImportAbstractAutocorrection*)self);
}

int32_t k_textautocorrectioncore__importlibreofficeautocorrection_min_find_string_lenght(void* self) {
    return TextAutoCorrectionCore__ImportAbstractAutocorrection_MinFindStringLenght((TextAutoCorrectionCore__ImportAbstractAutocorrection*)self);
}

void k_textautocorrectioncore__importlibreofficeautocorrection_delete(void* self) {
    TextAutoCorrectionCore__ImportLibreOfficeAutocorrection_Delete((TextAutoCorrectionCore__ImportLibreOfficeAutocorrection*)(self));
}
