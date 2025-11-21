#pragma once
#ifndef SRC_QT6C_LIBQMDISUBWINDOW_H
#define SRC_QT6C_LIBQMDISUBWINDOW_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qmdisubwindow.html

/// q_mdisubwindow_new constructs a new QMdiSubWindow object.
///
/// @param parent QWidget*
QMdiSubWindow* q_mdisubwindow_new(void* parent);

/// q_mdisubwindow_new2 constructs a new QMdiSubWindow object.
///
QMdiSubWindow* q_mdisubwindow_new2();

/// q_mdisubwindow_new3 constructs a new QMdiSubWindow object.
///
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QMdiSubWindow* q_mdisubwindow_new3(void* parent, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QMdiSubWindow*
const QMetaObject* q_mdisubwindow_meta_object(void* self);

/// @param self QMdiSubWindow*
/// @param param1 const char*
void* q_mdisubwindow_metacast(void* self, const char* param1);

/// @param self QMdiSubWindow*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_mdisubwindow_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QMdiSubWindow*
/// @param callback int32_t func(QMdiSubWindow* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_mdisubwindow_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QMdiSubWindow*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_mdisubwindow_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_mdisubwindow_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#sizeHint)
///
/// @param self QMdiSubWindow*
QSize* q_mdisubwindow_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QMdiSubWindow*
/// @param callback QSize* func()
void q_mdisubwindow_on_size_hint(void* self, QSize* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#sizeHint)
///
/// Base class method implementation
///
/// @param self QMdiSubWindow*
QSize* q_mdisubwindow_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#minimumSizeHint)
///
/// @param self QMdiSubWindow*
QSize* q_mdisubwindow_minimum_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#minimumSizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QMdiSubWindow*
/// @param callback QSize* func()
void q_mdisubwindow_on_minimum_size_hint(void* self, QSize* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#minimumSizeHint)
///
/// Base class method implementation
///
/// @param self QMdiSubWindow*
QSize* q_mdisubwindow_qbase_minimum_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#setWidget)
///
/// @param self QMdiSubWindow*
/// @param widget QWidget*
void q_mdisubwindow_set_widget(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#widget)
///
/// @param self QMdiSubWindow*
QWidget* q_mdisubwindow_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#maximizedButtonsWidget)
///
/// @param self QMdiSubWindow*
QWidget* q_mdisubwindow_maximized_buttons_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#maximizedSystemMenuIconWidget)
///
/// @param self QMdiSubWindow*
QWidget* q_mdisubwindow_maximized_system_menu_icon_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#isShaded)
///
/// @param self QMdiSubWindow*
bool q_mdisubwindow_is_shaded(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#setOption)
///
/// @param self QMdiSubWindow*
/// @param option enum QMdiSubWindow__SubWindowOption
void q_mdisubwindow_set_option(void* self, int32_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#testOption)
///
/// @param self QMdiSubWindow*
/// @param param1 enum QMdiSubWindow__SubWindowOption
bool q_mdisubwindow_test_option(void* self, int32_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#setKeyboardSingleStep)
///
/// @param self QMdiSubWindow*
/// @param step int
void q_mdisubwindow_set_keyboard_single_step(void* self, int step);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#keyboardSingleStep)
///
/// @param self QMdiSubWindow*
int32_t q_mdisubwindow_keyboard_single_step(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#setKeyboardPageStep)
///
/// @param self QMdiSubWindow*
/// @param step int
void q_mdisubwindow_set_keyboard_page_step(void* self, int step);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#keyboardPageStep)
///
/// @param self QMdiSubWindow*
int32_t q_mdisubwindow_keyboard_page_step(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#setSystemMenu)
///
/// @param self QMdiSubWindow*
/// @param systemMenu QMenu*
void q_mdisubwindow_set_system_menu(void* self, void* systemMenu);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#systemMenu)
///
/// @param self QMdiSubWindow*
QMenu* q_mdisubwindow_system_menu(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#mdiArea)
///
/// @param self QMdiSubWindow*
QMdiArea* q_mdisubwindow_mdi_area(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#windowStateChanged)
///
/// @param self QMdiSubWindow*
/// @param oldState flag of enum Qt__WindowState
/// @param newState flag of enum Qt__WindowState
void q_mdisubwindow_window_state_changed(void* self, int32_t oldState, int32_t newState);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#windowStateChanged)
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, flag of enum Qt__WindowState oldState, flag of enum Qt__WindowState newState)
void q_mdisubwindow_on_window_state_changed(void* self, void (*callback)(void*, int32_t, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#aboutToActivate)
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_about_to_activate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#aboutToActivate)
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self)
void q_mdisubwindow_on_about_to_activate(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#showSystemMenu)
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_show_system_menu(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#showShaded)
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_show_shaded(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#eventFilter)
///
/// @param self QMdiSubWindow*
/// @param object QObject*
/// @param event QEvent*
bool q_mdisubwindow_event_filter(void* self, void* object, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self QMdiSubWindow*
/// @param callback bool func(QMdiSubWindow* self, QObject* object, QEvent* event)
void q_mdisubwindow_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#eventFilter)
///
/// Base class method implementation
///
/// @param self QMdiSubWindow*
/// @param object QObject*
/// @param event QEvent*
bool q_mdisubwindow_qbase_event_filter(void* self, void* object, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#event)
///
/// @param self QMdiSubWindow*
/// @param event QEvent*
bool q_mdisubwindow_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QMdiSubWindow*
/// @param callback bool func(QMdiSubWindow* self, QEvent* event)
void q_mdisubwindow_on_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#event)
///
/// Base class method implementation
///
/// @param self QMdiSubWindow*
/// @param event QEvent*
bool q_mdisubwindow_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#showEvent)
///
/// @param self QMdiSubWindow*
/// @param showEvent QShowEvent*
void q_mdisubwindow_show_event(void* self, void* showEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#showEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QShowEvent* showEvent)
void q_mdisubwindow_on_show_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#showEvent)
///
/// Base class method implementation
///
/// @param self QMdiSubWindow*
/// @param showEvent QShowEvent*
void q_mdisubwindow_qbase_show_event(void* self, void* showEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#hideEvent)
///
/// @param self QMdiSubWindow*
/// @param hideEvent QHideEvent*
void q_mdisubwindow_hide_event(void* self, void* hideEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#hideEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QHideEvent* hideEvent)
void q_mdisubwindow_on_hide_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#hideEvent)
///
/// Base class method implementation
///
/// @param self QMdiSubWindow*
/// @param hideEvent QHideEvent*
void q_mdisubwindow_qbase_hide_event(void* self, void* hideEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#changeEvent)
///
/// @param self QMdiSubWindow*
/// @param changeEvent QEvent*
void q_mdisubwindow_change_event(void* self, void* changeEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QEvent* changeEvent)
void q_mdisubwindow_on_change_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#changeEvent)
///
/// Base class method implementation
///
/// @param self QMdiSubWindow*
/// @param changeEvent QEvent*
void q_mdisubwindow_qbase_change_event(void* self, void* changeEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#closeEvent)
///
/// @param self QMdiSubWindow*
/// @param closeEvent QCloseEvent*
void q_mdisubwindow_close_event(void* self, void* closeEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#closeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QCloseEvent* closeEvent)
void q_mdisubwindow_on_close_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#closeEvent)
///
/// Base class method implementation
///
/// @param self QMdiSubWindow*
/// @param closeEvent QCloseEvent*
void q_mdisubwindow_qbase_close_event(void* self, void* closeEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#leaveEvent)
///
/// @param self QMdiSubWindow*
/// @param leaveEvent QEvent*
void q_mdisubwindow_leave_event(void* self, void* leaveEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#leaveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QEvent* leaveEvent)
void q_mdisubwindow_on_leave_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#leaveEvent)
///
/// Base class method implementation
///
/// @param self QMdiSubWindow*
/// @param leaveEvent QEvent*
void q_mdisubwindow_qbase_leave_event(void* self, void* leaveEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#resizeEvent)
///
/// @param self QMdiSubWindow*
/// @param resizeEvent QResizeEvent*
void q_mdisubwindow_resize_event(void* self, void* resizeEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QResizeEvent* resizeEvent)
void q_mdisubwindow_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self QMdiSubWindow*
/// @param resizeEvent QResizeEvent*
void q_mdisubwindow_qbase_resize_event(void* self, void* resizeEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#timerEvent)
///
/// @param self QMdiSubWindow*
/// @param timerEvent QTimerEvent*
void q_mdisubwindow_timer_event(void* self, void* timerEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QTimerEvent* timerEvent)
void q_mdisubwindow_on_timer_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#timerEvent)
///
/// Base class method implementation
///
/// @param self QMdiSubWindow*
/// @param timerEvent QTimerEvent*
void q_mdisubwindow_qbase_timer_event(void* self, void* timerEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#moveEvent)
///
/// @param self QMdiSubWindow*
/// @param moveEvent QMoveEvent*
void q_mdisubwindow_move_event(void* self, void* moveEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#moveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QMoveEvent* moveEvent)
void q_mdisubwindow_on_move_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#moveEvent)
///
/// Base class method implementation
///
/// @param self QMdiSubWindow*
/// @param moveEvent QMoveEvent*
void q_mdisubwindow_qbase_move_event(void* self, void* moveEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#paintEvent)
///
/// @param self QMdiSubWindow*
/// @param paintEvent QPaintEvent*
void q_mdisubwindow_paint_event(void* self, void* paintEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QPaintEvent* paintEvent)
void q_mdisubwindow_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#paintEvent)
///
/// Base class method implementation
///
/// @param self QMdiSubWindow*
/// @param paintEvent QPaintEvent*
void q_mdisubwindow_qbase_paint_event(void* self, void* paintEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#mousePressEvent)
///
/// @param self QMdiSubWindow*
/// @param mouseEvent QMouseEvent*
void q_mdisubwindow_mouse_press_event(void* self, void* mouseEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QMouseEvent* mouseEvent)
void q_mdisubwindow_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self QMdiSubWindow*
/// @param mouseEvent QMouseEvent*
void q_mdisubwindow_qbase_mouse_press_event(void* self, void* mouseEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#mouseDoubleClickEvent)
///
/// @param self QMdiSubWindow*
/// @param mouseEvent QMouseEvent*
void q_mdisubwindow_mouse_double_click_event(void* self, void* mouseEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#mouseDoubleClickEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QMouseEvent* mouseEvent)
void q_mdisubwindow_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#mouseDoubleClickEvent)
///
/// Base class method implementation
///
/// @param self QMdiSubWindow*
/// @param mouseEvent QMouseEvent*
void q_mdisubwindow_qbase_mouse_double_click_event(void* self, void* mouseEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#mouseReleaseEvent)
///
/// @param self QMdiSubWindow*
/// @param mouseEvent QMouseEvent*
void q_mdisubwindow_mouse_release_event(void* self, void* mouseEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QMouseEvent* mouseEvent)
void q_mdisubwindow_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self QMdiSubWindow*
/// @param mouseEvent QMouseEvent*
void q_mdisubwindow_qbase_mouse_release_event(void* self, void* mouseEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#mouseMoveEvent)
///
/// @param self QMdiSubWindow*
/// @param mouseEvent QMouseEvent*
void q_mdisubwindow_mouse_move_event(void* self, void* mouseEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QMouseEvent* mouseEvent)
void q_mdisubwindow_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self QMdiSubWindow*
/// @param mouseEvent QMouseEvent*
void q_mdisubwindow_qbase_mouse_move_event(void* self, void* mouseEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#keyPressEvent)
///
/// @param self QMdiSubWindow*
/// @param keyEvent QKeyEvent*
void q_mdisubwindow_key_press_event(void* self, void* keyEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QKeyEvent* keyEvent)
void q_mdisubwindow_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self QMdiSubWindow*
/// @param keyEvent QKeyEvent*
void q_mdisubwindow_qbase_key_press_event(void* self, void* keyEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#contextMenuEvent)
///
/// @param self QMdiSubWindow*
/// @param contextMenuEvent QContextMenuEvent*
void q_mdisubwindow_context_menu_event(void* self, void* contextMenuEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#contextMenuEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QContextMenuEvent* contextMenuEvent)
void q_mdisubwindow_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#contextMenuEvent)
///
/// Base class method implementation
///
/// @param self QMdiSubWindow*
/// @param contextMenuEvent QContextMenuEvent*
void q_mdisubwindow_qbase_context_menu_event(void* self, void* contextMenuEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#focusInEvent)
///
/// @param self QMdiSubWindow*
/// @param focusInEvent QFocusEvent*
void q_mdisubwindow_focus_in_event(void* self, void* focusInEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QFocusEvent* focusInEvent)
void q_mdisubwindow_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#focusInEvent)
///
/// Base class method implementation
///
/// @param self QMdiSubWindow*
/// @param focusInEvent QFocusEvent*
void q_mdisubwindow_qbase_focus_in_event(void* self, void* focusInEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#focusOutEvent)
///
/// @param self QMdiSubWindow*
/// @param focusOutEvent QFocusEvent*
void q_mdisubwindow_focus_out_event(void* self, void* focusOutEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QFocusEvent* focusOutEvent)
void q_mdisubwindow_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#focusOutEvent)
///
/// Base class method implementation
///
/// @param self QMdiSubWindow*
/// @param focusOutEvent QFocusEvent*
void q_mdisubwindow_qbase_focus_out_event(void* self, void* focusOutEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#childEvent)
///
/// @param self QMdiSubWindow*
/// @param childEvent QChildEvent*
void q_mdisubwindow_child_event(void* self, void* childEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#childEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QChildEvent* childEvent)
void q_mdisubwindow_on_child_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#childEvent)
///
/// Base class method implementation
///
/// @param self QMdiSubWindow*
/// @param childEvent QChildEvent*
void q_mdisubwindow_qbase_child_event(void* self, void* childEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_mdisubwindow_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_mdisubwindow_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#setOption)
///
/// @param self QMdiSubWindow*
/// @param option enum QMdiSubWindow__SubWindowOption
/// @param on bool
void q_mdisubwindow_set_option2(void* self, int32_t option, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QMdiSubWindow*
uintptr_t q_mdisubwindow_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QMdiSubWindow*
uintptr_t q_mdisubwindow_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QMdiSubWindow*
uintptr_t q_mdisubwindow_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QMdiSubWindow*
QStyle* q_mdisubwindow_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QMdiSubWindow*
/// @param style QStyle*
void q_mdisubwindow_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QMdiSubWindow*
bool q_mdisubwindow_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QMdiSubWindow*
bool q_mdisubwindow_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QMdiSubWindow*
bool q_mdisubwindow_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QMdiSubWindow*
///
/// @return enum Qt__WindowModality
int32_t q_mdisubwindow_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QMdiSubWindow*
/// @param windowModality enum Qt__WindowModality
void q_mdisubwindow_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QMdiSubWindow*
bool q_mdisubwindow_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QMdiSubWindow*
/// @param param1 QWidget*
bool q_mdisubwindow_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QMdiSubWindow*
/// @param enabled bool
void q_mdisubwindow_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QMdiSubWindow*
/// @param disabled bool
void q_mdisubwindow_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QMdiSubWindow*
/// @param windowModified bool
void q_mdisubwindow_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QMdiSubWindow*
QRect* q_mdisubwindow_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QMdiSubWindow*
const QRect* q_mdisubwindow_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QMdiSubWindow*
QRect* q_mdisubwindow_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QMdiSubWindow*
int32_t q_mdisubwindow_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QMdiSubWindow*
int32_t q_mdisubwindow_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QMdiSubWindow*
QPoint* q_mdisubwindow_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QMdiSubWindow*
QSize* q_mdisubwindow_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QMdiSubWindow*
QSize* q_mdisubwindow_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QMdiSubWindow*
int32_t q_mdisubwindow_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QMdiSubWindow*
int32_t q_mdisubwindow_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QMdiSubWindow*
QRect* q_mdisubwindow_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QMdiSubWindow*
QRect* q_mdisubwindow_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QMdiSubWindow*
QRegion* q_mdisubwindow_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QMdiSubWindow*
QSize* q_mdisubwindow_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QMdiSubWindow*
QSize* q_mdisubwindow_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QMdiSubWindow*
int32_t q_mdisubwindow_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QMdiSubWindow*
int32_t q_mdisubwindow_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QMdiSubWindow*
int32_t q_mdisubwindow_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QMdiSubWindow*
int32_t q_mdisubwindow_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QMdiSubWindow*
/// @param minimumSize QSize*
void q_mdisubwindow_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QMdiSubWindow*
/// @param minw int
/// @param minh int
void q_mdisubwindow_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QMdiSubWindow*
/// @param maximumSize QSize*
void q_mdisubwindow_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QMdiSubWindow*
/// @param maxw int
/// @param maxh int
void q_mdisubwindow_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QMdiSubWindow*
/// @param minw int
void q_mdisubwindow_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QMdiSubWindow*
/// @param minh int
void q_mdisubwindow_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QMdiSubWindow*
/// @param maxw int
void q_mdisubwindow_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QMdiSubWindow*
/// @param maxh int
void q_mdisubwindow_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QMdiSubWindow*
QSize* q_mdisubwindow_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QMdiSubWindow*
/// @param sizeIncrement QSize*
void q_mdisubwindow_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QMdiSubWindow*
/// @param w int
/// @param h int
void q_mdisubwindow_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QMdiSubWindow*
QSize* q_mdisubwindow_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QMdiSubWindow*
/// @param baseSize QSize*
void q_mdisubwindow_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QMdiSubWindow*
/// @param basew int
/// @param baseh int
void q_mdisubwindow_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QMdiSubWindow*
/// @param fixedSize QSize*
void q_mdisubwindow_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QMdiSubWindow*
/// @param w int
/// @param h int
void q_mdisubwindow_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QMdiSubWindow*
/// @param w int
void q_mdisubwindow_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QMdiSubWindow*
/// @param h int
void q_mdisubwindow_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QMdiSubWindow*
/// @param param1 QPointF*
QPointF* q_mdisubwindow_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QMdiSubWindow*
/// @param param1 QPoint*
QPoint* q_mdisubwindow_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QMdiSubWindow*
/// @param param1 QPointF*
QPointF* q_mdisubwindow_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QMdiSubWindow*
/// @param param1 QPoint*
QPoint* q_mdisubwindow_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QMdiSubWindow*
/// @param param1 QPointF*
QPointF* q_mdisubwindow_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QMdiSubWindow*
/// @param param1 QPoint*
QPoint* q_mdisubwindow_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QMdiSubWindow*
/// @param param1 QPointF*
QPointF* q_mdisubwindow_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QMdiSubWindow*
/// @param param1 QPoint*
QPoint* q_mdisubwindow_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QMdiSubWindow*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* q_mdisubwindow_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QMdiSubWindow*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* q_mdisubwindow_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QMdiSubWindow*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* q_mdisubwindow_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QMdiSubWindow*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* q_mdisubwindow_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QMdiSubWindow*
QWidget* q_mdisubwindow_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QMdiSubWindow*
QWidget* q_mdisubwindow_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QMdiSubWindow*
QWidget* q_mdisubwindow_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QMdiSubWindow*
const QPalette* q_mdisubwindow_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QMdiSubWindow*
/// @param palette QPalette*
void q_mdisubwindow_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QMdiSubWindow*
/// @param backgroundRole enum QPalette__ColorRole
void q_mdisubwindow_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QMdiSubWindow*
///
/// @return enum QPalette__ColorRole
int32_t q_mdisubwindow_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QMdiSubWindow*
/// @param foregroundRole enum QPalette__ColorRole
void q_mdisubwindow_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QMdiSubWindow*
///
/// @return enum QPalette__ColorRole
int32_t q_mdisubwindow_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QMdiSubWindow*
const QFont* q_mdisubwindow_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QMdiSubWindow*
/// @param font QFont*
void q_mdisubwindow_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QMdiSubWindow*
QFontMetrics* q_mdisubwindow_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QMdiSubWindow*
QFontInfo* q_mdisubwindow_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QMdiSubWindow*
QCursor* q_mdisubwindow_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QMdiSubWindow*
/// @param cursor QCursor*
void q_mdisubwindow_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QMdiSubWindow*
/// @param enable bool
void q_mdisubwindow_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QMdiSubWindow*
bool q_mdisubwindow_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QMdiSubWindow*
bool q_mdisubwindow_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QMdiSubWindow*
/// @param enable bool
void q_mdisubwindow_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QMdiSubWindow*
bool q_mdisubwindow_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QMdiSubWindow*
/// @param mask QBitmap*
void q_mdisubwindow_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QMdiSubWindow*
/// @param mask QRegion*
void q_mdisubwindow_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QMdiSubWindow*
QRegion* q_mdisubwindow_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMdiSubWindow*
/// @param target QPaintDevice*
void q_mdisubwindow_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMdiSubWindow*
/// @param painter QPainter*
void q_mdisubwindow_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QMdiSubWindow*
QPixmap* q_mdisubwindow_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QMdiSubWindow*
QGraphicsEffect* q_mdisubwindow_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QMdiSubWindow*
/// @param effect QGraphicsEffect*
void q_mdisubwindow_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QMdiSubWindow*
/// @param type enum Qt__GestureType
void q_mdisubwindow_grab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QMdiSubWindow*
/// @param type enum Qt__GestureType
void q_mdisubwindow_ungrab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QMdiSubWindow*
/// @param windowTitle const char*
void q_mdisubwindow_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QMdiSubWindow*
/// @param styleSheet const char*
void q_mdisubwindow_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMdiSubWindow*
const char* q_mdisubwindow_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMdiSubWindow*
const char* q_mdisubwindow_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QMdiSubWindow*
/// @param icon QIcon*
void q_mdisubwindow_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QMdiSubWindow*
QIcon* q_mdisubwindow_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QMdiSubWindow*
/// @param windowIconText const char*
void q_mdisubwindow_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMdiSubWindow*
const char* q_mdisubwindow_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QMdiSubWindow*
/// @param windowRole const char*
void q_mdisubwindow_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMdiSubWindow*
const char* q_mdisubwindow_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QMdiSubWindow*
/// @param filePath const char*
void q_mdisubwindow_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMdiSubWindow*
const char* q_mdisubwindow_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QMdiSubWindow*
/// @param level double
void q_mdisubwindow_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QMdiSubWindow*
double q_mdisubwindow_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QMdiSubWindow*
bool q_mdisubwindow_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QMdiSubWindow*
/// @param toolTip const char*
void q_mdisubwindow_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMdiSubWindow*
const char* q_mdisubwindow_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QMdiSubWindow*
/// @param msec int
void q_mdisubwindow_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QMdiSubWindow*
int32_t q_mdisubwindow_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QMdiSubWindow*
/// @param statusTip const char*
void q_mdisubwindow_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMdiSubWindow*
const char* q_mdisubwindow_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QMdiSubWindow*
/// @param whatsThis const char*
void q_mdisubwindow_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMdiSubWindow*
const char* q_mdisubwindow_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMdiSubWindow*
const char* q_mdisubwindow_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QMdiSubWindow*
/// @param name const char*
void q_mdisubwindow_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMdiSubWindow*
const char* q_mdisubwindow_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QMdiSubWindow*
/// @param description const char*
void q_mdisubwindow_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QMdiSubWindow*
/// @param direction enum Qt__LayoutDirection
void q_mdisubwindow_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QMdiSubWindow*
///
/// @return enum Qt__LayoutDirection
int32_t q_mdisubwindow_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QMdiSubWindow*
/// @param locale QLocale*
void q_mdisubwindow_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QMdiSubWindow*
QLocale* q_mdisubwindow_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QMdiSubWindow*
bool q_mdisubwindow_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QMdiSubWindow*
bool q_mdisubwindow_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QMdiSubWindow*
bool q_mdisubwindow_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QMdiSubWindow*
/// @param reason enum Qt__FocusReason
void q_mdisubwindow_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QMdiSubWindow*
///
/// @return enum Qt__FocusPolicy
int32_t q_mdisubwindow_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QMdiSubWindow*
/// @param policy enum Qt__FocusPolicy
void q_mdisubwindow_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QMdiSubWindow*
bool q_mdisubwindow_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void q_mdisubwindow_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QMdiSubWindow*
/// @param focusProxy QWidget*
void q_mdisubwindow_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QMdiSubWindow*
QWidget* q_mdisubwindow_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QMdiSubWindow*
///
/// @return enum Qt__ContextMenuPolicy
int32_t q_mdisubwindow_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QMdiSubWindow*
/// @param policy enum Qt__ContextMenuPolicy
void q_mdisubwindow_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QMdiSubWindow*
/// @param param1 QCursor*
void q_mdisubwindow_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QMdiSubWindow*
/// @param key QKeySequence*
int32_t q_mdisubwindow_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QMdiSubWindow*
/// @param id int
void q_mdisubwindow_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QMdiSubWindow*
/// @param id int
void q_mdisubwindow_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QMdiSubWindow*
/// @param id int
void q_mdisubwindow_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_mdisubwindow_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_mdisubwindow_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QMdiSubWindow*
bool q_mdisubwindow_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QMdiSubWindow*
/// @param enable bool
void q_mdisubwindow_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QMdiSubWindow*
QGraphicsProxyWidget* q_mdisubwindow_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QMdiSubWindow*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_mdisubwindow_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QMdiSubWindow*
/// @param param1 QRect*
void q_mdisubwindow_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QMdiSubWindow*
/// @param param1 QRegion*
void q_mdisubwindow_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QMdiSubWindow*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_mdisubwindow_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QMdiSubWindow*
/// @param param1 QRect*
void q_mdisubwindow_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QMdiSubWindow*
/// @param param1 QRegion*
void q_mdisubwindow_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QMdiSubWindow*
/// @param hidden bool
void q_mdisubwindow_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QMdiSubWindow*
bool q_mdisubwindow_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QMdiSubWindow*
/// @param param1 QWidget*
void q_mdisubwindow_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QMdiSubWindow*
/// @param x int
/// @param y int
void q_mdisubwindow_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QMdiSubWindow*
/// @param param1 QPoint*
void q_mdisubwindow_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QMdiSubWindow*
/// @param w int
/// @param h int
void q_mdisubwindow_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QMdiSubWindow*
/// @param param1 QSize*
void q_mdisubwindow_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QMdiSubWindow*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_mdisubwindow_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QMdiSubWindow*
/// @param geometry QRect*
void q_mdisubwindow_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMdiSubWindow*
char* q_mdisubwindow_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QMdiSubWindow*
/// @param geometry const char*
bool q_mdisubwindow_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QMdiSubWindow*
bool q_mdisubwindow_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QMdiSubWindow*
/// @param param1 QWidget*
bool q_mdisubwindow_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QMdiSubWindow*
bool q_mdisubwindow_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QMdiSubWindow*
bool q_mdisubwindow_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QMdiSubWindow*
bool q_mdisubwindow_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QMdiSubWindow*
bool q_mdisubwindow_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QMdiSubWindow*
///
/// @return flag of enum Qt__WindowState
int32_t q_mdisubwindow_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QMdiSubWindow*
/// @param state flag of enum Qt__WindowState
void q_mdisubwindow_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QMdiSubWindow*
/// @param state flag of enum Qt__WindowState
void q_mdisubwindow_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QMdiSubWindow*
QSizePolicy* q_mdisubwindow_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QMdiSubWindow*
/// @param sizePolicy QSizePolicy*
void q_mdisubwindow_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QMdiSubWindow*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void q_mdisubwindow_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QMdiSubWindow*
QRegion* q_mdisubwindow_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QMdiSubWindow*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void q_mdisubwindow_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QMdiSubWindow*
/// @param margins QMargins*
void q_mdisubwindow_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QMdiSubWindow*
QMargins* q_mdisubwindow_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QMdiSubWindow*
QRect* q_mdisubwindow_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QMdiSubWindow*
QLayout* q_mdisubwindow_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QMdiSubWindow*
/// @param layout QLayout*
void q_mdisubwindow_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QMdiSubWindow*
/// @param parent QWidget*
void q_mdisubwindow_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QMdiSubWindow*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void q_mdisubwindow_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QMdiSubWindow*
/// @param dx int
/// @param dy int
void q_mdisubwindow_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QMdiSubWindow*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void q_mdisubwindow_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QMdiSubWindow*
QWidget* q_mdisubwindow_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QMdiSubWindow*
QWidget* q_mdisubwindow_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QMdiSubWindow*
QWidget* q_mdisubwindow_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QMdiSubWindow*
bool q_mdisubwindow_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QMdiSubWindow*
/// @param on bool
void q_mdisubwindow_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QMdiSubWindow*
/// @param action QAction*
void q_mdisubwindow_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QMdiSubWindow*
/// @param actions libqt_list /* of QAction* */
void q_mdisubwindow_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QMdiSubWindow*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void q_mdisubwindow_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QMdiSubWindow*
/// @param before QAction*
/// @param action QAction*
void q_mdisubwindow_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QMdiSubWindow*
/// @param action QAction*
void q_mdisubwindow_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QMdiSubWindow*
libqt_list /* of QAction* */ q_mdisubwindow_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QMdiSubWindow*
/// @param text const char*
QAction* q_mdisubwindow_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QMdiSubWindow*
/// @param icon QIcon*
/// @param text const char*
QAction* q_mdisubwindow_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QMdiSubWindow*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* q_mdisubwindow_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QMdiSubWindow*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* q_mdisubwindow_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QMdiSubWindow*
QWidget* q_mdisubwindow_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QMdiSubWindow*
/// @param type flag of enum Qt__WindowType
void q_mdisubwindow_set_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QMdiSubWindow*
///
/// @return flag of enum Qt__WindowType
int64_t q_mdisubwindow_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QMdiSubWindow*
/// @param param1 enum Qt__WindowType
void q_mdisubwindow_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QMdiSubWindow*
/// @param type flag of enum Qt__WindowType
void q_mdisubwindow_override_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QMdiSubWindow*
///
/// @return enum Qt__WindowType
int64_t q_mdisubwindow_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* q_mdisubwindow_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QMdiSubWindow*
/// @param x int
/// @param y int
QWidget* q_mdisubwindow_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QMdiSubWindow*
/// @param p QPoint*
QWidget* q_mdisubwindow_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QMdiSubWindow*
/// @param p QPointF*
QWidget* q_mdisubwindow_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QMdiSubWindow*
/// @param param1 enum Qt__WidgetAttribute
void q_mdisubwindow_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QMdiSubWindow*
/// @param param1 enum Qt__WidgetAttribute
bool q_mdisubwindow_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QMdiSubWindow*
/// @param child QWidget*
bool q_mdisubwindow_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QMdiSubWindow*
bool q_mdisubwindow_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QMdiSubWindow*
/// @param enabled bool
void q_mdisubwindow_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QMdiSubWindow*
QBackingStore* q_mdisubwindow_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QMdiSubWindow*
QWindow* q_mdisubwindow_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QMdiSubWindow*
QScreen* q_mdisubwindow_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QMdiSubWindow*
/// @param screen QScreen*
void q_mdisubwindow_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* q_mdisubwindow_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QMdiSubWindow*
/// @param title const char*
void q_mdisubwindow_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, const char* title)
void q_mdisubwindow_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QMdiSubWindow*
/// @param icon QIcon*
void q_mdisubwindow_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QIcon* icon)
void q_mdisubwindow_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QMdiSubWindow*
/// @param iconText const char*
void q_mdisubwindow_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, const char* iconText)
void q_mdisubwindow_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QMdiSubWindow*
/// @param pos QPoint*
void q_mdisubwindow_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QPoint* pos)
void q_mdisubwindow_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QMdiSubWindow*
///
/// @return flag of enum Qt__InputMethodHint
int64_t q_mdisubwindow_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QMdiSubWindow*
/// @param hints flag of enum Qt__InputMethodHint
void q_mdisubwindow_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMdiSubWindow*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void q_mdisubwindow_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMdiSubWindow*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void q_mdisubwindow_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMdiSubWindow*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void q_mdisubwindow_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMdiSubWindow*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void q_mdisubwindow_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMdiSubWindow*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void q_mdisubwindow_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMdiSubWindow*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void q_mdisubwindow_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QMdiSubWindow*
/// @param rectangle QRect*
QPixmap* q_mdisubwindow_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QMdiSubWindow*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void q_mdisubwindow_grab_gesture2(void* self, int64_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QMdiSubWindow*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t q_mdisubwindow_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QMdiSubWindow*
/// @param id int
/// @param enable bool
void q_mdisubwindow_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QMdiSubWindow*
/// @param id int
/// @param enable bool
void q_mdisubwindow_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QMdiSubWindow*
/// @param param1 enum Qt__WindowType
/// @param on bool
void q_mdisubwindow_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QMdiSubWindow*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void q_mdisubwindow_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* q_mdisubwindow_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* q_mdisubwindow_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMdiSubWindow*
const char* q_mdisubwindow_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QMdiSubWindow*
/// @param name char*
void q_mdisubwindow_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QMdiSubWindow*
bool q_mdisubwindow_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QMdiSubWindow*
bool q_mdisubwindow_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QMdiSubWindow*
bool q_mdisubwindow_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QMdiSubWindow*
bool q_mdisubwindow_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QMdiSubWindow*
/// @param b bool
bool q_mdisubwindow_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QMdiSubWindow*
QThread* q_mdisubwindow_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QMdiSubWindow*
/// @param thread QThread*
bool q_mdisubwindow_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMdiSubWindow*
/// @param interval int
int32_t q_mdisubwindow_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QMdiSubWindow*
/// @param id int
void q_mdisubwindow_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QMdiSubWindow*
/// @param id enum Qt__TimerId
void q_mdisubwindow_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QMdiSubWindow*
libqt_list /* of QObject* */ q_mdisubwindow_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QMdiSubWindow*
/// @param filterObj QObject*
void q_mdisubwindow_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QMdiSubWindow*
/// @param obj QObject*
void q_mdisubwindow_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_mdisubwindow_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QMdiSubWindow*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_mdisubwindow_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_mdisubwindow_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_mdisubwindow_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QMdiSubWindow*
/// @param name const char*
/// @param value QVariant*
bool q_mdisubwindow_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QMdiSubWindow*
/// @param name const char*
QVariant* q_mdisubwindow_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMdiSubWindow*
const char** q_mdisubwindow_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QMdiSubWindow*
QBindingStorage* q_mdisubwindow_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QMdiSubWindow*
const QBindingStorage* q_mdisubwindow_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self)
void q_mdisubwindow_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QMdiSubWindow*
QObject* q_mdisubwindow_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QMdiSubWindow*
/// @param classname const char*
bool q_mdisubwindow_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QMdiSubWindow*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_mdisubwindow_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMdiSubWindow*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_mdisubwindow_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_mdisubwindow_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QMdiSubWindow*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_mdisubwindow_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMdiSubWindow*
/// @param param1 QObject*
void q_mdisubwindow_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QObject* param1)
void q_mdisubwindow_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QMdiSubWindow*
bool q_mdisubwindow_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QMdiSubWindow*
int32_t q_mdisubwindow_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QMdiSubWindow*
int32_t q_mdisubwindow_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QMdiSubWindow*
int32_t q_mdisubwindow_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QMdiSubWindow*
int32_t q_mdisubwindow_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QMdiSubWindow*
int32_t q_mdisubwindow_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QMdiSubWindow*
int32_t q_mdisubwindow_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QMdiSubWindow*
double q_mdisubwindow_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QMdiSubWindow*
double q_mdisubwindow_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QMdiSubWindow*
int32_t q_mdisubwindow_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QMdiSubWindow*
int32_t q_mdisubwindow_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_mdisubwindow_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t q_mdisubwindow_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
int32_t q_mdisubwindow_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
int32_t q_mdisubwindow_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback int32_t func()
void q_mdisubwindow_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param visible bool
void q_mdisubwindow_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param visible bool
void q_mdisubwindow_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, bool visible)
void q_mdisubwindow_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param param1 int
int32_t q_mdisubwindow_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param param1 int
int32_t q_mdisubwindow_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback int32_t func(QMdiSubWindow* self, int param1)
void q_mdisubwindow_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
bool q_mdisubwindow_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
bool q_mdisubwindow_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback bool func()
void q_mdisubwindow_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
QPaintEngine* q_mdisubwindow_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
QPaintEngine* q_mdisubwindow_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback QPaintEngine* func()
void q_mdisubwindow_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param event QWheelEvent*
void q_mdisubwindow_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param event QWheelEvent*
void q_mdisubwindow_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QWheelEvent* event)
void q_mdisubwindow_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param event QKeyEvent*
void q_mdisubwindow_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param event QKeyEvent*
void q_mdisubwindow_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QKeyEvent* event)
void q_mdisubwindow_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param event QEnterEvent*
void q_mdisubwindow_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param event QEnterEvent*
void q_mdisubwindow_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QEnterEvent* event)
void q_mdisubwindow_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param event QTabletEvent*
void q_mdisubwindow_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param event QTabletEvent*
void q_mdisubwindow_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QTabletEvent* event)
void q_mdisubwindow_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param event QActionEvent*
void q_mdisubwindow_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param event QActionEvent*
void q_mdisubwindow_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QActionEvent* event)
void q_mdisubwindow_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param event QDragEnterEvent*
void q_mdisubwindow_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param event QDragEnterEvent*
void q_mdisubwindow_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QDragEnterEvent* event)
void q_mdisubwindow_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param event QDragMoveEvent*
void q_mdisubwindow_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param event QDragMoveEvent*
void q_mdisubwindow_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QDragMoveEvent* event)
void q_mdisubwindow_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param event QDragLeaveEvent*
void q_mdisubwindow_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param event QDragLeaveEvent*
void q_mdisubwindow_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QDragLeaveEvent* event)
void q_mdisubwindow_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param event QDropEvent*
void q_mdisubwindow_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param event QDropEvent*
void q_mdisubwindow_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QDropEvent* event)
void q_mdisubwindow_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_mdisubwindow_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_mdisubwindow_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback bool func(QMdiSubWindow* self, const char* eventType, void* message, intptr_t* result)
void q_mdisubwindow_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_mdisubwindow_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_mdisubwindow_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback int32_t func(QMdiSubWindow* self, enum QPaintDevice__PaintDeviceMetric param1)
void q_mdisubwindow_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param painter QPainter*
void q_mdisubwindow_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param painter QPainter*
void q_mdisubwindow_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QPainter* painter)
void q_mdisubwindow_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param offset QPoint*
QPaintDevice* q_mdisubwindow_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param offset QPoint*
QPaintDevice* q_mdisubwindow_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback QPaintDevice* func(QMdiSubWindow* self, QPoint* offset)
void q_mdisubwindow_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
QPainter* q_mdisubwindow_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
QPainter* q_mdisubwindow_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback QPainter* func()
void q_mdisubwindow_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param param1 QInputMethodEvent*
void q_mdisubwindow_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param param1 QInputMethodEvent*
void q_mdisubwindow_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QInputMethodEvent* param1)
void q_mdisubwindow_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param param1 enum Qt__InputMethodQuery
QVariant* q_mdisubwindow_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param param1 enum Qt__InputMethodQuery
QVariant* q_mdisubwindow_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback QVariant* func(QMdiSubWindow* self, enum Qt__InputMethodQuery param1)
void q_mdisubwindow_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param next bool
bool q_mdisubwindow_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param next bool
bool q_mdisubwindow_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback bool func(QMdiSubWindow* self, bool next)
void q_mdisubwindow_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param event QEvent*
void q_mdisubwindow_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param event QEvent*
void q_mdisubwindow_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QEvent* event)
void q_mdisubwindow_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param signal QMetaMethod*
void q_mdisubwindow_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param signal QMetaMethod*
void q_mdisubwindow_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QMetaMethod* signal)
void q_mdisubwindow_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param signal QMetaMethod*
void q_mdisubwindow_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param signal QMetaMethod*
void q_mdisubwindow_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, QMetaMethod* signal)
void q_mdisubwindow_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback void func()
void q_mdisubwindow_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback void func()
void q_mdisubwindow_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback void func()
void q_mdisubwindow_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
bool q_mdisubwindow_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
bool q_mdisubwindow_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback bool func()
void q_mdisubwindow_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
bool q_mdisubwindow_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
bool q_mdisubwindow_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback bool func()
void q_mdisubwindow_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
QObject* q_mdisubwindow_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
QObject* q_mdisubwindow_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback QObject* func()
void q_mdisubwindow_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
int32_t q_mdisubwindow_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
int32_t q_mdisubwindow_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback int32_t func()
void q_mdisubwindow_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param signal const char*
int32_t q_mdisubwindow_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param signal const char*
int32_t q_mdisubwindow_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback int32_t func(QMdiSubWindow* self, const char* signal)
void q_mdisubwindow_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param signal QMetaMethod*
bool q_mdisubwindow_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param signal QMetaMethod*
bool q_mdisubwindow_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback bool func(QMdiSubWindow* self, QMetaMethod* signal)
void q_mdisubwindow_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_mdisubwindow_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_mdisubwindow_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiSubWindow*
/// @param callback double func(QMdiSubWindow* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void q_mdisubwindow_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QMdiSubWindow*
/// @param callback void func(QMdiSubWindow* self, const char* objectName)
void q_mdisubwindow_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmdisubwindow.html#dtor.QMdiSubWindow)
///
/// Delete this object from C++ memory.
///
/// @param self QMdiSubWindow*
void q_mdisubwindow_delete(void* self);

/// https://doc.qt.io/qt-6/qmdisubwindow.html#types

typedef enum {
    QMDISUBWINDOW_SUBWINDOWOPTION_ALLOWOUTSIDEAREAHORIZONTALLY = 1,
    QMDISUBWINDOW_SUBWINDOWOPTION_ALLOWOUTSIDEAREAVERTICALLY = 2,
    QMDISUBWINDOW_SUBWINDOWOPTION_RUBBERBANDRESIZE = 4,
    QMDISUBWINDOW_SUBWINDOWOPTION_RUBBERBANDMOVE = 8
} QMdiSubWindow__SubWindowOption;

#endif
