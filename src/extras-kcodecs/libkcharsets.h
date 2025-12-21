#pragma once
#ifndef SRC_EXTRAS_KCODECS_QT6C_LIBKCHARSETS_H
#define SRC_EXTRAS_KCODECS_QT6C_LIBKCHARSETS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kcharsets.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param sourceText const char*
///
const char* k_charsets_tr(const char* sourceText);

/// [Upstream resources](https://api.kde.org/kcharsets.html#charsets)
///
KCharsets* k_charsets_charsets();

/// [Upstream resources](https://api.kde.org/kcharsets.html#toEntity)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param ch QChar*
///
const char* k_charsets_to_entity(void* ch);

/// [Upstream resources](https://api.kde.org/kcharsets.html#resolveEntities)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param text const char*
///
const char* k_charsets_resolve_entities(const char* text);

/// [Upstream resources](https://api.kde.org/kcharsets.html#availableEncodingNames)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KCharsets*
///
const char** k_charsets_available_encoding_names(void* self);

/// [Upstream resources](https://api.kde.org/kcharsets.html#descriptiveEncodingNames)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KCharsets*
///
const char** k_charsets_descriptive_encoding_names(void* self);

/// [Upstream resources](https://api.kde.org/kcharsets.html#encodingsByScript)
///
/// @param self KCharsets*
///
libqt_list /* of const char** */ k_charsets_encodings_by_script(void* self);

/// [Upstream resources](https://api.kde.org/kcharsets.html#encodingForName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KCharsets*
/// @param descriptiveName const char*
///
const char* k_charsets_encoding_for_name(void* self, const char* descriptiveName);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param sourceText const char*
/// @param disambiguation const char*
///
const char* k_charsets_tr2(const char* sourceText, const char* disambiguation);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param sourceText const char*
/// @param disambiguation const char*
/// @param n int
///
const char* k_charsets_tr3(const char* sourceText, const char* disambiguation, int n);

/// [Upstream resources](https://api.kde.org/kcharsets.html#dtor.KCharsets)
///
/// Delete this object from C++ memory.
///
/// @param self KCharsets*
///
void k_charsets_delete(void* self);

#endif
