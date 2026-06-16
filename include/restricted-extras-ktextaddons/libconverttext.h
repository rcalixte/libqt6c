#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBCONVERTTEXT_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBCONVERTTEXT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextUtils_1_1ConvertText.html)

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextUtils_1_1ConvertText.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param str const char*
///
const char* k_textutils__converttext_normalize(const char* str);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextUtils_1_1ConvertText.html)
///
/// @param cursor QTextCursor*
///
void k_textutils__converttext_upper_case(void* cursor);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextUtils_1_1ConvertText.html)
///
/// @param cursor QTextCursor*
///
void k_textutils__converttext_lower_case(void* cursor);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextUtils_1_1ConvertText.html)
///
/// @param cursor QTextCursor*
///
void k_textutils__converttext_sentence_case(void* cursor);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextUtils_1_1ConvertText.html)
///
/// @param cursor QTextCursor*
///
void k_textutils__converttext_reverse_case(void* cursor);
#endif
