#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINESETTINGS_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINESETTINGS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include <string.h>

/// https://doc.qt.io/qt-6/qwebenginesettings.html

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#setFontFamily)
///
/// ``` QWebEngineSettings* self, enum QWebEngineSettings__FontFamily which, const char* family ```
void q_webenginesettings_set_font_family(void* self, int64_t which, const char* family);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#fontFamily)
///
/// ``` QWebEngineSettings* self, enum QWebEngineSettings__FontFamily which ```
const char* q_webenginesettings_font_family(void* self, int64_t which);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#resetFontFamily)
///
/// ``` QWebEngineSettings* self, enum QWebEngineSettings__FontFamily which ```
void q_webenginesettings_reset_font_family(void* self, int64_t which);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#setFontSize)
///
/// ``` QWebEngineSettings* self, enum QWebEngineSettings__FontSize typeVal, int size ```
void q_webenginesettings_set_font_size(void* self, int64_t typeVal, int size);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#fontSize)
///
/// ``` QWebEngineSettings* self, enum QWebEngineSettings__FontSize typeVal ```
int32_t q_webenginesettings_font_size(void* self, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#resetFontSize)
///
/// ``` QWebEngineSettings* self, enum QWebEngineSettings__FontSize typeVal ```
void q_webenginesettings_reset_font_size(void* self, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#setAttribute)
///
/// ``` QWebEngineSettings* self, enum QWebEngineSettings__WebAttribute attr, bool on ```
void q_webenginesettings_set_attribute(void* self, int64_t attr, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#testAttribute)
///
/// ``` QWebEngineSettings* self, enum QWebEngineSettings__WebAttribute attr ```
bool q_webenginesettings_test_attribute(void* self, int64_t attr);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#resetAttribute)
///
/// ``` QWebEngineSettings* self, enum QWebEngineSettings__WebAttribute attr ```
void q_webenginesettings_reset_attribute(void* self, int64_t attr);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#setDefaultTextEncoding)
///
/// ``` QWebEngineSettings* self, const char* encoding ```
void q_webenginesettings_set_default_text_encoding(void* self, const char* encoding);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#defaultTextEncoding)
///
/// ``` QWebEngineSettings* self ```
const char* q_webenginesettings_default_text_encoding(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#unknownUrlSchemePolicy)
///
/// ``` QWebEngineSettings* self ```
int64_t q_webenginesettings_unknown_url_scheme_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#setUnknownUrlSchemePolicy)
///
/// ``` QWebEngineSettings* self, enum QWebEngineSettings__UnknownUrlSchemePolicy policy ```
void q_webenginesettings_set_unknown_url_scheme_policy(void* self, int64_t policy);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#resetUnknownUrlSchemePolicy)
///
/// ``` QWebEngineSettings* self ```
void q_webenginesettings_reset_unknown_url_scheme_policy(void* self);

/// Delete this object from C++ memory.
///
/// ``` QWebEngineSettings* self ```
void q_webenginesettings_delete(void* self);

/// https://doc.qt.io/qt-6/qwebenginesettings.html#types

typedef enum {
    QWEBENGINESETTINGS_FONTFAMILY_STANDARDFONT = 0,
    QWEBENGINESETTINGS_FONTFAMILY_FIXEDFONT = 1,
    QWEBENGINESETTINGS_FONTFAMILY_SERIFFONT = 2,
    QWEBENGINESETTINGS_FONTFAMILY_SANSSERIFFONT = 3,
    QWEBENGINESETTINGS_FONTFAMILY_CURSIVEFONT = 4,
    QWEBENGINESETTINGS_FONTFAMILY_FANTASYFONT = 5,
    QWEBENGINESETTINGS_FONTFAMILY_PICTOGRAPHFONT = 6
} QWebEngineSettings__FontFamily;

typedef enum {
    QWEBENGINESETTINGS_WEBATTRIBUTE_AUTOLOADIMAGES = 0,
    QWEBENGINESETTINGS_WEBATTRIBUTE_JAVASCRIPTENABLED = 1,
    QWEBENGINESETTINGS_WEBATTRIBUTE_JAVASCRIPTCANOPENWINDOWS = 2,
    QWEBENGINESETTINGS_WEBATTRIBUTE_JAVASCRIPTCANACCESSCLIPBOARD = 3,
    QWEBENGINESETTINGS_WEBATTRIBUTE_LINKSINCLUDEDINFOCUSCHAIN = 4,
    QWEBENGINESETTINGS_WEBATTRIBUTE_LOCALSTORAGEENABLED = 5,
    QWEBENGINESETTINGS_WEBATTRIBUTE_LOCALCONTENTCANACCESSREMOTEURLS = 6,
    QWEBENGINESETTINGS_WEBATTRIBUTE_XSSAUDITINGENABLED = 7,
    QWEBENGINESETTINGS_WEBATTRIBUTE_SPATIALNAVIGATIONENABLED = 8,
    QWEBENGINESETTINGS_WEBATTRIBUTE_LOCALCONTENTCANACCESSFILEURLS = 9,
    QWEBENGINESETTINGS_WEBATTRIBUTE_HYPERLINKAUDITINGENABLED = 10,
    QWEBENGINESETTINGS_WEBATTRIBUTE_SCROLLANIMATORENABLED = 11,
    QWEBENGINESETTINGS_WEBATTRIBUTE_ERRORPAGEENABLED = 12,
    QWEBENGINESETTINGS_WEBATTRIBUTE_PLUGINSENABLED = 13,
    QWEBENGINESETTINGS_WEBATTRIBUTE_FULLSCREENSUPPORTENABLED = 14,
    QWEBENGINESETTINGS_WEBATTRIBUTE_SCREENCAPTUREENABLED = 15,
    QWEBENGINESETTINGS_WEBATTRIBUTE_WEBGLENABLED = 16,
    QWEBENGINESETTINGS_WEBATTRIBUTE_ACCELERATED2DCANVASENABLED = 17,
    QWEBENGINESETTINGS_WEBATTRIBUTE_AUTOLOADICONSFORPAGE = 18,
    QWEBENGINESETTINGS_WEBATTRIBUTE_TOUCHICONSENABLED = 19,
    QWEBENGINESETTINGS_WEBATTRIBUTE_FOCUSONNAVIGATIONENABLED = 20,
    QWEBENGINESETTINGS_WEBATTRIBUTE_PRINTELEMENTBACKGROUNDS = 21,
    QWEBENGINESETTINGS_WEBATTRIBUTE_ALLOWRUNNINGINSECURECONTENT = 22,
    QWEBENGINESETTINGS_WEBATTRIBUTE_ALLOWGEOLOCATIONONINSECUREORIGINS = 23,
    QWEBENGINESETTINGS_WEBATTRIBUTE_ALLOWWINDOWACTIVATIONFROMJAVASCRIPT = 24,
    QWEBENGINESETTINGS_WEBATTRIBUTE_SHOWSCROLLBARS = 25,
    QWEBENGINESETTINGS_WEBATTRIBUTE_PLAYBACKREQUIRESUSERGESTURE = 26,
    QWEBENGINESETTINGS_WEBATTRIBUTE_WEBRTCPUBLICINTERFACESONLY = 27,
    QWEBENGINESETTINGS_WEBATTRIBUTE_JAVASCRIPTCANPASTE = 28,
    QWEBENGINESETTINGS_WEBATTRIBUTE_DNSPREFETCHENABLED = 29,
    QWEBENGINESETTINGS_WEBATTRIBUTE_PDFVIEWERENABLED = 30,
    QWEBENGINESETTINGS_WEBATTRIBUTE_NAVIGATEONDROPENABLED = 31
} QWebEngineSettings__WebAttribute;

typedef enum {
    QWEBENGINESETTINGS_FONTSIZE_MINIMUMFONTSIZE = 0,
    QWEBENGINESETTINGS_FONTSIZE_MINIMUMLOGICALFONTSIZE = 1,
    QWEBENGINESETTINGS_FONTSIZE_DEFAULTFONTSIZE = 2,
    QWEBENGINESETTINGS_FONTSIZE_DEFAULTFIXEDFONTSIZE = 3
} QWebEngineSettings__FontSize;

typedef enum {
    QWEBENGINESETTINGS_UNKNOWNURLSCHEMEPOLICY_INHERITEDUNKNOWNURLSCHEMEPOLICY = 0,
    QWEBENGINESETTINGS_UNKNOWNURLSCHEMEPOLICY_DISALLOWUNKNOWNURLSCHEMES = 1,
    QWEBENGINESETTINGS_UNKNOWNURLSCHEMEPOLICY_ALLOWUNKNOWNURLSCHEMESFROMUSERINTERACTION = 2,
    QWEBENGINESETTINGS_UNKNOWNURLSCHEMEPOLICY_ALLOWALLUNKNOWNURLSCHEMES = 3
} QWebEngineSettings__UnknownUrlSchemePolicy;

#endif
