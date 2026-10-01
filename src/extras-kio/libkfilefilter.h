#pragma once
#ifndef EXTRAS_KIO_LIBKFILEFILTER_H
#define EXTRAS_KIO_LIBKFILEFILTER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
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
KFileFilter* k_filefilter_new3(const void* other);

/// [Upstream resources](https://api.kde.org/kfilefilter.html#operator-eq)
///
/// @param self KFileFilter*
/// @param other KFileFilter*
///
void k_filefilter_operator_assign(void* self, const void* other);

/// [Upstream resources](https://api.kde.org/kfilefilter.html#operator-eq-eq)
///
/// @param self const KFileFilter*
/// @param other KFileFilter*
///
bool k_filefilter_operator_equal(const void* self, const void* other);

/// [Upstream resources](https://api.kde.org/kfilefilter.html#label)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KFileFilter*
///
const char* k_filefilter_label(const void* self);

/// [Upstream resources](https://api.kde.org/kfilefilter.html#filePatterns)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KFileFilter*
///
const char** k_filefilter_file_patterns(const void* self);

/// [Upstream resources](https://api.kde.org/kfilefilter.html#mimePatterns)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KFileFilter*
///
const char** k_filefilter_mime_patterns(const void* self);

/// [Upstream resources](https://api.kde.org/kfilefilter.html#toFilterString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KFileFilter*
///
const char* k_filefilter_to_filter_string(const void* self);

/// [Upstream resources](https://api.kde.org/kfilefilter.html#isEmpty)
///
/// @param self const KFileFilter*
///
bool k_filefilter_is_empty(const void* self);

/// [Upstream resources](https://api.kde.org/kfilefilter.html#isValid)
///
/// @param self const KFileFilter*
///
bool k_filefilter_is_valid(const void* self);

/// [Upstream resources](https://api.kde.org/kfilefilter.html#fromMimeType)
///
/// @param mimeType const char*
///
KFileFilter* k_filefilter_from_mime_type(const char* mimeType);

/// [Upstream resources](https://api.kde.org/kfilefilter.html#fromMimeTypes)
///
/// @param mimeTypes const char**
///
/// @return libqt_list of KFileFilter*
///
libqt_list k_filefilter_from_mime_types(const char* mimeTypes[static 1]);

/// [Upstream resources](https://api.kde.org/kfilefilter.html#dtor.KFileFilter)
///
/// Delete this object from C++ memory.
///
/// @param self KFileFilter*
///
void k_filefilter_delete(void* self);

#endif
