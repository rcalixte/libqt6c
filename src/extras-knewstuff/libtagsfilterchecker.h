#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFF_QT6C_LIBTAGSFILTERCHECKER_H
#define SRC_EXTRAS_KNEWSTUFF_QT6C_LIBTAGSFILTERCHECKER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/knscore-tagsfilterchecker.html

/// k_nscore__tagsfilterchecker_new constructs a new KNSCore::TagsFilterChecker object.
///
/// @param tagFilter const char**
KNSCore__TagsFilterChecker* k_nscore__tagsfilterchecker_new(const char* tagFilter[static 1]);

/// [Qt documentation](https://api.kde.org/knscore-tagsfilterchecker.html#filterAccepts)
///
/// @param self KNSCore__TagsFilterChecker*
/// @param tags const char**
bool k_nscore__tagsfilterchecker_filter_accepts(void* self, const char* tags[static 1]);

/// Delete this object from C++ memory.
///
/// @param self KNSCore__TagsFilterChecker*
void k_nscore__tagsfilterchecker_delete(void* self);

#endif
