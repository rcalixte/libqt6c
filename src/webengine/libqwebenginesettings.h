#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINESETTINGS_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINESETTINGS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebenginesettings.html

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#setFontFamily)
///
/// @param self QWebEngineSettings*
/// @param which enum QWebEngineSettings__FontFamily
/// @param family const char*
void q_webenginesettings_set_font_family(void* self, int32_t which, const char* family);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#fontFamily)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineSettings*
/// @param which enum QWebEngineSettings__FontFamily
const char* q_webenginesettings_font_family(void* self, int32_t which);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#resetFontFamily)
///
/// @param self QWebEngineSettings*
/// @param which enum QWebEngineSettings__FontFamily
void q_webenginesettings_reset_font_family(void* self, int32_t which);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#setFontSize)
///
/// @param self QWebEngineSettings*
/// @param type enum QWebEngineSettings__FontSize
/// @param size int
void q_webenginesettings_set_font_size(void* self, int32_t type, int size);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#fontSize)
///
/// @param self QWebEngineSettings*
/// @param type enum QWebEngineSettings__FontSize
int32_t q_webenginesettings_font_size(void* self, int32_t type);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#resetFontSize)
///
/// @param self QWebEngineSettings*
/// @param type enum QWebEngineSettings__FontSize
void q_webenginesettings_reset_font_size(void* self, int32_t type);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#setAttribute)
///
/// @param self QWebEngineSettings*
/// @param attr enum QWebEngineSettings__WebAttribute
/// @param on bool
void q_webenginesettings_set_attribute(void* self, int32_t attr, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#testAttribute)
///
/// @param self QWebEngineSettings*
/// @param attr enum QWebEngineSettings__WebAttribute
bool q_webenginesettings_test_attribute(void* self, int32_t attr);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#resetAttribute)
///
/// @param self QWebEngineSettings*
/// @param attr enum QWebEngineSettings__WebAttribute
void q_webenginesettings_reset_attribute(void* self, int32_t attr);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#setDefaultTextEncoding)
///
/// @param self QWebEngineSettings*
/// @param encoding const char*
void q_webenginesettings_set_default_text_encoding(void* self, const char* encoding);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#defaultTextEncoding)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineSettings*
const char* q_webenginesettings_default_text_encoding(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#unknownUrlSchemePolicy)
///
/// @param self QWebEngineSettings*
///
/// @return enum QWebEngineSettings__UnknownUrlSchemePolicy
int32_t q_webenginesettings_unknown_url_scheme_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#setUnknownUrlSchemePolicy)
///
/// @param self QWebEngineSettings*
/// @param policy enum QWebEngineSettings__UnknownUrlSchemePolicy
void q_webenginesettings_set_unknown_url_scheme_policy(void* self, int32_t policy);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#resetUnknownUrlSchemePolicy)
///
/// @param self QWebEngineSettings*
void q_webenginesettings_reset_unknown_url_scheme_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#setImageAnimationPolicy)
///
/// @param self QWebEngineSettings*
/// @param policy enum QWebEngineSettings__ImageAnimationPolicy
void q_webenginesettings_set_image_animation_policy(void* self, uint8_t policy);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#imageAnimationPolicy)
///
/// @param self QWebEngineSettings*
///
/// @return enum QWebEngineSettings__ImageAnimationPolicy
uint8_t q_webenginesettings_image_animation_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#resetImageAnimationPolicy)
///
/// @param self QWebEngineSettings*
void q_webenginesettings_reset_image_animation_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginesettings.html#dtor.QWebEngineSettings)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineSettings*
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
    QWEBENGINESETTINGS_WEBATTRIBUTE_NAVIGATEONDROPENABLED = 31,
    QWEBENGINESETTINGS_WEBATTRIBUTE_READINGFROMCANVASENABLED = 32,
    QWEBENGINESETTINGS_WEBATTRIBUTE_FORCEDARKMODE = 33
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

typedef enum {
    QWEBENGINESETTINGS_IMAGEANIMATIONPOLICY_INHERITED = 0,
    QWEBENGINESETTINGS_IMAGEANIMATIONPOLICY_ALLOW = 1,
    QWEBENGINESETTINGS_IMAGEANIMATIONPOLICY_ANIMATEONCE = 2,
    QWEBENGINESETTINGS_IMAGEANIMATIONPOLICY_DISALLOW = 3
} QWebEngineSettings__ImageAnimationPolicy;

#endif
