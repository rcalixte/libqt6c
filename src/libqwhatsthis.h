#pragma once
#ifndef SRCQT6C_LIBQWHATSTHIS_H
#define SRCQT6C_LIBQWHATSTHIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqaction.h"
#include "libqobject.h"
#include "libqpoint.h"
#include <string.h>
#include "libqwidget.h"

/// https://doc.qt.io/qt-6/qwhatsthis.html

/// q_whatsthis_new constructs a new QWhatsThis object.
///
/// ``` QWhatsThis* other ```
QWhatsThis* q_whatsthis_new(void* other);

/// q_whatsthis_new2 constructs a new QWhatsThis object and invalidates the source QWhatsThis object.
///
/// ``` QWhatsThis* other ```
QWhatsThis* q_whatsthis_new2(void* other);

/// q_whatsthis_copy_assign shallow copies `other` into `self`.
///
/// ``` QWhatsThis* self, QWhatsThis* other ```
void q_whatsthis_copy_assign(void* self, void* other);

/// q_whatsthis_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QWhatsThis* self, QWhatsThis* other ```
void q_whatsthis_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#enterWhatsThisMode)
///
///
void q_whatsthis_enter_whats_this_mode();

/// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#inWhatsThisMode)
///
///
bool q_whatsthis_in_whats_this_mode();

/// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#leaveWhatsThisMode)
///
///
void q_whatsthis_leave_whats_this_mode();

/// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#showText)
///
/// ``` QPoint* pos, const char* text ```
void q_whatsthis_show_text(void* pos, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#hideText)
///
///
void q_whatsthis_hide_text();

/// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#createAction)
///
///
QAction* q_whatsthis_create_action();

/// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#showText)
///
/// ``` QPoint* pos, const char* text, QWidget* w ```
void q_whatsthis_show_text3(void* pos, const char* text, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#createAction)
///
/// ``` QObject* parent ```
QAction* q_whatsthis_create_action1(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#dtor.QWhatsThis)
///
/// Delete this object from C++ memory.
///
/// ``` QWhatsThis* self ```
void q_whatsthis_delete(void* self);

#endif
