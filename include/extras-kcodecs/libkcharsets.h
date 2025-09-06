#pragma once
#ifndef SRC_EXTRAS_KCODECSQT6C_LIBKCHARSETS_H
#define SRC_EXTRAS_KCODECSQT6C_LIBKCHARSETS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kcharsets.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param sourceText const char*
const char* k_charsets_tr(const char* sourceText);

/// [Qt documentation](https://api-staging.kde.org/kcharsets.html#charsets)
///
KCharsets* k_charsets_charsets();

/// [Qt documentation](https://api-staging.kde.org/kcharsets.html#toEntity)
///
/// Caller is responsible for freeing the returned memory
///
/// @param ch QChar*
const char* k_charsets_to_entity(void* ch);

/// [Qt documentation](https://api-staging.kde.org/kcharsets.html#resolveEntities)
///
/// Caller is responsible for freeing the returned memory
///
/// @param text const char*
const char* k_charsets_resolve_entities(const char* text);

/// [Qt documentation](https://api-staging.kde.org/kcharsets.html#availableEncodingNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCharsets*
const char** k_charsets_available_encoding_names(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcharsets.html#descriptiveEncodingNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCharsets*
const char** k_charsets_descriptive_encoding_names(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcharsets.html#encodingsByScript)
///
/// @param self KCharsets*
libqt_list /* of const char** */ k_charsets_encodings_by_script(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcharsets.html#encodingForName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCharsets*
/// @param descriptiveName const char*
const char* k_charsets_encoding_for_name(void* self, const char* descriptiveName);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param sourceText const char*
/// @param disambiguation const char*
const char* k_charsets_tr2(const char* sourceText, const char* disambiguation);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param sourceText const char*
/// @param disambiguation const char*
/// @param n int
const char* k_charsets_tr3(const char* sourceText, const char* disambiguation, int n);

/// [Qt documentation](https://api-staging.kde.org/kcharsets.html#dtor.KCharsets)
///
/// Delete this object from C++ memory.
///
/// @param self KCharsets*
void k_charsets_delete(void* self);

#endif
