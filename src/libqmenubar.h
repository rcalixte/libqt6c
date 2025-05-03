#pragma once
#ifndef SRCQT6C_LIBQMENUBAR_H
#define SRCQT6C_LIBQMENUBAR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqaction.h"
#include "libqevent.h"
#include "libqanystringview.h"
#include "libqbackingstore.h"
#include "libqbindingstorage.h"
#include "libqbitmap.h"
#include "libqcursor.h"
#include "libqfont.h"
#include "libqfontinfo.h"
#include "libqfontmetrics.h"
#include "libqgraphicseffect.h"
#include "libqgraphicsproxywidget.h"
#include "libqicon.h"
#include "libqkeysequence.h"
#include "libqlayout.h"
#include "libqlocale.h"
#include "libqmargins.h"
#include "libqmenu.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpaintdevice.h"
#include "libqpaintengine.h"
#include "libqpainter.h"
#include "libqpalette.h"
#include "libqpixmap.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqregion.h"
#include "libqscreen.h"
#include "libqsize.h"
#include "libqsizepolicy.h"
#include <string.h>
#include "libqstyle.h"
#include "libqstyleoption.h"
#include "libqthread.h"
#include "libqvariant.h"
#include "libqwidget.h"
#include "libqwindow.h"

/// https://doc.qt.io/qt-6/qmenubar.html

/// q_menubar_new constructs a new QMenuBar object.
///
/// ``` QWidget* parent ```
QMenuBar* q_menubar_new(void* parent);

/// q_menubar_new2 constructs a new QMenuBar object.
///
///
QMenuBar* q_menubar_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QMenuBar* self ```
QMetaObject* q_menubar_meta_object(void* self);

/// ``` QMenuBar* self, const char* param1 ```
void* q_menubar_metacast(void* self, const char* param1);

/// ``` QMenuBar* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_menubar_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, int32_t (*slot)(QMenuBar*, enum QMetaObject__Call, int, void*) ```
void q_menubar_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QMenuBar* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_menubar_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_menubar_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#addMenu)
///
/// ``` QMenuBar* self, QMenu* menu ```
QAction* q_menubar_add_menu(void* self, void* menu);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#addMenu)
///
/// ``` QMenuBar* self, const char* title ```
QMenu* q_menubar_add_menu_with_title(void* self, const char* title);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#addMenu)
///
/// ``` QMenuBar* self, QIcon* icon, const char* title ```
QMenu* q_menubar_add_menu2(void* self, void* icon, const char* title);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#addSeparator)
///
/// ``` QMenuBar* self ```
QAction* q_menubar_add_separator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#insertSeparator)
///
/// ``` QMenuBar* self, QAction* before ```
QAction* q_menubar_insert_separator(void* self, void* before);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#insertMenu)
///
/// ``` QMenuBar* self, QAction* before, QMenu* menu ```
QAction* q_menubar_insert_menu(void* self, void* before, void* menu);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#clear)
///
/// ``` QMenuBar* self ```
void q_menubar_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#activeAction)
///
/// ``` QMenuBar* self ```
QAction* q_menubar_active_action(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#setActiveAction)
///
/// ``` QMenuBar* self, QAction* action ```
void q_menubar_set_active_action(void* self, void* action);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#setDefaultUp)
///
/// ``` QMenuBar* self, bool defaultUp ```
void q_menubar_set_default_up(void* self, bool defaultUp);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#isDefaultUp)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_default_up(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#sizeHint)
///
/// ``` QMenuBar* self ```
QSize* q_menubar_size_hint(void* self);

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, QSize* (*slot)() ```
void q_menubar_on_size_hint(void* self, QSize* (*slot)());

