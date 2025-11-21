#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBMOVINGCURSOR_H
#define SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBMOVINGCURSOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/ktexteditor-movingcursor.html

/// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#setInsertBehavior)
///
/// @param self KTextEditor__MovingCursor*
/// @param insertBehavior enum KTextEditor__MovingCursor__InsertBehavior
void k_texteditor__movingcursor_set_insert_behavior(void* self, int32_t insertBehavior);

/// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#insertBehavior)
///
/// @param self KTextEditor__MovingCursor*
///
/// @return enum KTextEditor__MovingCursor__InsertBehavior
int32_t k_texteditor__movingcursor_insert_behavior(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#document)
///
/// @param self KTextEditor__MovingCursor*
KTextEditor__Document* k_texteditor__movingcursor_document(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#range)
///
/// @param self KTextEditor__MovingCursor*
KTextEditor__MovingRange* k_texteditor__movingcursor_range(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#setPosition)
///
/// @param self KTextEditor__MovingCursor*
/// @param position KTextEditor__Cursor*
void k_texteditor__movingcursor_set_position(void* self, void* position);

/// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#line)
///
/// @param self KTextEditor__MovingCursor*
int32_t k_texteditor__movingcursor_line(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#column)
///
/// @param self KTextEditor__MovingCursor*
int32_t k_texteditor__movingcursor_column(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#isValid)
///
/// @param self KTextEditor__MovingCursor*
bool k_texteditor__movingcursor_is_valid(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#isValidTextPosition)
///
/// @param self KTextEditor__MovingCursor*
bool k_texteditor__movingcursor_is_valid_text_position(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#setPosition)
///
/// @param self KTextEditor__MovingCursor*
/// @param line int
/// @param column int
void k_texteditor__movingcursor_set_position2(void* self, int line, int column);

/// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#setLine)
///
/// @param self KTextEditor__MovingCursor*
/// @param line int
void k_texteditor__movingcursor_set_line(void* self, int line);

/// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#setColumn)
///
/// @param self KTextEditor__MovingCursor*
/// @param column int
void k_texteditor__movingcursor_set_column(void* self, int column);

/// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#atStartOfLine)
///
/// @param self KTextEditor__MovingCursor*
bool k_texteditor__movingcursor_at_start_of_line(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#atEndOfLine)
///
/// @param self KTextEditor__MovingCursor*
bool k_texteditor__movingcursor_at_end_of_line(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#atStartOfDocument)
///
/// @param self KTextEditor__MovingCursor*
bool k_texteditor__movingcursor_at_start_of_document(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#atEndOfDocument)
///
/// @param self KTextEditor__MovingCursor*
bool k_texteditor__movingcursor_at_end_of_document(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#gotoNextLine)
///
/// @param self KTextEditor__MovingCursor*
bool k_texteditor__movingcursor_goto_next_line(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#gotoPreviousLine)
///
/// @param self KTextEditor__MovingCursor*
bool k_texteditor__movingcursor_goto_previous_line(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#move)
///
/// @param self KTextEditor__MovingCursor*
/// @param chars int
bool k_texteditor__movingcursor_move(void* self, int chars);

/// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#toCursor)
///
/// @param self KTextEditor__MovingCursor*
const KTextEditor__Cursor* k_texteditor__movingcursor_to_cursor(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-movingcursor.html#move)
///
/// @param self KTextEditor__MovingCursor*
/// @param chars int
/// @param wrapBehavior enum KTextEditor__MovingCursor__WrapBehavior
bool k_texteditor__movingcursor_move2(void* self, int chars, int32_t wrapBehavior);

/// Delete this object from C++ memory.
///
/// @param self KTextEditor__MovingCursor*
void k_texteditor__movingcursor_delete(void* self);

/// https://api.kde.org/movingcursor.html#types

typedef enum {
    KTEXTEDITOR_MOVINGCURSOR_INSERTBEHAVIOR_STAYONINSERT = 0,
    KTEXTEDITOR_MOVINGCURSOR_INSERTBEHAVIOR_MOVEONINSERT = 1
} KTextEditor__MovingCursor__InsertBehavior;

typedef enum {
    KTEXTEDITOR_MOVINGCURSOR_WRAPBEHAVIOR_WRAP = 0,
    KTEXTEDITOR_MOVINGCURSOR_WRAPBEHAVIOR_NOWRAP = 1
} KTextEditor__MovingCursor__WrapBehavior;

#endif
