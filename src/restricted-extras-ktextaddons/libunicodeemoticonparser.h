#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBUNICODEEMOTICONPARSER_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBUNICODEEMOTICONPARSER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticonParser.html)

/// k_textemoticonscore__unicodeemoticonparser_new constructs a new TextEmoticonsCore::UnicodeEmoticonParser object.
///
TextEmoticonsCore__UnicodeEmoticonParser* k_textemoticonscore__unicodeemoticonparser_new();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticonParser.html)
///
/// @param self TextEmoticonsCore__UnicodeEmoticonParser*
/// @param o QJsonObject*
///
/// @return libqt_list of TextEmoticonsCore__UnicodeEmoticon*
///
libqt_list k_textemoticonscore__unicodeemoticonparser_parse(void* self, void* o);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticonParser.html)
///
/// @param name const char*
///
int32_t k_textemoticonscore__unicodeemoticonparser_change_order(const char* name);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticonParser.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextEmoticonsCore__UnicodeEmoticonParser*
///
void k_textemoticonscore__unicodeemoticonparser_delete(void* self);

#endif
