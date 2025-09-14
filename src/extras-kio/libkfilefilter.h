#pragma once
#ifndef SRC_EXTRAS_KIOQT6C_LIBKFILEFILTER_H
#define SRC_EXTRAS_KIOQT6C_LIBKFILEFILTER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kfilefilter.html

/// k_filefilter_new constructs a new KFileFilter object.
///
KFileFilter* k_filefilter_new();

/// k_filefilter_new2 constructs a new KFileFilter object.
///
/// @param label const char*
/// @param filePatterns const char**
/// @param mimePatterns const char**
KFileFilter* k_filefilter_new2(const char* label, const char* filePatterns[], const char* mimePatterns[]);

/// k_filefilter_new3 constructs a new KFileFilter object.
///
/// @param other KFileFilter*
KFileFilter* k_filefilter_new3(void* other);

/// [Qt documentation](https://api.kde.org/kfilefilter.html#operator-eq)
///
/// @param self KFileFilter*
/// @param other KFileFilter*
void k_filefilter_operator_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/kfilefilter.html#operator-eq-eq)
///
/// @param self KFileFilter*
/// @param other KFileFilter*
bool k_filefilter_operator_equal(void* self, void* other);

/// [Qt documentation](https://api.kde.org/kfilefilter.html#label)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFileFilter*
const char* k_filefilter_label(void* self);

/// [Qt documentation](https://api.kde.org/kfilefilter.html#filePatterns)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFileFilter*
const char** k_filefilter_file_patterns(void* self);

/// [Qt documentation](https://api.kde.org/kfilefilter.html#mimePatterns)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFileFilter*
const char** k_filefilter_mime_patterns(void* self);

/// [Qt documentation](https://api.kde.org/kfilefilter.html#toFilterString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFileFilter*
const char* k_filefilter_to_filter_string(void* self);

/// [Qt documentation](https://api.kde.org/kfilefilter.html#isEmpty)
///
/// @param self KFileFilter*
bool k_filefilter_is_empty(void* self);

/// [Qt documentation](https://api.kde.org/kfilefilter.html#isValid)
///
/// @param self KFileFilter*
bool k_filefilter_is_valid(void* self);

/// [Qt documentation](https://api.kde.org/kfilefilter.html#fromMimeType)
///
/// @param mimeType const char*
KFileFilter* k_filefilter_from_mime_type(const char* mimeType);

/// [Qt documentation](https://api.kde.org/kfilefilter.html#fromMimeTypes)
///
/// @param mimeTypes const char**
libqt_list /* of KFileFilter* */ k_filefilter_from_mime_types(const char* mimeTypes[]);

/// [Qt documentation](https://api.kde.org/kfilefilter.html#dtor.KFileFilter)
///
/// Delete this object from C++ memory.
///
/// @param self KFileFilter*
void k_filefilter_delete(void* self);

#endif
