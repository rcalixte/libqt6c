#pragma once
#ifndef SRC_EXTRAS_KSYNTAXHIGHLIGHTING_QT6C_LIBFOLDINGREGION_H
#define SRC_EXTRAS_KSYNTAXHIGHLIGHTING_QT6C_LIBFOLDINGREGION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/ksyntaxhighlighting-foldingregion.html

/// k_syntaxhighlighting__foldingregion_new constructs a new KSyntaxHighlighting::FoldingRegion object.
///
/// @param other KSyntaxHighlighting__FoldingRegion*
KSyntaxHighlighting__FoldingRegion* k_syntaxhighlighting__foldingregion_new(void* other);

/// k_syntaxhighlighting__foldingregion_new2 constructs a new KSyntaxHighlighting::FoldingRegion object and invalidates the source KSyntaxHighlighting::FoldingRegion object.
///
/// @param other KSyntaxHighlighting__FoldingRegion*
KSyntaxHighlighting__FoldingRegion* k_syntaxhighlighting__foldingregion_new2(void* other);

/// k_syntaxhighlighting__foldingregion_new3 constructs a new KSyntaxHighlighting::FoldingRegion object.
///
KSyntaxHighlighting__FoldingRegion* k_syntaxhighlighting__foldingregion_new3();

/// k_syntaxhighlighting__foldingregion_new4 constructs a new KSyntaxHighlighting::FoldingRegion object.
///
/// @param param1 KSyntaxHighlighting__FoldingRegion*
KSyntaxHighlighting__FoldingRegion* k_syntaxhighlighting__foldingregion_new4(void* param1);

/// k_syntaxhighlighting__foldingregion_copy_assign shallow copies `other` into `self`.
///
/// @param self KSyntaxHighlighting__FoldingRegion*
/// @param other KSyntaxHighlighting__FoldingRegion*
void k_syntaxhighlighting__foldingregion_copy_assign(void* self, void* other);

/// k_syntaxhighlighting__foldingregion_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self KSyntaxHighlighting__FoldingRegion*
/// @param other KSyntaxHighlighting__FoldingRegion*
void k_syntaxhighlighting__foldingregion_move_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-foldingregion.html#operator-eq-eq)
///
/// @param self KSyntaxHighlighting__FoldingRegion*
/// @param other KSyntaxHighlighting__FoldingRegion*
bool k_syntaxhighlighting__foldingregion_operator_equal(void* self, void* other);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-foldingregion.html#isValid)
///
/// @param self KSyntaxHighlighting__FoldingRegion*
bool k_syntaxhighlighting__foldingregion_is_valid(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-foldingregion.html#id)
///
/// @param self KSyntaxHighlighting__FoldingRegion*
int32_t k_syntaxhighlighting__foldingregion_id(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-foldingregion.html#type)
///
/// @param self KSyntaxHighlighting__FoldingRegion*
///
/// @return enum KSyntaxHighlighting__FoldingRegion__Type
int32_t k_syntaxhighlighting__foldingregion_type(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-foldingregion.html#sibling)
///
/// @param self KSyntaxHighlighting__FoldingRegion*
KSyntaxHighlighting__FoldingRegion* k_syntaxhighlighting__foldingregion_sibling(void* self);

/// Delete this object from C++ memory.
///
/// @param self KSyntaxHighlighting__FoldingRegion*
void k_syntaxhighlighting__foldingregion_delete(void* self);

/// https://api.kde.org/ksyntaxhighlighting-foldingregion.html#types

typedef enum {
    KSYNTAXHIGHLIGHTING_FOLDINGREGION_TYPE_NONE = 0,
    KSYNTAXHIGHLIGHTING_FOLDINGREGION_TYPE_BEGIN = 1,
    KSYNTAXHIGHLIGHTING_FOLDINGREGION_TYPE_END = 2
} KSyntaxHighlighting__FoldingRegion__Type;

#endif
