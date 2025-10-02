#pragma once
#ifndef SRC_EXTRAS_KSYNTAXHIGHLIGHTINGQT6C_LIBABSTRACTHIGHLIGHTER_H
#define SRC_EXTRAS_KSYNTAXHIGHLIGHTINGQT6C_LIBABSTRACTHIGHLIGHTER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#definition)
///
/// @param self KSyntaxHighlighting__AbstractHighlighter*
KSyntaxHighlighting__Definition* k_syntaxhighlighting__abstracthighlighter_definition(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#setDefinition)
///
/// @param self KSyntaxHighlighting__AbstractHighlighter*
/// @param def KSyntaxHighlighting__Definition*
void k_syntaxhighlighting__abstracthighlighter_set_definition(void* self, void* def);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#theme)
///
/// @param self KSyntaxHighlighting__AbstractHighlighter*
KSyntaxHighlighting__Theme* k_syntaxhighlighting__abstracthighlighter_theme(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#setTheme)
///
/// @param self KSyntaxHighlighting__AbstractHighlighter*
/// @param theme KSyntaxHighlighting__Theme*
void k_syntaxhighlighting__abstracthighlighter_set_theme(void* self, void* theme);

/// Delete this object from C++ memory.
///
/// @param self KSyntaxHighlighting__AbstractHighlighter*
void k_syntaxhighlighting__abstracthighlighter_delete(void* self);

#endif
