#pragma once
#ifndef SRC_EXTRAS_KICONTHEMESQT6C_LIBKICONCOLORS_H
#define SRC_EXTRAS_KICONTHEMESQT6C_LIBKICONCOLORS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kiconcolors.html

/// k_iconcolors_new constructs a new KIconColors object.
///
KIconColors* k_iconcolors_new();

/// k_iconcolors_new2 constructs a new KIconColors object.
///
/// @param color QColor*
KIconColors* k_iconcolors_new2(void* color);

/// k_iconcolors_new3 constructs a new KIconColors object.
///
/// @param palette QPalette*
KIconColors* k_iconcolors_new3(void* palette);

/// k_iconcolors_new4 constructs a new KIconColors object.
///
/// @param other KIconColors*
KIconColors* k_iconcolors_new4(void* other);

/// [Qt documentation](https://api-staging.kde.org/kiconcolors.html#operator-eq)
///
/// @param self KIconColors*
/// @param other KIconColors*
void k_iconcolors_operator_assign(void* self, void* other);

/// [Qt documentation](https://api-staging.kde.org/kiconcolors.html#text)
///
/// @param self KIconColors*
QColor* k_iconcolors_text(void* self);

/// [Qt documentation](https://api-staging.kde.org/kiconcolors.html#highlight)
///
/// @param self KIconColors*
QColor* k_iconcolors_highlight(void* self);

/// [Qt documentation](https://api-staging.kde.org/kiconcolors.html#highlightedText)
///
/// @param self KIconColors*
QColor* k_iconcolors_highlighted_text(void* self);

/// [Qt documentation](https://api-staging.kde.org/kiconcolors.html#accent)
///
/// @param self KIconColors*
QColor* k_iconcolors_accent(void* self);

/// [Qt documentation](https://api-staging.kde.org/kiconcolors.html#background)
///
/// @param self KIconColors*
QColor* k_iconcolors_background(void* self);

/// [Qt documentation](https://api-staging.kde.org/kiconcolors.html#neutralText)
///
/// @param self KIconColors*
QColor* k_iconcolors_neutral_text(void* self);

/// [Qt documentation](https://api-staging.kde.org/kiconcolors.html#positiveText)
///
/// @param self KIconColors*
QColor* k_iconcolors_positive_text(void* self);

/// [Qt documentation](https://api-staging.kde.org/kiconcolors.html#negativeText)
///
/// @param self KIconColors*
QColor* k_iconcolors_negative_text(void* self);

/// [Qt documentation](https://api-staging.kde.org/kiconcolors.html#activeText)
///
/// @param self KIconColors*
QColor* k_iconcolors_active_text(void* self);

/// [Qt documentation](https://api-staging.kde.org/kiconcolors.html#setText)
///
/// @param self KIconColors*
/// @param color QColor*
void k_iconcolors_set_text(void* self, void* color);

/// [Qt documentation](https://api-staging.kde.org/kiconcolors.html#setHighlight)
///
/// @param self KIconColors*
/// @param color QColor*
void k_iconcolors_set_highlight(void* self, void* color);

/// [Qt documentation](https://api-staging.kde.org/kiconcolors.html#setHighlightedText)
///
/// @param self KIconColors*
/// @param color QColor*
void k_iconcolors_set_highlighted_text(void* self, void* color);

/// [Qt documentation](https://api-staging.kde.org/kiconcolors.html#setAccent)
///
/// @param self KIconColors*
/// @param color QColor*
void k_iconcolors_set_accent(void* self, void* color);

/// [Qt documentation](https://api-staging.kde.org/kiconcolors.html#setBackground)
///
/// @param self KIconColors*
/// @param color QColor*
void k_iconcolors_set_background(void* self, void* color);

/// [Qt documentation](https://api-staging.kde.org/kiconcolors.html#setNeutralText)
///
/// @param self KIconColors*
/// @param color QColor*
void k_iconcolors_set_neutral_text(void* self, void* color);

/// [Qt documentation](https://api-staging.kde.org/kiconcolors.html#setPositiveText)
///
/// @param self KIconColors*
/// @param color QColor*
void k_iconcolors_set_positive_text(void* self, void* color);

/// [Qt documentation](https://api-staging.kde.org/kiconcolors.html#setNegativeText)
///
/// @param self KIconColors*
/// @param color QColor*
void k_iconcolors_set_negative_text(void* self, void* color);

/// [Qt documentation](https://api-staging.kde.org/kiconcolors.html#setActiveText)
///
/// @param self KIconColors*
/// @param color QColor*
void k_iconcolors_set_active_text(void* self, void* color);

/// [Qt documentation](https://api-staging.kde.org/kiconcolors.html#dtor.KIconColors)
///
/// Delete this object from C++ memory.
///
/// @param self KIconColors*
void k_iconcolors_delete(void* self);

#endif
