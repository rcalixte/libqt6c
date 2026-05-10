#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBEMOTICONCATEGORY_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBEMOTICONCATEGORY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)

/// k_textemoticonscore__emoticoncategory_new constructs a new TextEmoticonsCore::EmoticonCategory object.
///
TextEmoticonsCore__EmoticonCategory* k_textemoticonscore__emoticoncategory_new();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)

/// k_textemoticonscore__emoticoncategory_new2 constructs a new TextEmoticonsCore::EmoticonCategory object.
///
/// @param param1 TextEmoticonsCore__EmoticonCategory*
///
TextEmoticonsCore__EmoticonCategory* k_textemoticonscore__emoticoncategory_new2(void* param1);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextEmoticonsCore__EmoticonCategory*
///
const char* k_textemoticonscore__emoticoncategory_name(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)
///
/// @param self TextEmoticonsCore__EmoticonCategory*
/// @param name const char*
///
void k_textemoticonscore__emoticoncategory_set_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextEmoticonsCore__EmoticonCategory*
///
const char* k_textemoticonscore__emoticoncategory_category(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)
///
/// @param self TextEmoticonsCore__EmoticonCategory*
/// @param category const char*
///
void k_textemoticonscore__emoticoncategory_set_category(void* self, const char* category);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextEmoticonsCore__EmoticonCategory*
///
const char* k_textemoticonscore__emoticoncategory_i18n_name(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)
///
/// @param self TextEmoticonsCore__EmoticonCategory*
/// @param newI18nName const char*
///
void k_textemoticonscore__emoticoncategory_set_i18n_name(void* self, const char* newI18nName);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)
///
/// @param self TextEmoticonsCore__EmoticonCategory*
/// @param other TextEmoticonsCore__EmoticonCategory*
///
bool k_textemoticonscore__emoticoncategory_operator_lesser(void* self, void* other);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)
///
/// @param self TextEmoticonsCore__EmoticonCategory*
///
int32_t k_textemoticonscore__emoticoncategory_order(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)
///
/// @param self TextEmoticonsCore__EmoticonCategory*
/// @param newOrder int
///
void k_textemoticonscore__emoticoncategory_set_order(void* self, int newOrder);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonCategory.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextEmoticonsCore__EmoticonCategory*
///
void k_textemoticonscore__emoticoncategory_delete(void* self);

#endif
