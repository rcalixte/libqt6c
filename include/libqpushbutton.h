#pragma once
#ifndef SRC_QT6C_LIBQPUSHBUTTON_H
#define SRC_QT6C_LIBQPUSHBUTTON_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qpushbutton.html

/// q_pushbutton_new constructs a new QPushButton object.
///
/// @param parent QWidget*
QPushButton* q_pushbutton_new(void* parent);

/// q_pushbutton_new2 constructs a new QPushButton object.
///
QPushButton* q_pushbutton_new2();

/// q_pushbutton_new3 constructs a new QPushButton object.
///
/// @param text const char*
QPushButton* q_pushbutton_new3(const char* text);

/// q_pushbutton_new4 constructs a new QPushButton object.
///
/// @param icon QIcon*
/// @param text const char*
QPushButton* q_pushbutton_new4(void* icon, const char* text);

/// q_pushbutton_new5 constructs a new QPushButton object.
///
/// @param text const char*
/// @param parent QWidget*
QPushButton* q_pushbutton_new5(const char* text, void* parent);

/// q_pushbutton_new6 constructs a new QPushButton object.
///
/// @param icon QIcon*
/// @param text const char*
/// @param parent QWidget*
QPushButton* q_pushbutton_new6(void* icon, const char* text, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QPushButton*
const QMetaObject* q_pushbutton_meta_object(void* self);

/// @param self QPushButton*
/// @param param1 const char*
void* q_pushbutton_metacast(void* self, const char* param1);

/// @param self QPushButton*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_pushbutton_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QPushButton*
/// @param callback int32_t func(QPushButton* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_pushbutton_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QPushButton*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_pushbutton_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_pushbutton_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#sizeHint)
///
/// @param self QPushButton*
QSize* q_pushbutton_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QPushButton*
/// @param callback QSize* func()
void q_pushbutton_on_size_hint(void* self, QSize* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#sizeHint)
///
/// Base class method implementation
///
/// @param self QPushButton*
QSize* q_pushbutton_qbase_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#minimumSizeHint)
///
/// @param self QPushButton*
QSize* q_pushbutton_minimum_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#minimumSizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QPushButton*
/// @param callback QSize* func()
void q_pushbutton_on_minimum_size_hint(void* self, QSize* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#minimumSizeHint)
///
/// Base class method implementation
///
/// @param self QPushButton*
QSize* q_pushbutton_qbase_minimum_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#autoDefault)
///
/// @param self QPushButton*
bool q_pushbutton_auto_default(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#setAutoDefault)
///
/// @param self QPushButton*
/// @param autoDefault bool
void q_pushbutton_set_auto_default(void* self, bool autoDefault);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#isDefault)
///
/// @param self QPushButton*
bool q_pushbutton_is_default(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#setDefault)
///
/// @param self QPushButton*
/// @param defaultVal bool
void q_pushbutton_set_default(void* self, bool defaultVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#setMenu)
///
/// @param self QPushButton*
/// @param menu QMenu*
void q_pushbutton_set_menu(void* self, void* menu);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#menu)
///
/// @param self QPushButton*
QMenu* q_pushbutton_menu(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#setFlat)
///
/// @param self QPushButton*
/// @param flat bool
void q_pushbutton_set_flat(void* self, bool flat);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#isFlat)
///
/// @param self QPushButton*
bool q_pushbutton_is_flat(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#showMenu)
///
/// @param self QPushButton*
void q_pushbutton_show_menu(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#event)
///
/// @param self QPushButton*
/// @param e QEvent*
bool q_pushbutton_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QPushButton*
/// @param callback bool func(QPushButton* self, QEvent* e)
void q_pushbutton_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#event)
///
/// Base class method implementation
///
/// @param self QPushButton*
/// @param e QEvent*
bool q_pushbutton_qbase_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#paintEvent)
///
/// @param self QPushButton*
/// @param param1 QPaintEvent*
void q_pushbutton_paint_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QPaintEvent* param1)
void q_pushbutton_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#paintEvent)
///
/// Base class method implementation
///
/// @param self QPushButton*
/// @param param1 QPaintEvent*
void q_pushbutton_qbase_paint_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#keyPressEvent)
///
/// @param self QPushButton*
/// @param param1 QKeyEvent*
void q_pushbutton_key_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QKeyEvent* param1)
void q_pushbutton_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self QPushButton*
/// @param param1 QKeyEvent*
void q_pushbutton_qbase_key_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#focusInEvent)
///
/// @param self QPushButton*
/// @param param1 QFocusEvent*
void q_pushbutton_focus_in_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QFocusEvent* param1)
void q_pushbutton_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#focusInEvent)
///
/// Base class method implementation
///
/// @param self QPushButton*
/// @param param1 QFocusEvent*
void q_pushbutton_qbase_focus_in_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#focusOutEvent)
///
/// @param self QPushButton*
/// @param param1 QFocusEvent*
void q_pushbutton_focus_out_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QFocusEvent* param1)
void q_pushbutton_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#focusOutEvent)
///
/// Base class method implementation
///
/// @param self QPushButton*
/// @param param1 QFocusEvent*
void q_pushbutton_qbase_focus_out_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#mouseMoveEvent)
///
/// @param self QPushButton*
/// @param param1 QMouseEvent*
void q_pushbutton_mouse_move_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QMouseEvent* param1)
void q_pushbutton_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self QPushButton*
/// @param param1 QMouseEvent*
void q_pushbutton_qbase_mouse_move_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#initStyleOption)
///
/// @param self QPushButton*
/// @param option QStyleOptionButton*
void q_pushbutton_init_style_option(void* self, void* option);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#initStyleOption)
///
/// Allows for overriding the related default method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QStyleOptionButton* option)
void q_pushbutton_on_init_style_option(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#initStyleOption)
///
/// Base class method implementation
///
/// @param self QPushButton*
/// @param option QStyleOptionButton*
void q_pushbutton_qbase_init_style_option(void* self, void* option);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#hitButton)
///
/// @param self QPushButton*
/// @param pos QPoint*
bool q_pushbutton_hit_button(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#hitButton)
///
/// Allows for overriding the related default method
///
/// @param self QPushButton*
/// @param callback bool func(QPushButton* self, QPoint* pos)
void q_pushbutton_on_hit_button(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#hitButton)
///
/// Base class method implementation
///
/// @param self QPushButton*
/// @param pos QPoint*
bool q_pushbutton_qbase_hit_button(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_pushbutton_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_pushbutton_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setText)
///
/// @param self QPushButton*
/// @param text const char*
void q_pushbutton_set_text(void* self, const char* text);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPushButton*
const char* q_pushbutton_text(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setIcon)
///
/// @param self QPushButton*
/// @param icon QIcon*
void q_pushbutton_set_icon(void* self, void* icon);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#icon)
///
/// @param self QPushButton*
QIcon* q_pushbutton_icon(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#iconSize)
///
/// @param self QPushButton*
QSize* q_pushbutton_icon_size(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setShortcut)
///
/// @param self QPushButton*
/// @param key QKeySequence*
void q_pushbutton_set_shortcut(void* self, void* key);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#shortcut)
///
/// @param self QPushButton*
QKeySequence* q_pushbutton_shortcut(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setCheckable)
///
/// @param self QPushButton*
/// @param checkable bool
void q_pushbutton_set_checkable(void* self, bool checkable);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#isCheckable)
///
/// @param self QPushButton*
bool q_pushbutton_is_checkable(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#isChecked)
///
/// @param self QPushButton*
bool q_pushbutton_is_checked(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setDown)
///
/// @param self QPushButton*
/// @param down bool
void q_pushbutton_set_down(void* self, bool down);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#isDown)
///
/// @param self QPushButton*
bool q_pushbutton_is_down(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeat)
///
/// @param self QPushButton*
/// @param autoRepeat bool
void q_pushbutton_set_auto_repeat(void* self, bool autoRepeat);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeat)
///
/// @param self QPushButton*
bool q_pushbutton_auto_repeat(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeatDelay)
///
/// @param self QPushButton*
/// @param autoRepeatDelay int
void q_pushbutton_set_auto_repeat_delay(void* self, int autoRepeatDelay);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeatDelay)
///
/// @param self QPushButton*
int32_t q_pushbutton_auto_repeat_delay(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeatInterval)
///
/// @param self QPushButton*
/// @param autoRepeatInterval int
void q_pushbutton_set_auto_repeat_interval(void* self, int autoRepeatInterval);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeatInterval)
///
/// @param self QPushButton*
int32_t q_pushbutton_auto_repeat_interval(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoExclusive)
///
/// @param self QPushButton*
/// @param autoExclusive bool
void q_pushbutton_set_auto_exclusive(void* self, bool autoExclusive);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#autoExclusive)
///
/// @param self QPushButton*
bool q_pushbutton_auto_exclusive(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#group)
///
/// @param self QPushButton*
QButtonGroup* q_pushbutton_group(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setIconSize)
///
/// @param self QPushButton*
/// @param size QSize*
void q_pushbutton_set_icon_size(void* self, void* size);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#animateClick)
///
/// @param self QPushButton*
void q_pushbutton_animate_click(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#click)
///
/// @param self QPushButton*
void q_pushbutton_click(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#toggle)
///
/// @param self QPushButton*
void q_pushbutton_toggle(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setChecked)
///
/// @param self QPushButton*
/// @param checked bool
void q_pushbutton_set_checked(void* self, bool checked);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#pressed)
///
/// @param self QPushButton*
void q_pushbutton_pressed(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#pressed)
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self)
void q_pushbutton_on_pressed(void* self, void (*callback)(void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#released)
///
/// @param self QPushButton*
void q_pushbutton_released(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#released)
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self)
void q_pushbutton_on_released(void* self, void (*callback)(void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// @param self QPushButton*
void q_pushbutton_clicked(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self)
void q_pushbutton_on_clicked(void* self, void (*callback)(void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#toggled)
///
/// @param self QPushButton*
/// @param checked bool
void q_pushbutton_toggled(void* self, bool checked);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#toggled)
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, bool checked)
void q_pushbutton_on_toggled(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// @param self QPushButton*
/// @param checked bool
void q_pushbutton_clicked1(void* self, bool checked);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, bool checked)
void q_pushbutton_on_clicked1(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QPushButton*
uintptr_t q_pushbutton_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QPushButton*
void q_pushbutton_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QPushButton*
uintptr_t q_pushbutton_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QPushButton*
uintptr_t q_pushbutton_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QPushButton*
QStyle* q_pushbutton_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QPushButton*
/// @param style QStyle*
void q_pushbutton_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QPushButton*
bool q_pushbutton_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QPushButton*
bool q_pushbutton_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QPushButton*
bool q_pushbutton_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QPushButton*
///
/// @return enum Qt__WindowModality
int32_t q_pushbutton_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QPushButton*
/// @param windowModality enum Qt__WindowModality
void q_pushbutton_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QPushButton*
bool q_pushbutton_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QPushButton*
/// @param param1 QWidget*
bool q_pushbutton_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QPushButton*
/// @param enabled bool
void q_pushbutton_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QPushButton*
/// @param disabled bool
void q_pushbutton_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QPushButton*
/// @param windowModified bool
void q_pushbutton_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QPushButton*
QRect* q_pushbutton_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QPushButton*
const QRect* q_pushbutton_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QPushButton*
QRect* q_pushbutton_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QPushButton*
int32_t q_pushbutton_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QPushButton*
int32_t q_pushbutton_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QPushButton*
QPoint* q_pushbutton_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QPushButton*
QSize* q_pushbutton_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QPushButton*
QSize* q_pushbutton_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QPushButton*
int32_t q_pushbutton_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QPushButton*
int32_t q_pushbutton_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QPushButton*
QRect* q_pushbutton_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QPushButton*
QRect* q_pushbutton_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QPushButton*
QRegion* q_pushbutton_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QPushButton*
QSize* q_pushbutton_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QPushButton*
QSize* q_pushbutton_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QPushButton*
int32_t q_pushbutton_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QPushButton*
int32_t q_pushbutton_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QPushButton*
int32_t q_pushbutton_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QPushButton*
int32_t q_pushbutton_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QPushButton*
/// @param minimumSize QSize*
void q_pushbutton_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QPushButton*
/// @param minw int
/// @param minh int
void q_pushbutton_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QPushButton*
/// @param maximumSize QSize*
void q_pushbutton_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QPushButton*
/// @param maxw int
/// @param maxh int
void q_pushbutton_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QPushButton*
/// @param minw int
void q_pushbutton_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QPushButton*
/// @param minh int
void q_pushbutton_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QPushButton*
/// @param maxw int
void q_pushbutton_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QPushButton*
/// @param maxh int
void q_pushbutton_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QPushButton*
QSize* q_pushbutton_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QPushButton*
/// @param sizeIncrement QSize*
void q_pushbutton_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QPushButton*
/// @param w int
/// @param h int
void q_pushbutton_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QPushButton*
QSize* q_pushbutton_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QPushButton*
/// @param baseSize QSize*
void q_pushbutton_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QPushButton*
/// @param basew int
/// @param baseh int
void q_pushbutton_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QPushButton*
/// @param fixedSize QSize*
void q_pushbutton_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QPushButton*
/// @param w int
/// @param h int
void q_pushbutton_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QPushButton*
/// @param w int
void q_pushbutton_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QPushButton*
/// @param h int
void q_pushbutton_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QPushButton*
/// @param param1 QPointF*
QPointF* q_pushbutton_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QPushButton*
/// @param param1 QPoint*
QPoint* q_pushbutton_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QPushButton*
/// @param param1 QPointF*
QPointF* q_pushbutton_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QPushButton*
/// @param param1 QPoint*
QPoint* q_pushbutton_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QPushButton*
/// @param param1 QPointF*
QPointF* q_pushbutton_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QPushButton*
/// @param param1 QPoint*
QPoint* q_pushbutton_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QPushButton*
/// @param param1 QPointF*
QPointF* q_pushbutton_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QPushButton*
/// @param param1 QPoint*
QPoint* q_pushbutton_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QPushButton*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* q_pushbutton_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QPushButton*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* q_pushbutton_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QPushButton*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* q_pushbutton_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QPushButton*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* q_pushbutton_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QPushButton*
QWidget* q_pushbutton_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QPushButton*
QWidget* q_pushbutton_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QPushButton*
QWidget* q_pushbutton_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QPushButton*
const QPalette* q_pushbutton_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QPushButton*
/// @param palette QPalette*
void q_pushbutton_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QPushButton*
/// @param backgroundRole enum QPalette__ColorRole
void q_pushbutton_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QPushButton*
///
/// @return enum QPalette__ColorRole
int32_t q_pushbutton_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QPushButton*
/// @param foregroundRole enum QPalette__ColorRole
void q_pushbutton_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QPushButton*
///
/// @return enum QPalette__ColorRole
int32_t q_pushbutton_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QPushButton*
const QFont* q_pushbutton_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QPushButton*
/// @param font QFont*
void q_pushbutton_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QPushButton*
QFontMetrics* q_pushbutton_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QPushButton*
QFontInfo* q_pushbutton_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QPushButton*
QCursor* q_pushbutton_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QPushButton*
/// @param cursor QCursor*
void q_pushbutton_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QPushButton*
void q_pushbutton_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QPushButton*
/// @param enable bool
void q_pushbutton_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QPushButton*
bool q_pushbutton_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QPushButton*
bool q_pushbutton_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QPushButton*
/// @param enable bool
void q_pushbutton_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QPushButton*
bool q_pushbutton_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QPushButton*
/// @param mask QBitmap*
void q_pushbutton_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QPushButton*
/// @param mask QRegion*
void q_pushbutton_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QPushButton*
QRegion* q_pushbutton_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QPushButton*
void q_pushbutton_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPushButton*
/// @param target QPaintDevice*
void q_pushbutton_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPushButton*
/// @param painter QPainter*
void q_pushbutton_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QPushButton*
QPixmap* q_pushbutton_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QPushButton*
QGraphicsEffect* q_pushbutton_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QPushButton*
/// @param effect QGraphicsEffect*
void q_pushbutton_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QPushButton*
/// @param type enum Qt__GestureType
void q_pushbutton_grab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QPushButton*
/// @param type enum Qt__GestureType
void q_pushbutton_ungrab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QPushButton*
/// @param windowTitle const char*
void q_pushbutton_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QPushButton*
/// @param styleSheet const char*
void q_pushbutton_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPushButton*
const char* q_pushbutton_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPushButton*
const char* q_pushbutton_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QPushButton*
/// @param icon QIcon*
void q_pushbutton_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QPushButton*
QIcon* q_pushbutton_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QPushButton*
/// @param windowIconText const char*
void q_pushbutton_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPushButton*
const char* q_pushbutton_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QPushButton*
/// @param windowRole const char*
void q_pushbutton_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPushButton*
const char* q_pushbutton_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QPushButton*
/// @param filePath const char*
void q_pushbutton_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPushButton*
const char* q_pushbutton_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QPushButton*
/// @param level double
void q_pushbutton_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QPushButton*
double q_pushbutton_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QPushButton*
bool q_pushbutton_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QPushButton*
/// @param toolTip const char*
void q_pushbutton_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPushButton*
const char* q_pushbutton_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QPushButton*
/// @param msec int
void q_pushbutton_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QPushButton*
int32_t q_pushbutton_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QPushButton*
/// @param statusTip const char*
void q_pushbutton_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPushButton*
const char* q_pushbutton_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QPushButton*
/// @param whatsThis const char*
void q_pushbutton_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPushButton*
const char* q_pushbutton_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPushButton*
const char* q_pushbutton_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QPushButton*
/// @param name const char*
void q_pushbutton_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPushButton*
const char* q_pushbutton_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QPushButton*
/// @param description const char*
void q_pushbutton_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QPushButton*
/// @param direction enum Qt__LayoutDirection
void q_pushbutton_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QPushButton*
///
/// @return enum Qt__LayoutDirection
int32_t q_pushbutton_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QPushButton*
void q_pushbutton_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QPushButton*
/// @param locale QLocale*
void q_pushbutton_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QPushButton*
QLocale* q_pushbutton_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QPushButton*
void q_pushbutton_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QPushButton*
bool q_pushbutton_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QPushButton*
bool q_pushbutton_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QPushButton*
void q_pushbutton_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QPushButton*
bool q_pushbutton_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QPushButton*
void q_pushbutton_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QPushButton*
void q_pushbutton_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QPushButton*
/// @param reason enum Qt__FocusReason
void q_pushbutton_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QPushButton*
///
/// @return enum Qt__FocusPolicy
int32_t q_pushbutton_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QPushButton*
/// @param policy enum Qt__FocusPolicy
void q_pushbutton_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QPushButton*
bool q_pushbutton_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void q_pushbutton_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QPushButton*
/// @param focusProxy QWidget*
void q_pushbutton_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QPushButton*
QWidget* q_pushbutton_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QPushButton*
///
/// @return enum Qt__ContextMenuPolicy
int32_t q_pushbutton_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QPushButton*
/// @param policy enum Qt__ContextMenuPolicy
void q_pushbutton_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QPushButton*
void q_pushbutton_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QPushButton*
/// @param param1 QCursor*
void q_pushbutton_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QPushButton*
void q_pushbutton_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QPushButton*
void q_pushbutton_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QPushButton*
void q_pushbutton_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QPushButton*
/// @param key QKeySequence*
int32_t q_pushbutton_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QPushButton*
/// @param id int
void q_pushbutton_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QPushButton*
/// @param id int
void q_pushbutton_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QPushButton*
/// @param id int
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
/// @param self QPushButton*
bool q_pushbutton_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QPushButton*
/// @param enable bool
void q_pushbutton_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QPushButton*
QGraphicsProxyWidget* q_pushbutton_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QPushButton*
void q_pushbutton_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QPushButton*
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
void q_pushbutton_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QPushButton*
/// @param param1 QRect*
void q_pushbutton_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QPushButton*
/// @param param1 QRegion*
void q_pushbutton_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QPushButton*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_pushbutton_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QPushButton*
/// @param param1 QRect*
void q_pushbutton_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QPushButton*
/// @param param1 QRegion*
void q_pushbutton_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QPushButton*
/// @param hidden bool
void q_pushbutton_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QPushButton*
void q_pushbutton_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QPushButton*
void q_pushbutton_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QPushButton*
void q_pushbutton_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QPushButton*
void q_pushbutton_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QPushButton*
void q_pushbutton_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QPushButton*
void q_pushbutton_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QPushButton*
bool q_pushbutton_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QPushButton*
void q_pushbutton_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QPushButton*
void q_pushbutton_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QPushButton*
/// @param param1 QWidget*
void q_pushbutton_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QPushButton*
/// @param x int
/// @param y int
void q_pushbutton_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QPushButton*
/// @param param1 QPoint*
void q_pushbutton_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QPushButton*
/// @param w int
/// @param h int
void q_pushbutton_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QPushButton*
/// @param param1 QSize*
void q_pushbutton_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QPushButton*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_pushbutton_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QPushButton*
/// @param geometry QRect*
void q_pushbutton_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPushButton*
char* q_pushbutton_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QPushButton*
/// @param geometry const char*
bool q_pushbutton_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QPushButton*
void q_pushbutton_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QPushButton*
bool q_pushbutton_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QPushButton*
/// @param param1 QWidget*
bool q_pushbutton_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QPushButton*
bool q_pushbutton_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QPushButton*
bool q_pushbutton_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QPushButton*
bool q_pushbutton_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QPushButton*
bool q_pushbutton_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QPushButton*
///
/// @return flag of enum Qt__WindowState
int32_t q_pushbutton_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QPushButton*
/// @param state flag of enum Qt__WindowState
void q_pushbutton_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QPushButton*
/// @param state flag of enum Qt__WindowState
void q_pushbutton_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QPushButton*
QSizePolicy* q_pushbutton_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QPushButton*
/// @param sizePolicy QSizePolicy*
void q_pushbutton_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QPushButton*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void q_pushbutton_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QPushButton*
QRegion* q_pushbutton_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QPushButton*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void q_pushbutton_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QPushButton*
/// @param margins QMargins*
void q_pushbutton_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QPushButton*
QMargins* q_pushbutton_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QPushButton*
QRect* q_pushbutton_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QPushButton*
QLayout* q_pushbutton_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QPushButton*
/// @param layout QLayout*
void q_pushbutton_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QPushButton*
void q_pushbutton_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QPushButton*
/// @param parent QWidget*
void q_pushbutton_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QPushButton*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void q_pushbutton_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QPushButton*
/// @param dx int
/// @param dy int
void q_pushbutton_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QPushButton*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void q_pushbutton_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QPushButton*
QWidget* q_pushbutton_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QPushButton*
QWidget* q_pushbutton_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QPushButton*
QWidget* q_pushbutton_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QPushButton*
bool q_pushbutton_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QPushButton*
/// @param on bool
void q_pushbutton_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QPushButton*
/// @param action QAction*
void q_pushbutton_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QPushButton*
/// @param actions libqt_list /* of QAction* */
void q_pushbutton_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QPushButton*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void q_pushbutton_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QPushButton*
/// @param before QAction*
/// @param action QAction*
void q_pushbutton_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QPushButton*
/// @param action QAction*
void q_pushbutton_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QPushButton*
libqt_list /* of QAction* */ q_pushbutton_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QPushButton*
/// @param text const char*
QAction* q_pushbutton_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QPushButton*
/// @param icon QIcon*
/// @param text const char*
QAction* q_pushbutton_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QPushButton*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* q_pushbutton_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QPushButton*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* q_pushbutton_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QPushButton*
QWidget* q_pushbutton_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QPushButton*
/// @param type flag of enum Qt__WindowType
void q_pushbutton_set_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QPushButton*
///
/// @return flag of enum Qt__WindowType
int64_t q_pushbutton_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QPushButton*
/// @param param1 enum Qt__WindowType
void q_pushbutton_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QPushButton*
/// @param type flag of enum Qt__WindowType
void q_pushbutton_override_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QPushButton*
///
/// @return enum Qt__WindowType
int64_t q_pushbutton_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* q_pushbutton_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QPushButton*
/// @param x int
/// @param y int
QWidget* q_pushbutton_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QPushButton*
/// @param p QPoint*
QWidget* q_pushbutton_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QPushButton*
/// @param p QPointF*
QWidget* q_pushbutton_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QPushButton*
/// @param param1 enum Qt__WidgetAttribute
void q_pushbutton_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QPushButton*
/// @param param1 enum Qt__WidgetAttribute
bool q_pushbutton_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QPushButton*
void q_pushbutton_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QPushButton*
/// @param child QWidget*
bool q_pushbutton_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QPushButton*
bool q_pushbutton_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QPushButton*
/// @param enabled bool
void q_pushbutton_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QPushButton*
QBackingStore* q_pushbutton_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QPushButton*
QWindow* q_pushbutton_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QPushButton*
QScreen* q_pushbutton_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QPushButton*
/// @param screen QScreen*
void q_pushbutton_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* q_pushbutton_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QPushButton*
/// @param title const char*
void q_pushbutton_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, const char* title)
void q_pushbutton_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QPushButton*
/// @param icon QIcon*
void q_pushbutton_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QIcon* icon)
void q_pushbutton_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QPushButton*
/// @param iconText const char*
void q_pushbutton_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, const char* iconText)
void q_pushbutton_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QPushButton*
/// @param pos QPoint*
void q_pushbutton_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QPoint* pos)
void q_pushbutton_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QPushButton*
///
/// @return flag of enum Qt__InputMethodHint
int64_t q_pushbutton_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QPushButton*
/// @param hints flag of enum Qt__InputMethodHint
void q_pushbutton_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPushButton*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void q_pushbutton_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPushButton*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void q_pushbutton_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPushButton*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void q_pushbutton_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPushButton*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void q_pushbutton_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPushButton*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void q_pushbutton_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPushButton*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void q_pushbutton_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QPushButton*
/// @param rectangle QRect*
QPixmap* q_pushbutton_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QPushButton*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void q_pushbutton_grab_gesture2(void* self, int64_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QPushButton*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t q_pushbutton_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QPushButton*
/// @param id int
/// @param enable bool
void q_pushbutton_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QPushButton*
/// @param id int
/// @param enable bool
void q_pushbutton_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QPushButton*
/// @param param1 enum Qt__WindowType
/// @param on bool
void q_pushbutton_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QPushButton*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void q_pushbutton_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* q_pushbutton_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* q_pushbutton_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPushButton*
const char* q_pushbutton_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPushButton*
/// @param name char*
void q_pushbutton_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QPushButton*
bool q_pushbutton_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QPushButton*
bool q_pushbutton_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QPushButton*
bool q_pushbutton_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QPushButton*
bool q_pushbutton_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPushButton*
/// @param b bool
bool q_pushbutton_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QPushButton*
QThread* q_pushbutton_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPushButton*
/// @param thread QThread*
bool q_pushbutton_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPushButton*
/// @param interval int
int32_t q_pushbutton_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPushButton*
/// @param id int
void q_pushbutton_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPushButton*
/// @param id enum Qt__TimerId
void q_pushbutton_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QPushButton*
libqt_list /* of QObject* */ q_pushbutton_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPushButton*
/// @param filterObj QObject*
void q_pushbutton_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPushButton*
/// @param obj QObject*
void q_pushbutton_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_pushbutton_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPushButton*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_pushbutton_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_pushbutton_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_pushbutton_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QPushButton*
void q_pushbutton_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QPushButton*
void q_pushbutton_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPushButton*
/// @param name const char*
/// @param value QVariant*
bool q_pushbutton_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QPushButton*
/// @param name const char*
QVariant* q_pushbutton_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPushButton*
const char** q_pushbutton_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPushButton*
QBindingStorage* q_pushbutton_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPushButton*
const QBindingStorage* q_pushbutton_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPushButton*
void q_pushbutton_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self)
void q_pushbutton_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QPushButton*
QObject* q_pushbutton_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QPushButton*
/// @param classname const char*
bool q_pushbutton_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPushButton*
void q_pushbutton_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPushButton*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_pushbutton_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPushButton*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_pushbutton_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_pushbutton_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPushButton*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_pushbutton_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPushButton*
/// @param param1 QObject*
void q_pushbutton_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QObject* param1)
void q_pushbutton_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QPushButton*
bool q_pushbutton_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QPushButton*
int32_t q_pushbutton_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QPushButton*
int32_t q_pushbutton_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QPushButton*
int32_t q_pushbutton_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QPushButton*
int32_t q_pushbutton_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QPushButton*
int32_t q_pushbutton_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QPushButton*
int32_t q_pushbutton_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QPushButton*
double q_pushbutton_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QPushButton*
double q_pushbutton_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QPushButton*
int32_t q_pushbutton_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QPushButton*
int32_t q_pushbutton_depth(void* self);

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
int32_t q_pushbutton_encode_metric_f(int32_t metric, double value);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#checkStateSet)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
void q_pushbutton_check_state_set(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#checkStateSet)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
void q_pushbutton_qbase_check_state_set(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#checkStateSet)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func()
void q_pushbutton_on_check_state_set(void* self, void (*callback)());

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#nextCheckState)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
void q_pushbutton_next_check_state(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#nextCheckState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
void q_pushbutton_qbase_next_check_state(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#nextCheckState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func()
void q_pushbutton_on_next_check_state(void* self, void (*callback)());

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param e QKeyEvent*
void q_pushbutton_key_release_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param e QKeyEvent*
void q_pushbutton_qbase_key_release_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QKeyEvent* e)
void q_pushbutton_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param e QMouseEvent*
void q_pushbutton_mouse_press_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param e QMouseEvent*
void q_pushbutton_qbase_mouse_press_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QMouseEvent* e)
void q_pushbutton_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param e QMouseEvent*
void q_pushbutton_mouse_release_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param e QMouseEvent*
void q_pushbutton_qbase_mouse_release_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QMouseEvent* e)
void q_pushbutton_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param e QEvent*
void q_pushbutton_change_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param e QEvent*
void q_pushbutton_qbase_change_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QEvent* e)
void q_pushbutton_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param e QTimerEvent*
void q_pushbutton_timer_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param e QTimerEvent*
void q_pushbutton_qbase_timer_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QTimerEvent* e)
void q_pushbutton_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
int32_t q_pushbutton_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
int32_t q_pushbutton_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback int32_t func()
void q_pushbutton_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param visible bool
void q_pushbutton_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param visible bool
void q_pushbutton_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, bool visible)
void q_pushbutton_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param param1 int
int32_t q_pushbutton_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param param1 int
int32_t q_pushbutton_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback int32_t func(QPushButton* self, int param1)
void q_pushbutton_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
bool q_pushbutton_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
bool q_pushbutton_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback bool func()
void q_pushbutton_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
QPaintEngine* q_pushbutton_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
QPaintEngine* q_pushbutton_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback QPaintEngine* func()
void q_pushbutton_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QMouseEvent*
void q_pushbutton_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QMouseEvent*
void q_pushbutton_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QMouseEvent* event)
void q_pushbutton_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QWheelEvent*
void q_pushbutton_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QWheelEvent*
void q_pushbutton_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QWheelEvent* event)
void q_pushbutton_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QEnterEvent*
void q_pushbutton_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QEnterEvent*
void q_pushbutton_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QEnterEvent* event)
void q_pushbutton_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QEvent*
void q_pushbutton_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QEvent*
void q_pushbutton_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QEvent* event)
void q_pushbutton_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QMoveEvent*
void q_pushbutton_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QMoveEvent*
void q_pushbutton_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QMoveEvent* event)
void q_pushbutton_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QResizeEvent*
void q_pushbutton_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QResizeEvent*
void q_pushbutton_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QResizeEvent* event)
void q_pushbutton_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QCloseEvent*
void q_pushbutton_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QCloseEvent*
void q_pushbutton_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QCloseEvent* event)
void q_pushbutton_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QContextMenuEvent*
void q_pushbutton_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QContextMenuEvent*
void q_pushbutton_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QContextMenuEvent* event)
void q_pushbutton_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QTabletEvent*
void q_pushbutton_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QTabletEvent*
void q_pushbutton_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QTabletEvent* event)
void q_pushbutton_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QActionEvent*
void q_pushbutton_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QActionEvent*
void q_pushbutton_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QActionEvent* event)
void q_pushbutton_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QDragEnterEvent*
void q_pushbutton_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QDragEnterEvent*
void q_pushbutton_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QDragEnterEvent* event)
void q_pushbutton_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QDragMoveEvent*
void q_pushbutton_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QDragMoveEvent*
void q_pushbutton_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QDragMoveEvent* event)
void q_pushbutton_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QDragLeaveEvent*
void q_pushbutton_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QDragLeaveEvent*
void q_pushbutton_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QDragLeaveEvent* event)
void q_pushbutton_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QDropEvent*
void q_pushbutton_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QDropEvent*
void q_pushbutton_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QDropEvent* event)
void q_pushbutton_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QShowEvent*
void q_pushbutton_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QShowEvent*
void q_pushbutton_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QShowEvent* event)
void q_pushbutton_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QHideEvent*
void q_pushbutton_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QHideEvent*
void q_pushbutton_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QHideEvent* event)
void q_pushbutton_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_pushbutton_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_pushbutton_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback bool func(QPushButton* self, const char* eventType, void* message, intptr_t* result)
void q_pushbutton_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_pushbutton_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_pushbutton_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback int32_t func(QPushButton* self, enum QPaintDevice__PaintDeviceMetric param1)
void q_pushbutton_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param painter QPainter*
void q_pushbutton_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param painter QPainter*
void q_pushbutton_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QPainter* painter)
void q_pushbutton_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param offset QPoint*
QPaintDevice* q_pushbutton_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param offset QPoint*
QPaintDevice* q_pushbutton_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback QPaintDevice* func(QPushButton* self, QPoint* offset)
void q_pushbutton_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
QPainter* q_pushbutton_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
QPainter* q_pushbutton_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback QPainter* func()
void q_pushbutton_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param param1 QInputMethodEvent*
void q_pushbutton_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param param1 QInputMethodEvent*
void q_pushbutton_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QInputMethodEvent* param1)
void q_pushbutton_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param param1 enum Qt__InputMethodQuery
QVariant* q_pushbutton_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param param1 enum Qt__InputMethodQuery
QVariant* q_pushbutton_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback QVariant* func(QPushButton* self, enum Qt__InputMethodQuery param1)
void q_pushbutton_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param next bool
bool q_pushbutton_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param next bool
bool q_pushbutton_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback bool func(QPushButton* self, bool next)
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
bool q_pushbutton_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback bool func(QPushButton* self, QObject* watched, QEvent* event)
void q_pushbutton_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QChildEvent*
void q_pushbutton_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QChildEvent*
void q_pushbutton_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QChildEvent* event)
void q_pushbutton_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param event QEvent*
void q_pushbutton_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param event QEvent*
void q_pushbutton_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QEvent* event)
void q_pushbutton_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param signal QMetaMethod*
void q_pushbutton_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param signal QMetaMethod*
void q_pushbutton_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QMetaMethod* signal)
void q_pushbutton_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param signal QMetaMethod*
void q_pushbutton_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param signal QMetaMethod*
void q_pushbutton_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, QMetaMethod* signal)
void q_pushbutton_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
void q_pushbutton_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
void q_pushbutton_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func()
void q_pushbutton_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
void q_pushbutton_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
void q_pushbutton_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func()
void q_pushbutton_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
void q_pushbutton_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
void q_pushbutton_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback void func()
void q_pushbutton_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
bool q_pushbutton_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
bool q_pushbutton_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback bool func()
void q_pushbutton_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
bool q_pushbutton_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
bool q_pushbutton_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback bool func()
void q_pushbutton_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
QObject* q_pushbutton_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
QObject* q_pushbutton_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback QObject* func()
void q_pushbutton_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
int32_t q_pushbutton_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
int32_t q_pushbutton_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback int32_t func()
void q_pushbutton_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param signal const char*
int32_t q_pushbutton_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param signal const char*
int32_t q_pushbutton_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback int32_t func(QPushButton* self, const char* signal)
void q_pushbutton_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param signal QMetaMethod*
bool q_pushbutton_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param signal QMetaMethod*
bool q_pushbutton_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback bool func(QPushButton* self, QMetaMethod* signal)
void q_pushbutton_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPushButton*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_pushbutton_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPushButton*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_pushbutton_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPushButton*
/// @param callback double func(QPushButton* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void q_pushbutton_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPushButton*
/// @param callback void func(QPushButton* self, const char* objectName)
void q_pushbutton_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#dtor.QPushButton)
///
/// Delete this object from C++ memory.
///
/// @param self QPushButton*
void q_pushbutton_delete(void* self);

#endif
