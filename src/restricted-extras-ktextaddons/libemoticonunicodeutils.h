#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBEMOTICONUNICODEUTILS_H
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBEMOTICONUNICODEUTILS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonUnicodeUtils.html)

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonUnicodeUtils.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* k_textemoticonscore__emoticonunicodeutils_emoji_font_name();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonUnicodeUtils.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* k_textemoticonscore__emoticonunicodeutils_recent_identifier();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmoticonUnicodeUtils.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* k_textemoticonscore__emoticonunicodeutils_custom_identifier();
#endif
