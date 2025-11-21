#pragma once
#ifndef SRC_QT6C_LIBQWHATSTHIS_H
#define SRC_QT6C_LIBQWHATSTHIS_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qwhatsthis.html

/// q_whatsthis_new constructs a new QWhatsThis object.
///
/// @param other QWhatsThis*
QWhatsThis* q_whatsthis_new(void* other);

/// q_whatsthis_new2 constructs a new QWhatsThis object and invalidates the source QWhatsThis object.
///
/// @param other QWhatsThis*
QWhatsThis* q_whatsthis_new2(void* other);

/// q_whatsthis_copy_assign shallow copies `other` into `self`.
///
/// @param self QWhatsThis*
/// @param other QWhatsThis*
void q_whatsthis_copy_assign(void* self, void* other);

/// q_whatsthis_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QWhatsThis*
/// @param other QWhatsThis*
void q_whatsthis_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#enterWhatsThisMode)
///
void q_whatsthis_enter_whats_this_mode();

/// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#inWhatsThisMode)
///
bool q_whatsthis_in_whats_this_mode();

/// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#leaveWhatsThisMode)
///
void q_whatsthis_leave_whats_this_mode();

/// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#showText)
///
/// @param pos QPoint*
/// @param text const char*
void q_whatsthis_show_text(void* pos, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#hideText)
///
void q_whatsthis_hide_text();

/// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#createAction)
///
QAction* q_whatsthis_create_action();

/// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#showText)
///
/// @param pos QPoint*
/// @param text const char*
/// @param w QWidget*
void q_whatsthis_show_text3(void* pos, const char* text, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#createAction)
///
/// @param parent QObject*
QAction* q_whatsthis_create_action1(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#dtor.QWhatsThis)
///
/// Delete this object from C++ memory.
///
/// @param self QWhatsThis*
void q_whatsthis_delete(void* self);

#endif
