#pragma once
#ifndef LIBQPUSHBUTTON_H
#define LIBQPUSHBUTTON_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html)

/// q_pushbutton_new constructs a new QPushButton object.
///
/// @param parent QWidget*
///
QPushButton* q_pushbutton_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html)

/// q_pushbutton_new2 constructs a new QPushButton object.
///
QPushButton* q_pushbutton_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html)

/// q_pushbutton_new3 constructs a new QPushButton object.
///
/// @param text const char*
///
QPushButton* q_pushbutton_new3(const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html)

/// q_pushbutton_new4 constructs a new QPushButton object.
///
/// @param icon QIcon*
/// @param text const char*
///
QPushButton* q_pushbutton_new4(const void* icon, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html)

/// q_pushbutton_new5 constructs a new QPushButton object.
///
/// @param text const char*
/// @param parent QWidget*
///
QPushButton* q_pushbutton_new5(const char* text, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html)

/// q_pushbutton_new6 constructs a new QPushButton object.
///
/// @param icon QIcon*
/// @param text const char*
/// @param parent QWidget*
///
QPushButton* q_pushbutton_new6(const void* icon, const char* text, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QPushButton*
///
const QMetaObject* q_pushbutton_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QPushButton*
/// @param callback const QMetaObject* func(const QPushButton* self)
///
void q_pushbutton_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QPushButton*
///
const QMetaObject* q_pushbutton_super_meta_object(const void* self);

/// @param self QPushButton*
/// @param param1 const char*
///
void* q_pushbutton_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QPushButton*
/// @param callback void* func(QPushButton* self, const char* param1)
///
void q_pushbutton_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QPushButton*
/// @param param1 const char*
///
void* q_pushbutton_super_metacast(void* self, const char* param1);

/// @param self QPushButton*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_pushbutton_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QPushButton*
/// @param callback int32_t func(QPushButton* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_pushbutton_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QPushButton*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_pushbutton_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_pushbutton_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#sizeHint)
///
/// @param self const QPushButton*
///
QSize* q_pushbutton_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QPushButton*
/// @param callback QSize* func(const QPushButton* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_pushbutton_on_size_hint(void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#sizeHint)
///
/// Base class method implementation
///
/// @param self const QPushButton*
///
QSize* q_pushbutton_super_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#minimumSizeHint)
///
/// @param self const QPushButton*
///
QSize* q_pushbutton_minimum_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#minimumSizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QPushButton*
/// @param callback QSize* func(const QPushButton* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_pushbutton_on_minimum_size_hint(void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#minimumSizeHint)
///
/// Base class method implementation
///
/// @param self const QPushButton*
///
QSize* q_pushbutton_super_minimum_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#autoDefault)
///
/// @param self const QPushButton*
///
bool q_pushbutton_auto_default(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#setAutoDefault)
///
/// @param self QPushButton*
/// @param autoDefault bool
///
void q_pushbutton_set_auto_default(void* self, bool autoDefault);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#isDefault)
///
/// @param self const QPushButton*
///
bool q_pushbutton_is_default(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#setDefault)
///
/// @param self QPushButton*
/// @param defaultVal bool
///
void q_pushbutton_set_default(void* self, bool defaultVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#setMenu)
///
/// @param self QPushButton*
/// @param menu QMenu*
///
void q_pushbutton_set_menu(void* self, void* menu);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#menu)
///
/// @param self const QPushButton*
///
QMenu* q_pushbutton_menu(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#setFlat)
///
/// @param self QPushButton*
/// @param flat bool
///
void q_pushbutton_set_flat(void* self, bool flat);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#isFlat)
///
/// @param self const QPushButton*
///
bool q_pushbutton_is_flat(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#showMenu)
///
/// @param self QPushButton*
///
void q_pushbutton_show_menu(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#event)
///
/// @param self QPushButton*
/// @param e QEvent*
///
bool q_pushbutton_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QPushButton*
/// @param callback bool func(QPushButton* self, QEvent* e)
///
void q_pushbutton_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#event)
///
/// Base class method implementation
///
/// @param self QPushButton*
/// @param e QEvent*
///
bool q_pushbutton_super_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#paintEvent)
///
/// @param self QPushButton*
/// @param param1 QPaintEvent*
///
void q_pushbutton_paint_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QPaintEvent* param1)
///
void q_pushbutton_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#paintEvent)
///
/// Base class method implementation
///
/// @param self QPushButton*
/// @param param1 QPaintEvent*
///
void q_pushbutton_super_paint_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#keyPressEvent)
///
/// @param self QPushButton*
/// @param param1 QKeyEvent*
///
void q_pushbutton_key_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QKeyEvent* param1)
///
void q_pushbutton_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self QPushButton*
/// @param param1 QKeyEvent*
///
void q_pushbutton_super_key_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#focusInEvent)
///
/// @param self QPushButton*
/// @param param1 QFocusEvent*
///
void q_pushbutton_focus_in_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QFocusEvent* param1)
///
void q_pushbutton_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#focusInEvent)
///
/// Base class method implementation
///
/// @param self QPushButton*
/// @param param1 QFocusEvent*
///
void q_pushbutton_super_focus_in_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#focusOutEvent)
///
/// @param self QPushButton*
/// @param param1 QFocusEvent*
///
void q_pushbutton_focus_out_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QFocusEvent* param1)
///
void q_pushbutton_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#focusOutEvent)
///
/// Base class method implementation
///
/// @param self QPushButton*
/// @param param1 QFocusEvent*
///
void q_pushbutton_super_focus_out_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#mouseMoveEvent)
///
/// @param self QPushButton*
/// @param param1 QMouseEvent*
///
void q_pushbutton_mouse_move_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QMouseEvent* param1)
///
void q_pushbutton_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self QPushButton*
/// @param param1 QMouseEvent*
///
void q_pushbutton_super_mouse_move_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#initStyleOption)
///
/// @param self const QPushButton*
/// @param option QStyleOptionButton*
///
void q_pushbutton_init_style_option(const void* self, void* option);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#initStyleOption)
///
/// Allows for overriding the related default method
///
/// @param self QPushButton*
/// @param callback void func(const QPushButton* self, QStyleOptionButton* option)
///
void q_pushbutton_on_init_style_option(void* self, void (*callback)(const void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#initStyleOption)
///
/// Base class method implementation
///
/// @param self const QPushButton*
/// @param option QStyleOptionButton*
///
void q_pushbutton_super_init_style_option(const void* self, void* option);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#hitButton)
///
/// @param self const QPushButton*
/// @param pos QPoint*
///
bool q_pushbutton_hit_button(const void* self, const void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#hitButton)
///
/// Allows for overriding the related default method
///
/// @param self QPushButton*
/// @param callback bool func(const QPushButton* self, QPoint* pos)
///
void q_pushbutton_on_hit_button(void* self, bool (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#hitButton)
///
/// Base class method implementation
///
/// @param self const QPushButton*
/// @param pos QPoint*
///
bool q_pushbutton_super_hit_button(const void* self, const void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_pushbutton_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_pushbutton_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setText)
///
/// @param self QPushButton*
/// @param text const char*
///
void q_pushbutton_set_text(void* self, const char* text);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPushButton*
///
const char* q_pushbutton_text(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setIcon)
///
/// @param self QPushButton*
/// @param icon QIcon*
///
void q_pushbutton_set_icon(void* self, const void* icon);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#icon)
///
/// @param self const QPushButton*
///
QIcon* q_pushbutton_icon(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#iconSize)
///
/// @param self const QPushButton*
///
QSize* q_pushbutton_icon_size(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setShortcut)
///
/// @param self QPushButton*
/// @param key QKeySequence*
///
void q_pushbutton_set_shortcut(void* self, const void* key);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#shortcut)
///
/// @param self const QPushButton*
///
QKeySequence* q_pushbutton_shortcut(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setCheckable)
///
/// @param self QPushButton*
/// @param checkable bool
///
void q_pushbutton_set_checkable(void* self, bool checkable);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#isCheckable)
///
/// @param self const QPushButton*
///
bool q_pushbutton_is_checkable(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#isChecked)
///
/// @param self const QPushButton*
///
bool q_pushbutton_is_checked(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setDown)
///
/// @param self QPushButton*
/// @param down bool
///
void q_pushbutton_set_down(void* self, bool down);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#isDown)
///
/// @param self const QPushButton*
///
bool q_pushbutton_is_down(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeat)
///
/// @param self QPushButton*
/// @param autoRepeat bool
///
void q_pushbutton_set_auto_repeat(void* self, bool autoRepeat);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeat)
///
/// @param self const QPushButton*
///
bool q_pushbutton_auto_repeat(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeatDelay)
///
/// @param self QPushButton*
/// @param autoRepeatDelay int
///
void q_pushbutton_set_auto_repeat_delay(void* self, int autoRepeatDelay);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeatDelay)
///
/// @param self const QPushButton*
///
int32_t q_pushbutton_auto_repeat_delay(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeatInterval)
///
/// @param self QPushButton*
/// @param autoRepeatInterval int
///
void q_pushbutton_set_auto_repeat_interval(void* self, int autoRepeatInterval);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeatInterval)
///
/// @param self const QPushButton*
///
int32_t q_pushbutton_auto_repeat_interval(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoExclusive)
///
/// @param self QPushButton*
/// @param autoExclusive bool
///
void q_pushbutton_set_auto_exclusive(void* self, bool autoExclusive);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#autoExclusive)
///
/// @param self const QPushButton*
///
bool q_pushbutton_auto_exclusive(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#group)
///
/// @param self const QPushButton*
///
QButtonGroup* q_pushbutton_group(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setIconSize)
///
/// @param self QPushButton*
/// @param size QSize*
///
void q_pushbutton_set_icon_size(void* self, const void* size);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#animateClick)
///
/// @param self QPushButton*
///
void q_pushbutton_animate_click(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#click)
///
/// @param self QPushButton*
///
void q_pushbutton_click(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#toggle)
///
/// @param self QPushButton*
///
void q_pushbutton_toggle(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setChecked)
///
/// @param self QPushButton*
/// @param checked bool
///
void q_pushbutton_set_checked(void* self, bool checked);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#pressed)
///
/// @param self QPushButton*
///
void q_pushbutton_pressed(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#pressed)
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self)
///
void q_pushbutton_on_pressed(void* self, void (*callback)(void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#released)
///
/// @param self QPushButton*
///
void q_pushbutton_released(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#released)
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self)
///
void q_pushbutton_on_released(void* self, void (*callback)(void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// @param self QPushButton*
///
void q_pushbutton_clicked(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self)
///
void q_pushbutton_on_clicked(void* self, void (*callback)(void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#toggled)
///
/// @param self QPushButton*
/// @param checked bool
///
void q_pushbutton_toggled(void* self, bool checked);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#toggled)
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, bool checked)
///
void q_pushbutton_on_toggled(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// @param self QPushButton*
/// @param checked bool
///
void q_pushbutton_clicked1(void* self, bool checked);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, bool checked)
///
void q_pushbutton_on_clicked1(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// Upcasts to a QPaintDevice object
///
/// @param self const QPushButton*
///
QPaintDevice* q_pushbutton_as_q_paint_device(const void* self);

/// Inherited from QWidget
///
/// Downcasts to a QPushButton object
///
/// @param _qpaintdevice QPaintDevice*
///
QPushButton* q_pushbutton_from_q_paint_device(const void* _qpaintdevice);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self const QPushButton*
///
uintptr_t q_pushbutton_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QPushButton*
///
void q_pushbutton_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self const QPushButton*
///
uintptr_t q_pushbutton_internal_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self const QPushButton*
///
uintptr_t q_pushbutton_effective_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self const QPushButton*
///
QStyle* q_pushbutton_style(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QPushButton*
/// @param style QStyle*
///
void q_pushbutton_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self const QPushButton*
///
bool q_pushbutton_is_top_level(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self const QPushButton*
///
bool q_pushbutton_is_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self const QPushButton*
///
bool q_pushbutton_is_modal(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self const QPushButton*
///
/// @return enum Qt__WindowModality
///
int32_t q_pushbutton_window_modality(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QPushButton*
/// @param windowModality enum Qt__WindowModality
///
void q_pushbutton_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self const QPushButton*
///
bool q_pushbutton_is_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self const QPushButton*
/// @param param1 QWidget*
///
bool q_pushbutton_is_enabled_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QPushButton*
/// @param enabled bool
///
void q_pushbutton_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QPushButton*
/// @param disabled bool
///
void q_pushbutton_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QPushButton*
/// @param windowModified bool
///
void q_pushbutton_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self const QPushButton*
///
QRect* q_pushbutton_frame_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self const QPushButton*
///
const QRect* q_pushbutton_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self const QPushButton*
///
QRect* q_pushbutton_normal_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self const QPushButton*
///
int32_t q_pushbutton_x(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self const QPushButton*
///
int32_t q_pushbutton_y(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self const QPushButton*
///
QPoint* q_pushbutton_pos(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self const QPushButton*
///
QSize* q_pushbutton_frame_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self const QPushButton*
///
QSize* q_pushbutton_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self const QPushButton*
///
int32_t q_pushbutton_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self const QPushButton*
///
int32_t q_pushbutton_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self const QPushButton*
///
QRect* q_pushbutton_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self const QPushButton*
///
QRect* q_pushbutton_children_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self const QPushButton*
///
QRegion* q_pushbutton_children_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self const QPushButton*
///
QSize* q_pushbutton_minimum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self const QPushButton*
///
QSize* q_pushbutton_maximum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self const QPushButton*
///
int32_t q_pushbutton_minimum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self const QPushButton*
///
int32_t q_pushbutton_minimum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self const QPushButton*
///
int32_t q_pushbutton_maximum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self const QPushButton*
///
int32_t q_pushbutton_maximum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QPushButton*
/// @param minimumSize QSize*
///
void q_pushbutton_set_minimum_size(void* self, const void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QPushButton*
/// @param minw int
/// @param minh int
///
void q_pushbutton_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QPushButton*
/// @param maximumSize QSize*
///
void q_pushbutton_set_maximum_size(void* self, const void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QPushButton*
/// @param maxw int
/// @param maxh int
///
void q_pushbutton_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QPushButton*
/// @param minw int
///
void q_pushbutton_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QPushButton*
/// @param minh int
///
void q_pushbutton_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QPushButton*
/// @param maxw int
///
void q_pushbutton_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QPushButton*
/// @param maxh int
///
void q_pushbutton_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self const QPushButton*
///
QSize* q_pushbutton_size_increment(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QPushButton*
/// @param sizeIncrement QSize*
///
void q_pushbutton_set_size_increment(void* self, const void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QPushButton*
/// @param w int
/// @param h int
///
void q_pushbutton_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self const QPushButton*
///
QSize* q_pushbutton_base_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QPushButton*
/// @param baseSize QSize*
///
void q_pushbutton_set_base_size(void* self, const void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QPushButton*
/// @param basew int
/// @param baseh int
///
void q_pushbutton_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QPushButton*
/// @param fixedSize QSize*
///
void q_pushbutton_set_fixed_size(void* self, const void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QPushButton*
/// @param w int
/// @param h int
///
void q_pushbutton_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QPushButton*
/// @param w int
///
void q_pushbutton_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QPushButton*
/// @param h int
///
void q_pushbutton_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const QPushButton*
/// @param param1 QPointF*
///
QPointF* q_pushbutton_map_to_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const QPushButton*
/// @param param1 QPoint*
///
QPoint* q_pushbutton_map_to_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const QPushButton*
/// @param param1 QPointF*
///
QPointF* q_pushbutton_map_from_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const QPushButton*
/// @param param1 QPoint*
///
QPoint* q_pushbutton_map_from_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const QPushButton*
/// @param param1 QPointF*
///
QPointF* q_pushbutton_map_to_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const QPushButton*
/// @param param1 QPoint*
///
QPoint* q_pushbutton_map_to_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const QPushButton*
/// @param param1 QPointF*
///
QPointF* q_pushbutton_map_from_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const QPushButton*
/// @param param1 QPoint*
///
QPoint* q_pushbutton_map_from_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const QPushButton*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_pushbutton_map_to(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const QPushButton*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_pushbutton_map_to2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const QPushButton*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_pushbutton_map_from(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const QPushButton*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_pushbutton_map_from2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self const QPushButton*
///
QWidget* q_pushbutton_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self const QPushButton*
///
QWidget* q_pushbutton_native_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self const QPushButton*
///
QWidget* q_pushbutton_top_level_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self const QPushButton*
///
const QPalette* q_pushbutton_palette(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QPushButton*
/// @param palette QPalette*
///
void q_pushbutton_set_palette(void* self, const void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QPushButton*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_pushbutton_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self const QPushButton*
///
/// @return enum QPalette__ColorRole
///
int32_t q_pushbutton_background_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QPushButton*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_pushbutton_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self const QPushButton*
///
/// @return enum QPalette__ColorRole
///
int32_t q_pushbutton_foreground_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self const QPushButton*
///
const QFont* q_pushbutton_font(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QPushButton*
/// @param font QFont*
///
void q_pushbutton_set_font(void* self, const void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self const QPushButton*
///
QFontMetrics* q_pushbutton_font_metrics(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self const QPushButton*
///
QFontInfo* q_pushbutton_font_info(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self const QPushButton*
///
QCursor* q_pushbutton_cursor(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QPushButton*
/// @param cursor QCursor*
///
void q_pushbutton_set_cursor(void* self, const void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QPushButton*
///
void q_pushbutton_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QPushButton*
/// @param enable bool
///
void q_pushbutton_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self const QPushButton*
///
bool q_pushbutton_has_mouse_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self const QPushButton*
///
bool q_pushbutton_under_mouse(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QPushButton*
/// @param enable bool
///
void q_pushbutton_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self const QPushButton*
///
bool q_pushbutton_has_tablet_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QPushButton*
/// @param mask QBitmap*
///
void q_pushbutton_set_mask(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QPushButton*
/// @param mask QRegion*
///
void q_pushbutton_set_mask2(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self const QPushButton*
///
QRegion* q_pushbutton_mask(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QPushButton*
///
void q_pushbutton_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPushButton*
/// @param target QPaintDevice*
///
void q_pushbutton_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPushButton*
/// @param painter QPainter*
///
void q_pushbutton_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QPushButton*
///
QPixmap* q_pushbutton_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self const QPushButton*
///
QGraphicsEffect* q_pushbutton_graphics_effect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QPushButton*
/// @param effect QGraphicsEffect*
///
void q_pushbutton_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QPushButton*
/// @param type enum Qt__GestureType
///
void q_pushbutton_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QPushButton*
/// @param type enum Qt__GestureType
///
void q_pushbutton_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QPushButton*
/// @param windowTitle const char*
///
void q_pushbutton_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QPushButton*
/// @param styleSheet const char*
///
void q_pushbutton_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPushButton*
///
const char* q_pushbutton_style_sheet(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPushButton*
///
const char* q_pushbutton_window_title(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QPushButton*
/// @param icon QIcon*
///
void q_pushbutton_set_window_icon(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self const QPushButton*
///
QIcon* q_pushbutton_window_icon(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QPushButton*
/// @param windowIconText const char*
///
void q_pushbutton_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPushButton*
///
const char* q_pushbutton_window_icon_text(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QPushButton*
/// @param windowRole const char*
///
void q_pushbutton_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPushButton*
///
const char* q_pushbutton_window_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QPushButton*
/// @param filePath const char*
///
void q_pushbutton_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPushButton*
///
const char* q_pushbutton_window_file_path(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QPushButton*
/// @param level double
///
void q_pushbutton_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self const QPushButton*
///
double q_pushbutton_window_opacity(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self const QPushButton*
///
bool q_pushbutton_is_window_modified(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QPushButton*
/// @param toolTip const char*
///
void q_pushbutton_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPushButton*
///
const char* q_pushbutton_tool_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QPushButton*
/// @param msec int
///
void q_pushbutton_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self const QPushButton*
///
int32_t q_pushbutton_tool_tip_duration(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QPushButton*
/// @param statusTip const char*
///
void q_pushbutton_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPushButton*
///
const char* q_pushbutton_status_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QPushButton*
/// @param whatsThis const char*
///
void q_pushbutton_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPushButton*
///
const char* q_pushbutton_whats_this(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPushButton*
///
const char* q_pushbutton_accessible_name(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QPushButton*
/// @param name const char*
///
void q_pushbutton_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPushButton*
///
const char* q_pushbutton_accessible_description(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QPushButton*
/// @param description const char*
///
void q_pushbutton_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QPushButton*
/// @param direction enum Qt__LayoutDirection
///
void q_pushbutton_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self const QPushButton*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_pushbutton_layout_direction(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QPushButton*
///
void q_pushbutton_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QPushButton*
/// @param locale QLocale*
///
void q_pushbutton_set_locale(void* self, const void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self const QPushButton*
///
QLocale* q_pushbutton_locale(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QPushButton*
///
void q_pushbutton_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self const QPushButton*
///
bool q_pushbutton_is_right_to_left(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self const QPushButton*
///
bool q_pushbutton_is_left_to_right(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QPushButton*
///
void q_pushbutton_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self const QPushButton*
///
bool q_pushbutton_is_active_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QPushButton*
///
void q_pushbutton_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QPushButton*
///
void q_pushbutton_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QPushButton*
/// @param reason enum Qt__FocusReason
///
void q_pushbutton_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self const QPushButton*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_pushbutton_focus_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QPushButton*
/// @param policy enum Qt__FocusPolicy
///
void q_pushbutton_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self const QPushButton*
///
bool q_pushbutton_has_focus(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_pushbutton_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QPushButton*
/// @param focusProxy QWidget*
///
void q_pushbutton_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self const QPushButton*
///
QWidget* q_pushbutton_focus_proxy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self const QPushButton*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_pushbutton_context_menu_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QPushButton*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_pushbutton_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QPushButton*
///
void q_pushbutton_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QPushButton*
/// @param param1 QCursor*
///
void q_pushbutton_grab_mouse2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QPushButton*
///
void q_pushbutton_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QPushButton*
///
void q_pushbutton_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QPushButton*
///
void q_pushbutton_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QPushButton*
/// @param key QKeySequence*
///
int32_t q_pushbutton_grab_shortcut(void* self, const void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QPushButton*
/// @param id int
///
void q_pushbutton_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QPushButton*
/// @param id int
///
void q_pushbutton_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QPushButton*
/// @param id int
///
void q_pushbutton_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_pushbutton_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_pushbutton_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self const QPushButton*
///
bool q_pushbutton_updates_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QPushButton*
/// @param enable bool
///
void q_pushbutton_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self const QPushButton*
///
QGraphicsProxyWidget* q_pushbutton_graphics_proxy_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QPushButton*
///
void q_pushbutton_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QPushButton*
///
void q_pushbutton_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QPushButton*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_pushbutton_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QPushButton*
/// @param param1 QRect*
///
void q_pushbutton_update3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QPushButton*
/// @param param1 QRegion*
///
void q_pushbutton_update4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QPushButton*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_pushbutton_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QPushButton*
/// @param param1 QRect*
///
void q_pushbutton_repaint3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QPushButton*
/// @param param1 QRegion*
///
void q_pushbutton_repaint4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QPushButton*
/// @param hidden bool
///
void q_pushbutton_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QPushButton*
///
void q_pushbutton_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QPushButton*
///
void q_pushbutton_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QPushButton*
///
void q_pushbutton_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QPushButton*
///
void q_pushbutton_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QPushButton*
///
void q_pushbutton_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QPushButton*
///
void q_pushbutton_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QPushButton*
///
bool q_pushbutton_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QPushButton*
///
void q_pushbutton_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QPushButton*
///
void q_pushbutton_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QPushButton*
/// @param param1 QWidget*
///
void q_pushbutton_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QPushButton*
/// @param x int
/// @param y int
///
void q_pushbutton_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QPushButton*
/// @param param1 QPoint*
///
void q_pushbutton_move2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QPushButton*
/// @param w int
/// @param h int
///
void q_pushbutton_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QPushButton*
/// @param param1 QSize*
///
void q_pushbutton_resize2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QPushButton*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_pushbutton_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QPushButton*
/// @param geometry QRect*
///
void q_pushbutton_set_geometry2(void* self, const void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QPushButton*
///
char* q_pushbutton_save_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QPushButton*
/// @param geometry char*
///
bool q_pushbutton_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QPushButton*
///
void q_pushbutton_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self const QPushButton*
///
bool q_pushbutton_is_visible(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self const QPushButton*
/// @param param1 QWidget*
///
bool q_pushbutton_is_visible_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self const QPushButton*
///
bool q_pushbutton_is_hidden(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self const QPushButton*
///
bool q_pushbutton_is_minimized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self const QPushButton*
///
bool q_pushbutton_is_maximized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self const QPushButton*
///
bool q_pushbutton_is_full_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self const QPushButton*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_pushbutton_window_state(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QPushButton*
/// @param state flag of enum Qt__WindowState
///
void q_pushbutton_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QPushButton*
/// @param state flag of enum Qt__WindowState
///
void q_pushbutton_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self const QPushButton*
///
QSizePolicy* q_pushbutton_size_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QPushButton*
/// @param sizePolicy QSizePolicy*
///
void q_pushbutton_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QPushButton*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_pushbutton_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self const QPushButton*
///
QRegion* q_pushbutton_visible_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QPushButton*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_pushbutton_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QPushButton*
/// @param margins QMargins*
///
void q_pushbutton_set_contents_margins2(void* self, const void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self const QPushButton*
///
QMargins* q_pushbutton_contents_margins(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self const QPushButton*
///
QRect* q_pushbutton_contents_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self const QPushButton*
///
QLayout* q_pushbutton_layout(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QPushButton*
/// @param layout QLayout*
///
void q_pushbutton_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QPushButton*
///
void q_pushbutton_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QPushButton*
/// @param parent QWidget*
///
void q_pushbutton_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QPushButton*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_pushbutton_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QPushButton*
/// @param dx int
/// @param dy int
///
void q_pushbutton_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QPushButton*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_pushbutton_scroll2(void* self, int dx, int dy, const void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self const QPushButton*
///
QWidget* q_pushbutton_focus_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self const QPushButton*
///
QWidget* q_pushbutton_next_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self const QPushButton*
///
QWidget* q_pushbutton_previous_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self const QPushButton*
///
bool q_pushbutton_accept_drops(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QPushButton*
/// @param on bool
///
void q_pushbutton_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QPushButton*
/// @param action QAction*
///
void q_pushbutton_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QPushButton*
/// @param actions libqt_list of QAction*
///
void q_pushbutton_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QPushButton*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_pushbutton_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QPushButton*
/// @param before QAction*
/// @param action QAction*
///
void q_pushbutton_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QPushButton*
/// @param action QAction*
///
void q_pushbutton_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self const QPushButton*
///
/// @return libqt_list of QAction*
///
libqt_list q_pushbutton_actions(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QPushButton*
/// @param text const char*
///
QAction* q_pushbutton_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QPushButton*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_pushbutton_add_action3(void* self, const void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QPushButton*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_pushbutton_add_action4(void* self, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QPushButton*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_pushbutton_add_action5(void* self, const void* icon, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self const QPushButton*
///
QWidget* q_pushbutton_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QPushButton*
/// @param type flag of enum Qt__WindowType
///
void q_pushbutton_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self const QPushButton*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_pushbutton_window_flags(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QPushButton*
/// @param param1 enum Qt__WindowType
///
void q_pushbutton_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QPushButton*
/// @param type flag of enum Qt__WindowType
///
void q_pushbutton_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self const QPushButton*
///
/// @return enum Qt__WindowType
///
int32_t q_pushbutton_window_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uintptr_t
///
QWidget* q_pushbutton_find(uintptr_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QPushButton*
/// @param x int
/// @param y int
///
QWidget* q_pushbutton_child_at(const void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QPushButton*
/// @param p QPoint*
///
QWidget* q_pushbutton_child_at2(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QPushButton*
/// @param p QPointF*
///
QWidget* q_pushbutton_child_at3(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QPushButton*
/// @param param1 enum Qt__WidgetAttribute
///
void q_pushbutton_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self const QPushButton*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_pushbutton_test_attribute(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self const QPushButton*
///
void q_pushbutton_ensure_polished(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self const QPushButton*
/// @param child QWidget*
///
bool q_pushbutton_is_ancestor_of(const void* self, const void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self const QPushButton*
///
bool q_pushbutton_auto_fill_background(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QPushButton*
/// @param enabled bool
///
void q_pushbutton_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self const QPushButton*
///
QBackingStore* q_pushbutton_backing_store(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self const QPushButton*
///
QWindow* q_pushbutton_window_handle(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self const QPushButton*
///
QScreen* q_pushbutton_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QPushButton*
/// @param screen QScreen*
///
void q_pushbutton_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_pushbutton_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QPushButton*
/// @param title const char*
///
void q_pushbutton_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, const char* title)
///
void q_pushbutton_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QPushButton*
/// @param icon QIcon*
///
void q_pushbutton_window_icon_changed(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QIcon* icon)
///
void q_pushbutton_on_window_icon_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QPushButton*
/// @param iconText const char*
///
void q_pushbutton_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, const char* iconText)
///
void q_pushbutton_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QPushButton*
/// @param pos QPoint*
///
void q_pushbutton_custom_context_menu_requested(void* self, const void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QPoint* pos)
///
void q_pushbutton_on_custom_context_menu_requested(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self const QPushButton*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_pushbutton_input_method_hints(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QPushButton*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_pushbutton_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPushButton*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_pushbutton_render22(void* self, void* target, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPushButton*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_pushbutton_render3(void* self, void* target, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPushButton*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_pushbutton_render4(void* self, void* target, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPushButton*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_pushbutton_render23(void* self, void* painter, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPushButton*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_pushbutton_render32(void* self, void* painter, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPushButton*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_pushbutton_render42(void* self, void* painter, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QPushButton*
/// @param rectangle QRect*
///
QPixmap* q_pushbutton_grab1(void* self, const void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QPushButton*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_pushbutton_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QPushButton*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_pushbutton_grab_shortcut2(void* self, const void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QPushButton*
/// @param id int
/// @param enable bool
///
void q_pushbutton_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QPushButton*
/// @param id int
/// @param enable bool
///
void q_pushbutton_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QPushButton*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_pushbutton_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QPushButton*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_pushbutton_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_pushbutton_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_pushbutton_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPushButton*
///
const char* q_pushbutton_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPushButton*
/// @param name const char*
///
void q_pushbutton_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QPushButton*
///
bool q_pushbutton_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QPushButton*
///
bool q_pushbutton_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QPushButton*
///
bool q_pushbutton_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QPushButton*
///
bool q_pushbutton_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPushButton*
/// @param b bool
///
bool q_pushbutton_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QPushButton*
///
QThread* q_pushbutton_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPushButton*
/// @param thread QThread*
///
bool q_pushbutton_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPushButton*
/// @param interval int
///
int32_t q_pushbutton_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPushButton*
/// @param time int64_t of nanoseconds
///
int32_t q_pushbutton_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPushButton*
/// @param id int
///
void q_pushbutton_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPushButton*
/// @param id enum Qt__TimerId
///
void q_pushbutton_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QPushButton*
///
/// @return libqt_list of QObject*
///
libqt_list q_pushbutton_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPushButton*
/// @param filterObj QObject*
///
void q_pushbutton_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPushButton*
/// @param obj QObject*
///
void q_pushbutton_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_pushbutton_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_pushbutton_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QPushButton*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_pushbutton_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_pushbutton_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_pushbutton_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPushButton*
///
bool q_pushbutton_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPushButton*
/// @param receiver QObject*
///
bool q_pushbutton_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_pushbutton_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QPushButton*
///
void q_pushbutton_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QPushButton*
///
void q_pushbutton_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPushButton*
/// @param name const char*
/// @param value QVariant*
///
bool q_pushbutton_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QPushButton*
/// @param name const char*
///
QVariant* q_pushbutton_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QPushButton*
///
const char** q_pushbutton_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPushButton*
///
QBindingStorage* q_pushbutton_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QPushButton*
///
const QBindingStorage* q_pushbutton_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPushButton*
///
void q_pushbutton_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self)
///
void q_pushbutton_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QPushButton*
///
QObject* q_pushbutton_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QPushButton*
/// @param classname const char*
///
bool q_pushbutton_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPushButton*
///
void q_pushbutton_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPushButton*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_pushbutton_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPushButton*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_pushbutton_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_pushbutton_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_pushbutton_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QPushButton*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_pushbutton_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPushButton*
/// @param signal const char*
///
bool q_pushbutton_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPushButton*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_pushbutton_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPushButton*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_pushbutton_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPushButton*
/// @param receiver QObject*
/// @param member const char*
///
bool q_pushbutton_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPushButton*
/// @param param1 QObject*
///
void q_pushbutton_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QObject* param1)
///
void q_pushbutton_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self const QPushButton*
///
bool q_pushbutton_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const QPushButton*
///
int32_t q_pushbutton_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const QPushButton*
///
int32_t q_pushbutton_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const QPushButton*
///
int32_t q_pushbutton_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const QPushButton*
///
int32_t q_pushbutton_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const QPushButton*
///
int32_t q_pushbutton_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const QPushButton*
///
int32_t q_pushbutton_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self const QPushButton*
///
double q_pushbutton_device_pixel_ratio(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const QPushButton*
///
double q_pushbutton_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const QPushButton*
///
int32_t q_pushbutton_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self const QPushButton*
///
int32_t q_pushbutton_depth(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_pushbutton_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_pushbutton_encode_metric_f(int32_t metric, double value);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#checkStateSet)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
///
void q_pushbutton_check_state_set(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#checkStateSet)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
///
void q_pushbutton_super_check_state_set(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#checkStateSet)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self)
///
void q_pushbutton_on_check_state_set(void* self, void (*callback)(void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#nextCheckState)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
///
void q_pushbutton_next_check_state(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#nextCheckState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
///
void q_pushbutton_super_next_check_state(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#nextCheckState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self)
///
void q_pushbutton_on_next_check_state(void* self, void (*callback)(void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param e QKeyEvent*
///
void q_pushbutton_key_release_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param e QKeyEvent*
///
void q_pushbutton_super_key_release_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QKeyEvent* e)
///
void q_pushbutton_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param e QMouseEvent*
///
void q_pushbutton_mouse_press_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param e QMouseEvent*
///
void q_pushbutton_super_mouse_press_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QMouseEvent* e)
///
void q_pushbutton_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param e QMouseEvent*
///
void q_pushbutton_mouse_release_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param e QMouseEvent*
///
void q_pushbutton_super_mouse_release_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QMouseEvent* e)
///
void q_pushbutton_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param e QEvent*
///
void q_pushbutton_change_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param e QEvent*
///
void q_pushbutton_super_change_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QEvent* e)
///
void q_pushbutton_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param e QTimerEvent*
///
void q_pushbutton_timer_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param e QTimerEvent*
///
void q_pushbutton_super_timer_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QTimerEvent* e)
///
void q_pushbutton_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPushButton*
///
int32_t q_pushbutton_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPushButton*
///
int32_t q_pushbutton_super_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback int32_t func(QPushButton* self)
///
void q_pushbutton_on_dev_type(void* self, int32_t (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param visible bool
///
void q_pushbutton_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param visible bool
///
void q_pushbutton_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, bool visible)
///
void q_pushbutton_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPushButton*
/// @param param1 int
///
int32_t q_pushbutton_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPushButton*
/// @param param1 int
///
int32_t q_pushbutton_super_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback int32_t func(QPushButton* self, int param1)
///
void q_pushbutton_on_height_for_width(void* self, int32_t (*callback)(const void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPushButton*
///
bool q_pushbutton_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPushButton*
///
bool q_pushbutton_super_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback bool func(QPushButton* self)
///
void q_pushbutton_on_has_height_for_width(void* self, bool (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPushButton*
///
QPaintEngine* q_pushbutton_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPushButton*
///
QPaintEngine* q_pushbutton_super_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback QPaintEngine* func(QPushButton* self)
///
void q_pushbutton_on_paint_engine(void* self, QPaintEngine* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QMouseEvent*
///
void q_pushbutton_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QMouseEvent*
///
void q_pushbutton_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QMouseEvent* event)
///
void q_pushbutton_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QWheelEvent*
///
void q_pushbutton_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QWheelEvent*
///
void q_pushbutton_super_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QWheelEvent* event)
///
void q_pushbutton_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QEnterEvent*
///
void q_pushbutton_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QEnterEvent*
///
void q_pushbutton_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QEnterEvent* event)
///
void q_pushbutton_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QEvent*
///
void q_pushbutton_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QEvent*
///
void q_pushbutton_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QEvent* event)
///
void q_pushbutton_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QMoveEvent*
///
void q_pushbutton_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QMoveEvent*
///
void q_pushbutton_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QMoveEvent* event)
///
void q_pushbutton_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QResizeEvent*
///
void q_pushbutton_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QResizeEvent*
///
void q_pushbutton_super_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QResizeEvent* event)
///
void q_pushbutton_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QCloseEvent*
///
void q_pushbutton_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QCloseEvent*
///
void q_pushbutton_super_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QCloseEvent* event)
///
void q_pushbutton_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QContextMenuEvent*
///
void q_pushbutton_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QContextMenuEvent*
///
void q_pushbutton_super_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QContextMenuEvent* event)
///
void q_pushbutton_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QTabletEvent*
///
void q_pushbutton_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QTabletEvent*
///
void q_pushbutton_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QTabletEvent* event)
///
void q_pushbutton_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QActionEvent*
///
void q_pushbutton_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QActionEvent*
///
void q_pushbutton_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QActionEvent* event)
///
void q_pushbutton_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QDragEnterEvent*
///
void q_pushbutton_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QDragEnterEvent*
///
void q_pushbutton_super_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QDragEnterEvent* event)
///
void q_pushbutton_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QDragMoveEvent*
///
void q_pushbutton_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QDragMoveEvent*
///
void q_pushbutton_super_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QDragMoveEvent* event)
///
void q_pushbutton_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QDragLeaveEvent*
///
void q_pushbutton_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QDragLeaveEvent*
///
void q_pushbutton_super_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QDragLeaveEvent* event)
///
void q_pushbutton_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QDropEvent*
///
void q_pushbutton_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QDropEvent*
///
void q_pushbutton_super_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QDropEvent* event)
///
void q_pushbutton_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QShowEvent*
///
void q_pushbutton_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QShowEvent*
///
void q_pushbutton_super_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QShowEvent* event)
///
void q_pushbutton_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QHideEvent*
///
void q_pushbutton_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QHideEvent*
///
void q_pushbutton_super_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QHideEvent* event)
///
void q_pushbutton_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_pushbutton_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_pushbutton_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback bool func(QPushButton* self, libqt_string eventType, void* message, intptr_t* result)
///
void q_pushbutton_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPushButton*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_pushbutton_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPushButton*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_pushbutton_super_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback int32_t func(QPushButton* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_pushbutton_on_metric(void* self, int32_t (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPushButton*
/// @param painter QPainter*
///
void q_pushbutton_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPushButton*
/// @param painter QPainter*
///
void q_pushbutton_super_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QPainter* painter)
///
void q_pushbutton_on_init_painter(void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPushButton*
/// @param offset QPoint*
///
QPaintDevice* q_pushbutton_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPushButton*
/// @param offset QPoint*
///
QPaintDevice* q_pushbutton_super_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback QPaintDevice* func(QPushButton* self, QPoint* offset)
///
void q_pushbutton_on_redirected(void* self, QPaintDevice* (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPushButton*
///
QPainter* q_pushbutton_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPushButton*
///
QPainter* q_pushbutton_super_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback QPainter* func(QPushButton* self)
///
void q_pushbutton_on_shared_painter(void* self, QPainter* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param param1 QInputMethodEvent*
///
void q_pushbutton_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param param1 QInputMethodEvent*
///
void q_pushbutton_super_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QInputMethodEvent* param1)
///
void q_pushbutton_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPushButton*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_pushbutton_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPushButton*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_pushbutton_super_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback QVariant* func(QPushButton* self, enum Qt__InputMethodQuery param1)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_pushbutton_on_input_method_query(void* self, QVariant* (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param next bool
///
bool q_pushbutton_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param next bool
///
bool q_pushbutton_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback bool func(QPushButton* self, bool next)
///
void q_pushbutton_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_pushbutton_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_pushbutton_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback bool func(QPushButton* self, QObject* watched, QEvent* event)
///
void q_pushbutton_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QChildEvent*
///
void q_pushbutton_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QChildEvent*
///
void q_pushbutton_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QChildEvent* event)
///
void q_pushbutton_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QEvent*
///
void q_pushbutton_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QEvent*
///
void q_pushbutton_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QEvent* event)
///
void q_pushbutton_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param signal QMetaMethod*
///
void q_pushbutton_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param signal QMetaMethod*
///
void q_pushbutton_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QMetaMethod* signal)
///
void q_pushbutton_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param signal QMetaMethod*
///
void q_pushbutton_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param signal QMetaMethod*
///
void q_pushbutton_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QMetaMethod* signal)
///
void q_pushbutton_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
///
void q_pushbutton_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
///
void q_pushbutton_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self)
///
void q_pushbutton_on_update_micro_focus(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
///
void q_pushbutton_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
///
void q_pushbutton_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self)
///
void q_pushbutton_on_create(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
///
void q_pushbutton_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
///
void q_pushbutton_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self)
///
void q_pushbutton_on_destroy(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
///
bool q_pushbutton_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
///
bool q_pushbutton_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback bool func(QPushButton* self)
///
void q_pushbutton_on_focus_next_child(void* self, bool (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
///
bool q_pushbutton_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
///
bool q_pushbutton_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback bool func(QPushButton* self)
///
void q_pushbutton_on_focus_previous_child(void* self, bool (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPushButton*
///
QObject* q_pushbutton_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPushButton*
///
QObject* q_pushbutton_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback QObject* func(QPushButton* self)
///
void q_pushbutton_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPushButton*
///
int32_t q_pushbutton_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPushButton*
///
int32_t q_pushbutton_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback int32_t func(QPushButton* self)
///
void q_pushbutton_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPushButton*
/// @param signal const char*
///
int32_t q_pushbutton_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPushButton*
/// @param signal const char*
///
int32_t q_pushbutton_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback int32_t func(QPushButton* self, const char* signal)
///
void q_pushbutton_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPushButton*
/// @param signal QMetaMethod*
///
bool q_pushbutton_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPushButton*
/// @param signal QMetaMethod*
///
bool q_pushbutton_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback bool func(QPushButton* self, QMetaMethod* signal)
///
void q_pushbutton_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPushButton*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_pushbutton_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPushButton*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_pushbutton_super_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback double func(QPushButton* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_pushbutton_on_get_decoded_metric_f(void* self, double (*callback)(const void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, const char* objectName)
///
void q_pushbutton_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#dtor.QPushButton)
///
/// Delete this object from C++ memory.
///
/// @param self QPushButton*
///
void q_pushbutton_delete(void* self);

#endif
