#pragma once
#ifndef EXTRAS_KTEXTEDITOR_LIBMOVINGCURSOR_H
#define EXTRAS_KTEXTEDITOR_LIBMOVINGCURSOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html)

/// [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#setInsertBehavior)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self KTextEditor__MovingCursor*
/// @param insertBehavior enum KTextEditor__MovingCursor__InsertBehavior
///
void k_texteditor__movingcursor_set_insert_behavior(void* self, int32_t insertBehavior);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#insertBehavior)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const KTextEditor__MovingCursor*
///
/// @return enum KTextEditor__MovingCursor__InsertBehavior
///
int32_t k_texteditor__movingcursor_insert_behavior(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#document)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const KTextEditor__MovingCursor*
///
KTextEditor__Document* k_texteditor__movingcursor_document(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#range)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const KTextEditor__MovingCursor*
///
KTextEditor__MovingRange* k_texteditor__movingcursor_range(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#setPosition)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self KTextEditor__MovingCursor*
/// @param position KTextEditor__Cursor*
///
void k_texteditor__movingcursor_set_position(void* self, void* position);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#line)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const KTextEditor__MovingCursor*
///
int32_t k_texteditor__movingcursor_line(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#column)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const KTextEditor__MovingCursor*
///
int32_t k_texteditor__movingcursor_column(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#isValid)
///
/// @param self const KTextEditor__MovingCursor*
///
bool k_texteditor__movingcursor_is_valid(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#isValidTextPosition)
///
/// @param self const KTextEditor__MovingCursor*
///
bool k_texteditor__movingcursor_is_valid_text_position(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#setPosition)
///
/// @param self KTextEditor__MovingCursor*
/// @param line int
/// @param column int
///
void k_texteditor__movingcursor_set_position2(void* self, int line, int column);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#setLine)
///
/// @param self KTextEditor__MovingCursor*
/// @param line int
///
void k_texteditor__movingcursor_set_line(void* self, int line);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#setColumn)
///
/// @param self KTextEditor__MovingCursor*
/// @param column int
///
void k_texteditor__movingcursor_set_column(void* self, int column);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#atStartOfLine)
///
/// @param self const KTextEditor__MovingCursor*
///
bool k_texteditor__movingcursor_at_start_of_line(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#atEndOfLine)
///
/// @param self const KTextEditor__MovingCursor*
///
bool k_texteditor__movingcursor_at_end_of_line(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#atStartOfDocument)
///
/// @param self const KTextEditor__MovingCursor*
///
bool k_texteditor__movingcursor_at_start_of_document(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#atEndOfDocument)
///
/// @param self const KTextEditor__MovingCursor*
///
bool k_texteditor__movingcursor_at_end_of_document(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#gotoNextLine)
///
/// @param self KTextEditor__MovingCursor*
///
bool k_texteditor__movingcursor_goto_next_line(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#gotoPreviousLine)
///
/// @param self KTextEditor__MovingCursor*
///
bool k_texteditor__movingcursor_goto_previous_line(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#move)
///
/// @param self KTextEditor__MovingCursor*
/// @param chars int
///
bool k_texteditor__movingcursor_move(void* self, int chars);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#toCursor)
///
/// @param self const KTextEditor__MovingCursor*
///
const KTextEditor__Cursor* k_texteditor__movingcursor_to_cursor(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#operator-KTextEditor-3a-3aCursor)
///
/// @param self const KTextEditor__MovingCursor*
///
KTextEditor__Cursor* k_texteditor__movingcursor_to_cursor2(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-movingcursor.html#move)
///
/// @param self KTextEditor__MovingCursor*
/// @param chars int
/// @param wrapBehavior enum KTextEditor__MovingCursor__WrapBehavior
///
bool k_texteditor__movingcursor_move2(void* self, int chars, int32_t wrapBehavior);

/// Delete this object from C++ memory.
///
/// @param self KTextEditor__MovingCursor*
///
void k_texteditor__movingcursor_delete(void* self);

/// [Upstream resources](https://api.kde.org/movingcursor.html#public-types)

typedef enum {
    KTEXTEDITOR_MOVINGCURSOR_INSERTBEHAVIOR_STAYONINSERT = 0,
    KTEXTEDITOR_MOVINGCURSOR_INSERTBEHAVIOR_MOVEONINSERT = 1
} KTextEditor__MovingCursor__InsertBehavior;

/// [Upstream resources](https://api.kde.org/movingcursor.html#public-types)

typedef enum {
    KTEXTEDITOR_MOVINGCURSOR_WRAPBEHAVIOR_WRAP = 0,
    KTEXTEDITOR_MOVINGCURSOR_WRAPBEHAVIOR_NOWRAP = 1
} KTextEditor__MovingCursor__WrapBehavior;

#endif
