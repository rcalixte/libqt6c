#pragma once
#ifndef SRCQT6C_LIBQMDISUBWINDOW_H
#define SRCQT6C_LIBQMDISUBWINDOW_H

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
#include "libqmdiarea.h"
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
#include "libqthread.h"
#include "libqvariant.h"
#include "libqwidget.h"
#include "libqwindow.h"

/// https://doc.qt.io/qt-6/qmdisubwindow.html

/// q_mdisubwindow_new constructs a new QMdiSubWindow object.
///
/// ``` QWidget* parent ```
QMdiSubWindow* q_mdisubwindow_new(void* parent);

/// q_mdisubwindow_new2 constructs a new QMdiSubWindow object.
///
///
QMdiSubWindow* q_mdisubwindow_new2();

/// q_mdisubwindow_new3 constructs a new QMdiSubWindow object.
///
/// ``` QWidget* parent, int flags ```
QMdiSubWindow* q_mdisubwindow_new3(void* parent, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QMdiSubWindow* self ```
QMetaObject* q_mdisubwindow_meta_object(void* self);

/// ``` QMdiSubWindow* self, const char* param1 ```
void* q_mdisubwindow_metacast(void* self, const char* param1);

/// ``` QMdiSubWindow* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_mdisubwindow_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, int32_t (*slot)(QMdiSubWindow*, enum QMetaObject__Call, int, void*) ```
void q_mdisubwindow_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_mdisubwindow_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_mdisubwindow_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#sizeHint)
///
/// ``` QMdiSubWindow* self ```
QSize* q_mdisubwindow_size_hint(void* self);

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, QSize* (*slot)() ```
void q_mdisubwindow_on_size_hint(void* self, QSize* (*slot)());

/// Base class method implementation
///
/// ``` QMdiSubWindow* self ```
QSize* q_mdisubwindow_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#minimumSizeHint)
///
/// ``` QMdiSubWindow* self ```
QSize* q_mdisubwindow_minimum_size_hint(void* self);

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, QSize* (*slot)() ```
void q_mdisubwindow_on_minimum_size_hint(void* self, QSize* (*slot)());

/// Base class method implementation
///
/// ``` QMdiSubWindow* self ```
QSize* q_mdisubwindow_qbase_minimum_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#setWidget)
///
/// ``` QMdiSubWindow* self, QWidget* widget ```
void q_mdisubwindow_set_widget(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#widget)
///
/// ``` QMdiSubWindow* self ```
QWidget* q_mdisubwindow_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#maximizedButtonsWidget)
///
/// ``` QMdiSubWindow* self ```
QWidget* q_mdisubwindow_maximized_buttons_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#maximizedSystemMenuIconWidget)
///
/// ``` QMdiSubWindow* self ```
QWidget* q_mdisubwindow_maximized_system_menu_icon_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#isShaded)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_shaded(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#setOption)
///
/// ``` QMdiSubWindow* self, enum QMdiSubWindow__SubWindowOption option ```
void q_mdisubwindow_set_option(void* self, int64_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#testOption)
///
/// ``` QMdiSubWindow* self, enum QMdiSubWindow__SubWindowOption param1 ```
bool q_mdisubwindow_test_option(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#setKeyboardSingleStep)
///
/// ``` QMdiSubWindow* self, int step ```
void q_mdisubwindow_set_keyboard_single_step(void* self, int step);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#keyboardSingleStep)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_keyboard_single_step(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#setKeyboardPageStep)
///
/// ``` QMdiSubWindow* self, int step ```
void q_mdisubwindow_set_keyboard_page_step(void* self, int step);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#keyboardPageStep)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_keyboard_page_step(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#setSystemMenu)
///
/// ``` QMdiSubWindow* self, QMenu* systemMenu ```
void q_mdisubwindow_set_system_menu(void* self, void* systemMenu);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#systemMenu)
///
/// ``` QMdiSubWindow* self ```
QMenu* q_mdisubwindow_system_menu(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#mdiArea)
///
/// ``` QMdiSubWindow* self ```
QMdiArea* q_mdisubwindow_mdi_area(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#windowStateChanged)
///
/// ``` QMdiSubWindow* self, int oldState, int newState ```
void q_mdisubwindow_window_state_changed(void* self, int64_t oldState, int64_t newState);

/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, int, int) ```
void q_mdisubwindow_on_window_state_changed(void* self, void (*slot)(void*, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#aboutToActivate)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_about_to_activate(void* self);

/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*) ```
void q_mdisubwindow_on_about_to_activate(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#showSystemMenu)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_show_system_menu(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#showShaded)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_show_shaded(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#eventFilter)
///
/// ``` QMdiSubWindow* self, QObject* object, QEvent* event ```
bool q_mdisubwindow_event_filter(void* self, void* object, void* event);

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, bool (*slot)(QMdiSubWindow*, QObject*, QEvent*) ```
void q_mdisubwindow_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QObject* object, QEvent* event ```
bool q_mdisubwindow_qbase_event_filter(void* self, void* object, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#event)
///
/// ``` QMdiSubWindow* self, QEvent* event ```
bool q_mdisubwindow_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, bool (*slot)(QMdiSubWindow*, QEvent*) ```
void q_mdisubwindow_on_event(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QEvent* event ```
bool q_mdisubwindow_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#showEvent)
///
/// ``` QMdiSubWindow* self, QShowEvent* showEvent ```
void q_mdisubwindow_show_event(void* self, void* showEvent);

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QShowEvent*) ```
void q_mdisubwindow_on_show_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QShowEvent* showEvent ```
void q_mdisubwindow_qbase_show_event(void* self, void* showEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#hideEvent)
///
/// ``` QMdiSubWindow* self, QHideEvent* hideEvent ```
void q_mdisubwindow_hide_event(void* self, void* hideEvent);

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QHideEvent*) ```
void q_mdisubwindow_on_hide_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QHideEvent* hideEvent ```
void q_mdisubwindow_qbase_hide_event(void* self, void* hideEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#changeEvent)
///
/// ``` QMdiSubWindow* self, QEvent* changeEvent ```
void q_mdisubwindow_change_event(void* self, void* changeEvent);

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QEvent*) ```
void q_mdisubwindow_on_change_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QEvent* changeEvent ```
void q_mdisubwindow_qbase_change_event(void* self, void* changeEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#closeEvent)
///
/// ``` QMdiSubWindow* self, QCloseEvent* closeEvent ```
void q_mdisubwindow_close_event(void* self, void* closeEvent);

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QCloseEvent*) ```
void q_mdisubwindow_on_close_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QCloseEvent* closeEvent ```
void q_mdisubwindow_qbase_close_event(void* self, void* closeEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#leaveEvent)
///
/// ``` QMdiSubWindow* self, QEvent* leaveEvent ```
void q_mdisubwindow_leave_event(void* self, void* leaveEvent);

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QEvent*) ```
void q_mdisubwindow_on_leave_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QEvent* leaveEvent ```
void q_mdisubwindow_qbase_leave_event(void* self, void* leaveEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#resizeEvent)
///
/// ``` QMdiSubWindow* self, QResizeEvent* resizeEvent ```
void q_mdisubwindow_resize_event(void* self, void* resizeEvent);

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QResizeEvent*) ```
void q_mdisubwindow_on_resize_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QResizeEvent* resizeEvent ```
void q_mdisubwindow_qbase_resize_event(void* self, void* resizeEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#timerEvent)
///
/// ``` QMdiSubWindow* self, QTimerEvent* timerEvent ```
void q_mdisubwindow_timer_event(void* self, void* timerEvent);

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QTimerEvent*) ```
void q_mdisubwindow_on_timer_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QTimerEvent* timerEvent ```
void q_mdisubwindow_qbase_timer_event(void* self, void* timerEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#moveEvent)
///
/// ``` QMdiSubWindow* self, QMoveEvent* moveEvent ```
void q_mdisubwindow_move_event(void* self, void* moveEvent);

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QMoveEvent*) ```
void q_mdisubwindow_on_move_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QMoveEvent* moveEvent ```
void q_mdisubwindow_qbase_move_event(void* self, void* moveEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#paintEvent)
///
/// ``` QMdiSubWindow* self, QPaintEvent* paintEvent ```
void q_mdisubwindow_paint_event(void* self, void* paintEvent);

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QPaintEvent*) ```
void q_mdisubwindow_on_paint_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QPaintEvent* paintEvent ```
void q_mdisubwindow_qbase_paint_event(void* self, void* paintEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#mousePressEvent)
///
/// ``` QMdiSubWindow* self, QMouseEvent* mouseEvent ```
void q_mdisubwindow_mouse_press_event(void* self, void* mouseEvent);

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QMouseEvent*) ```
void q_mdisubwindow_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QMouseEvent* mouseEvent ```
void q_mdisubwindow_qbase_mouse_press_event(void* self, void* mouseEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#mouseDoubleClickEvent)
///
/// ``` QMdiSubWindow* self, QMouseEvent* mouseEvent ```
void q_mdisubwindow_mouse_double_click_event(void* self, void* mouseEvent);

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QMouseEvent*) ```
void q_mdisubwindow_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QMouseEvent* mouseEvent ```
void q_mdisubwindow_qbase_mouse_double_click_event(void* self, void* mouseEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#mouseReleaseEvent)
///
/// ``` QMdiSubWindow* self, QMouseEvent* mouseEvent ```
void q_mdisubwindow_mouse_release_event(void* self, void* mouseEvent);

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QMouseEvent*) ```
void q_mdisubwindow_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QMouseEvent* mouseEvent ```
void q_mdisubwindow_qbase_mouse_release_event(void* self, void* mouseEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#mouseMoveEvent)
///
/// ``` QMdiSubWindow* self, QMouseEvent* mouseEvent ```
void q_mdisubwindow_mouse_move_event(void* self, void* mouseEvent);

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QMouseEvent*) ```
void q_mdisubwindow_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QMouseEvent* mouseEvent ```
void q_mdisubwindow_qbase_mouse_move_event(void* self, void* mouseEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#keyPressEvent)
///
/// ``` QMdiSubWindow* self, QKeyEvent* keyEvent ```
void q_mdisubwindow_key_press_event(void* self, void* keyEvent);

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QKeyEvent*) ```
void q_mdisubwindow_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QKeyEvent* keyEvent ```
void q_mdisubwindow_qbase_key_press_event(void* self, void* keyEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#contextMenuEvent)
///
/// ``` QMdiSubWindow* self, QContextMenuEvent* contextMenuEvent ```
void q_mdisubwindow_context_menu_event(void* self, void* contextMenuEvent);

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QContextMenuEvent*) ```
void q_mdisubwindow_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QContextMenuEvent* contextMenuEvent ```
void q_mdisubwindow_qbase_context_menu_event(void* self, void* contextMenuEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#focusInEvent)
///
/// ``` QMdiSubWindow* self, QFocusEvent* focusInEvent ```
void q_mdisubwindow_focus_in_event(void* self, void* focusInEvent);

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QFocusEvent*) ```
void q_mdisubwindow_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QFocusEvent* focusInEvent ```
void q_mdisubwindow_qbase_focus_in_event(void* self, void* focusInEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#focusOutEvent)
///
/// ``` QMdiSubWindow* self, QFocusEvent* focusOutEvent ```
void q_mdisubwindow_focus_out_event(void* self, void* focusOutEvent);

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QFocusEvent*) ```
void q_mdisubwindow_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QFocusEvent* focusOutEvent ```
void q_mdisubwindow_qbase_focus_out_event(void* self, void* focusOutEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#childEvent)
///
/// ``` QMdiSubWindow* self, QChildEvent* childEvent ```
void q_mdisubwindow_child_event(void* self, void* childEvent);

/// Allows for overriding the related default method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QChildEvent*) ```
void q_mdisubwindow_on_child_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMdiSubWindow* self, QChildEvent* childEvent ```
void q_mdisubwindow_qbase_child_event(void* self, void* childEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_mdisubwindow_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_mdisubwindow_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#setOption)
///
/// ``` QMdiSubWindow* self, enum QMdiSubWindow__SubWindowOption option, bool on ```
void q_mdisubwindow_set_option2(void* self, int64_t option, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QMdiSubWindow* self ```
uintptr_t q_mdisubwindow_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QMdiSubWindow* self ```
uintptr_t q_mdisubwindow_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QMdiSubWindow* self ```
uintptr_t q_mdisubwindow_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QMdiSubWindow* self ```
QStyle* q_mdisubwindow_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QMdiSubWindow* self, QStyle* style ```
void q_mdisubwindow_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QMdiSubWindow* self ```
int64_t q_mdisubwindow_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QMdiSubWindow* self, enum Qt__WindowModality windowModality ```
void q_mdisubwindow_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QMdiSubWindow* self, QWidget* param1 ```
bool q_mdisubwindow_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QMdiSubWindow* self, bool enabled ```
void q_mdisubwindow_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QMdiSubWindow* self, bool disabled ```
void q_mdisubwindow_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QMdiSubWindow* self, bool windowModified ```
void q_mdisubwindow_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QMdiSubWindow* self ```
QRect* q_mdisubwindow_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QMdiSubWindow* self ```
QRect* q_mdisubwindow_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QMdiSubWindow* self ```
QRect* q_mdisubwindow_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QMdiSubWindow* self ```
QPoint* q_mdisubwindow_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QMdiSubWindow* self ```
QSize* q_mdisubwindow_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QMdiSubWindow* self ```
QSize* q_mdisubwindow_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QMdiSubWindow* self ```
QRect* q_mdisubwindow_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QMdiSubWindow* self ```
QRect* q_mdisubwindow_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QMdiSubWindow* self ```
QRegion* q_mdisubwindow_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QMdiSubWindow* self ```
QSize* q_mdisubwindow_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QMdiSubWindow* self ```
QSize* q_mdisubwindow_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QMdiSubWindow* self, QSize* minimumSize ```
void q_mdisubwindow_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QMdiSubWindow* self, int minw, int minh ```
void q_mdisubwindow_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QMdiSubWindow* self, QSize* maximumSize ```
void q_mdisubwindow_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QMdiSubWindow* self, int maxw, int maxh ```
void q_mdisubwindow_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QMdiSubWindow* self, int minw ```
void q_mdisubwindow_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QMdiSubWindow* self, int minh ```
void q_mdisubwindow_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QMdiSubWindow* self, int maxw ```
void q_mdisubwindow_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QMdiSubWindow* self, int maxh ```
void q_mdisubwindow_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QMdiSubWindow* self ```
QSize* q_mdisubwindow_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QMdiSubWindow* self, QSize* sizeIncrement ```
void q_mdisubwindow_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QMdiSubWindow* self, int w, int h ```
void q_mdisubwindow_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QMdiSubWindow* self ```
QSize* q_mdisubwindow_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QMdiSubWindow* self, QSize* baseSize ```
void q_mdisubwindow_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QMdiSubWindow* self, int basew, int baseh ```
void q_mdisubwindow_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QMdiSubWindow* self, QSize* fixedSize ```
void q_mdisubwindow_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QMdiSubWindow* self, int w, int h ```
void q_mdisubwindow_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QMdiSubWindow* self, int w ```
void q_mdisubwindow_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QMdiSubWindow* self, int h ```
void q_mdisubwindow_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QMdiSubWindow* self, QPointF* param1 ```
QPointF* q_mdisubwindow_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QMdiSubWindow* self, QPoint* param1 ```
QPoint* q_mdisubwindow_map_to_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QMdiSubWindow* self, QPointF* param1 ```
QPointF* q_mdisubwindow_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QMdiSubWindow* self, QPoint* param1 ```
QPoint* q_mdisubwindow_map_from_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QMdiSubWindow* self, QPointF* param1 ```
QPointF* q_mdisubwindow_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QMdiSubWindow* self, QPoint* param1 ```
QPoint* q_mdisubwindow_map_to_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QMdiSubWindow* self, QPointF* param1 ```
QPointF* q_mdisubwindow_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QMdiSubWindow* self, QPoint* param1 ```
QPoint* q_mdisubwindow_map_from_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QMdiSubWindow* self, QWidget* param1, QPointF* param2 ```
QPointF* q_mdisubwindow_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QMdiSubWindow* self, QWidget* param1, QPoint* param2 ```
QPoint* q_mdisubwindow_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QMdiSubWindow* self, QWidget* param1, QPointF* param2 ```
QPointF* q_mdisubwindow_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QMdiSubWindow* self, QWidget* param1, QPoint* param2 ```
QPoint* q_mdisubwindow_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QMdiSubWindow* self ```
QWidget* q_mdisubwindow_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QMdiSubWindow* self ```
QWidget* q_mdisubwindow_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QMdiSubWindow* self ```
QWidget* q_mdisubwindow_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QMdiSubWindow* self ```
QPalette* q_mdisubwindow_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QMdiSubWindow* self, QPalette* palette ```
void q_mdisubwindow_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QMdiSubWindow* self, enum QPalette__ColorRole backgroundRole ```
void q_mdisubwindow_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QMdiSubWindow* self ```
int64_t q_mdisubwindow_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QMdiSubWindow* self, enum QPalette__ColorRole foregroundRole ```
void q_mdisubwindow_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QMdiSubWindow* self ```
int64_t q_mdisubwindow_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QMdiSubWindow* self ```
QFont* q_mdisubwindow_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QMdiSubWindow* self, QFont* font ```
void q_mdisubwindow_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QMdiSubWindow* self ```
QFontMetrics* q_mdisubwindow_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QMdiSubWindow* self ```
QFontInfo* q_mdisubwindow_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QMdiSubWindow* self ```
QCursor* q_mdisubwindow_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QMdiSubWindow* self, QCursor* cursor ```
void q_mdisubwindow_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QMdiSubWindow* self, bool enable ```
void q_mdisubwindow_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QMdiSubWindow* self, bool enable ```
void q_mdisubwindow_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QMdiSubWindow* self, QBitmap* mask ```
void q_mdisubwindow_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QMdiSubWindow* self, QRegion* mask ```
void q_mdisubwindow_set_mask_with_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QMdiSubWindow* self ```
QRegion* q_mdisubwindow_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMdiSubWindow* self, QPaintDevice* target ```
void q_mdisubwindow_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMdiSubWindow* self, QPainter* painter ```
void q_mdisubwindow_render_with_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QMdiSubWindow* self ```
QPixmap* q_mdisubwindow_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QMdiSubWindow* self ```
QGraphicsEffect* q_mdisubwindow_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QMdiSubWindow* self, QGraphicsEffect* effect ```
void q_mdisubwindow_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QMdiSubWindow* self, enum Qt__GestureType typeVal ```
void q_mdisubwindow_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QMdiSubWindow* self, enum Qt__GestureType typeVal ```
void q_mdisubwindow_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QMdiSubWindow* self, const char* windowTitle ```
void q_mdisubwindow_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QMdiSubWindow* self, const char* styleSheet ```
void q_mdisubwindow_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QMdiSubWindow* self ```
const char* q_mdisubwindow_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QMdiSubWindow* self ```
const char* q_mdisubwindow_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QMdiSubWindow* self, QIcon* icon ```
void q_mdisubwindow_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QMdiSubWindow* self ```
QIcon* q_mdisubwindow_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QMdiSubWindow* self, const char* windowIconText ```
void q_mdisubwindow_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QMdiSubWindow* self ```
const char* q_mdisubwindow_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QMdiSubWindow* self, const char* windowRole ```
void q_mdisubwindow_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QMdiSubWindow* self ```
const char* q_mdisubwindow_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QMdiSubWindow* self, const char* filePath ```
void q_mdisubwindow_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QMdiSubWindow* self ```
const char* q_mdisubwindow_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QMdiSubWindow* self, double level ```
void q_mdisubwindow_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QMdiSubWindow* self ```
double q_mdisubwindow_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QMdiSubWindow* self, const char* toolTip ```
void q_mdisubwindow_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QMdiSubWindow* self ```
const char* q_mdisubwindow_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QMdiSubWindow* self, int msec ```
void q_mdisubwindow_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QMdiSubWindow* self, const char* statusTip ```
void q_mdisubwindow_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QMdiSubWindow* self ```
const char* q_mdisubwindow_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QMdiSubWindow* self, const char* whatsThis ```
void q_mdisubwindow_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QMdiSubWindow* self ```
const char* q_mdisubwindow_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QMdiSubWindow* self ```
const char* q_mdisubwindow_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QMdiSubWindow* self, const char* name ```
void q_mdisubwindow_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QMdiSubWindow* self ```
const char* q_mdisubwindow_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QMdiSubWindow* self, const char* description ```
void q_mdisubwindow_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QMdiSubWindow* self, enum Qt__LayoutDirection direction ```
void q_mdisubwindow_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QMdiSubWindow* self ```
int64_t q_mdisubwindow_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QMdiSubWindow* self, QLocale* locale ```
void q_mdisubwindow_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QMdiSubWindow* self ```
QLocale* q_mdisubwindow_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QMdiSubWindow* self, enum Qt__FocusReason reason ```
void q_mdisubwindow_set_focus_with_reason(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QMdiSubWindow* self ```
int64_t q_mdisubwindow_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QMdiSubWindow* self, enum Qt__FocusPolicy policy ```
void q_mdisubwindow_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_mdisubwindow_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QMdiSubWindow* self, QWidget* focusProxy ```
void q_mdisubwindow_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QMdiSubWindow* self ```
QWidget* q_mdisubwindow_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QMdiSubWindow* self ```
int64_t q_mdisubwindow_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QMdiSubWindow* self, enum Qt__ContextMenuPolicy policy ```
void q_mdisubwindow_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QMdiSubWindow* self, QCursor* param1 ```
void q_mdisubwindow_grab_mouse_with_q_cursor(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QMdiSubWindow* self, QKeySequence* key ```
int32_t q_mdisubwindow_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QMdiSubWindow* self, int id ```
void q_mdisubwindow_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QMdiSubWindow* self, int id ```
void q_mdisubwindow_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QMdiSubWindow* self, int id ```
void q_mdisubwindow_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_mdisubwindow_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_mdisubwindow_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QMdiSubWindow* self, bool enable ```
void q_mdisubwindow_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QMdiSubWindow* self ```
QGraphicsProxyWidget* q_mdisubwindow_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMdiSubWindow* self, int x, int y, int w, int h ```
void q_mdisubwindow_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMdiSubWindow* self, QRect* param1 ```
void q_mdisubwindow_update_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMdiSubWindow* self, QRegion* param1 ```
void q_mdisubwindow_update_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMdiSubWindow* self, int x, int y, int w, int h ```
void q_mdisubwindow_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMdiSubWindow* self, QRect* param1 ```
void q_mdisubwindow_repaint_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMdiSubWindow* self, QRegion* param1 ```
void q_mdisubwindow_repaint_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QMdiSubWindow* self, bool hidden ```
void q_mdisubwindow_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QMdiSubWindow* self, QWidget* param1 ```
void q_mdisubwindow_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QMdiSubWindow* self, int x, int y ```
void q_mdisubwindow_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QMdiSubWindow* self, QPoint* param1 ```
void q_mdisubwindow_move_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QMdiSubWindow* self, int w, int h ```
void q_mdisubwindow_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QMdiSubWindow* self, QSize* param1 ```
void q_mdisubwindow_resize_with_q_size(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QMdiSubWindow* self, int x, int y, int w, int h ```
void q_mdisubwindow_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QMdiSubWindow* self, QRect* geometry ```
void q_mdisubwindow_set_geometry_with_geometry(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QMdiSubWindow* self ```
char* q_mdisubwindow_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QMdiSubWindow* self, const char* geometry ```
bool q_mdisubwindow_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QMdiSubWindow* self, QWidget* param1 ```
bool q_mdisubwindow_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QMdiSubWindow* self ```
int64_t q_mdisubwindow_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QMdiSubWindow* self, int state ```
void q_mdisubwindow_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QMdiSubWindow* self, int state ```
void q_mdisubwindow_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QMdiSubWindow* self ```
QSizePolicy* q_mdisubwindow_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QMdiSubWindow* self, QSizePolicy* sizePolicy ```
void q_mdisubwindow_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QMdiSubWindow* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_mdisubwindow_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QMdiSubWindow* self ```
QRegion* q_mdisubwindow_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QMdiSubWindow* self, int left, int top, int right, int bottom ```
void q_mdisubwindow_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QMdiSubWindow* self, QMargins* margins ```
void q_mdisubwindow_set_contents_margins_with_margins(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QMdiSubWindow* self ```
QMargins* q_mdisubwindow_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QMdiSubWindow* self ```
QRect* q_mdisubwindow_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QMdiSubWindow* self ```
QLayout* q_mdisubwindow_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QMdiSubWindow* self, QLayout* layout ```
void q_mdisubwindow_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QMdiSubWindow* self, QWidget* parent ```
void q_mdisubwindow_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QMdiSubWindow* self, QWidget* parent, int f ```
void q_mdisubwindow_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QMdiSubWindow* self, int dx, int dy ```
void q_mdisubwindow_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QMdiSubWindow* self, int dx, int dy, QRect* param3 ```
void q_mdisubwindow_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QMdiSubWindow* self ```
QWidget* q_mdisubwindow_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QMdiSubWindow* self ```
QWidget* q_mdisubwindow_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QMdiSubWindow* self ```
QWidget* q_mdisubwindow_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QMdiSubWindow* self, bool on ```
void q_mdisubwindow_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMdiSubWindow* self, QAction* action ```
void q_mdisubwindow_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QMdiSubWindow* self, QAction* actions[] ```
void q_mdisubwindow_add_actions(void* self, void* actions[]);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QMdiSubWindow* self, QAction* before, QAction* actions[] ```
void q_mdisubwindow_insert_actions(void* self, void* before, void* actions[]);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QMdiSubWindow* self, QAction* before, QAction* action ```
void q_mdisubwindow_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QMdiSubWindow* self, QAction* action ```
void q_mdisubwindow_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QMdiSubWindow* self ```
libqt_list /* of QAction* */ q_mdisubwindow_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMdiSubWindow* self, const char* text ```
QAction* q_mdisubwindow_add_action_with_text(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMdiSubWindow* self, QIcon* icon, const char* text ```
QAction* q_mdisubwindow_add_action2(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMdiSubWindow* self, const char* text, QKeySequence* shortcut ```
QAction* q_mdisubwindow_add_action3(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMdiSubWindow* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_mdisubwindow_add_action4(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QMdiSubWindow* self ```
QWidget* q_mdisubwindow_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QMdiSubWindow* self, int typeVal ```
void q_mdisubwindow_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QMdiSubWindow* self ```
int64_t q_mdisubwindow_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QMdiSubWindow* self, enum Qt__WindowType param1 ```
void q_mdisubwindow_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QMdiSubWindow* self, int typeVal ```
void q_mdisubwindow_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QMdiSubWindow* self ```
int64_t q_mdisubwindow_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_mdisubwindow_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QMdiSubWindow* self, int x, int y ```
QWidget* q_mdisubwindow_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QMdiSubWindow* self, QPoint* p ```
QWidget* q_mdisubwindow_child_at_with_q_point(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QMdiSubWindow* self, enum Qt__WidgetAttribute param1 ```
void q_mdisubwindow_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QMdiSubWindow* self, enum Qt__WidgetAttribute param1 ```
bool q_mdisubwindow_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QMdiSubWindow* self, QWidget* child ```
bool q_mdisubwindow_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QMdiSubWindow* self, bool enabled ```
void q_mdisubwindow_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QMdiSubWindow* self ```
QBackingStore* q_mdisubwindow_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QMdiSubWindow* self ```
QWindow* q_mdisubwindow_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QMdiSubWindow* self ```
QScreen* q_mdisubwindow_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QMdiSubWindow* self, QScreen* screen ```
void q_mdisubwindow_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_mdisubwindow_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QMdiSubWindow* self, const char* title ```
void q_mdisubwindow_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// ``` QMdiSubWindow* self, void (*slot)(QWidget*, const char*) ```
void q_mdisubwindow_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QMdiSubWindow* self, QIcon* icon ```
void q_mdisubwindow_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// ``` QMdiSubWindow* self, void (*slot)(QWidget*, QIcon*) ```
void q_mdisubwindow_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QMdiSubWindow* self, const char* iconText ```
void q_mdisubwindow_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// ``` QMdiSubWindow* self, void (*slot)(QWidget*, const char*) ```
void q_mdisubwindow_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QMdiSubWindow* self, QPoint* pos ```
void q_mdisubwindow_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// ``` QMdiSubWindow* self, void (*slot)(QWidget*, QPoint*) ```
void q_mdisubwindow_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QMdiSubWindow* self ```
int64_t q_mdisubwindow_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QMdiSubWindow* self, int hints ```
void q_mdisubwindow_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMdiSubWindow* self, QPaintDevice* target, QPoint* targetOffset ```
void q_mdisubwindow_render2(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMdiSubWindow* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_mdisubwindow_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMdiSubWindow* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_mdisubwindow_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMdiSubWindow* self, QPainter* painter, QPoint* targetOffset ```
void q_mdisubwindow_render22(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMdiSubWindow* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_mdisubwindow_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMdiSubWindow* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_mdisubwindow_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QMdiSubWindow* self, QRect* rectangle ```
QPixmap* q_mdisubwindow_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QMdiSubWindow* self, enum Qt__GestureType typeVal, int flags ```
void q_mdisubwindow_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QMdiSubWindow* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_mdisubwindow_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QMdiSubWindow* self, int id, bool enable ```
void q_mdisubwindow_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QMdiSubWindow* self, int id, bool enable ```
void q_mdisubwindow_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QMdiSubWindow* self, enum Qt__WindowType param1, bool on ```
void q_mdisubwindow_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QMdiSubWindow* self, enum Qt__WidgetAttribute param1, bool on ```
void q_mdisubwindow_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_mdisubwindow_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_mdisubwindow_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QMdiSubWindow* self ```
const char* q_mdisubwindow_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QMdiSubWindow* self, const char* name ```
void q_mdisubwindow_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QMdiSubWindow* self, bool b ```
bool q_mdisubwindow_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QMdiSubWindow* self ```
QThread* q_mdisubwindow_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QMdiSubWindow* self, QThread* thread ```
void q_mdisubwindow_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMdiSubWindow* self, int interval ```
int32_t q_mdisubwindow_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QMdiSubWindow* self, int id ```
void q_mdisubwindow_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QMdiSubWindow* self ```
libqt_list /* of QObject* */ q_mdisubwindow_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QMdiSubWindow* self, QObject* filterObj ```
void q_mdisubwindow_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QMdiSubWindow* self, QObject* obj ```
void q_mdisubwindow_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_mdisubwindow_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMdiSubWindow* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_mdisubwindow_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_mdisubwindow_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_mdisubwindow_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QMdiSubWindow* self, const char* name, QVariant* value ```
bool q_mdisubwindow_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QMdiSubWindow* self, const char* name ```
QVariant* q_mdisubwindow_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QMdiSubWindow* self ```
const char** q_mdisubwindow_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMdiSubWindow* self ```
QBindingStorage* q_mdisubwindow_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMdiSubWindow* self ```
QBindingStorage* q_mdisubwindow_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QMdiSubWindow* self, void (*slot)(QObject*) ```
void q_mdisubwindow_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QMdiSubWindow* self ```
QObject* q_mdisubwindow_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QMdiSubWindow* self, const char* classname ```
bool q_mdisubwindow_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMdiSubWindow* self, int interval, enum Qt__TimerType timerType ```
int32_t q_mdisubwindow_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_mdisubwindow_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMdiSubWindow* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_mdisubwindow_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMdiSubWindow* self, QObject* param1 ```
void q_mdisubwindow_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QMdiSubWindow* self, void (*slot)(QObject*, QObject*) ```
void q_mdisubwindow_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QMdiSubWindow* self ```
double q_mdisubwindow_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QMdiSubWindow* self ```
double q_mdisubwindow_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_mdisubwindow_device_pixel_ratio_f_scale();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_dev_type(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, int32_t (*slot)() ```
void q_mdisubwindow_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, bool visible ```
void q_mdisubwindow_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, bool visible ```
void q_mdisubwindow_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, bool) ```
void q_mdisubwindow_on_set_visible(void* self, void (*slot)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, int param1 ```
int32_t q_mdisubwindow_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, int param1 ```
int32_t q_mdisubwindow_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, int32_t (*slot)(QMdiSubWindow*, int) ```
void q_mdisubwindow_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, bool (*slot)() ```
void q_mdisubwindow_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self ```
QPaintEngine* q_mdisubwindow_paint_engine(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self ```
QPaintEngine* q_mdisubwindow_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QPaintEngine* (*slot)() ```
void q_mdisubwindow_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, QWheelEvent* event ```
void q_mdisubwindow_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QWheelEvent* event ```
void q_mdisubwindow_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QWheelEvent*) ```
void q_mdisubwindow_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, QKeyEvent* event ```
void q_mdisubwindow_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QKeyEvent* event ```
void q_mdisubwindow_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QKeyEvent*) ```
void q_mdisubwindow_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, QEnterEvent* event ```
void q_mdisubwindow_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QEnterEvent* event ```
void q_mdisubwindow_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QEnterEvent*) ```
void q_mdisubwindow_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, QTabletEvent* event ```
void q_mdisubwindow_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QTabletEvent* event ```
void q_mdisubwindow_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QTabletEvent*) ```
void q_mdisubwindow_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, QActionEvent* event ```
void q_mdisubwindow_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QActionEvent* event ```
void q_mdisubwindow_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QActionEvent*) ```
void q_mdisubwindow_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, QDragEnterEvent* event ```
void q_mdisubwindow_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QDragEnterEvent* event ```
void q_mdisubwindow_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QDragEnterEvent*) ```
void q_mdisubwindow_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, QDragMoveEvent* event ```
void q_mdisubwindow_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QDragMoveEvent* event ```
void q_mdisubwindow_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QDragMoveEvent*) ```
void q_mdisubwindow_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, QDragLeaveEvent* event ```
void q_mdisubwindow_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QDragLeaveEvent* event ```
void q_mdisubwindow_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QDragLeaveEvent*) ```
void q_mdisubwindow_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, QDropEvent* event ```
void q_mdisubwindow_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QDropEvent* event ```
void q_mdisubwindow_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QDropEvent*) ```
void q_mdisubwindow_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, const char* eventType, void* message, intptr_t* result ```
bool q_mdisubwindow_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, const char* eventType, void* message, intptr_t* result ```
bool q_mdisubwindow_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, bool (*slot)(QMdiSubWindow*, const char*, void*, intptr_t*) ```
void q_mdisubwindow_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_mdisubwindow_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_mdisubwindow_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, int32_t (*slot)(QMdiSubWindow*, enum QPaintDevice__PaintDeviceMetric) ```
void q_mdisubwindow_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, QPainter* painter ```
void q_mdisubwindow_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QPainter* painter ```
void q_mdisubwindow_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QPainter*) ```
void q_mdisubwindow_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, QPoint* offset ```
QPaintDevice* q_mdisubwindow_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QPoint* offset ```
QPaintDevice* q_mdisubwindow_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QPaintDevice* (*slot)(QMdiSubWindow*, QPoint*) ```
void q_mdisubwindow_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self ```
QPainter* q_mdisubwindow_shared_painter(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self ```
QPainter* q_mdisubwindow_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QPainter* (*slot)() ```
void q_mdisubwindow_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, QInputMethodEvent* param1 ```
void q_mdisubwindow_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QInputMethodEvent* param1 ```
void q_mdisubwindow_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QInputMethodEvent*) ```
void q_mdisubwindow_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_mdisubwindow_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_mdisubwindow_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QVariant* (*slot)(QMdiSubWindow*, enum Qt__InputMethodQuery) ```
void q_mdisubwindow_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, bool next ```
bool q_mdisubwindow_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, bool next ```
bool q_mdisubwindow_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, bool (*slot)(QMdiSubWindow*, bool) ```
void q_mdisubwindow_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, QEvent* event ```
void q_mdisubwindow_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QEvent* event ```
void q_mdisubwindow_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QEvent*) ```
void q_mdisubwindow_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, QMetaMethod* signal ```
void q_mdisubwindow_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QMetaMethod* signal ```
void q_mdisubwindow_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QMetaMethod*) ```
void q_mdisubwindow_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, QMetaMethod* signal ```
void q_mdisubwindow_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QMetaMethod* signal ```
void q_mdisubwindow_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)(QMdiSubWindow*, QMetaMethod*) ```
void q_mdisubwindow_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)() ```
void q_mdisubwindow_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_create(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_qbase_create(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)() ```
void q_mdisubwindow_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_destroy(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, void (*slot)() ```
void q_mdisubwindow_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_focus_next_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, bool (*slot)() ```
void q_mdisubwindow_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self ```
bool q_mdisubwindow_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, bool (*slot)() ```
void q_mdisubwindow_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self ```
QObject* q_mdisubwindow_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self ```
QObject* q_mdisubwindow_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QObject* (*slot)() ```
void q_mdisubwindow_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self ```
int32_t q_mdisubwindow_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, int32_t (*slot)() ```
void q_mdisubwindow_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, const char* signal ```
int32_t q_mdisubwindow_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, const char* signal ```
int32_t q_mdisubwindow_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, int32_t (*slot)(QMdiSubWindow*, const char*) ```
void q_mdisubwindow_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiSubWindow* self, QMetaMethod* signal ```
bool q_mdisubwindow_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiSubWindow* self, QMetaMethod* signal ```
bool q_mdisubwindow_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiSubWindow* self, bool (*slot)(QMdiSubWindow*, QMetaMethod*) ```
void q_mdisubwindow_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QMdiSubWindow* self ```
void q_mdisubwindow_delete(void* self);

/// https://doc.qt.io/qt-6/qmdisubwindow.html#types

typedef enum {
    QMDISUBWINDOW_SUBWINDOWOPTION_ALLOWOUTSIDEAREAHORIZONTALLY = 1,
    QMDISUBWINDOW_SUBWINDOWOPTION_ALLOWOUTSIDEAREAVERTICALLY = 2,
    QMDISUBWINDOW_SUBWINDOWOPTION_RUBBERBANDRESIZE = 4,
    QMDISUBWINDOW_SUBWINDOWOPTION_RUBBERBANDMOVE = 8
} QMdiSubWindow__SubWindowOption;

#endif