/// Base class method implementation
///
/// ``` QMenuBar* self ```
QSize* q_menubar_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#minimumSizeHint)
///
/// ``` QMenuBar* self ```
QSize* q_menubar_minimum_size_hint(void* self);

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, QSize* (*slot)() ```
void q_menubar_on_minimum_size_hint(void* self, QSize* (*slot)());

/// Base class method implementation
///
/// ``` QMenuBar* self ```
QSize* q_menubar_qbase_minimum_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#heightForWidth)
///
/// ``` QMenuBar* self, int param1 ```
int32_t q_menubar_height_for_width(void* self, int param1);

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, int32_t (*slot)(QMenuBar*, int) ```
void q_menubar_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QMenuBar* self, int param1 ```
int32_t q_menubar_qbase_height_for_width(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#actionGeometry)
///
/// ``` QMenuBar* self, QAction* param1 ```
QRect* q_menubar_action_geometry(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#actionAt)
///
/// ``` QMenuBar* self, QPoint* param1 ```
QAction* q_menubar_action_at(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#setCornerWidget)
///
/// ``` QMenuBar* self, QWidget* w ```
void q_menubar_set_corner_widget(void* self, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#cornerWidget)
///
/// ``` QMenuBar* self ```
QWidget* q_menubar_corner_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#isNativeMenuBar)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_native_menu_bar(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#setNativeMenuBar)
///
/// ``` QMenuBar* self, bool nativeMenuBar ```
void q_menubar_set_native_menu_bar(void* self, bool nativeMenuBar);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#setVisible)
///
/// ``` QMenuBar* self, bool visible ```
void q_menubar_set_visible(void* self, bool visible);

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, bool) ```
void q_menubar_on_set_visible(void* self, void (*slot)(void*, bool));

