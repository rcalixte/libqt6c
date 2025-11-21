#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBINLINENOTE_H
#define SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBINLINENOTE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/ktexteditor-inlinenote.html

/// k_texteditor__inlinenote_new constructs a new KTextEditor::InlineNote object.
///
/// @param other KTextEditor__InlineNote*
KTextEditor__InlineNote* k_texteditor__inlinenote_new(void* other);

/// k_texteditor__inlinenote_new2 constructs a new KTextEditor::InlineNote object and invalidates the source KTextEditor::InlineNote object.
///
/// @param other KTextEditor__InlineNote*
KTextEditor__InlineNote* k_texteditor__inlinenote_new2(void* other);

/// [Qt documentation](https://api.kde.org/ktexteditor-inlinenote.html#width)
///
/// @param self KTextEditor__InlineNote*
double k_texteditor__inlinenote_width(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-inlinenote.html#provider)
///
/// @param self KTextEditor__InlineNote*
KTextEditor__InlineNoteProvider* k_texteditor__inlinenote_provider(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-inlinenote.html#view)
///
/// @param self KTextEditor__InlineNote*
const KTextEditor__View* k_texteditor__inlinenote_view(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-inlinenote.html#position)
///
/// @param self KTextEditor__InlineNote*
KTextEditor__Cursor* k_texteditor__inlinenote_position(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-inlinenote.html#index)
///
/// @param self KTextEditor__InlineNote*
int32_t k_texteditor__inlinenote_index(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-inlinenote.html#underMouse)
///
/// @param self KTextEditor__InlineNote*
bool k_texteditor__inlinenote_under_mouse(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-inlinenote.html#font)
///
/// @param self KTextEditor__InlineNote*
QFont* k_texteditor__inlinenote_font(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-inlinenote.html#lineHeight)
///
/// @param self KTextEditor__InlineNote*
int32_t k_texteditor__inlinenote_line_height(void* self);

/// Delete this object from C++ memory.
///
/// @param self KTextEditor__InlineNote*
void k_texteditor__inlinenote_delete(void* self);

#endif
