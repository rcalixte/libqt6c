#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBLINERANGE_H
#define SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBLINERANGE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/ktexteditor-linerange.html

/// k_texteditor__linerange_new constructs a new KTextEditor::LineRange object.
///
/// @param other KTextEditor__LineRange*
KTextEditor__LineRange* k_texteditor__linerange_new(void* other);

/// k_texteditor__linerange_new2 constructs a new KTextEditor::LineRange object and invalidates the source KTextEditor::LineRange object.
///
/// @param other KTextEditor__LineRange*
KTextEditor__LineRange* k_texteditor__linerange_new2(void* other);

/// k_texteditor__linerange_new3 constructs a new KTextEditor::LineRange object.
///
KTextEditor__LineRange* k_texteditor__linerange_new3();

/// k_texteditor__linerange_new4 constructs a new KTextEditor::LineRange object.
///
/// @param start int
/// @param end int
KTextEditor__LineRange* k_texteditor__linerange_new4(int start, int end);

/// k_texteditor__linerange_new5 constructs a new KTextEditor::LineRange object.
///
/// @param param1 KTextEditor__LineRange*
KTextEditor__LineRange* k_texteditor__linerange_new5(void* param1);

/// k_texteditor__linerange_copy_assign shallow copies `other` into `self`.
///
/// @param self KTextEditor__LineRange*
/// @param other KTextEditor__LineRange*
void k_texteditor__linerange_copy_assign(void* self, void* other);

/// k_texteditor__linerange_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self KTextEditor__LineRange*
/// @param other KTextEditor__LineRange*
void k_texteditor__linerange_move_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#isValid)
///
/// @param self KTextEditor__LineRange*
bool k_texteditor__linerange_is_valid(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#invalid)
///
KTextEditor__LineRange* k_texteditor__linerange_invalid();

/// [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEditor__LineRange*
const char* k_texteditor__linerange_to_string(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#start)
///
/// @param self KTextEditor__LineRange*
int32_t k_texteditor__linerange_start(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#end)
///
/// @param self KTextEditor__LineRange*
int32_t k_texteditor__linerange_end(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#setRange)
///
/// @param self KTextEditor__LineRange*
/// @param range KTextEditor__LineRange*
void k_texteditor__linerange_set_range(void* self, void* range);

/// [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#setRange)
///
/// @param self KTextEditor__LineRange*
/// @param start int
/// @param end int
void k_texteditor__linerange_set_range2(void* self, int start, int end);

/// [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#setBothLines)
///
/// @param self KTextEditor__LineRange*
/// @param line int
void k_texteditor__linerange_set_both_lines(void* self, int line);

/// [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#setStart)
///
/// @param self KTextEditor__LineRange*
/// @param start int
void k_texteditor__linerange_set_start(void* self, int start);

/// [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#setEnd)
///
/// @param self KTextEditor__LineRange*
/// @param end int
void k_texteditor__linerange_set_end(void* self, int end);

/// [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#expandToRange)
///
/// @param self KTextEditor__LineRange*
/// @param range KTextEditor__LineRange*
bool k_texteditor__linerange_expand_to_range(void* self, void* range);

/// [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#confineToRange)
///
/// @param self KTextEditor__LineRange*
/// @param range KTextEditor__LineRange*
bool k_texteditor__linerange_confine_to_range(void* self, void* range);

/// [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#onSingleLine)
///
/// @param self KTextEditor__LineRange*
bool k_texteditor__linerange_on_single_line(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#numberOfLines)
///
/// @param self KTextEditor__LineRange*
int32_t k_texteditor__linerange_number_of_lines(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#contains)
///
/// @param self KTextEditor__LineRange*
/// @param range KTextEditor__LineRange*
bool k_texteditor__linerange_contains(void* self, void* range);

/// [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#containsLine)
///
/// @param self KTextEditor__LineRange*
/// @param line int
bool k_texteditor__linerange_contains_line(void* self, int line);

/// [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#overlaps)
///
/// @param self KTextEditor__LineRange*
/// @param range KTextEditor__LineRange*
bool k_texteditor__linerange_overlaps(void* self, void* range);

/// [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#overlapsLine)
///
/// @param self KTextEditor__LineRange*
/// @param line int
bool k_texteditor__linerange_overlaps_line(void* self, int line);

/// [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#intersect)
///
/// @param self KTextEditor__LineRange*
/// @param range KTextEditor__LineRange*
KTextEditor__LineRange* k_texteditor__linerange_intersect(void* self, void* range);

/// [Upstream resources](https://api.kde.org/ktexteditor-linerange.html#encompass)
///
/// @param self KTextEditor__LineRange*
/// @param range KTextEditor__LineRange*
KTextEditor__LineRange* k_texteditor__linerange_encompass(void* self, void* range);

/// Delete this object from C++ memory.
///
/// @param self KTextEditor__LineRange*
void k_texteditor__linerange_delete(void* self);

/// https://api.kde.org/ktexteditor.html
#endif
