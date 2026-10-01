#pragma once
#ifndef EXTRAS_KTEXTEDITOR_LIBRANGE_H
#define EXTRAS_KTEXTEDITOR_LIBRANGE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html)

/// k_texteditor__range_new constructs a new KTextEditor::Range object.
///
KTextEditor__Range* k_texteditor__range_new();

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html)

/// k_texteditor__range_new2 constructs a new KTextEditor::Range object.
///
/// @param other KTextEditor__Range*
///
KTextEditor__Range* k_texteditor__range_new2(const void* other);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html)

/// k_texteditor__range_new3 constructs a new KTextEditor::Range object and invalidates the source KTextEditor::Range object.
///
/// @param other KTextEditor__Range*
///
KTextEditor__Range* k_texteditor__range_new3(void* other);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html)

/// k_texteditor__range_new4 constructs a new KTextEditor::Range object.
///
/// @param start KTextEditor__Cursor*
/// @param end KTextEditor__Cursor*
///
KTextEditor__Range* k_texteditor__range_new4(void* start, void* end);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html)

/// k_texteditor__range_new5 constructs a new KTextEditor::Range object.
///
/// @param start KTextEditor__Cursor*
/// @param width int
///
KTextEditor__Range* k_texteditor__range_new5(void* start, int width);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html)

/// k_texteditor__range_new6 constructs a new KTextEditor::Range object.
///
/// @param start KTextEditor__Cursor*
/// @param endLine int
/// @param endColumn int
///
KTextEditor__Range* k_texteditor__range_new6(void* start, int endLine, int endColumn);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html)

/// k_texteditor__range_new7 constructs a new KTextEditor::Range object.
///
/// @param startLine int
/// @param startColumn int
/// @param endLine int
/// @param endColumn int
///
KTextEditor__Range* k_texteditor__range_new7(int startLine, int startColumn, int endLine, int endColumn);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html)

/// k_texteditor__range_new8 constructs a new KTextEditor::Range object.
///
/// @param param1 KTextEditor__Range*
///
KTextEditor__Range* k_texteditor__range_new8(const void* param1);

/// k_texteditor__range_copy_assign shallow copies `other` into `self`.
///
/// @param self KTextEditor__Range*
/// @param other KTextEditor__Range*
///
void k_texteditor__range_copy_assign(void* self, void* other);

/// k_texteditor__range_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self KTextEditor__Range*
/// @param other KTextEditor__Range*
///
void k_texteditor__range_move_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html#isValid)
///
/// @param self const KTextEditor__Range*
///
bool k_texteditor__range_is_valid(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html#invalid)
///
KTextEditor__Range* k_texteditor__range_invalid();

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KTextEditor__Range*
///
const char* k_texteditor__range_to_string(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html#fromString)
///
/// @param str const char*
///
KTextEditor__Range* k_texteditor__range_from_string(const char* str);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html#start)
///
/// @param self const KTextEditor__Range*
///
KTextEditor__Cursor* k_texteditor__range_start(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html#end)
///
/// @param self const KTextEditor__Range*
///
KTextEditor__Cursor* k_texteditor__range_end(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html#toLineRange)
///
/// @param self const KTextEditor__Range*
///
KTextEditor__LineRange* k_texteditor__range_to_line_range(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html#setBothLines)
///
/// @param self KTextEditor__Range*
/// @param line int
///
void k_texteditor__range_set_both_lines(void* self, int line);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html#setBothColumns)
///
/// @param self KTextEditor__Range*
/// @param column int
///
void k_texteditor__range_set_both_columns(void* self, int column);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html#setRange)
///
/// @param self KTextEditor__Range*
/// @param range KTextEditor__Range*
///
void k_texteditor__range_set_range(void* self, void* range);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html#setRange)
///
/// @param self KTextEditor__Range*
/// @param start KTextEditor__Cursor*
/// @param end KTextEditor__Cursor*
///
void k_texteditor__range_set_range2(void* self, void* start, void* end);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html#setStart)
///
/// @param self KTextEditor__Range*
/// @param start KTextEditor__Cursor*
///
void k_texteditor__range_set_start(void* self, void* start);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html#setEnd)
///
/// @param self KTextEditor__Range*
/// @param end KTextEditor__Cursor*
///
void k_texteditor__range_set_end(void* self, void* end);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html#expandToRange)
///
/// @param self KTextEditor__Range*
/// @param range KTextEditor__Range*
///
bool k_texteditor__range_expand_to_range(void* self, void* range);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html#confineToRange)
///
/// @param self KTextEditor__Range*
/// @param range KTextEditor__Range*
///
bool k_texteditor__range_confine_to_range(void* self, void* range);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html#onSingleLine)
///
/// @param self const KTextEditor__Range*
///
bool k_texteditor__range_on_single_line(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html#numberOfLines)
///
/// @param self const KTextEditor__Range*
///
int32_t k_texteditor__range_number_of_lines(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html#columnWidth)
///
/// @param self const KTextEditor__Range*
///
int32_t k_texteditor__range_column_width(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html#isEmpty)
///
/// @param self const KTextEditor__Range*
///
bool k_texteditor__range_is_empty(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html#contains)
///
/// @param self const KTextEditor__Range*
/// @param range KTextEditor__Range*
///
bool k_texteditor__range_contains(const void* self, void* range);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html#contains)
///
/// @param self const KTextEditor__Range*
/// @param cursor KTextEditor__Cursor*
///
bool k_texteditor__range_contains2(const void* self, void* cursor);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html#containsLine)
///
/// @param self const KTextEditor__Range*
/// @param line int
///
bool k_texteditor__range_contains_line(const void* self, int line);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html#containsColumn)
///
/// @param self const KTextEditor__Range*
/// @param column int
///
bool k_texteditor__range_contains_column(const void* self, int column);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html#overlaps)
///
/// @param self const KTextEditor__Range*
/// @param range KTextEditor__Range*
///
bool k_texteditor__range_overlaps(const void* self, void* range);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html#overlapsLine)
///
/// @param self const KTextEditor__Range*
/// @param line int
///
bool k_texteditor__range_overlaps_line(const void* self, int line);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html#overlapsColumn)
///
/// @param self const KTextEditor__Range*
/// @param column int
///
bool k_texteditor__range_overlaps_column(const void* self, int column);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html#boundaryAtCursor)
///
/// @param self const KTextEditor__Range*
/// @param cursor KTextEditor__Cursor*
///
bool k_texteditor__range_boundary_at_cursor(const void* self, void* cursor);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html#intersect)
///
/// @param self const KTextEditor__Range*
/// @param range KTextEditor__Range*
///
KTextEditor__Range* k_texteditor__range_intersect(const void* self, void* range);

/// [Upstream resources](https://api.kde.org/ktexteditor-range.html#encompass)
///
/// @param self const KTextEditor__Range*
/// @param range KTextEditor__Range*
///
KTextEditor__Range* k_texteditor__range_encompass(const void* self, void* range);

/// Delete this object from C++ memory.
///
/// @param self KTextEditor__Range*
///
void k_texteditor__range_delete(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor.html)
#endif
