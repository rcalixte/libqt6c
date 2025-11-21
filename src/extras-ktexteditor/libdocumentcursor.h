#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBDOCUMENTCURSOR_H
#define SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBDOCUMENTCURSOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/ktexteditor-documentcursor.html

/// k_texteditor__documentcursor_new constructs a new KTextEditor::DocumentCursor object.
///
/// @param document KTextEditor__Document*
KTextEditor__DocumentCursor* k_texteditor__documentcursor_new(void* document);

/// k_texteditor__documentcursor_new2 constructs a new KTextEditor::DocumentCursor object.
///
/// @param document KTextEditor__Document*
/// @param position KTextEditor__Cursor*
KTextEditor__DocumentCursor* k_texteditor__documentcursor_new2(void* document, void* position);

/// k_texteditor__documentcursor_new3 constructs a new KTextEditor::DocumentCursor object.
///
/// @param document KTextEditor__Document*
/// @param line int
/// @param column int
KTextEditor__DocumentCursor* k_texteditor__documentcursor_new3(void* document, int line, int column);

/// k_texteditor__documentcursor_new4 constructs a new KTextEditor::DocumentCursor object.
///
/// @param other KTextEditor__DocumentCursor*
KTextEditor__DocumentCursor* k_texteditor__documentcursor_new4(void* other);

/// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#document)
///
/// @param self KTextEditor__DocumentCursor*
KTextEditor__Document* k_texteditor__documentcursor_document(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#setPosition)
///
/// @param self KTextEditor__DocumentCursor*
/// @param position KTextEditor__Cursor*
void k_texteditor__documentcursor_set_position(void* self, void* position);

/// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#line)
///
/// @param self KTextEditor__DocumentCursor*
int32_t k_texteditor__documentcursor_line(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#column)
///
/// @param self KTextEditor__DocumentCursor*
int32_t k_texteditor__documentcursor_column(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#isValid)
///
/// @param self KTextEditor__DocumentCursor*
bool k_texteditor__documentcursor_is_valid(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#isValidTextPosition)
///
/// @param self KTextEditor__DocumentCursor*
bool k_texteditor__documentcursor_is_valid_text_position(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#makeValid)
///
/// @param self KTextEditor__DocumentCursor*
void k_texteditor__documentcursor_make_valid(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#setPosition)
///
/// @param self KTextEditor__DocumentCursor*
/// @param line int
/// @param column int
void k_texteditor__documentcursor_set_position2(void* self, int line, int column);

/// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#setLine)
///
/// @param self KTextEditor__DocumentCursor*
/// @param line int
void k_texteditor__documentcursor_set_line(void* self, int line);

/// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#setColumn)
///
/// @param self KTextEditor__DocumentCursor*
/// @param column int
void k_texteditor__documentcursor_set_column(void* self, int column);

/// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#atStartOfLine)
///
/// @param self KTextEditor__DocumentCursor*
bool k_texteditor__documentcursor_at_start_of_line(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#atEndOfLine)
///
/// @param self KTextEditor__DocumentCursor*
bool k_texteditor__documentcursor_at_end_of_line(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#atStartOfDocument)
///
/// @param self KTextEditor__DocumentCursor*
bool k_texteditor__documentcursor_at_start_of_document(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#atEndOfDocument)
///
/// @param self KTextEditor__DocumentCursor*
bool k_texteditor__documentcursor_at_end_of_document(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#gotoNextLine)
///
/// @param self KTextEditor__DocumentCursor*
bool k_texteditor__documentcursor_goto_next_line(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#gotoPreviousLine)
///
/// @param self KTextEditor__DocumentCursor*
bool k_texteditor__documentcursor_goto_previous_line(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#move)
///
/// @param self KTextEditor__DocumentCursor*
/// @param chars int
bool k_texteditor__documentcursor_move(void* self, int chars);

/// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#toCursor)
///
/// @param self KTextEditor__DocumentCursor*
KTextEditor__Cursor* k_texteditor__documentcursor_to_cursor(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#operator-eq)
///
/// @param self KTextEditor__DocumentCursor*
/// @param other KTextEditor__DocumentCursor*
void k_texteditor__documentcursor_operator_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/ktexteditor-documentcursor.html#move)
///
/// @param self KTextEditor__DocumentCursor*
/// @param chars int
/// @param wrapBehavior enum KTextEditor__DocumentCursor__WrapBehavior
bool k_texteditor__documentcursor_move2(void* self, int chars, int32_t wrapBehavior);

/// Delete this object from C++ memory.
///
/// @param self KTextEditor__DocumentCursor*
void k_texteditor__documentcursor_delete(void* self);

/// https://api.kde.org/documentcursor.html#types

typedef enum {
    KTEXTEDITOR_DOCUMENTCURSOR_WRAPBEHAVIOR_WRAP = 0,
    KTEXTEDITOR_DOCUMENTCURSOR_WRAPBEHAVIOR_NOWRAP = 1
} KTextEditor__DocumentCursor__WrapBehavior;

#endif
