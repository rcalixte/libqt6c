#pragma once
#ifndef SRCQT6C_LIBQMENU_H
#define SRCQT6C_LIBQMENU_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqaction.h"
#include "libqevent.h"
#include "libqicon.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpaintdevice.h"
#include "libqpaintengine.h"
#include "libqpainter.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqsize.h"
#include <string.h>
#include "libqstyleoption.h"
#include "libqvariant.h"
#include "libqwidget.h"

/// https://doc.qt.io/qt-6/qmenu.html

/// q_menu_new constructs a new QMenu object.
///
/// ``` QWidget* parent ```
QMenu* q_menu_new(void* parent);

/// q_menu_new2 constructs a new QMenu object.
///
///
QMenu* q_menu_new2();

/// q_menu_new3 constructs a new QMenu object.
///
/// ``` const char* title ```
QMenu* q_menu_new3(const char* title);

/// q_menu_new4 constructs a new QMenu object.
///
/// ``` const char* title, QWidget* parent ```
QMenu* q_menu_new4(const char* title, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QMenu* self ```
const QMetaObject* q_menu_meta_object(void* self);

/// ``` QMenu* self, const char* param1 ```
void* q_menu_metacast(void* self, const char* param1);

/// ``` QMenu* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_menu_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QMenu* self, int32_t (*slot)(QMenu*, enum QMetaObject__Call, int, void*) ```
void q_menu_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QMenu* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_menu_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_menu_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#addMenu)
///
/// ``` QMenu* self, QMenu* menu ```
QAction* q_menu_add_menu(void* self, void* menu);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#addMenu)
///
/// ``` QMenu* self, const char* title ```
QMenu* q_menu_add_menu_with_title(void* self, const char* title);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#addMenu)
///
/// ``` QMenu* self, QIcon* icon, const char* title ```
QMenu* q_menu_add_menu2(void* self, void* icon, const char* title);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#addSeparator)
///
/// ``` QMenu* self ```
QAction* q_menu_add_separator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#addSection)
///
/// ``` QMenu* self, const char* text ```
QAction* q_menu_add_section(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#addSection)
///
/// ``` QMenu* self, QIcon* icon, const char* text ```
QAction* q_menu_add_section2(void* self, void* icon, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#insertMenu)
///
/// ``` QMenu* self, QAction* before, QMenu* menu ```
QAction* q_menu_insert_menu(void* self, void* before, void* menu);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#insertSeparator)
///
/// ``` QMenu* self, QAction* before ```
QAction* q_menu_insert_separator(void* self, void* before);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#insertSection)
///
/// ``` QMenu* self, QAction* before, const char* text ```
QAction* q_menu_insert_section(void* self, void* before, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#insertSection)
///
/// ``` QMenu* self, QAction* before, QIcon* icon, const char* text ```
QAction* q_menu_insert_section2(void* self, void* before, void* icon, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#isEmpty)
///
/// ``` QMenu* self ```
bool q_menu_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#clear)
///
/// ``` QMenu* self ```
void q_menu_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#setTearOffEnabled)
///
/// ``` QMenu* self, bool tearOffEnabled ```
void q_menu_set_tear_off_enabled(void* self, bool tearOffEnabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#isTearOffEnabled)
///
/// ``` QMenu* self ```
bool q_menu_is_tear_off_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#isTearOffMenuVisible)
///
/// ``` QMenu* self ```
bool q_menu_is_tear_off_menu_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#showTearOffMenu)
///
/// ``` QMenu* self ```
void q_menu_show_tear_off_menu(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#showTearOffMenu)
///
/// ``` QMenu* self, QPoint* pos ```
void q_menu_show_tear_off_menu_with_pos(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#hideTearOffMenu)
///
/// ``` QMenu* self ```
void q_menu_hide_tear_off_menu(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#setDefaultAction)
///
/// ``` QMenu* self, QAction* defaultAction ```
void q_menu_set_default_action(void* self, void* defaultAction);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#defaultAction)
///
/// ``` QMenu* self ```
QAction* q_menu_default_action(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#setActiveAction)
///
/// ``` QMenu* self, QAction* act ```
void q_menu_set_active_action(void* self, void* act);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#activeAction)
///
/// ``` QMenu* self ```
QAction* q_menu_active_action(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#popup)
///
/// ``` QMenu* self, QPoint* pos ```
void q_menu_popup(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// ``` QMenu* self ```
QAction* q_menu_exec(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// ``` QMenu* self, QPoint* pos ```
QAction* q_menu_exec_with_pos(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// ``` libqt_list /* of QAction* */ actions, QPoint* pos ```
QAction* q_menu_exec2(libqt_list actions, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#sizeHint)
///
/// ``` QMenu* self ```
QSize* q_menu_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QMenu* self, QSize* (*slot)() ```
void q_menu_on_size_hint(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#sizeHint)
///
/// Base class method implementation
///
/// ``` QMenu* self ```
QSize* q_menu_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#actionGeometry)
///
/// ``` QMenu* self, QAction* param1 ```
QRect* q_menu_action_geometry(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#actionAt)
///
/// ``` QMenu* self, QPoint* param1 ```
QAction* q_menu_action_at(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#menuAction)
///
/// ``` QMenu* self ```
QAction* q_menu_menu_action(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#menuInAction)
///
/// ``` QAction* action ```
QMenu* q_menu_menu_in_action(void* action);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#title)
///
/// ``` QMenu* self ```
const char* q_menu_title(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#setTitle)
///
/// ``` QMenu* self, const char* title ```
void q_menu_set_title(void* self, const char* title);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#icon)
///
/// ``` QMenu* self ```
QIcon* q_menu_icon(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#setIcon)
///
/// ``` QMenu* self, QIcon* icon ```
void q_menu_set_icon(void* self, void* icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#setNoReplayFor)
///
/// ``` QMenu* self, QWidget* widget ```
void q_menu_set_no_replay_for(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#separatorsCollapsible)
///
/// ``` QMenu* self ```
bool q_menu_separators_collapsible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#setSeparatorsCollapsible)
///
/// ``` QMenu* self, bool collapse ```
void q_menu_set_separators_collapsible(void* self, bool collapse);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#toolTipsVisible)
///
/// ``` QMenu* self ```
bool q_menu_tool_tips_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#setToolTipsVisible)
///
/// ``` QMenu* self, bool visible ```
void q_menu_set_tool_tips_visible(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#aboutToShow)
///
/// ``` QMenu* self ```
void q_menu_about_to_show(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#aboutToShow)
///
/// ``` QMenu* self, void (*slot)(QMenu*) ```
void q_menu_on_about_to_show(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#aboutToHide)
///
/// ``` QMenu* self ```
void q_menu_about_to_hide(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#aboutToHide)
///
/// ``` QMenu* self, void (*slot)(QMenu*) ```
void q_menu_on_about_to_hide(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#triggered)
///
/// ``` QMenu* self, QAction* action ```
void q_menu_triggered(void* self, void* action);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#triggered)
///
/// ``` QMenu* self, void (*slot)(QMenu*, QAction*) ```
void q_menu_on_triggered(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#hovered)
///
/// ``` QMenu* self, QAction* action ```
void q_menu_hovered(void* self, void* action);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#hovered)
///
/// ``` QMenu* self, void (*slot)(QMenu*, QAction*) ```
void q_menu_on_hovered(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#columnCount)
///
/// ``` QMenu* self ```
int32_t q_menu_column_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#columnCount)
///
/// Allows for overriding the related default method
///
/// ``` QMenu* self, int32_t (*slot)() ```
void q_menu_on_column_count(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#columnCount)
///
/// Base class method implementation
///
/// ``` QMenu* self ```
int32_t q_menu_qbase_column_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#changeEvent)
///
/// ``` QMenu* self, QEvent* param1 ```
void q_menu_change_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QEvent*) ```
void q_menu_on_change_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#changeEvent)
///
/// Base class method implementation
///
/// ``` QMenu* self, QEvent* param1 ```
void q_menu_qbase_change_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#keyPressEvent)
///
/// ``` QMenu* self, QKeyEvent* param1 ```
void q_menu_key_press_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QKeyEvent*) ```
void q_menu_on_key_press_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#keyPressEvent)
///
/// Base class method implementation
///
/// ``` QMenu* self, QKeyEvent* param1 ```
void q_menu_qbase_key_press_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#mouseReleaseEvent)
///
/// ``` QMenu* self, QMouseEvent* param1 ```
void q_menu_mouse_release_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QMouseEvent*) ```
void q_menu_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// ``` QMenu* self, QMouseEvent* param1 ```
void q_menu_qbase_mouse_release_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#mousePressEvent)
///
/// ``` QMenu* self, QMouseEvent* param1 ```
void q_menu_mouse_press_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QMouseEvent*) ```
void q_menu_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#mousePressEvent)
///
/// Base class method implementation
///
/// ``` QMenu* self, QMouseEvent* param1 ```
void q_menu_qbase_mouse_press_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#mouseMoveEvent)
///
/// ``` QMenu* self, QMouseEvent* param1 ```
void q_menu_mouse_move_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QMouseEvent*) ```
void q_menu_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// ``` QMenu* self, QMouseEvent* param1 ```
void q_menu_qbase_mouse_move_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#wheelEvent)
///
/// ``` QMenu* self, QWheelEvent* param1 ```
void q_menu_wheel_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#wheelEvent)
///
/// Allows for overriding the related default method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QWheelEvent*) ```
void q_menu_on_wheel_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#wheelEvent)
///
/// Base class method implementation
///
/// ``` QMenu* self, QWheelEvent* param1 ```
void q_menu_qbase_wheel_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#enterEvent)
///
/// ``` QMenu* self, QEnterEvent* param1 ```
void q_menu_enter_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#enterEvent)
///
/// Allows for overriding the related default method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QEnterEvent*) ```
void q_menu_on_enter_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#enterEvent)
///
/// Base class method implementation
///
/// ``` QMenu* self, QEnterEvent* param1 ```
void q_menu_qbase_enter_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#leaveEvent)
///
/// ``` QMenu* self, QEvent* param1 ```
void q_menu_leave_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#leaveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QEvent*) ```
void q_menu_on_leave_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#leaveEvent)
///
/// Base class method implementation
///
/// ``` QMenu* self, QEvent* param1 ```
void q_menu_qbase_leave_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#hideEvent)
///
/// ``` QMenu* self, QHideEvent* param1 ```
void q_menu_hide_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#hideEvent)
///
/// Allows for overriding the related default method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QHideEvent*) ```
void q_menu_on_hide_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#hideEvent)
///
/// Base class method implementation
///
/// ``` QMenu* self, QHideEvent* param1 ```
void q_menu_qbase_hide_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#paintEvent)
///
/// ``` QMenu* self, QPaintEvent* param1 ```
void q_menu_paint_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QPaintEvent*) ```
void q_menu_on_paint_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#paintEvent)
///
/// Base class method implementation
///
/// ``` QMenu* self, QPaintEvent* param1 ```
void q_menu_qbase_paint_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#actionEvent)
///
/// ``` QMenu* self, QActionEvent* param1 ```
void q_menu_action_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#actionEvent)
///
/// Allows for overriding the related default method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QActionEvent*) ```
void q_menu_on_action_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#actionEvent)
///
/// Base class method implementation
///
/// ``` QMenu* self, QActionEvent* param1 ```
void q_menu_qbase_action_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#timerEvent)
///
/// ``` QMenu* self, QTimerEvent* param1 ```
void q_menu_timer_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QTimerEvent*) ```
void q_menu_on_timer_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#timerEvent)
///
/// Base class method implementation
///
/// ``` QMenu* self, QTimerEvent* param1 ```
void q_menu_qbase_timer_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#event)
///
/// ``` QMenu* self, QEvent* param1 ```
bool q_menu_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QMenu* self, bool (*slot)(QMenu*, QEvent*) ```
void q_menu_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#event)
///
/// Base class method implementation
///
/// ``` QMenu* self, QEvent* param1 ```
bool q_menu_qbase_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#focusNextPrevChild)
///
/// ``` QMenu* self, bool next ```
bool q_menu_focus_next_prev_child(void* self, bool next);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#focusNextPrevChild)
///
/// Allows for overriding the related default method
///
/// ``` QMenu* self, bool (*slot)(QMenu*, bool) ```
void q_menu_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#focusNextPrevChild)
///
/// Base class method implementation
///
/// ``` QMenu* self, bool next ```
bool q_menu_qbase_focus_next_prev_child(void* self, bool next);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#initStyleOption)
///
/// ``` QMenu* self, QStyleOptionMenuItem* option, QAction* action ```
void q_menu_init_style_option(void* self, void* option, void* action);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#initStyleOption)
///
/// Allows for overriding the related default method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QStyleOptionMenuItem*, QAction*) ```
void q_menu_on_init_style_option(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#initStyleOption)
///
/// Base class method implementation
///
/// ``` QMenu* self, QStyleOptionMenuItem* option, QAction* action ```
void q_menu_qbase_init_style_option(void* self, void* option, void* action);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_menu_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_menu_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#popup)
///
/// ``` QMenu* self, QPoint* pos, QAction* at ```
void q_menu_popup2(void* self, void* pos, void* at);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// ``` QMenu* self, QPoint* pos, QAction* at ```
QAction* q_menu_exec22(void* self, void* pos, void* at);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// ``` libqt_list /* of QAction* */ actions, QPoint* pos, QAction* at ```
QAction* q_menu_exec3(libqt_list actions, void* pos, void* at);

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// ``` libqt_list /* of QAction* */ actions, QPoint* pos, QAction* at, QWidget* parent ```
QAction* q_menu_exec4(libqt_list actions, void* pos, void* at, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QMenu* self ```
uintptr_t q_menu_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QMenu* self ```
void q_menu_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QMenu* self ```
uintptr_t q_menu_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QMenu* self ```
uintptr_t q_menu_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QMenu* self ```
QStyle* q_menu_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QMenu* self, QStyle* style ```
void q_menu_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QMenu* self ```
bool q_menu_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QMenu* self ```
bool q_menu_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QMenu* self ```
bool q_menu_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QMenu* self ```
int64_t q_menu_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QMenu* self, enum Qt__WindowModality windowModality ```
void q_menu_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QMenu* self ```
bool q_menu_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QMenu* self, QWidget* param1 ```
bool q_menu_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QMenu* self, bool enabled ```
void q_menu_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QMenu* self, bool disabled ```
void q_menu_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QMenu* self, bool windowModified ```
void q_menu_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QMenu* self ```
QRect* q_menu_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QMenu* self ```
const QRect* q_menu_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QMenu* self ```
QRect* q_menu_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QMenu* self ```
int32_t q_menu_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QMenu* self ```
int32_t q_menu_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QMenu* self ```
QPoint* q_menu_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QMenu* self ```
QSize* q_menu_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QMenu* self ```
QSize* q_menu_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QMenu* self ```
int32_t q_menu_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QMenu* self ```
int32_t q_menu_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QMenu* self ```
QRect* q_menu_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QMenu* self ```
QRect* q_menu_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QMenu* self ```
QRegion* q_menu_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QMenu* self ```
QSize* q_menu_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QMenu* self ```
QSize* q_menu_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QMenu* self ```
int32_t q_menu_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QMenu* self ```
int32_t q_menu_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QMenu* self ```
int32_t q_menu_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QMenu* self ```
int32_t q_menu_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QMenu* self, QSize* minimumSize ```
void q_menu_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QMenu* self, int minw, int minh ```
void q_menu_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QMenu* self, QSize* maximumSize ```
void q_menu_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QMenu* self, int maxw, int maxh ```
void q_menu_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QMenu* self, int minw ```
void q_menu_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QMenu* self, int minh ```
void q_menu_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QMenu* self, int maxw ```
void q_menu_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QMenu* self, int maxh ```
void q_menu_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QMenu* self ```
QSize* q_menu_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QMenu* self, QSize* sizeIncrement ```
void q_menu_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QMenu* self, int w, int h ```
void q_menu_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QMenu* self ```
QSize* q_menu_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QMenu* self, QSize* baseSize ```
void q_menu_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QMenu* self, int basew, int baseh ```
void q_menu_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QMenu* self, QSize* fixedSize ```
void q_menu_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QMenu* self, int w, int h ```
void q_menu_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QMenu* self, int w ```
void q_menu_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QMenu* self, int h ```
void q_menu_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QMenu* self, QPointF* param1 ```
QPointF* q_menu_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QMenu* self, QPoint* param1 ```
QPoint* q_menu_map_to_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QMenu* self, QPointF* param1 ```
QPointF* q_menu_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QMenu* self, QPoint* param1 ```
QPoint* q_menu_map_from_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QMenu* self, QPointF* param1 ```
QPointF* q_menu_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QMenu* self, QPoint* param1 ```
QPoint* q_menu_map_to_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QMenu* self, QPointF* param1 ```
QPointF* q_menu_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QMenu* self, QPoint* param1 ```
QPoint* q_menu_map_from_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QMenu* self, QWidget* param1, QPointF* param2 ```
QPointF* q_menu_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QMenu* self, QWidget* param1, QPoint* param2 ```
QPoint* q_menu_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QMenu* self, QWidget* param1, QPointF* param2 ```
QPointF* q_menu_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QMenu* self, QWidget* param1, QPoint* param2 ```
QPoint* q_menu_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QMenu* self ```
QWidget* q_menu_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QMenu* self ```
QWidget* q_menu_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QMenu* self ```
QWidget* q_menu_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QMenu* self ```
const QPalette* q_menu_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QMenu* self, QPalette* palette ```
void q_menu_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QMenu* self, enum QPalette__ColorRole backgroundRole ```
void q_menu_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QMenu* self ```
int64_t q_menu_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QMenu* self, enum QPalette__ColorRole foregroundRole ```
void q_menu_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QMenu* self ```
int64_t q_menu_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QMenu* self ```
const QFont* q_menu_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QMenu* self, QFont* font ```
void q_menu_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QMenu* self ```
QFontMetrics* q_menu_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QMenu* self ```
QFontInfo* q_menu_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QMenu* self ```
QCursor* q_menu_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QMenu* self, QCursor* cursor ```
void q_menu_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QMenu* self ```
void q_menu_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QMenu* self, bool enable ```
void q_menu_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QMenu* self ```
bool q_menu_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QMenu* self ```
bool q_menu_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QMenu* self, bool enable ```
void q_menu_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QMenu* self ```
bool q_menu_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QMenu* self, QBitmap* mask ```
void q_menu_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QMenu* self, QRegion* mask ```
void q_menu_set_mask_with_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QMenu* self ```
QRegion* q_menu_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QMenu* self ```
void q_menu_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMenu* self, QPaintDevice* target ```
void q_menu_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMenu* self, QPainter* painter ```
void q_menu_render_with_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QMenu* self ```
QPixmap* q_menu_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QMenu* self ```
QGraphicsEffect* q_menu_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QMenu* self, QGraphicsEffect* effect ```
void q_menu_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QMenu* self, enum Qt__GestureType typeVal ```
void q_menu_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QMenu* self, enum Qt__GestureType typeVal ```
void q_menu_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QMenu* self, const char* windowTitle ```
void q_menu_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QMenu* self, const char* styleSheet ```
void q_menu_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QMenu* self ```
const char* q_menu_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QMenu* self ```
const char* q_menu_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QMenu* self, QIcon* icon ```
void q_menu_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QMenu* self ```
QIcon* q_menu_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QMenu* self, const char* windowIconText ```
void q_menu_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QMenu* self ```
const char* q_menu_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QMenu* self, const char* windowRole ```
void q_menu_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QMenu* self ```
const char* q_menu_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QMenu* self, const char* filePath ```
void q_menu_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QMenu* self ```
const char* q_menu_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QMenu* self, double level ```
void q_menu_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QMenu* self ```
double q_menu_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QMenu* self ```
bool q_menu_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QMenu* self, const char* toolTip ```
void q_menu_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QMenu* self ```
const char* q_menu_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QMenu* self, int msec ```
void q_menu_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QMenu* self ```
int32_t q_menu_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QMenu* self, const char* statusTip ```
void q_menu_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QMenu* self ```
const char* q_menu_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QMenu* self, const char* whatsThis ```
void q_menu_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QMenu* self ```
const char* q_menu_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QMenu* self ```
const char* q_menu_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QMenu* self, const char* name ```
void q_menu_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QMenu* self ```
const char* q_menu_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QMenu* self, const char* description ```
void q_menu_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QMenu* self, enum Qt__LayoutDirection direction ```
void q_menu_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QMenu* self ```
int64_t q_menu_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QMenu* self ```
void q_menu_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QMenu* self, QLocale* locale ```
void q_menu_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QMenu* self ```
QLocale* q_menu_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QMenu* self ```
void q_menu_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QMenu* self ```
bool q_menu_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QMenu* self ```
bool q_menu_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QMenu* self ```
void q_menu_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QMenu* self ```
bool q_menu_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QMenu* self ```
void q_menu_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QMenu* self ```
void q_menu_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QMenu* self, enum Qt__FocusReason reason ```
void q_menu_set_focus_with_reason(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QMenu* self ```
int64_t q_menu_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QMenu* self, enum Qt__FocusPolicy policy ```
void q_menu_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QMenu* self ```
bool q_menu_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_menu_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QMenu* self, QWidget* focusProxy ```
void q_menu_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QMenu* self ```
QWidget* q_menu_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QMenu* self ```
int64_t q_menu_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QMenu* self, enum Qt__ContextMenuPolicy policy ```
void q_menu_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QMenu* self ```
void q_menu_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QMenu* self, QCursor* param1 ```
void q_menu_grab_mouse_with_q_cursor(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QMenu* self ```
void q_menu_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QMenu* self ```
void q_menu_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QMenu* self ```
void q_menu_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QMenu* self, QKeySequence* key ```
int32_t q_menu_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QMenu* self, int id ```
void q_menu_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QMenu* self, int id ```
void q_menu_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QMenu* self, int id ```
void q_menu_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_menu_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_menu_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QMenu* self ```
bool q_menu_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QMenu* self, bool enable ```
void q_menu_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QMenu* self ```
QGraphicsProxyWidget* q_menu_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMenu* self ```
void q_menu_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMenu* self ```
void q_menu_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMenu* self, int x, int y, int w, int h ```
void q_menu_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMenu* self, QRect* param1 ```
void q_menu_update_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMenu* self, QRegion* param1 ```
void q_menu_update_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMenu* self, int x, int y, int w, int h ```
void q_menu_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMenu* self, QRect* param1 ```
void q_menu_repaint_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMenu* self, QRegion* param1 ```
void q_menu_repaint_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QMenu* self, bool hidden ```
void q_menu_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QMenu* self ```
void q_menu_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QMenu* self ```
void q_menu_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QMenu* self ```
void q_menu_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QMenu* self ```
void q_menu_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QMenu* self ```
void q_menu_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QMenu* self ```
void q_menu_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QMenu* self ```
bool q_menu_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QMenu* self ```
void q_menu_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QMenu* self ```
void q_menu_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QMenu* self, QWidget* param1 ```
void q_menu_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QMenu* self, int x, int y ```
void q_menu_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QMenu* self, QPoint* param1 ```
void q_menu_move_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QMenu* self, int w, int h ```
void q_menu_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QMenu* self, QSize* param1 ```
void q_menu_resize_with_q_size(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QMenu* self, int x, int y, int w, int h ```
void q_menu_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QMenu* self, QRect* geometry ```
void q_menu_set_geometry_with_geometry(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QMenu* self ```
char* q_menu_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QMenu* self, const char* geometry ```
bool q_menu_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QMenu* self ```
void q_menu_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QMenu* self ```
bool q_menu_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QMenu* self, QWidget* param1 ```
bool q_menu_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QMenu* self ```
bool q_menu_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QMenu* self ```
bool q_menu_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QMenu* self ```
bool q_menu_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QMenu* self ```
bool q_menu_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QMenu* self ```
int64_t q_menu_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QMenu* self, int state ```
void q_menu_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QMenu* self, int state ```
void q_menu_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QMenu* self ```
QSizePolicy* q_menu_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QMenu* self, QSizePolicy* sizePolicy ```
void q_menu_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QMenu* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_menu_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QMenu* self ```
QRegion* q_menu_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QMenu* self, int left, int top, int right, int bottom ```
void q_menu_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QMenu* self, QMargins* margins ```
void q_menu_set_contents_margins_with_margins(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QMenu* self ```
QMargins* q_menu_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QMenu* self ```
QRect* q_menu_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QMenu* self ```
QLayout* q_menu_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QMenu* self, QLayout* layout ```
void q_menu_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QMenu* self ```
void q_menu_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QMenu* self, QWidget* parent ```
void q_menu_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QMenu* self, QWidget* parent, int f ```
void q_menu_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QMenu* self, int dx, int dy ```
void q_menu_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QMenu* self, int dx, int dy, QRect* param3 ```
void q_menu_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QMenu* self ```
QWidget* q_menu_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QMenu* self ```
QWidget* q_menu_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QMenu* self ```
QWidget* q_menu_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QMenu* self ```
bool q_menu_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QMenu* self, bool on ```
void q_menu_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMenu* self, QAction* action ```
void q_menu_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QMenu* self, libqt_list /* of QAction* */ actions ```
void q_menu_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QMenu* self, QAction* before, libqt_list /* of QAction* */ actions ```
void q_menu_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QMenu* self, QAction* before, QAction* action ```
void q_menu_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QMenu* self, QAction* action ```
void q_menu_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QMenu* self ```
libqt_list /* of QAction* */ q_menu_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMenu* self, const char* text ```
QAction* q_menu_add_action_with_text(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMenu* self, QIcon* icon, const char* text ```
QAction* q_menu_add_action2(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMenu* self, const char* text, QKeySequence* shortcut ```
QAction* q_menu_add_action3(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMenu* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_menu_add_action4(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QMenu* self ```
QWidget* q_menu_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QMenu* self, int typeVal ```
void q_menu_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QMenu* self ```
int64_t q_menu_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QMenu* self, enum Qt__WindowType param1 ```
void q_menu_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QMenu* self, int typeVal ```
void q_menu_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QMenu* self ```
int64_t q_menu_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_menu_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QMenu* self, int x, int y ```
QWidget* q_menu_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QMenu* self, QPoint* p ```
QWidget* q_menu_child_at_with_q_point(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QMenu* self, enum Qt__WidgetAttribute param1 ```
void q_menu_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QMenu* self, enum Qt__WidgetAttribute param1 ```
bool q_menu_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QMenu* self ```
void q_menu_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QMenu* self, QWidget* child ```
bool q_menu_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QMenu* self ```
bool q_menu_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QMenu* self, bool enabled ```
void q_menu_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QMenu* self ```
QBackingStore* q_menu_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QMenu* self ```
QWindow* q_menu_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QMenu* self ```
QScreen* q_menu_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QMenu* self, QScreen* screen ```
void q_menu_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_menu_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QMenu* self, const char* title ```
void q_menu_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QMenu* self, void (*slot)(QWidget*, const char*) ```
void q_menu_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QMenu* self, QIcon* icon ```
void q_menu_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QMenu* self, void (*slot)(QWidget*, QIcon*) ```
void q_menu_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QMenu* self, const char* iconText ```
void q_menu_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QMenu* self, void (*slot)(QWidget*, const char*) ```
void q_menu_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QMenu* self, QPoint* pos ```
void q_menu_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QMenu* self, void (*slot)(QWidget*, QPoint*) ```
void q_menu_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QMenu* self ```
int64_t q_menu_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QMenu* self, int hints ```
void q_menu_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMenu* self, QPaintDevice* target, QPoint* targetOffset ```
void q_menu_render2(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMenu* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_menu_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMenu* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_menu_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMenu* self, QPainter* painter, QPoint* targetOffset ```
void q_menu_render22(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMenu* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_menu_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMenu* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_menu_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QMenu* self, QRect* rectangle ```
QPixmap* q_menu_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QMenu* self, enum Qt__GestureType typeVal, int flags ```
void q_menu_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QMenu* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_menu_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QMenu* self, int id, bool enable ```
void q_menu_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QMenu* self, int id, bool enable ```
void q_menu_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QMenu* self, enum Qt__WindowType param1, bool on ```
void q_menu_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QMenu* self, enum Qt__WidgetAttribute param1, bool on ```
void q_menu_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_menu_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_menu_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QMenu* self ```
const char* q_menu_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QMenu* self, char* name ```
void q_menu_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QMenu* self ```
bool q_menu_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QMenu* self ```
bool q_menu_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QMenu* self ```
bool q_menu_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QMenu* self ```
bool q_menu_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QMenu* self, bool b ```
bool q_menu_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QMenu* self ```
QThread* q_menu_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QMenu* self, QThread* thread ```
void q_menu_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMenu* self, int interval ```
int32_t q_menu_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QMenu* self, int id ```
void q_menu_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QMenu* self ```
const libqt_list /* of QObject* */ q_menu_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QMenu* self, QObject* filterObj ```
void q_menu_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QMenu* self, QObject* obj ```
void q_menu_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_menu_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMenu* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_menu_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_menu_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_menu_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QMenu* self ```
void q_menu_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QMenu* self ```
void q_menu_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QMenu* self, const char* name, QVariant* value ```
bool q_menu_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QMenu* self, const char* name ```
QVariant* q_menu_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QMenu* self ```
const char** q_menu_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMenu* self ```
QBindingStorage* q_menu_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMenu* self ```
const QBindingStorage* q_menu_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMenu* self ```
void q_menu_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMenu* self, void (*slot)(QObject*) ```
void q_menu_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QMenu* self ```
QObject* q_menu_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QMenu* self, const char* classname ```
bool q_menu_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QMenu* self ```
void q_menu_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMenu* self, int interval, enum Qt__TimerType timerType ```
int32_t q_menu_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_menu_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMenu* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_menu_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMenu* self, QObject* param1 ```
void q_menu_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMenu* self, void (*slot)(QObject*, QObject*) ```
void q_menu_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QMenu* self ```
bool q_menu_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QMenu* self ```
int32_t q_menu_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QMenu* self ```
int32_t q_menu_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QMenu* self ```
int32_t q_menu_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QMenu* self ```
int32_t q_menu_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QMenu* self ```
int32_t q_menu_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QMenu* self ```
int32_t q_menu_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QMenu* self ```
double q_menu_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QMenu* self ```
double q_menu_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QMenu* self ```
int32_t q_menu_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QMenu* self ```
int32_t q_menu_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_menu_device_pixel_ratio_f_scale();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self ```
int32_t q_menu_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self ```
int32_t q_menu_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, int32_t (*slot)() ```
void q_menu_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, bool visible ```
void q_menu_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, bool visible ```
void q_menu_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, bool) ```
void q_menu_on_set_visible(void* self, void (*slot)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self ```
QSize* q_menu_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self ```
QSize* q_menu_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, QSize* (*slot)() ```
void q_menu_on_minimum_size_hint(void* self, QSize* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, int param1 ```
int32_t q_menu_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, int param1 ```
int32_t q_menu_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, int32_t (*slot)(QMenu*, int) ```
void q_menu_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self ```
bool q_menu_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self ```
bool q_menu_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, bool (*slot)() ```
void q_menu_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self ```
QPaintEngine* q_menu_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self ```
QPaintEngine* q_menu_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, QPaintEngine* (*slot)() ```
void q_menu_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QMouseEvent* event ```
void q_menu_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QMouseEvent* event ```
void q_menu_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QMouseEvent*) ```
void q_menu_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QKeyEvent* event ```
void q_menu_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QKeyEvent* event ```
void q_menu_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QKeyEvent*) ```
void q_menu_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QFocusEvent* event ```
void q_menu_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QFocusEvent* event ```
void q_menu_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QFocusEvent*) ```
void q_menu_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QFocusEvent* event ```
void q_menu_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QFocusEvent* event ```
void q_menu_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QFocusEvent*) ```
void q_menu_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QMoveEvent* event ```
void q_menu_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QMoveEvent* event ```
void q_menu_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QMoveEvent*) ```
void q_menu_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QResizeEvent* event ```
void q_menu_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QResizeEvent* event ```
void q_menu_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QResizeEvent*) ```
void q_menu_on_resize_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QCloseEvent* event ```
void q_menu_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QCloseEvent* event ```
void q_menu_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QCloseEvent*) ```
void q_menu_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QContextMenuEvent* event ```
void q_menu_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QContextMenuEvent* event ```
void q_menu_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QContextMenuEvent*) ```
void q_menu_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QTabletEvent* event ```
void q_menu_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QTabletEvent* event ```
void q_menu_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QTabletEvent*) ```
void q_menu_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QDragEnterEvent* event ```
void q_menu_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QDragEnterEvent* event ```
void q_menu_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QDragEnterEvent*) ```
void q_menu_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QDragMoveEvent* event ```
void q_menu_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QDragMoveEvent* event ```
void q_menu_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QDragMoveEvent*) ```
void q_menu_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QDragLeaveEvent* event ```
void q_menu_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QDragLeaveEvent* event ```
void q_menu_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QDragLeaveEvent*) ```
void q_menu_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QDropEvent* event ```
void q_menu_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QDropEvent* event ```
void q_menu_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QDropEvent*) ```
void q_menu_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QShowEvent* event ```
void q_menu_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QShowEvent* event ```
void q_menu_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QShowEvent*) ```
void q_menu_on_show_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, const char* eventType, void* message, intptr_t* result ```
bool q_menu_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, const char* eventType, void* message, intptr_t* result ```
bool q_menu_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, bool (*slot)(QMenu*, const char*, void*, intptr_t*) ```
void q_menu_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_menu_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_menu_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, int32_t (*slot)(QMenu*, enum QPaintDevice__PaintDeviceMetric) ```
void q_menu_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QPainter* painter ```
void q_menu_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QPainter* painter ```
void q_menu_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QPainter*) ```
void q_menu_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QPoint* offset ```
QPaintDevice* q_menu_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QPoint* offset ```
QPaintDevice* q_menu_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, QPaintDevice* (*slot)(QMenu*, QPoint*) ```
void q_menu_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self ```
QPainter* q_menu_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self ```
QPainter* q_menu_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, QPainter* (*slot)() ```
void q_menu_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QInputMethodEvent* param1 ```
void q_menu_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QInputMethodEvent* param1 ```
void q_menu_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QInputMethodEvent*) ```
void q_menu_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_menu_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_menu_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, QVariant* (*slot)(QMenu*, enum Qt__InputMethodQuery) ```
void q_menu_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QObject* watched, QEvent* event ```
bool q_menu_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QObject* watched, QEvent* event ```
bool q_menu_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, bool (*slot)(QMenu*, QObject*, QEvent*) ```
void q_menu_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QChildEvent* event ```
void q_menu_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QChildEvent* event ```
void q_menu_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QChildEvent*) ```
void q_menu_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QEvent* event ```
void q_menu_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QEvent* event ```
void q_menu_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QEvent*) ```
void q_menu_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QMetaMethod* signal ```
void q_menu_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QMetaMethod* signal ```
void q_menu_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QMetaMethod*) ```
void q_menu_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QMetaMethod* signal ```
void q_menu_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QMetaMethod* signal ```
void q_menu_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)(QMenu*, QMetaMethod*) ```
void q_menu_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self ```
void q_menu_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self ```
void q_menu_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)() ```
void q_menu_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self ```
void q_menu_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self ```
void q_menu_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)() ```
void q_menu_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self ```
void q_menu_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self ```
void q_menu_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, void (*slot)() ```
void q_menu_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self ```
bool q_menu_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self ```
bool q_menu_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, bool (*slot)() ```
void q_menu_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self ```
bool q_menu_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self ```
bool q_menu_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, bool (*slot)() ```
void q_menu_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self ```
QObject* q_menu_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self ```
QObject* q_menu_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, QObject* (*slot)() ```
void q_menu_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self ```
int32_t q_menu_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self ```
int32_t q_menu_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, int32_t (*slot)() ```
void q_menu_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, const char* signal ```
int32_t q_menu_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, const char* signal ```
int32_t q_menu_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, int32_t (*slot)(QMenu*, const char*) ```
void q_menu_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMenu* self, QMetaMethod* signal ```
bool q_menu_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMenu* self, QMetaMethod* signal ```
bool q_menu_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMenu* self, bool (*slot)(QMenu*, QMetaMethod*) ```
void q_menu_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QMenu* self, void (*slot)(QObject*, const char*) ```
void q_menu_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#dtor.QMenu)
///
/// Delete this object from C++ memory.
///
/// ``` QMenu* self ```
void q_menu_delete(void* self);

#endif
