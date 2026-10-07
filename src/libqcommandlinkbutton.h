#pragma once
#ifndef LIBQCOMMANDLINKBUTTON_H
#define LIBQCOMMANDLINKBUTTON_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qcommandlinkbutton.html)

/// q_commandlinkbutton_new constructs a new QCommandLinkButton object.
///
/// @param parent QWidget*
///
QCommandLinkButton* q_commandlinkbutton_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommandlinkbutton.html)

/// q_commandlinkbutton_new2 constructs a new QCommandLinkButton object.
///
QCommandLinkButton* q_commandlinkbutton_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qcommandlinkbutton.html)

/// q_commandlinkbutton_new3 constructs a new QCommandLinkButton object.
///
/// @param text const char*
///
QCommandLinkButton* q_commandlinkbutton_new3(const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommandlinkbutton.html)

/// q_commandlinkbutton_new4 constructs a new QCommandLinkButton object.
///
/// @param text const char*
/// @param description const char*
///
QCommandLinkButton* q_commandlinkbutton_new4(const char* text, const char* description);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommandlinkbutton.html)

/// q_commandlinkbutton_new5 constructs a new QCommandLinkButton object.
///
/// @param text const char*
/// @param parent QWidget*
///
QCommandLinkButton* q_commandlinkbutton_new5(const char* text, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommandlinkbutton.html)

