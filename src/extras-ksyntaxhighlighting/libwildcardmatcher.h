#pragma once
#ifndef EXTRAS_KSYNTAXHIGHLIGHTING_LIBWILDCARDMATCHER_H
#define EXTRAS_KSYNTAXHIGHLIGHTING_LIBWILDCARDMATCHER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-wildcardmatcher.html)

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-wildcardmatcher.html#exactMatch)
///
/// @param candidate const char*
/// @param wildcard const char*
///
bool k_syntaxhighlighting__wildcardmatcher_exact_match(const char* candidate, const char* wildcard);
#endif
