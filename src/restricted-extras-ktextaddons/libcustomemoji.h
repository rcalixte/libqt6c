#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBCUSTOMEMOJI_H
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBCUSTOMEMOJI_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmoji.html)

/// k_textemoticonscore__customemoji_new constructs a new TextEmoticonsCore::CustomEmoji object.
///
TextEmoticonsCore__CustomEmoji* k_textemoticonscore__customemoji_new();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmoji.html)

/// k_textemoticonscore__customemoji_new2 constructs a new TextEmoticonsCore::CustomEmoji object.
///
/// @param param1 TextEmoticonsCore__CustomEmoji*
///
TextEmoticonsCore__CustomEmoji* k_textemoticonscore__customemoji_new2(const void* param1);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmoji.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const TextEmoticonsCore__CustomEmoji*
///
const char* k_textemoticonscore__customemoji_identifier(const void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmoji.html)
///
/// @param self TextEmoticonsCore__CustomEmoji*
/// @param newIdentifier const char*
///
void k_textemoticonscore__customemoji_set_identifier(void* self, const char* newIdentifier);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmoji.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const TextEmoticonsCore__CustomEmoji*
///
const char* k_textemoticonscore__customemoji_category(const void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmoji.html)
///
/// @param self const TextEmoticonsCore__CustomEmoji*
///
bool k_textemoticonscore__customemoji_is_animated_emoji(const void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmoji.html)
///
/// @param self TextEmoticonsCore__CustomEmoji*
/// @param newIsAnimatedEmoji bool
///
void k_textemoticonscore__customemoji_set_is_animated_emoji(void* self, bool newIsAnimatedEmoji);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmoji.html)
///
/// @param self TextEmoticonsCore__CustomEmoji*
/// @param param1 TextEmoticonsCore__CustomEmoji*
///
void k_textemoticonscore__customemoji_operator_assign(void* self, const void* param1);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmoji.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextEmoticonsCore__CustomEmoji*
///
void k_textemoticonscore__customemoji_delete(void* self);

#endif
