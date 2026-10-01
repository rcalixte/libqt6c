#pragma once
#ifndef EXTRAS_KTEXTEDITOR_LIBINLINENOTE_H
#define EXTRAS_KTEXTEDITOR_LIBINLINENOTE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ktexteditor-inlinenote.html)

/// k_texteditor__inlinenote_new constructs a new KTextEditor::InlineNote object.
///
/// @param other KTextEditor__InlineNote*
///
KTextEditor__InlineNote* k_texteditor__inlinenote_new(const void* other);

/// [Upstream resources](https://api.kde.org/ktexteditor-inlinenote.html)

/// k_texteditor__inlinenote_new2 constructs a new KTextEditor::InlineNote object and invalidates the source KTextEditor::InlineNote object.
///
/// @param other KTextEditor__InlineNote*
///
KTextEditor__InlineNote* k_texteditor__inlinenote_new2(void* other);

/// [Upstream resources](https://api.kde.org/ktexteditor-inlinenote.html#width)
///
/// @param self const KTextEditor__InlineNote*
///
double k_texteditor__inlinenote_width(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-inlinenote.html#provider)
///
/// @param self const KTextEditor__InlineNote*
///
KTextEditor__InlineNoteProvider* k_texteditor__inlinenote_provider(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-inlinenote.html#view)
///
/// @param self const KTextEditor__InlineNote*
///
const KTextEditor__View* k_texteditor__inlinenote_view(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-inlinenote.html#position)
///
/// @param self const KTextEditor__InlineNote*
///
KTextEditor__Cursor* k_texteditor__inlinenote_position(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-inlinenote.html#index)
///
/// @param self const KTextEditor__InlineNote*
///
int32_t k_texteditor__inlinenote_index(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-inlinenote.html#underMouse)
///
/// @param self const KTextEditor__InlineNote*
///
bool k_texteditor__inlinenote_under_mouse(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-inlinenote.html#font)
///
/// @param self const KTextEditor__InlineNote*
///
QFont* k_texteditor__inlinenote_font(const void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-inlinenote.html#lineHeight)
///
/// @param self const KTextEditor__InlineNote*
///
int32_t k_texteditor__inlinenote_line_height(const void* self);

/// Delete this object from C++ memory.
///
/// @param self KTextEditor__InlineNote*
///
void k_texteditor__inlinenote_delete(void* self);

#endif
