#include <string.h>
#include "libqwebenginesettings.hpp"
#include "libqwebenginesettings.h"

/// https://doc.qt.io/qt-6/qwebenginesettings.html

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#setFontFamily)
///
/// ``` QWebEngineSettings* self, enum QWebEngineSettings__FontFamily which, const char* family ```
void q_webenginesettings_set_font_family(void* self, int64_t which, const char* family) {
    QWebEngineSettings_SetFontFamily((QWebEngineSettings*)self, which, qstring(family));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#fontFamily)
///
/// ``` QWebEngineSettings* self, enum QWebEngineSettings__FontFamily which ```
const char* q_webenginesettings_font_family(void* self, int64_t which) {
    libqt_string _str = QWebEngineSettings_FontFamily((QWebEngineSettings*)self, which);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#resetFontFamily)
///
/// ``` QWebEngineSettings* self, enum QWebEngineSettings__FontFamily which ```
void q_webenginesettings_reset_font_family(void* self, int64_t which) {
    QWebEngineSettings_ResetFontFamily((QWebEngineSettings*)self, which);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#setFontSize)
///
/// ``` QWebEngineSettings* self, enum QWebEngineSettings__FontSize typeVal, int size ```
void q_webenginesettings_set_font_size(void* self, int64_t typeVal, int size) {
    QWebEngineSettings_SetFontSize((QWebEngineSettings*)self, typeVal, size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#fontSize)
///
/// ``` QWebEngineSettings* self, enum QWebEngineSettings__FontSize typeVal ```
int32_t q_webenginesettings_font_size(void* self, int64_t typeVal) {
    return QWebEngineSettings_FontSize((QWebEngineSettings*)self, typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#resetFontSize)
///
/// ``` QWebEngineSettings* self, enum QWebEngineSettings__FontSize typeVal ```
void q_webenginesettings_reset_font_size(void* self, int64_t typeVal) {
    QWebEngineSettings_ResetFontSize((QWebEngineSettings*)self, typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#setAttribute)
///
/// ``` QWebEngineSettings* self, enum QWebEngineSettings__WebAttribute attr, bool on ```
void q_webenginesettings_set_attribute(void* self, int64_t attr, bool on) {
    QWebEngineSettings_SetAttribute((QWebEngineSettings*)self, attr, on);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#testAttribute)
///
/// ``` QWebEngineSettings* self, enum QWebEngineSettings__WebAttribute attr ```
bool q_webenginesettings_test_attribute(void* self, int64_t attr) {
    return QWebEngineSettings_TestAttribute((QWebEngineSettings*)self, attr);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#resetAttribute)
///
/// ``` QWebEngineSettings* self, enum QWebEngineSettings__WebAttribute attr ```
void q_webenginesettings_reset_attribute(void* self, int64_t attr) {
    QWebEngineSettings_ResetAttribute((QWebEngineSettings*)self, attr);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#setDefaultTextEncoding)
///
/// ``` QWebEngineSettings* self, const char* encoding ```
void q_webenginesettings_set_default_text_encoding(void* self, const char* encoding) {
    QWebEngineSettings_SetDefaultTextEncoding((QWebEngineSettings*)self, qstring(encoding));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#defaultTextEncoding)
///
/// ``` QWebEngineSettings* self ```
const char* q_webenginesettings_default_text_encoding(void* self) {
    libqt_string _str = QWebEngineSettings_DefaultTextEncoding((QWebEngineSettings*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#unknownUrlSchemePolicy)
///
/// ``` QWebEngineSettings* self ```
int64_t q_webenginesettings_unknown_url_scheme_policy(void* self) {
    return QWebEngineSettings_UnknownUrlSchemePolicy((QWebEngineSettings*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#setUnknownUrlSchemePolicy)
///
/// ``` QWebEngineSettings* self, enum QWebEngineSettings__UnknownUrlSchemePolicy policy ```
void q_webenginesettings_set_unknown_url_scheme_policy(void* self, int64_t policy) {
    QWebEngineSettings_SetUnknownUrlSchemePolicy((QWebEngineSettings*)self, policy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#resetUnknownUrlSchemePolicy)
///
/// ``` QWebEngineSettings* self ```
void q_webenginesettings_reset_unknown_url_scheme_policy(void* self) {
    QWebEngineSettings_ResetUnknownUrlSchemePolicy((QWebEngineSettings*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QWebEngineSettings* self ```
void q_webenginesettings_delete(void* self) {
    QWebEngineSettings_Delete((QWebEngineSettings*)(self));
}