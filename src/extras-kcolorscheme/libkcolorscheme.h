#pragma once
#ifndef SRC_EXTRAS_KCOLORSCHEMEQT6C_LIBKCOLORSCHEME_H
#define SRC_EXTRAS_KCOLORSCHEMEQT6C_LIBKCOLORSCHEME_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kcolorscheme.html

/// k_colorscheme_new constructs a new KColorScheme object.
///
/// @param param1 KColorScheme*
KColorScheme* k_colorscheme_new(void* param1);

/// k_colorscheme_new2 constructs a new KColorScheme object.
///
KColorScheme* k_colorscheme_new2();

/// k_colorscheme_new3 constructs a new KColorScheme object.
///
/// @param param1 enum QPalette__ColorGroup
KColorScheme* k_colorscheme_new3(int32_t param1);

/// k_colorscheme_new4 constructs a new KColorScheme object.
///
/// @param param1 enum QPalette__ColorGroup
/// @param param2 enum KColorScheme__ColorSet
KColorScheme* k_colorscheme_new4(int32_t param1, int32_t param2);

/// [Qt documentation](https://api.kde.org/kcolorscheme.html#operator-eq)
///
/// @param self KColorScheme*
/// @param param1 KColorScheme*
void k_colorscheme_operator_assign(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/kcolorscheme.html#background)
///
/// @param self KColorScheme*
QBrush* k_colorscheme_background(void* self);

/// [Qt documentation](https://api.kde.org/kcolorscheme.html#foreground)
///
/// @param self KColorScheme*
QBrush* k_colorscheme_foreground(void* self);

/// [Qt documentation](https://api.kde.org/kcolorscheme.html#decoration)
///
/// @param self KColorScheme*
/// @param param1 enum KColorScheme__DecorationRole
QBrush* k_colorscheme_decoration(void* self, int32_t param1);

/// [Qt documentation](https://api.kde.org/kcolorscheme.html#shade)
///
/// @param self KColorScheme*
/// @param param1 enum KColorScheme__ShadeRole
QColor* k_colorscheme_shade(void* self, int32_t param1);

/// [Qt documentation](https://api.kde.org/kcolorscheme.html#contrastF)
///
double k_colorscheme_contrast_f();

/// [Qt documentation](https://api.kde.org/kcolorscheme.html#shade)
///
/// @param param1 QColor*
/// @param param2 enum KColorScheme__ShadeRole
QColor* k_colorscheme_shade2(void* param1, int32_t param2);

/// [Qt documentation](https://api.kde.org/kcolorscheme.html#shade)
///
/// @param param1 QColor*
/// @param param2 enum KColorScheme__ShadeRole
/// @param contrast double
QColor* k_colorscheme_shade3(void* param1, int32_t param2, double contrast);

/// [Qt documentation](https://api.kde.org/kcolorscheme.html#adjustBackground)
///
/// @param param1 QPalette*
void k_colorscheme_adjust_background(void* param1);

/// [Qt documentation](https://api.kde.org/kcolorscheme.html#adjustForeground)
///
/// @param param1 QPalette*
void k_colorscheme_adjust_foreground(void* param1);

/// [Qt documentation](https://api.kde.org/kcolorscheme.html#operator-eq-eq)
///
/// @param self KColorScheme*
/// @param other KColorScheme*
bool k_colorscheme_operator_equal(void* self, void* other);

/// [Qt documentation](https://api.kde.org/kcolorscheme.html#background)
///
/// @param self KColorScheme*
/// @param param1 enum KColorScheme__BackgroundRole
QBrush* k_colorscheme_background1(void* self, int32_t param1);

/// [Qt documentation](https://api.kde.org/kcolorscheme.html#foreground)
///
/// @param self KColorScheme*
/// @param param1 enum KColorScheme__ForegroundRole
QBrush* k_colorscheme_foreground1(void* self, int32_t param1);

/// [Qt documentation](https://api.kde.org/kcolorscheme.html#shade)
///
/// @param param1 QColor*
/// @param param2 enum KColorScheme__ShadeRole
/// @param contrast double
/// @param chromaAdjust double
QColor* k_colorscheme_shade4(void* param1, int32_t param2, double contrast, double chromaAdjust);

/// [Qt documentation](https://api.kde.org/kcolorscheme.html#adjustBackground)
///
/// @param param1 QPalette*
/// @param newRole enum KColorScheme__BackgroundRole
void k_colorscheme_adjust_background2(void* param1, int32_t newRole);

/// [Qt documentation](https://api.kde.org/kcolorscheme.html#adjustBackground)
///
/// @param param1 QPalette*
/// @param newRole enum KColorScheme__BackgroundRole
/// @param color enum QPalette__ColorRole
void k_colorscheme_adjust_background3(void* param1, int32_t newRole, int32_t color);

/// [Qt documentation](https://api.kde.org/kcolorscheme.html#adjustBackground)
///
/// @param param1 QPalette*
/// @param newRole enum KColorScheme__BackgroundRole
/// @param color enum QPalette__ColorRole
/// @param set enum KColorScheme__ColorSet
void k_colorscheme_adjust_background4(void* param1, int32_t newRole, int32_t color, int32_t set);

/// [Qt documentation](https://api.kde.org/kcolorscheme.html#adjustForeground)
///
/// @param param1 QPalette*
/// @param newRole enum KColorScheme__ForegroundRole
void k_colorscheme_adjust_foreground2(void* param1, int32_t newRole);

/// [Qt documentation](https://api.kde.org/kcolorscheme.html#adjustForeground)
///
/// @param param1 QPalette*
/// @param newRole enum KColorScheme__ForegroundRole
/// @param color enum QPalette__ColorRole
void k_colorscheme_adjust_foreground3(void* param1, int32_t newRole, int32_t color);

/// [Qt documentation](https://api.kde.org/kcolorscheme.html#adjustForeground)
///
/// @param param1 QPalette*
/// @param newRole enum KColorScheme__ForegroundRole
/// @param color enum QPalette__ColorRole
/// @param set enum KColorScheme__ColorSet
void k_colorscheme_adjust_foreground4(void* param1, int32_t newRole, int32_t color, int32_t set);

/// [Qt documentation](https://api.kde.org/kcolorscheme.html#dtor.KColorScheme)
///
/// Delete this object from C++ memory.
///
/// @param self KColorScheme*
void k_colorscheme_delete(void* self);

/// https://api.kde.org/kcolorscheme.html#types

typedef enum {
    KCOLORSCHEME_COLORSET_VIEW = 0,
    KCOLORSCHEME_COLORSET_WINDOW = 1,
    KCOLORSCHEME_COLORSET_BUTTON = 2,
    KCOLORSCHEME_COLORSET_SELECTION = 3,
    KCOLORSCHEME_COLORSET_TOOLTIP = 4,
    KCOLORSCHEME_COLORSET_COMPLEMENTARY = 5,
    KCOLORSCHEME_COLORSET_HEADER = 6,
    KCOLORSCHEME_COLORSET_NCOLORSETS = 7
} KColorScheme__ColorSet;

typedef enum {
    KCOLORSCHEME_BACKGROUNDROLE_NORMALBACKGROUND = 0,
    KCOLORSCHEME_BACKGROUNDROLE_ALTERNATEBACKGROUND = 1,
    KCOLORSCHEME_BACKGROUNDROLE_ACTIVEBACKGROUND = 2,
    KCOLORSCHEME_BACKGROUNDROLE_LINKBACKGROUND = 3,
    KCOLORSCHEME_BACKGROUNDROLE_VISITEDBACKGROUND = 4,
    KCOLORSCHEME_BACKGROUNDROLE_NEGATIVEBACKGROUND = 5,
    KCOLORSCHEME_BACKGROUNDROLE_NEUTRALBACKGROUND = 6,
    KCOLORSCHEME_BACKGROUNDROLE_POSITIVEBACKGROUND = 7,
    KCOLORSCHEME_BACKGROUNDROLE_NBACKGROUNDROLES = 8
} KColorScheme__BackgroundRole;

typedef enum {
    KCOLORSCHEME_FOREGROUNDROLE_NORMALTEXT = 0,
    KCOLORSCHEME_FOREGROUNDROLE_INACTIVETEXT = 1,
    KCOLORSCHEME_FOREGROUNDROLE_ACTIVETEXT = 2,
    KCOLORSCHEME_FOREGROUNDROLE_LINKTEXT = 3,
    KCOLORSCHEME_FOREGROUNDROLE_VISITEDTEXT = 4,
    KCOLORSCHEME_FOREGROUNDROLE_NEGATIVETEXT = 5,
    KCOLORSCHEME_FOREGROUNDROLE_NEUTRALTEXT = 6,
    KCOLORSCHEME_FOREGROUNDROLE_POSITIVETEXT = 7,
    KCOLORSCHEME_FOREGROUNDROLE_NFOREGROUNDROLES = 8
} KColorScheme__ForegroundRole;

typedef enum {
    KCOLORSCHEME_DECORATIONROLE_FOCUSCOLOR = 0,
    KCOLORSCHEME_DECORATIONROLE_HOVERCOLOR = 1,
    KCOLORSCHEME_DECORATIONROLE_NDECORATIONROLES = 2
} KColorScheme__DecorationRole;

typedef enum {
    KCOLORSCHEME_SHADEROLE_LIGHTSHADE = 0,
    KCOLORSCHEME_SHADEROLE_MIDLIGHTSHADE = 1,
    KCOLORSCHEME_SHADEROLE_MIDSHADE = 2,
    KCOLORSCHEME_SHADEROLE_DARKSHADE = 3,
    KCOLORSCHEME_SHADEROLE_SHADOWSHADE = 4,
    KCOLORSCHEME_SHADEROLE_NSHADEROLES = 5
} KColorScheme__ShadeRole;

#endif
