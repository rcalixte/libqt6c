#pragma once
#ifndef SRC_QT6C_LIBQMENU_H
#define SRC_QT6C_LIBQMENU_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html)

/// q_menu_new constructs a new QMenu object.
///
/// @param parent QWidget*
///
QMenu* q_menu_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html)

/// q_menu_new2 constructs a new QMenu object.
///
QMenu* q_menu_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html)

/// q_menu_new3 constructs a new QMenu object.
///
/// @param title const char*
///
QMenu* q_menu_new3(const char* title);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html)

/// q_menu_new4 constructs a new QMenu object.
///
/// @param title const char*
/// @param parent QWidget*
///
QMenu* q_menu_new4(const char* title, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QMenu*
///
const QMetaObject* q_menu_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QMenu*
/// @param callback const QMetaObject* func()
///
void q_menu_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QMenu*
///
const QMetaObject* q_menu_qbase_meta_object(void* self);

/// @param self QMenu*
/// @param param1 const char*
///
void* q_menu_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QMenu*
/// @param callback void* func(QMenu* self, const char* param1)
///
void q_menu_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QMenu*
/// @param param1 const char*
///
void* q_menu_qbase_metacast(void* self, const char* param1);

/// @param self QMenu*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_menu_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QMenu*
/// @param callback int32_t func(QMenu* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_menu_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QMenu*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_menu_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_menu_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#addMenu)
///
/// @param self QMenu*
/// @param menu QMenu*
///
QAction* q_menu_add_menu(void* self, void* menu);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#addMenu)
///
/// @param self QMenu*
/// @param title const char*
///
QMenu* q_menu_add_menu2(void* self, const char* title);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#addMenu)
///
/// @param self QMenu*
/// @param icon QIcon*
/// @param title const char*
///
QMenu* q_menu_add_menu3(void* self, void* icon, const char* title);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#addSeparator)
///
/// @param self QMenu*
///
QAction* q_menu_add_separator(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#addSection)
///
/// @param self QMenu*
/// @param text const char*
///
QAction* q_menu_add_section(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#addSection)
///
/// @param self QMenu*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_menu_add_section2(void* self, void* icon, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#insertMenu)
///
/// @param self QMenu*
/// @param before QAction*
/// @param menu QMenu*
///
QAction* q_menu_insert_menu(void* self, void* before, void* menu);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#insertSeparator)
///
/// @param self QMenu*
/// @param before QAction*
///
QAction* q_menu_insert_separator(void* self, void* before);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#insertSection)
///
/// @param self QMenu*
/// @param before QAction*
/// @param text const char*
///
QAction* q_menu_insert_section(void* self, void* before, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#insertSection)
///
/// @param self QMenu*
/// @param before QAction*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_menu_insert_section2(void* self, void* before, void* icon, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#isEmpty)
///
/// @param self QMenu*
///
bool q_menu_is_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#clear)
///
/// @param self QMenu*
///
void q_menu_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#setTearOffEnabled)
///
/// @param self QMenu*
/// @param tearOffEnabled bool
///
void q_menu_set_tear_off_enabled(void* self, bool tearOffEnabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#isTearOffEnabled)
///
/// @param self QMenu*
///
bool q_menu_is_tear_off_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#isTearOffMenuVisible)
///
/// @param self QMenu*
///
bool q_menu_is_tear_off_menu_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#showTearOffMenu)
///
/// @param self QMenu*
///
void q_menu_show_tear_off_menu(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#showTearOffMenu)
///
/// @param self QMenu*
/// @param pos QPoint*
///
void q_menu_show_tear_off_menu2(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#hideTearOffMenu)
///
/// @param self QMenu*
///
void q_menu_hide_tear_off_menu(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#setDefaultAction)
///
/// @param self QMenu*
/// @param defaultAction QAction*
///
void q_menu_set_default_action(void* self, void* defaultAction);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#defaultAction)
///
/// @param self QMenu*
///
QAction* q_menu_default_action(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#setActiveAction)
///
/// @param self QMenu*
/// @param act QAction*
///
void q_menu_set_active_action(void* self, void* act);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#activeAction)
///
/// @param self QMenu*
///
QAction* q_menu_active_action(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#popup)
///
/// @param self QMenu*
/// @param pos QPoint*
///
void q_menu_popup(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// @param self QMenu*
///
QAction* q_menu_exec(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// @param self QMenu*
/// @param pos QPoint*
///
QAction* q_menu_exec2(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// @param actions libqt_list of QAction*
/// @param pos QPoint*
///
QAction* q_menu_exec3(libqt_list /* of QAction* */ actions, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#sizeHint)
///
/// @param self QMenu*
///
QSize* q_menu_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QMenu*
/// @param callback QSize* func()
///
void q_menu_on_size_hint(void* self, QSize* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#sizeHint)
///
/// Base class method implementation
///
/// @param self QMenu*
///
QSize* q_menu_qbase_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#actionGeometry)
///
/// @param self QMenu*
/// @param param1 QAction*
///
QRect* q_menu_action_geometry(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#actionAt)
///
/// @param self QMenu*
/// @param param1 QPoint*
///
QAction* q_menu_action_at(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#menuAction)
///
/// @param self QMenu*
///
QAction* q_menu_menu_action(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#menuInAction)
///
/// @param action QAction*
///
QMenu* q_menu_menu_in_action(void* action);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#title)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMenu*
///
const char* q_menu_title(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#setTitle)
///
/// @param self QMenu*
/// @param title const char*
///
void q_menu_set_title(void* self, const char* title);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#icon)
///
/// @param self QMenu*
///
QIcon* q_menu_icon(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#setIcon)
///
/// @param self QMenu*
/// @param icon QIcon*
///
void q_menu_set_icon(void* self, void* icon);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#setNoReplayFor)
///
/// @param self QMenu*
/// @param widget QWidget*
///
void q_menu_set_no_replay_for(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#separatorsCollapsible)
///
/// @param self QMenu*
///
bool q_menu_separators_collapsible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#setSeparatorsCollapsible)
///
/// @param self QMenu*
/// @param collapse bool
///
void q_menu_set_separators_collapsible(void* self, bool collapse);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#toolTipsVisible)
///
/// @param self QMenu*
///
bool q_menu_tool_tips_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#setToolTipsVisible)
///
/// @param self QMenu*
/// @param visible bool
///
void q_menu_set_tool_tips_visible(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#aboutToShow)
///
/// @param self QMenu*
///
void q_menu_about_to_show(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#aboutToShow)
///
/// @param self QMenu*
/// @param callback void func(QMenu* self)
///
void q_menu_on_about_to_show(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#aboutToHide)
///
/// @param self QMenu*
///
void q_menu_about_to_hide(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#aboutToHide)
///
/// @param self QMenu*
/// @param callback void func(QMenu* self)
///
void q_menu_on_about_to_hide(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#triggered)
///
/// @param self QMenu*
/// @param action QAction*
///
void q_menu_triggered(void* self, void* action);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#triggered)
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QAction* action)
///
void q_menu_on_triggered(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#hovered)
///
/// @param self QMenu*
/// @param action QAction*
///
void q_menu_hovered(void* self, void* action);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#hovered)
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QAction* action)
///
void q_menu_on_hovered(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#columnCount)
///
/// @param self QMenu*
///
int32_t q_menu_column_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#columnCount)
///
/// Allows for overriding the related default method
///
/// @param self QMenu*
/// @param callback int32_t func()
///
void q_menu_on_column_count(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#columnCount)
///
/// Base class method implementation
///
/// @param self QMenu*
///
int32_t q_menu_qbase_column_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#changeEvent)
///
/// @param self QMenu*
/// @param param1 QEvent*
///
void q_menu_change_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QEvent* param1)
///
void q_menu_on_change_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#changeEvent)
///
/// Base class method implementation
///
/// @param self QMenu*
/// @param param1 QEvent*
///
void q_menu_qbase_change_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#keyPressEvent)
///
/// @param self QMenu*
/// @param param1 QKeyEvent*
///
void q_menu_key_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QKeyEvent* param1)
///
void q_menu_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self QMenu*
/// @param param1 QKeyEvent*
///
void q_menu_qbase_key_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#mouseReleaseEvent)
///
/// @param self QMenu*
/// @param param1 QMouseEvent*
///
void q_menu_mouse_release_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QMouseEvent* param1)
///
void q_menu_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self QMenu*
/// @param param1 QMouseEvent*
///
void q_menu_qbase_mouse_release_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#mousePressEvent)
///
/// @param self QMenu*
/// @param param1 QMouseEvent*
///
void q_menu_mouse_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QMouseEvent* param1)
///
void q_menu_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self QMenu*
/// @param param1 QMouseEvent*
///
void q_menu_qbase_mouse_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#mouseMoveEvent)
///
/// @param self QMenu*
/// @param param1 QMouseEvent*
///
void q_menu_mouse_move_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QMouseEvent* param1)
///
void q_menu_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self QMenu*
/// @param param1 QMouseEvent*
///
void q_menu_qbase_mouse_move_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#wheelEvent)
///
/// @param self QMenu*
/// @param param1 QWheelEvent*
///
void q_menu_wheel_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#wheelEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QWheelEvent* param1)
///
void q_menu_on_wheel_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#wheelEvent)
///
/// Base class method implementation
///
/// @param self QMenu*
/// @param param1 QWheelEvent*
///
void q_menu_qbase_wheel_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#enterEvent)
///
/// @param self QMenu*
/// @param param1 QEnterEvent*
///
void q_menu_enter_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#enterEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QEnterEvent* param1)
///
void q_menu_on_enter_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#enterEvent)
///
/// Base class method implementation
///
/// @param self QMenu*
/// @param param1 QEnterEvent*
///
void q_menu_qbase_enter_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#leaveEvent)
///
/// @param self QMenu*
/// @param param1 QEvent*
///
void q_menu_leave_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#leaveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QEvent* param1)
///
void q_menu_on_leave_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#leaveEvent)
///
/// Base class method implementation
///
/// @param self QMenu*
/// @param param1 QEvent*
///
void q_menu_qbase_leave_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#hideEvent)
///
/// @param self QMenu*
/// @param param1 QHideEvent*
///
void q_menu_hide_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#hideEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QHideEvent* param1)
///
void q_menu_on_hide_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#hideEvent)
///
/// Base class method implementation
///
/// @param self QMenu*
/// @param param1 QHideEvent*
///
void q_menu_qbase_hide_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#paintEvent)
///
/// @param self QMenu*
/// @param param1 QPaintEvent*
///
void q_menu_paint_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QPaintEvent* param1)
///
void q_menu_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#paintEvent)
///
/// Base class method implementation
///
/// @param self QMenu*
/// @param param1 QPaintEvent*
///
void q_menu_qbase_paint_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#actionEvent)
///
/// @param self QMenu*
/// @param param1 QActionEvent*
///
void q_menu_action_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#actionEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QActionEvent* param1)
///
void q_menu_on_action_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#actionEvent)
///
/// Base class method implementation
///
/// @param self QMenu*
/// @param param1 QActionEvent*
///
void q_menu_qbase_action_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#timerEvent)
///
/// @param self QMenu*
/// @param param1 QTimerEvent*
///
void q_menu_timer_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QTimerEvent* param1)
///
void q_menu_on_timer_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#timerEvent)
///
/// Base class method implementation
///
/// @param self QMenu*
/// @param param1 QTimerEvent*
///
void q_menu_qbase_timer_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#event)
///
/// @param self QMenu*
/// @param param1 QEvent*
///
bool q_menu_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QMenu*
/// @param callback bool func(QMenu* self, QEvent* param1)
///
void q_menu_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#event)
///
/// Base class method implementation
///
/// @param self QMenu*
/// @param param1 QEvent*
///
bool q_menu_qbase_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#focusNextPrevChild)
///
/// @param self QMenu*
/// @param next bool
///
bool q_menu_focus_next_prev_child(void* self, bool next);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#focusNextPrevChild)
///
/// Allows for overriding the related default method
///
/// @param self QMenu*
/// @param callback bool func(QMenu* self, bool next)
///
void q_menu_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#focusNextPrevChild)
///
/// Base class method implementation
///
/// @param self QMenu*
/// @param next bool
///
bool q_menu_qbase_focus_next_prev_child(void* self, bool next);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#initStyleOption)
///
/// @param self QMenu*
/// @param option QStyleOptionMenuItem*
/// @param action QAction*
///
void q_menu_init_style_option(void* self, void* option, void* action);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#initStyleOption)
///
/// Allows for overriding the related default method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QStyleOptionMenuItem* option, QAction* action)
///
void q_menu_on_init_style_option(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#initStyleOption)
///
/// Base class method implementation
///
/// @param self QMenu*
/// @param option QStyleOptionMenuItem*
/// @param action QAction*
///
void q_menu_qbase_init_style_option(void* self, void* option, void* action);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_menu_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_menu_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#popup)
///
/// @param self QMenu*
/// @param pos QPoint*
/// @param at QAction*
///
void q_menu_popup2(void* self, void* pos, void* at);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// @param self QMenu*
/// @param pos QPoint*
/// @param at QAction*
///
QAction* q_menu_exec22(void* self, void* pos, void* at);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// @param actions libqt_list of QAction*
/// @param pos QPoint*
/// @param at QAction*
///
QAction* q_menu_exec32(libqt_list /* of QAction* */ actions, void* pos, void* at);

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// @param actions libqt_list of QAction*
/// @param pos QPoint*
/// @param at QAction*
/// @param parent QWidget*
///
QAction* q_menu_exec4(libqt_list /* of QAction* */ actions, void* pos, void* at, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QMenu*
///
uintptr_t q_menu_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QMenu*
///
void q_menu_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QMenu*
///
uintptr_t q_menu_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QMenu*
///
uintptr_t q_menu_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QMenu*
///
QStyle* q_menu_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QMenu*
/// @param style QStyle*
///
void q_menu_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QMenu*
///
bool q_menu_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QMenu*
///
bool q_menu_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QMenu*
///
bool q_menu_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QMenu*
///
/// @return enum Qt__WindowModality
///
int32_t q_menu_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QMenu*
/// @param windowModality enum Qt__WindowModality
///
void q_menu_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QMenu*
///
bool q_menu_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QMenu*
/// @param param1 QWidget*
///
bool q_menu_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QMenu*
/// @param enabled bool
///
void q_menu_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QMenu*
/// @param disabled bool
///
void q_menu_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QMenu*
/// @param windowModified bool
///
void q_menu_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QMenu*
///
QRect* q_menu_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QMenu*
///
const QRect* q_menu_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QMenu*
///
QRect* q_menu_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QMenu*
///
int32_t q_menu_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QMenu*
///
int32_t q_menu_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QMenu*
///
QPoint* q_menu_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QMenu*
///
QSize* q_menu_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QMenu*
///
QSize* q_menu_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QMenu*
///
int32_t q_menu_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QMenu*
///
int32_t q_menu_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QMenu*
///
QRect* q_menu_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QMenu*
///
QRect* q_menu_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QMenu*
///
QRegion* q_menu_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QMenu*
///
QSize* q_menu_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QMenu*
///
QSize* q_menu_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QMenu*
///
int32_t q_menu_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QMenu*
///
int32_t q_menu_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QMenu*
///
int32_t q_menu_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QMenu*
///
int32_t q_menu_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QMenu*
/// @param minimumSize QSize*
///
void q_menu_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QMenu*
/// @param minw int
/// @param minh int
///
void q_menu_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QMenu*
/// @param maximumSize QSize*
///
void q_menu_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QMenu*
/// @param maxw int
/// @param maxh int
///
void q_menu_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QMenu*
/// @param minw int
///
void q_menu_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QMenu*
/// @param minh int
///
void q_menu_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QMenu*
/// @param maxw int
///
void q_menu_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QMenu*
/// @param maxh int
///
void q_menu_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QMenu*
///
QSize* q_menu_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QMenu*
/// @param sizeIncrement QSize*
///
void q_menu_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QMenu*
/// @param w int
/// @param h int
///
void q_menu_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QMenu*
///
QSize* q_menu_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QMenu*
/// @param baseSize QSize*
///
void q_menu_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QMenu*
/// @param basew int
/// @param baseh int
///
void q_menu_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QMenu*
/// @param fixedSize QSize*
///
void q_menu_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QMenu*
/// @param w int
/// @param h int
///
void q_menu_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QMenu*
/// @param w int
///
void q_menu_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QMenu*
/// @param h int
///
void q_menu_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QMenu*
/// @param param1 QPointF*
///
QPointF* q_menu_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QMenu*
/// @param param1 QPoint*
///
QPoint* q_menu_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QMenu*
/// @param param1 QPointF*
///
QPointF* q_menu_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QMenu*
/// @param param1 QPoint*
///
QPoint* q_menu_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QMenu*
/// @param param1 QPointF*
///
QPointF* q_menu_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QMenu*
/// @param param1 QPoint*
///
QPoint* q_menu_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QMenu*
/// @param param1 QPointF*
///
QPointF* q_menu_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QMenu*
/// @param param1 QPoint*
///
QPoint* q_menu_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QMenu*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_menu_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QMenu*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_menu_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QMenu*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_menu_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QMenu*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_menu_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QMenu*
///
QWidget* q_menu_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QMenu*
///
QWidget* q_menu_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QMenu*
///
QWidget* q_menu_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QMenu*
///
const QPalette* q_menu_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QMenu*
/// @param palette QPalette*
///
void q_menu_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QMenu*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_menu_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QMenu*
///
/// @return enum QPalette__ColorRole
///
int32_t q_menu_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QMenu*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_menu_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QMenu*
///
/// @return enum QPalette__ColorRole
///
int32_t q_menu_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QMenu*
///
const QFont* q_menu_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QMenu*
/// @param font QFont*
///
void q_menu_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QMenu*
///
QFontMetrics* q_menu_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QMenu*
///
QFontInfo* q_menu_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QMenu*
///
QCursor* q_menu_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QMenu*
/// @param cursor QCursor*
///
void q_menu_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QMenu*
///
void q_menu_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QMenu*
/// @param enable bool
///
void q_menu_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QMenu*
///
bool q_menu_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QMenu*
///
bool q_menu_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QMenu*
/// @param enable bool
///
void q_menu_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QMenu*
///
bool q_menu_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QMenu*
/// @param mask QBitmap*
///
void q_menu_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QMenu*
/// @param mask QRegion*
///
void q_menu_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QMenu*
///
QRegion* q_menu_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QMenu*
///
void q_menu_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMenu*
/// @param target QPaintDevice*
///
void q_menu_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMenu*
/// @param painter QPainter*
///
void q_menu_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QMenu*
///
QPixmap* q_menu_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QMenu*
///
QGraphicsEffect* q_menu_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QMenu*
/// @param effect QGraphicsEffect*
///
void q_menu_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QMenu*
/// @param type enum Qt__GestureType
///
void q_menu_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QMenu*
/// @param type enum Qt__GestureType
///
void q_menu_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QMenu*
/// @param windowTitle const char*
///
void q_menu_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QMenu*
/// @param styleSheet const char*
///
void q_menu_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMenu*
///
const char* q_menu_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMenu*
///
const char* q_menu_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QMenu*
/// @param icon QIcon*
///
void q_menu_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QMenu*
///
QIcon* q_menu_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QMenu*
/// @param windowIconText const char*
///
void q_menu_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMenu*
///
const char* q_menu_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QMenu*
/// @param windowRole const char*
///
void q_menu_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMenu*
///
const char* q_menu_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QMenu*
/// @param filePath const char*
///
void q_menu_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMenu*
///
const char* q_menu_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QMenu*
/// @param level double
///
void q_menu_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QMenu*
///
double q_menu_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QMenu*
///
bool q_menu_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QMenu*
/// @param toolTip const char*
///
void q_menu_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMenu*
///
const char* q_menu_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QMenu*
/// @param msec int
///
void q_menu_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QMenu*
///
int32_t q_menu_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QMenu*
/// @param statusTip const char*
///
void q_menu_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMenu*
///
const char* q_menu_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QMenu*
/// @param whatsThis const char*
///
void q_menu_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMenu*
///
const char* q_menu_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMenu*
///
const char* q_menu_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QMenu*
/// @param name const char*
///
void q_menu_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMenu*
///
const char* q_menu_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QMenu*
/// @param description const char*
///
void q_menu_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QMenu*
/// @param direction enum Qt__LayoutDirection
///
void q_menu_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QMenu*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_menu_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QMenu*
///
void q_menu_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QMenu*
/// @param locale QLocale*
///
void q_menu_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QMenu*
///
QLocale* q_menu_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QMenu*
///
void q_menu_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QMenu*
///
bool q_menu_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QMenu*
///
bool q_menu_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QMenu*
///
void q_menu_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QMenu*
///
bool q_menu_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QMenu*
///
void q_menu_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QMenu*
///
void q_menu_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QMenu*
/// @param reason enum Qt__FocusReason
///
void q_menu_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QMenu*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_menu_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QMenu*
/// @param policy enum Qt__FocusPolicy
///
void q_menu_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QMenu*
///
bool q_menu_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_menu_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QMenu*
/// @param focusProxy QWidget*
///
void q_menu_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QMenu*
///
QWidget* q_menu_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QMenu*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_menu_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QMenu*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_menu_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QMenu*
///
void q_menu_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QMenu*
/// @param param1 QCursor*
///
void q_menu_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QMenu*
///
void q_menu_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QMenu*
///
void q_menu_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QMenu*
///
void q_menu_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QMenu*
/// @param key QKeySequence*
///
int32_t q_menu_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QMenu*
/// @param id int
///
void q_menu_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QMenu*
/// @param id int
///
void q_menu_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QMenu*
/// @param id int
///
void q_menu_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_menu_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_menu_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QMenu*
///
bool q_menu_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QMenu*
/// @param enable bool
///
void q_menu_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QMenu*
///
QGraphicsProxyWidget* q_menu_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QMenu*
///
void q_menu_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QMenu*
///
void q_menu_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QMenu*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_menu_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QMenu*
/// @param param1 QRect*
///
void q_menu_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QMenu*
/// @param param1 QRegion*
///
void q_menu_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QMenu*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_menu_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QMenu*
/// @param param1 QRect*
///
void q_menu_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QMenu*
/// @param param1 QRegion*
///
void q_menu_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QMenu*
/// @param hidden bool
///
void q_menu_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QMenu*
///
void q_menu_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QMenu*
///
void q_menu_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QMenu*
///
void q_menu_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QMenu*
///
void q_menu_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QMenu*
///
void q_menu_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QMenu*
///
void q_menu_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QMenu*
///
bool q_menu_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QMenu*
///
void q_menu_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QMenu*
///
void q_menu_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QMenu*
/// @param param1 QWidget*
///
void q_menu_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QMenu*
/// @param x int
/// @param y int
///
void q_menu_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QMenu*
/// @param param1 QPoint*
///
void q_menu_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QMenu*
/// @param w int
/// @param h int
///
void q_menu_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QMenu*
/// @param param1 QSize*
///
void q_menu_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QMenu*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_menu_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QMenu*
/// @param geometry QRect*
///
void q_menu_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QMenu*
///
char* q_menu_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QMenu*
/// @param geometry const char*
///
bool q_menu_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QMenu*
///
void q_menu_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QMenu*
///
bool q_menu_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QMenu*
/// @param param1 QWidget*
///
bool q_menu_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QMenu*
///
bool q_menu_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QMenu*
///
bool q_menu_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QMenu*
///
bool q_menu_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QMenu*
///
bool q_menu_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QMenu*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_menu_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QMenu*
/// @param state flag of enum Qt__WindowState
///
void q_menu_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QMenu*
/// @param state flag of enum Qt__WindowState
///
void q_menu_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QMenu*
///
QSizePolicy* q_menu_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QMenu*
/// @param sizePolicy QSizePolicy*
///
void q_menu_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QMenu*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_menu_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QMenu*
///
QRegion* q_menu_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QMenu*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_menu_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QMenu*
/// @param margins QMargins*
///
void q_menu_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QMenu*
///
QMargins* q_menu_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QMenu*
///
QRect* q_menu_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QMenu*
///
QLayout* q_menu_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QMenu*
/// @param layout QLayout*
///
void q_menu_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QMenu*
///
void q_menu_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QMenu*
/// @param parent QWidget*
///
void q_menu_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QMenu*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_menu_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QMenu*
/// @param dx int
/// @param dy int
///
void q_menu_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QMenu*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_menu_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QMenu*
///
QWidget* q_menu_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QMenu*
///
QWidget* q_menu_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QMenu*
///
QWidget* q_menu_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QMenu*
///
bool q_menu_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QMenu*
/// @param on bool
///
void q_menu_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QMenu*
/// @param action QAction*
///
void q_menu_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QMenu*
/// @param actions libqt_list of QAction*
///
void q_menu_add_actions(void* self, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QMenu*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_menu_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QMenu*
/// @param before QAction*
/// @param action QAction*
///
void q_menu_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QMenu*
/// @param action QAction*
///
void q_menu_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QMenu*
///
/// @return libqt_list of QAction*
///
libqt_list q_menu_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QMenu*
/// @param text const char*
///
QAction* q_menu_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QMenu*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_menu_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QMenu*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_menu_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QMenu*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_menu_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QMenu*
///
QWidget* q_menu_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QMenu*
/// @param type flag of enum Qt__WindowType
///
void q_menu_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QMenu*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_menu_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QMenu*
/// @param param1 enum Qt__WindowType
///
void q_menu_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QMenu*
/// @param type flag of enum Qt__WindowType
///
void q_menu_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QMenu*
///
/// @return enum Qt__WindowType
///
int32_t q_menu_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* q_menu_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QMenu*
/// @param x int
/// @param y int
///
QWidget* q_menu_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QMenu*
/// @param p QPoint*
///
QWidget* q_menu_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QMenu*
/// @param p QPointF*
///
QWidget* q_menu_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QMenu*
/// @param param1 enum Qt__WidgetAttribute
///
void q_menu_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QMenu*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_menu_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QMenu*
///
void q_menu_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QMenu*
/// @param child QWidget*
///
bool q_menu_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QMenu*
///
bool q_menu_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QMenu*
/// @param enabled bool
///
void q_menu_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QMenu*
///
QBackingStore* q_menu_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QMenu*
///
QWindow* q_menu_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QMenu*
///
QScreen* q_menu_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QMenu*
/// @param screen QScreen*
///
void q_menu_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_menu_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QMenu*
/// @param title const char*
///
void q_menu_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, const char* title)
///
void q_menu_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QMenu*
/// @param icon QIcon*
///
void q_menu_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QIcon* icon)
///
void q_menu_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QMenu*
/// @param iconText const char*
///
void q_menu_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, const char* iconText)
///
void q_menu_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QMenu*
/// @param pos QPoint*
///
void q_menu_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QPoint* pos)
///
void q_menu_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QMenu*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_menu_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QMenu*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_menu_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMenu*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_menu_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMenu*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_menu_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMenu*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_menu_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMenu*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_menu_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMenu*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_menu_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMenu*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_menu_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QMenu*
/// @param rectangle QRect*
///
QPixmap* q_menu_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QMenu*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_menu_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QMenu*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_menu_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QMenu*
/// @param id int
/// @param enable bool
///
void q_menu_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QMenu*
/// @param id int
/// @param enable bool
///
void q_menu_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QMenu*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_menu_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QMenu*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_menu_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_menu_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_menu_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMenu*
///
const char* q_menu_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QMenu*
/// @param name char*
///
void q_menu_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QMenu*
///
bool q_menu_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QMenu*
///
bool q_menu_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QMenu*
///
bool q_menu_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QMenu*
///
bool q_menu_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QMenu*
/// @param b bool
///
bool q_menu_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QMenu*
///
QThread* q_menu_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QMenu*
/// @param thread QThread*
///
bool q_menu_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMenu*
/// @param interval int
///
int32_t q_menu_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMenu*
/// @param time int64_t of nanoseconds
///
int32_t q_menu_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QMenu*
/// @param id int
///
void q_menu_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QMenu*
/// @param id enum Qt__TimerId
///
void q_menu_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QMenu*
///
/// @return libqt_list of QObject*
///
libqt_list q_menu_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QMenu*
/// @param filterObj QObject*
///
void q_menu_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QMenu*
/// @param obj QObject*
///
void q_menu_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_menu_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QMenu*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_menu_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_menu_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_menu_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QMenu*
///
void q_menu_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QMenu*
///
void q_menu_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QMenu*
/// @param name const char*
/// @param value QVariant*
///
bool q_menu_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QMenu*
/// @param name const char*
///
QVariant* q_menu_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QMenu*
///
const char** q_menu_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QMenu*
///
QBindingStorage* q_menu_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QMenu*
///
const QBindingStorage* q_menu_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMenu*
///
void q_menu_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMenu*
/// @param callback void func(QMenu* self)
///
void q_menu_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QMenu*
///
QObject* q_menu_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QMenu*
/// @param classname const char*
///
bool q_menu_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QMenu*
///
void q_menu_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMenu*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_menu_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMenu*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_menu_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_menu_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QMenu*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_menu_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMenu*
/// @param param1 QObject*
///
void q_menu_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QObject* param1)
///
void q_menu_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QMenu*
///
bool q_menu_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QMenu*
///
int32_t q_menu_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QMenu*
///
int32_t q_menu_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QMenu*
///
int32_t q_menu_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QMenu*
///
int32_t q_menu_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QMenu*
///
int32_t q_menu_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QMenu*
///
int32_t q_menu_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QMenu*
///
double q_menu_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QMenu*
///
double q_menu_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QMenu*
///
int32_t q_menu_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QMenu*
///
int32_t q_menu_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_menu_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_menu_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
///
int32_t q_menu_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
///
int32_t q_menu_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback int32_t func()
///
void q_menu_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
/// @param visible bool
///
void q_menu_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
/// @param visible bool
///
void q_menu_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, bool visible)
///
void q_menu_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
///
QSize* q_menu_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
///
QSize* q_menu_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback QSize* func()
///
void q_menu_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
/// @param param1 int
///
int32_t q_menu_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
/// @param param1 int
///
int32_t q_menu_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback int32_t func(QMenu* self, int param1)
///
void q_menu_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
///
bool q_menu_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
///
bool q_menu_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback bool func()
///
void q_menu_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
///
QPaintEngine* q_menu_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
///
QPaintEngine* q_menu_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback QPaintEngine* func()
///
void q_menu_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
/// @param event QMouseEvent*
///
void q_menu_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
/// @param event QMouseEvent*
///
void q_menu_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QMouseEvent* event)
///
void q_menu_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
/// @param event QKeyEvent*
///
void q_menu_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
/// @param event QKeyEvent*
///
void q_menu_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QKeyEvent* event)
///
void q_menu_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
/// @param event QFocusEvent*
///
void q_menu_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
/// @param event QFocusEvent*
///
void q_menu_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QFocusEvent* event)
///
void q_menu_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
/// @param event QFocusEvent*
///
void q_menu_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
/// @param event QFocusEvent*
///
void q_menu_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QFocusEvent* event)
///
void q_menu_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
/// @param event QMoveEvent*
///
void q_menu_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
/// @param event QMoveEvent*
///
void q_menu_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QMoveEvent* event)
///
void q_menu_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
/// @param event QResizeEvent*
///
void q_menu_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
/// @param event QResizeEvent*
///
void q_menu_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QResizeEvent* event)
///
void q_menu_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
/// @param event QCloseEvent*
///
void q_menu_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
/// @param event QCloseEvent*
///
void q_menu_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QCloseEvent* event)
///
void q_menu_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
/// @param event QContextMenuEvent*
///
void q_menu_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
/// @param event QContextMenuEvent*
///
void q_menu_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QContextMenuEvent* event)
///
void q_menu_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
/// @param event QTabletEvent*
///
void q_menu_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
/// @param event QTabletEvent*
///
void q_menu_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QTabletEvent* event)
///
void q_menu_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
/// @param event QDragEnterEvent*
///
void q_menu_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
/// @param event QDragEnterEvent*
///
void q_menu_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QDragEnterEvent* event)
///
void q_menu_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
/// @param event QDragMoveEvent*
///
void q_menu_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
/// @param event QDragMoveEvent*
///
void q_menu_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QDragMoveEvent* event)
///
void q_menu_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
/// @param event QDragLeaveEvent*
///
void q_menu_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
/// @param event QDragLeaveEvent*
///
void q_menu_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QDragLeaveEvent* event)
///
void q_menu_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
/// @param event QDropEvent*
///
void q_menu_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
/// @param event QDropEvent*
///
void q_menu_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QDropEvent* event)
///
void q_menu_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
/// @param event QShowEvent*
///
void q_menu_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
/// @param event QShowEvent*
///
void q_menu_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QShowEvent* event)
///
void q_menu_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_menu_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_menu_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback bool func(QMenu* self, const char* eventType, void* message, intptr_t* result)
///
void q_menu_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_menu_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_menu_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback int32_t func(QMenu* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_menu_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
/// @param painter QPainter*
///
void q_menu_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
/// @param painter QPainter*
///
void q_menu_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QPainter* painter)
///
void q_menu_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
/// @param offset QPoint*
///
QPaintDevice* q_menu_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
/// @param offset QPoint*
///
QPaintDevice* q_menu_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback QPaintDevice* func(QMenu* self, QPoint* offset)
///
void q_menu_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
///
QPainter* q_menu_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
///
QPainter* q_menu_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback QPainter* func()
///
void q_menu_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
/// @param param1 QInputMethodEvent*
///
void q_menu_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
/// @param param1 QInputMethodEvent*
///
void q_menu_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QInputMethodEvent* param1)
///
void q_menu_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_menu_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_menu_qbase_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback QVariant* func(QMenu* self, enum Qt__InputMethodQuery param1)
///
void q_menu_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_menu_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_menu_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback bool func(QMenu* self, QObject* watched, QEvent* event)
///
void q_menu_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
/// @param event QChildEvent*
///
void q_menu_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
/// @param event QChildEvent*
///
void q_menu_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QChildEvent* event)
///
void q_menu_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
/// @param event QEvent*
///
void q_menu_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
/// @param event QEvent*
///
void q_menu_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QEvent* event)
///
void q_menu_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
/// @param signal QMetaMethod*
///
void q_menu_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
/// @param signal QMetaMethod*
///
void q_menu_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QMetaMethod* signal)
///
void q_menu_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
/// @param signal QMetaMethod*
///
void q_menu_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
/// @param signal QMetaMethod*
///
void q_menu_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, QMetaMethod* signal)
///
void q_menu_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
///
void q_menu_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
///
void q_menu_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback void func()
///
void q_menu_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
///
void q_menu_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
///
void q_menu_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback void func()
///
void q_menu_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
///
void q_menu_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
///
void q_menu_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback void func()
///
void q_menu_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
///
bool q_menu_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
///
bool q_menu_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback bool func()
///
void q_menu_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
///
bool q_menu_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
///
bool q_menu_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback bool func()
///
void q_menu_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
///
QObject* q_menu_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
///
QObject* q_menu_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback QObject* func()
///
void q_menu_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
///
int32_t q_menu_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
///
int32_t q_menu_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback int32_t func()
///
void q_menu_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
/// @param signal const char*
///
int32_t q_menu_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
/// @param signal const char*
///
int32_t q_menu_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback int32_t func(QMenu* self, const char* signal)
///
void q_menu_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
/// @param signal QMetaMethod*
///
bool q_menu_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
/// @param signal QMetaMethod*
///
bool q_menu_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback bool func(QMenu* self, QMetaMethod* signal)
///
void q_menu_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMenu*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_menu_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMenu*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_menu_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMenu*
/// @param callback double func(QMenu* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_menu_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QMenu*
/// @param callback void func(QMenu* self, const char* objectName)
///
void q_menu_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#dtor.QMenu)
///
/// Delete this object from C++ memory.
///
/// @param self QMenu*
///
void q_menu_delete(void* self);

#endif
