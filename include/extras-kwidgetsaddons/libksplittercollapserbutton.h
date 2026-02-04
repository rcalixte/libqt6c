#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKSPLITTERCOLLAPSERBUTTON_H
#define SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKSPLITTERCOLLAPSERBUTTON_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html)

/// k_splittercollapserbutton_new constructs a new KSplitterCollapserButton object.
///
/// @param childWidget QWidget*
/// @param splitter QSplitter*
///
KSplitterCollapserButton* k_splittercollapserbutton_new(void* childWidget, void* splitter);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KSplitterCollapserButton*
///
const QMetaObject* k_splittercollapserbutton_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KSplitterCollapserButton*
/// @param callback const QMetaObject* func()
///
void k_splittercollapserbutton_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KSplitterCollapserButton*
///
const QMetaObject* k_splittercollapserbutton_qbase_meta_object(void* self);

/// @param self KSplitterCollapserButton*
/// @param param1 const char*
///
void* k_splittercollapserbutton_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KSplitterCollapserButton*
/// @param callback void* func(KSplitterCollapserButton* self, const char* param1)
///
void k_splittercollapserbutton_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KSplitterCollapserButton*
/// @param param1 const char*
///
void* k_splittercollapserbutton_qbase_metacast(void* self, const char* param1);

/// @param self KSplitterCollapserButton*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_splittercollapserbutton_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KSplitterCollapserButton*
/// @param callback int32_t func(KSplitterCollapserButton* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_splittercollapserbutton_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KSplitterCollapserButton*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_splittercollapserbutton_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_splittercollapserbutton_tr(const char* s);

/// [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#isWidgetCollapsed)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_is_widget_collapsed(void* self);

/// [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#sizeHint)
///
/// @param self KSplitterCollapserButton*
///
QSize* k_splittercollapserbutton_size_hint(void* self);

/// [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self KSplitterCollapserButton*
/// @param callback QSize* func()
///
void k_splittercollapserbutton_on_size_hint(void* self, QSize* (*callback)());

/// [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#sizeHint)
///
/// Base class method implementation
///
/// @param self KSplitterCollapserButton*
///
QSize* k_splittercollapserbutton_qbase_size_hint(void* self);

/// [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#collapse)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_collapse(void* self);

/// [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#restore)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_restore(void* self);

/// [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#setCollapsed)
///
/// @param self KSplitterCollapserButton*
/// @param collapsed bool
///
void k_splittercollapserbutton_set_collapsed(void* self, bool collapsed);

/// [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#eventFilter)
///
/// @param self KSplitterCollapserButton*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_splittercollapserbutton_event_filter(void* self, void* param1, void* param2);

/// [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self KSplitterCollapserButton*
/// @param callback bool func(KSplitterCollapserButton* self, QObject* param1, QEvent* param2)
///
void k_splittercollapserbutton_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#eventFilter)
///
/// Base class method implementation
///
/// @param self KSplitterCollapserButton*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_splittercollapserbutton_qbase_event_filter(void* self, void* param1, void* param2);

