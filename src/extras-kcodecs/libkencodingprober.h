#pragma once
#ifndef SRC_EXTRAS_KCODECSQT6C_LIBKENCODINGPROBER_H
#define SRC_EXTRAS_KCODECSQT6C_LIBKENCODINGPROBER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kencodingprober.html

/// k_encodingprober_new constructs a new KEncodingProber object.
///
KEncodingProber* k_encodingprober_new();

/// k_encodingprober_new2 constructs a new KEncodingProber object.
///
/// @param proberType enum KEncodingProber__ProberType
KEncodingProber* k_encodingprober_new2(int32_t proberType);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param sourceText const char*
const char* k_encodingprober_tr(const char* sourceText);

/// [Qt documentation](https://api-staging.kde.org/kencodingprober.html#reset)
///
/// @param self KEncodingProber*
void k_encodingprober_reset(void* self);

/// [Qt documentation](https://api-staging.kde.org/kencodingprober.html#feed)
///
/// @param self KEncodingProber*
/// @param data const char*
///
/// @return enum KEncodingProber__ProberState
int32_t k_encodingprober_feed(void* self, const char* data);

/// [Qt documentation](https://api-staging.kde.org/kencodingprober.html#feed)
///
/// @param self KEncodingProber*
/// @param data const char*
/// @param lenVal int64_t
///
/// @return enum KEncodingProber__ProberState
int32_t k_encodingprober_feed2(void* self, const char* data, int64_t lenVal);

/// [Qt documentation](https://api-staging.kde.org/kencodingprober.html#state)
///
/// @param self KEncodingProber*
///
/// @return enum KEncodingProber__ProberState
int32_t k_encodingprober_state(void* self);

/// [Qt documentation](https://api-staging.kde.org/kencodingprober.html#encoding)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KEncodingProber*
char* k_encodingprober_encoding(void* self);

/// [Qt documentation](https://api-staging.kde.org/kencodingprober.html#confidence)
///
/// @param self KEncodingProber*
float k_encodingprober_confidence(void* self);

/// [Qt documentation](https://api-staging.kde.org/kencodingprober.html#proberType)
///
/// @param self KEncodingProber*
///
/// @return enum KEncodingProber__ProberType
int32_t k_encodingprober_prober_type(void* self);

/// [Qt documentation](https://api-staging.kde.org/kencodingprober.html#setProberType)
///
/// @param self KEncodingProber*
/// @param proberType enum KEncodingProber__ProberType
void k_encodingprober_set_prober_type(void* self, int32_t proberType);

/// [Qt documentation](https://api-staging.kde.org/kencodingprober.html#proberTypeForName)
///
/// @param lang const char*
///
/// @return enum KEncodingProber__ProberType
int32_t k_encodingprober_prober_type_for_name(const char* lang);

/// [Qt documentation](https://api-staging.kde.org/kencodingprober.html#nameForProberType)
///
/// Caller is responsible for freeing the returned memory
///
/// @param proberType enum KEncodingProber__ProberType
const char* k_encodingprober_name_for_prober_type(int32_t proberType);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param sourceText const char*
/// @param disambiguation const char*
const char* k_encodingprober_tr2(const char* sourceText, const char* disambiguation);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param sourceText const char*
/// @param disambiguation const char*
/// @param n int
const char* k_encodingprober_tr3(const char* sourceText, const char* disambiguation, int n);

/// [Qt documentation](https://api-staging.kde.org/kencodingprober.html#dtor.KEncodingProber)
///
/// Delete this object from C++ memory.
///
/// @param self KEncodingProber*
void k_encodingprober_delete(void* self);

/// https://api-staging.kde.org/kencodingprober.html#types

typedef enum {
    KENCODINGPROBER_PROBERSTATE_FOUNDIT = 0,
    KENCODINGPROBER_PROBERSTATE_NOTME = 1,
    KENCODINGPROBER_PROBERSTATE_PROBING = 2
} KEncodingProber__ProberState;

typedef enum {
    KENCODINGPROBER_PROBERTYPE_NONE = 0,
    KENCODINGPROBER_PROBERTYPE_UNIVERSAL = 1,
    KENCODINGPROBER_PROBERTYPE_ARABIC = 2,
    KENCODINGPROBER_PROBERTYPE_BALTIC = 3,
    KENCODINGPROBER_PROBERTYPE_CENTRALEUROPEAN = 4,
    KENCODINGPROBER_PROBERTYPE_CHINESESIMPLIFIED = 5,
    KENCODINGPROBER_PROBERTYPE_CHINESETRADITIONAL = 6,
    KENCODINGPROBER_PROBERTYPE_CYRILLIC = 7,
    KENCODINGPROBER_PROBERTYPE_GREEK = 8,
    KENCODINGPROBER_PROBERTYPE_HEBREW = 9,
    KENCODINGPROBER_PROBERTYPE_JAPANESE = 10,
    KENCODINGPROBER_PROBERTYPE_KOREAN = 11,
    KENCODINGPROBER_PROBERTYPE_NORTHERNSAAMI = 12,
    KENCODINGPROBER_PROBERTYPE_OTHER = 13,
    KENCODINGPROBER_PROBERTYPE_SOUTHEASTERNEUROPE = 14,
    KENCODINGPROBER_PROBERTYPE_THAI = 15,
    KENCODINGPROBER_PROBERTYPE_TURKISH = 16,
    KENCODINGPROBER_PROBERTYPE_UNICODE = 17,
    KENCODINGPROBER_PROBERTYPE_WESTERNEUROPEAN = 18
} KEncodingProber__ProberType;

#endif
