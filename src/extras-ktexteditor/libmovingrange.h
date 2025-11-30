#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBMOVINGRANGE_H
#define SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBMOVINGRANGE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/ktexteditor-movingrange.html

/// [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#setInsertBehaviors)
///
/// @param self KTextEditor__MovingRange*
/// @param insertBehaviors flag of enum KTextEditor__MovingRange__InsertBehavior
void k_texteditor__movingrange_set_insert_behaviors(void* self, int32_t insertBehaviors);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#insertBehaviors)
///
/// @param self KTextEditor__MovingRange*
///
/// @return flag of enum KTextEditor__MovingRange__InsertBehavior
int32_t k_texteditor__movingrange_insert_behaviors(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#setEmptyBehavior)
///
/// @param self KTextEditor__MovingRange*
/// @param emptyBehavior enum KTextEditor__MovingRange__EmptyBehavior
void k_texteditor__movingrange_set_empty_behavior(void* self, int32_t emptyBehavior);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#emptyBehavior)
///
/// @param self KTextEditor__MovingRange*
///
/// @return enum KTextEditor__MovingRange__EmptyBehavior
int32_t k_texteditor__movingrange_empty_behavior(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#document)
///
/// @param self KTextEditor__MovingRange*
KTextEditor__Document* k_texteditor__movingrange_document(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#setRange)
///
/// @param self KTextEditor__MovingRange*
/// @param range KTextEditor__Range*
void k_texteditor__movingrange_set_range(void* self, void* range);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#start)
///
/// @param self KTextEditor__MovingRange*
const KTextEditor__MovingCursor* k_texteditor__movingrange_start(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#end)
///
/// @param self KTextEditor__MovingRange*
const KTextEditor__MovingCursor* k_texteditor__movingrange_end(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#view)
///
/// @param self KTextEditor__MovingRange*
KTextEditor__View* k_texteditor__movingrange_view(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#setView)
///
/// @param self KTextEditor__MovingRange*
/// @param view KTextEditor__View*
void k_texteditor__movingrange_set_view(void* self, void* view);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#attributeOnlyForViews)
///
/// @param self KTextEditor__MovingRange*
bool k_texteditor__movingrange_attribute_only_for_views(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#setAttributeOnlyForViews)
///
/// @param self KTextEditor__MovingRange*
/// @param onlyForViews bool
void k_texteditor__movingrange_set_attribute_only_for_views(void* self, bool onlyForViews);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#feedback)
///
/// @param self KTextEditor__MovingRange*
KTextEditor__MovingRangeFeedback* k_texteditor__movingrange_feedback(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#setFeedback)
///
/// @param self KTextEditor__MovingRange*
/// @param feedback KTextEditor__MovingRangeFeedback*
void k_texteditor__movingrange_set_feedback(void* self, void* feedback);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#zDepth)
///
/// @param self KTextEditor__MovingRange*
double k_texteditor__movingrange_z_depth(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#setZDepth)
///
/// @param self KTextEditor__MovingRange*
/// @param zDepth double
void k_texteditor__movingrange_set_z_depth(void* self, double zDepth);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#setRange)
///
/// @param self KTextEditor__MovingRange*
/// @param start KTextEditor__Cursor*
/// @param end KTextEditor__Cursor*
void k_texteditor__movingrange_set_range4(void* self, void* start, void* end);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#toRange)
///
/// @param self KTextEditor__MovingRange*
const KTextEditor__Range* k_texteditor__movingrange_to_range(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#toLineRange)
///
/// @param self KTextEditor__MovingRange*
KTextEditor__LineRange* k_texteditor__movingrange_to_line_range(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#isEmpty)
///
/// @param self KTextEditor__MovingRange*
bool k_texteditor__movingrange_is_empty(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#contains)
///
/// @param self KTextEditor__MovingRange*
/// @param range KTextEditor__Range*
bool k_texteditor__movingrange_contains(void* self, void* range);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#contains)
///
/// @param self KTextEditor__MovingRange*
/// @param cursor KTextEditor__Cursor*
bool k_texteditor__movingrange_contains2(void* self, void* cursor);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#containsLine)
///
/// @param self KTextEditor__MovingRange*
/// @param line int
bool k_texteditor__movingrange_contains_line(void* self, int line);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#containsColumn)
///
/// @param self KTextEditor__MovingRange*
/// @param column int
bool k_texteditor__movingrange_contains_column(void* self, int column);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#overlaps)
///
/// @param self KTextEditor__MovingRange*
/// @param range KTextEditor__Range*
bool k_texteditor__movingrange_overlaps(void* self, void* range);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#overlapsLine)
///
/// @param self KTextEditor__MovingRange*
/// @param line int
bool k_texteditor__movingrange_overlaps_line(void* self, int line);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#overlapsColumn)
///
/// @param self KTextEditor__MovingRange*
/// @param column int
bool k_texteditor__movingrange_overlaps_column(void* self, int column);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#onSingleLine)
///
/// @param self KTextEditor__MovingRange*
bool k_texteditor__movingrange_on_single_line(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingrange.html#numberOfLines)
///
/// @param self KTextEditor__MovingRange*
int32_t k_texteditor__movingrange_number_of_lines(void* self);

/// Delete this object from C++ memory.
///
/// @param self KTextEditor__MovingRange*
void k_texteditor__movingrange_delete(void* self);

/// https://api.kde.org/movingrange.html#types

typedef enum {
    KTEXTEDITOR_MOVINGRANGE_INSERTBEHAVIOR_DONOTEXPAND = 0,
    KTEXTEDITOR_MOVINGRANGE_INSERTBEHAVIOR_EXPANDLEFT = 1,
    KTEXTEDITOR_MOVINGRANGE_INSERTBEHAVIOR_EXPANDRIGHT = 2
} KTextEditor__MovingRange__InsertBehavior;

typedef enum {
    KTEXTEDITOR_MOVINGRANGE_EMPTYBEHAVIOR_ALLOWEMPTY = 0,
    KTEXTEDITOR_MOVINGRANGE_EMPTYBEHAVIOR_INVALIDATEIFEMPTY = 1
} KTextEditor__MovingRange__EmptyBehavior;

#endif
