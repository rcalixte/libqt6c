#pragma once
#ifndef SRC_EXTRAS_KSYNTAXHIGHLIGHTING_QT6C_LIBWILDCARDMATCHER_H
#define SRC_EXTRAS_KSYNTAXHIGHLIGHTING_QT6C_LIBWILDCARDMATCHER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-wildcardmatcher.html)

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-wildcardmatcher.html#exactMatch)
///
/// @param param1 const char*
/// @param param2 const char*
///
bool k_syntaxhighlighting__wildcardmatcher_exact_match(const char* param1, const char* param2);
#endif
