#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBUNICODEEMOTICON_H
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBUNICODEEMOTICON_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)

/// k_textemoticonscore__unicodeemoticon_new constructs a new TextEmoticonsCore::UnicodeEmoticon object.
///
TextEmoticonsCore__UnicodeEmoticon* k_textemoticonscore__unicodeemoticon_new();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)

/// k_textemoticonscore__unicodeemoticon_new2 constructs a new TextEmoticonsCore::UnicodeEmoticon object.
///
/// @param param1 TextEmoticonsCore__UnicodeEmoticon*
///
TextEmoticonsCore__UnicodeEmoticon* k_textemoticonscore__unicodeemoticon_new2(const void* param1);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const TextEmoticonsCore__UnicodeEmoticon*
///
const char* k_textemoticonscore__unicodeemoticon_identifier(const void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
///
/// @param self TextEmoticonsCore__UnicodeEmoticon*
/// @param identifier const char*
///
void k_textemoticonscore__unicodeemoticon_set_identifier(void* self, const char* identifier);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const TextEmoticonsCore__UnicodeEmoticon*
///
const char* k_textemoticonscore__unicodeemoticon_unicode(const void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const TextEmoticonsCore__UnicodeEmoticon*
///
const char* k_textemoticonscore__unicodeemoticon_unicode_display(const void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
///
/// @param self TextEmoticonsCore__UnicodeEmoticon*
/// @param unicode const char*
///
void k_textemoticonscore__unicodeemoticon_set_unicode(void* self, const char* unicode);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const TextEmoticonsCore__UnicodeEmoticon*
///
const char* k_textemoticonscore__unicodeemoticon_category(const void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
///
/// @param self TextEmoticonsCore__UnicodeEmoticon*
/// @param category const char*
///
void k_textemoticonscore__unicodeemoticon_set_category(void* self, const char* category);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const TextEmoticonsCore__UnicodeEmoticon*
///
const char** k_textemoticonscore__unicodeemoticon_aliases(const void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
///
/// @param self TextEmoticonsCore__UnicodeEmoticon*
/// @param aliases const char**
///
void k_textemoticonscore__unicodeemoticon_set_aliases(void* self, const char* aliases[static 1]);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
///
/// @param self const TextEmoticonsCore__UnicodeEmoticon*
/// @param identifier const char*
///
bool k_textemoticonscore__unicodeemoticon_has_emoji(const void* self, const char* identifier);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
///
/// @param self const TextEmoticonsCore__UnicodeEmoticon*
///
bool k_textemoticonscore__unicodeemoticon_is_valid(const void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
///
/// @param self const TextEmoticonsCore__UnicodeEmoticon*
///
int32_t k_textemoticonscore__unicodeemoticon_order(const void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
///
/// @param self TextEmoticonsCore__UnicodeEmoticon*
/// @param order int
///
void k_textemoticonscore__unicodeemoticon_set_order(void* self, int order);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const TextEmoticonsCore__UnicodeEmoticon*
///
const char* k_textemoticonscore__unicodeemoticon_key(const void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
///
/// @param self TextEmoticonsCore__UnicodeEmoticon*
/// @param key const char*
///
void k_textemoticonscore__unicodeemoticon_set_key(void* self, const char* key);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
///
/// @param self const TextEmoticonsCore__UnicodeEmoticon*
/// @param other TextEmoticonsCore__UnicodeEmoticon*
///
bool k_textemoticonscore__unicodeemoticon_operator_equal(const void* self, const void* other);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
///
/// @param self TextEmoticonsCore__UnicodeEmoticon*
/// @param param1 TextEmoticonsCore__UnicodeEmoticon*
///
void k_textemoticonscore__unicodeemoticon_operator_assign(void* self, const void* param1);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticon.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextEmoticonsCore__UnicodeEmoticon*
///
void k_textemoticonscore__unicodeemoticon_delete(void* self);

#endif
