#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBTEXTHINTINTERFACE_H
#define SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBTEXTHINTINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/ktexteditor-texthintprovider.html

/// k_texteditor__texthintprovider_new constructs a new KTextEditor::TextHintProvider object.
///
KTextEditor__TextHintProvider* k_texteditor__texthintprovider_new();

/// [Qt documentation](https://api.kde.org/ktexteditor-texthintprovider.html#textHint)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEditor__TextHintProvider*
/// @param view KTextEditor__View*
/// @param position KTextEditor__Cursor*
const char* k_texteditor__texthintprovider_text_hint(void* self, void* view, void* position);

/// [Qt documentation](https://api.kde.org/ktexteditor-texthintprovider.html#textHint)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__TextHintProvider*
/// @param callback const char* func(KTextEditor__TextHintProvider* self, KTextEditor__View* view, KTextEditor__Cursor* position)
void k_texteditor__texthintprovider_on_text_hint(void* self, const char* (*callback)(void*, void*, void*));

/// [Qt documentation](https://api.kde.org/ktexteditor-texthintprovider.html#textHint)
///
/// Base class method implementation
///
/// @param self KTextEditor__TextHintProvider*
/// @param view KTextEditor__View*
/// @param position KTextEditor__Cursor*
const char* k_texteditor__texthintprovider_qbase_text_hint(void* self, void* view, void* position);

/// Delete this object from C++ memory.
///
/// @param self KTextEditor__TextHintProvider*
void k_texteditor__texthintprovider_delete(void* self);

#endif
