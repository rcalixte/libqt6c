#include "libguesslanguage.hpp"
#include "libguesslanguage.h"

Sonnet__GuessLanguage* k_sonnet__guesslanguage_new() {
    return Sonnet__GuessLanguage_new();
}

void k_sonnet__guesslanguage_set_limits(void* self, int maxItems, double minConfidence) {
    Sonnet__GuessLanguage_SetLimits((Sonnet__GuessLanguage*)self, maxItems, minConfidence);
}

const char* k_sonnet__guesslanguage_identify(void* self, const char* text) {
    libqt_string _str = Sonnet__GuessLanguage_Identify((Sonnet__GuessLanguage*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_sonnet__guesslanguage_identify2(void* self, const char* text, const char* suggestions[static 1]) {
    size_t suggestions_len = libqt_strv_length(suggestions);
    libqt_string* suggestions_qstr = (libqt_string*)malloc(suggestions_len * sizeof(libqt_string));
    if (suggestions_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_sonnet__guesslanguage_identify2\n");
        abort();
    }
    for (size_t i = 0; i < suggestions_len; ++i) {
        suggestions_qstr[i] = qstring(suggestions[i]);
    }
    libqt_list suggestions_list = qlist(suggestions_qstr, suggestions_len);
    libqt_string _str = Sonnet__GuessLanguage_Identify2((Sonnet__GuessLanguage*)self, qstring(text), suggestions_list);
    free(suggestions_qstr);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__guesslanguage_delete(void* self) {
    Sonnet__GuessLanguage_Delete((Sonnet__GuessLanguage*)(self));
}
