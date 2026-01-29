#pragma once
#ifndef SRC_QT6C_LIBQMENUBAR_H
#define SRC_QT6C_LIBQMENUBAR_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html)

/// q_menubar_new constructs a new QMenuBar object.
///
/// @param parent QWidget*
///
QMenuBar* q_menubar_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html)

/// q_menubar_new2 constructs a new QMenuBar object.
///
QMenuBar* q_menubar_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QMenuBar*
///
const QMetaObject* q_menubar_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QMenuBar*
/// @param callback const QMetaObject* func()
///
void q_menubar_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QMenuBar*
///
const QMetaObject* q_menubar_qbase_meta_object(void* self);

/// @param self QMenuBar*
/// @param param1 const char*
///
void* q_menubar_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QMenuBar*
/// @param callback void* func(QMenuBar* self, const char* param1)
///
void q_menubar_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QMenuBar*
/// @param param1 const char*
///
void* q_menubar_qbase_metacast(void* self, const char* param1);

/// @param self QMenuBar*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_menubar_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QMenuBar*
/// @param callback int32_t func(QMenuBar* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_menubar_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QMenuBar*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_menubar_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_menubar_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#addMenu)
///
/// @param self QMenuBar*
/// @param menu QMenu*
///
QAction* q_menubar_add_menu(void* self, void* menu);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#addMenu)
///
/// @param self QMenuBar*
/// @param title const char*
///
QMenu* q_menubar_add_menu2(void* self, const char* title);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#addMenu)
///
/// @param self QMenuBar*
/// @param icon QIcon*
/// @param title const char*
///
QMenu* q_menubar_add_menu3(void* self, void* icon, const char* title);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#addSeparator)
///
/// @param self QMenuBar*
///
QAction* q_menubar_add_separator(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#insertSeparator)
///
/// @param self QMenuBar*
/// @param before QAction*
///
QAction* q_menubar_insert_separator(void* self, void* before);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#insertMenu)
///
/// @param self QMenuBar*
/// @param before QAction*
/// @param menu QMenu*
///
QAction* q_menubar_insert_menu(void* self, void* before, void* menu);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#clear)
///
/// @param self QMenuBar*
///
void q_menubar_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#activeAction)
///
/// @param self QMenuBar*
///
QAction* q_menubar_active_action(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#setActiveAction)
///
/// @param self QMenuBar*
/// @param action QAction*
///
void q_menubar_set_active_action(void* self, void* action);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#setDefaultUp)
///
/// @param self QMenuBar*
/// @param defaultUp bool
///
void q_menubar_set_default_up(void* self, bool defaultUp);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#isDefaultUp)
///
/// @param self QMenuBar*
///
bool q_menubar_is_default_up(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#sizeHint)
///
/// @param self QMenuBar*
///
QSize* q_menubar_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QMenuBar*
/// @param callback QSize* func()
///
void q_menubar_on_size_hint(void* self, QSize* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#sizeHint)
///
/// Base class method implementation
///
/// @param self QMenuBar*
///
QSize* q_menubar_qbase_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#minimumSizeHint)
///
/// @param self QMenuBar*
///
QSize* q_menubar_minimum_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#minimumSizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QMenuBar*
/// @param callback QSize* func()
///
void q_menubar_on_minimum_size_hint(void* self, QSize* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#minimumSizeHint)
///
/// Base class method implementation
///
/// @param self QMenuBar*
///
QSize* q_menubar_qbase_minimum_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#heightForWidth)
///
/// @param self QMenuBar*
/// @param param1 int
///
int32_t q_menubar_height_for_width(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#heightForWidth)
///
/// Allows for overriding the related default method
///
/// @param self QMenuBar*
/// @param callback int32_t func(QMenuBar* self, int param1)
///
void q_menubar_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#heightForWidth)
///
/// Base class method implementation
///
/// @param self QMenuBar*
/// @param param1 int
///
int32_t q_menubar_qbase_height_for_width(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#actionGeometry)
///
/// @param self QMenuBar*
/// @param param1 QAction*
///
QRect* q_menubar_action_geometry(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#actionAt)
///
/// @param self QMenuBar*
/// @param param1 QPoint*
///
QAction* q_menubar_action_at(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#setCornerWidget)
///
/// @param self QMenuBar*
/// @param w QWidget*
///
void q_menubar_set_corner_widget(void* self, void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#cornerWidget)
///
/// @param self QMenuBar*
///
QWidget* q_menubar_corner_widget(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#isNativeMenuBar)
///
/// @param self QMenuBar*
///
bool q_menubar_is_native_menu_bar(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#setNativeMenuBar)
///
/// @param self QMenuBar*
/// @param nativeMenuBar bool
///
void q_menubar_set_native_menu_bar(void* self, bool nativeMenuBar);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#setVisible)
///
/// @param self QMenuBar*
/// @param visible bool
///
void q_menubar_set_visible(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#setVisible)
///
/// Allows for overriding the related default method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, bool visible)
///
void q_menubar_on_set_visible(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#setVisible)
///
/// Base class method implementation
///
/// @param self QMenuBar*
/// @param visible bool
///
void q_menubar_qbase_set_visible(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#triggered)
///
/// @param self QMenuBar*
/// @param action QAction*
///
void q_menubar_triggered(void* self, void* action);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#triggered)
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QAction* action)
///
void q_menubar_on_triggered(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#hovered)
///
/// @param self QMenuBar*
/// @param action QAction*
///
void q_menubar_hovered(void* self, void* action);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#hovered)
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QAction* action)
///
void q_menubar_on_hovered(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#changeEvent)
///
/// @param self QMenuBar*
/// @param param1 QEvent*
///
void q_menubar_change_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QEvent* param1)
///
void q_menubar_on_change_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#changeEvent)
///
/// Base class method implementation
///
/// @param self QMenuBar*
/// @param param1 QEvent*
///
void q_menubar_qbase_change_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#keyPressEvent)
///
/// @param self QMenuBar*
/// @param param1 QKeyEvent*
///
void q_menubar_key_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QKeyEvent* param1)
///
void q_menubar_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self QMenuBar*
/// @param param1 QKeyEvent*
///
void q_menubar_qbase_key_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#mouseReleaseEvent)
///
/// @param self QMenuBar*
/// @param param1 QMouseEvent*
///
void q_menubar_mouse_release_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QMouseEvent* param1)
///
void q_menubar_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self QMenuBar*
/// @param param1 QMouseEvent*
///
void q_menubar_qbase_mouse_release_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#mousePressEvent)
///
/// @param self QMenuBar*
/// @param param1 QMouseEvent*
///
void q_menubar_mouse_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QMouseEvent* param1)
///
void q_menubar_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self QMenuBar*
/// @param param1 QMouseEvent*
///
void q_menubar_qbase_mouse_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#mouseMoveEvent)
///
/// @param self QMenuBar*
/// @param param1 QMouseEvent*
///
void q_menubar_mouse_move_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QMouseEvent* param1)
///
void q_menubar_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self QMenuBar*
/// @param param1 QMouseEvent*
///
void q_menubar_qbase_mouse_move_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#leaveEvent)
///
/// @param self QMenuBar*
/// @param param1 QEvent*
///
void q_menubar_leave_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#leaveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QEvent* param1)
///
void q_menubar_on_leave_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#leaveEvent)
///
/// Base class method implementation
///
/// @param self QMenuBar*
/// @param param1 QEvent*
///
void q_menubar_qbase_leave_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#paintEvent)
///
/// @param self QMenuBar*
/// @param param1 QPaintEvent*
///
void q_menubar_paint_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QPaintEvent* param1)
///
void q_menubar_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#paintEvent)
///
/// Base class method implementation
///
/// @param self QMenuBar*
/// @param param1 QPaintEvent*
///
void q_menubar_qbase_paint_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#resizeEvent)
///
/// @param self QMenuBar*
/// @param param1 QResizeEvent*
///
void q_menubar_resize_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QResizeEvent* param1)
///
void q_menubar_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self QMenuBar*
/// @param param1 QResizeEvent*
///
void q_menubar_qbase_resize_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#actionEvent)
///
/// @param self QMenuBar*
/// @param param1 QActionEvent*
///
void q_menubar_action_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#actionEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QActionEvent* param1)
///
void q_menubar_on_action_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#actionEvent)
///
/// Base class method implementation
///
/// @param self QMenuBar*
/// @param param1 QActionEvent*
///
void q_menubar_qbase_action_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#focusOutEvent)
///
/// @param self QMenuBar*
/// @param param1 QFocusEvent*
///
void q_menubar_focus_out_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QFocusEvent* param1)
///
void q_menubar_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#focusOutEvent)
///
/// Base class method implementation
///
/// @param self QMenuBar*
/// @param param1 QFocusEvent*
///
void q_menubar_qbase_focus_out_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#focusInEvent)
///
/// @param self QMenuBar*
/// @param param1 QFocusEvent*
///
void q_menubar_focus_in_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QFocusEvent* param1)
///
void q_menubar_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#focusInEvent)
///
/// Base class method implementation
///
/// @param self QMenuBar*
/// @param param1 QFocusEvent*
///
void q_menubar_qbase_focus_in_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#timerEvent)
///
/// @param self QMenuBar*
/// @param param1 QTimerEvent*
///
void q_menubar_timer_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QTimerEvent* param1)
///
void q_menubar_on_timer_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#timerEvent)
///
/// Base class method implementation
///
/// @param self QMenuBar*
/// @param param1 QTimerEvent*
///
void q_menubar_qbase_timer_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#eventFilter)
///
/// @param self QMenuBar*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool q_menubar_event_filter(void* self, void* param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self QMenuBar*
/// @param callback bool func(QMenuBar* self, QObject* param1, QEvent* param2)
///
void q_menubar_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#eventFilter)
///
/// Base class method implementation
///
/// @param self QMenuBar*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool q_menubar_qbase_event_filter(void* self, void* param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#event)
///
/// @param self QMenuBar*
/// @param param1 QEvent*
///
bool q_menubar_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QMenuBar*
/// @param callback bool func(QMenuBar* self, QEvent* param1)
///
void q_menubar_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#event)
///
/// Base class method implementation
///
/// @param self QMenuBar*
/// @param param1 QEvent*
///
bool q_menubar_qbase_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#initStyleOption)
///
/// @param self QMenuBar*
/// @param option QStyleOptionMenuItem*
/// @param action QAction*
///
void q_menubar_init_style_option(void* self, void* option, void* action);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#initStyleOption)
///
/// Allows for overriding the related default method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QStyleOptionMenuItem* option, QAction* action)
///
void q_menubar_on_init_style_option(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#initStyleOption)
///
/// Base class method implementation
///
/// @param self QMenuBar*
/// @param option QStyleOptionMenuItem*
/// @param action QAction*
///
void q_menubar_qbase_init_style_option(void* self, void* option, void* action);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_menubar_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_menubar_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#setCornerWidget)
///
/// @param self QMenuBar*
/// @param w QWidget*
/// @param corner enum Qt__Corner
///
void q_menubar_set_corner_widget2(void* self, void* w, int32_t corner);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#cornerWidget)
///
/// @param self QMenuBar*
/// @param corner enum Qt__Corner
///
QWidget* q_menubar_corner_widget1(void* self, int32_t corner);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QMenuBar*
///
uintptr_t q_menubar_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QMenuBar*
///
void q_menubar_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QMenuBar*
///
uintptr_t q_menubar_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QMenuBar*
///
uintptr_t q_menubar_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QMenuBar*
///
QStyle* q_menubar_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QMenuBar*
/// @param style QStyle*
///
void q_menubar_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QMenuBar*
///
bool q_menubar_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QMenuBar*
///
bool q_menubar_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QMenuBar*
///
bool q_menubar_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QMenuBar*
///
/// @return enum Qt__WindowModality
///
int32_t q_menubar_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QMenuBar*
/// @param windowModality enum Qt__WindowModality
///
void q_menubar_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QMenuBar*
///
bool q_menubar_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QMenuBar*
/// @param param1 QWidget*
///
bool q_menubar_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QMenuBar*
/// @param enabled bool
///
void q_menubar_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QMenuBar*
/// @param disabled bool
///
void q_menubar_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QMenuBar*
/// @param windowModified bool
///
void q_menubar_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QMenuBar*
///
QRect* q_menubar_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QMenuBar*
///
const QRect* q_menubar_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QMenuBar*
///
QRect* q_menubar_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QMenuBar*
///
int32_t q_menubar_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QMenuBar*
///
int32_t q_menubar_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QMenuBar*
///
QPoint* q_menubar_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QMenuBar*
///
QSize* q_menubar_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QMenuBar*
///
QSize* q_menubar_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QMenuBar*
///
int32_t q_menubar_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QMenuBar*
///
int32_t q_menubar_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QMenuBar*
///
QRect* q_menubar_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QMenuBar*
///
QRect* q_menubar_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QMenuBar*
///
QRegion* q_menubar_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QMenuBar*
///
QSize* q_menubar_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QMenuBar*
///
QSize* q_menubar_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QMenuBar*
///
int32_t q_menubar_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QMenuBar*
///
int32_t q_menubar_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QMenuBar*
///
int32_t q_menubar_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QMenuBar*
///
int32_t q_menubar_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QMenuBar*
/// @param minimumSize QSize*
///
void q_menubar_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QMenuBar*
/// @param minw int
/// @param minh int
///
void q_menubar_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QMenuBar*
/// @param maximumSize QSize*
///
void q_menubar_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QMenuBar*
/// @param maxw int
/// @param maxh int
///
void q_menubar_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QMenuBar*
/// @param minw int
///
void q_menubar_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QMenuBar*
/// @param minh int
///
void q_menubar_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QMenuBar*
/// @param maxw int
///
void q_menubar_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QMenuBar*
/// @param maxh int
///
void q_menubar_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QMenuBar*
///
QSize* q_menubar_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QMenuBar*
/// @param sizeIncrement QSize*
///
void q_menubar_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QMenuBar*
/// @param w int
/// @param h int
///
void q_menubar_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QMenuBar*
///
QSize* q_menubar_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QMenuBar*
/// @param baseSize QSize*
///
void q_menubar_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QMenuBar*
/// @param basew int
/// @param baseh int
///
void q_menubar_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QMenuBar*
/// @param fixedSize QSize*
///
void q_menubar_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QMenuBar*
/// @param w int
/// @param h int
///
void q_menubar_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QMenuBar*
/// @param w int
///
void q_menubar_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QMenuBar*
/// @param h int
///
void q_menubar_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QMenuBar*
/// @param param1 QPointF*
///
QPointF* q_menubar_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QMenuBar*
/// @param param1 QPoint*
///
QPoint* q_menubar_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QMenuBar*
/// @param param1 QPointF*
///
QPointF* q_menubar_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QMenuBar*
/// @param param1 QPoint*
///
QPoint* q_menubar_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QMenuBar*
/// @param param1 QPointF*
///
QPointF* q_menubar_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QMenuBar*
/// @param param1 QPoint*
///
QPoint* q_menubar_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QMenuBar*
/// @param param1 QPointF*
///
QPointF* q_menubar_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QMenuBar*
/// @param param1 QPoint*
///
QPoint* q_menubar_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QMenuBar*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_menubar_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QMenuBar*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_menubar_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QMenuBar*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_menubar_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QMenuBar*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_menubar_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QMenuBar*
///
QWidget* q_menubar_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QMenuBar*
///
QWidget* q_menubar_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QMenuBar*
///
QWidget* q_menubar_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QMenuBar*
///
const QPalette* q_menubar_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QMenuBar*
/// @param palette QPalette*
///
void q_menubar_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QMenuBar*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_menubar_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QMenuBar*
///
/// @return enum QPalette__ColorRole
///
int32_t q_menubar_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QMenuBar*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_menubar_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QMenuBar*
///
/// @return enum QPalette__ColorRole
///
int32_t q_menubar_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QMenuBar*
///
const QFont* q_menubar_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QMenuBar*
/// @param font QFont*
///
void q_menubar_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QMenuBar*
///
QFontMetrics* q_menubar_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QMenuBar*
///
QFontInfo* q_menubar_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QMenuBar*
///
QCursor* q_menubar_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QMenuBar*
/// @param cursor QCursor*
///
void q_menubar_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QMenuBar*
///
void q_menubar_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QMenuBar*
/// @param enable bool
///
void q_menubar_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QMenuBar*
///
bool q_menubar_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QMenuBar*
///
bool q_menubar_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QMenuBar*
/// @param enable bool
///
void q_menubar_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QMenuBar*
///
bool q_menubar_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QMenuBar*
/// @param mask QBitmap*
///
void q_menubar_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QMenuBar*
/// @param mask QRegion*
///
void q_menubar_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QMenuBar*
///
QRegion* q_menubar_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QMenuBar*
///
void q_menubar_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMenuBar*
/// @param target QPaintDevice*
///
void q_menubar_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMenuBar*
/// @param painter QPainter*
///
void q_menubar_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QMenuBar*
///
QPixmap* q_menubar_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QMenuBar*
///
QGraphicsEffect* q_menubar_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QMenuBar*
/// @param effect QGraphicsEffect*
///
void q_menubar_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QMenuBar*
/// @param type enum Qt__GestureType
///
void q_menubar_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QMenuBar*
/// @param type enum Qt__GestureType
///
void q_menubar_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QMenuBar*
/// @param windowTitle const char*
///
void q_menubar_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QMenuBar*
/// @param styleSheet const char*
///
void q_menubar_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMenuBar*
///
const char* q_menubar_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMenuBar*
///
const char* q_menubar_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QMenuBar*
/// @param icon QIcon*
///
void q_menubar_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QMenuBar*
///
QIcon* q_menubar_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QMenuBar*
/// @param windowIconText const char*
///
void q_menubar_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMenuBar*
///
const char* q_menubar_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QMenuBar*
/// @param windowRole const char*
///
void q_menubar_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMenuBar*
///
const char* q_menubar_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QMenuBar*
/// @param filePath const char*
///
void q_menubar_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMenuBar*
///
const char* q_menubar_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QMenuBar*
/// @param level double
///
void q_menubar_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QMenuBar*
///
double q_menubar_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QMenuBar*
///
bool q_menubar_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QMenuBar*
/// @param toolTip const char*
///
void q_menubar_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMenuBar*
///
const char* q_menubar_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QMenuBar*
/// @param msec int
///
void q_menubar_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QMenuBar*
///
int32_t q_menubar_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QMenuBar*
/// @param statusTip const char*
///
void q_menubar_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMenuBar*
///
const char* q_menubar_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QMenuBar*
/// @param whatsThis const char*
///
void q_menubar_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMenuBar*
///
const char* q_menubar_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMenuBar*
///
const char* q_menubar_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QMenuBar*
/// @param name const char*
///
void q_menubar_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMenuBar*
///
const char* q_menubar_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QMenuBar*
/// @param description const char*
///
void q_menubar_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QMenuBar*
/// @param direction enum Qt__LayoutDirection
///
void q_menubar_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QMenuBar*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_menubar_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QMenuBar*
///
void q_menubar_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QMenuBar*
/// @param locale QLocale*
///
void q_menubar_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QMenuBar*
///
QLocale* q_menubar_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QMenuBar*
///
void q_menubar_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QMenuBar*
///
bool q_menubar_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QMenuBar*
///
bool q_menubar_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QMenuBar*
///
void q_menubar_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QMenuBar*
///
bool q_menubar_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QMenuBar*
///
void q_menubar_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QMenuBar*
///
void q_menubar_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QMenuBar*
/// @param reason enum Qt__FocusReason
///
void q_menubar_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QMenuBar*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_menubar_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QMenuBar*
/// @param policy enum Qt__FocusPolicy
///
void q_menubar_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QMenuBar*
///
bool q_menubar_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_menubar_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QMenuBar*
/// @param focusProxy QWidget*
///
void q_menubar_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QMenuBar*
///
QWidget* q_menubar_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QMenuBar*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_menubar_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QMenuBar*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_menubar_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QMenuBar*
///
void q_menubar_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QMenuBar*
/// @param param1 QCursor*
///
void q_menubar_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QMenuBar*
///
void q_menubar_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QMenuBar*
///
void q_menubar_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QMenuBar*
///
void q_menubar_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QMenuBar*
/// @param key QKeySequence*
///
int32_t q_menubar_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QMenuBar*
/// @param id int
///
void q_menubar_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QMenuBar*
/// @param id int
///
void q_menubar_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QMenuBar*
/// @param id int
///
void q_menubar_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_menubar_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_menubar_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QMenuBar*
///
bool q_menubar_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QMenuBar*
/// @param enable bool
///
void q_menubar_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QMenuBar*
///
QGraphicsProxyWidget* q_menubar_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QMenuBar*
///
void q_menubar_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QMenuBar*
///
void q_menubar_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QMenuBar*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_menubar_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QMenuBar*
/// @param param1 QRect*
///
void q_menubar_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QMenuBar*
/// @param param1 QRegion*
///
void q_menubar_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QMenuBar*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_menubar_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QMenuBar*
/// @param param1 QRect*
///
void q_menubar_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QMenuBar*
/// @param param1 QRegion*
///
void q_menubar_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QMenuBar*
/// @param hidden bool
///
void q_menubar_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QMenuBar*
///
void q_menubar_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QMenuBar*
///
void q_menubar_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QMenuBar*
///
void q_menubar_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QMenuBar*
///
void q_menubar_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QMenuBar*
///
void q_menubar_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QMenuBar*
///
void q_menubar_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QMenuBar*
///
bool q_menubar_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QMenuBar*
///
void q_menubar_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QMenuBar*
///
void q_menubar_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QMenuBar*
/// @param param1 QWidget*
///
void q_menubar_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QMenuBar*
/// @param x int
/// @param y int
///
void q_menubar_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QMenuBar*
/// @param param1 QPoint*
///
void q_menubar_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QMenuBar*
/// @param w int
/// @param h int
///
void q_menubar_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QMenuBar*
/// @param param1 QSize*
///
void q_menubar_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QMenuBar*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_menubar_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QMenuBar*
/// @param geometry QRect*
///
void q_menubar_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QMenuBar*
///
char* q_menubar_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QMenuBar*
/// @param geometry const char*
///
bool q_menubar_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QMenuBar*
///
void q_menubar_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QMenuBar*
///
bool q_menubar_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QMenuBar*
/// @param param1 QWidget*
///
bool q_menubar_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QMenuBar*
///
bool q_menubar_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QMenuBar*
///
bool q_menubar_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QMenuBar*
///
bool q_menubar_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QMenuBar*
///
bool q_menubar_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QMenuBar*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_menubar_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QMenuBar*
/// @param state flag of enum Qt__WindowState
///
void q_menubar_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QMenuBar*
/// @param state flag of enum Qt__WindowState
///
void q_menubar_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QMenuBar*
///
QSizePolicy* q_menubar_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QMenuBar*
/// @param sizePolicy QSizePolicy*
///
void q_menubar_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QMenuBar*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_menubar_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QMenuBar*
///
QRegion* q_menubar_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QMenuBar*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_menubar_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QMenuBar*
/// @param margins QMargins*
///
void q_menubar_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QMenuBar*
///
QMargins* q_menubar_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QMenuBar*
///
QRect* q_menubar_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QMenuBar*
///
QLayout* q_menubar_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QMenuBar*
/// @param layout QLayout*
///
void q_menubar_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QMenuBar*
///
void q_menubar_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QMenuBar*
/// @param parent QWidget*
///
void q_menubar_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QMenuBar*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_menubar_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QMenuBar*
/// @param dx int
/// @param dy int
///
void q_menubar_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QMenuBar*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_menubar_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QMenuBar*
///
QWidget* q_menubar_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QMenuBar*
///
QWidget* q_menubar_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QMenuBar*
///
QWidget* q_menubar_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QMenuBar*
///
bool q_menubar_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QMenuBar*
/// @param on bool
///
void q_menubar_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QMenuBar*
/// @param action QAction*
///
void q_menubar_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QMenuBar*
/// @param actions libqt_list of QAction*
///
void q_menubar_add_actions(void* self, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QMenuBar*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_menubar_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QMenuBar*
/// @param before QAction*
/// @param action QAction*
///
void q_menubar_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QMenuBar*
/// @param action QAction*
///
void q_menubar_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QMenuBar*
///
/// @return libqt_list of QAction*
///
libqt_list q_menubar_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QMenuBar*
/// @param text const char*
///
QAction* q_menubar_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QMenuBar*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_menubar_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QMenuBar*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_menubar_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QMenuBar*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_menubar_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QMenuBar*
///
QWidget* q_menubar_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QMenuBar*
/// @param type flag of enum Qt__WindowType
///
void q_menubar_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QMenuBar*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_menubar_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QMenuBar*
/// @param param1 enum Qt__WindowType
///
void q_menubar_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QMenuBar*
/// @param type flag of enum Qt__WindowType
///
void q_menubar_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QMenuBar*
///
/// @return enum Qt__WindowType
///
int32_t q_menubar_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* q_menubar_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QMenuBar*
/// @param x int
/// @param y int
///
QWidget* q_menubar_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QMenuBar*
/// @param p QPoint*
///
QWidget* q_menubar_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QMenuBar*
/// @param p QPointF*
///
QWidget* q_menubar_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QMenuBar*
/// @param param1 enum Qt__WidgetAttribute
///
void q_menubar_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QMenuBar*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_menubar_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QMenuBar*
///
void q_menubar_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QMenuBar*
/// @param child QWidget*
///
bool q_menubar_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QMenuBar*
///
bool q_menubar_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QMenuBar*
/// @param enabled bool
///
void q_menubar_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QMenuBar*
///
QBackingStore* q_menubar_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QMenuBar*
///
QWindow* q_menubar_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QMenuBar*
///
QScreen* q_menubar_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QMenuBar*
/// @param screen QScreen*
///
void q_menubar_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_menubar_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QMenuBar*
/// @param title const char*
///
void q_menubar_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, const char* title)
///
void q_menubar_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QMenuBar*
/// @param icon QIcon*
///
void q_menubar_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QIcon* icon)
///
void q_menubar_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QMenuBar*
/// @param iconText const char*
///
void q_menubar_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, const char* iconText)
///
void q_menubar_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QMenuBar*
/// @param pos QPoint*
///
void q_menubar_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QPoint* pos)
///
void q_menubar_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QMenuBar*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_menubar_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QMenuBar*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_menubar_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMenuBar*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_menubar_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMenuBar*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_menubar_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMenuBar*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_menubar_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMenuBar*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_menubar_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMenuBar*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_menubar_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMenuBar*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_menubar_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QMenuBar*
/// @param rectangle QRect*
///
QPixmap* q_menubar_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QMenuBar*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_menubar_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QMenuBar*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_menubar_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QMenuBar*
/// @param id int
/// @param enable bool
///
void q_menubar_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QMenuBar*
/// @param id int
/// @param enable bool
///
void q_menubar_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QMenuBar*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_menubar_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QMenuBar*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_menubar_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_menubar_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_menubar_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMenuBar*
///
const char* q_menubar_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QMenuBar*
/// @param name char*
///
void q_menubar_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QMenuBar*
///
bool q_menubar_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QMenuBar*
///
bool q_menubar_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QMenuBar*
///
bool q_menubar_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QMenuBar*
///
bool q_menubar_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QMenuBar*
/// @param b bool
///
bool q_menubar_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QMenuBar*
///
QThread* q_menubar_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QMenuBar*
/// @param thread QThread*
///
bool q_menubar_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMenuBar*
/// @param interval int
///
int32_t q_menubar_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMenuBar*
/// @param time int64_t of nanoseconds
///
int32_t q_menubar_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QMenuBar*
/// @param id int
///
void q_menubar_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QMenuBar*
/// @param id enum Qt__TimerId
///
void q_menubar_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QMenuBar*
///
/// @return libqt_list of QObject*
///
libqt_list q_menubar_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QMenuBar*
/// @param filterObj QObject*
///
void q_menubar_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QMenuBar*
/// @param obj QObject*
///
void q_menubar_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_menubar_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QMenuBar*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_menubar_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_menubar_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_menubar_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QMenuBar*
///
void q_menubar_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QMenuBar*
///
void q_menubar_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QMenuBar*
/// @param name const char*
/// @param value QVariant*
///
bool q_menubar_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QMenuBar*
/// @param name const char*
///
QVariant* q_menubar_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QMenuBar*
///
const char** q_menubar_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QMenuBar*
///
QBindingStorage* q_menubar_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QMenuBar*
///
const QBindingStorage* q_menubar_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMenuBar*
///
void q_menubar_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self)
///
void q_menubar_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QMenuBar*
///
QObject* q_menubar_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QMenuBar*
/// @param classname const char*
///
bool q_menubar_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QMenuBar*
///
void q_menubar_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMenuBar*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_menubar_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMenuBar*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_menubar_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_menubar_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QMenuBar*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_menubar_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMenuBar*
/// @param param1 QObject*
///
void q_menubar_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QObject* param1)
///
void q_menubar_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QMenuBar*
///
bool q_menubar_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QMenuBar*
///
int32_t q_menubar_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QMenuBar*
///
int32_t q_menubar_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QMenuBar*
///
int32_t q_menubar_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QMenuBar*
///
int32_t q_menubar_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QMenuBar*
///
int32_t q_menubar_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QMenuBar*
///
int32_t q_menubar_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QMenuBar*
///
double q_menubar_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QMenuBar*
///
double q_menubar_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QMenuBar*
///
int32_t q_menubar_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QMenuBar*
///
int32_t q_menubar_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_menubar_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_menubar_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
///
int32_t q_menubar_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
///
int32_t q_menubar_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback int32_t func()
///
void q_menubar_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
///
bool q_menubar_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
///
bool q_menubar_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback bool func()
///
void q_menubar_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
///
QPaintEngine* q_menubar_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
///
QPaintEngine* q_menubar_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback QPaintEngine* func()
///
void q_menubar_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
/// @param event QMouseEvent*
///
void q_menubar_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
/// @param event QMouseEvent*
///
void q_menubar_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QMouseEvent* event)
///
void q_menubar_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
/// @param event QWheelEvent*
///
void q_menubar_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
/// @param event QWheelEvent*
///
void q_menubar_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QWheelEvent* event)
///
void q_menubar_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
/// @param event QKeyEvent*
///
void q_menubar_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
/// @param event QKeyEvent*
///
void q_menubar_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QKeyEvent* event)
///
void q_menubar_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
/// @param event QEnterEvent*
///
void q_menubar_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
/// @param event QEnterEvent*
///
void q_menubar_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QEnterEvent* event)
///
void q_menubar_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
/// @param event QMoveEvent*
///
void q_menubar_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
/// @param event QMoveEvent*
///
void q_menubar_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QMoveEvent* event)
///
void q_menubar_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
/// @param event QCloseEvent*
///
void q_menubar_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
/// @param event QCloseEvent*
///
void q_menubar_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QCloseEvent* event)
///
void q_menubar_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
/// @param event QContextMenuEvent*
///
void q_menubar_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
/// @param event QContextMenuEvent*
///
void q_menubar_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QContextMenuEvent* event)
///
void q_menubar_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
/// @param event QTabletEvent*
///
void q_menubar_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
/// @param event QTabletEvent*
///
void q_menubar_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QTabletEvent* event)
///
void q_menubar_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
/// @param event QDragEnterEvent*
///
void q_menubar_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
/// @param event QDragEnterEvent*
///
void q_menubar_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QDragEnterEvent* event)
///
void q_menubar_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
/// @param event QDragMoveEvent*
///
void q_menubar_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
/// @param event QDragMoveEvent*
///
void q_menubar_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QDragMoveEvent* event)
///
void q_menubar_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
/// @param event QDragLeaveEvent*
///
void q_menubar_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
/// @param event QDragLeaveEvent*
///
void q_menubar_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QDragLeaveEvent* event)
///
void q_menubar_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
/// @param event QDropEvent*
///
void q_menubar_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
/// @param event QDropEvent*
///
void q_menubar_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QDropEvent* event)
///
void q_menubar_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
/// @param event QShowEvent*
///
void q_menubar_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
/// @param event QShowEvent*
///
void q_menubar_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QShowEvent* event)
///
void q_menubar_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
/// @param event QHideEvent*
///
void q_menubar_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
/// @param event QHideEvent*
///
void q_menubar_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QHideEvent* event)
///
void q_menubar_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_menubar_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_menubar_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback bool func(QMenuBar* self, const char* eventType, void* message, intptr_t* result)
///
void q_menubar_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_menubar_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_menubar_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback int32_t func(QMenuBar* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_menubar_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
/// @param painter QPainter*
///
void q_menubar_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
/// @param painter QPainter*
///
void q_menubar_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QPainter* painter)
///
void q_menubar_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
/// @param offset QPoint*
///
QPaintDevice* q_menubar_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
/// @param offset QPoint*
///
QPaintDevice* q_menubar_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback QPaintDevice* func(QMenuBar* self, QPoint* offset)
///
void q_menubar_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
///
QPainter* q_menubar_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
///
QPainter* q_menubar_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback QPainter* func()
///
void q_menubar_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
/// @param param1 QInputMethodEvent*
///
void q_menubar_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
/// @param param1 QInputMethodEvent*
///
void q_menubar_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QInputMethodEvent* param1)
///
void q_menubar_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_menubar_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_menubar_qbase_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback QVariant* func(QMenuBar* self, enum Qt__InputMethodQuery param1)
///
void q_menubar_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
/// @param next bool
///
bool q_menubar_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
/// @param next bool
///
bool q_menubar_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback bool func(QMenuBar* self, bool next)
///
void q_menubar_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
/// @param event QChildEvent*
///
void q_menubar_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
/// @param event QChildEvent*
///
void q_menubar_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QChildEvent* event)
///
void q_menubar_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
/// @param event QEvent*
///
void q_menubar_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
/// @param event QEvent*
///
void q_menubar_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QEvent* event)
///
void q_menubar_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
/// @param signal QMetaMethod*
///
void q_menubar_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
/// @param signal QMetaMethod*
///
void q_menubar_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QMetaMethod* signal)
///
void q_menubar_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
/// @param signal QMetaMethod*
///
void q_menubar_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
/// @param signal QMetaMethod*
///
void q_menubar_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, QMetaMethod* signal)
///
void q_menubar_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
///
void q_menubar_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
///
void q_menubar_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback void func()
///
void q_menubar_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
///
void q_menubar_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
///
void q_menubar_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback void func()
///
void q_menubar_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
///
void q_menubar_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
///
void q_menubar_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback void func()
///
void q_menubar_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
///
bool q_menubar_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
///
bool q_menubar_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback bool func()
///
void q_menubar_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
///
bool q_menubar_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
///
bool q_menubar_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback bool func()
///
void q_menubar_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
///
QObject* q_menubar_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
///
QObject* q_menubar_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback QObject* func()
///
void q_menubar_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
///
int32_t q_menubar_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
///
int32_t q_menubar_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback int32_t func()
///
void q_menubar_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
/// @param signal const char*
///
int32_t q_menubar_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
/// @param signal const char*
///
int32_t q_menubar_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback int32_t func(QMenuBar* self, const char* signal)
///
void q_menubar_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
/// @param signal QMetaMethod*
///
bool q_menubar_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
/// @param signal QMetaMethod*
///
bool q_menubar_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback bool func(QMenuBar* self, QMetaMethod* signal)
///
void q_menubar_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenuBar*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_menubar_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenuBar*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_menubar_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenuBar*
/// @param callback double func(QMenuBar* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_menubar_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QMenuBar*
/// @param callback void func(QMenuBar* self, const char* objectName)
///
void q_menubar_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenubar.html#dtor.QMenuBar)
///
/// Delete this object from C++ memory.
///
/// @param self QMenuBar*
///
void q_menubar_delete(void* self);

#endif