/// [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#paintEvent)
///
/// @param self KSplitterCollapserButton*
/// @param param1 QPaintEvent*
///
void k_splittercollapserbutton_paint_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QPaintEvent* param1)
///
void k_splittercollapserbutton_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#paintEvent)
///
/// Base class method implementation
///
/// @param self KSplitterCollapserButton*
/// @param param1 QPaintEvent*
///
void k_splittercollapserbutton_qbase_paint_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#enterEvent)
///
/// @param self KSplitterCollapserButton*
/// @param event QEnterEvent*
///
void k_splittercollapserbutton_enter_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#enterEvent)
///
/// Allows for overriding the related default method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QEnterEvent* event)
///
void k_splittercollapserbutton_on_enter_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#enterEvent)
///
/// Base class method implementation
///
/// @param self KSplitterCollapserButton*
/// @param event QEnterEvent*
///
void k_splittercollapserbutton_qbase_enter_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#leaveEvent)
///
/// @param self KSplitterCollapserButton*
/// @param event QEvent*
///
void k_splittercollapserbutton_leave_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#leaveEvent)
///
/// Allows for overriding the related default method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QEvent* event)
///
void k_splittercollapserbutton_on_leave_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#leaveEvent)
///
/// Base class method implementation
///
/// @param self KSplitterCollapserButton*
/// @param event QEvent*
///
void k_splittercollapserbutton_qbase_leave_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#showEvent)
///
/// @param self KSplitterCollapserButton*
/// @param event QShowEvent*
///
void k_splittercollapserbutton_show_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#showEvent)
///
/// Allows for overriding the related default method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QShowEvent* event)
///
void k_splittercollapserbutton_on_show_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#showEvent)
///
/// Base class method implementation
///
/// @param self KSplitterCollapserButton*
/// @param event QShowEvent*
///
void k_splittercollapserbutton_qbase_show_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_splittercollapserbutton_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_splittercollapserbutton_tr3(const char* s, const char* c, int n);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#toolButtonStyle)
///
/// @param self KSplitterCollapserButton*
///
/// @return enum Qt__ToolButtonStyle
///
int32_t k_splittercollapserbutton_tool_button_style(void* self);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#arrowType)
///
/// @param self KSplitterCollapserButton*
///
/// @return enum Qt__ArrowType
///
int32_t k_splittercollapserbutton_arrow_type(void* self);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#setArrowType)
///
/// @param self KSplitterCollapserButton*
/// @param type enum Qt__ArrowType
///
void k_splittercollapserbutton_set_arrow_type(void* self, int32_t type);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#setMenu)
///
/// @param self KSplitterCollapserButton*
/// @param menu QMenu*
///
void k_splittercollapserbutton_set_menu(void* self, void* menu);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#menu)
///
/// @param self KSplitterCollapserButton*
///
QMenu* k_splittercollapserbutton_menu(void* self);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#setPopupMode)
///
/// @param self KSplitterCollapserButton*
/// @param mode enum QToolButton__ToolButtonPopupMode
///
void k_splittercollapserbutton_set_popup_mode(void* self, int32_t mode);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#popupMode)
///
/// @param self KSplitterCollapserButton*
///
/// @return enum QToolButton__ToolButtonPopupMode
///
int32_t k_splittercollapserbutton_popup_mode(void* self);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#defaultAction)
///
/// @param self KSplitterCollapserButton*
///
QAction* k_splittercollapserbutton_default_action(void* self);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#setAutoRaise)
///
/// @param self KSplitterCollapserButton*
/// @param enable bool
///
void k_splittercollapserbutton_set_auto_raise(void* self, bool enable);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#autoRaise)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_auto_raise(void* self);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#showMenu)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_show_menu(void* self);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#setToolButtonStyle)
///
/// @param self KSplitterCollapserButton*
/// @param style enum Qt__ToolButtonStyle
///
void k_splittercollapserbutton_set_tool_button_style(void* self, int32_t style);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#setDefaultAction)
///
/// @param self KSplitterCollapserButton*
/// @param defaultAction QAction*
///
void k_splittercollapserbutton_set_default_action(void* self, void* defaultAction);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#triggered)
///
/// @param self KSplitterCollapserButton*
/// @param param1 QAction*
///
void k_splittercollapserbutton_triggered(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#triggered)
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QAction* param1)
///
void k_splittercollapserbutton_on_triggered(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setText)
///
/// @param self KSplitterCollapserButton*
/// @param text const char*
///
void k_splittercollapserbutton_set_text(void* self, const char* text);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSplitterCollapserButton*
///
const char* k_splittercollapserbutton_text(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setIcon)
///
/// @param self KSplitterCollapserButton*
/// @param icon QIcon*
///
void k_splittercollapserbutton_set_icon(void* self, void* icon);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#icon)
///
/// @param self KSplitterCollapserButton*
///
QIcon* k_splittercollapserbutton_icon(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#iconSize)
///
/// @param self KSplitterCollapserButton*
///
QSize* k_splittercollapserbutton_icon_size(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setShortcut)
///
/// @param self KSplitterCollapserButton*
/// @param key QKeySequence*
///
void k_splittercollapserbutton_set_shortcut(void* self, void* key);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#shortcut)
///
/// @param self KSplitterCollapserButton*
///
QKeySequence* k_splittercollapserbutton_shortcut(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setCheckable)
///
/// @param self KSplitterCollapserButton*
/// @param checkable bool
///
void k_splittercollapserbutton_set_checkable(void* self, bool checkable);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#isCheckable)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_is_checkable(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#isChecked)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_is_checked(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setDown)
///
/// @param self KSplitterCollapserButton*
/// @param down bool
///
void k_splittercollapserbutton_set_down(void* self, bool down);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#isDown)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_is_down(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeat)
///
/// @param self KSplitterCollapserButton*
/// @param autoRepeat bool
///
void k_splittercollapserbutton_set_auto_repeat(void* self, bool autoRepeat);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeat)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_auto_repeat(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeatDelay)
///
/// @param self KSplitterCollapserButton*
/// @param autoRepeatDelay int
///
void k_splittercollapserbutton_set_auto_repeat_delay(void* self, int autoRepeatDelay);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeatDelay)
///
/// @param self KSplitterCollapserButton*
///
int32_t k_splittercollapserbutton_auto_repeat_delay(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeatInterval)
///
/// @param self KSplitterCollapserButton*
/// @param autoRepeatInterval int
///
void k_splittercollapserbutton_set_auto_repeat_interval(void* self, int autoRepeatInterval);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeatInterval)
///
/// @param self KSplitterCollapserButton*
///
int32_t k_splittercollapserbutton_auto_repeat_interval(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoExclusive)
///
/// @param self KSplitterCollapserButton*
/// @param autoExclusive bool
///
void k_splittercollapserbutton_set_auto_exclusive(void* self, bool autoExclusive);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#autoExclusive)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_auto_exclusive(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#group)
///
/// @param self KSplitterCollapserButton*
///
QButtonGroup* k_splittercollapserbutton_group(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setIconSize)
///
/// @param self KSplitterCollapserButton*
/// @param size QSize*
///
void k_splittercollapserbutton_set_icon_size(void* self, void* size);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#animateClick)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_animate_click(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#click)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_click(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#toggle)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_toggle(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setChecked)
///
/// @param self KSplitterCollapserButton*
/// @param checked bool
///
void k_splittercollapserbutton_set_checked(void* self, bool checked);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#pressed)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_pressed(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#pressed)
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self)
///
void k_splittercollapserbutton_on_pressed(void* self, void (*callback)(void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#released)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_released(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#released)
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self)
///
void k_splittercollapserbutton_on_released(void* self, void (*callback)(void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_clicked(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self)
///
void k_splittercollapserbutton_on_clicked(void* self, void (*callback)(void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#toggled)
///
/// @param self KSplitterCollapserButton*
/// @param checked bool
///
void k_splittercollapserbutton_toggled(void* self, bool checked);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#toggled)
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, bool checked)
///
void k_splittercollapserbutton_on_toggled(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// @param self KSplitterCollapserButton*
/// @param checked bool
///
void k_splittercollapserbutton_clicked1(void* self, bool checked);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, bool checked)
///
void k_splittercollapserbutton_on_clicked1(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KSplitterCollapserButton*
///
uintptr_t k_splittercollapserbutton_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KSplitterCollapserButton*
///
uintptr_t k_splittercollapserbutton_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KSplitterCollapserButton*
///
uintptr_t k_splittercollapserbutton_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KSplitterCollapserButton*
///
QStyle* k_splittercollapserbutton_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KSplitterCollapserButton*
/// @param style QStyle*
///
void k_splittercollapserbutton_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KSplitterCollapserButton*
///
/// @return enum Qt__WindowModality
///
int32_t k_splittercollapserbutton_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KSplitterCollapserButton*
/// @param windowModality enum Qt__WindowModality
///
void k_splittercollapserbutton_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KSplitterCollapserButton*
/// @param param1 QWidget*
///
bool k_splittercollapserbutton_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KSplitterCollapserButton*
/// @param enabled bool
///
void k_splittercollapserbutton_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KSplitterCollapserButton*
/// @param disabled bool
///
void k_splittercollapserbutton_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KSplitterCollapserButton*
/// @param windowModified bool
///
void k_splittercollapserbutton_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KSplitterCollapserButton*
///
QRect* k_splittercollapserbutton_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KSplitterCollapserButton*
///
const QRect* k_splittercollapserbutton_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KSplitterCollapserButton*
///
QRect* k_splittercollapserbutton_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KSplitterCollapserButton*
///
int32_t k_splittercollapserbutton_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KSplitterCollapserButton*
///
int32_t k_splittercollapserbutton_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KSplitterCollapserButton*
///
QPoint* k_splittercollapserbutton_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KSplitterCollapserButton*
///
QSize* k_splittercollapserbutton_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KSplitterCollapserButton*
///
QSize* k_splittercollapserbutton_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KSplitterCollapserButton*
///
int32_t k_splittercollapserbutton_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KSplitterCollapserButton*
///
int32_t k_splittercollapserbutton_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KSplitterCollapserButton*
///
QRect* k_splittercollapserbutton_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KSplitterCollapserButton*
///
QRect* k_splittercollapserbutton_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KSplitterCollapserButton*
///
QRegion* k_splittercollapserbutton_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KSplitterCollapserButton*
///
QSize* k_splittercollapserbutton_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KSplitterCollapserButton*
///
QSize* k_splittercollapserbutton_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KSplitterCollapserButton*
///
int32_t k_splittercollapserbutton_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KSplitterCollapserButton*
///
int32_t k_splittercollapserbutton_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KSplitterCollapserButton*
///
int32_t k_splittercollapserbutton_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KSplitterCollapserButton*
///
int32_t k_splittercollapserbutton_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KSplitterCollapserButton*
/// @param minimumSize QSize*
///
void k_splittercollapserbutton_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KSplitterCollapserButton*
/// @param minw int
/// @param minh int
///
void k_splittercollapserbutton_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KSplitterCollapserButton*
/// @param maximumSize QSize*
///
void k_splittercollapserbutton_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KSplitterCollapserButton*
/// @param maxw int
/// @param maxh int
///
void k_splittercollapserbutton_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KSplitterCollapserButton*
/// @param minw int
///
void k_splittercollapserbutton_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KSplitterCollapserButton*
/// @param minh int
///
void k_splittercollapserbutton_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KSplitterCollapserButton*
/// @param maxw int
///
void k_splittercollapserbutton_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KSplitterCollapserButton*
/// @param maxh int
///
void k_splittercollapserbutton_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KSplitterCollapserButton*
///
QSize* k_splittercollapserbutton_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KSplitterCollapserButton*
/// @param sizeIncrement QSize*
///
void k_splittercollapserbutton_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KSplitterCollapserButton*
/// @param w int
/// @param h int
///
void k_splittercollapserbutton_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KSplitterCollapserButton*
///
QSize* k_splittercollapserbutton_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KSplitterCollapserButton*
/// @param baseSize QSize*
///
void k_splittercollapserbutton_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KSplitterCollapserButton*
/// @param basew int
/// @param baseh int
///
void k_splittercollapserbutton_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KSplitterCollapserButton*
/// @param fixedSize QSize*
///
void k_splittercollapserbutton_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KSplitterCollapserButton*
/// @param w int
/// @param h int
///
void k_splittercollapserbutton_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KSplitterCollapserButton*
/// @param w int
///
void k_splittercollapserbutton_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KSplitterCollapserButton*
/// @param h int
///
void k_splittercollapserbutton_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KSplitterCollapserButton*
/// @param param1 QPointF*
///
QPointF* k_splittercollapserbutton_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KSplitterCollapserButton*
/// @param param1 QPoint*
///
QPoint* k_splittercollapserbutton_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KSplitterCollapserButton*
/// @param param1 QPointF*
///
QPointF* k_splittercollapserbutton_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KSplitterCollapserButton*
/// @param param1 QPoint*
///
QPoint* k_splittercollapserbutton_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KSplitterCollapserButton*
/// @param param1 QPointF*
///
QPointF* k_splittercollapserbutton_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KSplitterCollapserButton*
/// @param param1 QPoint*
///
QPoint* k_splittercollapserbutton_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KSplitterCollapserButton*
/// @param param1 QPointF*
///
QPointF* k_splittercollapserbutton_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KSplitterCollapserButton*
/// @param param1 QPoint*
///
QPoint* k_splittercollapserbutton_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KSplitterCollapserButton*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_splittercollapserbutton_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KSplitterCollapserButton*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_splittercollapserbutton_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KSplitterCollapserButton*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_splittercollapserbutton_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KSplitterCollapserButton*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_splittercollapserbutton_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KSplitterCollapserButton*
///
QWidget* k_splittercollapserbutton_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KSplitterCollapserButton*
///
QWidget* k_splittercollapserbutton_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KSplitterCollapserButton*
///
QWidget* k_splittercollapserbutton_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KSplitterCollapserButton*
///
const QPalette* k_splittercollapserbutton_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KSplitterCollapserButton*
/// @param palette QPalette*
///
void k_splittercollapserbutton_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KSplitterCollapserButton*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_splittercollapserbutton_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KSplitterCollapserButton*
///
/// @return enum QPalette__ColorRole
///
int32_t k_splittercollapserbutton_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KSplitterCollapserButton*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_splittercollapserbutton_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KSplitterCollapserButton*
///
/// @return enum QPalette__ColorRole
///
int32_t k_splittercollapserbutton_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KSplitterCollapserButton*
///
const QFont* k_splittercollapserbutton_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KSplitterCollapserButton*
/// @param font QFont*
///
void k_splittercollapserbutton_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KSplitterCollapserButton*
///
QFontMetrics* k_splittercollapserbutton_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KSplitterCollapserButton*
///
QFontInfo* k_splittercollapserbutton_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KSplitterCollapserButton*
///
QCursor* k_splittercollapserbutton_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KSplitterCollapserButton*
/// @param cursor QCursor*
///
void k_splittercollapserbutton_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KSplitterCollapserButton*
/// @param enable bool
///
void k_splittercollapserbutton_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KSplitterCollapserButton*
/// @param enable bool
///
void k_splittercollapserbutton_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KSplitterCollapserButton*
/// @param mask QBitmap*
///
void k_splittercollapserbutton_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KSplitterCollapserButton*
/// @param mask QRegion*
///
void k_splittercollapserbutton_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KSplitterCollapserButton*
///
QRegion* k_splittercollapserbutton_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KSplitterCollapserButton*
/// @param target QPaintDevice*
///
void k_splittercollapserbutton_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KSplitterCollapserButton*
/// @param painter QPainter*
///
void k_splittercollapserbutton_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KSplitterCollapserButton*
///
QPixmap* k_splittercollapserbutton_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KSplitterCollapserButton*
///
QGraphicsEffect* k_splittercollapserbutton_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KSplitterCollapserButton*
/// @param effect QGraphicsEffect*
///
void k_splittercollapserbutton_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KSplitterCollapserButton*
/// @param type enum Qt__GestureType
///
void k_splittercollapserbutton_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KSplitterCollapserButton*
/// @param type enum Qt__GestureType
///
void k_splittercollapserbutton_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KSplitterCollapserButton*
/// @param windowTitle const char*
///
void k_splittercollapserbutton_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KSplitterCollapserButton*
/// @param styleSheet const char*
///
void k_splittercollapserbutton_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSplitterCollapserButton*
///
const char* k_splittercollapserbutton_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSplitterCollapserButton*
///
const char* k_splittercollapserbutton_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KSplitterCollapserButton*
/// @param icon QIcon*
///
void k_splittercollapserbutton_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KSplitterCollapserButton*
///
QIcon* k_splittercollapserbutton_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KSplitterCollapserButton*
/// @param windowIconText const char*
///
void k_splittercollapserbutton_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSplitterCollapserButton*
///
const char* k_splittercollapserbutton_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KSplitterCollapserButton*
/// @param windowRole const char*
///
void k_splittercollapserbutton_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSplitterCollapserButton*
///
const char* k_splittercollapserbutton_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KSplitterCollapserButton*
/// @param filePath const char*
///
void k_splittercollapserbutton_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSplitterCollapserButton*
///
const char* k_splittercollapserbutton_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KSplitterCollapserButton*
/// @param level double
///
void k_splittercollapserbutton_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KSplitterCollapserButton*
///
double k_splittercollapserbutton_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KSplitterCollapserButton*
/// @param toolTip const char*
///
void k_splittercollapserbutton_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSplitterCollapserButton*
///
const char* k_splittercollapserbutton_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KSplitterCollapserButton*
/// @param msec int
///
void k_splittercollapserbutton_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KSplitterCollapserButton*
///
int32_t k_splittercollapserbutton_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KSplitterCollapserButton*
/// @param statusTip const char*
///
void k_splittercollapserbutton_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSplitterCollapserButton*
///
const char* k_splittercollapserbutton_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KSplitterCollapserButton*
/// @param whatsThis const char*
///
void k_splittercollapserbutton_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSplitterCollapserButton*
///
const char* k_splittercollapserbutton_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSplitterCollapserButton*
///
const char* k_splittercollapserbutton_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KSplitterCollapserButton*
/// @param name const char*
///
void k_splittercollapserbutton_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSplitterCollapserButton*
///
const char* k_splittercollapserbutton_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KSplitterCollapserButton*
/// @param description const char*
///
void k_splittercollapserbutton_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KSplitterCollapserButton*
/// @param direction enum Qt__LayoutDirection
///
void k_splittercollapserbutton_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KSplitterCollapserButton*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_splittercollapserbutton_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KSplitterCollapserButton*
/// @param locale QLocale*
///
void k_splittercollapserbutton_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KSplitterCollapserButton*
///
QLocale* k_splittercollapserbutton_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KSplitterCollapserButton*
/// @param reason enum Qt__FocusReason
///
void k_splittercollapserbutton_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KSplitterCollapserButton*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_splittercollapserbutton_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KSplitterCollapserButton*
/// @param policy enum Qt__FocusPolicy
///
void k_splittercollapserbutton_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_splittercollapserbutton_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KSplitterCollapserButton*
/// @param focusProxy QWidget*
///
void k_splittercollapserbutton_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KSplitterCollapserButton*
///
QWidget* k_splittercollapserbutton_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KSplitterCollapserButton*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_splittercollapserbutton_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KSplitterCollapserButton*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_splittercollapserbutton_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KSplitterCollapserButton*
/// @param param1 QCursor*
///
void k_splittercollapserbutton_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KSplitterCollapserButton*
/// @param key QKeySequence*
///
int32_t k_splittercollapserbutton_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KSplitterCollapserButton*
/// @param id int
///
void k_splittercollapserbutton_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KSplitterCollapserButton*
/// @param id int
///
void k_splittercollapserbutton_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KSplitterCollapserButton*
/// @param id int
///
void k_splittercollapserbutton_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_splittercollapserbutton_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_splittercollapserbutton_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KSplitterCollapserButton*
/// @param enable bool
///
void k_splittercollapserbutton_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KSplitterCollapserButton*
///
QGraphicsProxyWidget* k_splittercollapserbutton_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KSplitterCollapserButton*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_splittercollapserbutton_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KSplitterCollapserButton*
/// @param param1 QRect*
///
void k_splittercollapserbutton_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KSplitterCollapserButton*
/// @param param1 QRegion*
///
void k_splittercollapserbutton_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KSplitterCollapserButton*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_splittercollapserbutton_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KSplitterCollapserButton*
/// @param param1 QRect*
///
void k_splittercollapserbutton_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KSplitterCollapserButton*
/// @param param1 QRegion*
///
void k_splittercollapserbutton_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KSplitterCollapserButton*
/// @param hidden bool
///
void k_splittercollapserbutton_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KSplitterCollapserButton*
/// @param param1 QWidget*
///
void k_splittercollapserbutton_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KSplitterCollapserButton*
/// @param x int
/// @param y int
///
void k_splittercollapserbutton_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KSplitterCollapserButton*
/// @param param1 QPoint*
///
void k_splittercollapserbutton_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KSplitterCollapserButton*
/// @param w int
/// @param h int
///
void k_splittercollapserbutton_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KSplitterCollapserButton*
/// @param param1 QSize*
///
void k_splittercollapserbutton_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KSplitterCollapserButton*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_splittercollapserbutton_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KSplitterCollapserButton*
/// @param geometry QRect*
///
void k_splittercollapserbutton_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KSplitterCollapserButton*
///
char* k_splittercollapserbutton_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KSplitterCollapserButton*
/// @param geometry const char*
///
bool k_splittercollapserbutton_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KSplitterCollapserButton*
/// @param param1 QWidget*
///
bool k_splittercollapserbutton_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KSplitterCollapserButton*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_splittercollapserbutton_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KSplitterCollapserButton*
/// @param state flag of enum Qt__WindowState
///
void k_splittercollapserbutton_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KSplitterCollapserButton*
/// @param state flag of enum Qt__WindowState
///
void k_splittercollapserbutton_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KSplitterCollapserButton*
///
QSizePolicy* k_splittercollapserbutton_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KSplitterCollapserButton*
/// @param sizePolicy QSizePolicy*
///
void k_splittercollapserbutton_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KSplitterCollapserButton*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_splittercollapserbutton_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KSplitterCollapserButton*
///
QRegion* k_splittercollapserbutton_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KSplitterCollapserButton*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_splittercollapserbutton_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KSplitterCollapserButton*
/// @param margins QMargins*
///
void k_splittercollapserbutton_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KSplitterCollapserButton*
///
QMargins* k_splittercollapserbutton_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KSplitterCollapserButton*
///
QRect* k_splittercollapserbutton_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KSplitterCollapserButton*
///
QLayout* k_splittercollapserbutton_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KSplitterCollapserButton*
/// @param layout QLayout*
///
void k_splittercollapserbutton_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KSplitterCollapserButton*
/// @param parent QWidget*
///
void k_splittercollapserbutton_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KSplitterCollapserButton*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_splittercollapserbutton_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KSplitterCollapserButton*
/// @param dx int
/// @param dy int
///
void k_splittercollapserbutton_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KSplitterCollapserButton*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_splittercollapserbutton_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KSplitterCollapserButton*
///
QWidget* k_splittercollapserbutton_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KSplitterCollapserButton*
///
QWidget* k_splittercollapserbutton_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KSplitterCollapserButton*
///
QWidget* k_splittercollapserbutton_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KSplitterCollapserButton*
/// @param on bool
///
void k_splittercollapserbutton_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KSplitterCollapserButton*
/// @param action QAction*
///
void k_splittercollapserbutton_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KSplitterCollapserButton*
/// @param actions libqt_list of QAction*
///
void k_splittercollapserbutton_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KSplitterCollapserButton*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_splittercollapserbutton_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KSplitterCollapserButton*
/// @param before QAction*
/// @param action QAction*
///
void k_splittercollapserbutton_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KSplitterCollapserButton*
/// @param action QAction*
///
void k_splittercollapserbutton_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KSplitterCollapserButton*
///
/// @return libqt_list of QAction*
///
libqt_list k_splittercollapserbutton_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KSplitterCollapserButton*
/// @param text const char*
///
QAction* k_splittercollapserbutton_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KSplitterCollapserButton*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_splittercollapserbutton_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KSplitterCollapserButton*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_splittercollapserbutton_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KSplitterCollapserButton*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_splittercollapserbutton_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KSplitterCollapserButton*
///
QWidget* k_splittercollapserbutton_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KSplitterCollapserButton*
/// @param type flag of enum Qt__WindowType
///
void k_splittercollapserbutton_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KSplitterCollapserButton*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_splittercollapserbutton_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KSplitterCollapserButton*
/// @param param1 enum Qt__WindowType
///
void k_splittercollapserbutton_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KSplitterCollapserButton*
/// @param type flag of enum Qt__WindowType
///
void k_splittercollapserbutton_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KSplitterCollapserButton*
///
/// @return enum Qt__WindowType
///
int32_t k_splittercollapserbutton_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* k_splittercollapserbutton_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KSplitterCollapserButton*
/// @param x int
/// @param y int
///
QWidget* k_splittercollapserbutton_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KSplitterCollapserButton*
/// @param p QPoint*
///
QWidget* k_splittercollapserbutton_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KSplitterCollapserButton*
/// @param p QPointF*
///
QWidget* k_splittercollapserbutton_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KSplitterCollapserButton*
/// @param param1 enum Qt__WidgetAttribute
///
void k_splittercollapserbutton_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KSplitterCollapserButton*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_splittercollapserbutton_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KSplitterCollapserButton*
/// @param child QWidget*
///
bool k_splittercollapserbutton_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KSplitterCollapserButton*
/// @param enabled bool
///
void k_splittercollapserbutton_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KSplitterCollapserButton*
///
QBackingStore* k_splittercollapserbutton_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KSplitterCollapserButton*
///
QWindow* k_splittercollapserbutton_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KSplitterCollapserButton*
///
QScreen* k_splittercollapserbutton_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KSplitterCollapserButton*
/// @param screen QScreen*
///
void k_splittercollapserbutton_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_splittercollapserbutton_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KSplitterCollapserButton*
/// @param title const char*
///
void k_splittercollapserbutton_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, const char* title)
///
void k_splittercollapserbutton_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KSplitterCollapserButton*
/// @param icon QIcon*
///
void k_splittercollapserbutton_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QIcon* icon)
///
void k_splittercollapserbutton_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KSplitterCollapserButton*
/// @param iconText const char*
///
void k_splittercollapserbutton_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, const char* iconText)
///
void k_splittercollapserbutton_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KSplitterCollapserButton*
/// @param pos QPoint*
///
void k_splittercollapserbutton_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QPoint* pos)
///
void k_splittercollapserbutton_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KSplitterCollapserButton*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_splittercollapserbutton_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KSplitterCollapserButton*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_splittercollapserbutton_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KSplitterCollapserButton*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_splittercollapserbutton_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KSplitterCollapserButton*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_splittercollapserbutton_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KSplitterCollapserButton*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_splittercollapserbutton_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KSplitterCollapserButton*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_splittercollapserbutton_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KSplitterCollapserButton*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_splittercollapserbutton_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KSplitterCollapserButton*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_splittercollapserbutton_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KSplitterCollapserButton*
/// @param rectangle QRect*
///
QPixmap* k_splittercollapserbutton_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KSplitterCollapserButton*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_splittercollapserbutton_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KSplitterCollapserButton*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_splittercollapserbutton_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KSplitterCollapserButton*
/// @param id int
/// @param enable bool
///
void k_splittercollapserbutton_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KSplitterCollapserButton*
/// @param id int
/// @param enable bool
///
void k_splittercollapserbutton_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KSplitterCollapserButton*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_splittercollapserbutton_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KSplitterCollapserButton*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_splittercollapserbutton_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_splittercollapserbutton_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_splittercollapserbutton_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSplitterCollapserButton*
///
const char* k_splittercollapserbutton_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KSplitterCollapserButton*
/// @param name char*
///
void k_splittercollapserbutton_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KSplitterCollapserButton*
/// @param b bool
///
bool k_splittercollapserbutton_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KSplitterCollapserButton*
///
QThread* k_splittercollapserbutton_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KSplitterCollapserButton*
/// @param thread QThread*
///
bool k_splittercollapserbutton_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSplitterCollapserButton*
/// @param interval int
///
int32_t k_splittercollapserbutton_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSplitterCollapserButton*
/// @param time int64_t of nanoseconds
///
int32_t k_splittercollapserbutton_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KSplitterCollapserButton*
/// @param id int
///
void k_splittercollapserbutton_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KSplitterCollapserButton*
/// @param id enum Qt__TimerId
///
void k_splittercollapserbutton_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KSplitterCollapserButton*
///
/// @return libqt_list of QObject*
///
libqt_list k_splittercollapserbutton_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KSplitterCollapserButton*
/// @param filterObj QObject*
///
void k_splittercollapserbutton_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KSplitterCollapserButton*
/// @param obj QObject*
///
void k_splittercollapserbutton_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_splittercollapserbutton_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_splittercollapserbutton_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KSplitterCollapserButton*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_splittercollapserbutton_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_splittercollapserbutton_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_splittercollapserbutton_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KSplitterCollapserButton*
/// @param receiver QObject*
///
bool k_splittercollapserbutton_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_splittercollapserbutton_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KSplitterCollapserButton*
/// @param name const char*
/// @param value QVariant*
///
bool k_splittercollapserbutton_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KSplitterCollapserButton*
/// @param name const char*
///
QVariant* k_splittercollapserbutton_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KSplitterCollapserButton*
///
const char** k_splittercollapserbutton_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KSplitterCollapserButton*
///
QBindingStorage* k_splittercollapserbutton_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KSplitterCollapserButton*
///
const QBindingStorage* k_splittercollapserbutton_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self)
///
void k_splittercollapserbutton_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KSplitterCollapserButton*
///
QObject* k_splittercollapserbutton_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KSplitterCollapserButton*
/// @param classname const char*
///
bool k_splittercollapserbutton_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSplitterCollapserButton*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_splittercollapserbutton_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSplitterCollapserButton*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_splittercollapserbutton_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* k_splittercollapserbutton_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_splittercollapserbutton_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KSplitterCollapserButton*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_splittercollapserbutton_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KSplitterCollapserButton*
/// @param signal const char*
///
bool k_splittercollapserbutton_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KSplitterCollapserButton*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_splittercollapserbutton_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KSplitterCollapserButton*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_splittercollapserbutton_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KSplitterCollapserButton*
/// @param receiver QObject*
/// @param member const char*
///
bool k_splittercollapserbutton_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSplitterCollapserButton*
/// @param param1 QObject*
///
void k_splittercollapserbutton_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QObject* param1)
///
void k_splittercollapserbutton_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KSplitterCollapserButton*
///
int32_t k_splittercollapserbutton_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KSplitterCollapserButton*
///
int32_t k_splittercollapserbutton_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KSplitterCollapserButton*
///
int32_t k_splittercollapserbutton_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KSplitterCollapserButton*
///
int32_t k_splittercollapserbutton_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KSplitterCollapserButton*
///
int32_t k_splittercollapserbutton_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KSplitterCollapserButton*
///
int32_t k_splittercollapserbutton_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KSplitterCollapserButton*
///
double k_splittercollapserbutton_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KSplitterCollapserButton*
///
double k_splittercollapserbutton_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KSplitterCollapserButton*
///
int32_t k_splittercollapserbutton_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KSplitterCollapserButton*
///
int32_t k_splittercollapserbutton_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_splittercollapserbutton_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_splittercollapserbutton_encode_metric_f(int32_t metric, double value);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
///
QSize* k_splittercollapserbutton_minimum_size_hint(void* self);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
///
QSize* k_splittercollapserbutton_qbase_minimum_size_hint(void* self);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback QSize* func()
///
void k_splittercollapserbutton_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param e QEvent*
///
bool k_splittercollapserbutton_event(void* self, void* e);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param e QEvent*
///
bool k_splittercollapserbutton_qbase_event(void* self, void* e);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback bool func(KSplitterCollapserButton* self, QEvent* e)
///
void k_splittercollapserbutton_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param param1 QMouseEvent*
///
void k_splittercollapserbutton_mouse_press_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param param1 QMouseEvent*
///
void k_splittercollapserbutton_qbase_mouse_press_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QMouseEvent* param1)
///
void k_splittercollapserbutton_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param param1 QMouseEvent*
///
void k_splittercollapserbutton_mouse_release_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param param1 QMouseEvent*
///
void k_splittercollapserbutton_qbase_mouse_release_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QMouseEvent* param1)
///
void k_splittercollapserbutton_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param param1 QActionEvent*
///
void k_splittercollapserbutton_action_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param param1 QActionEvent*
///
void k_splittercollapserbutton_qbase_action_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QActionEvent* param1)
///
void k_splittercollapserbutton_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param param1 QTimerEvent*
///
void k_splittercollapserbutton_timer_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param param1 QTimerEvent*
///
void k_splittercollapserbutton_qbase_timer_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QTimerEvent* param1)
///
void k_splittercollapserbutton_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param param1 QEvent*
///
void k_splittercollapserbutton_change_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param param1 QEvent*
///
void k_splittercollapserbutton_qbase_change_event(void* self, void* param1);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QEvent* param1)
///
void k_splittercollapserbutton_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#hitButton)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param pos QPoint*
///
bool k_splittercollapserbutton_hit_button(void* self, void* pos);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#hitButton)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param pos QPoint*
///
bool k_splittercollapserbutton_qbase_hit_button(void* self, void* pos);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#hitButton)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback bool func(KSplitterCollapserButton* self, QPoint* pos)
///
void k_splittercollapserbutton_on_hit_button(void* self, bool (*callback)(void*, void*));

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#checkStateSet)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_check_state_set(void* self);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#checkStateSet)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_qbase_check_state_set(void* self);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#checkStateSet)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func()
///
void k_splittercollapserbutton_on_check_state_set(void* self, void (*callback)());

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#nextCheckState)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_next_check_state(void* self);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#nextCheckState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_qbase_next_check_state(void* self);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#nextCheckState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func()
///
void k_splittercollapserbutton_on_next_check_state(void* self, void (*callback)());

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param option QStyleOptionToolButton*
///
void k_splittercollapserbutton_init_style_option(void* self, void* option);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param option QStyleOptionToolButton*
///
void k_splittercollapserbutton_qbase_init_style_option(void* self, void* option);

