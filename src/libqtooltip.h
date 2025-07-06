#pragma once
#ifndef SRCQT6C_LIBQTOOLTIP_H
#define SRCQT6C_LIBQTOOLTIP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qtooltip.html

/// q_tooltip_new constructs a new QToolTip object.
///
/// ``` QToolTip* other ```
QToolTip* q_tooltip_new(void* other);

/// q_tooltip_new2 constructs a new QToolTip object and invalidates the source QToolTip object.
///
/// ``` QToolTip* other ```
QToolTip* q_tooltip_new2(void* other);

/// q_tooltip_copy_assign shallow copies `other` into `self`.
///
/// ``` QToolTip* self, QToolTip* other ```
void q_tooltip_copy_assign(void* self, void* other);

/// q_tooltip_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QToolTip* self, QToolTip* other ```
void q_tooltip_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#showText)
///
/// ``` QPoint* pos, const char* text ```
void q_tooltip_show_text(void* pos, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#hideText)
///
///
void q_tooltip_hide_text();

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#isVisible)
///
///
bool q_tooltip_is_visible();

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#text)
///
///
const char* q_tooltip_text();

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#palette)
///
///
QPalette* q_tooltip_palette();

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#setPalette)
///
/// ``` QPalette* palette ```
void q_tooltip_set_palette(void* palette);

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#font)
///
///
QFont* q_tooltip_font();

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#setFont)
///
/// ``` QFont* font ```
void q_tooltip_set_font(void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#showText)
///
/// ``` QPoint* pos, const char* text, QWidget* w ```
void q_tooltip_show_text3(void* pos, const char* text, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#showText)
///
/// ``` QPoint* pos, const char* text, QWidget* w, QRect* rect ```
void q_tooltip_show_text4(void* pos, const char* text, void* w, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#showText)
///
/// ``` QPoint* pos, const char* text, QWidget* w, QRect* rect, int msecShowTime ```
void q_tooltip_show_text5(void* pos, const char* text, void* w, void* rect, int msecShowTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#dtor.QToolTip)
///
/// Delete this object from C++ memory.
///
/// ``` QToolTip* self ```
void q_tooltip_delete(void* self);

#endif
