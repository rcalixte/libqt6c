#include <string.h>
#include "libqwebenginesettings.hpp"
#include "libqwebenginesettings.h"

void q_webenginesettings_set_font_family(void* self, int64_t which, const char* family) {
    QWebEngineSettings_SetFontFamily((QWebEngineSettings*)self, which, qstring(family));
}

const char* q_webenginesettings_font_family(void* self, int64_t which) {
    libqt_string _str = QWebEngineSettings_FontFamily((QWebEngineSettings*)self, which);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webenginesettings_reset_font_family(void* self, int64_t which) {
    QWebEngineSettings_ResetFontFamily((QWebEngineSettings*)self, which);
}

void q_webenginesettings_set_font_size(void* self, int64_t typeVal, int size) {
    QWebEngineSettings_SetFontSize((QWebEngineSettings*)self, typeVal, size);
}

int32_t q_webenginesettings_font_size(void* self, int64_t typeVal) {
    return QWebEngineSettings_FontSize((QWebEngineSettings*)self, typeVal);
}

void q_webenginesettings_reset_font_size(void* self, int64_t typeVal) {
    QWebEngineSettings_ResetFontSize((QWebEngineSettings*)self, typeVal);
}

void q_webenginesettings_set_attribute(void* self, int64_t attr, bool on) {
    QWebEngineSettings_SetAttribute((QWebEngineSettings*)self, attr, on);
}

bool q_webenginesettings_test_attribute(void* self, int64_t attr) {
    return QWebEngineSettings_TestAttribute((QWebEngineSettings*)self, attr);
}

void q_webenginesettings_reset_attribute(void* self, int64_t attr) {
    QWebEngineSettings_ResetAttribute((QWebEngineSettings*)self, attr);
}

void q_webenginesettings_set_default_text_encoding(void* self, const char* encoding) {
    QWebEngineSettings_SetDefaultTextEncoding((QWebEngineSettings*)self, qstring(encoding));
}

const char* q_webenginesettings_default_text_encoding(void* self) {
    libqt_string _str = QWebEngineSettings_DefaultTextEncoding((QWebEngineSettings*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_webenginesettings_unknown_url_scheme_policy(void* self) {
    return QWebEngineSettings_UnknownUrlSchemePolicy((QWebEngineSettings*)self);
}

void q_webenginesettings_set_unknown_url_scheme_policy(void* self, int64_t policy) {
    QWebEngineSettings_SetUnknownUrlSchemePolicy((QWebEngineSettings*)self, policy);
}

void q_webenginesettings_reset_unknown_url_scheme_policy(void* self) {
    QWebEngineSettings_ResetUnknownUrlSchemePolicy((QWebEngineSettings*)self);
}

void q_webenginesettings_delete(void* self) {
    QWebEngineSettings_Delete((QWebEngineSettings*)(self));
}