/// Base class method implementation
///
/// ``` QMenuBar* self, bool visible ```
void q_menubar_qbase_set_visible(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#triggered)
///
/// ``` QMenuBar* self, QAction* action ```
void q_menubar_triggered(void* self, void* action);

/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QAction*) ```
void q_menubar_on_triggered(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#hovered)
///
/// ``` QMenuBar* self, QAction* action ```
void q_menubar_hovered(void* self, void* action);

/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QAction*) ```
void q_menubar_on_hovered(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#changeEvent)
///
/// ``` QMenuBar* self, QEvent* param1 ```
void q_menubar_change_event(void* self, void* param1);

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QEvent*) ```
void q_menubar_on_change_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMenuBar* self, QEvent* param1 ```
void q_menubar_qbase_change_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#keyPressEvent)
///
/// ``` QMenuBar* self, QKeyEvent* param1 ```
void q_menubar_key_press_event(void* self, void* param1);

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QKeyEvent*) ```
void q_menubar_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMenuBar* self, QKeyEvent* param1 ```
void q_menubar_qbase_key_press_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#mouseReleaseEvent)
///
/// ``` QMenuBar* self, QMouseEvent* param1 ```
void q_menubar_mouse_release_event(void* self, void* param1);

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QMouseEvent*) ```
void q_menubar_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMenuBar* self, QMouseEvent* param1 ```
void q_menubar_qbase_mouse_release_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#mousePressEvent)
///
/// ``` QMenuBar* self, QMouseEvent* param1 ```
void q_menubar_mouse_press_event(void* self, void* param1);

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QMouseEvent*) ```
void q_menubar_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMenuBar* self, QMouseEvent* param1 ```
void q_menubar_qbase_mouse_press_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#mouseMoveEvent)
///
/// ``` QMenuBar* self, QMouseEvent* param1 ```
void q_menubar_mouse_move_event(void* self, void* param1);

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QMouseEvent*) ```
void q_menubar_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMenuBar* self, QMouseEvent* param1 ```
void q_menubar_qbase_mouse_move_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#leaveEvent)
///
/// ``` QMenuBar* self, QEvent* param1 ```
void q_menubar_leave_event(void* self, void* param1);

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QEvent*) ```
void q_menubar_on_leave_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMenuBar* self, QEvent* param1 ```
void q_menubar_qbase_leave_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#paintEvent)
///
/// ``` QMenuBar* self, QPaintEvent* param1 ```
void q_menubar_paint_event(void* self, void* param1);

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QPaintEvent*) ```
void q_menubar_on_paint_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMenuBar* self, QPaintEvent* param1 ```
void q_menubar_qbase_paint_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#resizeEvent)
///
/// ``` QMenuBar* self, QResizeEvent* param1 ```
void q_menubar_resize_event(void* self, void* param1);

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QResizeEvent*) ```
void q_menubar_on_resize_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMenuBar* self, QResizeEvent* param1 ```
void q_menubar_qbase_resize_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#actionEvent)
///
/// ``` QMenuBar* self, QActionEvent* param1 ```
void q_menubar_action_event(void* self, void* param1);

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QActionEvent*) ```
void q_menubar_on_action_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMenuBar* self, QActionEvent* param1 ```
void q_menubar_qbase_action_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#focusOutEvent)
///
/// ``` QMenuBar* self, QFocusEvent* param1 ```
void q_menubar_focus_out_event(void* self, void* param1);

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QFocusEvent*) ```
void q_menubar_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMenuBar* self, QFocusEvent* param1 ```
void q_menubar_qbase_focus_out_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#focusInEvent)
///
/// ``` QMenuBar* self, QFocusEvent* param1 ```
void q_menubar_focus_in_event(void* self, void* param1);

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QFocusEvent*) ```
void q_menubar_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMenuBar* self, QFocusEvent* param1 ```
void q_menubar_qbase_focus_in_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#timerEvent)
///
/// ``` QMenuBar* self, QTimerEvent* param1 ```
void q_menubar_timer_event(void* self, void* param1);

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QTimerEvent*) ```
void q_menubar_on_timer_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMenuBar* self, QTimerEvent* param1 ```
void q_menubar_qbase_timer_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#eventFilter)
///
/// ``` QMenuBar* self, QObject* param1, QEvent* param2 ```
bool q_menubar_event_filter(void* self, void* param1, void* param2);

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, bool (*slot)(QMenuBar*, QObject*, QEvent*) ```
void q_menubar_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Base class method implementation
///
/// ``` QMenuBar* self, QObject* param1, QEvent* param2 ```
bool q_menubar_qbase_event_filter(void* self, void* param1, void* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#event)
///
/// ``` QMenuBar* self, QEvent* param1 ```
bool q_menubar_event(void* self, void* param1);

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, bool (*slot)(QMenuBar*, QEvent*) ```
void q_menubar_on_event(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMenuBar* self, QEvent* param1 ```
bool q_menubar_qbase_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#initStyleOption)
///
/// ``` QMenuBar* self, QStyleOptionMenuItem* option, QAction* action ```
void q_menubar_init_style_option(void* self, void* option, void* action);

/// Allows for overriding the related default method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QStyleOptionMenuItem*, QAction*) ```
void q_menubar_on_init_style_option(void* self, void (*slot)(void*, void*, void*));

/// Base class method implementation
///
/// ``` QMenuBar* self, QStyleOptionMenuItem* option, QAction* action ```
void q_menubar_qbase_init_style_option(void* self, void* option, void* action);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_menubar_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_menubar_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#setCornerWidget)
///
/// ``` QMenuBar* self, QWidget* w, enum Qt__Corner corner ```
void q_menubar_set_corner_widget2(void* self, void* w, int64_t corner);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenubar.html#cornerWidget)
///
/// ``` QMenuBar* self, enum Qt__Corner corner ```
QWidget* q_menubar_corner_widget1(void* self, int64_t corner);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QMenuBar* self ```
uintptr_t q_menubar_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QMenuBar* self ```
void q_menubar_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QMenuBar* self ```
uintptr_t q_menubar_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QMenuBar* self ```
uintptr_t q_menubar_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QMenuBar* self ```
QStyle* q_menubar_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QMenuBar* self, QStyle* style ```
void q_menubar_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QMenuBar* self ```
int64_t q_menubar_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QMenuBar* self, enum Qt__WindowModality windowModality ```
void q_menubar_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QMenuBar* self, QWidget* param1 ```
bool q_menubar_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QMenuBar* self, bool enabled ```
void q_menubar_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QMenuBar* self, bool disabled ```
void q_menubar_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QMenuBar* self, bool windowModified ```
void q_menubar_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QMenuBar* self ```
QRect* q_menubar_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QMenuBar* self ```
QRect* q_menubar_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QMenuBar* self ```
QRect* q_menubar_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QMenuBar* self ```
QPoint* q_menubar_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QMenuBar* self ```
QSize* q_menubar_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QMenuBar* self ```
QSize* q_menubar_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QMenuBar* self ```
QRect* q_menubar_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QMenuBar* self ```
QRect* q_menubar_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QMenuBar* self ```
QRegion* q_menubar_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QMenuBar* self ```
QSize* q_menubar_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QMenuBar* self ```
QSize* q_menubar_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QMenuBar* self, QSize* minimumSize ```
void q_menubar_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QMenuBar* self, int minw, int minh ```
void q_menubar_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QMenuBar* self, QSize* maximumSize ```
void q_menubar_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QMenuBar* self, int maxw, int maxh ```
void q_menubar_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QMenuBar* self, int minw ```
void q_menubar_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QMenuBar* self, int minh ```
void q_menubar_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QMenuBar* self, int maxw ```
void q_menubar_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QMenuBar* self, int maxh ```
void q_menubar_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QMenuBar* self ```
QSize* q_menubar_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QMenuBar* self, QSize* sizeIncrement ```
void q_menubar_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QMenuBar* self, int w, int h ```
void q_menubar_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QMenuBar* self ```
QSize* q_menubar_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QMenuBar* self, QSize* baseSize ```
void q_menubar_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QMenuBar* self, int basew, int baseh ```
void q_menubar_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QMenuBar* self, QSize* fixedSize ```
void q_menubar_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QMenuBar* self, int w, int h ```
void q_menubar_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QMenuBar* self, int w ```
void q_menubar_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QMenuBar* self, int h ```
void q_menubar_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QMenuBar* self, QPointF* param1 ```
QPointF* q_menubar_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QMenuBar* self, QPoint* param1 ```
QPoint* q_menubar_map_to_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QMenuBar* self, QPointF* param1 ```
QPointF* q_menubar_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QMenuBar* self, QPoint* param1 ```
QPoint* q_menubar_map_from_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QMenuBar* self, QPointF* param1 ```
QPointF* q_menubar_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QMenuBar* self, QPoint* param1 ```
QPoint* q_menubar_map_to_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QMenuBar* self, QPointF* param1 ```
QPointF* q_menubar_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QMenuBar* self, QPoint* param1 ```
QPoint* q_menubar_map_from_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QMenuBar* self, QWidget* param1, QPointF* param2 ```
QPointF* q_menubar_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QMenuBar* self, QWidget* param1, QPoint* param2 ```
QPoint* q_menubar_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QMenuBar* self, QWidget* param1, QPointF* param2 ```
QPointF* q_menubar_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QMenuBar* self, QWidget* param1, QPoint* param2 ```
QPoint* q_menubar_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QMenuBar* self ```
QWidget* q_menubar_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QMenuBar* self ```
QWidget* q_menubar_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QMenuBar* self ```
QWidget* q_menubar_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QMenuBar* self ```
QPalette* q_menubar_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QMenuBar* self, QPalette* palette ```
void q_menubar_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QMenuBar* self, enum QPalette__ColorRole backgroundRole ```
void q_menubar_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QMenuBar* self ```
int64_t q_menubar_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QMenuBar* self, enum QPalette__ColorRole foregroundRole ```
void q_menubar_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QMenuBar* self ```
int64_t q_menubar_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QMenuBar* self ```
QFont* q_menubar_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QMenuBar* self, QFont* font ```
void q_menubar_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QMenuBar* self ```
QFontMetrics* q_menubar_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QMenuBar* self ```
QFontInfo* q_menubar_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QMenuBar* self ```
QCursor* q_menubar_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QMenuBar* self, QCursor* cursor ```
void q_menubar_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QMenuBar* self ```
void q_menubar_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QMenuBar* self, bool enable ```
void q_menubar_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QMenuBar* self ```
bool q_menubar_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QMenuBar* self ```
bool q_menubar_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QMenuBar* self, bool enable ```
void q_menubar_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QMenuBar* self ```
bool q_menubar_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QMenuBar* self, QBitmap* mask ```
void q_menubar_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QMenuBar* self, QRegion* mask ```
void q_menubar_set_mask_with_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QMenuBar* self ```
QRegion* q_menubar_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QMenuBar* self ```
void q_menubar_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMenuBar* self, QPaintDevice* target ```
void q_menubar_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMenuBar* self, QPainter* painter ```
void q_menubar_render_with_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QMenuBar* self ```
QPixmap* q_menubar_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QMenuBar* self ```
QGraphicsEffect* q_menubar_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QMenuBar* self, QGraphicsEffect* effect ```
void q_menubar_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QMenuBar* self, enum Qt__GestureType typeVal ```
void q_menubar_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QMenuBar* self, enum Qt__GestureType typeVal ```
void q_menubar_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QMenuBar* self, const char* windowTitle ```
void q_menubar_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QMenuBar* self, const char* styleSheet ```
void q_menubar_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QMenuBar* self ```
const char* q_menubar_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QMenuBar* self ```
const char* q_menubar_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QMenuBar* self, QIcon* icon ```
void q_menubar_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QMenuBar* self ```
QIcon* q_menubar_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QMenuBar* self, const char* windowIconText ```
void q_menubar_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QMenuBar* self ```
const char* q_menubar_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QMenuBar* self, const char* windowRole ```
void q_menubar_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QMenuBar* self ```
const char* q_menubar_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QMenuBar* self, const char* filePath ```
void q_menubar_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QMenuBar* self ```
const char* q_menubar_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QMenuBar* self, double level ```
void q_menubar_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QMenuBar* self ```
double q_menubar_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QMenuBar* self, const char* toolTip ```
void q_menubar_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QMenuBar* self ```
const char* q_menubar_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QMenuBar* self, int msec ```
void q_menubar_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QMenuBar* self, const char* statusTip ```
void q_menubar_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QMenuBar* self ```
const char* q_menubar_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QMenuBar* self, const char* whatsThis ```
void q_menubar_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QMenuBar* self ```
const char* q_menubar_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QMenuBar* self ```
const char* q_menubar_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QMenuBar* self, const char* name ```
void q_menubar_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QMenuBar* self ```
const char* q_menubar_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QMenuBar* self, const char* description ```
void q_menubar_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QMenuBar* self, enum Qt__LayoutDirection direction ```
void q_menubar_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QMenuBar* self ```
int64_t q_menubar_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QMenuBar* self ```
void q_menubar_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QMenuBar* self, QLocale* locale ```
void q_menubar_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QMenuBar* self ```
QLocale* q_menubar_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QMenuBar* self ```
void q_menubar_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QMenuBar* self ```
void q_menubar_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QMenuBar* self ```
void q_menubar_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QMenuBar* self ```
void q_menubar_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QMenuBar* self, enum Qt__FocusReason reason ```
void q_menubar_set_focus_with_reason(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QMenuBar* self ```
int64_t q_menubar_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QMenuBar* self, enum Qt__FocusPolicy policy ```
void q_menubar_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QMenuBar* self ```
bool q_menubar_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_menubar_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QMenuBar* self, QWidget* focusProxy ```
void q_menubar_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QMenuBar* self ```
QWidget* q_menubar_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QMenuBar* self ```
int64_t q_menubar_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QMenuBar* self, enum Qt__ContextMenuPolicy policy ```
void q_menubar_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QMenuBar* self ```
void q_menubar_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QMenuBar* self, QCursor* param1 ```
void q_menubar_grab_mouse_with_q_cursor(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QMenuBar* self ```
void q_menubar_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QMenuBar* self ```
void q_menubar_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QMenuBar* self ```
void q_menubar_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QMenuBar* self, QKeySequence* key ```
int32_t q_menubar_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QMenuBar* self, int id ```
void q_menubar_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QMenuBar* self, int id ```
void q_menubar_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QMenuBar* self, int id ```
void q_menubar_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_menubar_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_menubar_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QMenuBar* self ```
bool q_menubar_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QMenuBar* self, bool enable ```
void q_menubar_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QMenuBar* self ```
QGraphicsProxyWidget* q_menubar_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMenuBar* self ```
void q_menubar_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMenuBar* self ```
void q_menubar_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMenuBar* self, int x, int y, int w, int h ```
void q_menubar_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMenuBar* self, QRect* param1 ```
void q_menubar_update_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMenuBar* self, QRegion* param1 ```
void q_menubar_update_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMenuBar* self, int x, int y, int w, int h ```
void q_menubar_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMenuBar* self, QRect* param1 ```
void q_menubar_repaint_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMenuBar* self, QRegion* param1 ```
void q_menubar_repaint_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QMenuBar* self, bool hidden ```
void q_menubar_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QMenuBar* self ```
void q_menubar_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QMenuBar* self ```
void q_menubar_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QMenuBar* self ```
void q_menubar_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QMenuBar* self ```
void q_menubar_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QMenuBar* self ```
void q_menubar_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QMenuBar* self ```
void q_menubar_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QMenuBar* self ```
bool q_menubar_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QMenuBar* self ```
void q_menubar_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QMenuBar* self ```
void q_menubar_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QMenuBar* self, QWidget* param1 ```
void q_menubar_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QMenuBar* self, int x, int y ```
void q_menubar_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QMenuBar* self, QPoint* param1 ```
void q_menubar_move_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QMenuBar* self, int w, int h ```
void q_menubar_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QMenuBar* self, QSize* param1 ```
void q_menubar_resize_with_q_size(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QMenuBar* self, int x, int y, int w, int h ```
void q_menubar_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QMenuBar* self, QRect* geometry ```
void q_menubar_set_geometry_with_geometry(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QMenuBar* self ```
char* q_menubar_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QMenuBar* self, const char* geometry ```
bool q_menubar_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QMenuBar* self ```
void q_menubar_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QMenuBar* self, QWidget* param1 ```
bool q_menubar_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QMenuBar* self ```
int64_t q_menubar_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QMenuBar* self, int state ```
void q_menubar_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QMenuBar* self, int state ```
void q_menubar_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QMenuBar* self ```
QSizePolicy* q_menubar_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QMenuBar* self, QSizePolicy* sizePolicy ```
void q_menubar_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QMenuBar* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_menubar_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QMenuBar* self ```
QRegion* q_menubar_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QMenuBar* self, int left, int top, int right, int bottom ```
void q_menubar_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QMenuBar* self, QMargins* margins ```
void q_menubar_set_contents_margins_with_margins(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QMenuBar* self ```
QMargins* q_menubar_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QMenuBar* self ```
QRect* q_menubar_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QMenuBar* self ```
QLayout* q_menubar_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QMenuBar* self, QLayout* layout ```
void q_menubar_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QMenuBar* self ```
void q_menubar_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QMenuBar* self, QWidget* parent ```
void q_menubar_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QMenuBar* self, QWidget* parent, int f ```
void q_menubar_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QMenuBar* self, int dx, int dy ```
void q_menubar_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QMenuBar* self, int dx, int dy, QRect* param3 ```
void q_menubar_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QMenuBar* self ```
QWidget* q_menubar_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QMenuBar* self ```
QWidget* q_menubar_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QMenuBar* self ```
QWidget* q_menubar_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QMenuBar* self ```
bool q_menubar_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QMenuBar* self, bool on ```
void q_menubar_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMenuBar* self, QAction* action ```
void q_menubar_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QMenuBar* self, QAction* actions[] ```
void q_menubar_add_actions(void* self, void* actions[]);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QMenuBar* self, QAction* before, QAction* actions[] ```
void q_menubar_insert_actions(void* self, void* before, void* actions[]);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QMenuBar* self, QAction* before, QAction* action ```
void q_menubar_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QMenuBar* self, QAction* action ```
void q_menubar_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QMenuBar* self ```
libqt_list /* of QAction* */ q_menubar_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMenuBar* self, const char* text ```
QAction* q_menubar_add_action_with_text(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMenuBar* self, QIcon* icon, const char* text ```
QAction* q_menubar_add_action2(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMenuBar* self, const char* text, QKeySequence* shortcut ```
QAction* q_menubar_add_action3(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMenuBar* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_menubar_add_action4(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QMenuBar* self ```
QWidget* q_menubar_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QMenuBar* self, int typeVal ```
void q_menubar_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QMenuBar* self ```
int64_t q_menubar_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QMenuBar* self, enum Qt__WindowType param1 ```
void q_menubar_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QMenuBar* self, int typeVal ```
void q_menubar_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QMenuBar* self ```
int64_t q_menubar_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_menubar_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QMenuBar* self, int x, int y ```
QWidget* q_menubar_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QMenuBar* self, QPoint* p ```
QWidget* q_menubar_child_at_with_q_point(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QMenuBar* self, enum Qt__WidgetAttribute param1 ```
void q_menubar_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QMenuBar* self, enum Qt__WidgetAttribute param1 ```
bool q_menubar_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QMenuBar* self ```
void q_menubar_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QMenuBar* self, QWidget* child ```
bool q_menubar_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QMenuBar* self ```
bool q_menubar_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QMenuBar* self, bool enabled ```
void q_menubar_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QMenuBar* self ```
QBackingStore* q_menubar_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QMenuBar* self ```
QWindow* q_menubar_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QMenuBar* self ```
QScreen* q_menubar_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QMenuBar* self, QScreen* screen ```
void q_menubar_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_menubar_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QMenuBar* self, const char* title ```
void q_menubar_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// ``` QMenuBar* self, void (*slot)(QWidget*, const char*) ```
void q_menubar_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QMenuBar* self, QIcon* icon ```
void q_menubar_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// ``` QMenuBar* self, void (*slot)(QWidget*, QIcon*) ```
void q_menubar_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QMenuBar* self, const char* iconText ```
void q_menubar_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// ``` QMenuBar* self, void (*slot)(QWidget*, const char*) ```
void q_menubar_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QMenuBar* self, QPoint* pos ```
void q_menubar_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// ``` QMenuBar* self, void (*slot)(QWidget*, QPoint*) ```
void q_menubar_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QMenuBar* self ```
int64_t q_menubar_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QMenuBar* self, int hints ```
void q_menubar_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMenuBar* self, QPaintDevice* target, QPoint* targetOffset ```
void q_menubar_render2(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMenuBar* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_menubar_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMenuBar* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_menubar_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMenuBar* self, QPainter* painter, QPoint* targetOffset ```
void q_menubar_render22(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMenuBar* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_menubar_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMenuBar* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_menubar_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QMenuBar* self, QRect* rectangle ```
QPixmap* q_menubar_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QMenuBar* self, enum Qt__GestureType typeVal, int flags ```
void q_menubar_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QMenuBar* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_menubar_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QMenuBar* self, int id, bool enable ```
void q_menubar_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QMenuBar* self, int id, bool enable ```
void q_menubar_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QMenuBar* self, enum Qt__WindowType param1, bool on ```
void q_menubar_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QMenuBar* self, enum Qt__WidgetAttribute param1, bool on ```
void q_menubar_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_menubar_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_menubar_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QMenuBar* self ```
const char* q_menubar_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QMenuBar* self, char* name ```
void q_menubar_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QMenuBar* self ```
bool q_menubar_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QMenuBar* self ```
bool q_menubar_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QMenuBar* self, bool b ```
bool q_menubar_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QMenuBar* self ```
QThread* q_menubar_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QMenuBar* self, QThread* thread ```
void q_menubar_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMenuBar* self, int interval ```
int32_t q_menubar_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QMenuBar* self, int id ```
void q_menubar_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QMenuBar* self ```
libqt_list /* of QObject* */ q_menubar_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QMenuBar* self, QObject* filterObj ```
void q_menubar_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QMenuBar* self, QObject* obj ```
void q_menubar_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_menubar_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMenuBar* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_menubar_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_menubar_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_menubar_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QMenuBar* self ```
void q_menubar_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QMenuBar* self ```
void q_menubar_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QMenuBar* self, const char* name, QVariant* value ```
bool q_menubar_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QMenuBar* self, const char* name ```
QVariant* q_menubar_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QMenuBar* self ```
const char** q_menubar_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMenuBar* self ```
QBindingStorage* q_menubar_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMenuBar* self ```
QBindingStorage* q_menubar_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMenuBar* self ```
void q_menubar_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QMenuBar* self, void (*slot)(QObject*) ```
void q_menubar_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QMenuBar* self ```
QObject* q_menubar_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QMenuBar* self, const char* classname ```
bool q_menubar_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QMenuBar* self ```
void q_menubar_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMenuBar* self, int interval, enum Qt__TimerType timerType ```
int32_t q_menubar_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_menubar_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMenuBar* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_menubar_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMenuBar* self, QObject* param1 ```
void q_menubar_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QMenuBar* self, void (*slot)(QObject*, QObject*) ```
void q_menubar_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QMenuBar* self ```
bool q_menubar_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QMenuBar* self ```
double q_menubar_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QMenuBar* self ```
double q_menubar_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QMenuBar* self ```
int32_t q_menubar_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_menubar_device_pixel_ratio_f_scale();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self ```
int32_t q_menubar_dev_type(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self ```
int32_t q_menubar_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, int32_t (*slot)() ```
void q_menubar_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self ```
bool q_menubar_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self ```
bool q_menubar_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, bool (*slot)() ```
void q_menubar_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self ```
QPaintEngine* q_menubar_paint_engine(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self ```
QPaintEngine* q_menubar_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, QPaintEngine* (*slot)() ```
void q_menubar_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QMouseEvent* event ```
void q_menubar_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QMouseEvent* event ```
void q_menubar_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QMouseEvent*) ```
void q_menubar_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QWheelEvent* event ```
void q_menubar_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QWheelEvent* event ```
void q_menubar_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QWheelEvent*) ```
void q_menubar_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QKeyEvent* event ```
void q_menubar_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QKeyEvent* event ```
void q_menubar_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QKeyEvent*) ```
void q_menubar_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QEnterEvent* event ```
void q_menubar_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QEnterEvent* event ```
void q_menubar_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QEnterEvent*) ```
void q_menubar_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QMoveEvent* event ```
void q_menubar_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QMoveEvent* event ```
void q_menubar_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QMoveEvent*) ```
void q_menubar_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QCloseEvent* event ```
void q_menubar_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QCloseEvent* event ```
void q_menubar_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QCloseEvent*) ```
void q_menubar_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QContextMenuEvent* event ```
void q_menubar_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QContextMenuEvent* event ```
void q_menubar_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QContextMenuEvent*) ```
void q_menubar_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QTabletEvent* event ```
void q_menubar_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QTabletEvent* event ```
void q_menubar_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QTabletEvent*) ```
void q_menubar_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QDragEnterEvent* event ```
void q_menubar_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QDragEnterEvent* event ```
void q_menubar_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QDragEnterEvent*) ```
void q_menubar_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QDragMoveEvent* event ```
void q_menubar_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QDragMoveEvent* event ```
void q_menubar_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QDragMoveEvent*) ```
void q_menubar_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QDragLeaveEvent* event ```
void q_menubar_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QDragLeaveEvent* event ```
void q_menubar_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QDragLeaveEvent*) ```
void q_menubar_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QDropEvent* event ```
void q_menubar_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QDropEvent* event ```
void q_menubar_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QDropEvent*) ```
void q_menubar_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QShowEvent* event ```
void q_menubar_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QShowEvent* event ```
void q_menubar_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QShowEvent*) ```
void q_menubar_on_show_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QHideEvent* event ```
void q_menubar_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QHideEvent* event ```
void q_menubar_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QHideEvent*) ```
void q_menubar_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, const char* eventType, void* message, intptr_t* result ```
bool q_menubar_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, const char* eventType, void* message, intptr_t* result ```
bool q_menubar_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, bool (*slot)(QMenuBar*, const char*, void*, intptr_t*) ```
void q_menubar_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_menubar_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_menubar_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, int32_t (*slot)(QMenuBar*, enum QPaintDevice__PaintDeviceMetric) ```
void q_menubar_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QPainter* painter ```
void q_menubar_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QPainter* painter ```
void q_menubar_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QPainter*) ```
void q_menubar_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QPoint* offset ```
QPaintDevice* q_menubar_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QPoint* offset ```
QPaintDevice* q_menubar_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, QPaintDevice* (*slot)(QMenuBar*, QPoint*) ```
void q_menubar_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self ```
QPainter* q_menubar_shared_painter(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self ```
QPainter* q_menubar_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, QPainter* (*slot)() ```
void q_menubar_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QInputMethodEvent* param1 ```
void q_menubar_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QInputMethodEvent* param1 ```
void q_menubar_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QInputMethodEvent*) ```
void q_menubar_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_menubar_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_menubar_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, QVariant* (*slot)(QMenuBar*, enum Qt__InputMethodQuery) ```
void q_menubar_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, bool next ```
bool q_menubar_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, bool next ```
bool q_menubar_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, bool (*slot)(QMenuBar*, bool) ```
void q_menubar_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QChildEvent* event ```
void q_menubar_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QChildEvent* event ```
void q_menubar_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QChildEvent*) ```
void q_menubar_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QEvent* event ```
void q_menubar_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QEvent* event ```
void q_menubar_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QEvent*) ```
void q_menubar_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QMetaMethod* signal ```
void q_menubar_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QMetaMethod* signal ```
void q_menubar_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QMetaMethod*) ```
void q_menubar_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QMetaMethod* signal ```
void q_menubar_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QMetaMethod* signal ```
void q_menubar_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)(QMenuBar*, QMetaMethod*) ```
void q_menubar_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self ```
void q_menubar_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self ```
void q_menubar_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)() ```
void q_menubar_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self ```
void q_menubar_create(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self ```
void q_menubar_qbase_create(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)() ```
void q_menubar_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self ```
void q_menubar_destroy(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self ```
void q_menubar_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, void (*slot)() ```
void q_menubar_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self ```
bool q_menubar_focus_next_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self ```
bool q_menubar_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, bool (*slot)() ```
void q_menubar_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self ```
bool q_menubar_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self ```
bool q_menubar_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, bool (*slot)() ```
void q_menubar_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self ```
QObject* q_menubar_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self ```
QObject* q_menubar_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, QObject* (*slot)() ```
void q_menubar_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self ```
int32_t q_menubar_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self ```
int32_t q_menubar_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, int32_t (*slot)() ```
void q_menubar_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, const char* signal ```
int32_t q_menubar_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, const char* signal ```
int32_t q_menubar_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, int32_t (*slot)(QMenuBar*, const char*) ```
void q_menubar_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenuBar* self, QMetaMethod* signal ```
bool q_menubar_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenuBar* self, QMetaMethod* signal ```
bool q_menubar_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenuBar* self, bool (*slot)(QMenuBar*, QMetaMethod*) ```
void q_menubar_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QMenuBar* self ```
void q_menubar_delete(void* self);

#endif
