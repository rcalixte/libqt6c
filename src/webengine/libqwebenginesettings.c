#include "libqwebenginesettings.hpp"
#include "libqwebenginesettings.h"

void q_webenginesettings_set_font_family(void* self, int32_t which, const char* family) {
    QWebEngineSettings_SetFontFamily((QWebEngineSettings*)self, which, qstring(family));
}

const char* q_webenginesettings_font_family(void* self, int32_t which) {
    libqt_string _str = QWebEngineSettings_FontFamily((QWebEngineSettings*)self, which);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webenginesettings_reset_font_family(void* self, int32_t which) {
    QWebEngineSettings_ResetFontFamily((QWebEngineSettings*)self, which);
}

void q_webenginesettings_set_font_size(void* self, int32_t type, int size) {
    QWebEngineSettings_SetFontSize((QWebEngineSettings*)self, type, size);
}

int32_t q_webenginesettings_font_size(void* self, int32_t type) {
    return QWebEngineSettings_FontSize((QWebEngineSettings*)self, type);
}

void q_webenginesettings_reset_font_size(void* self, int32_t type) {
    QWebEngineSettings_ResetFontSize((QWebEngineSettings*)self, type);
}

void q_webenginesettings_set_attribute(void* self, int32_t attr, bool on) {
    QWebEngineSettings_SetAttribute((QWebEngineSettings*)self, attr, on);
}

bool q_webenginesettings_test_attribute(void* self, int32_t attr) {
    return QWebEngineSettings_TestAttribute((QWebEngineSettings*)self, attr);
}

void q_webenginesettings_reset_attribute(void* self, int32_t attr) {
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

int32_t q_webenginesettings_unknown_url_scheme_policy(void* self) {
    return QWebEngineSettings_UnknownUrlSchemePolicy((QWebEngineSettings*)self);
}

void q_webenginesettings_set_unknown_url_scheme_policy(void* self, int32_t policy) {
    QWebEngineSettings_SetUnknownUrlSchemePolicy((QWebEngineSettings*)self, policy);
}

void q_webenginesettings_reset_unknown_url_scheme_policy(void* self) {
    QWebEngineSettings_ResetUnknownUrlSchemePolicy((QWebEngineSettings*)self);
}

void q_webenginesettings_set_image_animation_policy(void* self, uint8_t policy) {
    QWebEngineSettings_SetImageAnimationPolicy((QWebEngineSettings*)self, policy);
}

uint8_t q_webenginesettings_image_animation_policy(void* self) {
    return QWebEngineSettings_ImageAnimationPolicy((QWebEngineSettings*)self);
}

void q_webenginesettings_reset_image_animation_policy(void* self) {
    QWebEngineSettings_ResetImageAnimationPolicy((QWebEngineSettings*)self);
}

void q_webenginesettings_delete(void* self) {
    QWebEngineSettings_Delete((QWebEngineSettings*)(self));
}