/// Inherited from QToolButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QStyleOptionToolButton* option)
///
void k_splittercollapserbutton_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param e QKeyEvent*
///
void k_splittercollapserbutton_key_press_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param e QKeyEvent*
///
void k_splittercollapserbutton_qbase_key_press_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QKeyEvent* e)
///
void k_splittercollapserbutton_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param e QKeyEvent*
///
void k_splittercollapserbutton_key_release_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param e QKeyEvent*
///
void k_splittercollapserbutton_qbase_key_release_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QKeyEvent* e)
///
void k_splittercollapserbutton_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param e QMouseEvent*
///
void k_splittercollapserbutton_mouse_move_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param e QMouseEvent*
///
void k_splittercollapserbutton_qbase_mouse_move_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QMouseEvent* e)
///
void k_splittercollapserbutton_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param e QFocusEvent*
///
void k_splittercollapserbutton_focus_in_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param e QFocusEvent*
///
void k_splittercollapserbutton_qbase_focus_in_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QFocusEvent* e)
///
void k_splittercollapserbutton_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param e QFocusEvent*
///
void k_splittercollapserbutton_focus_out_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param e QFocusEvent*
///
void k_splittercollapserbutton_qbase_focus_out_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QFocusEvent* e)
///
void k_splittercollapserbutton_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
///
int32_t k_splittercollapserbutton_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
///
int32_t k_splittercollapserbutton_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback int32_t func()
///
void k_splittercollapserbutton_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param visible bool
///
void k_splittercollapserbutton_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param visible bool
///
void k_splittercollapserbutton_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, bool visible)
///
void k_splittercollapserbutton_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param param1 int
///
int32_t k_splittercollapserbutton_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param param1 int
///
int32_t k_splittercollapserbutton_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback int32_t func(KSplitterCollapserButton* self, int param1)
///
void k_splittercollapserbutton_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback bool func()
///
void k_splittercollapserbutton_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
///
QPaintEngine* k_splittercollapserbutton_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
///
QPaintEngine* k_splittercollapserbutton_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback QPaintEngine* func()
///
void k_splittercollapserbutton_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param event QMouseEvent*
///
void k_splittercollapserbutton_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param event QMouseEvent*
///
void k_splittercollapserbutton_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QMouseEvent* event)
///
void k_splittercollapserbutton_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param event QWheelEvent*
///
void k_splittercollapserbutton_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param event QWheelEvent*
///
void k_splittercollapserbutton_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QWheelEvent* event)
///
void k_splittercollapserbutton_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param event QMoveEvent*
///
void k_splittercollapserbutton_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param event QMoveEvent*
///
void k_splittercollapserbutton_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QMoveEvent* event)
///
void k_splittercollapserbutton_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param event QResizeEvent*
///
void k_splittercollapserbutton_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param event QResizeEvent*
///
void k_splittercollapserbutton_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QResizeEvent* event)
///
void k_splittercollapserbutton_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param event QCloseEvent*
///
void k_splittercollapserbutton_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param event QCloseEvent*
///
void k_splittercollapserbutton_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QCloseEvent* event)
///
void k_splittercollapserbutton_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param event QContextMenuEvent*
///
void k_splittercollapserbutton_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param event QContextMenuEvent*
///
void k_splittercollapserbutton_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QContextMenuEvent* event)
///
void k_splittercollapserbutton_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param event QTabletEvent*
///
void k_splittercollapserbutton_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param event QTabletEvent*
///
void k_splittercollapserbutton_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QTabletEvent* event)
///
void k_splittercollapserbutton_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param event QDragEnterEvent*
///
void k_splittercollapserbutton_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param event QDragEnterEvent*
///
void k_splittercollapserbutton_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QDragEnterEvent* event)
///
void k_splittercollapserbutton_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param event QDragMoveEvent*
///
void k_splittercollapserbutton_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param event QDragMoveEvent*
///
void k_splittercollapserbutton_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QDragMoveEvent* event)
///
void k_splittercollapserbutton_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param event QDragLeaveEvent*
///
void k_splittercollapserbutton_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param event QDragLeaveEvent*
///
void k_splittercollapserbutton_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QDragLeaveEvent* event)
///
void k_splittercollapserbutton_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param event QDropEvent*
///
void k_splittercollapserbutton_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param event QDropEvent*
///
void k_splittercollapserbutton_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QDropEvent* event)
///
void k_splittercollapserbutton_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param event QHideEvent*
///
void k_splittercollapserbutton_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param event QHideEvent*
///
void k_splittercollapserbutton_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QHideEvent* event)
///
void k_splittercollapserbutton_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_splittercollapserbutton_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_splittercollapserbutton_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback bool func(KSplitterCollapserButton* self, const char* eventType, void* message, intptr_t* result)
///
void k_splittercollapserbutton_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_splittercollapserbutton_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_splittercollapserbutton_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback int32_t func(KSplitterCollapserButton* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_splittercollapserbutton_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param painter QPainter*
///
void k_splittercollapserbutton_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param painter QPainter*
///
void k_splittercollapserbutton_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QPainter* painter)
///
void k_splittercollapserbutton_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param offset QPoint*
///
QPaintDevice* k_splittercollapserbutton_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param offset QPoint*
///
QPaintDevice* k_splittercollapserbutton_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback QPaintDevice* func(KSplitterCollapserButton* self, QPoint* offset)
///
void k_splittercollapserbutton_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
///
QPainter* k_splittercollapserbutton_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
///
QPainter* k_splittercollapserbutton_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback QPainter* func()
///
void k_splittercollapserbutton_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param param1 QInputMethodEvent*
///
void k_splittercollapserbutton_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param param1 QInputMethodEvent*
///
void k_splittercollapserbutton_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QInputMethodEvent* param1)
///
void k_splittercollapserbutton_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_splittercollapserbutton_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_splittercollapserbutton_qbase_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback QVariant* func(KSplitterCollapserButton* self, enum Qt__InputMethodQuery param1)
///
void k_splittercollapserbutton_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param next bool
///
bool k_splittercollapserbutton_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param next bool
///
bool k_splittercollapserbutton_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback bool func(KSplitterCollapserButton* self, bool next)
///
void k_splittercollapserbutton_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param event QChildEvent*
///
void k_splittercollapserbutton_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param event QChildEvent*
///
void k_splittercollapserbutton_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QChildEvent* event)
///
void k_splittercollapserbutton_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param event QEvent*
///
void k_splittercollapserbutton_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param event QEvent*
///
void k_splittercollapserbutton_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QEvent* event)
///
void k_splittercollapserbutton_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param signal QMetaMethod*
///
void k_splittercollapserbutton_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param signal QMetaMethod*
///
void k_splittercollapserbutton_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QMetaMethod* signal)
///
void k_splittercollapserbutton_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param signal QMetaMethod*
///
void k_splittercollapserbutton_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param signal QMetaMethod*
///
void k_splittercollapserbutton_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, QMetaMethod* signal)
///
void k_splittercollapserbutton_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func()
///
void k_splittercollapserbutton_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func()
///
void k_splittercollapserbutton_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback void func()
///
void k_splittercollapserbutton_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback bool func()
///
void k_splittercollapserbutton_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
///
bool k_splittercollapserbutton_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback bool func()
///
void k_splittercollapserbutton_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
///
QObject* k_splittercollapserbutton_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
///
QObject* k_splittercollapserbutton_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback QObject* func()
///
void k_splittercollapserbutton_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
///
int32_t k_splittercollapserbutton_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
///
int32_t k_splittercollapserbutton_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback int32_t func()
///
void k_splittercollapserbutton_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param signal const char*
///
int32_t k_splittercollapserbutton_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param signal const char*
///
int32_t k_splittercollapserbutton_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback int32_t func(KSplitterCollapserButton* self, const char* signal)
///
void k_splittercollapserbutton_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param signal QMetaMethod*
///
bool k_splittercollapserbutton_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param signal QMetaMethod*
///
bool k_splittercollapserbutton_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback bool func(KSplitterCollapserButton* self, QMetaMethod* signal)
///
void k_splittercollapserbutton_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_splittercollapserbutton_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_splittercollapserbutton_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSplitterCollapserButton*
/// @param callback double func(KSplitterCollapserButton* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_splittercollapserbutton_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KSplitterCollapserButton*
/// @param callback void func(KSplitterCollapserButton* self, const char* objectName)
///
void k_splittercollapserbutton_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#dtor.KSplitterCollapserButton)
///
/// Delete this object from C++ memory.
///
/// @param self KSplitterCollapserButton*
///
void k_splittercollapserbutton_delete(void* self);

#endif
