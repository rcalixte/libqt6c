#pragma once
#ifndef SRC_EXTRAS_KI18N_QT6C_LIBKUITSETUP_H
#define SRC_EXTRAS_KI18N_QT6C_LIBKUITSETUP_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kuit.html)

/// [Upstream resources](https://api.kde.org/kuit.html#setupForDomain)
///
/// @param param1 char*
///
KuitSetup* k_uit_setup_for_domain(char* param1);

/// [Upstream resources](https://api.kde.org/kuitsetup.html)

/// [Upstream resources](https://api.kde.org/kuitsetup.html#setTagPattern)
///
/// @param self KuitSetup*
/// @param tagName const char*
/// @param attribNames const char**
/// @param format enum Kuit__VisualFormat
/// @param pattern KLocalizedString*
///
void k_uitsetup_set_tag_pattern(void* self, const char* tagName, const char* attribNames[static 1], int32_t format, void* pattern);

/// [Upstream resources](https://api.kde.org/kuitsetup.html#setTagClass)
///
/// @param self KuitSetup*
/// @param tagName const char*
/// @param aClass enum Kuit__TagClass
///
void k_uitsetup_set_tag_class(void* self, const char* tagName, int32_t aClass);

/// [Upstream resources](https://api.kde.org/kuitsetup.html#setFormatForMarker)
///
/// @param self KuitSetup*
/// @param marker const char*
/// @param format enum Kuit__VisualFormat
///
void k_uitsetup_set_format_for_marker(void* self, const char* marker, int32_t format);

/// [Upstream resources](https://api.kde.org/kuitsetup.html#dtor.KuitSetup)
///
/// Delete this object from C++ memory.
///
/// @param self KuitSetup*
///
void k_uitsetup_delete(void* self);

/// [Upstream resources](https://api.kde.org/kuitsetup.html#public-types)

typedef enum {
    KUIT_VISUALFORMAT_UNDEFINEDFORMAT = 0,
    KUIT_VISUALFORMAT_PLAINTEXT = 10,
    KUIT_VISUALFORMAT_RICHTEXT = 20,
    KUIT_VISUALFORMAT_TERMTEXT = 30
} Kuit__VisualFormat;

/// [Upstream resources](https://api.kde.org/kuitsetup.html#public-types)

typedef enum {
    KUIT_TAGCLASS_PHRASETAG = 0,
    KUIT_TAGCLASS_STRUCTTAG = 1
} Kuit__TagClass;

#endif
