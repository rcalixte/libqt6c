#pragma once
#ifndef EXTRAS_KSYNTAXHIGHLIGHTING_LIBFOLDINGREGION_H
#define EXTRAS_KSYNTAXHIGHLIGHTING_LIBFOLDINGREGION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-foldingregion.html)

/// k_syntaxhighlighting__foldingregion_new constructs a new KSyntaxHighlighting::FoldingRegion object.
///
/// @param other KSyntaxHighlighting__FoldingRegion*
///
KSyntaxHighlighting__FoldingRegion* k_syntaxhighlighting__foldingregion_new(const void* other);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-foldingregion.html)

/// k_syntaxhighlighting__foldingregion_new2 constructs a new KSyntaxHighlighting::FoldingRegion object and invalidates the source KSyntaxHighlighting::FoldingRegion object.
///
/// @param other KSyntaxHighlighting__FoldingRegion*
///
KSyntaxHighlighting__FoldingRegion* k_syntaxhighlighting__foldingregion_new2(void* other);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-foldingregion.html)

/// k_syntaxhighlighting__foldingregion_new3 constructs a new KSyntaxHighlighting::FoldingRegion object.
///
KSyntaxHighlighting__FoldingRegion* k_syntaxhighlighting__foldingregion_new3();

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-foldingregion.html)

/// k_syntaxhighlighting__foldingregion_new4 constructs a new KSyntaxHighlighting::FoldingRegion object.
///
/// @param param1 KSyntaxHighlighting__FoldingRegion*
///
KSyntaxHighlighting__FoldingRegion* k_syntaxhighlighting__foldingregion_new4(const void* param1);

/// k_syntaxhighlighting__foldingregion_copy_assign shallow copies `other` into `self`.
///
/// @param self KSyntaxHighlighting__FoldingRegion*
/// @param other KSyntaxHighlighting__FoldingRegion*
///
void k_syntaxhighlighting__foldingregion_copy_assign(void* self, void* other);

/// k_syntaxhighlighting__foldingregion_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self KSyntaxHighlighting__FoldingRegion*
/// @param other KSyntaxHighlighting__FoldingRegion*
///
void k_syntaxhighlighting__foldingregion_move_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-foldingregion.html#operator-eq-eq)
///
/// @param self const KSyntaxHighlighting__FoldingRegion*
/// @param other KSyntaxHighlighting__FoldingRegion*
///
bool k_syntaxhighlighting__foldingregion_operator_equal(const void* self, const void* other);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-foldingregion.html#isValid)
///
/// @param self const KSyntaxHighlighting__FoldingRegion*
///
bool k_syntaxhighlighting__foldingregion_is_valid(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-foldingregion.html#id)
///
/// @param self const KSyntaxHighlighting__FoldingRegion*
///
int32_t k_syntaxhighlighting__foldingregion_id(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-foldingregion.html#type)
///
/// @param self const KSyntaxHighlighting__FoldingRegion*
///
/// @return enum KSyntaxHighlighting__FoldingRegion__Type
///
int32_t k_syntaxhighlighting__foldingregion_type(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-foldingregion.html#sibling)
///
/// @param self const KSyntaxHighlighting__FoldingRegion*
///
KSyntaxHighlighting__FoldingRegion* k_syntaxhighlighting__foldingregion_sibling(const void* self);

/// Delete this object from C++ memory.
///
/// @param self KSyntaxHighlighting__FoldingRegion*
///
void k_syntaxhighlighting__foldingregion_delete(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-foldingregion.html#public-types)

typedef enum {
    KSYNTAXHIGHLIGHTING_FOLDINGREGION_TYPE_NONE = 0,
    KSYNTAXHIGHLIGHTING_FOLDINGREGION_TYPE_BEGIN = 1,
    KSYNTAXHIGHLIGHTING_FOLDINGREGION_TYPE_END = 2
} KSyntaxHighlighting__FoldingRegion__Type;

#endif