/// q_commandlinkbutton_new6 constructs a new QCommandLinkButton object.
///
/// @param text const char*
/// @param description const char*
/// @param parent QWidget*
///
QCommandLinkButton* q_commandlinkbutton_new6(const char* text, const char* description, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QCommandLinkButton*
///
const QMetaObject* q_commandlinkbutton_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QCommandLinkButton*
/// @param callback const QMetaObject* func(const QCommandLinkButton* self)
///
void q_commandlinkbutton_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QCommandLinkButton*
///
const QMetaObject* q_commandlinkbutton_super_meta_object(const void* self);

/// @param self QCommandLinkButton*
/// @param param1 const char*
///
void* q_commandlinkbutton_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QCommandLinkButton*
/// @param callback void* func(QCommandLinkButton* self, const char* param1)
///
void q_commandlinkbutton_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QCommandLinkButton*
/// @param param1 const char*
///
void* q_commandlinkbutton_super_metacast(void* self, const char* param1);

/// @param self QCommandLinkButton*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_commandlinkbutton_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QCommandLinkButton*
/// @param callback int32_t func(QCommandLinkButton* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_commandlinkbutton_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QCommandLinkButton*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_commandlinkbutton_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_commandlinkbutton_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommandlinkbutton.html#description)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCommandLinkButton*
///
const char* q_commandlinkbutton_description(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommandlinkbutton.html#setDescription)
///
/// @param self QCommandLinkButton*
/// @param description const char*
///
void q_commandlinkbutton_set_description(void* self, const char* description);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommandlinkbutton.html#sizeHint)
///
/// @param self const QCommandLinkButton*
///
QSize* q_commandlinkbutton_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommandlinkbutton.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QCommandLinkButton*
/// @param callback QSize* func(const QCommandLinkButton* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_commandlinkbutton_on_size_hint(void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommandlinkbutton.html#sizeHint)
///
/// Base class method implementation
///
/// @param self const QCommandLinkButton*
///
QSize* q_commandlinkbutton_super_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommandlinkbutton.html#heightForWidth)
///
/// @param self const QCommandLinkButton*
/// @param param1 int
///
int32_t q_commandlinkbutton_height_for_width(const void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommandlinkbutton.html#heightForWidth)
///
/// Allows for overriding the related default method
///
/// @param self QCommandLinkButton*
/// @param callback int32_t func(const QCommandLinkButton* self, int param1)
///
void q_commandlinkbutton_on_height_for_width(void* self, int32_t (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommandlinkbutton.html#heightForWidth)
///
/// Base class method implementation
///
/// @param self const QCommandLinkButton*
/// @param param1 int
///
int32_t q_commandlinkbutton_super_height_for_width(const void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommandlinkbutton.html#minimumSizeHint)
///
/// @param self const QCommandLinkButton*
///
QSize* q_commandlinkbutton_minimum_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommandlinkbutton.html#minimumSizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QCommandLinkButton*
/// @param callback QSize* func(const QCommandLinkButton* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_commandlinkbutton_on_minimum_size_hint(void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommandlinkbutton.html#minimumSizeHint)
///
/// Base class method implementation
///
/// @param self const QCommandLinkButton*
///
QSize* q_commandlinkbutton_super_minimum_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommandlinkbutton.html#initStyleOption)
///
/// @param self const QCommandLinkButton*
/// @param option QStyleOptionButton*
///
void q_commandlinkbutton_init_style_option(const void* self, void* option);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommandlinkbutton.html#initStyleOption)
///
/// Allows for overriding the related default method
///
/// @param self QCommandLinkButton*
/// @param callback void func(const QCommandLinkButton* self, QStyleOptionButton* option)
///
void q_commandlinkbutton_on_init_style_option(void* self, void (*callback)(const void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommandlinkbutton.html#initStyleOption)
///
/// Base class method implementation
///
/// @param self const QCommandLinkButton*
/// @param option QStyleOptionButton*
///
void q_commandlinkbutton_super_init_style_option(const void* self, void* option);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommandlinkbutton.html#event)
///
/// @param self QCommandLinkButton*
/// @param e QEvent*
///
bool q_commandlinkbutton_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommandlinkbutton.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QCommandLinkButton*
/// @param callback bool func(QCommandLinkButton* self, QEvent* e)
///
void q_commandlinkbutton_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommandlinkbutton.html#event)
///
/// Base class method implementation
///
/// @param self QCommandLinkButton*
/// @param e QEvent*
///
bool q_commandlinkbutton_super_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommandlinkbutton.html#paintEvent)
///
/// @param self QCommandLinkButton*
/// @param param1 QPaintEvent*
///
void q_commandlinkbutton_paint_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommandlinkbutton.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QPaintEvent* param1)
///
void q_commandlinkbutton_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommandlinkbutton.html#paintEvent)
///
/// Base class method implementation
///
/// @param self QCommandLinkButton*
/// @param param1 QPaintEvent*
///
void q_commandlinkbutton_super_paint_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_commandlinkbutton_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_commandlinkbutton_tr3(const char* s, const char* c, int n);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#autoDefault)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_auto_default(const void* self);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#setAutoDefault)
///
/// @param self QCommandLinkButton*
/// @param autoDefault bool
///
void q_commandlinkbutton_set_auto_default(void* self, bool autoDefault);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#isDefault)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_is_default(const void* self);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#setDefault)
///
/// @param self QCommandLinkButton*
/// @param defaultVal bool
///
void q_commandlinkbutton_set_default(void* self, bool defaultVal);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#setMenu)
///
/// @param self QCommandLinkButton*
/// @param menu QMenu*
///
void q_commandlinkbutton_set_menu(void* self, void* menu);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#menu)
///
/// @param self const QCommandLinkButton*
///
QMenu* q_commandlinkbutton_menu(const void* self);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#setFlat)
///
/// @param self QCommandLinkButton*
/// @param flat bool
///
void q_commandlinkbutton_set_flat(void* self, bool flat);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#isFlat)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_is_flat(const void* self);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#showMenu)
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_show_menu(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setText)
///
/// @param self QCommandLinkButton*
/// @param text const char*
///
void q_commandlinkbutton_set_text(void* self, const char* text);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCommandLinkButton*
///
const char* q_commandlinkbutton_text(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setIcon)
///
/// @param self QCommandLinkButton*
/// @param icon QIcon*
///
void q_commandlinkbutton_set_icon(void* self, const void* icon);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#icon)
///
/// @param self const QCommandLinkButton*
///
QIcon* q_commandlinkbutton_icon(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#iconSize)
///
/// @param self const QCommandLinkButton*
///
QSize* q_commandlinkbutton_icon_size(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setShortcut)
///
/// @param self QCommandLinkButton*
/// @param key QKeySequence*
///
void q_commandlinkbutton_set_shortcut(void* self, const void* key);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#shortcut)
///
/// @param self const QCommandLinkButton*
///
QKeySequence* q_commandlinkbutton_shortcut(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setCheckable)
///
/// @param self QCommandLinkButton*
/// @param checkable bool
///
void q_commandlinkbutton_set_checkable(void* self, bool checkable);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#isCheckable)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_is_checkable(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#isChecked)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_is_checked(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setDown)
///
/// @param self QCommandLinkButton*
/// @param down bool
///
void q_commandlinkbutton_set_down(void* self, bool down);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#isDown)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_is_down(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeat)
///
/// @param self QCommandLinkButton*
/// @param autoRepeat bool
///
void q_commandlinkbutton_set_auto_repeat(void* self, bool autoRepeat);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeat)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_auto_repeat(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeatDelay)
///
/// @param self QCommandLinkButton*
/// @param autoRepeatDelay int
///
void q_commandlinkbutton_set_auto_repeat_delay(void* self, int autoRepeatDelay);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeatDelay)
///
/// @param self const QCommandLinkButton*
///
int32_t q_commandlinkbutton_auto_repeat_delay(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeatInterval)
///
/// @param self QCommandLinkButton*
/// @param autoRepeatInterval int
///
void q_commandlinkbutton_set_auto_repeat_interval(void* self, int autoRepeatInterval);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeatInterval)
///
/// @param self const QCommandLinkButton*
///
int32_t q_commandlinkbutton_auto_repeat_interval(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoExclusive)
///
/// @param self QCommandLinkButton*
/// @param autoExclusive bool
///
void q_commandlinkbutton_set_auto_exclusive(void* self, bool autoExclusive);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#autoExclusive)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_auto_exclusive(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#group)
///
/// @param self const QCommandLinkButton*
///
QButtonGroup* q_commandlinkbutton_group(const void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setIconSize)
///
/// @param self QCommandLinkButton*
/// @param size QSize*
///
void q_commandlinkbutton_set_icon_size(void* self, const void* size);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#animateClick)
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_animate_click(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#click)
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_click(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#toggle)
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_toggle(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setChecked)
///
/// @param self QCommandLinkButton*
/// @param checked bool
///
void q_commandlinkbutton_set_checked(void* self, bool checked);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#pressed)
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_pressed(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#pressed)
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self)
///
void q_commandlinkbutton_on_pressed(void* self, void (*callback)(void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#released)
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_released(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#released)
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self)
///
void q_commandlinkbutton_on_released(void* self, void (*callback)(void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_clicked(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self)
///
void q_commandlinkbutton_on_clicked(void* self, void (*callback)(void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#toggled)
///
/// @param self QCommandLinkButton*
/// @param checked bool
///
void q_commandlinkbutton_toggled(void* self, bool checked);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#toggled)
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, bool checked)
///
void q_commandlinkbutton_on_toggled(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// @param self QCommandLinkButton*
/// @param checked bool
///
void q_commandlinkbutton_clicked1(void* self, bool checked);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, bool checked)
///
void q_commandlinkbutton_on_clicked1(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// Upcasts to a QPaintDevice object
///
/// @param self const QCommandLinkButton*
///
QPaintDevice* q_commandlinkbutton_as_q_paint_device(const void* self);

/// Inherited from QWidget
///
/// Downcasts to a QCommandLinkButton object
///
/// @param _qpaintdevice QPaintDevice*
///
QCommandLinkButton* q_commandlinkbutton_from_q_paint_device(const void* _qpaintdevice);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self const QCommandLinkButton*
///
uintptr_t q_commandlinkbutton_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self const QCommandLinkButton*
///
uintptr_t q_commandlinkbutton_internal_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self const QCommandLinkButton*
///
uintptr_t q_commandlinkbutton_effective_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self const QCommandLinkButton*
///
QStyle* q_commandlinkbutton_style(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QCommandLinkButton*
/// @param style QStyle*
///
void q_commandlinkbutton_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_is_top_level(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_is_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_is_modal(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self const QCommandLinkButton*
///
/// @return enum Qt__WindowModality
///
int32_t q_commandlinkbutton_window_modality(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QCommandLinkButton*
/// @param windowModality enum Qt__WindowModality
///
void q_commandlinkbutton_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_is_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self const QCommandLinkButton*
/// @param param1 QWidget*
///
bool q_commandlinkbutton_is_enabled_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QCommandLinkButton*
/// @param enabled bool
///
void q_commandlinkbutton_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QCommandLinkButton*
/// @param disabled bool
///
void q_commandlinkbutton_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QCommandLinkButton*
/// @param windowModified bool
///
void q_commandlinkbutton_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self const QCommandLinkButton*
///
QRect* q_commandlinkbutton_frame_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self const QCommandLinkButton*
///
const QRect* q_commandlinkbutton_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self const QCommandLinkButton*
///
QRect* q_commandlinkbutton_normal_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self const QCommandLinkButton*
///
int32_t q_commandlinkbutton_x(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self const QCommandLinkButton*
///
int32_t q_commandlinkbutton_y(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self const QCommandLinkButton*
///
QPoint* q_commandlinkbutton_pos(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self const QCommandLinkButton*
///
QSize* q_commandlinkbutton_frame_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self const QCommandLinkButton*
///
QSize* q_commandlinkbutton_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self const QCommandLinkButton*
///
int32_t q_commandlinkbutton_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self const QCommandLinkButton*
///
int32_t q_commandlinkbutton_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self const QCommandLinkButton*
///
QRect* q_commandlinkbutton_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self const QCommandLinkButton*
///
QRect* q_commandlinkbutton_children_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self const QCommandLinkButton*
///
QRegion* q_commandlinkbutton_children_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self const QCommandLinkButton*
///
QSize* q_commandlinkbutton_minimum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self const QCommandLinkButton*
///
QSize* q_commandlinkbutton_maximum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self const QCommandLinkButton*
///
int32_t q_commandlinkbutton_minimum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self const QCommandLinkButton*
///
int32_t q_commandlinkbutton_minimum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self const QCommandLinkButton*
///
int32_t q_commandlinkbutton_maximum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self const QCommandLinkButton*
///
int32_t q_commandlinkbutton_maximum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QCommandLinkButton*
/// @param minimumSize QSize*
///
void q_commandlinkbutton_set_minimum_size(void* self, const void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QCommandLinkButton*
/// @param minw int
/// @param minh int
///
void q_commandlinkbutton_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QCommandLinkButton*
/// @param maximumSize QSize*
///
void q_commandlinkbutton_set_maximum_size(void* self, const void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QCommandLinkButton*
/// @param maxw int
/// @param maxh int
///
void q_commandlinkbutton_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QCommandLinkButton*
/// @param minw int
///
void q_commandlinkbutton_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QCommandLinkButton*
/// @param minh int
///
void q_commandlinkbutton_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QCommandLinkButton*
/// @param maxw int
///
void q_commandlinkbutton_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QCommandLinkButton*
/// @param maxh int
///
void q_commandlinkbutton_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self const QCommandLinkButton*
///
QSize* q_commandlinkbutton_size_increment(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QCommandLinkButton*
/// @param sizeIncrement QSize*
///
void q_commandlinkbutton_set_size_increment(void* self, const void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QCommandLinkButton*
/// @param w int
/// @param h int
///
void q_commandlinkbutton_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self const QCommandLinkButton*
///
QSize* q_commandlinkbutton_base_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QCommandLinkButton*
/// @param baseSize QSize*
///
void q_commandlinkbutton_set_base_size(void* self, const void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QCommandLinkButton*
/// @param basew int
/// @param baseh int
///
void q_commandlinkbutton_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QCommandLinkButton*
/// @param fixedSize QSize*
///
void q_commandlinkbutton_set_fixed_size(void* self, const void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QCommandLinkButton*
/// @param w int
/// @param h int
///
void q_commandlinkbutton_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QCommandLinkButton*
/// @param w int
///
void q_commandlinkbutton_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QCommandLinkButton*
/// @param h int
///
void q_commandlinkbutton_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const QCommandLinkButton*
/// @param param1 QPointF*
///
QPointF* q_commandlinkbutton_map_to_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const QCommandLinkButton*
/// @param param1 QPoint*
///
QPoint* q_commandlinkbutton_map_to_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const QCommandLinkButton*
/// @param param1 QPointF*
///
QPointF* q_commandlinkbutton_map_from_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const QCommandLinkButton*
/// @param param1 QPoint*
///
QPoint* q_commandlinkbutton_map_from_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const QCommandLinkButton*
/// @param param1 QPointF*
///
QPointF* q_commandlinkbutton_map_to_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const QCommandLinkButton*
/// @param param1 QPoint*
///
QPoint* q_commandlinkbutton_map_to_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const QCommandLinkButton*
/// @param param1 QPointF*
///
QPointF* q_commandlinkbutton_map_from_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const QCommandLinkButton*
/// @param param1 QPoint*
///
QPoint* q_commandlinkbutton_map_from_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const QCommandLinkButton*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_commandlinkbutton_map_to(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const QCommandLinkButton*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_commandlinkbutton_map_to2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const QCommandLinkButton*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_commandlinkbutton_map_from(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const QCommandLinkButton*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_commandlinkbutton_map_from2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self const QCommandLinkButton*
///
QWidget* q_commandlinkbutton_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self const QCommandLinkButton*
///
QWidget* q_commandlinkbutton_native_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self const QCommandLinkButton*
///
QWidget* q_commandlinkbutton_top_level_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self const QCommandLinkButton*
///
const QPalette* q_commandlinkbutton_palette(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QCommandLinkButton*
/// @param palette QPalette*
///
void q_commandlinkbutton_set_palette(void* self, const void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QCommandLinkButton*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_commandlinkbutton_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self const QCommandLinkButton*
///
/// @return enum QPalette__ColorRole
///
int32_t q_commandlinkbutton_background_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QCommandLinkButton*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_commandlinkbutton_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self const QCommandLinkButton*
///
/// @return enum QPalette__ColorRole
///
int32_t q_commandlinkbutton_foreground_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self const QCommandLinkButton*
///
const QFont* q_commandlinkbutton_font(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QCommandLinkButton*
/// @param font QFont*
///
void q_commandlinkbutton_set_font(void* self, const void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self const QCommandLinkButton*
///
QFontMetrics* q_commandlinkbutton_font_metrics(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self const QCommandLinkButton*
///
QFontInfo* q_commandlinkbutton_font_info(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self const QCommandLinkButton*
///
QCursor* q_commandlinkbutton_cursor(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QCommandLinkButton*
/// @param cursor QCursor*
///
void q_commandlinkbutton_set_cursor(void* self, const void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QCommandLinkButton*
/// @param enable bool
///
void q_commandlinkbutton_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_has_mouse_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_under_mouse(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QCommandLinkButton*
/// @param enable bool
///
void q_commandlinkbutton_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_has_tablet_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QCommandLinkButton*
/// @param mask QBitmap*
///
void q_commandlinkbutton_set_mask(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QCommandLinkButton*
/// @param mask QRegion*
///
void q_commandlinkbutton_set_mask2(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self const QCommandLinkButton*
///
QRegion* q_commandlinkbutton_mask(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QCommandLinkButton*
/// @param target QPaintDevice*
///
void q_commandlinkbutton_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QCommandLinkButton*
/// @param painter QPainter*
///
void q_commandlinkbutton_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QCommandLinkButton*
///
QPixmap* q_commandlinkbutton_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self const QCommandLinkButton*
///
QGraphicsEffect* q_commandlinkbutton_graphics_effect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QCommandLinkButton*
/// @param effect QGraphicsEffect*
///
void q_commandlinkbutton_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QCommandLinkButton*
/// @param type enum Qt__GestureType
///
void q_commandlinkbutton_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QCommandLinkButton*
/// @param type enum Qt__GestureType
///
void q_commandlinkbutton_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QCommandLinkButton*
/// @param windowTitle const char*
///
void q_commandlinkbutton_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QCommandLinkButton*
/// @param styleSheet const char*
///
void q_commandlinkbutton_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCommandLinkButton*
///
const char* q_commandlinkbutton_style_sheet(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCommandLinkButton*
///
const char* q_commandlinkbutton_window_title(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QCommandLinkButton*
/// @param icon QIcon*
///
void q_commandlinkbutton_set_window_icon(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self const QCommandLinkButton*
///
QIcon* q_commandlinkbutton_window_icon(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QCommandLinkButton*
/// @param windowIconText const char*
///
void q_commandlinkbutton_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCommandLinkButton*
///
const char* q_commandlinkbutton_window_icon_text(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QCommandLinkButton*
/// @param windowRole const char*
///
void q_commandlinkbutton_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCommandLinkButton*
///
const char* q_commandlinkbutton_window_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QCommandLinkButton*
/// @param filePath const char*
///
void q_commandlinkbutton_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCommandLinkButton*
///
const char* q_commandlinkbutton_window_file_path(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QCommandLinkButton*
/// @param level double
///
void q_commandlinkbutton_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self const QCommandLinkButton*
///
double q_commandlinkbutton_window_opacity(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_is_window_modified(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QCommandLinkButton*
/// @param toolTip const char*
///
void q_commandlinkbutton_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCommandLinkButton*
///
const char* q_commandlinkbutton_tool_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QCommandLinkButton*
/// @param msec int
///
void q_commandlinkbutton_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self const QCommandLinkButton*
///
int32_t q_commandlinkbutton_tool_tip_duration(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QCommandLinkButton*
/// @param statusTip const char*
///
void q_commandlinkbutton_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCommandLinkButton*
///
const char* q_commandlinkbutton_status_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QCommandLinkButton*
/// @param whatsThis const char*
///
void q_commandlinkbutton_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCommandLinkButton*
///
const char* q_commandlinkbutton_whats_this(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCommandLinkButton*
///
const char* q_commandlinkbutton_accessible_name(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QCommandLinkButton*
/// @param name const char*
///
void q_commandlinkbutton_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCommandLinkButton*
///
const char* q_commandlinkbutton_accessible_description(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QCommandLinkButton*
/// @param description const char*
///
void q_commandlinkbutton_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QCommandLinkButton*
/// @param direction enum Qt__LayoutDirection
///
void q_commandlinkbutton_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self const QCommandLinkButton*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_commandlinkbutton_layout_direction(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QCommandLinkButton*
/// @param locale QLocale*
///
void q_commandlinkbutton_set_locale(void* self, const void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self const QCommandLinkButton*
///
QLocale* q_commandlinkbutton_locale(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_is_right_to_left(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_is_left_to_right(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_is_active_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QCommandLinkButton*
/// @param reason enum Qt__FocusReason
///
void q_commandlinkbutton_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self const QCommandLinkButton*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_commandlinkbutton_focus_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QCommandLinkButton*
/// @param policy enum Qt__FocusPolicy
///
void q_commandlinkbutton_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_has_focus(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_commandlinkbutton_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QCommandLinkButton*
/// @param focusProxy QWidget*
///
void q_commandlinkbutton_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self const QCommandLinkButton*
///
QWidget* q_commandlinkbutton_focus_proxy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self const QCommandLinkButton*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_commandlinkbutton_context_menu_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QCommandLinkButton*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_commandlinkbutton_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QCommandLinkButton*
/// @param param1 QCursor*
///
void q_commandlinkbutton_grab_mouse2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QCommandLinkButton*
/// @param key QKeySequence*
///
int32_t q_commandlinkbutton_grab_shortcut(void* self, const void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QCommandLinkButton*
/// @param id int
///
void q_commandlinkbutton_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QCommandLinkButton*
/// @param id int
///
void q_commandlinkbutton_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QCommandLinkButton*
/// @param id int
///
void q_commandlinkbutton_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_commandlinkbutton_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_commandlinkbutton_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_updates_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QCommandLinkButton*
/// @param enable bool
///
void q_commandlinkbutton_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self const QCommandLinkButton*
///
QGraphicsProxyWidget* q_commandlinkbutton_graphics_proxy_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QCommandLinkButton*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_commandlinkbutton_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QCommandLinkButton*
/// @param param1 QRect*
///
void q_commandlinkbutton_update3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QCommandLinkButton*
/// @param param1 QRegion*
///
void q_commandlinkbutton_update4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QCommandLinkButton*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_commandlinkbutton_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QCommandLinkButton*
/// @param param1 QRect*
///
void q_commandlinkbutton_repaint3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QCommandLinkButton*
/// @param param1 QRegion*
///
void q_commandlinkbutton_repaint4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QCommandLinkButton*
/// @param hidden bool
///
void q_commandlinkbutton_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QCommandLinkButton*
///
bool q_commandlinkbutton_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QCommandLinkButton*
/// @param param1 QWidget*
///
void q_commandlinkbutton_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QCommandLinkButton*
/// @param x int
/// @param y int
///
void q_commandlinkbutton_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QCommandLinkButton*
/// @param param1 QPoint*
///
void q_commandlinkbutton_move2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QCommandLinkButton*
/// @param w int
/// @param h int
///
void q_commandlinkbutton_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QCommandLinkButton*
/// @param param1 QSize*
///
void q_commandlinkbutton_resize2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QCommandLinkButton*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_commandlinkbutton_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QCommandLinkButton*
/// @param geometry QRect*
///
void q_commandlinkbutton_set_geometry2(void* self, const void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCommandLinkButton*
///
const char* q_commandlinkbutton_save_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QCommandLinkButton*
/// @param geometry const char*
///
bool q_commandlinkbutton_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_is_visible(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self const QCommandLinkButton*
/// @param param1 QWidget*
///
bool q_commandlinkbutton_is_visible_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_is_hidden(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_is_minimized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_is_maximized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_is_full_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self const QCommandLinkButton*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_commandlinkbutton_window_state(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QCommandLinkButton*
/// @param state flag of enum Qt__WindowState
///
void q_commandlinkbutton_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QCommandLinkButton*
/// @param state flag of enum Qt__WindowState
///
void q_commandlinkbutton_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self const QCommandLinkButton*
///
QSizePolicy* q_commandlinkbutton_size_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QCommandLinkButton*
/// @param sizePolicy QSizePolicy*
///
void q_commandlinkbutton_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QCommandLinkButton*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_commandlinkbutton_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self const QCommandLinkButton*
///
QRegion* q_commandlinkbutton_visible_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QCommandLinkButton*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_commandlinkbutton_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QCommandLinkButton*
/// @param margins QMargins*
///
void q_commandlinkbutton_set_contents_margins2(void* self, const void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self const QCommandLinkButton*
///
QMargins* q_commandlinkbutton_contents_margins(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self const QCommandLinkButton*
///
QRect* q_commandlinkbutton_contents_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self const QCommandLinkButton*
///
QLayout* q_commandlinkbutton_layout(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QCommandLinkButton*
/// @param layout QLayout*
///
void q_commandlinkbutton_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QCommandLinkButton*
/// @param parent QWidget*
///
void q_commandlinkbutton_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QCommandLinkButton*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_commandlinkbutton_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QCommandLinkButton*
/// @param dx int
/// @param dy int
///
void q_commandlinkbutton_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QCommandLinkButton*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_commandlinkbutton_scroll2(void* self, int dx, int dy, const void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self const QCommandLinkButton*
///
QWidget* q_commandlinkbutton_focus_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self const QCommandLinkButton*
///
QWidget* q_commandlinkbutton_next_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self const QCommandLinkButton*
///
QWidget* q_commandlinkbutton_previous_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_accept_drops(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QCommandLinkButton*
/// @param on bool
///
void q_commandlinkbutton_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QCommandLinkButton*
/// @param action QAction*
///
void q_commandlinkbutton_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QCommandLinkButton*
/// @param actions libqt_list of QAction*
///
void q_commandlinkbutton_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QCommandLinkButton*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_commandlinkbutton_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QCommandLinkButton*
/// @param before QAction*
/// @param action QAction*
///
void q_commandlinkbutton_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QCommandLinkButton*
/// @param action QAction*
///
void q_commandlinkbutton_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self const QCommandLinkButton*
///
/// @return libqt_list of QAction*
///
libqt_list q_commandlinkbutton_actions(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QCommandLinkButton*
/// @param text const char*
///
QAction* q_commandlinkbutton_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QCommandLinkButton*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_commandlinkbutton_add_action3(void* self, const void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QCommandLinkButton*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_commandlinkbutton_add_action4(void* self, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QCommandLinkButton*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_commandlinkbutton_add_action5(void* self, const void* icon, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self const QCommandLinkButton*
///
QWidget* q_commandlinkbutton_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QCommandLinkButton*
/// @param type flag of enum Qt__WindowType
///
void q_commandlinkbutton_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self const QCommandLinkButton*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_commandlinkbutton_window_flags(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QCommandLinkButton*
/// @param param1 enum Qt__WindowType
///
void q_commandlinkbutton_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QCommandLinkButton*
/// @param type flag of enum Qt__WindowType
///
void q_commandlinkbutton_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self const QCommandLinkButton*
///
/// @return enum Qt__WindowType
///
int32_t q_commandlinkbutton_window_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uintptr_t
///
QWidget* q_commandlinkbutton_find(uintptr_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QCommandLinkButton*
/// @param x int
/// @param y int
///
QWidget* q_commandlinkbutton_child_at(const void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QCommandLinkButton*
/// @param p QPoint*
///
QWidget* q_commandlinkbutton_child_at2(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QCommandLinkButton*
/// @param p QPointF*
///
QWidget* q_commandlinkbutton_child_at3(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QCommandLinkButton*
/// @param param1 enum Qt__WidgetAttribute
///
void q_commandlinkbutton_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self const QCommandLinkButton*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_commandlinkbutton_test_attribute(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self const QCommandLinkButton*
///
void q_commandlinkbutton_ensure_polished(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self const QCommandLinkButton*
/// @param child QWidget*
///
bool q_commandlinkbutton_is_ancestor_of(const void* self, const void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_auto_fill_background(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QCommandLinkButton*
/// @param enabled bool
///
void q_commandlinkbutton_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self const QCommandLinkButton*
///
QBackingStore* q_commandlinkbutton_backing_store(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self const QCommandLinkButton*
///
QWindow* q_commandlinkbutton_window_handle(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self const QCommandLinkButton*
///
QScreen* q_commandlinkbutton_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QCommandLinkButton*
/// @param screen QScreen*
///
void q_commandlinkbutton_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_commandlinkbutton_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QCommandLinkButton*
/// @param title const char*
///
void q_commandlinkbutton_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, const char* title)
///
void q_commandlinkbutton_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QCommandLinkButton*
/// @param icon QIcon*
///
void q_commandlinkbutton_window_icon_changed(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QIcon* icon)
///
void q_commandlinkbutton_on_window_icon_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QCommandLinkButton*
/// @param iconText const char*
///
void q_commandlinkbutton_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, const char* iconText)
///
void q_commandlinkbutton_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QCommandLinkButton*
/// @param pos QPoint*
///
void q_commandlinkbutton_custom_context_menu_requested(void* self, const void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QPoint* pos)
///
void q_commandlinkbutton_on_custom_context_menu_requested(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self const QCommandLinkButton*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_commandlinkbutton_input_method_hints(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QCommandLinkButton*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_commandlinkbutton_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QCommandLinkButton*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_commandlinkbutton_render22(void* self, void* target, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QCommandLinkButton*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_commandlinkbutton_render3(void* self, void* target, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QCommandLinkButton*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_commandlinkbutton_render4(void* self, void* target, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QCommandLinkButton*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_commandlinkbutton_render23(void* self, void* painter, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QCommandLinkButton*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_commandlinkbutton_render32(void* self, void* painter, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QCommandLinkButton*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_commandlinkbutton_render42(void* self, void* painter, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QCommandLinkButton*
/// @param rectangle QRect*
///
QPixmap* q_commandlinkbutton_grab1(void* self, const void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QCommandLinkButton*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_commandlinkbutton_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QCommandLinkButton*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_commandlinkbutton_grab_shortcut2(void* self, const void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QCommandLinkButton*
/// @param id int
/// @param enable bool
///
void q_commandlinkbutton_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QCommandLinkButton*
/// @param id int
/// @param enable bool
///
void q_commandlinkbutton_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QCommandLinkButton*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_commandlinkbutton_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QCommandLinkButton*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_commandlinkbutton_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_commandlinkbutton_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_commandlinkbutton_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCommandLinkButton*
///
const char* q_commandlinkbutton_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QCommandLinkButton*
/// @param name const char*
///
void q_commandlinkbutton_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QCommandLinkButton*
/// @param b bool
///
bool q_commandlinkbutton_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QCommandLinkButton*
///
QThread* q_commandlinkbutton_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QCommandLinkButton*
/// @param thread QThread*
///
bool q_commandlinkbutton_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCommandLinkButton*
/// @param interval int
///
int32_t q_commandlinkbutton_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCommandLinkButton*
/// @param time int64_t of nanoseconds
///
int32_t q_commandlinkbutton_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QCommandLinkButton*
/// @param id int
///
void q_commandlinkbutton_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QCommandLinkButton*
/// @param id enum Qt__TimerId
///
void q_commandlinkbutton_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QCommandLinkButton*
///
/// @return libqt_list of QObject*
///
libqt_list q_commandlinkbutton_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QCommandLinkButton*
/// @param filterObj QObject*
///
void q_commandlinkbutton_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QCommandLinkButton*
/// @param obj QObject*
///
void q_commandlinkbutton_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_commandlinkbutton_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_commandlinkbutton_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QCommandLinkButton*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_commandlinkbutton_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_commandlinkbutton_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_commandlinkbutton_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCommandLinkButton*
/// @param receiver QObject*
///
bool q_commandlinkbutton_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_commandlinkbutton_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QCommandLinkButton*
///
void q_commandlinkbutton_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QCommandLinkButton*
///
void q_commandlinkbutton_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QCommandLinkButton*
/// @param name const char*
/// @param value QVariant*
///
bool q_commandlinkbutton_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QCommandLinkButton*
/// @param name const char*
///
QVariant* q_commandlinkbutton_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QCommandLinkButton*
///
const char** q_commandlinkbutton_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QCommandLinkButton*
///
QBindingStorage* q_commandlinkbutton_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QCommandLinkButton*
///
const QBindingStorage* q_commandlinkbutton_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self)
///
void q_commandlinkbutton_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QCommandLinkButton*
///
QObject* q_commandlinkbutton_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QCommandLinkButton*
/// @param classname const char*
///
bool q_commandlinkbutton_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCommandLinkButton*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_commandlinkbutton_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCommandLinkButton*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_commandlinkbutton_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_commandlinkbutton_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_commandlinkbutton_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QCommandLinkButton*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_commandlinkbutton_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCommandLinkButton*
/// @param signal const char*
///
bool q_commandlinkbutton_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCommandLinkButton*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_commandlinkbutton_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCommandLinkButton*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_commandlinkbutton_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCommandLinkButton*
/// @param receiver QObject*
/// @param member const char*
///
bool q_commandlinkbutton_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCommandLinkButton*
/// @param param1 QObject*
///
void q_commandlinkbutton_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QObject* param1)
///
void q_commandlinkbutton_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const QCommandLinkButton*
///
int32_t q_commandlinkbutton_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const QCommandLinkButton*
///
int32_t q_commandlinkbutton_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const QCommandLinkButton*
///
int32_t q_commandlinkbutton_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const QCommandLinkButton*
///
int32_t q_commandlinkbutton_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const QCommandLinkButton*
///
int32_t q_commandlinkbutton_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const QCommandLinkButton*
///
int32_t q_commandlinkbutton_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self const QCommandLinkButton*
///
double q_commandlinkbutton_device_pixel_ratio(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const QCommandLinkButton*
///
double q_commandlinkbutton_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const QCommandLinkButton*
///
int32_t q_commandlinkbutton_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self const QCommandLinkButton*
///
int32_t q_commandlinkbutton_depth(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_commandlinkbutton_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_commandlinkbutton_encode_metric_f(int32_t metric, double value);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param param1 QKeyEvent*
///
void q_commandlinkbutton_key_press_event(void* self, void* param1);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param param1 QKeyEvent*
///
void q_commandlinkbutton_super_key_press_event(void* self, void* param1);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QKeyEvent* param1)
///
void q_commandlinkbutton_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param param1 QFocusEvent*
///
void q_commandlinkbutton_focus_in_event(void* self, void* param1);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param param1 QFocusEvent*
///
void q_commandlinkbutton_super_focus_in_event(void* self, void* param1);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QFocusEvent* param1)
///
void q_commandlinkbutton_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param param1 QFocusEvent*
///
void q_commandlinkbutton_focus_out_event(void* self, void* param1);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param param1 QFocusEvent*
///
void q_commandlinkbutton_super_focus_out_event(void* self, void* param1);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QFocusEvent* param1)
///
void q_commandlinkbutton_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param param1 QMouseEvent*
///
void q_commandlinkbutton_mouse_move_event(void* self, void* param1);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param param1 QMouseEvent*
///
void q_commandlinkbutton_super_mouse_move_event(void* self, void* param1);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QMouseEvent* param1)
///
void q_commandlinkbutton_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#hitButton)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCommandLinkButton*
/// @param pos QPoint*
///
bool q_commandlinkbutton_hit_button(const void* self, const void* pos);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#hitButton)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCommandLinkButton*
/// @param pos QPoint*
///
bool q_commandlinkbutton_super_hit_button(const void* self, const void* pos);

/// Inherited from QPushButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpushbutton.html#hitButton)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback bool func(QCommandLinkButton* self, QPoint* pos)
///
void q_commandlinkbutton_on_hit_button(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#checkStateSet)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_check_state_set(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#checkStateSet)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_super_check_state_set(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#checkStateSet)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self)
///
void q_commandlinkbutton_on_check_state_set(void* self, void (*callback)(void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#nextCheckState)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_next_check_state(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#nextCheckState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_super_next_check_state(void* self);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#nextCheckState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self)
///
void q_commandlinkbutton_on_next_check_state(void* self, void (*callback)(void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param e QKeyEvent*
///
void q_commandlinkbutton_key_release_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param e QKeyEvent*
///
void q_commandlinkbutton_super_key_release_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QKeyEvent* e)
///
void q_commandlinkbutton_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param e QMouseEvent*
///
void q_commandlinkbutton_mouse_press_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param e QMouseEvent*
///
void q_commandlinkbutton_super_mouse_press_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QMouseEvent* e)
///
void q_commandlinkbutton_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param e QMouseEvent*
///
void q_commandlinkbutton_mouse_release_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param e QMouseEvent*
///
void q_commandlinkbutton_super_mouse_release_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QMouseEvent* e)
///
void q_commandlinkbutton_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param e QEvent*
///
void q_commandlinkbutton_change_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param e QEvent*
///
void q_commandlinkbutton_super_change_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QEvent* e)
///
void q_commandlinkbutton_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param e QTimerEvent*
///
void q_commandlinkbutton_timer_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param e QTimerEvent*
///
void q_commandlinkbutton_super_timer_event(void* self, void* e);

/// Inherited from QAbstractButton
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QTimerEvent* e)
///
void q_commandlinkbutton_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCommandLinkButton*
///
int32_t q_commandlinkbutton_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCommandLinkButton*
///
int32_t q_commandlinkbutton_super_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback int32_t func(QCommandLinkButton* self)
///
void q_commandlinkbutton_on_dev_type(void* self, int32_t (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param visible bool
///
void q_commandlinkbutton_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param visible bool
///
void q_commandlinkbutton_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, bool visible)
///
void q_commandlinkbutton_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCommandLinkButton*
///
bool q_commandlinkbutton_super_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback bool func(QCommandLinkButton* self)
///
void q_commandlinkbutton_on_has_height_for_width(void* self, bool (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCommandLinkButton*
///
QPaintEngine* q_commandlinkbutton_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCommandLinkButton*
///
QPaintEngine* q_commandlinkbutton_super_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback QPaintEngine* func(QCommandLinkButton* self)
///
void q_commandlinkbutton_on_paint_engine(void* self, QPaintEngine* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QMouseEvent*
///
void q_commandlinkbutton_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QMouseEvent*
///
void q_commandlinkbutton_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QMouseEvent* event)
///
void q_commandlinkbutton_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QWheelEvent*
///
void q_commandlinkbutton_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QWheelEvent*
///
void q_commandlinkbutton_super_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QWheelEvent* event)
///
void q_commandlinkbutton_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QEnterEvent*
///
void q_commandlinkbutton_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QEnterEvent*
///
void q_commandlinkbutton_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QEnterEvent* event)
///
void q_commandlinkbutton_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QEvent*
///
void q_commandlinkbutton_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QEvent*
///
void q_commandlinkbutton_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QEvent* event)
///
void q_commandlinkbutton_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QMoveEvent*
///
void q_commandlinkbutton_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QMoveEvent*
///
void q_commandlinkbutton_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QMoveEvent* event)
///
void q_commandlinkbutton_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QResizeEvent*
///
void q_commandlinkbutton_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QResizeEvent*
///
void q_commandlinkbutton_super_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QResizeEvent* event)
///
void q_commandlinkbutton_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QCloseEvent*
///
void q_commandlinkbutton_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QCloseEvent*
///
void q_commandlinkbutton_super_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QCloseEvent* event)
///
void q_commandlinkbutton_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QContextMenuEvent*
///
void q_commandlinkbutton_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QContextMenuEvent*
///
void q_commandlinkbutton_super_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QContextMenuEvent* event)
///
void q_commandlinkbutton_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QTabletEvent*
///
void q_commandlinkbutton_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QTabletEvent*
///
void q_commandlinkbutton_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QTabletEvent* event)
///
void q_commandlinkbutton_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QActionEvent*
///
void q_commandlinkbutton_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QActionEvent*
///
void q_commandlinkbutton_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QActionEvent* event)
///
void q_commandlinkbutton_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QDragEnterEvent*
///
void q_commandlinkbutton_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QDragEnterEvent*
///
void q_commandlinkbutton_super_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QDragEnterEvent* event)
///
void q_commandlinkbutton_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QDragMoveEvent*
///
void q_commandlinkbutton_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QDragMoveEvent*
///
void q_commandlinkbutton_super_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QDragMoveEvent* event)
///
void q_commandlinkbutton_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QDragLeaveEvent*
///
void q_commandlinkbutton_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QDragLeaveEvent*
///
void q_commandlinkbutton_super_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QDragLeaveEvent* event)
///
void q_commandlinkbutton_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QDropEvent*
///
void q_commandlinkbutton_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QDropEvent*
///
void q_commandlinkbutton_super_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QDropEvent* event)
///
void q_commandlinkbutton_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QShowEvent*
///
void q_commandlinkbutton_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QShowEvent*
///
void q_commandlinkbutton_super_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QShowEvent* event)
///
void q_commandlinkbutton_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QHideEvent*
///
void q_commandlinkbutton_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QHideEvent*
///
void q_commandlinkbutton_super_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QHideEvent* event)
///
void q_commandlinkbutton_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_commandlinkbutton_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_commandlinkbutton_super_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback bool func(QCommandLinkButton* self, libqt_string eventType, void* message, intptr_t* result)
///
void q_commandlinkbutton_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCommandLinkButton*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_commandlinkbutton_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCommandLinkButton*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_commandlinkbutton_super_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback int32_t func(QCommandLinkButton* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_commandlinkbutton_on_metric(void* self, int32_t (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCommandLinkButton*
/// @param painter QPainter*
///
void q_commandlinkbutton_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCommandLinkButton*
/// @param painter QPainter*
///
void q_commandlinkbutton_super_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QPainter* painter)
///
void q_commandlinkbutton_on_init_painter(void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCommandLinkButton*
/// @param offset QPoint*
///
QPaintDevice* q_commandlinkbutton_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCommandLinkButton*
/// @param offset QPoint*
///
QPaintDevice* q_commandlinkbutton_super_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback QPaintDevice* func(QCommandLinkButton* self, QPoint* offset)
///
void q_commandlinkbutton_on_redirected(void* self, QPaintDevice* (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCommandLinkButton*
///
QPainter* q_commandlinkbutton_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCommandLinkButton*
///
QPainter* q_commandlinkbutton_super_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback QPainter* func(QCommandLinkButton* self)
///
void q_commandlinkbutton_on_shared_painter(void* self, QPainter* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param param1 QInputMethodEvent*
///
void q_commandlinkbutton_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param param1 QInputMethodEvent*
///
void q_commandlinkbutton_super_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QInputMethodEvent* param1)
///
void q_commandlinkbutton_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCommandLinkButton*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_commandlinkbutton_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCommandLinkButton*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_commandlinkbutton_super_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback QVariant* func(QCommandLinkButton* self, enum Qt__InputMethodQuery param1)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_commandlinkbutton_on_input_method_query(void* self, QVariant* (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param next bool
///
bool q_commandlinkbutton_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param next bool
///
bool q_commandlinkbutton_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback bool func(QCommandLinkButton* self, bool next)
///
void q_commandlinkbutton_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_commandlinkbutton_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_commandlinkbutton_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback bool func(QCommandLinkButton* self, QObject* watched, QEvent* event)
///
void q_commandlinkbutton_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QChildEvent*
///
void q_commandlinkbutton_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QChildEvent*
///
void q_commandlinkbutton_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QChildEvent* event)
///
void q_commandlinkbutton_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QEvent*
///
void q_commandlinkbutton_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param event QEvent*
///
void q_commandlinkbutton_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QEvent* event)
///
void q_commandlinkbutton_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param signal QMetaMethod*
///
void q_commandlinkbutton_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param signal QMetaMethod*
///
void q_commandlinkbutton_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QMetaMethod* signal)
///
void q_commandlinkbutton_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param signal QMetaMethod*
///
void q_commandlinkbutton_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param signal QMetaMethod*
///
void q_commandlinkbutton_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, QMetaMethod* signal)
///
void q_commandlinkbutton_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self)
///
void q_commandlinkbutton_on_update_micro_focus(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self)
///
void q_commandlinkbutton_on_create(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self)
///
void q_commandlinkbutton_on_destroy(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
///
bool q_commandlinkbutton_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
///
bool q_commandlinkbutton_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback bool func(QCommandLinkButton* self)
///
void q_commandlinkbutton_on_focus_next_child(void* self, bool (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommandLinkButton*
///
bool q_commandlinkbutton_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommandLinkButton*
///
bool q_commandlinkbutton_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback bool func(QCommandLinkButton* self)
///
void q_commandlinkbutton_on_focus_previous_child(void* self, bool (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCommandLinkButton*
///
QObject* q_commandlinkbutton_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCommandLinkButton*
///
QObject* q_commandlinkbutton_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback QObject* func(QCommandLinkButton* self)
///
void q_commandlinkbutton_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCommandLinkButton*
///
int32_t q_commandlinkbutton_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCommandLinkButton*
///
int32_t q_commandlinkbutton_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback int32_t func(QCommandLinkButton* self)
///
void q_commandlinkbutton_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCommandLinkButton*
/// @param signal const char*
///
int32_t q_commandlinkbutton_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCommandLinkButton*
/// @param signal const char*
///
int32_t q_commandlinkbutton_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback int32_t func(QCommandLinkButton* self, const char* signal)
///
void q_commandlinkbutton_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCommandLinkButton*
/// @param signal QMetaMethod*
///
bool q_commandlinkbutton_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCommandLinkButton*
/// @param signal QMetaMethod*
///
bool q_commandlinkbutton_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback bool func(QCommandLinkButton* self, QMetaMethod* signal)
///
void q_commandlinkbutton_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCommandLinkButton*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_commandlinkbutton_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCommandLinkButton*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_commandlinkbutton_super_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommandLinkButton*
/// @param callback double func(QCommandLinkButton* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_commandlinkbutton_on_get_decoded_metric_f(void* self, double (*callback)(const void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QCommandLinkButton*
/// @param callback void func(QCommandLinkButton* self, const char* objectName)
///
void q_commandlinkbutton_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommandlinkbutton.html#dtor.QCommandLinkButton)
///
/// Delete this object from C++ memory.
///
/// @param self QCommandLinkButton*
///
void q_commandlinkbutton_delete(void* self);

#endif
