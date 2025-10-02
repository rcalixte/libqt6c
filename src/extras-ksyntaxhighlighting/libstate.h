#pragma once
#ifndef SRC_EXTRAS_KSYNTAXHIGHLIGHTINGQT6C_LIBSTATE_H
#define SRC_EXTRAS_KSYNTAXHIGHLIGHTINGQT6C_LIBSTATE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/ksyntaxhighlighting-state.html

/// k_syntaxhighlighting__state_new constructs a new KSyntaxHighlighting::State object.
///
KSyntaxHighlighting__State* k_syntaxhighlighting__state_new();

/// k_syntaxhighlighting__state_new2 constructs a new KSyntaxHighlighting::State object.
///
/// @param other KSyntaxHighlighting__State*
KSyntaxHighlighting__State* k_syntaxhighlighting__state_new2(void* other);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-state.html#operator-eq)
///
/// @param self KSyntaxHighlighting__State*
/// @param rhs KSyntaxHighlighting__State*
void k_syntaxhighlighting__state_operator_assign(void* self, void* rhs);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-state.html#operator-eq-eq)
///
/// @param self KSyntaxHighlighting__State*
/// @param other KSyntaxHighlighting__State*
bool k_syntaxhighlighting__state_operator_equal(void* self, void* other);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-state.html#operator-not-eq)
///
/// @param self KSyntaxHighlighting__State*
/// @param other KSyntaxHighlighting__State*
bool k_syntaxhighlighting__state_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-state.html#indentationBasedFoldingEnabled)
///
/// @param self KSyntaxHighlighting__State*
bool k_syntaxhighlighting__state_indentation_based_folding_enabled(void* self);

/// Delete this object from C++ memory.
///
/// @param self KSyntaxHighlighting__State*
void k_syntaxhighlighting__state_delete(void* self);

#endif
