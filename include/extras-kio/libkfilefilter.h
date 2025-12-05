#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKFILEFILTER_H
#define SRC_EXTRAS_KIO_QT6C_LIBKFILEFILTER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kfilefilter.html)

/// k_filefilter_new constructs a new KFileFilter object.
///
KFileFilter* k_filefilter_new();

/// [Upstream resources](https://api.kde.org/kfilefilter.html)

/// k_filefilter_new2 constructs a new KFileFilter object.
///
/// @param label const char*
/// @param filePatterns const char**
/// @param mimePatterns const char**
///
KFileFilter* k_filefilter_new2(const char* label, const char* filePatterns[static 1], const char* mimePatterns[static 1]);

/// [Upstream resources](https://api.kde.org/kfilefilter.html)

/// k_filefilter_new3 constructs a new KFileFilter object.
///
/// @param other KFileFilter*
///
KFileFilter* k_filefilter_new3(void* other);

/// [Upstream resources](https://api.kde.org/kfilefilter.html#operator-eq)
///
/// @param self KFileFilter*
/// @param other KFileFilter*
///
void k_filefilter_operator_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/kfilefilter.html#operator-eq-eq)
///
/// @param self KFileFilter*
/// @param other KFileFilter*
///
bool k_filefilter_operator_equal(void* self, void* other);

/// [Upstream resources](https://api.kde.org/kfilefilter.html#label)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFileFilter*
///
const char* k_filefilter_label(void* self);

/// [Upstream resources](https://api.kde.org/kfilefilter.html#filePatterns)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFileFilter*
///
const char** k_filefilter_file_patterns(void* self);

/// [Upstream resources](https://api.kde.org/kfilefilter.html#mimePatterns)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFileFilter*
///
const char** k_filefilter_mime_patterns(void* self);

/// [Upstream resources](https://api.kde.org/kfilefilter.html#toFilterString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFileFilter*
///
const char* k_filefilter_to_filter_string(void* self);

/// [Upstream resources](https://api.kde.org/kfilefilter.html#isEmpty)
///
/// @param self KFileFilter*
///
bool k_filefilter_is_empty(void* self);

/// [Upstream resources](https://api.kde.org/kfilefilter.html#isValid)
///
/// @param self KFileFilter*
///
bool k_filefilter_is_valid(void* self);

/// [Upstream resources](https://api.kde.org/kfilefilter.html#fromMimeType)
///
/// @param mimeType const char*
///
KFileFilter* k_filefilter_from_mime_type(const char* mimeType);

/// [Upstream resources](https://api.kde.org/kfilefilter.html#fromMimeTypes)
///
/// @param mimeTypes const char**
///
libqt_list /* of KFileFilter* */ k_filefilter_from_mime_types(const char* mimeTypes[static 1]);

/// [Upstream resources](https://api.kde.org/kfilefilter.html#dtor.KFileFilter)
///
/// Delete this object from C++ memory.
///
/// @param self KFileFilter*
///
void k_filefilter_delete(void* self);

#endif
