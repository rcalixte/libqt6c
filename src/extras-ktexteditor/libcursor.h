#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBCURSOR_H
#define SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBCURSOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ktexteditor-cursor.html)

/// k_texteditor__cursor_new constructs a new KTextEditor::Cursor object.
///
/// @param other KTextEditor__Cursor*
///
KTextEditor__Cursor* k_texteditor__cursor_new(void* other);

/// [Upstream resources](https://api.kde.org/ktexteditor-cursor.html)

/// k_texteditor__cursor_new2 constructs a new KTextEditor::Cursor object and invalidates the source KTextEditor::Cursor object.
///
/// @param other KTextEditor__Cursor*
///
KTextEditor__Cursor* k_texteditor__cursor_new2(void* other);

/// [Upstream resources](https://api.kde.org/ktexteditor-cursor.html)

/// k_texteditor__cursor_new3 constructs a new KTextEditor::Cursor object.
///
KTextEditor__Cursor* k_texteditor__cursor_new3();

/// [Upstream resources](https://api.kde.org/ktexteditor-cursor.html)

/// k_texteditor__cursor_new4 constructs a new KTextEditor::Cursor object.
///
/// @param line int
/// @param column int
///
KTextEditor__Cursor* k_texteditor__cursor_new4(int line, int column);

/// [Upstream resources](https://api.kde.org/ktexteditor-cursor.html)

/// k_texteditor__cursor_new5 constructs a new KTextEditor::Cursor object.
///
/// @param param1 KTextEditor__Cursor*
///
KTextEditor__Cursor* k_texteditor__cursor_new5(void* param1);

/// k_texteditor__cursor_copy_assign shallow copies `other` into `self`.
///
/// @param self KTextEditor__Cursor*
/// @param other KTextEditor__Cursor*
///
void k_texteditor__cursor_copy_assign(void* self, void* other);

/// k_texteditor__cursor_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self KTextEditor__Cursor*
/// @param other KTextEditor__Cursor*
///
void k_texteditor__cursor_move_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#isValid)
///
/// @param self KTextEditor__Cursor*
///
bool k_texteditor__cursor_is_valid(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#invalid)
///
KTextEditor__Cursor* k_texteditor__cursor_invalid();

/// [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#start)
///
KTextEditor__Cursor* k_texteditor__cursor_start();

/// [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KTextEditor__Cursor*
///
const char* k_texteditor__cursor_to_string(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#setPosition)
///
/// @param self KTextEditor__Cursor*
/// @param position KTextEditor__Cursor*
///
void k_texteditor__cursor_set_position(void* self, void* position);

/// [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#setPosition)
///
/// @param self KTextEditor__Cursor*
/// @param line int
/// @param column int
///
void k_texteditor__cursor_set_position2(void* self, int line, int column);

/// [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#line)
///
/// @param self KTextEditor__Cursor*
///
int32_t k_texteditor__cursor_line(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#setLine)
///
/// @param self KTextEditor__Cursor*
/// @param line int
///
void k_texteditor__cursor_set_line(void* self, int line);

/// [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#column)
///
/// @param self KTextEditor__Cursor*
///
int32_t k_texteditor__cursor_column(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#setColumn)
///
/// @param self KTextEditor__Cursor*
/// @param column int
///
void k_texteditor__cursor_set_column(void* self, int column);

/// [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#atStartOfLine)
///
/// @param self KTextEditor__Cursor*
///
bool k_texteditor__cursor_at_start_of_line(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#atStartOfDocument)
///
/// @param self KTextEditor__Cursor*
///
bool k_texteditor__cursor_at_start_of_document(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-cursor.html#position)
///
/// @param self KTextEditor__Cursor*
/// @param line int*
/// @param column int*
///
void k_texteditor__cursor_position(void* self, int* line, int* column);

/// Delete this object from C++ memory.
///
/// @param self KTextEditor__Cursor*
///
void k_texteditor__cursor_delete(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor.html)
#endif
