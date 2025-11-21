#pragma once
#ifndef SRC_QT6C_LIBQTOOLTIP_H
#define SRC_QT6C_LIBQTOOLTIP_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qtooltip.html

/// q_tooltip_new constructs a new QToolTip object.
///
/// @param other QToolTip*
QToolTip* q_tooltip_new(void* other);

/// q_tooltip_new2 constructs a new QToolTip object and invalidates the source QToolTip object.
///
/// @param other QToolTip*
QToolTip* q_tooltip_new2(void* other);

/// q_tooltip_copy_assign shallow copies `other` into `self`.
///
/// @param self QToolTip*
/// @param other QToolTip*
void q_tooltip_copy_assign(void* self, void* other);

/// q_tooltip_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QToolTip*
/// @param other QToolTip*
void q_tooltip_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#showText)
///
/// @param pos QPoint*
/// @param text const char*
void q_tooltip_show_text(void* pos, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#hideText)
///
void q_tooltip_hide_text();

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#isVisible)
///
bool q_tooltip_is_visible();

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#text)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_tooltip_text();

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#palette)
///
QPalette* q_tooltip_palette();

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#setPalette)
///
/// @param palette QPalette*
void q_tooltip_set_palette(void* palette);

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#font)
///
QFont* q_tooltip_font();

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#setFont)
///
/// @param font QFont*
void q_tooltip_set_font(void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#showText)
///
/// @param pos QPoint*
/// @param text const char*
/// @param w QWidget*
void q_tooltip_show_text3(void* pos, const char* text, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#showText)
///
/// @param pos QPoint*
/// @param text const char*
/// @param w QWidget*
/// @param rect QRect*
void q_tooltip_show_text4(void* pos, const char* text, void* w, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#showText)
///
/// @param pos QPoint*
/// @param text const char*
/// @param w QWidget*
/// @param rect QRect*
/// @param msecShowTime int
void q_tooltip_show_text5(void* pos, const char* text, void* w, void* rect, int msecShowTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qtooltip.html#dtor.QToolTip)
///
/// Delete this object from C++ memory.
///
/// @param self QToolTip*
void q_tooltip_delete(void* self);

#endif
